/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103888d2c; end: 103888d4b;  */

void FUN_103888d2c(void)

{
  FUN_103888c68();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103888d4c; end: 103888fe7;  */

undefined1  [16] FUN_103888d4c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar10 = *(long *)(unaff_x20 + 0x80);
  if ((lVar10 == 0) || (pcVar11 = *(code **)(unaff_x20 + 0x30), pcVar11 == (code *)0x0)) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
    func_0x00010b0aee4c();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x103888fe8);
      (*pcVar11)();
    }
    lVar10 = 0;
    func_0x000107c5ede0();
    lVar13 = *(long *)(lVar10 + -8);
    (**(code **)(lVar13 + 0x38))(puVar8,1,1,lVar10);
    func_0x000107c5fadc(uVar4,uVar3);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    puVar6 = puVar8;
    (**(code **)(lVar13 + 0x30))(puVar8,1,lVar10);
    puVar12 = (undefined1 *)0x0;
    if ((int)puVar6 != 1) {
      func_0x000107c5ed90();
      (**(code **)(lVar13 + 8))(puVar8,lVar10);
      puVar12 = puVar6;
    }
    puVar9 = PTR_PTR_1126cce38;
    func_0x000107c610f8(PTR_PTR_1126cce38);
    func_0x000107c45d54();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar12);
    pcVar7 = *(code **)(unaff_x20 + 0x30);
    pcVar11 = pcVar7;
    if (pcVar7 == (code *)0x0) {
      func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
      func_0x000107c613fc();
      pcVar11 = FUN_1038898cc;
      func_0x0001000bdd8c(FUN_1038898cc,0);
      pcVar7 = (code *)0x0;
    }
    func_0x000107c6157c(pcVar7);
    puVar5 = puVar9;
    pcVar7 = pcVar11;
    FUN_1038898d4(puVar9,pcVar11);
    func_0x000107c61574(pcVar11);
    func_0x000107c61170(puVar9);
  }
  else {
    puVar9 = *(undefined **)(lVar10 + 0x10);
    func_0x000107c6157c(lVar10);
    func_0x000107c6157c(pcVar11);
    func_0x000107c61174(puVar9);
    uVar4 = 0x112fa5570;
    func_0x0001000285a8(0x112fa5570,&UNK_10dc18938);
    uVar3 = 0x10388ade8;
    func_0x0001000cb480(0x10388ade8,0,uVar4);
    uVar4 = *(undefined8 *)(lVar10 + 0x38);
    uVar1 = *(undefined8 *)(lVar10 + 0x40);
    func_0x000107c61434(uVar1);
    puVar5 = puVar9;
    pcVar7 = pcVar11;
    FUN_103888fe8(puVar9,pcVar11,uVar3,uVar4,uVar1);
    func_0x000107c61574(lVar10);
    func_0x000107c61574(pcVar11);
    func_0x000107c61170(puVar9);
    func_0x000107c61574(uVar3);
    func_0x000107c6142c(uVar1);
  }
  auVar14._8_8_ = pcVar7;
  auVar14._0_8_ = puVar5;
  return auVar14;
}



/* Entry: 103888fe8; end: 1038898cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_103888fe8(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x12;
  undefined **ppuVar17;
  undefined8 *puVar18;
  long unaff_x20;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined **ppuVar23;
  undefined1 auVar24 [16];
  undefined8 auStack_1a0 [4];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 auStack_120 [3];
  long lStack_108;
  undefined **ppuStack_100;
  long alStack_f8 [3];
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  ppuVar1 = param_1;
  auStack_1a0[3] = param_4;
  uStack_180 = param_5;
  uStack_178 = param_3;
  uStack_148 = param_2;
  func_0x000107c3f70c();
  func_0x000107c61180();
  ppuVar23 = ppuVar1;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar1);
  uVar2 = param_2;
  func_0x000100077018(ppuVar23,param_2,*(undefined8 *)(unaff_x20 + 0x28));
  uStack_14c = SUB84(ppuVar23,0);
  func_0x000107c6142c(param_2);
  ppuVar1 = param_1;
  func_0x000107c3f70c();
  func_0x000107c61180();
  ppuVar23 = ppuVar1;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar1);
  FUN_10388a27c(ppuVar23,uVar2);
  ppuStack_160 = ppuVar23;
  func_0x000107c6142c(uVar2);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x0001000285a8(0x112ea2b00,&UNK_10db560c0);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = uVar21;
  func_0x000107c4f758();
  func_0x000107c61180();
  uVar11 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112ea2b08,&UNK_10dab4f20);
  uVar2 = uVar21;
  func_0x000107c4f754();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  func_0x0001000285a8(0x112ea2b10,&UNK_10dab4f28);
  func_0x000107c412bc();
  func_0x000107c61180();
  uVar4 = uVar21;
  func_0x0001000bda74();
  func_0x000107c61170(uVar21);
  puStack_98 = *(undefined **)(unaff_x20 + 0x90);
  ppuStack_a0 = *(undefined ***)(unaff_x20 + 0x88);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar5 = &UNK_1106a15c0;
  func_0x000107c613fc(&UNK_1106a15c0,0x78,7);
  *(undefined ***)(puVar5 + 0x10) = param_1;
  uVar19 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(puVar5 + 0x18) = uVar19;
  uVar19 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(puVar5 + 0x28) = uVar19;
  uVar19 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(puVar5 + 0x40) = *(undefined8 *)(unaff_x20 + 0xb0);
  *(undefined8 *)(puVar5 + 0x38) = uVar19;
  *(undefined8 *)(puVar5 + 0x48) = uVar2;
  *(undefined8 *)(puVar5 + 0x50) = uVar21;
  *(undefined8 *)(puVar5 + 0x58) = uVar11;
  *(undefined8 *)(puVar5 + 0x60) = uVar3;
  *(undefined8 *)(puVar5 + 0x68) = uVar4;
  *(undefined8 *)(puVar5 + 0x70) = uVar22;
  func_0x0001000285a8(0x112fa56b0,&UNK_10dc18a10);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar21);
  func_0x000107c6157c(uVar22);
  func_0x000107c61174();
  uStack_158 = uVar11;
  func_0x000107c6157c(uVar11);
  uStack_168 = uVar3;
  func_0x000107c6157c(uVar3);
  uStack_170 = uVar4;
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  FUN_10388ac9c(&ppuStack_a0,&uStack_d0,0x112fa4890,&UNK_10dc17fb8);
  pcVar6 = FUN_10388ac74;
  func_0x0001000bdd8c(FUN_10388ac74,puVar5);
  puVar5 = &UNK_1106a15e8;
  pcStack_138 = pcVar6;
  func_0x000107c613fc(&UNK_1106a15e8,0x18,7);
  *(undefined ***)(puVar5 + 0x10) = param_1;
  func_0x000107c61174();
  uVar2 = 0x10388ac8c;
  puVar13 = puVar5;
  func_0x0001000cb480(0x10388ac8c,puVar5,PTR___sSbN_11034dd40);
  uStack_140 = uVar2;
  func_0x000107c61574(puVar5);
  puVar5 = puStack_98;
  ppuVar1 = ppuStack_a0;
  if (puStack_98 == (undefined *)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f31158);
    ppuVar23 = (undefined **)0x0;
LAB_1038893fc:
    func_0x000107c6142c(puVar13);
  }
  else {
    ppuVar17 = &PTR____CFConstantStringClassReference_110f31158;
    func_0x000107c61434(puStack_98);
    ppuVar23 = ppuVar17;
    func_0x000107c5faec();
    if ((ppuVar1 == ppuVar23) && (puVar5 == puVar13)) {
      puVar14 = puVar13;
      func_0x000107c6142c(puVar5);
      func_0x000107c6142c(puVar13);
LAB_103889384:
      ppuVar1 = param_1;
      func_0x000107c3f70c();
      func_0x000107c61180();
      ppuVar23 = ppuVar1;
      func_0x000107c5faec();
      puVar13 = puVar14;
      func_0x000107c61170(ppuVar1);
      func_0x000107c5faec();
      if ((ppuVar23 == ppuVar17) && (puVar14 == puVar13)) {
        func_0x000107c6142c(puVar14);
        ppuVar23 = (undefined **)0x1;
      }
      else {
        func_0x000107c605b8(ppuVar23,puVar14,ppuVar17,puVar13,0);
        func_0x000107c6142c(puVar14);
      }
      goto LAB_1038893fc;
    }
    puVar14 = puVar5;
    func_0x000107c605b8(ppuVar1,puVar5,ppuVar23,puVar13,0);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar13);
    ppuVar23 = (undefined **)0x0;
    if (((ulong)ppuVar1 & 1) != 0) goto LAB_103889384;
  }
  auStack_1a0[1] = *(undefined8 *)(unaff_x20 + 0x10);
  auStack_1a0[2] = *(undefined8 *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x60);
  puVar5 = &UNK_1106a1610;
  func_0x000107c613fc(&UNK_1106a1610,0x18,7);
  *(undefined ***)(puVar5 + 0x10) = param_1;
  func_0x000107c61174();
  pcVar6 = pcStack_138;
  func_0x000107c6157c(pcStack_138);
  func_0x000107c6157c(uVar11);
  uVar4 = uStack_140;
  func_0x000107c6157c(uStack_140);
  uVar2 = 0x112fa56b8;
  func_0x0001000285a8(0x112fa56b8,&UNK_10dc18a20);
  uVar21 = 0x10388ac94;
  func_0x0001000cb480(0x10388ac94,puVar5,uVar2);
  func_0x000107c61574(puVar5);
  lVar7 = 0;
  func_0x000103874e9c();
  lVar8 = lVar7;
  func_0x000107c613fc();
  lVar9 = 0x112fa56c0;
  func_0x0001000285a8(0x112fa56c0,&UNK_10dc18a28);
  uVar15 = (ulong)*(uint *)(lVar9 + 0x30);
  func_0x000107c613fc();
  uVar22 = 1;
  func_0x00010008747c();
  uVar3 = uStack_178;
  uVar2 = uStack_180;
  uVar19 = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x48) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(code **)(lVar8 + 0x10) = pcVar6;
  *(undefined8 *)(lVar8 + 0x18) = uStack_178;
  *(undefined8 *)(lVar8 + 0x20) = uVar11;
  *(undefined8 *)(lVar8 + 0x28) = uVar4;
  *(undefined8 *)(lVar8 + 0x30) = uVar22;
  *(undefined8 *)(lVar8 + 0x68) = uVar21;
  *(undefined8 *)(lVar8 + 0x38) = auStack_1a0[3];
  *(undefined8 *)(lVar8 + 0x40) = uStack_180;
  if (((ulong)ppuVar23 & 1) != 0) {
    uVar19 = *(undefined8 *)(unaff_x20 + 0xf0);
    func_0x000107c6157c(uVar19);
  }
  uVar20 = *(ulong *)(unaff_x20 + 0x100);
  func_0x000107c61434(uVar2);
  func_0x000107c6157c(uVar3);
  ppuVar1 = param_1;
  func_0x000107c3f70c(param_1);
  func_0x000107c61180();
  ppuVar23 = ppuVar1;
  func_0x000107c5faec();
  func_0x000107c61170(ppuVar1);
  if (*(long *)(uVar20 + 0x10) != 0) {
    func_0x000107c61434(uVar20);
    uVar16 = uVar15;
    func_0x000100029284(ppuVar23);
    if ((uVar16 & 1) != 0) {
      func_0x00010388ace4(*(long *)(uVar20 + 0x38) + (long)ppuVar23 * 0x28,&uStack_d0);
      func_0x000107c6142c(uVar15);
      uVar15 = uVar20;
      goto LAB_1038895cc;
    }
    func_0x000107c6142c(uVar20);
  }
  uStack_b0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
LAB_1038895cc:
  func_0x000107c6142c(uVar15);
  ppuStack_d8 = &PTR_DAT_11069fab0;
  lVar10 = 0;
  alStack_f8[0] = lVar8;
  lStack_e0 = lVar7;
  FUN_103886898();
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_f8,lVar7);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar18 = (undefined8 *)((long)auStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar18);
  uVar2 = auStack_1a0[1];
  auStack_120[0] = *puVar18;
  ppuStack_100 = &PTR_DAT_11069fab0;
  *(undefined8 *)(lVar10 + _DAT_112fa5380) = auStack_1a0[1];
  lStack_108 = lVar7;
  func_0x00010388ace4(auStack_120,lVar10 + _DAT_112fa5388);
  func_0x000107c61614(lVar10 + _DAT_112fa5430,0);
  *(undefined8 *)(lVar10 + _DAT_112fa5438) = 0;
  *(undefined8 *)(lVar10 + _DAT_112fa5440) = 0;
  lVar9 = _DAT_112fa5448;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar8);
  func_0x000107c6157c(uVar2);
  uVar11 = 1;
  func_0x00010008747c();
  uVar21 = uStack_148;
  uVar2 = auStack_1a0[2];
  *(undefined8 *)(lVar10 + lVar9) = uVar11;
  *(undefined8 *)(lVar10 + _DAT_112fa5450) = 0;
  *(undefined8 *)(lVar10 + _DAT_112fa5458) = 0;
  *(undefined8 *)(lVar10 + _DAT_112fa5460) = 0;
  *(undefined8 *)(lVar10 + _DAT_112fa5468) = 0;
  *(undefined1 *)(lVar10 + _DAT_112fa5470) = 0;
  *(undefined1 *)(lVar10 + _DAT_112fa5478) = 1;
  *(undefined ***)(lVar10 + _DAT_112fa53f8) = param_1;
  *(undefined8 *)(lVar10 + _DAT_112fa5408) = auStack_1a0[2];
  *(undefined8 *)(lVar10 + _DAT_112fa5410) = uStack_148;
  *(byte *)(lVar10 + _DAT_112fa5418) = (byte)uStack_14c & 1;
  *(undefined ***)(lVar10 + _DAT_112fa5420) = ppuStack_160;
  *(undefined8 *)(lVar10 + _DAT_112fa5400) = uVar19;
  FUN_10388ac9c(&uStack_d0,lVar10 + _DAT_112fa5428,0x112fa03f8,&UNK_10dc15aa0);
  uVar11 = 0;
  FUN_103887b54();
  puVar5 = PTR_s_init_1125d9248;
  lStack_130 = lVar10;
  uStack_128 = uVar11;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar21);
  plVar12 = &lStack_130;
  func_0x000107c61154(plVar12,puVar5);
  func_0x000107c61574(lVar8);
  func_0x000107c61574(uStack_158);
  func_0x000107c61574(uStack_168);
  func_0x000107c61574(uStack_170);
  func_0x000107c61574(pcStack_138);
  func_0x000107c61574(uStack_140);
  FUN_103887f48(&uStack_d0);
  func_0x0001000834e4(auStack_120);
  func_0x0001000834e4(alStack_f8);
  auVar24._8_8_ = &PTR_DAT_1106a12e0;
  auVar24._0_8_ = plVar12;
  return auVar24;
}



/* Entry: 1038898cc; end: 1038898d3;  */

