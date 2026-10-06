/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010f77b8; end: 1010f7b17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1010f77b8(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar11 = &puStack_80;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (lRam0000000112d5dd18 != -1) {
    param_2 = 0x1010f6584;
    func_0x000107c61568(0x112d5dd18);
  }
  uVar5 = (ulong)*(byte *)(lRam00000001137ff248 + _DAT_113080f70);
  func_0x0001044e388c();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010f7b18);
    (*pcVar3)();
  }
  uVar6 = param_1;
  uVar12 = param_2;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c5faec();
  uVar13 = uVar12;
  func_0x000107c61170(uVar6);
  if (uVar5 == uVar7 && param_2 == uVar12) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar12);
  }
  else {
    uVar6 = param_2;
    func_0x000107c605b8(uVar5,param_2,uVar7,uVar12,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar12);
    uVar13 = uVar6;
    if ((uVar5 & 1) == 0) goto LAB_1010f7900;
  }
  uVar5 = param_1;
  func_0x000107c428b4(param_1);
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  lVar8 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar13);
  if ((lVar8 == 0) &&
     (func_0x0001000d224c(&puStack_80), puVar1 = puStack_80, puStack_80 != (undefined *)0x0)) {
    puVar9 = puStack_80;
    func_0x000107c4a1a0();
    if (((ulong)puVar9 & 1) == 0) {
      puVar9 = puVar1;
      func_0x000107c4a198();
      if ((((ulong)puVar9 & 1) == 0) && (puVar9 = puVar1, func_0x000107c4a19c(), (int)puVar9 == 0))
      {
        func_0x000103dac9b4(param_1,4,puVar4,0xd000000000000035,0x800000010ef268c0);
      }
      else {
        FUN_1010f7bd0(param_1,puVar4);
      }
    }
    else {
      puVar9 = &UNK_110384710;
      func_0x000107c613fc(&UNK_110384710,0x18,7);
      func_0x000107c61644(puVar9 + 0x10);
      puVar10 = &UNK_110384738;
      func_0x000107c613fc(&UNK_110384738,0x28,7);
      *(ulong *)(puVar10 + 0x10) = param_1;
      *(undefined **)(puVar10 + 0x18) = puVar4;
      *(undefined **)(puVar10 + 0x20) = puVar9;
      pcStack_60 = FUN_1010fe440;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_100ab47f8;
      puStack_68 = &UNK_110384750;
      puStack_58 = puVar10;
      func_0x000107c60bc4(&puStack_80);
      puVar9 = puStack_58;
      func_0x000107c61174(param_1);
      func_0x000107c61174(puVar4);
      func_0x000107c61574(puVar9);
      func_0x000107c50334(puVar1);
      func_0x000107c60bd0(ppuVar11);
    }
    func_0x000107c615e8(puVar1);
    return puVar4;
  }
LAB_1010f7900:
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x13);
  func_0x000107c6142c(uStack_78);
  puStack_80 = (undefined *)0xd000000000000011;
  uStack_78 = 0x800000010ef268a0;
  uVar5 = param_1;
  func_0x000107c428b4(param_1);
  func_0x000107c61180();
  uVar7 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000107c5fb78(uVar7,uVar6);
  func_0x000107c6142c(uVar6);
  uVar2 = uStack_78;
  func_0x000103dac9b4(param_1,5,puVar4,puStack_80,uStack_78);
  func_0x000107c6142c(uVar2);
  return puVar4;
}



/* Entry: 1010f7b18; end: 1010f7bcf;  */

undefined1  [16] FUN_1010f7b18(ulong param_1,long param_2,undefined1 *param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 auStack_168 [2];
  undefined8 auStack_158 [4];
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 auStack_78 [4];
  long lStack_58;
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if ((param_1 & 1) != 0) {
    puVar8 = &stack0xffffffffffffffb8;
    func_0x000107c61428(param_4 + 0x10,puVar8,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61648();
    if (param_4 != 0) {
      if (param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f7bd0);
        (*pcVar1)();
      }
      FUN_1010f7bd0(param_2,param_3);
      func_0x000107c61574(param_4);
      puVar8 = param_3;
    }
    auVar16._8_8_ = puVar8;
    auVar16._0_8_ = param_4;
    return auVar16;
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f7bcc);
    (*pcVar1)();
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = (undefined *)0xd000000000000035;
  uStack_90 = 0x800000010ef268c0;
  puStack_80 = PTR___sSSN_11034da80;
  func_0x000100102924(&puStack_98,auStack_78);
  func_0x000107c61434(0x800000010ef268c0);
  puVar15 = puVar6;
  func_0x000107c61558(puVar6);
  puStack_98 = puVar6;
  uVar9 = 0x6567617373656d;
  func_0x0001001029e8(auStack_78,0x6567617373656d,0xe700000000000000,puVar15);
  puVar6 = puStack_98;
  lVar2 = param_2;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar14 = PTR___sSSSHsWP_11034da90;
  puVar15 = PTR___sSSN_11034da80;
  lVar3 = param_2;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_2);
  puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar13 = puVar6;
  func_0x000107c5f9dc(puVar6,puVar15,PTR___sypN_11034f1a8 + 8,puVar14);
  auStack_78[0] = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  uVar9 = auStack_78[0];
  func_0x000107c61174(auStack_78[0]);
  if (puVar11 == (undefined *)0x0) {
    uVar4 = uVar9;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
    func_0x000107c614ac(uVar4);
    puVar14 = (undefined *)0x0;
    puVar15 = (undefined *)0xf000000000000000;
  }
  else {
    puVar14 = puVar11;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar11);
  }
  lVar5 = lVar3;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  if ((ulong)puVar15 >> 0x3c < 0xf) {
    puVar13 = puVar14;
    func_0x000107c5ee20(puVar14,puVar15);
    func_0x0001000b44c0(puVar14,puVar15);
  }
  else {
    puVar13 = (undefined *)0x0;
    puVar15 = puVar11;
  }
  puVar14 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar13);
  func_0x000107c4d664(param_3);
  func_0x000107c6142c(puVar6);
  puVar11 = puVar14;
  func_0x000107c61170(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar17._8_8_ = puVar15;
    auVar17._0_8_ = puVar11;
    return auVar17;
  }
  func_0x000107c60e78();
  puStack_c0 = puVar6;
  puStack_a8 = &UNK_103dacc60;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puStack_d0 = puVar14;
  lStack_c8 = lVar5;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61168();
  puVar7 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puStack_e0 = (undefined *)0x0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar15 = puStack_e0;
  func_0x000107c61174();
  if (puVar6 == (undefined *)0x0) {
    puVar6 = puVar15;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar15);
    func_0x000107c61654();
    puVar15 = puVar6;
    func_0x000107c614ac(puVar6);
    puVar11 = (undefined *)0x0;
    puVar12 = (undefined8 *)0xf000000000000000;
    puVar10 = puVar7;
  }
  else {
    puVar11 = puVar6;
    func_0x000107c5ee30();
    puVar15 = puVar6;
    puVar10 = puVar7;
    func_0x000107c61170(puVar6);
    puVar12 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar18._8_8_ = puVar12;
    auVar18._0_8_ = puVar11;
    return auVar18;
  }
  func_0x000107c60e78();
  puStack_f8 = &SUB_103dacd78;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = puVar13;
  lStack_128 = lVar2;
  puStack_120 = puVar14;
  puStack_118 = puVar6;
  puStack_110 = puVar12;
  puStack_108 = puVar11;
  ppuStack_100 = &puStack_b0;
  if ((ulong)puVar10 >> 0x3c < 0xf) {
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar15,puVar10);
    puVar14 = puVar15;
    func_0x000107c5ee20(puVar15,puVar10);
    auStack_158[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    uVar9 = auStack_158[0];
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_158,puVar6);
      func_0x0001000b44c0(puVar15,puVar10);
      func_0x000107c615e8(puVar6);
      uVar9 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar7 = auStack_168;
      puVar10 = auStack_158;
      func_0x000107c6147c(puVar7,puVar10,PTR___sypN_11034f1a8 + 8,uVar9,6);
      if ((int)puVar7 == 0) {
        auStack_168[0] = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar4 = auStack_158[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar15,puVar10);
    func_0x000107c614ac(uVar9);
  }
  auStack_168[0] = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    auVar19._8_8_ = puVar10;
    auVar19._0_8_ = auStack_168[0];
    return auVar19;
  }
  func_0x000107c60e78(auStack_168[0]);
  return ZEXT816(0x11070f3e8);
}



/* Entry: 1010f7bd0; end: 1010f7fd7;  */

/* WARNING: Possible PIC construction at 0x0001010f7d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010f7e2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010f7d2c) */
/* WARNING: Removing unreachable block (ram,0x0001010f7e30) */
/* WARNING: Removing unreachable block (ram,0x0001010f7ce4) */

undefined1  [16] FUN_1010f7bd0(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x19;
  long lVar10;
  undefined *puVar11;
  long unaff_x20;
  undefined *puVar12;
  char *pcVar13;
  char *unaff_x21;
  long lVar14;
  long unaff_x22;
  long unaff_x23;
  char *pcVar15;
  long unaff_x24;
  undefined *puVar16;
  long unaff_x25;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  char *unaff_x26;
  long lVar20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar2 = 0;
  uVar3 = param_2;
  func_0x000101101310();
  lVar17 = *(long *)(lVar2 + -8);
  lVar20 = *(long *)(lVar17 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)&uStack_e0 - (lVar20 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar15 = (char *)(lVar10 - extraout_x12_00);
  lVar8 = param_1;
  func_0x000107c3eb80();
  func_0x000107c61180();
  if (lVar8 == 0) {
    lVar8 = -0x7ffffffef10d9700;
    uVar3 = 0xd000000000000014;
  }
  else {
    unaff_x23 = lVar8;
    lStack_d0 = lVar17;
    lStack_c8 = lVar14;
    uStack_c0 = param_2;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar8);
    uVar7 = 0x112d5df68;
    FUN_1010ffa38(0x112d5df68,0x101101310,&UNK_10d924ad8);
    func_0x000107c5eb1c(lVar10,lVar2,unaff_x23,uVar3,lVar2,uVar7);
    unaff_x21 = pcVar15;
    uStack_d8 = uVar3;
    func_0x0001010fe5fc(lVar10,pcVar15,0x101101310);
    unaff_x19 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar8 = unaff_x19;
    func_0x000107c5faec();
    func_0x000107c61170(unaff_x19);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x98);
    *(long *)(unaff_x20 + 0x90) = lVar8;
    *(char **)(unaff_x20 + 0x98) = unaff_x21;
    func_0x000107c6142c(uVar3);
    FUN_1010f8038();
    if ((pcVar15[1] == '\0') && (*pcVar15 == '\0')) {
      unaff_x20 = *(long *)(unaff_x20 + 0x20);
      func_0x0001000d224c(&puStack_b8);
      puVar12 = puStack_b8;
      unaff_x21 = (char *)0x0;
      if (puStack_b8 != (undefined *)0x0) {
        pcVar4 = pcVar15;
        FUN_1010f8130();
        puVar6 = &UNK_110384710;
        uStack_e0 = pcVar4;
        func_0x000107c613fc(&UNK_110384710,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        lVar8 = lStack_c8;
        uVar3 = 0x101101310;
        func_0x0001010fe5b8(pcVar15,lStack_c8,0x101101310);
        uVar9 = (ulong)*(byte *)(lStack_d0 + 0x50);
        uVar18 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
        puVar19 = &UNK_110384788;
        func_0x000107c613fc(&UNK_110384788,uVar18 + lVar20,uVar9 | 7);
        uVar7 = uStack_c0;
        *(undefined **)(puVar19 + 0x10) = puVar6;
        *(long *)(puVar19 + 0x18) = param_1;
        *(undefined8 *)(puVar19 + 0x20) = uStack_c0;
        func_0x0001010fe5fc(lVar8,puVar19 + uVar18,0x101101310);
        pcStack_98 = FUN_1010fe488;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        uStack_a8 = 0x1010ffbc8;
        puStack_a0 = &UNK_1103847a0;
        ppuVar5 = &puStack_b8;
        puStack_90 = puVar19;
        func_0x000107c60bc4(ppuVar5);
        puVar6 = puStack_90;
        func_0x000107c61174(param_1);
        func_0x000107c61174(uVar7);
        func_0x000107c61574(puVar6);
        puVar6 = puVar12;
        func_0x000107c51f40(puVar12);
        func_0x000107c61180();
        pcVar4 = uStack_e0;
        func_0x000107c5dc64(uStack_e0);
        func_0x00010006c090(unaff_x23,uStack_d8);
        func_0x000107c615e8(puVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(puVar12);
        func_0x000107c61170(pcVar4);
        func_0x0001010fe640(pcVar15,0x101101310);
        auVar21._8_8_ = uVar3;
        auVar21._0_8_ = pcVar15;
        return auVar21;
      }
    }
    uVar3 = 0xd000000000000015;
    lVar8 = -0x7ffffffef10d96e0;
    unaff_x30 = 0x1010f7e30;
    register0x00000008 = (BADSPACEBASE *)pcVar15;
    param_2 = uStack_c0;
    unaff_x22 = param_1;
    unaff_x24 = lVar2;
    unaff_x25 = unaff_x23;
    unaff_x26 = pcVar15;
    unaff_x29 = puVar1;
  }
  puVar12 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar7 = 3;
  *(char **)((long)register0x00000008 + -0x50) = unaff_x26;
  *(long *)((long)register0x00000008 + -0x48) = unaff_x25;
  *(long *)((long)register0x00000008 + -0x40) = unaff_x24;
  *(long *)((long)register0x00000008 + -0x38) = unaff_x23;
  *(long *)((long)register0x00000008 + -0x30) = unaff_x22;
  *(char **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x58) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (lVar8 != 0) {
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar3;
    *(long *)((long)register0x00000008 + -0x90) = lVar8;
    *(undefined **)((long)register0x00000008 + -0x80) = PTR___sSSN_11034da80;
    func_0x000100102924((char *)((long)register0x00000008 + -0x98),
                        (char *)((long)register0x00000008 + -0x78));
    func_0x000107c61434(lVar8);
    puVar6 = puVar12;
    func_0x000107c61558(puVar12);
    *(undefined **)((long)register0x00000008 + -0x98) = puVar12;
    uVar7 = 0x6567617373656d;
    func_0x0001001029e8((char *)((long)register0x00000008 + -0x78),0x6567617373656d,
                        0xe700000000000000,puVar6);
    puVar12 = *(undefined **)((long)register0x00000008 + -0x98);
  }
  lVar8 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar7);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar19 = PTR___sSSSHsWP_11034da90;
  puVar6 = PTR___sSSN_11034da80;
  lVar2 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar16 = puVar12;
  func_0x000107c5f9dc(puVar12,puVar6,PTR___sypN_11034f1a8 + 8,puVar19);
  *(char *)((long)register0x00000008 + -0x78) = '\0';
  *(char *)((long)register0x00000008 + -0x77) = '\0';
  *(char *)((long)register0x00000008 + -0x76) = '\0';
  *(char *)((long)register0x00000008 + -0x75) = '\0';
  *(char *)((long)register0x00000008 + -0x74) = '\0';
  *(char *)((long)register0x00000008 + -0x73) = '\0';
  *(char *)((long)register0x00000008 + -0x72) = '\0';
  *(char *)((long)register0x00000008 + -0x71) = '\0';
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar16);
  uVar3 = *(undefined8 *)((long)register0x00000008 + -0x78);
  func_0x000107c61174(uVar3);
  if (puVar11 == (undefined *)0x0) {
    uVar7 = uVar3;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x000107c614ac(uVar7);
    puVar19 = (undefined *)0x0;
    puVar6 = (undefined *)0xf000000000000000;
  }
  else {
    puVar19 = puVar11;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar11);
  }
  lVar10 = lVar2;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  if ((ulong)puVar6 >> 0x3c < 0xf) {
    puVar16 = puVar19;
    func_0x000107c5ee20(puVar19,puVar6);
    func_0x0001000b44c0(puVar19,puVar6);
  }
  else {
    puVar16 = (undefined *)0x0;
    puVar6 = puVar11;
  }
  puVar19 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(puVar16);
  func_0x000107c4d664(param_2);
  func_0x000107c6142c(puVar12);
  puVar11 = puVar19;
  func_0x000107c61170(puVar19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
    auVar22._8_8_ = puVar6;
    auVar22._0_8_ = puVar11;
    return auVar22;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0xd0) = puVar19;
  *(long *)((long)register0x00000008 + -200) = lVar10;
  *(undefined **)((long)register0x00000008 + -0xc0) = puVar12;
  *(undefined8 *)((long)register0x00000008 + -0xb8) = param_2;
  *(char **)((long)register0x00000008 + -0xb0) = (char *)((long)register0x00000008 + -0x10);
  *(undefined **)((long)register0x00000008 + -0xa8) = &UNK_103dacc60;
  *(undefined8 *)((long)register0x00000008 + -0xd8) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  pcVar15 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  *(char *)((long)register0x00000008 + -0xe0) = '\0';
  *(char *)((long)register0x00000008 + -0xdf) = '\0';
  *(char *)((long)register0x00000008 + -0xde) = '\0';
  *(char *)((long)register0x00000008 + -0xdd) = '\0';
  *(char *)((long)register0x00000008 + -0xdc) = '\0';
  *(char *)((long)register0x00000008 + -0xdb) = '\0';
  *(char *)((long)register0x00000008 + -0xda) = '\0';
  *(char *)((long)register0x00000008 + -0xd9) = '\0';
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar6 = *(undefined **)((long)register0x00000008 + -0xe0);
  func_0x000107c61174();
  if (puVar12 == (undefined *)0x0) {
    puVar12 = puVar6;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar6);
    func_0x000107c61654();
    puVar6 = puVar12;
    func_0x000107c614ac(puVar12);
    puVar11 = (undefined *)0x0;
    pcVar13 = (char *)0xf000000000000000;
    pcVar4 = pcVar15;
  }
  else {
    puVar11 = puVar12;
    func_0x000107c5ee30();
    puVar6 = puVar12;
    pcVar4 = pcVar15;
    func_0x000107c61170(puVar12);
    pcVar13 = pcVar15;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0xd8)) {
    auVar23._8_8_ = pcVar13;
    auVar23._0_8_ = puVar11;
    return auVar23;
  }
  func_0x000107c60e78();
  *(undefined **)((long)register0x00000008 + -0x130) = puVar16;
  *(long *)((long)register0x00000008 + -0x128) = lVar8;
  *(undefined **)((long)register0x00000008 + -0x120) = puVar19;
  *(undefined **)((long)register0x00000008 + -0x118) = puVar12;
  *(char **)((long)register0x00000008 + -0x110) = pcVar13;
  *(undefined **)((long)register0x00000008 + -0x108) = puVar11;
  *(char **)((long)register0x00000008 + -0x100) = (char *)((long)register0x00000008 + -0xb0);
  *(undefined **)((long)register0x00000008 + -0xf8) = &SUB_103dacd78;
  *(undefined8 *)((long)register0x00000008 + -0x138) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)pcVar4 >> 0x3c < 0xf) {
    puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar6,pcVar4);
    puVar19 = puVar6;
    func_0x000107c5ee20(puVar6,pcVar4);
    *(char *)((long)register0x00000008 + -0x158) = '\0';
    *(char *)((long)register0x00000008 + -0x157) = '\0';
    *(char *)((long)register0x00000008 + -0x156) = '\0';
    *(char *)((long)register0x00000008 + -0x155) = '\0';
    *(char *)((long)register0x00000008 + -0x154) = '\0';
    *(char *)((long)register0x00000008 + -0x153) = '\0';
    *(char *)((long)register0x00000008 + -0x152) = '\0';
    *(char *)((long)register0x00000008 + -0x151) = '\0';
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar19);
    uVar3 = *(undefined8 *)((long)register0x00000008 + -0x158);
    if (puVar12 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234((char *)((long)register0x00000008 + -0x158),puVar12);
      func_0x0001000b44c0(puVar6,pcVar4);
      func_0x000107c615e8(puVar12);
      uVar3 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      pcVar15 = (char *)((long)register0x00000008 + -0x168);
      pcVar4 = (char *)((long)register0x00000008 + -0x158);
      func_0x000107c6147c(pcVar15,pcVar4,PTR___sypN_11034f1a8 + 8,uVar3,6);
      uVar3 = *(undefined8 *)((long)register0x00000008 + -0x168);
      if ((int)pcVar15 == 0) {
        uVar3 = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar7 = uVar3;
    func_0x000107c61174();
    func_0x000107c5ed30(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar6,pcVar4);
    func_0x000107c614ac(uVar3);
  }
  uVar3 = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x138)) {
    auVar24._8_8_ = pcVar4;
    auVar24._0_8_ = uVar3;
    return auVar24;
  }
  func_0x000107c60e78(uVar3);
  return ZEXT816(0x11070f3e8);
}



/* Entry: 1010f7fd8; end: 1010f8033; -[_TtC26LensMediaShufflerApiPlugin33LensMediaShufflerApiPluginHandler handleRequest:] */

void FUN_1010f7fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1010f77b8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1010f8034; end: 1010f8037; -[_TtC26LensMediaShufflerApiPlugin33LensMediaShufflerApiPluginHandler reset] */

void FUN_1010f8034(void)

{
  return;
}



/* Entry: 1010f8038; end: 1010f812f;  */

void FUN_1010f8038(void)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plStack_48;
  
  if (*(long *)(unaff_x20 + 0x70) == 0) {
    func_0x0001000d224c(&plStack_48);
    if (plStack_48 != (long *)0x0) {
      plVar1 = plStack_48;
      func_0x000107c4c9dc();
      func_0x000107c61180();
      func_0x000107c615e8(plStack_48);
      func_0x0001000285a8(0x112d5dfc8,&UNK_10d9246c8);
      plVar2 = plVar1;
      func_0x0001000b637c();
      puVar3 = &UNK_110384710;
      func_0x000107c613fc(&UNK_110384710,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      pcVar4 = FUN_1010ffa78;
      puVar6 = puVar3;
      (**(code **)(*plVar2 + 0x60))();
      func_0x000107c61574(plVar2);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(plVar1);
      uVar5 = *(undefined8 *)(unaff_x20 + 0x70);
      *(code **)(unaff_x20 + 0x70) = pcVar4;
      *(undefined **)(unaff_x20 + 0x78) = puVar6;
      func_0x000107c615e8(uVar5);
    }
  }
  return;
}



/* Entry: 1010f8130; end: 1010f859b;  */