void FUN_1038898cc(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1038898d4; end: 10388a27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1038898d4(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined1 auVar16 [16];
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar4 = param_1;
  uVar12 = param_2;
  func_0x000107c3f70c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  uVar11 = uVar12;
  FUN_10388a27c();
  func_0x000107c6142c(uVar12);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = param_1;
  func_0x000107c3f70c();
  func_0x000107c61180();
  lVar6 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  uVar12 = uVar11;
  func_0x000100077018(lVar6,uVar11,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(uVar11);
  func_0x0001000d224c(&uStack_90);
  bVar3 = (byte)uStack_90;
  uVar11 = *(ulong *)(unaff_x20 + 0x90);
  if (uVar11 == 0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f31158);
    func_0x000107c6142c(uVar12);
    uVar10 = uVar12;
LAB_103889a1c:
    uVar14 = 0;
  }
  else {
    ppuVar15 = *(undefined ***)(unaff_x20 + 0x88);
    ppuVar13 = &PTR____CFConstantStringClassReference_110f31158;
    func_0x000107c61434(uVar11);
    func_0x000107c5faec();
    if (ppuVar15 == ppuVar13 && uVar11 == uVar12) {
      uVar10 = uVar12;
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uVar12);
    }
    else {
      uVar10 = uVar11;
      func_0x000107c605b8(ppuVar15,uVar11,ppuVar13,uVar12,0);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uVar12);
      if (((ulong)ppuVar15 & 1) == 0) goto LAB_103889a1c;
    }
    uVar14 = *(undefined8 *)(unaff_x20 + 0xf0);
    func_0x000107c6157c(uVar14);
  }
  uVar12 = *(ulong *)(unaff_x20 + 0x100);
  lVar4 = param_1;
  func_0x000107c3f70c(param_1);
  func_0x000107c61180();
  lVar7 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  if (*(long *)(uVar12 + 0x10) != 0) {
    func_0x000107c61434(uVar12);
    uVar11 = uVar10;
    func_0x000100029284(lVar7);
    if ((uVar11 & 1) != 0) {
      func_0x00010388ace4(*(long *)(uVar12 + 0x38) + lVar7 * 0x28,&uStack_90);
      func_0x000107c6142c(uVar10);
      uVar10 = uVar12;
      goto LAB_103889ac4;
    }
    func_0x000107c6142c(uVar12);
  }
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
LAB_103889ac4:
  func_0x000107c6142c(uVar10);
  lVar7 = 0;
  FUN_103885cb0();
  func_0x000107c610f8();
  *(undefined8 *)(lVar7 + _DAT_112fa5308) = 0;
  *(undefined1 *)(lVar7 + _DAT_112fa5310) = 0;
  *(undefined8 *)(lVar7 + _DAT_112fa52f8) = uVar8;
  *(byte *)(lVar7 + _DAT_112fa5300) = bVar3 ^ 1;
  func_0x000107c61614(lVar7 + _DAT_112fa5430,0);
  *(undefined8 *)(lVar7 + _DAT_112fa5438) = 0;
  *(undefined8 *)(lVar7 + _DAT_112fa5440) = 0;
  lVar4 = _DAT_112fa5448;
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar8);
  uVar8 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar7 + lVar4) = uVar8;
  *(undefined8 *)(lVar7 + _DAT_112fa5450) = 0;
  *(undefined8 *)(lVar7 + _DAT_112fa5458) = 0;
  *(undefined8 *)(lVar7 + _DAT_112fa5460) = 0;
  *(undefined8 *)(lVar7 + _DAT_112fa5468) = 0;
  *(undefined1 *)(lVar7 + _DAT_112fa5470) = 0;
  *(undefined1 *)(lVar7 + _DAT_112fa5478) = 1;
  *(long *)(lVar7 + _DAT_112fa53f8) = param_1;
  *(undefined8 *)(lVar7 + _DAT_112fa5408) = uVar1;
  *(ulong *)(lVar7 + _DAT_112fa5410) = param_2;
  *(byte *)(lVar7 + _DAT_112fa5418) = (byte)lVar6 & 1;
  *(long *)(lVar7 + _DAT_112fa5420) = lVar5;
  *(undefined8 *)(lVar7 + _DAT_112fa5400) = uVar14;
  func_0x00010388ac9c(&uStack_90,lVar7 + _DAT_112fa5428,0x112fa03f8,&UNK_10dc15aa0);
  uVar8 = 0;
  FUN_103887b54();
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar7;
  uStack_98 = uVar8;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(param_2);
  plVar9 = &lStack_a0;
  func_0x000107c61154(plVar9,puVar2);
  FUN_103887f48(&uStack_90);
  auVar16._8_8_ = &PTR_DAT_1106a12e0;
  auVar16._0_8_ = plVar9;
  return auVar16;
}