/* WARNING: Removing unreachable block (ram,0x0001010f81d8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8220) */
/* WARNING: Removing unreachable block (ram,0x0001010f822c) */
/* WARNING: Removing unreachable block (ram,0x0001010f83d0) */
/* WARNING: Removing unreachable block (ram,0x0001010f8238) */
/* WARNING: Removing unreachable block (ram,0x0001010f8448) */

undefined * FUN_1010f8130(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long extraout_x8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uStack_b0;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long alStack_70 [2];
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar9 - extraout_x12;
  puVar3 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c453e4();
  FUN_1010fe778(param_1);
  FUN_1010fefb4(param_1);
  lVar4 = 0;
  func_0x000101101310();
  bVar2 = *(byte *)(param_1 + *(int *)(lVar4 + 0x34));
  uVar1 = 8;
  if ((bVar2 & 1) == 0) {
    uVar1 = 0x10;
  }
  uStack_b0 = 0;
  if (bVar2 != 2) {
    uStack_b0 = uVar1;
  }
  func_0x0001010ffb40(param_1 + *(int *)(lVar4 + 0x1c),lVar13,0x112d373d8,&UNK_10d9014c0);
  func_0x0001010ffb40(param_1 + *(int *)(lVar4 + 0x20),lVar9,0x112d373d8,&UNK_10d9014c0);
  lVar5 = 0;
  func_0x000107c5eea4();
  lVar11 = *(long *)(lVar5 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar4 = lVar13;
  (*pcVar12)(lVar13,1,lVar5);
  lVar10 = 0;
  if ((int)lVar4 != 1) {
    func_0x000107c5ee70();
    (**(code **)(lVar11 + 8))(lVar13,lVar5);
    lVar10 = lVar4;
  }
  lVar4 = lVar9;
  (*pcVar12)(lVar9,1,lVar5);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
  }
  else {
    func_0x000107c5ee70();
    (**(code **)(lVar11 + 8))(lVar9,lVar5);
  }
  puVar6 = PTR_PTR_1126c8620;
  func_0x000107c610f8(PTR_PTR_1126c8620);
  func_0x000107c482b0();
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar4);
  func_0x0001000d224c(alStack_70);
  if (alStack_70[0] != 0) {
    puVar7 = &UNK_110384a30;
    func_0x000107c613fc(&UNK_110384a30,0x18,7);
    *(undefined **)(puVar7 + 0x10) = puVar3;
    pcStack_80 = FUN_1010ffa2c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1010f90bc;
    puStack_88 = &UNK_110384a48;
    ppuVar8 = &puStack_a0;
    puStack_78 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_78;
    func_0x000107c61174(puVar3);
    func_0x000107c61574(puVar7);
    func_0x000107c43018(alStack_70[0]);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c615e8(alStack_70[0]);
  }
  puVar7 = puVar3;
  func_0x000107c43bf4(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar3);
  return puVar7;
}



/* Entry: 1010f859c; end: 1010f8c0b;  */

/* WARNING: Removing unreachable block (ram,0x0001010f87e8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8878) */
/* WARNING: Removing unreachable block (ram,0x0001010f88b8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8a5c) */
/* WARNING: Removing unreachable block (ram,0x0001010f88c8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8ab8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8ac0) */
/* WARNING: Removing unreachable block (ram,0x0001010f88d0) */
/* WARNING: Removing unreachable block (ram,0x0001010f88d4) */
/* WARNING: Removing unreachable block (ram,0x0001010f8b0c) */
/* WARNING: Removing unreachable block (ram,0x0001010f8b20) */
/* WARNING: Removing unreachable block (ram,0x0001010f8b54) */
/* WARNING: Removing unreachable block (ram,0x0001010f8bc8) */

void FUN_1010f859c(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  char *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [152];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_2 == 0) {
      if (param_1 != 0) {
        puStack_98 = (undefined *)0x0;
        puVar2 = &UNK_1103847d8;
        func_0x000107c613fc(&UNK_1103847d8,0x18,7);
        *(undefined ***)(puVar2 + 0x10) = &puStack_98;
        puVar3 = &UNK_110384800;
        func_0x000107c613fc(&UNK_110384800,0x20,7);
        *(code **)(puVar3 + 0x10) = FUN_1010fe4dc;
        *(undefined **)(puVar3 + 0x18) = puVar2;
        puVar7 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a8 = (code *)0x1010ffbc0;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        pcStack_b8 = FUN_1010f8c0c;
        puStack_b0 = &UNK_110384818;
        ppuVar4 = &puStack_c8;
        puStack_a0 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_a0;
        func_0x000107c61174();
        func_0x000107c61574(puVar3);
        puVar3 = &UNK_110384850;
        func_0x000107c613fc(&UNK_110384850,0x18,7);
        *(undefined ***)(puVar3 + 0x10) = &puStack_98;
        puVar5 = &UNK_110384878;
        ppuVar12 = (undefined **)0x20;
        func_0x000107c613fc(&UNK_110384878,0x20,7);
        *(code **)(puVar5 + 0x10) = FUN_1010fe508;
        *(undefined **)(puVar5 + 0x18) = puVar3;
        pcStack_a8 = FUN_1010fe518;
        puStack_c8 = puVar7;
        uStack_c0 = 0x42000000;
        pcStack_b8 = (code *)0x1010f8c4c;
        puStack_b0 = &UNK_110384890;
        ppuVar6 = &puStack_c8;
        puStack_a0 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_a0);
        func_0x000107c4c59c(param_1);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c60bd0(ppuVar4);
        puVar5 = puStack_98;
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (*param_6 == '\0') {
          puVar7 = puStack_98;
          func_0x000107c61174(puStack_98);
          lVar8 = param_4;
          func_0x000107c4b1dc(param_4);
          func_0x000107c61180();
          lVar9 = lVar8;
          ppuVar4 = ppuVar12;
          func_0x000107c5faec();
          func_0x000107c61170(lVar8);
          FUN_1010f8cac(puVar5,param_6,lVar9,ppuVar4);
          func_0x000107c61170(puVar7);
          func_0x000107c6142c(ppuVar4);
          puVar7 = puVar5;
        }
        puStack_c8 = puVar7;
        FUN_1010fe538();
        func_0x000107c61434(puVar7);
        puVar5 = &UNK_110384c18;
        ppuVar6 = &puStack_c8;
        func_0x000107c5eb4c(ppuVar6,&UNK_110384c18,ppuVar4);
        puVar13 = puVar5;
        func_0x000107c6142c(puVar7);
        lVar8 = param_4;
        func_0x000107c50374();
        func_0x000107c61180();
        if (lVar8 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar13);
        }
        func_0x000107c4e33c(param_4);
        func_0x000107c61180();
        puVar1 = PTR___sSSSHsWP_11034da90;
        puVar13 = PTR___sSSN_11034da80;
        lVar9 = param_4;
        func_0x000107c5f9e8();
        func_0x000107c61170(param_4);
        puVar10 = PTR_PTR_1126b0278;
        func_0x000107c610f8(PTR_PTR_1126b0278);
        func_0x00010006c00c(ppuVar6,puVar5);
        lVar11 = lVar9;
        func_0x000107c5f9dc(lVar9,puVar13,puVar13,puVar1);
        func_0x000107c6142c(lVar9);
        ppuVar4 = ppuVar6;
        func_0x000107c5ee20(ppuVar6,puVar5);
        func_0x00010006c090(ppuVar6,puVar5);
        func_0x000107c48368(puVar10);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(ppuVar4);
        func_0x000107c4d664(param_5);
        func_0x000107c6142c(puVar7);
        func_0x00010006c090(ppuVar6,puVar5);
        func_0x000107c61170(puVar10);
        func_0x000107c61574(param_3);
        func_0x000107c61170(param_1);
        puVar5 = puStack_98;
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar2);
        func_0x000107c61170(puVar5);
        return;
      }
      uStack_168 = 0xe700000000000000;
      uStack_170 = 0x6e776f6e6b6e75;
    }
    else {
      func_0x000107c614cc(param_2,auStack_160,auStack_178);
      func_0x000107c60640(uStack_170,uStack_168);
    }
    func_0x000103dac9b4(param_4,8,param_5,uStack_170,uStack_168);
    func_0x000107c61574(param_3);
    func_0x000107c6142c(uStack_168);
  }
  return;
}



/* Entry: 1010f8c0c; end: 1010f8cab;  */

void FUN_1010f8c0c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1010f8cac; end: 1010f90bb;  */

void FUN_1010f8cac(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  undefined1 *puVar13;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar14;
  long unaff_x21;
  long lVar15;
  undefined8 uVar16;
  undefined1 auStack_120 [8];
  undefined *puStack_f0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_58;
  
  puVar3 = (undefined8 *)0x0;
  func_0x000101100668();
  lVar11 = puVar3[-1];
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar13 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar13 - extraout_x12;
  if (*param_2 == '\0' && param_1 != 0) {
    func_0x000107c61174();
    lVar15 = param_1;
    FUN_1010f9108();
    puVar9 = *(undefined1 **)(param_2 + 8);
    if (*(undefined1 **)(lVar15 + 0x10) <= *(undefined1 **)(param_2 + 8)) {
      puVar9 = *(undefined1 **)(lVar15 + 0x10);
    }
    if ((undefined1 *)0x31 < puVar9) {
      puVar9 = (undefined1 *)0x32;
    }
    lVar4 = 0;
    func_0x000101101310();
    lVar5 = lVar15;
    FUN_1010f9224(lVar15,puVar9,param_1,param_2[*(int *)(lVar4 + 0x28)] & 1,param_3,param_4);
    if (unaff_x21 == 0) {
      func_0x000107c6142c(lVar15);
      puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar15 = *(long *)(lVar5 + 0x10);
      if (lVar15 == 0) {
        func_0x000107c6142c(lVar5);
      }
      else {
        puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          lVar4 = param_1;
          func_0x000107c4d9a4();
          func_0x000107c61180();
          puVar10 = puVar9;
          if (lVar4 != 0) {
            lVar6 = lVar4;
            func_0x000107c4b800();
            func_0x000107c61180();
            lVar7 = lVar6;
            func_0x000107c5faec();
            func_0x000107c61170(lVar6);
            puVar10 = auStack_c8;
            func_0x000107c61428(unaff_x20 + 0xa0,puVar10,0x20,0);
            puVar14 = *(undefined1 **)(unaff_x20 + 0xa0);
            if (*(long *)(puVar14 + 0x10) != 0) {
              func_0x000107c61434(puVar14);
              puVar10 = puVar9;
              func_0x000100029284();
              if (((ulong)puVar10 & 1) != 0) {
                puVar3 = (undefined8 *)(*(long *)(puVar14 + 0x38) + lVar7 * 0x28);
                uStack_a8 = puVar3[1];
                uVar16 = *puVar3;
                uStack_98 = puVar3[3];
                uStack_a0 = puVar3[2];
                uStack_90 = *(undefined2 *)(puVar3 + 4);
                uStack_78 = puVar3[2];
                uStack_80 = puVar3[1];
                uStack_b0 = uVar16;
                func_0x000107c61174();
                func_0x000100402194(&uStack_80,auStack_d8);
                func_0x000107c614a8(auStack_c8);
                func_0x000107c6142c(puVar14);
                func_0x000107c6142c(puVar9);
                FUN_1010fa480(lVar12,&uStack_b0,lVar4,param_2);
                FUN_1010fe5b8(lVar12,puVar13,0x101100668);
                puVar8 = puStack_f0;
                func_0x000107c61558();
                if (((ulong)puVar8 & 1) == 0) {
                  plVar1 = (long *)(puStack_f0 + 0x10);
                  puStack_f0 = (undefined *)0x0;
                  FUN_1010fcbe8(0,*plVar1 + 1,1);
                }
                uVar2 = *(ulong *)(puStack_f0 + 0x10);
                if (*(ulong *)(puStack_f0 + 0x18) >> 1 <= uVar2) {
                  puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puStack_f0 + 0x18));
                  FUN_1010fcbe8(puVar8,uVar2 + 1,1,puStack_f0);
                  puStack_f0 = puVar8;
                }
                *(ulong *)(puStack_f0 + 0x10) = uVar2 + 1;
                puVar10 = (undefined1 *)0x101100668;
                func_0x0001010fe5fc(puVar13,puStack_f0 +
                                            *(long *)(lVar11 + 0x48) * uVar2 +
                                            ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                                            ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)),
                                    0x101100668);
                func_0x000107c61170(uVar16);
                func_0x000100bcb1dc(&uStack_80);
                func_0x000107c61170(lVar4);
                func_0x0001010fe640(lVar12);
                puStack_58 = puStack_f0;
                goto LAB_1010f8e88;
              }
              func_0x000107c6142c(puVar9);
              puVar9 = puVar14;
            }
            func_0x000107c6142c(puVar9);
            func_0x000107c614a8(auStack_c8);
            func_0x000107c61170(lVar4);
          }
LAB_1010f8e88:
          lVar15 = lVar15 + -1;
          puVar9 = puVar10;
        } while (lVar15 != 0);
        func_0x000107c6142c(lVar5);
      }
      FUN_1010fa818(&puStack_58);
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c61170(param_1);
      func_0x000107c6142c(lVar15);
    }
  }
  else {
    func_0x0001010fe578();
    func_0x000107c613f8(&UNK_110384bf8,puVar3,0,0);
    *puVar3 = 2;
    *(undefined1 *)(puVar3 + 1) = 1;
    func_0x000107c61654();
  }
  return;
}



/* Entry: 1010f90bc; end: 1010f9107;  */

void FUN_1010f90bc(long param_1,undefined8 param_2)

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



/* Entry: 1010f9108; end: 1010f9223;  */

undefined * FUN_1010f9108(long param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *apuStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000107c40808();
  apuStack_88[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    if (param_1 == 5000) {
      cVar2 = *param_2;
      func_0x0001000d224c(apuStack_88);
      func_0x0001000a8868(apuStack_88,uStack_70);
      uVar1 = 0x6567616d69;
      if (cVar2 != '\0') {
        uVar1 = 0x6f65646976;
      }
      (**(code **)(lStack_68 + 0x18))(param_3,param_4,uVar1,0xe500000000000000,uStack_70,lStack_68);
      func_0x000107c6142c(0xe500000000000000);
      func_0x0001000834e4(apuStack_88);
    }
    puVar3 = (undefined *)0x0;
    FUN_1010fe004(0,param_1);
    puVar4 = puVar3;
    FUN_1010ff068();
    func_0x000107c61574(puVar3);
    apuStack_88[0] = puVar4;
    FUN_1010fdec4();
  }
  return apuStack_88[0];
}



/* Entry: 1010f9224; end: 1010fa47f;  */