/* Entry: 10388a27c; end: 10388a3bf;  */

undefined1 * FUN_10388a27c(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
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
  
  puVar4 = &uStack_190;
  func_0x0001000d224c(&uStack_f0);
  uVar3 = uStack_f0;
  lVar5 = *(long *)(uStack_f0 + 0x10);
  if (lVar5 != 0) {
    lVar6 = 0x20;
    do {
      puVar1 = (ulong *)(uVar3 + lVar6);
      uStack_e8 = puVar1[1];
      uVar7 = *puVar1;
      uStack_d8 = puVar1[3];
      uStack_e0 = puVar1[2];
      uStack_c8 = puVar1[5];
      uStack_d0 = puVar1[4];
      uStack_b8 = puVar1[7];
      uStack_c0 = puVar1[6];
      uStack_a8 = puVar1[9];
      uStack_b0 = puVar1[8];
      uStack_98 = puVar1[0xb];
      uStack_a0 = puVar1[10];
      uStack_88 = puVar1[0xd];
      uStack_90 = puVar1[0xc];
      uStack_78 = puVar1[0xf];
      uStack_80 = puVar1[0xe];
      uStack_68 = puVar1[0x11];
      uStack_70 = puVar1[0x10];
      uStack_58 = puVar1[0x13];
      uStack_60 = puVar1[0x12];
      uStack_f0 = uVar7;
      if (((uVar7 == param_1) && (uStack_e8 == param_2)) ||
         (func_0x000107c605b8(uVar7,uStack_e8,param_1,param_2,0), (uVar7 & 1) != 0)) {
        func_0x00010388ad28(&uStack_f0,&uStack_190);
        func_0x000107c6142c(uVar3);
        uVar2 = *(undefined8 *)(unaff_x20 + 0xd8);
        lVar5 = *(long *)(unaff_x20 + 0xe0);
        func_0x0001000a8868(unaff_x20 + 0xc0,uVar2);
        uStack_128 = uStack_78;
        uStack_130 = uStack_80;
        uStack_118 = uStack_68;
        uStack_120 = uStack_70;
        uStack_108 = uStack_58;
        uStack_110 = uStack_60;
        uStack_168 = uStack_b8;
        uStack_170 = uStack_c0;
        uStack_158 = uStack_a8;
        uStack_160 = uStack_b0;
        uStack_148 = uStack_98;
        uStack_150 = uStack_a0;
        uStack_138 = uStack_88;
        uStack_140 = uStack_90;
        uStack_188 = uStack_d8;
        uStack_190 = uStack_e0;
        uStack_178 = uStack_c8;
        uStack_180 = uStack_d0;
        (**(code **)(lVar5 + 8))(&uStack_190,uVar2,lVar5);
        func_0x00010388ad64(&uStack_f0);
        return (undefined1 *)puVar4;
      }
      lVar6 = lVar6 + 0xa0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  func_0x000107c6142c(uVar3);
  return (undefined1 *)0x0;
}



/* Entry: 10388a3c0; end: 10388a4eb;  */

void FUN_10388a3c0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [48];
  
  puVar3 = param_3;
  func_0x000107c3f70c();
  func_0x000107c61180();
  uVar4 = param_2;
  func_0x000107c5faec();
  func_0x000107c61170(param_2);
  lVar1 = 0;
  func_0x000103875e10();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x90) = 1;
  *(undefined8 *)(lVar2 + 0x88) = 1;
  *(undefined8 *)(lVar2 + 0x10) = uVar4;
  *(undefined8 **)(lVar2 + 0x18) = puVar3;
  uVar4 = *param_3;
  uVar6 = param_3[3];
  uVar5 = param_3[2];
  *(undefined8 *)(lVar2 + 0x28) = param_3[1];
  *(undefined8 *)(lVar2 + 0x20) = uVar4;
  *(undefined8 *)(lVar2 + 0x38) = uVar6;
  *(undefined8 *)(lVar2 + 0x30) = uVar5;
  uVar4 = param_3[4];
  *(undefined8 *)(lVar2 + 0x48) = param_3[5];
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  *(undefined8 *)(lVar2 + 0x50) = param_4;
  *(undefined8 *)(lVar2 + 0x58) = param_5;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined8 *)(lVar2 + 0x68) = param_6;
  *(undefined8 *)(lVar2 + 0x70) = param_7;
  *(undefined8 *)(lVar2 + 0x78) = param_8;
  *(undefined8 *)(lVar2 + 0x80) = param_9;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069fb30;
  *param_1 = lVar2;
  FUN_10388ac9c(param_3,auStack_90,0x112fa4890,&UNK_10dc17fb8);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_4);
  return;
}



/* Entry: 10388a4ec; end: 10388a567;  */

void FUN_10388a4ec(byte *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_3;
  func_0x000107c3f70c();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  func_0x000100077018(uVar1,uVar2,*param_2);
  func_0x000107c6142c(uVar2);
  *param_1 = (byte)uVar1 & 1;
  return;
}



/* Entry: 10388a568; end: 10388a5ff;  */

void FUN_10388a568(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  uVar4 = uVar1;
  func_0x0001000a8868(param_2,uVar1);
  func_0x000107c3f70c();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  (**(code **)(lVar2 + 8))(uVar3,uVar4,uVar1,lVar2);
  func_0x000107c6142c(uVar4);
  *param_1 = uVar3;
  return;
}



/* Entry: 10388a600; end: 10388a63f;  */

void FUN_10388a600(void)

{
  FUN_103888d4c();
  return;
}



/* Entry: 10388a640; end: 10388a7fb;  */

ulong FUN_10388a640(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388a724);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388a728);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x00010388ad98(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10388a7fc);
  (*pcVar2)();
}



/* Entry: 10388a7fc; end: 10388a997;  */

ulong FUN_10388a7fc(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388a8cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388a8d0);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001038882d0(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x0001038882d0(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f170880);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10388a998);
  (*pcVar2)();
}



/* Entry: 10388a998; end: 10388a9e7;  */

void FUN_10388a998(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10388ab18();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10388a9e8; end: 10388ab17;  */

undefined * FUN_10388a9e8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10388ab18);
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
    func_0x0001038200e4();
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
    uVar5 = 0x112f9fad8;
    func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
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



/* Entry: 10388ab18; end: 10388ac53;  */

undefined *
FUN_10388ab18(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             undefined8 param_6,undefined8 param_7)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10388ac54);
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
    (*param_5)();
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
    uVar5 = 0;
    func_0x00010388ad98(0,param_6,param_7);
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



/* Entry: 10388ac54; end: 10388ac73;  */

void FUN_10388ac54(void)

{
  func_0x000107c61168(&PTR_PTR_112fa55b8);
  return;
}



/* Entry: 10388ac74; end: 10388ac9b;  */

void FUN_10388ac74(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [48];
  
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
  puVar1 = (undefined8 *)(unaff_x20 + 0x18);
  puVar11 = puVar1;
  func_0x000107c3f70c();
  func_0x000107c61180();
  uVar12 = uVar10;
  func_0x000107c5faec();
  func_0x000107c61170(uVar10);
  lVar8 = 0;
  func_0x000103875e10();
  lVar9 = lVar8;
  func_0x000107c613fc();
  *(undefined8 *)(lVar9 + 0x90) = 1;
  *(undefined8 *)(lVar9 + 0x88) = 1;
  *(undefined8 *)(lVar9 + 0x10) = uVar12;
  *(undefined8 **)(lVar9 + 0x18) = puVar11;
  uVar12 = *puVar1;
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(lVar9 + 0x20) = uVar12;
  *(undefined8 *)(lVar9 + 0x38) = uVar13;
  *(undefined8 *)(lVar9 + 0x30) = uVar10;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(lVar9 + 0x48) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(lVar9 + 0x40) = uVar12;
  *(undefined8 *)(lVar9 + 0x50) = uVar2;
  *(undefined8 *)(lVar9 + 0x58) = uVar5;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined8 *)(lVar9 + 0x68) = uVar3;
  *(undefined8 *)(lVar9 + 0x70) = uVar6;
  *(undefined8 *)(lVar9 + 0x78) = uVar4;
  *(undefined8 *)(lVar9 + 0x80) = uVar7;
  param_1[3] = lVar8;
  param_1[4] = (long)&PTR_DAT_11069fb30;
  *param_1 = lVar9;
  FUN_10388ac9c(puVar1,auStack_90,0x112fa4890,&UNK_10dc17fb8);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 10388ac9c; end: 10388add7;  */

undefined8 FUN_10388ac9c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10388add8; end: 10388adef;  */

void FUN_10388add8(long param_1,long param_2)

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



/* Entry: 10388adf0; end: 10388aecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10388adf0(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_10381db40(param_1,unaff_x20 + _DAT_112fa56c8);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 10388aed0; end: 10388af2f; -[_TtC18SCARBarPluginScope29ARBarFeatureProviderContainer init] */

void FUN_10388aed0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarPluginScope.ARBarFeatureProviderContainer",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388aefc);
  (*pcVar1)();
}



/* Entry: 10388af30; end: 10388af3f; -[_TtC18SCARBarPluginScope29ARBarFeatureProviderContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388af30(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112fa56c8))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa56c8));
  return;
}



/* Entry: 10388af40; end: 10388af5f;  */