code * FUN_1010f9224(double param_1,long param_2,ulong param_3,ulong param_4,uint param_5,
                    undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar19;
  long extraout_x8_01;
  long lVar20;
  undefined8 *puVar21;
  long extraout_x12;
  long lVar22;
  long unaff_x20;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long unaff_x21;
  code *pcVar26;
  long lVar27;
  undefined8 uVar28;
  ulong *puVar29;
  undefined8 uVar30;
  ulong *puVar31;
  long lVar32;
  double dVar33;
  double dVar34;
  ulong auStack_2a0 [4];
  ulong uStack_280;
  undefined8 uStack_278;
  long lStack_270;
  ulong uStack_268;
  code *pcStack_260;
  ulong uStack_258;
  ulong uStack_250;
  long lStack_248;
  undefined4 uStack_23c;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  long lStack_208;
  long lStack_200;
  uint uStack_1f4;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  ulong *puStack_1d8;
  ulong uStack_1d0;
  undefined1 auStack_140 [24];
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  code *apcStack_110 [3];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long alStack_c8 [3];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = 0;
  auStack_2a0[1] = param_6;
  auStack_2a0[2] = param_7;
  func_0x000107c5f7f0();
  lStack_208 = *(long *)(lVar4 + -8);
  lStack_200 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_208 + 0x40));
  puVar21 = (undefined8 *)((long)auStack_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  puStack_210 = puVar21;
  func_0x000107c5f83c();
  lStack_220 = *(long *)(lVar4 + -8);
  lStack_218 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_220 + 0x40));
  lVar4 = (long)puVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_228 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar19 = lVar4 - extraout_x12;
  lVar4 = 0;
  uStack_230 = uVar19;
  func_0x000107c5ede0();
  lStack_1f0 = *(long *)(lVar4 + -8);
  lStack_1e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_1f0 + 0x40));
  lStack_1e0 = uVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c6071c();
  dVar34 = param_1;
  func_0x000107c60f34();
  puVar6 = &UNK_1103848c8;
  puVar5 = puVar6;
  func_0x000107c613fc(&UNK_1103848c8,0x18,7);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar29 = (ulong *)(puVar5 + 0x10);
  *puVar29 = (ulong)PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c613fc(&UNK_1103848c8,0x18,7);
  puVar31 = (ulong *)(puVar6 + 0x10);
  *puVar31 = (ulong)puVar9;
  FUN_1010ff580(param_2,*(undefined8 *)(param_2 + 0x10),5);
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  uStack_250 = *(ulong *)(param_2 + 0x10);
  if (uStack_250 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    lVar20 = *(long *)(unaff_x20 + 0x50);
    lStack_238 = param_2 + 0x20;
    func_0x000107c61428(puVar29,auStack_98,0,0);
    func_0x000107c61428(puVar31,auStack_b0,0,0);
    uVar19 = 0;
    uStack_23c = *(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO7secondsyACSicACmFWC_11034f788;
    uStack_258 = param_3;
    lStack_248 = param_2;
    uStack_1f4 = param_5;
    puStack_1d8 = puVar31;
    do {
      if (*(ulong *)(lStack_248 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa44c);
        (*pcVar26)();
      }
      lVar27 = *(long *)(lStack_238 + uVar19 * 8);
      lVar22 = *(long *)(lVar27 + 0x10);
      uStack_1d0 = uVar19;
      if (lVar22 != 0) {
        func_0x000107c61434(lVar27);
        lVar32 = 0x20;
        dVar33 = dVar34;
        do {
          uVar28 = *(undefined8 *)(lVar27 + lVar32);
          uVar19 = param_4;
          func_0x000107c4d9a4();
          func_0x000107c61180();
          dVar34 = dVar33;
          if (uVar19 != 0) {
            func_0x000107c60f38(lVar4);
            puVar9 = &UNK_110384710;
            func_0x000107c613fc(&UNK_110384710,0x18,7);
            func_0x000107c61644(puVar9 + 0x10,unaff_x20);
            puVar10 = &UNK_1103848f0;
            func_0x000107c613fc(&UNK_1103848f0,0x48,7);
            *(undefined **)(puVar10 + 0x10) = puVar9;
            *(long *)(puVar10 + 0x18) = lVar4;
            *(ulong *)(puVar10 + 0x20) = uVar19;
            puVar10[0x28] = (byte)param_5 & 1;
            *(undefined **)(puVar10 + 0x30) = puVar5;
            *(undefined8 *)(puVar10 + 0x38) = uVar28;
            *(undefined **)(puVar10 + 0x40) = puVar6;
            func_0x000107c61580(puVar5,2);
            uVar17 = 2;
            func_0x000107c61580(puVar6);
            lVar11 = lVar4;
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c6157c(puVar9);
            uVar23 = uVar19;
            func_0x000107c4b800();
            func_0x000107c61180();
            uVar25 = uVar23;
            func_0x000107c5faec();
            func_0x000107c61170(uVar23);
            func_0x000107c61428(unaff_x20 + 0xa0,&puStack_128,0x20,0);
            uVar23 = *(ulong *)(unaff_x20 + 0xa0);
            if (*(long *)(uVar23 + 0x10) == 0) {
LAB_1010f9920:
              func_0x000107c6142c(uVar17);
              func_0x000107c614a8(&puStack_128);
              lVar13 = lVar20;
              func_0x000107c450b4();
              func_0x000107c61180();
              lVar24 = lVar13;
              func_0x000107c5c734();
              func_0x000107c61180();
              func_0x000107c61170(lVar13);
              if (lVar24 != 0) {
                func_0x000107c6071c();
                uVar28 = 0xd000000000000021;
                dVar34 = dVar33;
                func_0x000107c5fadc(0xd000000000000021,0x800000010ef26940);
                lVar11 = lVar24;
                func_0x000107c3ab88(lVar24);
                func_0x000107c61180();
                func_0x000107c61170(uVar28);
                lVar13 = lVar11;
                func_0x000107c43bf4(lVar11);
                func_0x000107c61180();
                puVar7 = &UNK_110384918;
                func_0x000107c613fc(&UNK_110384918,0x30,7);
                *(ulong *)(puVar7 + 0x10) = uVar19;
                *(double *)(puVar7 + 0x18) = dVar33;
                *(code **)(puVar7 + 0x20) = FUN_1010ff954;
                *(undefined **)(puVar7 + 0x28) = puVar10;
                apcStack_110[1] = FUN_1010ff988;
                puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_120 = 0x42000000;
                uStack_118 = 0x1010ffbc4;
                apcStack_110[0] = (code *)&UNK_110384930;
                ppuVar8 = &puStack_128;
                apcStack_110[2] = (code *)puVar7;
                func_0x000107c60bc4(ppuVar8);
                pcVar26 = apcStack_110[2];
                func_0x000107c61174(uVar19);
                func_0x000107c6157c(puVar10);
                func_0x000107c61574(pcVar26);
                func_0x000107c5dc64(lVar13);
                func_0x000107c61170(uVar19);
                func_0x000107c61574(puVar10);
                func_0x000107c61574(puVar5);
                func_0x000107c61574(puVar6);
                func_0x000107c60bd0(ppuVar8);
                func_0x000107c61574(puVar9);
                func_0x000107c615e8(lVar24);
                func_0x000107c61170(lVar11);
                func_0x000107c61170(lVar13);
                goto LAB_1010f9694;
              }
              func_0x000107c61428(puVar9 + 0x10,auStack_f8,0,0);
              puVar7 = puVar9 + 0x10;
              func_0x000107c61648();
              if (puVar7 != (undefined *)0x0) {
                func_0x0001000b44c0(0,0xf000000000000000);
                func_0x000107c61574(puVar7);
              }
              func_0x000107c60f3c(lVar11);
              func_0x000107c61574(puVar6);
              func_0x000107c61574(puVar5);
              func_0x000107c61170(uVar19);
            }
            else {
              func_0x000107c61434(uVar23);
              uVar18 = uVar17;
              func_0x000100029284();
              if ((uVar18 & 1) == 0) {
                func_0x000107c6142c(uVar17);
                uVar17 = uVar23;
                goto LAB_1010f9920;
              }
              puVar21 = (undefined8 *)(*(long *)(uVar23 + 0x38) + uVar25 * 0x28);
              uVar12 = *puVar21;
              uVar2 = puVar21[1];
              uVar1 = puVar21[2];
              lVar13 = puVar21[3];
              cVar3 = *(char *)(puVar21 + 4);
              func_0x000107c61174();
              func_0x000107c61434(uVar1);
              func_0x000107c614a8(&puStack_128);
              func_0x000107c6142c(uVar23);
              func_0x000107c6142c(uVar17);
              func_0x000107c61428(puVar9 + 0x10,auStack_140,0,0);
              puVar7 = puVar9 + 0x10;
              func_0x000107c61648();
              if (puVar7 == (undefined *)0x0) {
                func_0x000107c60f3c(lVar11);
                func_0x000107c6142c(uVar1);
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar19);
                func_0x000107c61574(puVar10);
              }
              else {
                func_0x000107c61174();
                func_0x000107c61434(uVar1);
                func_0x0001000b44c0(0,0xf000000000000000);
                func_0x000107c61174();
                func_0x000107c61434(uVar1);
                lVar24 = lStack_1e0;
                if ((cVar3 != '\x01' && lVar13 != 0) && (cVar3 == '\x01' || -1 < lVar13)) {
LAB_1010f9d70:
                  func_0x000107c61428(puVar29,&puStack_128,0x21,0);
                  uVar17 = *puVar29;
                  uVar23 = uVar17;
                  func_0x000107c61558();
                  *puVar29 = uVar17;
                  uVar25 = uVar17;
                  if ((uVar23 & 1) == 0) {
                    uVar25 = 0;
                    func_0x0001010fcadc(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17,
                                        PTR__swift_bridgeObjectRelease_11034f258);
                    *puVar29 = uVar25;
                  }
                  uVar23 = *(ulong *)(uVar25 + 0x10);
                  uVar17 = uVar25;
                  if (*(ulong *)(uVar25 + 0x18) >> 1 <= uVar23) {
                    uVar17 = (ulong)(1 < *(ulong *)(uVar25 + 0x18));
                    func_0x0001010fcadc(uVar17,uVar23 + 1,1,uVar25,
                                        PTR__swift_bridgeObjectRelease_11034f258);
                  }
                  *(ulong *)(uVar17 + 0x10) = uVar23 + 1;
                  *(undefined8 *)(uVar17 + uVar23 * 8 + 0x20) = uVar28;
                  lVar13 = -0xb0;
                }
                else {
                  func_0x000107c5ed80(lStack_1e0,uVar2,uVar1);
                  uVar23 = 0;
                  lVar13 = lVar24;
                  func_0x000107c5ede8();
                  if (unaff_x21 == 0) {
                    (**(code **)(lStack_1f0 + 8))(lVar24,lStack_1e8);
                    if (0x31 < *(long *)(puVar7 + 0xa8)) {
                      func_0x00010006c090(lVar13,uVar23);
                      goto LAB_1010f9c5c;
                    }
                    func_0x0001000d224c(&puStack_128);
                    pcVar26 = apcStack_110[0];
                    pcStack_260 = apcStack_110[1];
                    func_0x0001000a8868(&puStack_128,apcStack_110[0]);
                    uVar25 = uVar23;
                    lStack_270 = lVar13;
                    (**(code **)(pcStack_260 + 8))(lVar13,uVar23,pcVar26);
                    pcStack_260 = (code *)lVar13;
                    func_0x0001000834e4(&puStack_128);
                    if (SCARRY8(*(long *)(puVar7 + 0xa8),1)) {
                    /* WARNING: Does not return */
                      pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa454);
                      (*pcVar26)();
                    }
                    *(long *)(puVar7 + 0xa8) = *(long *)(puVar7 + 0xa8) + 1;
                    uVar17 = uVar19;
                    auStack_2a0[3] = uVar23;
                    func_0x000107c4b800();
                    func_0x000107c61180();
                    uVar23 = uVar17;
                    func_0x000107c5faec();
                    func_0x000107c61170(uVar17);
                    func_0x000107c61428(puVar7 + 0xa0,&puStack_128,0x21,0);
                    uVar14 = uVar12;
                    func_0x000107c61174();
                    func_0x000107c61438(uVar1,2);
                    func_0x000107c61174();
                    uVar15 = *(undefined8 *)(puVar7 + 0xa0);
                    uStack_278 = uVar14;
                    func_0x000107c61558();
                    lVar24 = *(long *)(puVar7 + 0xa0);
                    *(undefined8 *)(puVar7 + 0xa0) = 0x8000000000000000;
                    uStack_280 = uVar23;
                    uStack_268 = uVar25;
                    alStack_c8[0] = lVar24;
                    func_0x000100029284();
                    uVar17 = (ulong)~(uint)uVar25 & 1;
                    lVar13 = *(long *)(lVar24 + 0x10) + uVar17;
                    if (SCARRY8(*(long *)(lVar24 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                      pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa458);
                      (*pcVar26)();
                    }
                    if (*(long *)(lVar24 + 0x18) < lVar13) {
                      func_0x0001010fc6cc(lVar13,uVar15);
                      uVar23 = uStack_280;
                      uVar17 = uStack_268;
                      func_0x000100029284();
                      if (((uint)uVar25 & 1) != ((uint)uVar17 & 1)) goto LAB_1010fa470;
LAB_1010f9bc8:
                      if ((uVar25 & 1) == 0) goto LAB_1010f9bd4;
LAB_1010f9cd0:
                      lVar13 = alStack_c8[0];
                      uVar14 = uStack_278;
                      puVar21 = (undefined8 *)(*(long *)(alStack_c8[0] + 0x38) + uVar23 * 0x28);
                      uVar15 = *puVar21;
                      uVar30 = puVar21[2];
                      *puVar21 = uStack_278;
                      puVar21[1] = uVar2;
                      puVar21[2] = uVar1;
                      puVar21[3] = pcStack_260;
                      *(undefined2 *)(puVar21 + 4) = 0;
                      func_0x000107c6142c(uStack_268);
                      func_0x000107c6142c(uVar30);
                      func_0x000107c61170(uVar15);
                    }
                    else {
                      if ((int)uVar15 == 0) {
                        func_0x0001010fc52c();
                        goto LAB_1010f9bc8;
                      }
                      if ((uVar25 & 1) != 0) goto LAB_1010f9cd0;
LAB_1010f9bd4:
                      lVar13 = alStack_c8[0] + (uVar23 >> 6) * 8;
                      *(ulong *)(lVar13 + 0x40) = *(ulong *)(lVar13 + 0x40) | 1L << (uVar23 & 0x3f);
                      puVar31 = (ulong *)(*(long *)(alStack_c8[0] + 0x30) + uVar23 * 0x10);
                      *puVar31 = uStack_280;
                      puVar31[1] = uStack_268;
                      puVar21 = (undefined8 *)(*(long *)(alStack_c8[0] + 0x38) + uVar23 * 0x28);
                      *puVar21 = uStack_278;
                      puVar21[1] = uVar2;
                      puVar21[2] = uVar1;
                      puVar21[3] = pcStack_260;
                      *(undefined2 *)(puVar21 + 4) = 0;
                      if (SCARRY8(*(long *)(alStack_c8[0] + 0x10),1)) {
                    /* WARNING: Does not return */
                        pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa46c);
                        (*pcVar26)();
                      }
                      *(long *)(alStack_c8[0] + 0x10) = *(long *)(alStack_c8[0] + 0x10) + 1;
                      lVar13 = alStack_c8[0];
                      uVar14 = uStack_278;
                    }
                    *(long *)(puVar7 + 0xa0) = lVar13;
                    func_0x000107c614a8(&puStack_128);
                    func_0x00010006c090(lStack_270,auStack_2a0[3]);
                    func_0x000107c6142c(uVar1);
                    func_0x000107c61170(uVar14);
                    if (((uStack_1f4 & 1) == 0) || (0 < (long)pcStack_260)) goto LAB_1010f9d70;
                  }
                  else {
                    func_0x000107c614ac(unaff_x21);
                    (**(code **)(lStack_1f0 + 8))(lVar24,lStack_1e8);
                    unaff_x21 = 0;
LAB_1010f9c5c:
                    if ((uStack_1f4 & 1) == 0) goto LAB_1010f9d70;
                  }
                  puVar31 = puStack_1d8;
                  func_0x000107c61428(puStack_1d8,&puStack_128,0x21,0);
                  uVar17 = *puVar31;
                  uVar23 = uVar17;
                  func_0x000107c61558();
                  *puVar31 = uVar17;
                  uVar25 = uVar17;
                  if ((uVar23 & 1) == 0) {
                    uVar25 = 0;
                    func_0x0001010fcadc(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17,
                                        PTR__swift_bridgeObjectRelease_11034f258);
                    *puStack_1d8 = uVar25;
                  }
                  uVar23 = *(ulong *)(uVar25 + 0x10);
                  uVar17 = uVar25;
                  if (*(ulong *)(uVar25 + 0x18) >> 1 <= uVar23) {
                    uVar17 = (ulong)(1 < *(ulong *)(uVar25 + 0x18));
                    func_0x0001010fcadc(uVar17,uVar23 + 1,1,uVar25,
                                        PTR__swift_bridgeObjectRelease_11034f258);
                  }
                  *(ulong *)(uVar17 + 0x10) = uVar23 + 1;
                  *(undefined8 *)(uVar17 + uVar23 * 8 + 0x20) = uVar28;
                  lVar13 = -200;
                }
                **(ulong **)((long)apcStack_110 + lVar13) = uVar17;
                func_0x000107c614a8(&puStack_128);
                func_0x000107c60f3c(lVar11);
                func_0x000107c61574(puVar7);
                func_0x000107c61170(uVar19);
                func_0x000107c61574(puVar10);
                func_0x000107c61430(uVar1,3);
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar12);
                func_0x000107c61170(uVar12);
              }
              func_0x000107c61574(puVar6);
              puVar10 = puVar5;
            }
            func_0x000107c61574(puVar10);
            func_0x000107c61574(puVar9);
            dVar34 = dVar33;
          }
LAB_1010f9694:
          lVar32 = lVar32 + 8;
          lVar22 = lVar22 + -1;
          dVar33 = dVar34;
        } while (lVar22 != 0);
        func_0x000107c6142c(lVar27);
        param_3 = uStack_258;
        puVar31 = puStack_1d8;
      }
      lVar22 = lStack_228;
      func_0x000107c5f830(lStack_228);
      puVar21 = puStack_210;
      *puStack_210 = 10;
      lVar32 = lStack_200;
      lVar27 = lStack_208;
      (**(code **)(lStack_208 + 0x68))(puVar21,uStack_23c,lStack_200);
      uVar19 = uStack_230;
      func_0x000107c5f858(uStack_230,lVar22,puVar21);
      (**(code **)(lVar27 + 8))(puVar21,lVar32);
      lVar27 = lStack_218;
      pcVar26 = *(code **)(lStack_220 + 8);
      (*pcVar26)(lVar22,lStack_218);
      uVar23 = uVar19;
      func_0x000107c5ffb0();
      (*pcVar26)(uVar19,lVar27);
      func_0x000107c5f7f4(uVar23,1);
      if ((uVar23 & 1) != 0) {
        func_0x0001000d224c(&puStack_128);
        pcVar16 = apcStack_110[1];
        pcVar26 = apcStack_110[0];
        func_0x0001000a8868(&puStack_128,apcStack_110[0]);
        (**(code **)(pcVar16 + 8))
                  (auStack_2a0[1],auStack_2a0[2],0x6567616d69,0xe500000000000000,pcVar26,pcVar16);
        ppuVar8 = &puStack_128;
        func_0x0001000834e4();
        func_0x0001010fe578();
        func_0x000107c613f8(&UNK_110384bf8,ppuVar8,0,0);
        *ppuVar8 = (undefined *)0xa;
        *(undefined1 *)(ppuVar8 + 1) = 0;
        func_0x000107c61654();
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar6);
        func_0x000107c6142c(lStack_248);
        func_0x000107c61170(lVar4);
        goto LAB_1010fa400;
      }
      if (SCARRY8(*(long *)(*puVar29 + 0x10),*(long *)(*puVar31 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa450);
        (*pcVar26)();
      }
    } while ((*(long *)(*puVar29 + 0x10) + *(long *)(*puVar31 + 0x10) < (long)param_3) &&
            (uVar19 = uStack_1d0 + 1, uVar19 != uStack_250));
    func_0x000107c6142c(lStack_248);
  }
  func_0x000107c61428(puVar29,alStack_c8,0,0);
  func_0x000107c61428(puVar31,auStack_e0,0,0);
  puVar9 = PTR__swift_bridgeObjectRelease_11034f258;
  lVar20 = *(long *)(*puVar29 + 0x10);
  while (lVar20 < (long)param_3) {
    uVar19 = *puVar31;
    lVar20 = *(long *)(uVar19 + 0x10);
    if (lVar20 == 0) break;
    func_0x000107c61428(puVar31,&puStack_128,0x21,0);
    uVar28 = *(undefined8 *)(uVar19 + 0x20);
    uVar23 = uVar19;
    func_0x000107c61558();
    *puVar31 = uVar19;
    if (((int)uVar23 == 0) || (*(ulong *)(uVar19 + 0x18) >> 1 < lVar20 - 1U)) {
      func_0x0001010fcadc();
      *puVar31 = uVar23;
      uVar19 = uVar23;
    }
    lVar20 = *(long *)(uVar19 + 0x10);
    func_0x000107c610b8(uVar19 + 0x20,uVar19 + 0x28,lVar20 * 8 + -8);
    *(long *)(uVar19 + 0x10) = lVar20 + -1;
    *puVar31 = uVar19;
    func_0x000107c614a8(&puStack_128);
    func_0x000107c61428(puVar29,&puStack_128,0x21,0);
    uVar25 = *puVar29;
    uVar19 = uVar25;
    func_0x000107c61558();
    *puVar29 = uVar25;
    uVar23 = uVar25;
    if ((uVar19 & 1) == 0) {
      uVar23 = 0;
      func_0x0001010fcadc(0,*(long *)(uVar25 + 0x10) + 1,1,uVar25,puVar9);
      *puVar29 = uVar23;
    }
    uVar19 = *(ulong *)(uVar23 + 0x10);
    uVar25 = uVar23;
    if (*(ulong *)(uVar23 + 0x18) >> 1 <= uVar19) {
      uVar25 = (ulong)(1 < *(ulong *)(uVar23 + 0x18));
      func_0x0001010fcadc(uVar25,uVar19 + 1,1,uVar23,puVar9);
    }
    *(ulong *)(uVar25 + 0x10) = uVar19 + 1;
    *(undefined8 *)(uVar25 + uVar19 * 8 + 0x20) = uVar28;
    *puVar29 = uVar25;
    func_0x000107c614a8(&puStack_128);
    lVar20 = *(long *)(*puVar29 + 0x10);
  }
  func_0x000107c6071c();
  dVar34 = (dVar34 - param_1) * 1000.0;
  func_0x0001000d224c(&puStack_128);
  pcVar16 = apcStack_110[1];
  pcVar26 = apcStack_110[0];
  func_0x0001000a8868(&puStack_128,apcStack_110[0]);
  if (0x7fefffffffffffff < (ulong)ABS(dVar34)) {
                    /* WARNING: Does not return */
    pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa45c);
    (*pcVar26)();
  }
  if (dVar34 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa460);
    (*pcVar26)();
  }
  if (9.223372036854776e+18 <= dVar34) {
                    /* WARNING: Does not return */
    pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa464);
    (*pcVar26)();
  }
  (**(code **)(pcVar16 + 0x10))
            (auStack_2a0[1],auStack_2a0[2],0x6567616d69,0xe500000000000000,(long)dVar34,pcVar26,
             pcVar16);
  func_0x0001000834e4(&puStack_128);
  pcVar26 = (code *)*puVar29;
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa468);
    (*pcVar26)();
  }
  if (param_3 < *(ulong *)(pcVar26 + 0x10)) {
    pcVar16 = pcVar26;
    func_0x000107c61434(pcVar26);
    FUN_1010fe0bc();
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
    func_0x000107c6142c(pcVar26);
    pcVar26 = pcVar16;
  }
  else {
    func_0x000107c61434(pcVar26);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
  }
  func_0x000107c61170(lVar4);
LAB_1010fa400:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pcVar26;
  }
  func_0x000107c60e78();
LAB_1010fa470:
  func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
  pcVar26 = (code *)SoftwareBreakpoint(1,0x1010fa480);
  (*pcVar26)();
}



/* Entry: 1010fa480; end: 1010fa817;  */

void FUN_1010fa480(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,byte *param_6)

{
  long *plVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  undefined8 uVar7;
  undefined1 uVar8;
  long extraout_x12;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [120];
  
  lVar4 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar6 = (long)&uStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar6 - extraout_x12;
  uStack_f8 = *(undefined8 *)(param_4 + 8);
  uStack_f0 = *(undefined8 *)(param_4 + 0x10);
  uStack_100 = (uint)param_6[1];
  uStack_fc = (uint)*param_6;
  lStack_108 = param_4;
  func_0x000107c61434();
  lVar4 = param_5;
  func_0x000107c40c4c();
  func_0x000107c61180();
  bVar2 = lVar4 == 0;
  if (bVar2) {
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(lVar10);
    func_0x000107c61170(lVar4);
    lVar4 = 0;
    func_0x000107c5eea4();
  }
  lVar9 = *(long *)(lVar4 + -8);
  (**(code **)(lVar9 + 0x38))(lVar10,bVar2,1,lVar4);
  lVar5 = 0;
  func_0x000101100668();
  iVar3 = *(int *)(lVar5 + 0x1c);
  func_0x0001003a4c00(lVar10,lVar6);
  func_0x000107c5eea4(0);
  pcVar11 = *(code **)(lVar9 + 0x30);
  lVar10 = lVar6;
  (*pcVar11)(lVar6,1,lVar4);
  if ((int)lVar10 == 1) {
    param_2 = 0;
    func_0x000107c5ee88((long)param_1 + (long)iVar3);
    lVar10 = lVar6;
    (*pcVar11)(lVar6,1,lVar4);
    if ((int)lVar10 != 1) {
      FUN_1010ffaa0(lVar6,0x112d373d8,&UNK_10d9014c0);
    }
  }
  else {
    (**(code **)(lVar9 + 0x20))((long)param_1 + (long)iVar3,lVar6,lVar4);
  }
  lVar4 = 0;
  func_0x000101101310();
  if ((param_6[*(int *)(lVar4 + 0x24)] & 1) != 0) {
    lVar6 = param_5;
    func_0x000107c4b88c();
    func_0x000107c61180();
    if (lVar6 != 0) {
      func_0x000107c61174();
      func_0x000107c4077c();
      func_0x000107c4077c(lVar6);
      lVar10 = 0x112d5df88;
      func_0x0001000285a8(0x112d5df88,&UNK_10d924690);
      lVar9 = lVar10;
      func_0x000107c61534();
      uStack_118 = 2;
      uStack_120 = 1;
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      *(undefined8 *)(lVar9 + 0x20) = 0x74616c;
      *(undefined8 *)(lVar9 + 0x28) = 0xe300000000000000;
      *(undefined8 *)(lVar9 + 0x30) = param_2;
      lVar12 = lVar9;
      FUN_1010fe67c();
      func_0x000107c61588(lVar9);
      FUN_1010ffaa0((undefined8 *)(lVar9 + 0x20),0x112d5df90,&UNK_10dc55410);
      func_0x000107c61534(lVar10,auStack_e8);
      *(undefined8 *)(lVar10 + 0x18) = uStack_118;
      *(undefined8 *)(lVar10 + 0x10) = uStack_120;
      *(undefined8 *)(lVar10 + 0x20) = 0x676e6f6c;
      *(undefined8 *)(lVar10 + 0x28) = 0xe400000000000000;
      *(undefined8 *)(lVar10 + 0x30) = param_3;
      lVar9 = lVar10;
      FUN_1010fe67c();
      func_0x000107c61588(lVar10);
      FUN_1010ffaa0((undefined8 *)(lVar10 + 0x20),0x112d5df90,&UNK_10dc55410);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar6);
      goto LAB_1010fa768;
    }
  }
  lVar12 = 0;
  lVar9 = 0;
LAB_1010fa768:
  func_0x000107c49d58();
  if ((param_6[*(int *)(lVar4 + 0x28)] & 1) == 0) {
    uVar7 = 0;
    uVar8 = 1;
  }
  else if (*(char *)(lStack_108 + 0x20) == '\x01') {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = *(undefined8 *)(lStack_108 + 0x18);
  }
  *param_1 = uStack_f8;
  param_1[1] = uStack_f0;
  *(bool *)(param_1 + 2) = uStack_fc != 0;
  *(bool *)((long)param_1 + 0x11) = uStack_100 != 0;
  plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
  *plVar1 = lVar12;
  plVar1[1] = lVar9;
  *(char *)((long)param_1 + (long)*(int *)(lVar5 + 0x24)) = (char)param_5;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  *param_1 = uVar7;
  *(undefined1 *)(param_1 + 1) = uVar8;
  return;
}



/* Entry: 1010fa818; end: 1010fa937;  */

void FUN_1010fa818(ulong *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  long lStack_60;
  ulong uStack_58;
  
  lVar1 = 0;
  func_0x000101100668();
  lVar5 = *(long *)(lVar1 + -8);
  uVar4 = *param_1;
  uVar3 = uVar4;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    FUN_1010fe1b4();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar3 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar8 = uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff);
  lStack_60 = uVar4 + uVar8;
  uVar3 = uVar6;
  uStack_58 = uVar6;
  func_0x000107c60574();
  if ((long)uVar3 < (long)uVar6) {
    puVar7 = (undefined *)(uVar6 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      puVar2 = puVar7;
      func_0x000107c60380(puVar7,lVar1);
      *(undefined **)(puVar2 + 0x10) = puVar7;
    }
    puStack_78 = puVar2 + uVar8;
    puStack_70 = puVar7;
    FUN_1010fce7c(&puStack_78,auStack_68,&lStack_60,uVar3);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar6 != 0) {
    FUN_1010fd500(0,uVar6,1,&lStack_60);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1010fa938; end: 1010fb193;  */

/* WARNING: Removing unreachable block (ram,0x0001010faaf8) */
/* WARNING: Removing unreachable block (ram,0x0001010fab18) */

void FUN_1010fa938(undefined8 param_1,undefined8 param_2,ulong param_3,long *param_4,long param_5,
                  undefined8 param_6,long param_7,undefined4 param_8,long param_9,
                  undefined8 param_10,long param_11)

{
  ushort uVar1;
  undefined1 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined8 uVar15;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  undefined1 auStack_150 [8];
  long lStack_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long lStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [32];
  undefined *puStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  uStack_100 = CONCAT44(uStack_100._4_4_,param_8);
  puVar8 = (undefined *)*param_4;
  lStack_110 = param_4[1];
  lStack_f0 = param_4[2];
  lVar10 = param_4[3];
  uVar1 = *(ushort *)(param_4 + 4);
  lVar4 = 0;
  lStack_118 = param_7;
  lStack_f8 = param_9;
  func_0x000107c5eea4();
  lStack_130 = *(long *)(lVar4 + -8);
  lStack_128 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_130 + 0x40));
  lVar4 = 0;
  puStack_138 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ede0();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = (long)(auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(param_5 + 0x10,auStack_90,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 == 0) {
LAB_1010faa90:
    func_0x000107c60f3c(param_6);
    return;
  }
  lStack_148 = param_11;
  uStack_120 = param_10;
  uStack_108 = param_6;
  FUN_100de78a0(param_2,param_3);
  uStack_140 = param_2;
  func_0x0001000b44c0(param_2,param_3);
  if (param_3 >> 0x3c < 0xf) {
    func_0x0001000b44c0(0,0xf000000000000000);
    uVar7 = uStack_100;
    lVar18 = lStack_118;
    uVar15 = uStack_140;
    if (puVar8 == (undefined *)0x0) {
      if ((uStack_100 & 1) == 0) {
        func_0x00010006c00c(uStack_140,param_3);
        uVar15 = 0;
        uVar20 = 1;
        lVar18 = lStack_118;
      }
      else if (*(long *)(param_5 + 0xa8) < 0x32) {
        func_0x00010006c00c(uStack_140,param_3);
        func_0x0001000d224c(&puStack_c0);
        pcVar3 = pcStack_a0;
        puVar8 = puStack_a8;
        func_0x0001000a8868(&puStack_c0,puStack_a8);
        (**(code **)((long)pcVar3 + 8))(uVar15,param_3,puVar8,pcVar3);
        func_0x0001000834e4(&puStack_c0);
        if (SCARRY8(*(long *)(param_5 + 0xa8),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fb194);
          (*pcVar3)();
        }
        uVar20 = 0;
        *(long *)(param_5 + 0xa8) = *(long *)(param_5 + 0xa8) + 1;
      }
      else {
        func_0x00010006c00c(uStack_140,param_3);
        uVar15 = 0;
        uVar20 = 1;
      }
      puVar8 = &UNK_110384968;
      uVar6 = 0x38;
      func_0x000107c613fc(&UNK_110384968,0x38,7);
      lVar4 = lStack_f8;
      lVar10 = lStack_148;
      puVar8[0x10] = (byte)uVar7 & 1;
      *(long *)(puVar8 + 0x18) = lStack_f8;
      *(undefined8 *)(puVar8 + 0x20) = uStack_120;
      *(long *)(puVar8 + 0x28) = lStack_148;
      *(undefined8 *)(puVar8 + 0x30) = uStack_108;
      uVar9 = uStack_108;
      func_0x000107c61174();
      func_0x000107c6157c(lVar10);
      func_0x000107c6157c(lVar4);
      func_0x0001000d224c(&puStack_c0);
      puVar5 = puStack_c0;
      if (puStack_c0 != (undefined *)0x0) {
        lStack_f8 = CONCAT44(lStack_f8._4_4_,uVar20);
        lVar10 = lVar18;
        lStack_f0 = uVar15;
        func_0x000107c4b800();
        func_0x000107c61180();
        uVar15 = uVar6;
        lVar4 = lVar10;
        if (lVar10 == 0) {
          func_0x000107c5faec();
          uVar15 = uVar6;
          func_0x000107c5fadc();
          func_0x000107c6142c(uVar6);
        }
        func_0x000107c5faec();
        puVar11 = PTR_PTR_1126b08b8;
        uStack_108 = uVar15;
        func_0x000107c610f8();
        func_0x000107c4766c();
        func_0x000107c61170(lVar4);
        func_0x000107c6071c();
        uVar15 = uStack_140;
        uVar9 = uStack_140;
        func_0x000107c5ee20(uStack_140,param_3);
        puVar2 = puStack_138;
        uStack_100 = uVar9;
        func_0x000107c5ee80(puStack_138,0x4072c00000000000);
        func_0x000107c5ee70();
        (**(code **)(lStack_130 + 8))(puVar2,lStack_128);
        puVar12 = &UNK_110384990;
        func_0x000107c613fc(&UNK_110384990,0x68,7);
        *(long *)(puVar12 + 0x10) = lVar10;
        *(undefined8 *)(puVar12 + 0x18) = uStack_108;
        *(undefined8 *)(puVar12 + 0x20) = 0x1010ff998;
        *(undefined **)(puVar12 + 0x28) = puVar8;
        *(undefined **)(puVar12 + 0x30) = puStack_c0;
        *(undefined **)(puVar12 + 0x38) = puVar11;
        *(long *)(puVar12 + 0x40) = param_5;
        *(long *)(puVar12 + 0x48) = lStack_f0;
        puVar12[0x50] = (char)lStack_f8;
        *(long *)(puVar12 + 0x58) = lVar18;
        *(undefined8 *)(puVar12 + 0x60) = param_1;
        pcStack_a0 = FUN_1010ff9a8;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        lStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100ab47f8;
        puStack_a8 = &UNK_1103849a8;
        ppuVar13 = &puStack_c0;
        puStack_98 = puVar12;
        func_0x000107c60bc4(ppuVar13);
        puVar12 = puStack_98;
        func_0x000107c615f0(puVar5);
        func_0x000107c6157c(puVar8);
        func_0x000107c61174(puVar11);
        func_0x000107c6157c(param_5);
        func_0x000107c61174(lVar18);
        func_0x000107c61574(puVar12);
        uVar7 = uStack_100;
        func_0x000107c5168c(puVar5);
        func_0x0001000b44c0(uVar15,param_3);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(param_5);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c615e8(puVar5);
        func_0x000107c61170(puVar11);
        func_0x000107c61170(uVar7);
        func_0x000107c61170(uVar9);
        return;
      }
      func_0x000107c60f3c(uVar9);
      func_0x0001000b44c0(uStack_140,param_3);
      func_0x000107c61574(puVar8);
      goto LAB_1010fae10;
    }
  }
  else if (puVar8 == (undefined *)0x0) {
    func_0x000107c61574(param_5);
    param_6 = uStack_108;
    goto LAB_1010faa90;
  }
  func_0x000107c61174();
  func_0x000107c61434(lStack_f0);
  if (((uVar1 & 0xff) == 1) || (lVar10 < 1)) {
    func_0x000107c5ed80(lVar17,lStack_110,lStack_f0);
    uVar15 = 0;
    lVar10 = lVar17;
    func_0x000107c5ede8(lVar17,0);
    (**(code **)(lVar19 + 8))(lVar17,lVar4);
    if (0x31 < *(long *)(param_5 + 0xa8)) {
      func_0x00010006c090(lVar10,uVar15);
      if ((uStack_100 & 1) != 0) goto LAB_1010fad04;
      goto LAB_1010fad98;
    }
    func_0x0001000d224c(&puStack_c0);
    pcVar3 = pcStack_a0;
    func_0x0001000a8868(&puStack_c0,puStack_a8);
    lVar4 = lVar10;
    uVar9 = uVar15;
    (**(code **)((long)pcVar3 + 8))(lVar10,uVar15,puStack_a8,pcVar3);
    func_0x0001000834e4(&puStack_c0);
    if (SCARRY8(*(long *)(param_5 + 0xa8),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fb190);
      (*pcVar3)();
    }
    *(long *)(param_5 + 0xa8) = *(long *)(param_5 + 0xa8) + 1;
    lVar17 = lStack_118;
    func_0x000107c4b800(lStack_118);
    func_0x000107c61180();
    lVar19 = lVar17;
    func_0x000107c5faec();
    func_0x000107c61170(lVar17);
    lVar17 = lStack_f0;
    lStack_b8 = lStack_110;
    puStack_b0 = (undefined *)lStack_f0;
    pcStack_a0 = (code *)((ulong)pcStack_a0 & 0xffffffffffff0000);
    puStack_c0 = puVar8;
    puStack_a8 = (undefined *)lVar4;
    func_0x000107c61428(param_5 + 0xa0,auStack_e0,0x21,0);
    func_0x000107c61438(lVar17,2);
    puVar5 = puVar8;
    func_0x000107c61174(puVar8);
    func_0x000107c61174();
    uVar6 = *(undefined8 *)(param_5 + 0xa0);
    func_0x000107c61558(uVar6);
    uStack_e8 = *(undefined8 *)(param_5 + 0xa0);
    *(undefined8 *)(param_5 + 0xa0) = 0x8000000000000000;
    FUN_1010f6140(&puStack_c0,lVar19,uVar9,uVar6);
    func_0x000107c6142c(uVar9);
    *(undefined8 *)(param_5 + 0xa0) = uStack_e8;
    func_0x000107c614a8(auStack_e0);
    func_0x000107c6142c(lVar17);
    func_0x000107c61170(puVar5);
    func_0x00010006c090(lVar10,uVar15);
    if (((uStack_100 & 1) == 0) || (0 < lVar4)) goto LAB_1010fad98;
LAB_1010fad04:
    lVar10 = lStack_148;
    func_0x000107c61428(lStack_148 + 0x10,auStack_e0,0x21,0);
    uVar16 = *(ulong *)(lVar10 + 0x10);
    uVar7 = uVar16;
    func_0x000107c61558();
    *(ulong *)(lVar10 + 0x10) = uVar16;
    uVar14 = uVar16;
    if ((uVar7 & 1) == 0) {
      uVar14 = 0;
      func_0x0001010fcadc(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16,
                          PTR__swift_bridgeObjectRelease_11034f258);
      *(ulong *)(lVar10 + 0x10) = uVar14;
    }
    uVar9 = uStack_108;
    uVar15 = uStack_120;
    uVar7 = *(ulong *)(uVar14 + 0x10);
    uVar16 = uVar14;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar7) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001010fcadc(uVar16,uVar7 + 1,1,uVar14,PTR__swift_bridgeObjectRelease_11034f258);
    }
    *(ulong *)(uVar16 + 0x10) = uVar7 + 1;
    *(undefined8 *)(uVar16 + uVar7 * 8 + 0x20) = uVar15;
  }
  else {
LAB_1010fad98:
    lVar10 = lStack_f8;
    func_0x000107c61428(lStack_f8 + 0x10,auStack_e0,0x21,0);
    uVar16 = *(ulong *)(lVar10 + 0x10);
    uVar7 = uVar16;
    func_0x000107c61558();
    *(ulong *)(lVar10 + 0x10) = uVar16;
    uVar14 = uVar16;
    if ((uVar7 & 1) == 0) {
      uVar14 = 0;
      func_0x0001010fcadc(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16,
                          PTR__swift_bridgeObjectRelease_11034f258);
      *(ulong *)(lVar10 + 0x10) = uVar14;
    }
    uVar9 = uStack_108;
    uVar7 = *(ulong *)(uVar14 + 0x10);
    uVar16 = uVar14;
    if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar7) {
      uVar16 = (ulong)(1 < *(ulong *)(uVar14 + 0x18));
      func_0x0001010fcadc(uVar16,uVar7 + 1,1,uVar14,PTR__swift_bridgeObjectRelease_11034f258);
    }
    *(ulong *)(uVar16 + 0x10) = uVar7 + 1;
    *(undefined8 *)(uVar16 + uVar7 * 8 + 0x20) = uStack_120;
  }
  *(ulong *)(lVar10 + 0x10) = uVar16;
  func_0x000107c614a8(auStack_e0);
  func_0x000107c60f3c(uVar9);
  func_0x000107c6142c(lStack_f0);
  func_0x000107c61170(puVar8);
LAB_1010fae10:
  func_0x000107c61574(param_5);
  return;
}



/* Entry: 1010fb194; end: 1010fb397;  */

void FUN_1010fb194(long *param_1,ulong param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lStack_78;
  long lStack_70;
  long lStack_60;
  long lStack_58;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar1 = param_1[2];
    lStack_58 = param_1[2];
    lStack_60 = param_1[1];
    if (((param_2 & 1) == 0) || ((char)param_1[4] != '\x01' && 0 < param_1[3])) {
      func_0x000107c61428(param_3 + 0x10,&lStack_78,0x21,0);
      uVar3 = *(ulong *)(param_3 + 0x10);
      func_0x000107c61174(lVar4);
      func_0x000107c61434(lVar1);
      uVar2 = uVar3;
      func_0x000107c61558();
      *(ulong *)(param_3 + 0x10) = uVar3;
      uVar5 = uVar3;
      if ((uVar2 & 1) == 0) {
        uVar5 = 0;
        func_0x0001010fcadc(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3,
                            PTR__swift_bridgeObjectRelease_11034f258);
        *(ulong *)(param_3 + 0x10) = uVar5;
      }
      uVar2 = *(ulong *)(uVar5 + 0x10);
      uVar3 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001010fcadc(uVar3,uVar2 + 1,1,uVar5,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
      *(undefined8 *)(uVar3 + uVar2 * 8 + 0x20) = param_4;
      *(ulong *)(param_3 + 0x10) = uVar3;
    }
    else {
      func_0x000107c61428(param_5 + 0x10,&lStack_78,0x21,0);
      uVar5 = *(ulong *)(param_5 + 0x10);
      func_0x000107c61174(lVar4);
      func_0x000107c61434(lVar1);
      uVar2 = uVar5;
      func_0x000107c61558();
      *(ulong *)(param_5 + 0x10) = uVar5;
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        func_0x0001010fcadc(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5,
                            PTR__swift_bridgeObjectRelease_11034f258);
        *(ulong *)(param_5 + 0x10) = uVar2;
        uVar5 = uVar2;
      }
      uVar2 = *(ulong *)(uVar5 + 0x10);
      uVar3 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        func_0x0001010fcadc(uVar3,uVar2 + 1,1,uVar5,PTR__swift_bridgeObjectRelease_11034f258);
      }
      *(ulong *)(uVar3 + 0x10) = uVar2 + 1;
      *(undefined8 *)(uVar3 + uVar2 * 8 + 0x20) = param_4;
      *(ulong *)(param_5 + 0x10) = uVar3;
    }
    func_0x000107c614a8(&lStack_78);
    func_0x000107c61170(lVar4);
    lStack_70 = lStack_58;
    lStack_78 = lStack_60;
    func_0x000100bcb1dc(&lStack_78);
  }
  func_0x000107c60f3c(param_6);
  return;
}



/* Entry: 1010fb398; end: 1010fb40f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1010fb398(ulong param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  func_0x000107c6071c();
  if (param_1 == 0) {
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c5ee30(param_1);
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  (*param_4)(param_1,param_2,&uStack_60);
  if (param_2 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_2 >> 0x3e);
    if (uVar1 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 1010fb410; end: 1010fb487;  */

/* WARNING: Possible PIC construction at 0x0001010fb46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010fb470) */

void FUN_1010fb410(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1010fb488; end: 1010fb657;  */

void FUN_1010fb488(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  
  if ((param_2 & 1) == 0) {
    uStack_80 = uStack_80 & 0xffffffffffff0000;
    uStack_98 = 0;
    puStack_a0 = (undefined *)0x0;
    puStack_88 = (undefined *)0x0;
    pcStack_90 = (code *)0x0;
    (*param_5)(&puStack_a0);
  }
  else {
    puVar1 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar1);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_110384710;
    func_0x000107c613fc(&UNK_110384710,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_9);
    puVar3 = &UNK_1103849e0;
    func_0x000107c613fc(&UNK_1103849e0,0x60,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(code **)(puVar3 + 0x28) = param_5;
    *(undefined8 *)(puVar3 + 0x30) = param_6;
    *(undefined8 *)(puVar3 + 0x38) = param_8;
    *(undefined8 *)(puVar3 + 0x40) = param_10;
    puVar3[0x48] = param_11;
    *(undefined8 *)(puVar3 + 0x50) = param_13;
    *(undefined8 *)(puVar3 + 0x58) = param_1;
    uStack_80 = 0x1010ff9ec;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_100f17d9c;
    puStack_88 = &UNK_1103849f8;
    ppuVar4 = &puStack_a0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_78;
    func_0x000107c61434(param_4);
    func_0x000107c6157c(param_6);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_13);
    func_0x000107c61574(puVar2);
    func_0x000107c50784(param_7);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1010fb658; end: 1010fb82f;  */

void FUN_1010fb658(long param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,byte param_9,
                  undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  ushort uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  ushort uStack_70;
  
  puVar4 = auStack_d0;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_1;
    func_0x000107c44314();
    if (lVar1 == 0) {
      func_0x000107c4407c();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar1 = param_1;
        func_0x000107c5faec();
        puVar5 = puVar4;
        func_0x000107c61170(param_1);
        func_0x000107c4b800(param_11);
        func_0x000107c61180();
        uVar2 = param_11;
        func_0x000107c5faec();
        func_0x000107c61170(param_11);
        uStack_70 = (ushort)param_9;
        uStack_98 = (ushort)param_9;
        uStack_b8 = param_7;
        lStack_b0 = lVar1;
        puStack_a8 = puVar4;
        uStack_a0 = param_8;
        uStack_90 = param_7;
        lStack_88 = lVar1;
        puStack_80 = puVar4;
        uStack_78 = param_8;
        func_0x000107c61428(param_2 + 0xa0,auStack_e8,0x21,0);
        func_0x000107c61174(param_7);
        func_0x000107c61438(puVar4,2);
        func_0x000107c61174(param_7);
        uVar3 = *(undefined8 *)(param_2 + 0xa0);
        func_0x000107c61558(uVar3);
        uVar6 = *(undefined8 *)(param_2 + 0xa0);
        *(undefined8 *)(param_2 + 0xa0) = 0x8000000000000000;
        FUN_1010f6140(&uStack_90,uVar2,puVar5,uVar3);
        func_0x000107c6142c(puVar5);
        *(undefined8 *)(param_2 + 0xa0) = uVar6;
        func_0x000107c614a8(auStack_e8);
        (*param_5)(&uStack_b8);
        func_0x000107c61574(param_2);
        func_0x000107c61430(puVar4,2);
        func_0x000107c61170(param_7);
        return;
      }
    }
    func_0x000107c61574(param_2);
  }
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  puStack_80 = (undefined1 *)0x0;
  (*param_5)(&uStack_90);
  return;
}



/* Entry: 1010fb830; end: 1010fb977;  */

/* WARNING: Possible PIC construction at 0x0001010fb8a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010fb8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010fb958: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010fb8a4) */
/* WARNING: Removing unreachable block (ram,0x0001010fb8f4) */

void FUN_1010fb830(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x90);
  lVar4 = *(long *)(unaff_x20 + 0x98);
  func_0x000107c61434(lVar4);
  lVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c61170(lVar1);
  if (lVar4 == 0) {
    func_0x000107c6142c(param_2);
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      return;
    }
    func_0x000107c3fa48(lStack_58);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lStack_58);
    lVar4 = *(long *)(unaff_x20 + 0x98);
    *(long *)(unaff_x20 + 0x90) = lVar3;
    *(long *)(unaff_x20 + 0x98) = lVar5;
  }
  else if ((lVar3 != lVar2) || (lVar4 != param_2)) {
    func_0x000107c605b8(lVar3,lVar4,lVar2,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar4);
  return;
}



/* Entry: 1010fb978; end: 1010fb9e3;  */