void FUN_10388af40(void)

{
  func_0x000107c61168(&PTR_PTR_1128f7460);
  return;
}



/* Entry: 10388af60; end: 10388aff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388af60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa56f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10388aff8; end: 10388b057; -[SCARBarPluginScope init] */

void FUN_10388aff8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarPluginScope.SCARBarPluginScope",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388b024);
  (*pcVar1)();
}



/* Entry: 10388b058; end: 10388b067; -[SCARBarPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388b058(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa56f8));
  return;
}



/* Entry: 10388b068; end: 10388b0ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388b068(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa5728) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10388b100; end: 10388b15f; -[SCARBarPostCapturePluginScope init] */

void FUN_10388b100(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarPluginScope.SCARBarPostCapturePluginScope",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388b12c);
  (*pcVar1)();
}



/* Entry: 10388b160; end: 10388b16f; -[SCARBarPostCapturePluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388b160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa5728));
  return;
}



/* Entry: 10388b170; end: 10388b18f;  */

void FUN_10388b170(void)

{
  func_0x000107c61168(&PTR_PTR_1128f75e0);
  return;
}



/* Entry: 10388b190; end: 10388b227;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388b190(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fa5758) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10388b228; end: 10388b287; -[SCARBarSnapEditorPluginScope init] */

void FUN_10388b228(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCARBarPluginScope.SCARBarSnapEditorPluginScope",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388b254);
  (*pcVar1)();
}



/* Entry: 10388b288; end: 10388b297; -[SCARBarSnapEditorPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388b288(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fa5758));
  return;
}



/* Entry: 10388b298; end: 10388b2b7;  */

void FUN_10388b298(void)

{
  func_0x000107c61168(&PTR_PTR_1128f76a0);
  return;
}



/* Entry: 10388b2b8; end: 10388bba7;  */

undefined * FUN_10388b2b8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar11;
  long unaff_x20;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 auStack_120 [3];
  undefined auStack_108 [8];
  long alStack_100 [2];
  undefined auStack_f0 [8];
  undefined8 auStack_e8 [3];
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_90;
  
  puVar2 = (undefined *)0x0;
  uStack_c0 = param_1;
  func_0x000107c5ede0();
  lVar14 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  puVar6 = (undefined *)((long)&puStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar17 = 0x112d36580;
  puVar19 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar9 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_b8 = lVar9 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (lVar9 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_c8 = lVar10 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (lVar10 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar18 = (undefined *)(lVar15 - extraout_x12_03);
  lVar17 = unaff_x20;
  func_0x000107c4b334();
  func_0x000107c61180();
  if (lVar17 == 0) {
    lVar17 = 0;
    puVar19 = (undefined *)0xe000000000000000;
  }
  else {
    lVar13 = lVar17;
    func_0x000107c5c964();
    func_0x000107c61180();
    func_0x000107c61170(lVar17);
    lVar17 = lVar13;
    func_0x000107c5faec(lVar13);
    func_0x000107c61170(lVar13);
  }
  puVar7 = puVar19;
  func_0x000107c5edd0(puVar18,lVar17);
  func_0x000107c6142c(puVar19);
  lVar17 = unaff_x20;
  func_0x000107c4b298();
  func_0x000107c61180();
  if (lVar17 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c5de98();
    puVar19 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar17);
  }
  lVar17 = unaff_x20;
  func_0x000107c4b334();
  func_0x000107c61180();
  puStack_b0 = puVar18;
  if (lVar17 == 0) {
    puStack_90 = (undefined *)0x0;
    puVar6 = puVar18;
    lVar15 = lStack_b8;
  }
  else {
    lVar13 = lVar17;
    func_0x000107c51f38();
    if (lVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10388bba4);
      (*pcVar12)();
    }
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puStack_d0 = puVar19;
    if (lVar13 != 0) {
      lVar11 = 0;
      do {
        lVar3 = lVar17;
        func_0x000107c5d7f0(lVar17);
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5faec();
        func_0x000107c61170(lVar3);
        lVar3 = 0x112d36008;
        func_0x0001000285a8(0x112d36008,&UNK_10d900720);
        func_0x000107c613fc();
        *(undefined8 *)(lVar3 + 0x18) = 2;
        *(undefined8 *)(lVar3 + 0x10) = 1;
        *(undefined **)(lVar3 + 0x38) = PTR___sSiN_11034deb0;
        *(undefined **)(lVar3 + 0x40) = PTR___sSis7CVarArgsWP_11034df08;
        *(long *)(lVar3 + 0x20) = lVar11;
        puVar19 = puVar7;
        func_0x000107c5fb00(lVar4,puVar7,lVar3);
        func_0x000107c6142c(puVar7);
        func_0x000107c5edd0(lVar15,lVar4,puVar19);
        func_0x000107c6142c(puVar19);
        puVar7 = (undefined *)0x1;
        lVar3 = lVar15;
        (**(code **)(lVar14 + 0x30))(lVar15,1,puVar2);
        if ((int)lVar3 == 1) {
          func_0x0001000293e4(lVar15);
        }
        else {
          pcVar12 = *(code **)(lVar14 + 0x20);
          (*pcVar12)(puVar6,lVar15,puVar2);
          puVar19 = puVar16;
          func_0x000107c61558();
          puVar7 = puVar16;
          if (((ulong)puVar19 & 1) == 0) {
            puVar7 = (undefined *)0x0;
            func_0x000101023b20(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
          }
          uVar1 = *(ulong *)(puVar7 + 0x10);
          puVar16 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
            puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
            func_0x000101023b20(puVar16,uVar1 + 1,1,puVar7);
          }
          *(ulong *)(puVar16 + 0x10) = uVar1 + 1;
          puVar7 = puVar6;
          (*pcVar12)(puVar16 + *(long *)(lVar14 + 0x48) * uVar1 +
                               ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)),puVar6,puVar2
                    );
        }
        lVar11 = lVar11 + 1;
      } while (lVar13 != lVar11);
    }
    lVar13 = lStack_c8;
    puVar6 = puStack_b0;
    lVar15 = lStack_b8;
    puVar19 = puStack_d0;
    if (*(long *)(puVar16 + 0x10) != 0) {
      (**(code **)(lVar14 + 0x10))
                (lStack_c8,
                 puVar16 + ((ulong)*(byte *)(lVar14 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar14 + 0x50) ^ 0xffffffffffffffff)),puVar2);
      puVar6 = puStack_b0;
      func_0x0001000293e4(puStack_b0);
      (**(code **)(lVar14 + 0x38))(lVar13,0,1,puVar2);
      puVar7 = puVar6;
      func_0x0001001021cc(lVar13,puVar6);
      lVar15 = lStack_b8;
      puVar19 = puStack_d0;
      if (*(long *)(puVar16 + 0x10) != 0) {
        puVar5 = puVar16;
        func_0x000107c61434(puVar16);
        FUN_103176d28();
        puVar7 = (undefined *)0x2;
        func_0x000107c61430(puVar16,2);
        puVar16 = puVar5;
      }
    }
    lVar13 = lVar17;
    func_0x000107c51f2c(lVar17);
    lVar11 = unaff_x20;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    puVar5 = puVar7;
    if (lVar11 == 0) {
      func_0x000107c5faec();
      puVar5 = puVar7;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar7);
    }
    lVar3 = lVar17;
    func_0x000107c5d7f0();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    puStack_90 = PTR_PTR_1126ccd38;
    func_0x000107c610f8();
    puVar5 = puVar16;
    puVar7 = puVar2;
    func_0x000107c5fc48(puVar16);
    func_0x000107c490a4((double)lVar13 / 1000.0);
    func_0x000107c61170(lVar17);
    func_0x000107c6142c(puVar16);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar5);
  }
  lVar17 = unaff_x20;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  puVar16 = puVar7;
  if (lVar17 == 0) {
    func_0x000107c5faec();
    puVar16 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  lVar13 = unaff_x20;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar13 == 0) {
    lVar11 = 0;
    puVar16 = (undefined *)0x0;
  }
  else {
    lVar11 = lVar13;
    func_0x000107c5faec();
    func_0x000107c61170(lVar13);
  }
  uVar8 = 1;
  lStack_b8 = lVar17;
  (**(code **)(lVar14 + 0x38))(lVar10,1,1,puVar2);
  lVar17 = unaff_x20;
  func_0x000107c44fb4();
  func_0x000107c61180();
  if (lVar17 == 0) {
    lVar13 = 0;
    uVar8 = 0xe000000000000000;
  }
  else {
    lVar13 = lVar17;
    func_0x000107c5faec();
    func_0x000107c61170(lVar17);
  }
  func_0x000107c5edd0(lVar15,lVar13,uVar8);
  func_0x000107c6142c(uVar8);
  lVar13 = lVar9;
  func_0x000100029394(puVar6,lVar9);
  lVar17 = unaff_x20;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if (lVar17 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar13);
  }
  puVar6 = PTR_PTR_1126ccd40;
  func_0x000107c610f8();
  *(undefined8 *)(puVar18 + -0x10) = 0;
  func_0x000107c46e50();
  func_0x000107c61170(lVar17);
  lVar17 = unaff_x20;
  func_0x000107c4a4d8();
  uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)lVar17);
  lVar17 = unaff_x20;
  func_0x000107c4b298();
  func_0x000107c61180();
  lVar13 = lVar17;
  func_0x000107c3e62c();
  func_0x000107c61180();
  func_0x000107c61170(lVar17);
  func_0x000107c4a4c0();
  if (puVar16 == (undefined *)0x0) {
    func_0x000107c61174(puVar19);
    lVar11 = 0;
  }
  else {
    func_0x000107c61174(puVar19);
    func_0x000107c5fadc(lVar11,puVar16);
    func_0x000107c6142c(puVar16);
  }
  pcVar12 = *(code **)(lVar14 + 0x30);
  lVar17 = lVar10;
  (*pcVar12)(lVar10,1,puVar2);
  if ((int)lVar17 == 1) {
    lVar17 = 0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar14 + 8))(lVar10,puVar2);
  }
  lVar10 = lVar15;
  (*pcVar12)(lVar15,1,puVar2);
  if ((int)lVar10 == 1) {
    lVar10 = 0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar14 + 8))(lVar15,puVar2);
  }
  lVar15 = lVar9;
  (*pcVar12)(lVar9,1,puVar2);
  if ((int)lVar15 == 1) {
    lVar15 = 0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar14 + 8))(lVar9,puVar2);
  }
  puVar2 = PTR_PTR_1126ccc38;
  func_0x000107c610f8();
  *(undefined8 *)(puVar18 + -0x18) = 0;
  *(undefined8 *)(puVar18 + -0x10) = 0;
  *(undefined8 *)(puVar18 + -8) = 0;
  puVar18[-0x20] = (char)unaff_x20;
  *(undefined **)(puVar18 + -0x30) = puVar19;
  *(long *)(puVar18 + -0x28) = lVar13;
  puVar18[-0x38] = (char)uStack_c0;
  *(undefined **)(puVar18 + -0x48) = puVar6;
  *(undefined8 *)(puVar18 + -0x40) = 0;
  *(undefined **)(puVar18 + -0x50) = puStack_90;
  func_0x000107c490a0();
  func_0x000107c61170(puStack_90);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar19);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lStack_b8);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar15);
  if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10388bba8);
    (*pcVar12)();
  }
  func_0x0001000293e4(puStack_b0);
  func_0x000107c61170(puVar19);
  return puVar2;
}