void FUN_1010fb978(undefined8 *param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    (*param_3)(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1010fb9e4; end: 1010fbe5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010fb9e4(long param_1)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar16;
  code *pcVar17;
  long lVar18;
  undefined *puVar19;
  long unaff_x20;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  long alStack_88 [3];
  long lStack_70;
  
  lVar22 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0;
  func_0x000107c5ede0();
  lVar23 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar23 + 0x40));
  lVar24 = ((long)&lStack_100 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0;
  func_0x000107c5ed50();
  lVar22 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  lVar21 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if ((*(ulong *)(unaff_x20 + 0x98) != 0) &&
     ((uVar14 = *(ulong *)(param_1 + _DAT_113034770),
      uVar14 == *(ulong *)(unaff_x20 + 0x90) &&
      *(ulong *)(unaff_x20 + 0x98) == ((ulong *)(param_1 + _DAT_113034770))[1] ||
      (func_0x000107c605b8(), (uVar14 & 1) != 0)))) {
    lVar18 = *(long *)(param_1 + _DAT_113034778);
    func_0x000107c40808();
    if ((0 < lVar18) && (func_0x0001000d224c(alStack_88), alStack_88[0] != 0)) {
      lStack_c0 = alStack_88[0];
      func_0x000107c600f4(lVar21);
      func_0x000107c61428(unaff_x20 + 0xa0,auStack_a0,0,0);
      func_0x000107c5ed4c(alStack_88);
      lVar8 = (long)&lStack_100 - extraout_x8;
      lVar9 = lVar22;
      lVar10 = lVar13;
      puVar19 = PTR___sypN_11034f1a8;
      lVar18 = lStack_100;
      lVar3 = lStack_f8;
      lVar4 = lStack_f0;
      lVar5 = lStack_e8;
      lVar6 = lStack_e0;
      lVar7 = lStack_d8;
      while (lStack_d8 = lVar10, lStack_f0 = lVar12, lStack_e0 = lVar9, lStack_100 = lVar24,
            lStack_f8 = lVar23, lStack_e8 = lVar8, lStack_70 != 0) {
        puVar20 = &uStack_b0;
        func_0x000107c6147c(puVar20,alStack_88,puVar19 + 8,PTR___sSSN_11034da80,6);
        lVar23 = lStack_a8;
        uVar14 = uStack_b0;
        if (((ulong)puVar20 & 1) != 0) {
          lVar22 = *(long *)(unaff_x20 + 0xa0);
          puVar20 = (ulong *)(lVar22 + 0x40);
          uStack_d0 = -1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
          uVar25 = 0xffffffffffffffff;
          if (-uStack_d0 < 0x40) {
            uVar25 = ~(-1L << (-uStack_d0 & 0x3f));
          }
          uVar25 = uVar25 & *puVar20;
          uVar16 = 0x3f - uStack_d0;
          func_0x000107c61438(lVar22,2);
          lVar13 = 0;
          uStack_c8 = uVar14;
          uVar2 = uVar25;
          lVar24 = lVar13;
          do {
            while (uVar26 = uVar2, uVar25 == 0) {
              bVar11 = SCARRY8(lVar13,1);
              lVar13 = lVar13 + 1;
              if (bVar11) {
                    /* WARNING: Does not return */
                pcVar17 = (code *)SoftwareBreakpoint(1,0x1010fbe28);
                (*pcVar17)();
              }
              if ((long)(uVar16 >> 6) <= lVar13) {
                func_0x000107c6142c(lVar23);
                FUN_1010ffa98(lVar22,puVar20,~uStack_d0,lVar24,0);
                func_0x000107c6142c(lVar22);
                func_0x000107c615e8(lStack_c0);
                pcVar17 = *(code **)(lStack_e0 + 8);
                lVar13 = lStack_d8;
                goto LAB_1010fbe00;
              }
              uVar2 = uVar26;
              uVar25 = puVar20[lVar13];
            }
            uVar2 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
            uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
            uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
            uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
            uVar25 = uVar25 - 1 & uVar25;
            lVar12 = *(long *)(lVar22 + 0x38) +
                     (LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar13 << 6) * 0x28;
            uVar15 = *(ulong *)(lVar12 + 8);
            cVar1 = *(char *)(lVar12 + 0x21);
            lStack_b8 = lVar24;
            uVar2 = uVar25;
            lVar24 = lVar13;
          } while (((uVar15 != uVar14 || *(long *)(lVar12 + 0x10) != lVar23) &&
                   (func_0x000107c605b8(uVar15,*(long *)(lVar12 + 0x10),uVar14,lVar23,0),
                   uVar14 = uStack_c8, (uVar15 & 1) == 0)) || (cVar1 != '\0'));
          func_0x000107c6142c(lVar22);
          FUN_1010ffa98(lVar22,puVar20,~uStack_d0,lStack_b8,uVar26);
          uStack_b0 = 0x2f2f3a656c6966;
          lStack_a8 = -0x1900000000000000;
          func_0x000107c5fb78(uVar14,lVar23);
          lVar22 = lStack_a8;
          lVar24 = lStack_e8;
          func_0x000107c5edd0(lStack_e8,uStack_b0,lStack_a8);
          func_0x000107c6142c(lVar22);
          func_0x000107c6142c(lVar23);
          lVar23 = lStack_f0;
          lVar13 = lStack_f8;
          lVar12 = lVar24;
          (**(code **)(lStack_f8 + 0x30))(lVar24,1,lStack_f0);
          lVar22 = lStack_100;
          if ((int)lVar12 == 1) {
            func_0x000107c615e8(lStack_c0);
            (**(code **)(lStack_e0 + 8))(lVar21,lStack_d8);
            FUN_1010ffaa0(lVar24,0x112d36580,&UNK_10d9016d0);
            return;
          }
          lVar12 = lStack_100;
          (**(code **)(lVar13 + 0x20))(lStack_100,lVar24,lVar23);
          func_0x000107c5ed90();
          func_0x000107c3d680(lStack_c0);
          func_0x000107c61170(lVar12);
          (**(code **)(lVar13 + 8))(lVar22,lVar23);
          puVar19 = PTR___sypN_11034f1a8;
          lVar13 = lStack_d8;
          lVar22 = lStack_e0;
        }
        func_0x000107c5ed4c(alStack_88);
        lVar8 = lStack_e8;
        lVar23 = lStack_f8;
        lVar24 = lStack_100;
        lVar9 = lStack_e0;
        lVar12 = lStack_f0;
        lVar10 = lStack_d8;
        lVar18 = lStack_100;
        lVar3 = lStack_f8;
        lVar4 = lStack_f0;
        lVar5 = lStack_e8;
        lVar6 = lStack_e0;
        lVar7 = lStack_d8;
      }
      lStack_100 = lVar18;
      lStack_f8 = lVar3;
      lStack_f0 = lVar4;
      lStack_e8 = lVar5;
      lStack_e0 = lVar6;
      lStack_d8 = lVar7;
      func_0x000107c615e8(lStack_c0);
      pcVar17 = *(code **)(lVar22 + 8);
LAB_1010fbe00:
      (*pcVar17)(lVar21,lVar13);
    }
  }
  return;
}



/* Entry: 1010fbe5c; end: 1010fbf0f;  */

void FUN_1010fbe5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 1010fbf10; end: 1010fbf87;  */

void FUN_1010fbf10(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1010ffb00(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1010fbf88; end: 1010fbfe3;  */

void FUN_1010fbf88(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x28);
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  puVar3[1] = param_4[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  *(undefined2 *)(puVar3 + 4) = *(undefined2 *)(param_4 + 4);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fbfe4);
  (*pcVar2)();
}



/* Entry: 1010fbfe4; end: 1010fc267;  */

undefined * FUN_1010fbfe4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fc138);
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
    puVar3 = (undefined *)0x112d5dc40;
    FUN_1010fbf10(0x112d5dc40,&PTR__OBJC_CLASS___CIFeature_1126a6370,0x112d5dfe8,&UNK_10d9246d8);
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
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1010ffb00(0,0x112d5dc40,&PTR__OBJC_CLASS___CIFeature_1126a6370);
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



/* Entry: 1010fc268; end: 1010fc387;  */

undefined * FUN_1010fc268(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d5dfd0;
    FUN_1010fbf10(0x112d5dfd0,&PTR_PTR_1126b08b8,0x112d5dfd8,&UNK_10d9bd2b0);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1010fc388; end: 1010fc9b3;  */

void FUN_1010fc388(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_80 [32];
  
  func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
  lVar11 = *unaff_x20;
  lVar6 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) == 0) {
    func_0x000107c61574(lVar11);
LAB_1010fc504:
    *unaff_x20 = lVar6;
    return;
  }
  lVar1 = lVar11 + 0x40;
  uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
  if (lVar6 != lVar11 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
    func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
  uVar8 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(lVar11 + 0x40);
  if (uVar7 == 0) goto LAB_1010fc470;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar13 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + lVar13);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      func_0x0001000bb420(*(long *)(lVar11 + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar13);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      func_0x000100102924(auStack_80,*(long *)(lVar6 + 0x38) + lVar10);
      func_0x000107c61434(uVar4);
      if (uVar7 != 0) break;
LAB_1010fc470:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1010fc52c);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          func_0x000107c61574(lVar11);
          goto LAB_1010fc504;
        }
        uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Entry: 1010fc9b4; end: 1010fcbe7;  */

ulong FUN_1010fc9b4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fcadc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1010fc268(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fcad8);
      (*pcVar1)();
    }
    FUN_1010fcd64(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1010fcbe8; end: 1010fcd63;  */

undefined * FUN_1010fcbe8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fcd64);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d5df80;
    func_0x0001000285a8(0x112d5df80,&UNK_10d924680);
    lVar5 = 0;
    func_0x000101100668();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fcd5c);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fcd60);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000101100668();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1010fcd64; end: 1010fce7b;  */

long FUN_1010fcd64(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fce78);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fce7c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1010ffb00(0,0x112d5dfd0,&PTR_PTR_1126b08b8);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1010ffb00(0,0x112d5dfd0,&PTR_PTR_1126b08b8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fce74);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1010fce7c; end: 1010fd4ff;  */

void FUN_1010fce7c(long *param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar9;
  long lVar10;
  long unaff_x21;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lStack_e0;
  ulong *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  long lStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_58;
  
  lVar5 = 0;
  plStack_d0 = param_1;
  func_0x000101100668();
  lStack_c8 = *(long *)(lVar5 + -8);
  lStack_68 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar5 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12;
  lStack_b0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_00;
  lStack_70 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = lVar5 - extraout_x12_01;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar17 = param_3[1];
  puStack_d8 = param_3;
  if (0 < (long)uVar17) {
    uVar9 = 0;
    lStack_c0 = unaff_x21;
    lStack_e0 = param_4;
    do {
      uVar18 = uVar9 + 1;
      uStack_b8 = uVar9;
      if ((long)uVar18 < (long)uVar17) {
        uVar11 = *param_3;
        uVar14 = *(ulong *)(lStack_c8 + 0x48);
        lVar10 = uVar11 + uVar14 * uVar18;
        FUN_1010fe5b8(lVar10,lVar5,0x101100668);
        lVar12 = lStack_70;
        FUN_1010fe5b8(uVar11 + uVar14 * uVar9,lStack_70,0x101100668);
        lVar15 = lVar5 + *(int *)(lStack_68 + 0x1c);
        func_0x000107c5ee78(lVar15,lVar12 + *(int *)(lStack_68 + 0x1c));
        uStack_88 = CONCAT44(uStack_88._4_4_,(int)lVar15);
        func_0x0001010fe640(lVar12,0x101100668);
        func_0x0001010fe640(lVar5,0x101100668);
        lVar15 = uVar11 + uVar14 * (uVar9 + 2);
        uVar9 = uVar9 + 2;
        uStack_80 = uVar14;
        do {
          uVar11 = uVar9;
          uVar18 = uVar17;
          if (uVar17 == uVar11) break;
          FUN_1010fe5b8(lVar15,lVar5,0x101100668);
          lVar16 = lStack_70;
          FUN_1010fe5b8(lVar10,lStack_70,0x101100668);
          lVar12 = lVar5 + *(int *)(lStack_68 + 0x1c);
          func_0x000107c5ee78(lVar12,lVar16 + *(int *)(lStack_68 + 0x1c));
          func_0x0001010fe640(lVar16,0x101100668);
          func_0x0001010fe640(lVar5,0x101100668);
          lVar15 = lVar15 + uStack_80;
          lVar10 = lVar10 + uStack_80;
          uVar9 = uVar11 + 1;
          uVar18 = uVar11;
        } while (((uint)uStack_88 & 1) == ((uint)lVar12 & 1));
        param_4 = lStack_e0;
        if ((uStack_88 & 1) != 0) {
          if ((long)uVar18 < (long)uStack_b8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4d4);
            (*pcVar3)();
          }
          if ((long)uStack_b8 < (long)uVar18) {
            lVar10 = 0;
            uVar9 = *param_3;
            lVar16 = uStack_80 * (uVar18 - 1);
            lVar12 = uVar18 * uStack_80;
            lVar15 = uStack_b8 * uStack_80;
            uVar17 = uStack_b8;
            uStack_88 = uVar9;
            do {
              if (uVar17 != (uVar18 + lVar10) - 1) {
                if (uVar9 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4f4);
                  (*pcVar3)();
                }
                uVar9 = uVar9 + lVar15;
                func_0x0001010fe5fc(uVar9,lStack_b0,0x101100668);
                if ((lVar15 < lVar16) || (uStack_88 + lVar12 <= uVar9)) {
                  func_0x000107c61414(uVar9,uStack_88 + lVar16,1,lStack_68);
                }
                else if (uStack_80 != 0) {
                  func_0x000107c61410(uVar9,uStack_88 + lVar16,1,lStack_68);
                }
                func_0x0001010fe5fc(lStack_b0,uStack_88 + lVar16,0x101100668);
                uVar9 = uStack_88;
              }
              uVar17 = uVar17 + 1;
              lVar10 = lVar10 + -1;
              lVar16 = lVar16 - uStack_80;
              lVar12 = lVar12 - uStack_80;
              lVar15 = lVar15 + uStack_80;
              param_3 = puStack_d8;
              param_4 = lStack_e0;
            } while ((long)uVar17 < (long)(uVar18 + lVar10));
          }
        }
      }
      uVar17 = param_3[1];
      lVar15 = lStack_c0;
      uVar9 = uVar18;
      if ((long)uVar18 < (long)uVar17) {
        if (SBORROW8(uVar18,uStack_b8)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4d0);
          (*pcVar3)();
        }
        if ((long)(uVar18 - uStack_b8) < param_4) {
          if (SCARRY8(uStack_b8,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4d8);
            (*pcVar3)();
          }
          uVar11 = uStack_b8 + param_4;
          if ((long)uVar17 <= (long)(uStack_b8 + param_4)) {
            uVar11 = uVar17;
          }
          if ((long)uVar11 < (long)uStack_b8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4dc);
            (*pcVar3)();
          }
          if (uVar18 != uVar11) {
            uVar14 = *param_3;
            lStack_a8 = *(long *)(lStack_c8 + 0x48);
            uVar17 = uVar14 + lStack_a8 * (uVar18 - 1);
            lVar13 = -lStack_a8;
            lVar10 = uStack_b8 - uVar18;
            lVar12 = uVar14 + uVar18 * lStack_a8;
            lVar16 = lStack_68;
            uStack_a0 = uVar11;
            lVar1 = lVar12;
            lVar2 = lVar10;
            uVar11 = uVar17;
LAB_1010fd228:
            do {
              uStack_80 = uVar18;
              uStack_88 = uVar11;
              lStack_90 = lVar2;
              lStack_98 = lVar1;
              FUN_1010fe5b8(lVar12,lVar5,0x101100668);
              lVar15 = lStack_70;
              FUN_1010fe5b8(uVar17,lStack_70,0x101100668);
              uVar9 = lVar5 + *(int *)(lVar16 + 0x1c);
              func_0x000107c5ee78(uVar9,lVar15 + *(int *)(lVar16 + 0x1c));
              func_0x0001010fe640(lVar15,0x101100668);
              func_0x0001010fe640(lVar5,0x101100668);
              lVar15 = lStack_78;
              lVar16 = lStack_68;
              if ((uVar9 & 1) != 0) {
                if (uVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4e0);
                  (*pcVar3)();
                }
                func_0x0001010fe5fc(lVar12,lStack_78,0x101100668);
                lVar16 = lStack_68;
                func_0x000107c61414(lVar12,uVar17,1,lStack_68);
                func_0x0001010fe5fc(lVar15,uVar17,0x101100668);
                uVar17 = uVar17 + lVar13;
                lVar12 = lVar12 + lVar13;
                bVar4 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                lVar1 = lStack_98;
                lVar2 = lStack_90;
                uVar11 = uStack_88;
                uVar18 = uStack_80;
                if (bVar4) goto LAB_1010fd228;
              }
              uVar17 = uStack_88 + lStack_a8;
              lVar10 = lStack_90 + -1;
              lVar12 = lStack_98 + lStack_a8;
              lVar15 = lStack_c0;
              param_3 = puStack_d8;
              param_4 = lStack_e0;
              uVar9 = uStack_a0;
              lVar1 = lVar12;
              lVar2 = lVar10;
              uVar11 = uVar17;
              uVar18 = uStack_80 + 1;
            } while (uStack_80 + 1 != uStack_a0);
          }
        }
      }
      puVar8 = puStack_58;
      if ((long)uVar9 < (long)uStack_b8) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4c4);
        (*pcVar3)();
      }
      puVar6 = puStack_58;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar17 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar17) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar17 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar17 + 1;
      *(ulong *)(puVar8 + uVar17 * 0x10 + 0x20) = uStack_b8;
      *(ulong *)(puVar8 + uVar17 * 0x10 + 0x28) = uVar9;
      puStack_58 = puVar8;
      if (*plStack_d0 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4f8);
        (*pcVar3)();
      }
      FUN_1010fd6e0(&puStack_58,*plStack_d0,param_3);
      puVar8 = puStack_58;
      if (lVar15 != 0) goto LAB_1010fd494;
      uVar17 = param_3[1];
      lStack_c0 = lVar15;
    } while ((long)uVar9 < (long)uVar17);
    unaff_x21 = 0;
  }
  puVar8 = puStack_58;
  lVar5 = *plStack_d0;
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd500);
    (*pcVar3)();
  }
  puVar6 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_100e06d54();
  }
  uVar17 = *(ulong *)(puVar8 + 0x10);
  while( true ) {
    puStack_58 = puVar8;
    if (uVar17 < 2) {
      func_0x000107c6142c(puVar8);
      return;
    }
    uVar9 = *param_3;
    if (uVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4fc);
      (*pcVar3)();
    }
    lVar12 = uVar17 - 1;
    lVar16 = *(long *)(puVar8 + uVar17 * 0x10);
    lVar15 = *(long *)(puVar8 + lVar12 * 0x10 + 0x28);
    lVar10 = *(long *)(lStack_c8 + 0x48);
    FUN_1010fd960(uVar9 + lVar10 * lVar16,uVar9 + lVar10 * *(long *)(puVar8 + lVar12 * 0x10 + 0x20),
                  uVar9 + lVar10 * lVar15,lVar5);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar16) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4c8);
      (*pcVar3)();
    }
    puVar6 = puVar8;
    func_0x000107c61558();
    if (((ulong)puVar6 & 1) == 0) {
      FUN_100e06d54();
    }
    if (*(ulong *)(puVar8 + 0x10) <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fd4cc);
      (*pcVar3)();
    }
    *(long *)(puVar8 + uVar17 * 0x10) = lVar16;
    *(long *)((long)(puVar8 + uVar17 * 0x10) + 8) = lVar15;
    puStack_58 = puVar8;
    func_0x0001000a97cc(lVar12);
    uVar17 = *(ulong *)(puStack_58 + 0x10);
    puVar8 = puStack_58;
    param_3 = puStack_d8;
  }
LAB_1010fd494:
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 1010fd500; end: 1010fd6df;  */

void FUN_1010fd500(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar3 = 0;
  func_0x000101100668();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar10 = &stack0xffffffffffffff60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (long)puVar10 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar11 - extraout_x13_00;
  if (param_3 != param_2) {
    lVar5 = *param_4;
    lVar6 = *(long *)(extraout_x12 + 0x48);
    lVar7 = lVar5 + lVar6 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar13 = lVar5 + lVar6 * param_3;
    lVar14 = lVar13;
    lVar9 = param_1;
    lVar8 = lVar7;
LAB_1010fd638:
    do {
      FUN_1010fe5b8(lVar13,lVar12,0x101100668);
      FUN_1010fe5b8(lVar7,lVar11,0x101100668);
      uVar4 = lVar12 + *(int *)(lVar3 + 0x1c);
      func_0x000107c5ee78(uVar4,lVar11 + *(int *)(lVar3 + 0x1c));
      func_0x0001010fe640(lVar11,0x101100668);
      func_0x0001010fe640(lVar12,0x101100668);
      if ((uVar4 & 1) != 0) {
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fd6e0);
          (*pcVar1)();
        }
        func_0x0001010fe5fc(lVar13,puVar10,0x101100668);
        func_0x000107c61414(lVar13,lVar7,1,lVar3);
        func_0x0001010fe5fc(puVar10,lVar7,0x101100668);
        lVar7 = lVar7 + -lVar6;
        lVar13 = lVar13 + -lVar6;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_1010fd638;
      }
      param_3 = param_3 + 1;
      lVar7 = lVar8 + lVar6;
      param_1 = lVar9 + -1;
      lVar13 = lVar14 + lVar6;
      lVar14 = lVar13;
      lVar9 = param_1;
      lVar8 = lVar7;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1010fd6e0; end: 1010fd95f;  */

undefined8 FUN_1010fd6e0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar5 = uVar8;
    func_0x000107c61558();
    if ((uVar5 & 1) == 0) {
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar6 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1010fd7b4;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd948);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar7 = plVar1[1];
        bVar3 = SBORROW8(lVar7,lVar6);
        lVar7 = lVar7 - lVar6;
LAB_1010fd818:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd938);
          (*pcVar2)();
        }
        lVar6 = uVar8 + lVar9 * 0x10;
        lVar4 = *(long *)(lVar6 + 0x20);
        lVar6 = *(long *)(lVar6 + 0x28);
        if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd940);
          (*pcVar2)();
        }
        lVar10 = lVar9;
        if (lVar6 - lVar4 < lVar7) {
          return 1;
        }
      }
      else {
        lVar7 = uVar8 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar7 + -0x38),*(long *)(lVar7 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd920);
          (*pcVar2)();
        }
        lVar6 = *(long *)(lVar7 + -0x28) - *(long *)(lVar7 + -0x30);
        if (SBORROW8(*(long *)(lVar7 + -0x28),*(long *)(lVar7 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd924);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar4 = *plVar1;
        lVar10 = plVar1[1];
        lVar12 = lVar10 - lVar4;
        if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd92c);
          (*pcVar2)();
        }
        if (SCARRY8(lVar6,lVar12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd934);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar6 + lVar12 < *(long *)(lVar7 + -0x38) - *(long *)(lVar7 + -0x40)) {
LAB_1010fd7b4:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd928);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + uVar5 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar7 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd930);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar4 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar4;
          if (SBORROW8(lVar10,lVar4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd93c);
            (*pcVar2)();
          }
          if (SCARRY8(lVar7,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd944);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar7 + lVar12 < lVar6) goto LAB_1010fd818;
          lVar10 = uVar5 - 2;
          if (lVar12 <= lVar6) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar7 = *plVar1;
          lVar4 = plVar1[1];
          if (SBORROW8(lVar4,lVar7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd94c);
            (*pcVar2)();
          }
          lVar10 = uVar5 - 2;
          if (lVar4 - lVar7 <= lVar6) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd914);
        (*pcVar2)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd960);
        (*pcVar2)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar6 = *plVar1;
      lVar7 = plVar1[1];
      lVar4 = 0;
      func_0x000101100668();
      lVar4 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
      FUN_1010fd960(lVar9 + lVar4 * lVar12,lVar9 + lVar4 * lVar6,lVar9 + lVar4 * lVar7,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd918);
        (*pcVar2)();
      }
      uVar5 = uVar8;
      func_0x000107c61558();
      if ((uVar5 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fd91c);
        (*pcVar2)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar5 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Entry: 1010fd960; end: 1010fde13;  */

undefined8 FUN_1010fd960(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long extraout_x12;
  long lVar7;
  long extraout_x13;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_58;
  
  lVar3 = 0;
  func_0x000101100668();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar6 - extraout_x13;
  lVar7 = *(long *)(extraout_x12 + 0x48);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fde0c);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fde10);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fde14);
    (*pcVar2)();
  }
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = (long)(param_2 - param_1) / lVar7;
  }
  lVar8 = 0;
  if (lVar7 != 0) {
    lVar8 = (long)(param_3 - param_2) / lVar7;
  }
  uStack_58 = param_1;
  uStack_68 = param_4;
  if (lVar9 < lVar8) {
    lVar8 = lVar9 * lVar7;
    if ((param_4 < param_1) || (param_1 + lVar8 <= param_4)) {
      func_0x000107c61414(param_4,param_1,lVar9,lVar3);
    }
    else if (param_4 != param_1) {
      func_0x000107c61410(param_4,param_1,lVar9,lVar3);
    }
    uVar10 = param_4 + lVar8;
    uStack_70 = uVar10;
    if (0 < lVar8 && param_2 < param_3) {
      do {
        FUN_1010fe5b8(param_2,lVar13,0x101100668);
        FUN_1010fe5b8(param_4,puVar6,0x101100668);
        uVar4 = lVar13 + *(int *)(lVar3 + 0x1c);
        func_0x000107c5ee78(uVar4,puVar6 + *(int *)(lVar3 + 0x1c));
        func_0x0001010fe640(puVar6,0x101100668);
        func_0x0001010fe640(lVar13,0x101100668);
        if ((uVar4 & 1) == 0) {
          uVar12 = param_4 + lVar7;
          uVar4 = param_2;
          uVar1 = uVar12;
          if ((param_1 < param_4) || (uVar12 <= param_1)) {
            func_0x000107c61414(param_1,param_4,1,lVar3);
          }
          else if (param_1 != param_4) {
            func_0x000107c61410(param_1,param_4,1,lVar3);
          }
        }
        else {
          uVar4 = param_2 + lVar7;
          uVar12 = param_4;
          if ((param_1 < param_2) || (uVar4 <= param_1)) {
            func_0x000107c61414(param_1,param_2,1,lVar3);
            uVar1 = uStack_68;
          }
          else {
            uVar1 = uStack_68;
            if (param_1 != param_2) {
              func_0x000107c61410(param_1,param_2,1,lVar3);
              uVar1 = uStack_68;
            }
          }
        }
        uStack_68 = uVar1;
        param_1 = param_1 + lVar7;
        uStack_58 = param_1;
      } while ((uVar12 < uVar10) &&
              (param_2 = uVar4, param_4 = uVar12, uStack_58 = param_1, uVar4 < param_3));
    }
  }
  else {
    lVar9 = lVar8 * lVar7;
    if ((param_4 < param_2) || (param_2 + lVar9 <= param_4)) {
      func_0x000107c61414(param_4,param_2,lVar8,lVar3);
    }
    else if (param_4 != param_2) {
      func_0x000107c61410(param_4,param_2,lVar8,lVar3);
    }
    uVar10 = param_4 + lVar9;
    uStack_70 = uVar10;
    uStack_58 = param_2;
    if (0 < lVar9 && param_1 < param_2) {
      lVar7 = -lVar7;
      uStack_58 = param_2;
      uStack_a8 = param_1;
      do {
        uVar4 = uStack_58 + lVar7;
        uVar12 = param_3;
        uStack_a0 = uStack_58;
        while( true ) {
          param_3 = uVar12 + lVar7;
          uVar1 = uVar10 + lVar7;
          FUN_1010fe5b8(uVar1,lVar13,0x101100668);
          FUN_1010fe5b8(uVar4,puVar6,0x101100668);
          uVar5 = lVar13 + *(int *)(lVar3 + 0x1c);
          func_0x000107c5ee78(uVar5,puVar6 + *(int *)(lVar3 + 0x1c));
          func_0x0001010fe640(puVar6,0x101100668);
          func_0x0001010fe640(lVar13,0x101100668);
          uVar11 = uStack_a8;
          if ((uVar5 & 1) != 0) break;
          uStack_70 = uVar1;
          if ((uVar12 < uVar10) || (uVar10 <= param_3)) {
            func_0x000107c61414(param_3,uVar1,1,lVar3);
          }
          else if (uVar12 != uVar10) {
            func_0x000107c61410(param_3,uVar1,1,lVar3);
          }
          uVar10 = uVar1;
          uVar12 = param_3;
          if (uVar1 <= param_4) goto LAB_1010fdc58;
        }
        if ((uVar12 < uStack_a0) || (uStack_a0 <= param_3)) {
          func_0x000107c61414(param_3,uVar4,1,lVar3);
          uVar11 = uStack_a8;
        }
        else if (uVar12 != uStack_a0) {
          func_0x000107c61410(param_3,uVar4,1,lVar3);
        }
        uStack_58 = uVar4;
      } while ((param_4 < uVar10) && (uVar11 < uVar4));
    }
  }