/* Entry: 10388bba8; end: 10388bbab;  */

void FUN_10388bba8(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar1 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(lVar1 + 0x40) = *(undefined8 *)(lVar2 + 0x20);
  func_0x000107c61604(lVar1 + 0x38,uVar3);
  if ((param_2 & 1) == 0) {
    func_0x000107c614a8(lVar2);
    func_0x000107c615e8(uVar3);
  }
  else {
    func_0x000107c615e8(*(undefined8 *)(lVar2 + 0x18));
    func_0x000107c614a8(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar2);
  return;
}



/* Entry: 10388bbac; end: 10388bdf7;  */

/* WARNING: Possible PIC construction at 0x00010388bc00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388bc7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388bc98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010388c5fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010388bc9c) */
/* WARNING: Removing unreachable block (ram,0x00010388bc80) */
/* WARNING: Removing unreachable block (ram,0x00010388bc04) */
/* WARNING: Removing unreachable block (ram,0x00010388bcd4) */
/* WARNING: Removing unreachable block (ram,0x00010388bc0c) */
/* WARNING: Removing unreachable block (ram,0x00010388c600) */
/* WARNING: Removing unreachable block (ram,0x00010381e510) */
/* WARNING: Removing unreachable block (ram,0x00010381e538) */
/* WARNING: Removing unreachable block (ram,0x00010381e514) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_10388bbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x60) = param_4;
  func_0x00010388cd30();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1,uVar3,uVar2,uVar4);
    return;
  }
  return;
}



/* Entry: 10388bdf8; end: 10388bfc7;  */

long FUN_10388bdf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c61614(unaff_x20 + 0x38,0);
  uVar1 = 0;
  func_0x0001000c6560();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x69) = 0;
  *(undefined8 *)(unaff_x20 + 0x61) = 0;
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x78) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined1 *)(unaff_x20 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_10388bfc8();
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_4);
  return unaff_x20;
}



/* Entry: 10388bfc8; end: 10388c10f;  */

/* WARNING: Possible PIC construction at 0x00010388c074: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010388c078) */

void FUN_10388bfc8(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  plVar1 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x000104884898();
  puVar2 = &UNK_1106a1838;
  func_0x000107c613fc(&UNK_1106a1838,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_10388cd90;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_10388cd90);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x78),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 10388c110; end: 10388c1e3;  */

void FUN_10388c110(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x00010388c16c(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10388c1e4; end: 10388c27b;  */

void FUN_10388c1e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_1;
  uVar3 = *(undefined1 *)(param_1 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c61174(uVar4);
    func_0x00010388cd64(uVar1,uVar2);
    FUN_10388bbac(uVar4,uVar3,uVar1,uVar2);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10388c27c; end: 10388c407;  */

void FUN_10388c27c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  long lStack_78;
  long lStack_70;
  
  func_0x0001000d224c(&lStack_78);
  lVar1 = lStack_78;
  if (lStack_78 != 0) {
    func_0x000104875e28(&lStack_78);
    lVar3 = lStack_78;
    if (lStack_78 != 0) {
      lVar2 = lStack_78;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      param_1 = lVar3;
      if (lVar2 != 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar1);
        return;
      }
    }
    func_0x0001000d224c(&lStack_78);
    if (*(long *)(unaff_x20 + 0x68) == 0) {
      FUN_10388c408();
      func_0x000107c3e2c8(lVar1);
      lVar3 = param_1;
      func_0x000107c61174(param_1);
      func_0x00010388bd04(param_1);
      func_0x000107c61170(lVar3);
    }
    lVar3 = lStack_78;
    func_0x000107c614f0(lStack_78);
    (**(code **)(lStack_70 + 0x28))(1,lVar3,lStack_70);
    lVar3 = *(long *)(unaff_x20 + 0x68);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10388c408);
      (*pcVar4)();
    }
    pcVar4 = *(code **)(*(long *)(lStack_70 + 0x10) + 0x20);
    func_0x000107c61174();
    (*pcVar4)();
    func_0x000107c61170(lVar3);
    func_0x000107c61428(unaff_x20 + 0x38,&lStack_78,0,0);
    func_0x000107c61618(unaff_x20 + 0x38);
    (**(code **)(lStack_70 + 0x58))();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lStack_78);
  }
  return;
}



/* Entry: 10388c408; end: 10388c567;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10388c408(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long lStack_48;
  
  lVar1 = 0;
  FUN_103894668();
  func_0x000107c610f8();
  uVar5 = 0;
  func_0x000107c469a4(0,0,0,0);
  func_0x000107c61180();
  func_0x000107c5a050();
  *(undefined1 *)(lVar1 + _DAT_112fa5d10) = *(undefined1 *)(unaff_x20 + 0x30);
  FUN_10389431c();
  lVar2 = lVar1;
  func_0x000107c44d9c(lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x0001000d224c(&uStack_50);
  uVar4 = CONCAT44(uStack_4c,uStack_50);
  func_0x000107c614f0(uVar4);
  (**(code **)(lStack_48 + 0x38))();
  func_0x000107c61170(uVar4);
  lVar3 = lVar2;
  func_0x000107c40290(uVar5,lVar2);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  uVar5 = 0;
  func_0x0001013c6c44(0);
  uStack_58 = 0x3f800000;
  uStack_54 = 0x437a0000;
  uVar4 = 0x112d7a740;
  FUN_10388ccf0(0x112d7a740,&SUB_1013c6c44,
                PTR___sSo16UILayoutPrioritya5UIKit01_C23NumericRawRepresentableACMc_110351670);
  func_0x000107c5f16c(&uStack_50,&uStack_54,&uStack_58,uVar5,uVar4);
  func_0x000107c5784c(uStack_50,lVar3);
  func_0x000107c521e8(lVar3);
  func_0x000107c61170(lVar3);
  return lVar1;
}



/* Entry: 10388c568; end: 10388c5bf;  */

void FUN_10388c568(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_10388c5c0(unaff_x20 + 0x38);
  func_0x00010388c5e4(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10388c5c0; end: 10388c617;  */

undefined8 FUN_10388c5c0(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10388c618; end: 10388c637;  */

void FUN_10388c618(void)

{
  FUN_10388c568();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10388c638; end: 10388c67b;  */

void FUN_10388c638(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x38,auStack_38,0,0);
  func_0x000107c61618(lVar1 + 0x38);
  return;
}



/* Entry: 10388c67c; end: 10388c83b;  */

void FUN_10388c67c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *unaff_x20;
  func_0x000107c61428(lVar1 + 0x38,auStack_48,1,0);
  *(undefined8 *)(lVar1 + 0x40) = param_2;
  func_0x000107c61604(lVar1 + 0x38,param_1);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 10388c83c; end: 10388c937;  */

void FUN_10388c83c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  func_0x000104875e28(&lStack_50);
  if (lStack_50 != 0) {
    lVar1 = lStack_50;
    func_0x000107c614f0(lStack_50);
    func_0x000107c4ff34(lStack_50);
    lVar2 = lStack_50;
    func_0x000107c402b8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000100847984();
      lVar3 = 0;
      func_0x000107c5fc54(0,lVar2);
      lVar2 = lVar3;
      func_0x000107c5fc48();
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c413a0();
    func_0x000107c61170(lVar2);
    (**(code **)(lStack_48 + 0x28))(0,lVar1,lStack_48);
    (**(code **)(*(long *)(lStack_48 + 0x10) + 0x20))(param_1,lVar1);
    func_0x000107c61170(lStack_50);
  }
  return;
}



/* Entry: 10388c938; end: 10388ca07;  */

undefined8 FUN_10388c938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x68);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c438d4(lVar1);
      lVar3 = lVar2;
      func_0x000107c40784(lVar2);
      func_0x000107c61180();
      func_0x000107c40718(param_1,param_2,param_3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(lVar3);
      return param_1;
    }
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 10388ca08; end: 10388caa3;  */

void FUN_10388ca08(void)

{
  FUN_10388c83c();
  return;
}



/* Entry: 10388caa4; end: 10388cac3;  */

void FUN_10388caa4(void)

{
  func_0x000107c61168(&PTR_PTR_112fa57d0);
  return;
}



/* Entry: 10388cac4; end: 10388cb6f;  */

void FUN_10388cac4(void)

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



/* Entry: 10388cb70; end: 10388cbbb;  */

void FUN_10388cb70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  puVar1 = &UNK_10dc18c1c;
  func_0x000107c61520(&UNK_10dc18c1c,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ_11034f618)
            (uVar2,uVar3,param_3,puVar1);
  return;
}



/* Entry: 10388cbbc; end: 10388cbe7;  */

void FUN_10388cbbc(void)

{
  FUN_10388ccf0(0x112fa5878,&SUB_100ef8bfc,&UNK_10dc18bac);
  return;
}



/* Entry: 10388cbe8; end: 10388cc23;  */

void FUN_10388cbe8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dc18c1c;
  func_0x000107c61520(&UNK_10dc18c1c,param_1);
  func_0x000107c5f0a8(param_1,puVar1);
  return;
}



/* Entry: 10388cc24; end: 10388cc6b;  */

void FUN_10388cc24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10dc18c1c;
  func_0x000107c61520(&UNK_10dc18c1c);
  func_0x000107c5f0a4(param_1,param_2,puVar1);
  return;
}



/* Entry: 10388cc6c; end: 10388ccc3;  */

void FUN_10388cc6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  puVar1 = &UNK_10dc18c1c;
  func_0x000107c61520(&UNK_10dc18c1c,param_2);
  func_0x000107c5f0a4(auStack_68,param_2,puVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10388ccc4; end: 10388ccef;  */

void FUN_10388ccc4(void)

{
  FUN_10388ccf0(0x112fa5880,&SUB_100ef8bfc,&UNK_10dc18bd8);
  return;
}



/* Entry: 10388ccf0; end: 10388cd8f;  */

void FUN_10388ccf0(long *param_1,code *param_2,long param_3)

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



/* Entry: 10388cd90; end: 10388cd97;  */

void FUN_10388cd90(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x00010388c16c(uVar1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 10388cd98; end: 10388cdd7;  */

void FUN_10388cd98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fa5888 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc19630;
  func_0x000107c61520(&UNK_10dc19630,&UNK_1106a2658);
  puRam0000000112fa5888 = puVar1;
  return;
}



/* Entry: 10388cdd8; end: 10388cdf3;  */

void FUN_10388cdd8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar5 = *param_1;
  uVar3 = *(undefined1 *)(param_1 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar4 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c61174(uVar5);
    func_0x00010388cd64(uVar1,uVar2);
    FUN_10388bbac(uVar5,uVar3,uVar1,uVar2);
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 10388cdf4; end: 10388ce37;  */

void FUN_10388cdf4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 10388ce38; end: 10388ce63;  */

void FUN_10388ce38(void)

{
  FUN_10388ccf0(0x112fa5898,0x10388cde0,&UNK_10dc18ca8);
  return;
}



/* Entry: 10388ce64; end: 10388ce73;  */

void FUN_10388ce64(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10388ce74; end: 10388cf17;  */

undefined8 FUN_10388ce74(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_10388e604(param_1,param_2);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 10388cf18; end: 10388cff3;  */

void FUN_10388cf18(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  long *plStack_48;
  
  func_0x0001000d224c(&plStack_48);
  plVar1 = plStack_48;
  func_0x000100471e0c(plStack_48,1);
  func_0x000107c615e8(plStack_48);
  puVar2 = &UNK_1106a1998;
  func_0x000107c613fc(&UNK_1106a1998,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcVar3 = FUN_10388eeec;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_10388eeec);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x48),pcVar4,puVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 10388cff4; end: 10388d04f;  */

void FUN_10388cff4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10388d050(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10388d050; end: 10388d2ff;  */

void FUN_10388d050(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uStack_70;
  ulong uStack_68;
  
  uStack_68 = param_1;
  func_0x000107c61434();
  puVar4 = &uStack_68;
  FUN_10388ec7c();
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  *(ulong **)(unaff_x20 + 0x40) = puVar4;
  func_0x000107c6142c(uVar7);
  uVar2 = uStack_68;
  uVar8 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if ((uVar8 & 0x8000000000000000) != 0) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  if (uVar2 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar2 & 0xffffffffffffff8;
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar5 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar9 == uVar5) {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (uVar8 >> 0x3e == 0) {
      uVar5 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar5 = uVar9;
      if ((uVar8 & 0x8000000000000000) != 0) {
        uVar5 = uVar8;
      }
      func_0x000107c60480();
    }
    uVar13 = uVar2 & 0xffffffffffffff8;
    uVar1 = uVar13;
    if ((uVar2 & 0x8000000000000000) != 0) {
      uVar1 = uVar2;
    }
    func_0x000107c61434(uVar8);
    lVar12 = 4;
    do {
      if (lVar12 - uVar5 == 4) {
        func_0x000107c6142c();
        goto LAB_10388d24c;
      }
      uVar11 = lVar12 - 4;
      if ((uVar8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar9 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10388d2cc);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(uVar8 + lVar12 * 8);
        func_0x000107c615f0(uVar10);
      }
      else {
        uVar10 = uVar11;
        FUN_10382016c(uVar11,uVar8);
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10388d2c8);
        (*pcVar3)();
      }
      if (uVar2 >> 0x3e == 0) {
        uVar6 = *(ulong *)(uVar13 + 0x10);
      }
      else {
        uVar6 = uVar1;
        func_0x000107c60480();
      }
      if (uVar11 == uVar6) {
        func_0x000107c6142c(uVar8);
        func_0x000107c615e8();
        uVar8 = uVar10;
        goto LAB_10388d24c;
      }
      if ((uVar2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar13 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10388d2d0);
          (*pcVar3)();
        }
        uVar11 = *(ulong *)(uVar2 + lVar12 * 8);
        func_0x000107c615f0(uVar11);
      }
      else {
        FUN_10382016c(uVar11,uVar2);
      }
      func_0x000107c615e8(uVar11);
      func_0x000107c615e8(uVar10);
      lVar12 = lVar12 + 1;
    } while (uVar10 == uVar11);
    func_0x000107c6142c(uVar8);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  *(ulong *)(unaff_x20 + 0x38) = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c6142c(uVar7);
  uVar8 = *(ulong *)(unaff_x20 + 0x38);
  uStack_70 = uVar8;
  func_0x000107c61434(uVar8);
  func_0x000100087c34(&uStack_70);
  func_0x000107c6142c();
LAB_10388d24c:
  FUN_10388d300();
  uStack_70 = uVar8;
  func_0x000100087c34(&uStack_70);
  func_0x000107c615e8();
  func_0x00010388d310();
  uStack_70 = uVar8;
  func_0x000100087c34(&uStack_70);
  func_0x000107c6142c(uVar2);
  func_0x000107c615e8(uVar8);
  return;
}



/* Entry: 10388d300; end: 10388d31f;  */

ulong FUN_10388d300(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar3);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10388d424);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c615f0(uVar6);
      }
      else {
        uVar6 = uVar5;
        FUN_10382016c(uVar5,uVar3);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388d3e8);
        (*pcVar1)();
      }
      uVar7 = uVar5 + 1;
      uVar2 = uVar6;
      func_0x000107c3e08c();
      if (uRam0000000112fa5ad8 == uVar2 || uRam0000000112fa5ae0 == uVar2) {
        func_0x000107c6142c(uVar3);
        return uVar6;
      }
      func_0x000107c615e8(uVar6);
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar4);
  }
  func_0x000107c6142c(uVar3);
  return 0;
}



/* Entry: 10388d320; end: 10388d43b;  */

ulong FUN_10388d320(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar3);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10388d424);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c615f0(uVar6);
      }
      else {
        uVar6 = uVar5;
        FUN_10382016c(uVar5,uVar3);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388d3e8);
        (*pcVar1)();
      }
      uVar7 = uVar5 + 1;
      uVar2 = uVar6;
      func_0x000107c3e08c();
      if (*param_1 == uVar2 || *param_2 == uVar2) {
        func_0x000107c6142c(uVar3);
        return uVar6;
      }
      func_0x000107c615e8(uVar6);
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar4);
  }
  func_0x000107c6142c(uVar3);
  return 0;
}



/* Entry: 10388d43c; end: 10388d4af;  */

void FUN_10388d43c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 10388d4b0; end: 10388d5ef;  */

void FUN_10388d4b0(undefined8 *param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar5 = *param_2;
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x00010389f1c8(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388d5f0);
      (*pcVar2)();
    }
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c615f0(uVar4);
      }
      else {
        uVar4 = uVar7;
        FUN_10382016c(uVar7,uVar5);
      }
      uVar3 = uVar4;
      func_0x000107c3e098();
      func_0x000107c61180();
      func_0x000107c615e8(uVar4);
      uVar4 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
        func_0x00010389f1c8(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
      }
      uVar7 = uVar7 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
      *(ulong *)(puVar1 + uVar4 * 8 + 0x20) = uVar3;
    } while (uVar6 != uVar7);
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 10388d5f0; end: 10388d623;  */

void FUN_10388d5f0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c3e098();
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10388d624; end: 10388d70b;  */