LAB_1010fdc58:
  FUN_1010fde14(&uStack_58,&uStack_68,&uStack_70);
  return 1;
}



/* Entry: 1010fde14; end: 1010fdec3;  */

void FUN_1010fde14(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  lVar7 = *param_3;
  lVar3 = 0;
  func_0x000101100668();
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fdec0);
    (*pcVar2)();
  }
  if (lVar7 - uVar5 != -0x8000000000000000 || lVar4 != -1) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (long)(lVar7 - uVar5) / lVar4;
    }
    if ((uVar5 <= uVar6) && (uVar6 < uVar5 + lVar1 * lVar4)) {
      if (uVar6 != uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbffc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_arrayInitWithTakeBackToFront_11034f240)(uVar6,uVar5);
        return;
      }
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_arrayInitWithTakeFrontToBack_11034f248)(uVar6,uVar5,lVar1,lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fdec4);
  (*pcVar2)();
}



/* Entry: 1010fdec4; end: 1010fe003;  */

void FUN_1010fdec4(void)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uStack_58;
  
  uVar10 = *unaff_x20;
  uVar11 = *(ulong *)(uVar10 + 0x10);
  uVar1 = uVar11 - 2;
  if (1 < uVar11) {
    uVar12 = 0;
    do {
      uStack_58 = 0;
      func_0x000107c61598(&uStack_58,8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uStack_58;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar11;
      lVar8 = SUB168(auVar2 * auVar4,8);
      if (uStack_58 * uVar11 < uVar11) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = -uVar11 / uVar11;
        }
        uVar13 = -uVar11 - uVar13 * uVar11;
        if (uStack_58 * uVar11 < uVar13) {
          do {
            uStack_58 = 0;
            func_0x000107c61598(&uStack_58,8);
          } while (uStack_58 * uVar11 < uVar13);
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uStack_58;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar11;
          lVar8 = SUB168(auVar3 * auVar5,8);
        }
      }
      uVar13 = uVar12 + lVar8;
      if (SCARRY8(uVar12,lVar8)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1010fdff4);
        (*pcVar6)();
      }
      if (uVar12 != uVar13) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010fdff8);
          (*pcVar6)();
        }
        if (*(ulong *)(uVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010fdffc);
          (*pcVar6)();
        }
        uVar14 = *(undefined8 *)(uVar10 + 0x20 + uVar12 * 8);
        uVar15 = *(undefined8 *)(uVar10 + 0x20 + uVar13 * 8);
        uVar9 = uVar10;
        func_0x000107c61558();
        if ((uVar9 & 1) == 0) {
          FUN_1010fe188();
        }
        uVar9 = *(ulong *)(uVar10 + 0x10);
        if (uVar9 <= uVar12) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010fe000);
          (*pcVar6)();
        }
        *(undefined8 *)(uVar10 + 0x20 + uVar12 * 8) = uVar15;
        if (uVar9 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1010fe004);
          (*pcVar6)();
        }
        *(undefined8 *)(uVar10 + 0x20 + uVar13 * 8) = uVar14;
        *unaff_x20 = uVar10;
      }
      uVar11 = uVar11 - 1;
      bVar7 = uVar12 != uVar1;
      uVar12 = uVar12 + 1;
    } while (bVar7);
  }
  return;
}



/* Entry: 1010fe004; end: 1010fe0bb;  */

void FUN_1010fe004(ulong param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = param_2 - param_1;
  if (param_2 < param_1) {
    if ((long)(param_1 - param_2) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fe0b8);
      (*pcVar1)();
    }
    lVar6 = -(param_1 - param_2);
  }
  else if (lVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fe0bc);
    (*pcVar1)();
  }
  if (lVar6 == 0) {
    return;
  }
  lVar2 = lVar6;
  func_0x0001010fc308(lVar6,0);
  lVar3 = 0;
  if (param_1 <= param_2) {
    lVar3 = param_2 - param_1;
  }
  if (param_1 != param_2) {
    lVar4 = 0x20;
    uVar5 = param_1;
    do {
      lVar6 = lVar6 + -1;
      if (param_2 < param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fe0b0);
        (*pcVar1)();
      }
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fe0b4);
        (*pcVar1)();
      }
      *(ulong *)(lVar2 + lVar4) = uVar5;
      if (lVar6 == 0) {
        return;
      }
      uVar5 = uVar5 + 1;
      lVar3 = lVar3 + -1;
      lVar4 = lVar4 + 8;
    } while (param_2 != uVar5);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fe094);
  (*pcVar1)();
}



/* Entry: 1010fe0bc; end: 1010fe187;  */

undefined * FUN_1010fe0bc(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fe188);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = (undefined *)0x112d5dfa8;
      func_0x0001000285a8(0x112d5dfa8,&UNK_10d9473c0);
      func_0x000107c613fc();
      puVar5 = puVar4;
      func_0x000107c610a4();
      puVar1 = puVar5 + -0x19;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 3) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1010fe184);
      (*pcVar3)();
    }
    func_0x000107c610b4(puVar4 + 0x20,param_2 + param_3 * 8,lVar2 * 8);
  }
  return puVar4;
}



/* Entry: 1010fe188; end: 1010fe1b3;  */

void FUN_1010fe188(long param_1)

{
  func_0x0001010fcadc(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 1010fe1b4; end: 1010fe1c7;  */

/* WARNING: Removing unreachable block (ram,0x0001010fcc0c) */
/* WARNING: Removing unreachable block (ram,0x0001010fcc1c) */
/* WARNING: Removing unreachable block (ram,0x0001010fcd60) */
/* WARNING: Removing unreachable block (ram,0x0001010fcc28) */
/* WARNING: Removing unreachable block (ram,0x0001010fcc30) */
/* WARNING: Removing unreachable block (ram,0x0001010fccf0) */
/* WARNING: Removing unreachable block (ram,0x0001010fccf8) */
/* WARNING: Removing unreachable block (ram,0x0001010fcd28) */
/* WARNING: Removing unreachable block (ram,0x0001010fcd08) */
/* WARNING: Removing unreachable block (ram,0x0001010fcd10) */
/* WARNING: Removing unreachable block (ram,0x0001010fcd30) */

undefined * FUN_1010fe1b4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar7) {
    lVar6 = lVar7;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    puVar2 = (undefined *)0x112d5df80;
    func_0x0001000285a8(0x112d5df80,&UNK_10d924680);
    lVar3 = 0;
    func_0x000101100668();
    lVar8 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
    uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
    uVar9 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar2,uVar9 + lVar8 * lVar6,uVar5 | 7);
    puVar4 = puVar2;
    func_0x000107c610a4();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fcd5c);
      (*pcVar1)();
    }
    lVar6 = (long)puVar4 - uVar9;
    if (lVar6 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1010fcd60);
      (*pcVar1)();
    }
    lVar3 = 0;
    if (lVar8 != 0) {
      lVar3 = lVar6 / lVar8;
    }
    *(long *)(puVar2 + 0x10) = lVar7;
    *(long *)(puVar2 + 0x18) = lVar3 << 1;
  }
  lVar6 = 0;
  func_0x000101100668();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  func_0x000107c6140c(puVar2 + uVar5,param_1 + uVar5,lVar7,lVar6);
  func_0x000107c6142c(param_1);
  return puVar2;
}



/* Entry: 1010fe1c8; end: 1010fe43f;  */

undefined * FUN_1010fe1c8(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar7 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d5dff0,&UNK_10db286d0);
    puVar3 = puVar7;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      puVar5 = &uStack_88;
      func_0x0001010ffb40(param_1,puVar5,0x112d5dff8,&UNK_10d9246e0);
      uVar1 = uStack_88;
      uVar4 = uStack_88;
      FUN_1010f5ddc();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fe2e8);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      func_0x000100102924(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010fe2ec);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      puVar7 = puVar7 + -1;
    } while (puVar7 != (undefined *)0x0);
    func_0x000107c61574(puVar3);
  }
  return puVar3;
}



/* Entry: 1010fe440; end: 1010fe467;  */

undefined1  [16] FUN_1010fe440(ulong param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 auStack_168 [2];
  undefined8 auStack_158 [4];
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined1 *puStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_80;
  undefined8 auStack_78 [4];
  long lStack_58;
  
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar8 = *(undefined1 **)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  if ((param_1 & 1) != 0) {
    puVar7 = &stack0xffffffffffffffb8;
    func_0x000107c61428(lVar11 + 0x10,puVar7,0,0);
    lVar11 = lVar11 + 0x10;
    func_0x000107c61648();
    if (lVar11 != 0) {
      if (lVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f7bd0);
        (*pcVar1)();
      }
      FUN_1010f7bd0(lVar2,puVar8);
      func_0x000107c61574(lVar11);
      puVar7 = puVar8;
    }
    auVar17._8_8_ = puVar7;
    auVar17._0_8_ = lVar11;
    return auVar17;
  }
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010f7bcc);
    (*pcVar1)();
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = (undefined *)0xd000000000000035;
  uStack_90 = 0x800000010ef268c0;
  puStack_80 = PTR___sSSN_11034da80;
  func_0x000100102924(&puStack_98,auStack_78);
  func_0x000107c61434(0x800000010ef268c0);
  puVar16 = puVar5;
  func_0x000107c61558(puVar5);
  puStack_98 = puVar5;
  uVar9 = 0x6567617373656d;
  func_0x0001001029e8(auStack_78,0x6567617373656d,0xe700000000000000,puVar16);
  puVar5 = puStack_98;
  lVar11 = lVar2;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar11 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar15 = PTR___sSSSHsWP_11034da90;
  puVar16 = PTR___sSSN_11034da80;
  lVar3 = lVar2;
  func_0x000107c5f9e8();
  func_0x000107c61170(lVar2);
  puVar12 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar14 = puVar5;
  func_0x000107c5f9dc(puVar5,puVar16,PTR___sypN_11034f1a8 + 8,puVar15);
  auStack_78[0] = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  uVar9 = auStack_78[0];
  func_0x000107c61174(auStack_78[0]);
  if (puVar12 == (undefined *)0x0) {
    uVar4 = uVar9;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
    func_0x000107c614ac(uVar4);
    puVar15 = (undefined *)0x0;
    puVar16 = (undefined *)0xf000000000000000;
  }
  else {
    puVar15 = puVar12;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar12);
  }
  lVar2 = lVar3;
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  if ((ulong)puVar16 >> 0x3c < 0xf) {
    puVar14 = puVar15;
    func_0x000107c5ee20(puVar15,puVar16);
    func_0x0001000b44c0(puVar15,puVar16);
  }
  else {
    puVar14 = (undefined *)0x0;
    puVar16 = puVar12;
  }
  puVar15 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar14);
  func_0x000107c4d664(puVar8);
  func_0x000107c6142c(puVar5);
  puVar12 = puVar15;
  func_0x000107c61170(puVar15);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar18._8_8_ = puVar16;
    auVar18._0_8_ = puVar12;
    return auVar18;
  }
  func_0x000107c60e78();
  puStack_c0 = puVar5;
  puStack_a8 = &UNK_103dacc60;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puStack_d0 = puVar15;
  lStack_c8 = lVar2;
  puStack_b8 = puVar8;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61168();
  puVar6 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar12,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puStack_e0 = (undefined *)0x0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar12);
  puVar16 = puStack_e0;
  func_0x000107c61174();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = puVar16;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar16);
    func_0x000107c61654();
    puVar16 = puVar5;
    func_0x000107c614ac(puVar5);
    puVar12 = (undefined *)0x0;
    puVar13 = (undefined8 *)0xf000000000000000;
    puVar10 = puVar6;
  }
  else {
    puVar12 = puVar5;
    func_0x000107c5ee30();
    puVar16 = puVar5;
    puVar10 = puVar6;
    func_0x000107c61170(puVar5);
    puVar13 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar19._8_8_ = puVar13;
    auVar19._0_8_ = puVar12;
    return auVar19;
  }
  func_0x000107c60e78();
  puStack_f8 = &SUB_103dacd78;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = puVar14;
  lStack_128 = lVar11;
  puStack_120 = puVar15;
  puStack_118 = puVar5;
  puStack_110 = puVar13;
  puStack_108 = puVar12;
  ppuStack_100 = &puStack_b0;
  if ((ulong)puVar10 >> 0x3c < 0xf) {
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar16,puVar10);
    puVar15 = puVar16;
    func_0x000107c5ee20(puVar16,puVar10);
    auStack_158[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    uVar9 = auStack_158[0];
    if (puVar5 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_158,puVar5);
      func_0x0001000b44c0(puVar16,puVar10);
      func_0x000107c615e8(puVar5);
      uVar9 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar6 = auStack_168;
      puVar10 = auStack_158;
      func_0x000107c6147c(puVar6,puVar10,PTR___sypN_11034f1a8 + 8,uVar9,6);
      if ((int)puVar6 == 0) {
        auStack_168[0] = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar4 = auStack_158[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar9);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar16,puVar10);
    func_0x000107c614ac(uVar9);
  }
  auStack_168[0] = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    auVar20._8_8_ = puVar10;
    auVar20._0_8_ = auStack_168[0];
    return auVar20;
  }
  func_0x000107c60e78(auStack_168[0]);
  return ZEXT816(0x11070f3e8);
}



/* Entry: 1010fe468; end: 1010fe487;  */

void FUN_1010fe468(void)

{
  func_0x000107c61168(&PTR_PTR_112d5de88);
  return;
}



/* Entry: 1010fe488; end: 1010fe4db;  */

/* WARNING: Removing unreachable block (ram,0x0001010f87e8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8878) */
/* WARNING: Removing unreachable block (ram,0x0001010f88b8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8a5c) */
/* WARNING: Removing unreachable block (ram,0x0001010f88c8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8ab8) */
/* WARNING: Removing unreachable block (ram,0x0001010f8ac0) */
/* WARNING: Removing unreachable block (ram,0x0001010f88d0) */
/* WARNING: Removing unreachable block (ram,0x0001010f88d4) */
/* WARNING: Removing unreachable block (ram,0x0001010f8b0c) */
/* WARNING: Removing unreachable block (ram,0x0001010f8b20) */
/* WARNING: Removing unreachable block (ram,0x0001010f8b54) */
/* WARNING: Removing unreachable block (ram,0x0001010f8bc8) */

void FUN_1010fe488(long param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [152];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar13 = 0;
  func_0x000101101310();
  uVar17 = (ulong)*(byte *)(*(long *)(lVar13 + -8) + 0x50);
  lVar13 = *(long *)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar1 = (char *)(unaff_x20 + (uVar17 + 0x28 & (uVar17 ^ 0xffffffffffffffff)));
  func_0x000107c61428(lVar13 + 0x10,auStack_90,0,0);
  lVar13 = lVar13 + 0x10;
  func_0x000107c61648();
  if (lVar13 != 0) {
    if (param_2 == 0) {
      if (param_1 != 0) {
        puStack_98 = (undefined *)0x0;
        puVar3 = &UNK_1103847d8;
        func_0x000107c613fc(&UNK_1103847d8,0x18,7);
        *(undefined ***)(puVar3 + 0x10) = &puStack_98;
        puVar4 = &UNK_110384800;
        func_0x000107c613fc(&UNK_110384800,0x20,7);
        *(code **)(puVar4 + 0x10) = FUN_1010fe4dc;
        *(undefined **)(puVar4 + 0x18) = puVar3;
        puVar8 = PTR___NSConcreteStackBlock_11034bd00;
        pcStack_a8 = (code *)0x1010ffbc0;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        pcStack_b8 = FUN_1010f8c0c;
        puStack_b0 = &UNK_110384818;
        ppuVar5 = &puStack_c8;
        puStack_a0 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        puVar4 = puStack_a0;
        func_0x000107c61174();
        func_0x000107c61574(puVar4);
        puVar4 = &UNK_110384850;
        func_0x000107c613fc(&UNK_110384850,0x18,7);
        *(undefined ***)(puVar4 + 0x10) = &puStack_98;
        puVar6 = &UNK_110384878;
        ppuVar14 = (undefined **)0x20;
        func_0x000107c613fc(&UNK_110384878,0x20,7);
        *(code **)(puVar6 + 0x10) = FUN_1010fe508;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        pcStack_a8 = FUN_1010fe518;
        puStack_c8 = puVar8;
        uStack_c0 = 0x42000000;
        pcStack_b8 = (code *)0x1010f8c4c;
        puStack_b0 = &UNK_110384890;
        ppuVar7 = &puStack_c8;
        puStack_a0 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        func_0x000107c61574(puStack_a0);
        func_0x000107c4c59c(param_1);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c60bd0(ppuVar5);
        puVar6 = puStack_98;
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (*pcVar1 == '\0') {
          puVar8 = puStack_98;
          func_0x000107c61174(puStack_98);
          lVar9 = lVar11;
          func_0x000107c4b1dc(lVar11);
          func_0x000107c61180();
          lVar10 = lVar9;
          ppuVar5 = ppuVar14;
          func_0x000107c5faec();
          func_0x000107c61170(lVar9);
          FUN_1010f8cac(puVar6,pcVar1,lVar10,ppuVar5);
          func_0x000107c61170(puVar8);
          func_0x000107c6142c(ppuVar5);
          puVar8 = puVar6;
        }
        puStack_c8 = puVar8;
        FUN_1010fe538();
        func_0x000107c61434(puVar8);
        puVar6 = &UNK_110384c18;
        ppuVar7 = &puStack_c8;
        func_0x000107c5eb4c(ppuVar7,&UNK_110384c18,ppuVar5);
        puVar15 = puVar6;
        func_0x000107c6142c(puVar8);
        lVar9 = lVar11;
        func_0x000107c50374();
        func_0x000107c61180();
        if (lVar9 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar15);
        }
        func_0x000107c4e33c(lVar11);
        func_0x000107c61180();
        puVar2 = PTR___sSSSHsWP_11034da90;
        puVar15 = PTR___sSSN_11034da80;
        lVar10 = lVar11;
        func_0x000107c5f9e8();
        func_0x000107c61170(lVar11);
        puVar12 = PTR_PTR_1126b0278;
        func_0x000107c610f8(PTR_PTR_1126b0278);
        func_0x00010006c00c(ppuVar7,puVar6);
        lVar11 = lVar10;
        func_0x000107c5f9dc(lVar10,puVar15,puVar15,puVar2);
        func_0x000107c6142c(lVar10);
        ppuVar5 = ppuVar7;
        func_0x000107c5ee20(ppuVar7,puVar6);
        func_0x00010006c090(ppuVar7,puVar6);
        func_0x000107c48368(puVar12);
        func_0x000107c61170(lVar9);
        func_0x000107c61170(lVar11);
        func_0x000107c61170(ppuVar5);
        func_0x000107c4d664(uVar16);
        func_0x000107c6142c(puVar8);
        func_0x00010006c090(ppuVar7,puVar6);
        func_0x000107c61170(puVar12);
        func_0x000107c61574(lVar13);
        func_0x000107c61170(param_1);
        puVar6 = puStack_98;
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar3);
        func_0x000107c61170(puVar6);
        return;
      }
      uStack_168 = 0xe700000000000000;
      uStack_170 = 0x6e776f6e6b6e75;
    }
    else {
      func_0x000107c614cc(param_2,auStack_160,auStack_178);
      func_0x000107c60640(uStack_170,uStack_168);
    }
    func_0x000103dac9b4(lVar11,8,uVar16,uStack_170,uStack_168);
    func_0x000107c61574(lVar13);
    func_0x000107c6142c(uStack_168);
  }
  return;
}