ulong FUN_10388d624(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar2 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c60480();
  }
  uVar2 = 0;
  if ((-1 < (long)param_1) && (uVar2 = 0, (long)param_1 < (long)uVar3)) {
    uVar2 = *(ulong *)(unaff_x20 + 0x38);
    if ((uVar2 & 0xc000000000000001) == 0) {
      if (*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388d70c);
        (*pcVar1)();
      }
      param_1 = *(ulong *)(uVar2 + param_1 * 8 + 0x20);
      func_0x000107c615f0(param_1);
    }
    else {
      func_0x000107c61434(uVar2);
      FUN_10382016c(param_1,uVar2);
      func_0x000107c6142c(uVar2);
    }
    uVar2 = param_1;
    func_0x000107c3e098(param_1);
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
  return uVar2;
}



/* Entry: 10388d70c; end: 10388d723;  */

long FUN_10388d70c(long param_1)

{
  long lVar1;
  
  FUN_10388d300();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3e098();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
  return lVar1;
}



/* Entry: 10388d724; end: 10388d76b;  */

long FUN_10388d724(long param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  (*param_3)();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c3e098();
    func_0x000107c61180();
    func_0x000107c615e8(param_1);
  }
  return lVar1;
}



/* Entry: 10388d76c; end: 10388d797;  */

ulong FUN_10388d76c(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar2 >> 0x3e == 0) {
    return *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  uVar1 = uVar2 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < uVar2) {
    uVar1 = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss18_CocoaArrayWrapperV8endIndexSivg_11034e8f0)(uVar1);
  return uVar1;
}



/* Entry: 10388d798; end: 10388d927;  */

void FUN_10388d798(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fa58a0;
  func_0x0001000285a8(0x112fa58a0,&UNK_10dc18d40);
  func_0x0001000bfde0(FUN_10388d4b0,0,uVar1);
  return;
}



/* Entry: 10388d928; end: 10388dc17;  */

undefined1  [16] FUN_10388d928(ulong param_1)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  uVar4 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    uVar7 = uVar4;
    if (0x7fffffffffffffff < uVar3) {
      uVar7 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar3);
  uVar6 = 0;
  do {
    if (uVar7 == uVar6) {
      uVar6 = 0;
      uVar5 = 1;
LAB_10388d9d4:
      func_0x000107c6142c(uVar3);
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar6;
      return auVar9;
    }
    if ((uVar3 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar4 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388da00);
        (*pcVar1)();
      }
      uVar8 = *(ulong *)(uVar3 + uVar6 * 8 + 0x20);
      func_0x000107c615f0(uVar8);
    }
    else {
      uVar8 = uVar6;
      FUN_10382016c(uVar6,uVar3);
    }
    func_0x000107c615e8(uVar8);
    if (uVar8 == param_1) {
      uVar5 = 0;
      goto LAB_10388d9d4;
    }
    bVar2 = SCARRY8(uVar6,1);
    uVar6 = uVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10388da04);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 10388dc18; end: 10388e06b;  */

ulong FUN_10388dc18(ulong param_1,undefined *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = *(ulong *)(unaff_x20 + 0x38);
  if (uVar6 >> 0x3e == 0) {
    uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar8 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar8 = uVar6;
    }
    func_0x000107c60480();
  }
  if (uVar8 != 0) {
    func_0x000107c61434(uVar6);
    lVar7 = 4;
    do {
      uVar5 = lVar7 - 4;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10388de08);
          (*pcVar1)();
        }
        uVar9 = *(ulong *)(uVar6 + lVar7 * 8);
        func_0x000107c615f0(uVar9);
      }
      else {
        uVar9 = uVar5;
        FUN_10382016c(uVar5,uVar6);
      }
      uVar2 = uVar9;
      puVar4 = PTR_s_respondsToSelector__11262c7e0;
      func_0x000107c61150(uVar9,PTR_s_respondsToSelector__11262c7e0,PTR_s_identifier_1125d7178);
      if ((uVar2 & 1) == 0) {
        func_0x000107c615e8(uVar9);
      }
      else {
        uVar2 = uVar9;
        func_0x000107c44fdc();
        func_0x000107c61180();
        uVar3 = uVar2;
        func_0x000107c5faec();
        func_0x000107c61170(uVar2);
        if ((uVar3 == param_1) && (puVar4 == param_2)) {
          func_0x000107c6142c(uVar6);
          func_0x000107c6142c(puVar4);
          func_0x000107c615e8(uVar9);
LAB_10388ddb0:
          uVar6 = *(ulong *)(unaff_x20 + 0x38);
          if (uVar6 >> 0x3e == 0) {
            uVar8 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar8 = uVar6 & 0xffffffffffffff8;
            if (0x7fffffffffffffff < uVar6) {
              uVar8 = uVar6;
            }
            func_0x000107c60480();
          }
          if ((long)uVar8 <= (long)uVar5) {
            return 0;
          }
          uVar6 = *(ulong *)(unaff_x20 + 0x38);
          if ((uVar6 & 0xc000000000000001) != 0) {
            func_0x000107c61434(uVar6);
            FUN_10382016c(uVar5,uVar6);
            func_0x000107c6142c(uVar6);
            return uVar5;
          }
          if (*(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10388de88);
            (*pcVar1)();
          }
          uVar6 = *(ulong *)(uVar6 + lVar7 * 8);
          func_0x000107c615f0();
          return uVar6;
        }
        func_0x000107c605b8(uVar3,puVar4,param_1,param_2,0);
        func_0x000107c6142c(puVar4);
        func_0x000107c615e8(uVar9);
        if ((uVar3 & 1) != 0) {
          func_0x000107c6142c(uVar6);
          goto LAB_10388ddb0;
        }
      }
      uVar9 = lVar7 - 3;
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388de04);
        (*pcVar1)();
      }
      lVar7 = lVar7 + 1;
    } while (uVar9 != uVar8);
    func_0x000107c6142c(uVar6);
  }
  return 0;
}



/* Entry: 10388e06c; end: 10388e093;  */

ulong FUN_10388e06c(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar3 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar4 = uVar3;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar3);
  if (uVar4 != 0) {
    uVar5 = 0;
    do {
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10388d424);
          (*pcVar1)();
        }
        uVar6 = *(ulong *)(uVar3 + uVar5 * 8 + 0x20);
        func_0x000107c615f0(uVar6);
      }
      else {
        uVar6 = uVar5;
        FUN_10382016c(uVar5,uVar3);
      }
      if (SCARRY8(uVar5,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388d3e8);
        (*pcVar1)();
      }
      uVar7 = uVar5 + 1;
      uVar2 = uVar6;
      func_0x000107c3e08c();
      if (uRam0000000112fa5ad8 == uVar2 || uRam0000000112fa5ae0 == uVar2) {
        func_0x000107c6142c(uVar3);
        return uVar6;
      }
      func_0x000107c615e8(uVar6);
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar4);
  }
  func_0x000107c6142c(uVar3);
  return 0;
}



/* Entry: 10388e094; end: 10388e233;  */

void FUN_10388e094(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10388e178);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_103899738();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10388e17c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10388e180);
      (*pcVar1)();
    }
    func_0x000107c610b4(lVar4 + *(long *)(lVar4 + 0x10) * 8 + 0x20,param_1 + 0x20,uVar5 << 3);
    func_0x000107c6142c(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388e184);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 10388e234; end: 10388e3ef;  */

ulong FUN_10388e234(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e318);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e31c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10388eef4(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e3f0);
  (*pcVar2)();
}



/* Entry: 10388e3f0; end: 10388e403;  */

ulong FUN_10388e3f0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e318);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e31c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ad7d8;
    func_0x000107c61168(PTR_PTR_1126ad7d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ad7d8;
    func_0x000107c61168(PTR_PTR_1126ad7d8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10388eef4(0,0x112fa4548,&PTR_PTR_1126ad7d8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e3f0);
  (*pcVar2)();
}



/* Entry: 10388e404; end: 10388e59f;  */

ulong FUN_10388e404(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e4d4);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e4d8);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_10389c658(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_10389c658(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f170980);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e5a0);
  (*pcVar2)();
}



/* Entry: 10388e5a0; end: 10388e5b3;  */

ulong FUN_10388e5a0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e318);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e31c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126c8d10;
    func_0x000107c61168(PTR_PTR_1126c8d10);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126c8d10;
    func_0x000107c61168(PTR_PTR_1126c8d10);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10388eef4(0,0x112fa5a00,&PTR_PTR_1126c8d10);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10388e3f0);
  (*pcVar2)();
}



/* Entry: 10388e5b4; end: 10388e603;  */

/* WARNING: Removing unreachable block (ram,0x00010383a9c4) */
/* WARNING: Removing unreachable block (ram,0x00010383a9e8) */
/* WARNING: Removing unreachable block (ram,0x00010383a9cc) */
/* WARNING: Removing unreachable block (ram,0x00010383aabc) */
/* WARNING: Removing unreachable block (ram,0x00010383a9d8) */
/* WARNING: Removing unreachable block (ram,0x00010383a9e0) */
/* WARNING: Removing unreachable block (ram,0x00010383aa2c) */
/* WARNING: Removing unreachable block (ram,0x00010383aa40) */
/* WARNING: Removing unreachable block (ram,0x00010383aa4c) */
/* WARNING: Removing unreachable block (ram,0x00010383aa54) */

ulong FUN_10388e5b4(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar3 = param_1;
    }
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar4 = param_1;
    }
    func_0x000107c60480(uVar4,uVar3);
  }
  uVar2 = uVar4;
  FUN_10383a7ac(uVar4,uVar3,0x1038200e4);
  if (-1 < (long)uVar4) {
    FUN_10383aafc(0,uVar4,uVar2 + 0x20,param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10383aabc);
  (*pcVar1)();
}



/* Entry: 10388e604; end: 10388e707;  */