/* Entry: 1010fe4dc; end: 1010fe507;  */

void FUN_1010fe4dc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1010fe508; end: 1010fe517;  */

void FUN_1010fe508(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1010fe518; end: 1010fe537;  */

void FUN_1010fe518(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1010fe538; end: 1010fe5b7;  */

void FUN_1010fe538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5df70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d924ab0;
  func_0x000107c61520(&UNK_10d924ab0,&UNK_110384c18);
  puRam0000000112d5df70 = puVar1;
  return;
}



/* Entry: 1010fe5b8; end: 1010fe67b;  */

undefined8 FUN_1010fe5b8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1010fe67c; end: 1010fe777;  */

undefined * FUN_1010fe67c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d5df98,&UNK_10d9246a0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar10 = *puVar9;
      func_0x000107c61434(uVar3);
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1010fe774);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1010fe778);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar9 = puVar9 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1010fe778; end: 1010fefb3;  */

void FUN_1010fe778(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long lVar13;
  code *pcVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long alStack_d0 [4];
  long lStack_b0;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar10 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar15 = 0x112d373d0;
  lStack_b0 = lVar10;
  func_0x0001000285a8(0x112d373d0,&UNK_10d90f8f0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
  puVar9 = (undefined8 *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (long)puVar9 - extraout_x12;
  lVar10 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar10 = lVar17 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  alStack_d0[1] = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar11 = (undefined8 *)(lVar10 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_d0[3] = (long)puVar11 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = ((long)puVar11 - extraout_x12_01) - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_d0[2] = lVar12 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (lVar12 - extraout_x12_03) - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar20 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar13 - extraout_x12_06;
  lVar10 = 0;
  func_0x000101101310();
  func_0x0001010ffb40(param_1 + *(int *)(lVar10 + 0x1c),lVar19,0x112d373d8,&UNK_10d9014c0);
  func_0x0001010ffb40(param_1 + *(int *)(lVar10 + 0x20),lVar13,0x112d373d8,&UNK_10d9014c0);
  pcVar8 = *(code **)(lVar18 + 0x38);
  (*pcVar8)(lVar20,1,1,lVar2);
  lVar10 = (long)*(int *)(lVar15 + 0x30);
  func_0x0001010ffb40(lVar19,lVar17,0x112d373d8,&UNK_10d9014c0);
  func_0x0001010ffb40(lVar20,lVar17 + lVar10,0x112d373d8,&UNK_10d9014c0);
  pcVar16 = *(code **)(lVar18 + 0x30);
  lVar3 = lVar17;
  (*pcVar16)(lVar17,1,lVar2);
  lVar6 = alStack_d0[2];
  if ((int)lVar3 == 1) {
    FUN_1010ffaa0(lVar20,0x112d373d8,&UNK_10d9014c0);
    lVar10 = lVar17 + lVar10;
    (*pcVar16)(lVar10,1,lVar2);
    if ((int)lVar10 == 1) {
      FUN_1010ffaa0(lVar17,0x112d373d8,&UNK_10d9014c0);
      uVar21 = 1;
    }
    else {
LAB_1010feadc:
      FUN_1010ffaa0(lVar17,0x112d373d0,&UNK_10d90f8f0);
      uVar21 = 0;
    }
  }
  else {
    func_0x0001010ffb40(lVar17,alStack_d0[2],0x112d373d8,&UNK_10d9014c0);
    lVar3 = lVar17 + lVar10;
    (*pcVar16)(lVar3,1,lVar2);
    lVar1 = lStack_b0;
    if ((int)lVar3 == 1) {
      FUN_1010ffaa0(lVar20,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar18 + 8))(lVar6,lVar2);
      goto LAB_1010feadc;
    }
    (**(code **)(lVar18 + 0x20))(lStack_b0,lVar17 + lVar10,lVar2);
    uVar4 = 0x112d373e0;
    FUN_1010ffa38(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSQAAMc_110350be0);
    uVar21 = lVar6;
    func_0x000107c5fab8(lVar6,lVar1,lVar2,uVar4);
    pcVar14 = *(code **)(lVar18 + 8);
    (*pcVar14)(lVar1,lVar2);
    FUN_1010ffaa0(lVar20,0x112d373d8,&UNK_10d9014c0);
    (*pcVar14)(lVar6,lVar2);
    FUN_1010ffaa0(lVar17,0x112d373d8,&UNK_10d9014c0);
  }
  (*pcVar8)(lVar12,1,1,lVar2);
  lVar15 = (long)*(int *)(lVar15 + 0x30);
  func_0x0001010ffb40(lVar13,puVar9,0x112d373d8,&UNK_10d9014c0);
  func_0x0001010ffb40(lVar12,(long)puVar9 + lVar15,0x112d373d8,&UNK_10d9014c0);
  puVar5 = puVar9;
  (*pcVar16)(puVar9,1,lVar2);
  lVar10 = alStack_d0[3];
  if ((int)puVar5 == 1) {
    FUN_1010ffaa0(lVar12,0x112d373d8,&UNK_10d9014c0);
    lVar15 = (long)puVar9 + lVar15;
    (*pcVar16)(lVar15,1,lVar2);
    if ((int)lVar15 == 1) {
      FUN_1010ffaa0(puVar9,0x112d373d8,&UNK_10d9014c0);
      FUN_1010ffaa0(lVar13,0x112d373d8,&UNK_10d9014c0);
      FUN_1010ffaa0(lVar19,0x112d373d8,&UNK_10d9014c0);
      return;
    }
LAB_1010fece8:
    FUN_1010ffaa0(puVar9,0x112d373d0,&UNK_10d90f8f0);
    if ((uVar21 & 1) != 0) goto LAB_1010feedc;
  }
  else {
    func_0x0001010ffb40(puVar9,alStack_d0[3],0x112d373d8,&UNK_10d9014c0);
    lVar6 = (long)puVar9 + lVar15;
    (*pcVar16)(lVar6,1,lVar2);
    lVar3 = lStack_b0;
    if ((int)lVar6 == 1) {
      FUN_1010ffaa0(lVar12,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar18 + 8))(lVar10,lVar2);
      goto LAB_1010fece8;
    }
    (**(code **)(lVar18 + 0x20))(lStack_b0,(long)puVar9 + lVar15,lVar2);
    uVar4 = 0x112d373e0;
    FUN_1010ffa38(0x112d373e0,PTR___s10Foundation4DateVMa_110350bb8,
                  PTR___s10Foundation4DateVSQAAMc_110350be0);
    uVar7 = lVar10;
    func_0x000107c5fab8(lVar10,lVar3,lVar2,uVar4);
    pcVar8 = *(code **)(lVar18 + 8);
    (*pcVar8)(lVar3,lVar2);
    FUN_1010ffaa0(lVar12,0x112d373d8,&UNK_10d9014c0);
    (*pcVar8)(lVar10,lVar2);
    FUN_1010ffaa0(puVar9,0x112d373d8,&UNK_10d9014c0);
    if ((uVar21 & 1) != 0) {
      if ((uVar7 & 1) != 0) {
        FUN_1010ffaa0(lVar13,0x112d373d8,&UNK_10d9014c0);
        FUN_1010ffaa0(lVar19,0x112d373d8,&UNK_10d9014c0);
        return;
      }
      goto LAB_1010feedc;
    }
    if ((uVar7 & 1) != 0) {
      FUN_1010ffaa0(lVar13,0x112d373d8,&UNK_10d9014c0);
      FUN_1010ffaa0(lVar19,0x112d373d8,&UNK_10d9014c0);
      return;
    }
  }
  func_0x0001010ffb40(lVar19,puVar11,0x112d373d8,&UNK_10d9014c0);
  puVar9 = puVar11;
  (*pcVar16)(puVar11,1,lVar2);
  lVar15 = alStack_d0[1];
  if ((int)puVar9 == 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1010fefb0);
    (*pcVar8)();
  }
  func_0x0001010ffb40(lVar13,alStack_d0[1],0x112d373d8,&UNK_10d9014c0);
  lVar10 = lVar15;
  (*pcVar16)(lVar15,1,lVar2);
  if ((int)lVar10 == 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1010fefb4);
    (*pcVar8)();
  }
  puVar5 = puVar11;
  func_0x000107c5ee74(puVar11,lVar15);
  pcVar8 = *(code **)(lVar18 + 8);
  (*pcVar8)(lVar15,lVar2);
  (*pcVar8)(puVar11,lVar2);
  puVar9 = puVar11;
  if (((ulong)puVar5 & 1) == 0) {
    FUN_1010ffaa0(lVar13,0x112d373d8,&UNK_10d9014c0);
    FUN_1010ffaa0(lVar19,0x112d373d8,&UNK_10d9014c0);
    return;
  }
LAB_1010feedc:
  func_0x0001010fe578();
  func_0x000107c613f8(&UNK_110384bf8,puVar9,0,0);
  *puVar9 = 3;
  *(undefined1 *)(puVar9 + 1) = 1;
  func_0x000107c61654();
  FUN_1010ffaa0(lVar13,0x112d373d8,&UNK_10d9014c0);
  FUN_1010ffaa0(lVar19,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1010fefb4; end: 1010ff067;  */

undefined1  [16] FUN_1010fefb4(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  lVar3 = 0;
  func_0x000101101310();
  lVar3 = *(long *)(param_1 + *(int *)(lVar3 + 0x2c));
  if (lVar3 == 0) {
    uVar4 = 0;
    uVar5 = 1;
  }
  else {
    uVar4 = 0;
    lVar6 = 0;
    uVar8 = 1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar3 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar3 + 0x38);
    while( true ) {
      for (; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
        uVar4 = 2;
      }
      bVar2 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1010ff068);
        (*pcVar1)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar6) break;
      uVar7 = ((ulong *)(lVar3 + 0x38))[lVar6];
    }
    uVar5 = 0;
  }
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = uVar4;
  return auVar9;
}



/* Entry: 1010ff068; end: 1010ff57f;  */

undefined * FUN_1010ff068(double param_1,long param_2,long param_3,long param_4)

{
  double *pdVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar10;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  double dVar18;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar4 = 0x112d373d8;
  lStack_80 = param_3;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar14 - extraout_x12_01;
  lVar4 = 0;
  func_0x000107c5eea4();
  lStack_88 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_88 + 0x40));
  lVar15 = lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_90 = lVar15 - extraout_x12_02;
  lVar5 = 0;
  func_0x000101101310();
  pdVar1 = (double *)(param_4 + *(int *)(lVar5 + 0x30));
  dVar18 = 3.0;
  if (*(char *)(pdVar1 + 1) != '\x01') {
    param_1 = *pdVar1;
    dVar18 = (double)NEON_ucvtf(param_1);
  }
  lStack_78 = *(long *)(param_2 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_78 != 0) {
    lVar5 = 0;
    lVar10 = lStack_88;
    lStack_a8 = lVar15;
    puStack_a0 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    lStack_98 = lVar12;
    do {
      if (*(long *)(puVar9 + 0x10) == 0) {
        puVar6 = puVar9;
        func_0x000107c61558();
        puVar8 = puVar9;
        if (((ulong)puVar6 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          func_0x0001010fcadc(0,1,1,puVar9,PTR__swift_bridgeObjectRelease_11034f258);
        }
        uVar2 = *(ulong *)(puVar8 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          func_0x0001010fcadc(puVar9,uVar2 + 1,1,puVar8,PTR__swift_bridgeObjectRelease_11034f258);
        }
        *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
        *(long *)(puVar9 + uVar2 * 8 + 0x20) = lVar5;
        lVar10 = lStack_88;
      }
      else {
        lVar12 = lStack_80;
        func_0x000107c4d9a0();
        func_0x000107c61180();
        if (lVar12 == 0) {
          (**(code **)(lVar10 + 0x38))(lVar17,1,1,lVar4);
        }
        else {
          lVar15 = lVar12;
          func_0x000107c40c4c();
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
          if (lVar15 != 0) {
            func_0x000107c5ee94(lVar14,lVar15);
            func_0x000107c61170(lVar15);
          }
          pcVar13 = *(code **)(lVar10 + 0x38);
          (*pcVar13)(lVar14,lVar15 == 0,1,lVar4);
          func_0x0001003a4c00(lVar14,lVar17);
          pcVar16 = *(code **)(lVar10 + 0x30);
          lVar15 = lVar17;
          (*pcVar16)(lVar17,1,lVar4);
          lVar12 = lStack_90;
          if ((int)lVar15 != 1) {
            pcVar11 = *(code **)(lVar10 + 0x20);
            (*pcVar11)(lStack_90,lVar17,lVar4);
            lVar15 = lStack_80;
            func_0x000107c4d9a0();
            func_0x000107c61180();
            if (lVar15 == 0) {
              (**(code **)(lVar10 + 8))(lVar12,lVar4);
              lVar12 = lStack_98;
              (*pcVar13)(lStack_98,1,1,lVar4);
            }
            else {
              lVar12 = lVar15;
              func_0x000107c40c4c();
              func_0x000107c61180();
              func_0x000107c61170(lVar15);
              puVar3 = puStack_a0;
              if (lVar12 != 0) {
                func_0x000107c5ee94(puStack_a0,lVar12);
                func_0x000107c61170(lVar12);
              }
              (*pcVar13)(puVar3,lVar12 == 0,1,lVar4);
              lVar12 = lStack_98;
              func_0x0001003a4c00(puVar3,lStack_98);
              lVar7 = lVar12;
              (*pcVar16)(lVar12,1,lVar4);
              lVar10 = lStack_88;
              lVar15 = lStack_a8;
              if ((int)lVar7 != 1) {
                (*pcVar11)(lStack_a8,lVar12,lVar4);
                lVar12 = lStack_90;
                func_0x000107c5ee68(lVar15);
                lVar10 = lStack_88;
                param_1 = ABS(param_1);
                if (dVar18 <= param_1) {
                  puVar6 = puVar9;
                  func_0x000107c61558();
                  puVar8 = puVar9;
                  if (((ulong)puVar6 & 1) == 0) {
                    puVar8 = (undefined *)0x0;
                    func_0x0001010fcadc(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9,
                                        PTR__swift_bridgeObjectRelease_11034f258);
                  }
                  uVar2 = *(ulong *)(puVar8 + 0x10);
                  puVar9 = puVar8;
                  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
                    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
                    func_0x0001010fcadc(puVar9,uVar2 + 1,1,puVar8,
                                        PTR__swift_bridgeObjectRelease_11034f258);
                  }
                  lVar10 = lStack_88;
                  *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
                  *(long *)(puVar9 + uVar2 * 8 + 0x20) = lVar5;
                  pcVar13 = *(code **)(lStack_88 + 8);
                  (*pcVar13)(lStack_a8,lVar4);
                  (*pcVar13)(lStack_90,lVar4);
                }
                else {
                  pcVar13 = *(code **)(lStack_88 + 8);
                  (*pcVar13)(lVar15,lVar4);
                  (*pcVar13)(lVar12,lVar4);
                }
                goto LAB_1010ff208;
              }
              (**(code **)(lStack_88 + 8))(lStack_90,lVar4);
            }
            FUN_1010ffaa0(lVar12,0x112d373d8,&UNK_10d9014c0);
            goto LAB_1010ff208;
          }
        }
        FUN_1010ffaa0(lVar17,0x112d373d8,&UNK_10d9014c0);
      }
LAB_1010ff208:
      lVar5 = lVar5 + 1;
    } while (lStack_78 != lVar5);
  }
  return puVar9;
}



/* Entry: 1010ff580; end: 1010ff953;  */

undefined * FUN_1010ff580(undefined *param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff954);
    (*pcVar5)();
  }
  lVar13 = 0;
  uVar11 = 0;
  while( true ) {
    bVar6 = (long)param_2 <= (long)uVar11;
    if (param_3 < 1) {
      bVar6 = (long)uVar11 <= (long)param_2;
    }
    if (bVar6) break;
    bVar6 = SCARRY8(uVar11,param_3);
    uVar15 = uVar11 + param_3;
    uVar11 = (long)uVar15 >> 0x3f ^ 0x8000000000000000;
    if (!bVar6) {
      uVar11 = uVar15;
    }
    bVar6 = SCARRY8(lVar13,1);
    lVar13 = lVar13 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff5f8);
      (*pcVar5)();
    }
  }
  func_0x0001010f6124(0,lVar13,0);
  if (lVar13 == 0) {
    uVar11 = 0;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x10);
    uVar15 = 0;
    do {
      bVar6 = (long)param_2 <= (long)uVar15;
      if (param_3 < 1) {
        bVar6 = (long)uVar15 <= (long)param_2;
      }
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff92c);
        (*pcVar5)();
      }
      uVar11 = uVar15 + param_3;
      if (SCARRY8(uVar15,param_3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff930);
        (*pcVar5)();
      }
      uVar1 = param_2;
      if ((long)uVar11 <= (long)param_2) {
        uVar1 = uVar11;
      }
      lVar2 = uVar1 - uVar15;
      if ((long)uVar1 < (long)uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff934);
        (*pcVar5)();
      }
      if (lVar14 < (long)uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff938);
        (*pcVar5)();
      }
      if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff93c);
        (*pcVar5)();
      }
      if (lVar14 < (long)uVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff940);
        (*pcVar5)();
      }
      if (lVar14 == lVar2) {
        func_0x000107c61434(param_1);
        puVar7 = param_1;
      }
      else {
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar1 != uVar15) {
          if (lVar2 < 1) {
            func_0x000107c61434(param_1);
            puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            puVar7 = (undefined *)0x112d5dfa8;
            func_0x0001000285a8(0x112d5dfa8,&UNK_10d9473c0);
            func_0x000107c613fc();
            func_0x000107c61434(param_1);
            puVar8 = puVar7;
            func_0x000107c610a4();
            puVar9 = puVar8 + -0x19;
            if (0x1f < (long)puVar8) {
              puVar9 = puVar8 + -0x20;
            }
            *(long *)(puVar7 + 0x10) = lVar2;
            *(long *)(puVar7 + 0x18) = ((long)puVar9 >> 3) << 1;
          }
          func_0x000107c610b4(puVar7 + 0x20,param_1 + uVar15 * 8 + 0x20,lVar2 * 8);
          func_0x000107c6142c(param_1);
        }
      }
      uVar15 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar15) {
        func_0x0001010f6124(1 < *(ulong *)(puVar4 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar15 + 1;
      *(undefined **)(puVar4 + uVar15 * 8 + 0x20) = puVar7;
      lVar13 = lVar13 + -1;
      uVar15 = uVar11;
    } while (lVar13 != 0);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  bVar6 = (long)param_2 <= (long)uVar11;
  if (param_3 < 1) {
    bVar6 = (long)uVar11 <= (long)param_2;
  }
  while( true ) {
    if (bVar6) {
      return puVar4;
    }
    uVar15 = uVar11 + param_3;
    if (SCARRY8(uVar11,param_3)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff944);
      (*pcVar5)();
    }
    uVar1 = param_2;
    if ((long)uVar15 <= (long)param_2) {
      uVar1 = uVar15;
    }
    uVar3 = uVar1 - uVar11;
    if ((long)uVar1 < (long)uVar11) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff948);
      (*pcVar5)();
    }
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff94c);
      (*pcVar5)();
    }
    uVar12 = *(ulong *)(param_1 + 0x10);
    if (uVar12 < uVar11 || (long)uVar12 < (long)uVar1) break;
    if (uVar12 == uVar3) {
      func_0x000107c61434(param_1);
      puVar9 = param_1;
    }
    else {
      puVar9 = puVar7;
      if (uVar1 != uVar11) {
        if ((long)uVar3 < 1) {
          func_0x000107c61434(param_1);
        }
        else {
          puVar9 = (undefined *)0x112d5dfa8;
          func_0x0001000285a8(0x112d5dfa8,&UNK_10d9473c0);
          func_0x000107c613fc();
          func_0x000107c61434(param_1);
          puVar10 = puVar9;
          func_0x000107c610a4();
          puVar8 = puVar10 + -0x19;
          if (0x1f < (long)puVar10) {
            puVar8 = puVar10 + -0x20;
          }
          *(ulong *)(puVar9 + 0x10) = uVar3;
          *(long *)(puVar9 + 0x18) = ((long)puVar8 >> 3) << 1;
        }
        func_0x000107c610b4(puVar9 + 0x20,param_1 + uVar11 * 8 + 0x20,uVar3 * 8);
        func_0x000107c6142c(param_1);
      }
    }
    uVar11 = *(ulong *)(puVar4 + 0x10);
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar11) {
      func_0x0001010f6124(1 < *(ulong *)(puVar4 + 0x18),uVar11 + 1,1);
    }
    *(ulong *)(puVar4 + 0x10) = uVar11 + 1;
    *(undefined **)(puVar4 + uVar11 * 8 + 0x20) = puVar9;
    uVar11 = uVar15;
    bVar6 = (long)param_2 <= (long)uVar15;
    if (param_3 < 1) {
      bVar6 = (long)uVar15 <= (long)param_2;
    }
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1010ff950);
  (*pcVar5)();
}



/* Entry: 1010ff954; end: 1010ff987;  */

void FUN_1010ff954(void)

{
  FUN_1010fa938();
  return;
}



/* Entry: 1010ff988; end: 1010ff9a7;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1010ff988(ulong param_1,ulong param_2)

{
  code *pcVar1;
  uint uVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  pcVar1 = *(code **)(unaff_x20 + 0x20);
  func_0x000107c6071c(*(undefined8 *)(unaff_x20 + 0x18),param_1,param_2,
                      *(undefined8 *)(unaff_x20 + 0x10),pcVar1,*(undefined8 *)(unaff_x20 + 0x28));
  if (param_1 == 0) {
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c5ee30(param_1);
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  (*pcVar1)(param_1,param_2,&uStack_60);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = (uint)(param_2 >> 0x3e);
    if (uVar2 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar2 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 1010ff9a8; end: 1010ffa2b;  */