void FUN_10388e604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  func_0x0001000285a8(0x112f9f198,&UNK_10dc14d10);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  lVar3 = 0x112fa5788;
  func_0x0001000285a8(0x112fa5788,&UNK_10dc18de0);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  func_0x000107c613fc(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  uVar2 = 1;
  func_0x00010008747c();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_10388cf18();
  return;
}



/* Entry: 10388e708; end: 10388e81b;  */

undefined1  [16] FUN_10388e708(ulong param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  
  uVar11 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    uVar9 = uVar11;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  uVar8 = 0;
  do {
    if (uVar8 == uVar9) {
      uVar8 = 0;
      uVar4 = 1;
LAB_10388e7d0:
      auVar12._8_8_ = uVar4;
      auVar12._0_8_ = uVar8;
      return auVar12;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar11 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388e804);
        (*pcVar1)();
      }
      uVar10 = *(ulong *)(param_1 + 0x20 + uVar8 * 8);
      func_0x000107c615f0(uVar10);
    }
    else {
      uVar10 = uVar8;
      FUN_10382016c(uVar8,param_1);
    }
    uVar3 = uVar10;
    func_0x000107c3e08c();
    lVar5 = *(long *)(param_2 + 0x10);
    puVar6 = (ulong *)(param_2 + 0x20);
    while (lVar5 != 0) {
      uVar7 = *puVar6;
      lVar5 = lVar5 + -1;
      puVar6 = puVar6 + 1;
      if (uVar7 == uVar3) {
        func_0x000107c615e8(uVar10);
        uVar4 = 0;
        goto LAB_10388e7d0;
      }
    }
    func_0x000107c615e8(uVar10);
    bVar2 = SCARRY8(uVar8,1);
    uVar8 = uVar8 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10388e81c);
      (*pcVar1)();
    }
  } while( true );
}



/* Entry: 10388e81c; end: 10388eaaf;  */

void FUN_10388e81c(ulong *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x21;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar9 = *param_1;
  uVar3 = uVar9;
  lVar6 = param_2;
  FUN_10388e708();
  if (unaff_x21 == 0) {
    if (((uint)lVar6 & 0xff) == 1) {
      if (uVar9 >> 0x3e != 0) {
        uVar3 = uVar9 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar9) {
          uVar3 = uVar9;
        }
        func_0x000107c60480(uVar3);
      }
    }
    else {
      if (SCARRY8(uVar3,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10388eab0);
        (*pcVar1)();
      }
      uVar11 = uVar3;
      while( true ) {
        uVar11 = uVar11 + 1;
        if (uVar9 >> 0x3e == 0) {
          uVar4 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar4 = uVar9 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar9) {
            uVar4 = uVar9;
          }
          func_0x000107c60480();
        }
        if (uVar11 == uVar4) break;
        if ((uVar9 & 0xc000000000000001) == 0) {
          if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea74);
            (*pcVar1)();
          }
          if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea78);
            (*pcVar1)();
          }
          uVar4 = *(ulong *)(uVar9 + uVar11 * 8 + 0x20);
          func_0x000107c615f0(uVar4);
        }
        else {
          uVar4 = uVar11;
          FUN_10382016c(uVar11,uVar9);
        }
        uVar12 = uVar4;
        func_0x000107c3e08c();
        lVar6 = *(long *)(param_2 + 0x10);
        puVar7 = (ulong *)(param_2 + 0x20);
        do {
          if (lVar6 == 0) {
            func_0x000107c615e8(uVar4);
            if (uVar3 != uVar11) {
              if ((uVar9 & 0xc000000000000001) == 0) {
                if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea88);
                  (*pcVar1)();
                }
                uVar4 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
                if (uVar4 <= uVar3) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea8c);
                  (*pcVar1)();
                }
                if (uVar4 <= uVar11) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea90);
                  (*pcVar1)();
                }
                uVar4 = *(ulong *)(uVar9 + 0x20 + uVar3 * 8);
                uVar12 = *(ulong *)(uVar9 + 0x20 + uVar11 * 8);
                func_0x000107c615f0(uVar4);
                func_0x000107c615f0(uVar12);
              }
              else {
                uVar4 = uVar3;
                FUN_10382016c(uVar3,uVar9);
                uVar12 = uVar11;
                FUN_10382016c(uVar11,uVar9);
              }
              uVar8 = uVar9;
              func_0x000107c61550();
              if ((((int)uVar8 == 0) || ((long)uVar9 < 0)) || ((uVar9 >> 0x3e & 1) != 0)) {
                FUN_10388e5b4();
                uVar10 = (uint)(uVar9 >> 0x3e) & 1;
              }
              else {
                uVar10 = 0;
              }
              uVar8 = uVar9 & 0xffffffffffffff8;
              lVar6 = uVar8 + uVar3 * 8;
              uVar5 = *(undefined8 *)(lVar6 + 0x20);
              *(ulong *)(lVar6 + 0x20) = uVar12;
              func_0x000107c615e8(uVar5);
              if (((long)uVar9 < 0) || (uVar10 != 0)) {
                FUN_10388e5b4();
                uVar8 = uVar9 & 0xffffffffffffff8;
              }
              if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea48);
                (*pcVar1)();
              }
              if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea84);
                (*pcVar1)();
              }
              lVar6 = uVar8 + uVar11 * 8;
              uVar5 = *(undefined8 *)(lVar6 + 0x20);
              *(ulong *)(lVar6 + 0x20) = uVar4;
              func_0x000107c615e8(uVar5);
              *param_1 = uVar9;
            }
            bVar2 = SCARRY8(uVar3,1);
            uVar3 = uVar3 + 1;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea80);
              (*pcVar1)();
            }
            goto joined_r0x00010388e8b4;
          }
          uVar8 = *puVar7;
          lVar6 = lVar6 + -1;
          puVar7 = puVar7 + 1;
        } while (uVar8 != uVar12);
        func_0x000107c615e8(uVar4);
joined_r0x00010388e8b4:
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10388ea7c);
          (*pcVar1)();
        }
      }
    }
  }
  return;
}



/* Entry: 10388eab0; end: 10388ebb7;  */

void FUN_10388eab0(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10388eb94);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0x112f9fad8;
  func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10388eb98);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10388ebb0);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10388ebb4);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10388ebb8);
    (*pcVar5)();
  }
  return;
}



/* Entry: 10388ebb8; end: 10388ec7b;  */

/* WARNING: Removing unreachable block (ram,0x00010388ebb4) */

void FUN_10388ebb8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10388ec58);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10388ec70);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10388ec74);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10388ec7c);
      (*pcVar3)();
    }
    func_0x00010388e184(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10388eb94);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0x112f9fad8;
    func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10388eb98);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10388ebb0);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10388ebb4);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10388ec78);
  (*pcVar3)();
}



/* Entry: 10388ec7c; end: 10388eeeb;  */

undefined * FUN_10388ec7c(ulong *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar7 = 0x112fa5240;
  func_0x0001000285a8(0x112fa5240,&UNK_10dc19070);
  lVar3 = lVar7;
  func_0x000107c61538();
  func_0x000107c61538(lVar7,0x112fa5a48);
  FUN_10388e094();
  uVar9 = *param_1;
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      if ((uVar9 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10388ee28);
          (*pcVar2)();
        }
        uVar12 = *(ulong *)(uVar9 + 0x20 + uVar11 * 8);
        func_0x000107c615f0(uVar12);
      }
      else {
        uVar12 = uVar11;
        FUN_10382016c(uVar11,uVar9);
      }
      if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10388ee24);
        (*pcVar2)();
      }
      uVar11 = uVar11 + 1;
      uVar4 = uVar12;
      func_0x000107c3e08c();
      lVar7 = *(long *)(lVar3 + 0x10);
      puVar6 = (ulong *)(lVar3 + 0x20);
      do {
        if (lVar7 == 0) {
          func_0x000107c615e8(uVar12);
          goto joined_r0x00010388ed38;
        }
        uVar8 = *puVar6;
        lVar7 = lVar7 + -1;
        puVar6 = puVar6 + 1;
      } while (uVar8 != uVar4);
      puVar5 = puVar1;
      func_0x000107c61558();
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010388a9cc(0,*(long *)(puVar1 + 0x10) + 1,1);
      }
      uVar4 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
        func_0x00010388a9cc(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar4 + 1;
      *(ulong *)(puVar1 + uVar4 * 8 + 0x20) = uVar12;
joined_r0x00010388ed38:
    } while (uVar11 != uVar10);
  }
  func_0x000107c61434(lVar3);
  puVar6 = param_1;
  FUN_10388e81c(param_1,lVar3);
  func_0x000107c6142c(lVar3);
  uVar9 = *param_1;
  if (uVar9 >> 0x3e == 0) {
    uVar10 = *(ulong *)((uVar9 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar10 = uVar9 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar9) {
      uVar10 = uVar9;
    }
    func_0x000107c60480();
  }
  if ((long)puVar6 <= (long)uVar10) {
    FUN_10388ebb8(puVar6);
    func_0x000107c6142c(lVar3);
    return puVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10388eeec);
  (*pcVar2)();
}



/* Entry: 10388eeec; end: 10388eef3;  */

void FUN_10388eeec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10388d050(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10388eef4; end: 10388ef33;  */

void FUN_10388eef4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10388ef34; end: 10388ef3b;  */

void FUN_10388ef34(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c3e098();
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10388ef3c; end: 10388ef83; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView overrideTintColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388ef3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa5ae8;
  func_0x000107c61428(param_1 + _DAT_112fa5ae8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10388ef84; end: 10388efe7; -[_TtC11SCARBarImpl24SIGFooterPlaceholderView setOverrideTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10388ef84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa5ae8;
  func_0x000107c61428(param_1 + _DAT_112fa5ae8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}