void FUN_1010ff9a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1010fb488(*(undefined8 *)(unaff_x20 + 0x60),param_1,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 1010ffa2c; end: 1010ffa37;  */

void FUN_1010ffa2c(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf43d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_completeWithValue__1125ae900,param_1);
  return;
}



/* Entry: 1010ffa38; end: 1010ffa77;  */

void FUN_1010ffa38(long *param_1,code *param_2,long param_3)

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



/* Entry: 1010ffa78; end: 1010ffa97;  */

void FUN_1010ffa78(void)

{
  FUN_1010fb978();
  return;
}



/* Entry: 1010ffa98; end: 1010ffa9f;  */

void FUN_1010ffa98(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 1010ffaa0; end: 1010ffadf;  */

undefined8 FUN_1010ffaa0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1010ffae0; end: 1010ffaff;  */

void FUN_1010ffae0(void)

{
  FUN_1010fb978();
  return;
}



/* Entry: 1010ffb00; end: 1010ffb87;  */

void FUN_1010ffb00(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010ffb88; end: 1010ffbcb;  */

void FUN_1010ffb88(long param_1,long param_2)

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



/* Entry: 1010ffbcc; end: 1010ffc63;  */

long FUN_1010ffbcc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010ffc64; end: 1010ffcdf;  */

undefined8 * FUN_1010ffc64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)((long)param_2 + 0x21);
  return param_1;
}



/* Entry: 1010ffce0; end: 1010ffcf3;  */

void FUN_1010ffce0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Entry: 1010ffcf4; end: 1010ffd47;  */

undefined8 * FUN_1010ffcf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1010ffd48; end: 1010ffde3;  */

int FUN_1010ffd48(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x22) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010ffde4; end: 1010ffe4f;  */

void FUN_1010ffde4(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x6f65646976;
  if (cVar2 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe500000000000000);
  func_0x000107c6142c(0xe500000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010ffe50; end: 1010ffe8f;  */

void FUN_1010ffe50(undefined8 param_1)

{
  undefined8 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6f65646976;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  func_0x000107c5fb58(param_1,uVar1,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe500000000000000);
  return;
}



/* Entry: 1010ffe90; end: 1010ffef7;  */

void FUN_1010ffe90(void)

{
  undefined8 uVar1;
  char cVar2;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  uVar1 = 0x6f65646976;
  if (cVar2 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  func_0x000107c5fb58(auStack_68,uVar1,0xe500000000000000);
  func_0x000107c6142c(0xe500000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010ffef8; end: 1010fff33;  */

void FUN_1010ffef8(undefined1 *param_1,long param_2)

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



/* Entry: 1010fff34; end: 1010fff8f;  */

void FUN_1010fff34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000101104c90();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 1010fff90; end: 1010fffdb;  */

void FUN_1010fff90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000101104c90();
  func_0x000107c5fc2c(param_1,param_2,param_3,uVar1);
  return;
}



/* Entry: 1010fffdc; end: 10110012b;  */

/* WARNING: Removing unreachable block (ram,0x00010110045c) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_1010fffdc(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 uVar9;
  long unaff_x24;
  code *unaff_x25;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  
  plVar6 = (long *)0xe900000000000065;
  plVar5 = (long *)0x707954616964656d;
  pcVar7 = (char *)(param_1 & 0xff);
  pcVar8 = "\x16";
  switch(pcVar7) {
  case (char *)0x0:
    goto code_r0x00010110006c;
  default:
    plVar6 = (long *)0xe800000000000000;
  case (char *)0x42:
  case (char *)0x48:
  case (char *)0x50:
    auVar10._8_8_ = plVar6;
    auVar10._0_8_ = 0x657079546d657469;
    return auVar10;
  case (char *)0x2:
    auVar13._8_8_ = 0xea00000000007469;
    auVar13._0_8_ = 0x6d694c6863746566;
    return auVar13;
  case (char *)0x3:
    plVar5 = (long *)0xd000000000000011;
  case (char *)0x5a:
  case (char *)0x8a:
    pcVar7 = "promptLoggingServices";
code_r0x000101100098:
    auVar14._8_8_ = (ulong)(pcVar7 + 0xa60) | 0x8000000000000000;
    auVar14._0_8_ = plVar5;
    return auVar14;
  case (char *)0x4:
    plVar6 = (long *)0x6e45;
  case (char *)0x40:
  case (char *)0x70:
  case (char *)0x88:
    plVar6 = (long *)((ulong)plVar6 | 0x746144640000);
code_r0x000101100038:
    auVar11._8_8_ = (ulong)plVar6 & 0xffffffffffff | 0xef65000000000000;
    auVar11._0_8_ = 0x6e6f697461657263;
    return auVar11;
  case (char *)0x5:
    auVar16._8_8_ = 0x800000010ef26a80;
    auVar16._0_8_ = 0xd000000000000013;
    return auVar16;
  case (char *)0x6:
    auVar17._8_8_ = 0x800000010ef26aa0;
    auVar17._0_8_ = 0xd00000000000001a;
    return auVar17;
  case (char *)0x7:
    auVar15._8_8_ = 0xed0000737265646c;
    auVar15._0_8_ = 0x6f46686372616573;
    return auVar15;
  case (char *)0x8:
    plVar6 = (long *)0x800000010ef26ac0;
    pcVar7 = (char *)0x11;
  case (char *)0x21:
    plVar5 = (long *)(((ulong)pcVar7 | 0xd000000000000000) + 0xd);
code_r0x000101100128:
    auVar18._8_8_ = plVar6;
    auVar18._0_8_ = plVar5;
    return auVar18;
  case (char *)0x9:
    plVar6 = (long *)0x746f;
  case (char *)0x30:
  case (char *)0x38:
  case (char *)0x60:
  case (char *)0x68:
  case (char *)0x80:
    plVar6 = (long *)((ulong)plVar6 & 0xffffffffffff | 0xeb00000000730000);
    plVar5 = (long *)0x68736e6565726373;
code_r0x00010110006c:
    auVar12._8_8_ = plVar6;
    auVar12._0_8_ = plVar5;
    return auVar12;
  case (char *)0x10:
  case (char *)0x90:
  case (char *)0xa0:
  case (char *)0xc0:
  case (char *)0xe0:
    goto code_r0x000101100144;
  case (char *)0x11:
  case (char *)0x15:
  case (char *)0x1f:
  case (char *)0x25:
  case (char *)0x28:
  case (char *)0x2d:
  case (char *)0xa1:
  case (char *)0xa5:
  case (char *)0xaf:
  case (char *)0xc1:
  case (char *)0xc5:
  case (char *)0xcf:
  case (char *)0xd2:
  case (char *)0xd8:
  case (char *)0xe1:
  case (char *)0xe5:
  case (char *)0xef:
  case (char *)0xf2:
  case (char *)0xf5:
    goto code_r0x0001011001a8;
  case (char *)0x12:
  case (char *)0x97:
  case (char *)0xa2:
  case (char *)0xc2:
  case (char *)0xd6:
  case (char *)0xe2:
    goto code_r0x0001011001cc;
  case (char *)0x13:
  case (char *)0xa3:
  case (char *)0xc3:
  case (char *)0xd3:
  case (char *)0xd7:
  case (char *)0xe3:
  case (char *)0xf6:
    goto code_r0x0001011001e0;
  case (char *)0x14:
  case (char *)0xa4:
  case (char *)0xc4:
  case (char *)0xe4:
    goto code_r0x000101100148;
  case (char *)0x16:
  case (char *)0xa6:
  case (char *)0xc6:
  case (char *)0xe6:
    goto code_r0x0001011001a4;
  case (char *)0x17:
  case (char *)0x95:
  case (char *)0xa7:
  case (char *)0xc7:
  case (char *)0xe7:
    break;
  case (char *)0x18:
  case (char *)0x22:
  case (char *)0x93:
  case (char *)0xa8:
  case (char *)0xc8:
  case (char *)0xe8:
    goto code_r0x000101100198;
  case (char *)0x19:
  case (char *)0xa9:
  case (char *)0xc9:
  case (char *)0xe9:
    goto code_r0x000101100160;
  case (char *)0x1a:
  case (char *)0x24:
  case (char *)0xaa:
  case (char *)0xca:
  case (char *)0xea:
    goto code_r0x0001011001b4;
  case (char *)0x1b:
  case (char *)0xab:
  case (char *)0xcb:
  case (char *)0xeb:
  case (char *)0xf4:
    goto LAB_1011001e8;
  case (char *)0x1c:
  case (char *)0x1d:
  case (char *)0xac:
  case (char *)0xad:
  case (char *)0xcc:
  case (char *)0xcd:
  case (char *)0xec:
  case (char *)0xed:
    goto code_r0x0001011001ac;
  case (char *)0x1e:
  case (char *)0xae:
  case (char *)0xce:
  case (char *)0xee:
    goto code_r0x0001011001c4;
  case (char *)0x20:
  case (char *)0xb0:
  case (char *)0xb2:
  case (char *)0xb3:
  case (char *)0xb5:
  case (char *)0xd0:
  case (char *)0xf0:
    goto code_r0x0001011001dc;
  case (char *)0x23:
  case (char *)0x92:
    goto code_r0x0001011001a0;
  case (char *)0x26:
  case (char *)0x2b:
    goto code_r0x000101100138;
  case (char *)0x27:
  case (char *)0x2c:
  case (char *)0x94:
  case (char *)0xf7:
    goto code_r0x0001011001e4;
  case (char *)0x29:
  case (char *)0x2e:
    goto LAB_1011001c8;
  case (char *)0x47:
  case (char *)0x77:
    goto code_r0x000101100210;
  case (char *)0x5c:
  case (char *)0x74:
  case (char *)0x44:
  case (char *)0x45:
  case (char *)0x46:
  case (char *)0x75:
  case (char *)0x76:
    *unaff_x22 = 0x707954616964656d;
    func_0x000107c61434();
    func_0x000107c6142c();
    uVar9 = unaff_x22[1];
    unaff_x22[1] = *(undefined8 *)(unaff_x24 + 8);
    func_0x000107c61434();
    func_0x000107c6142c(uVar9);
    *(undefined1 *)((long)unaff_x19 + (long)*(int *)(unaff_x21 + 0x24)) =
         *(undefined1 *)((long)unaff_x20 + (long)*(int *)(unaff_x21 + 0x24));
    puVar1 = (undefined8 *)((long)unaff_x19 + (long)*(int *)(unaff_x21 + 0x28));
    puVar2 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(unaff_x21 + 0x28));
    uVar9 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = uVar9;
    auVar20._8_8_ = plVar6;
    auVar20._0_8_ = unaff_x19;
    return auVar20;
  case (char *)0x72:
    goto code_r0x000101100098;
  case (char *)0x78:
    goto code_r0x000101100038;
  case (char *)0x91:
  case (char *)0x96:
  case (char *)0xb4:
  case (char *)0xd5:
    goto code_r0x0001011001d0;
  case (char *)0xb1:
    goto code_r0x000101100128;
  case (char *)0xd1:
  case (char *)0xf1:
    goto code_r0x00010110015c;
  case (char *)0xd4:
    goto code_r0x0001011001d4;
  case (char *)0xf3:
    goto code_r0x0001011001d8;
  }
code_r0x0001011001b8:
  func_0x000107c61434();
  func_0x000107c61434(unaff_x22);
code_r0x0001011001c4:
  goto LAB_1011001f0;
code_r0x000101100138:
code_r0x000101100144:
  unaff_x20 = plVar6;
code_r0x000101100148:
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  pcVar7 = (char *)(ulong)uVar4;
  unaff_x19 = plVar5;
  unaff_x21 = param_3;
  if ((uVar4 >> 0x11 & 1) != 0) {
LAB_1011001c8:
    plVar5 = (long *)*unaff_x20;
code_r0x0001011001cc:
    *unaff_x19 = (long)plVar5;
code_r0x0001011001d0:
    pcVar7 = (char *)((ulong)pcVar7 & 0xff);
code_r0x0001011001d4:
    pcVar8 = pcVar7 + 0x10;
code_r0x0001011001d8:
    pcVar7 = (char *)((ulong)pcVar8 & ((ulong)pcVar7 ^ 0xffffffffffffffff));
code_r0x0001011001dc:
    unaff_x19 = (long *)((long)plVar5 + (long)pcVar7);
code_r0x0001011001e0:
    func_0x000107c6157c();
code_r0x0001011001e4:
    goto LAB_101100214;
  }
code_r0x00010110015c:
  pcVar7 = (char *)*unaff_x20;
  unaff_x22 = (undefined8 *)unaff_x20[1];
code_r0x000101100160:
  *unaff_x19 = (long)pcVar7;
  unaff_x19[1] = (long)unaff_x22;
  *(short *)(unaff_x19 + 2) = (short)unaff_x20[2];
  iVar3 = *(int *)(param_3 + 0x1c);
  param_3 = 0;
  func_0x000107c5eea4();
  unaff_x25 = *(code **)(*(long *)(param_3 + -8) + 0x10);
  func_0x000107c61434(unaff_x22);
  plVar5 = (long *)((long)unaff_x19 + (long)iVar3);
  plVar6 = (long *)((long)unaff_x20 + (long)iVar3);
code_r0x000101100198:
  (*unaff_x25)(plVar5,plVar6,param_3);
  pcVar8 = (char *)(long)*(int *)(unaff_x21 + 0x20);
code_r0x0001011001a0:
  pcVar7 = (char *)((long)unaff_x19 + (long)pcVar8);
code_r0x0001011001a4:
  pcVar8 = (char *)((long)unaff_x20 + (long)pcVar8);
code_r0x0001011001a8:
  plVar5 = *(long **)pcVar8;
code_r0x0001011001ac:
  if (plVar5 != (long *)0x0) {
    unaff_x22 = *(undefined8 **)(pcVar8 + 8);
code_r0x0001011001b4:
    *(long **)pcVar7 = plVar5;
    *(undefined8 **)(pcVar7 + 8) = unaff_x22;
    goto code_r0x0001011001b8;
  }
LAB_1011001e8:
  uVar9 = *(undefined8 *)pcVar8;
  *(undefined8 *)(pcVar7 + 8) = *(undefined8 *)(pcVar8 + 8);
  *(undefined8 *)pcVar7 = uVar9;
LAB_1011001f0:
  iVar3 = *(int *)(unaff_x21 + 0x28);
  *(undefined1 *)((long)unaff_x19 + (long)*(int *)(unaff_x21 + 0x24)) =
       *(undefined1 *)((long)unaff_x20 + (long)*(int *)(unaff_x21 + 0x24));
  pcVar7 = (char *)((long)unaff_x19 + (long)iVar3);
  puVar1 = (undefined8 *)((long)unaff_x20 + (long)iVar3);
  *(undefined8 *)pcVar7 = *puVar1;
  pcVar8 = (char *)(ulong)*(byte *)(puVar1 + 1);
code_r0x000101100210:
  pcVar7[8] = (char)pcVar8;
LAB_101100214:
  auVar19._8_8_ = plVar6;
  auVar19._0_8_ = unaff_x19;
  return auVar19;
}



/* Entry: 10110012c; end: 10110022f;  */

long * FUN_10110012c(long *param_1,long *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  code *pcVar10;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    *(short *)(param_1 + 2) = (short)param_2[2];
    iVar6 = *(int *)(param_3 + 0x1c);
    lVar7 = 0;
    func_0x000107c5eea4();
    pcVar10 = *(code **)(*(long *)(lVar7 + -8) + 0x10);
    func_0x000107c61434(lVar9);
    (*pcVar10)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,lVar7);
    plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    if (*plVar2 == 0) {
      lVar9 = *plVar2;
      plVar1[1] = plVar2[1];
      *plVar1 = lVar9;
    }
    else {
      lVar9 = plVar2[1];
      *plVar1 = *plVar2;
      plVar1[1] = lVar9;
      func_0x000107c61434();
      func_0x000107c61434(lVar9);
    }
    iVar6 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    puVar3 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar4 = (undefined8 *)((long)param_2 + (long)iVar6);
    *puVar3 = *puVar4;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar8 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101100230; end: 1011002a7;  */

/* WARNING: Possible PIC construction at 0x00010110024c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101100280: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101100250) */
/* WARNING: Removing unreachable block (ram,0x000101100298) */
/* WARNING: Removing unreachable block (ram,0x000101100280) */
/* WARNING: Removing unreachable block (ram,0x000101100284) */

void FUN_101100230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1011002a8; end: 10110037f;  */

undefined8 * FUN_1011002a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  code *pcVar7;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  iVar5 = *(int *)(param_3 + 0x1c);
  lVar6 = 0;
  func_0x000107c5eea4();
  pcVar7 = *(code **)(*(long *)(lVar6 + -8) + 0x10);
  func_0x000107c61434(uVar4);
  (*pcVar7)((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar6);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  if (*plVar2 == 0) {
    lVar6 = *plVar2;
    plVar1[1] = plVar2[1];
    *plVar1 = lVar6;
  }
  else {
    lVar6 = plVar2[1];
    *plVar1 = *plVar2;
    plVar1[1] = lVar6;
    func_0x000107c61434();
    func_0x000107c61434(lVar6);
  }
  iVar5 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar5);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar3 = *param_2;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101100380; end: 1011004ab;  */

undefined8 * FUN_101100380(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar6);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x11) = *(undefined1 *)((long)param_2 + 0x11);
  iVar4 = *(int *)(param_3 + 0x1c);
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x18))
            ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,lVar5);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  lVar7 = *plVar1;
  lVar5 = *plVar2;
  if (lVar7 == 0) {
    if (lVar5 != 0) {
      *plVar1 = lVar5;
      lVar5 = plVar2[1];
      plVar1[1] = lVar5;
      func_0x000107c61434();
      func_0x000107c61434(lVar5);
      goto LAB_10110046c;
    }
  }
  else {
    if (lVar5 != 0) {
      *plVar1 = lVar5;
      func_0x000107c61434();
      func_0x000107c6142c(lVar7);
      lVar5 = plVar1[1];
      plVar1[1] = plVar2[1];
      func_0x000107c61434();
      func_0x000107c6142c(lVar5);
      goto LAB_10110046c;
    }
    FUN_1011004ac(plVar1);
  }
  lVar5 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar5;
LAB_10110046c:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar6 = *param_2;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar3 = uVar6;
  return param_1;
}



/* Entry: 1011004ac; end: 1011004db;  */

undefined8 * FUN_1011004ac(undefined8 *param_1)

{
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  return param_1;
}



/* Entry: 1011004dc; end: 10110056f;  */

undefined8 * FUN_1011004dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  iVar1 = *(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar4);
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar2 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101100570; end: 10110064f;  */

undefined8 * FUN_101100570(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  func_0x000107c6142c(uVar6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  iVar5 = *(int *)(param_3 + 0x1c);
  lVar7 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar7 + -8) + 0x28))
            ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,lVar7);
  plVar1 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  plVar2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  if (*plVar1 != 0) {
    if (*plVar2 != 0) {
      *plVar1 = *plVar2;
      func_0x000107c6142c();
      lVar7 = plVar1[1];
      plVar1[1] = plVar2[1];
      func_0x000107c6142c(lVar7);
      goto LAB_101100614;
    }
    FUN_1011004ac(plVar1);
  }
  lVar7 = *plVar2;
  plVar1[1] = plVar2[1];
  *plVar1 = lVar7;
LAB_101100614:
  iVar5 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar5);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar5);
  *puVar3 = *param_2;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101100650; end: 10110067b;  */

void FUN_101100650(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10110067c; end: 10110076b;  */

void FUN_10110067c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = &UNK_10d924720;
  puStack_50 = &UNK_10d924738;
  puStack_48 = &UNK_10d924738;
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10d924750;
    puStack_30 = &UNK_10d924738;
    puStack_28 = &UNK_10d924768;
    func_0x000107c6153c(param_1,0x100,7,&puStack_58,param_1 + 0x10);
  }
  return;
}



/* Entry: 10110076c; end: 1011007c7;  */

undefined8 * FUN_10110076c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1011007c8; end: 101100803;  */

undefined8 * FUN_1011007c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 101100804; end: 101100947;  */

int FUN_101100804(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101100948; end: 101100aff;  */

long * FUN_101100948(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(short *)param_1 = (short)*param_2;
    param_1[1] = param_2[1];
    lVar10 = (long)*(int *)(param_3 + 0x1c);
    lVar5 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar5 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar9)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
    }
    else {
      lVar6 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar10,(long)param_2 + lVar10,
                          *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    lVar10 = (long)*(int *)(param_3 + 0x20);
    lVar6 = (long)param_2 + lVar10;
    (*pcVar9)(lVar6,1,lVar5);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar5);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar10,0,1,lVar5);
    }
    else {
      lVar6 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar10,(long)param_2 + lVar10,
                          *(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
    }
    iVar3 = *(int *)(param_3 + 0x28);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x30);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    func_0x000107c61434();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 101100b00; end: 101100b9b;  */

void FUN_101100b00(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
  iVar1 = *(int *)(param_2 + 0x20);
  lVar3 = param_1 + iVar1;
  (*pcVar5)(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c)));
  return;
}



/* Entry: 101100b9c; end: 1011012f7;  */

undefined2 * FUN_101100b9c(undefined2 *param_1,undefined2 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar7)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x20);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar7)(lVar5,1,lVar4);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,lVar4);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar8,0,1,lVar4);
  }
  else {
    lVar5 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar8,(long)param_2 + lVar8,
                        *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x28);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  iVar3 = *(int *)(param_3 + 0x30);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1011012f8; end: 101101323;  */

void FUN_1011012f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101101324; end: 101101353;  */

void FUN_101101324(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 101101354; end: 1011013fb;  */

void FUN_101101354(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_70 = &UNK_10d924738;
  puStack_68 = &UNK_10d924738;
  puStack_60 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10d9247f0;
    puStack_40 = &UNK_10d9247f0;
    puStack_38 = &UNK_10d924808;
    puStack_30 = &UNK_10d924768;
    puStack_28 = &UNK_10d9247f0;
    lStack_50 = lStack_58;
    func_0x000107c6153c(param_1,0x100,10,&puStack_70,param_1 + 0x10);
  }
  return;
}



/* Entry: 1011013fc; end: 10110141f;  */

void FUN_1011013fc(void)

{
  return;
}



/* Entry: 101101420; end: 101101577;  */

void FUN_101101420(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x70616e73;
  if (cVar3 != '\x01') {
    uVar1 = 0x725f6172656d6163;
  }
  uVar2 = 0xe400000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xeb000000006c6c6f;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}


