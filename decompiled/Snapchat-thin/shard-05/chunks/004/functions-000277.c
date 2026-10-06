/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103dab5f4; end: 103dab8f7;  */

/* WARNING: Removing unreachable block (ram,0x000103dab678) */

undefined1  [16] FUN_103dab5f4(undefined *param_1,undefined *param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 auStack_168 [2];
  undefined8 auStack_158 [4];
  long lStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_80;
  undefined8 auStack_78 [3];
  
  puVar18 = param_1;
  puVar17 = param_2;
  func_0x000107c3eb80();
  func_0x000107c61180();
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar18 != (undefined *)0x0) {
    puVar16 = puVar18;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar18);
    func_0x000103dac250();
    func_0x000107c5eb1c(&puStack_b8,&UNK_11070efc0,puVar16,puVar17,&UNK_11070efc0,puVar18);
    puVar3 = puStack_b0;
    puVar6 = puStack_b8;
    uVar2 = (ulong)puStack_b8 & 0xffffffffffff;
    if (((ulong)puStack_b0 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)puStack_b0 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      pcVar1 = "Search text is missing";
      uVar12 = 0xd000000000000016;
    }
    else {
      func_0x000107c61434(puStack_b0);
      func_0x0001000d224c(&puStack_b8);
      puVar18 = puStack_b8;
      if (puStack_b8 != (undefined *)0x0) {
        func_0x000107c5fadc(puVar6,puStack_b0);
        pcStack_c0 = (code *)puVar6;
        func_0x000107c6142c(puStack_b0);
        puVar6 = &UNK_11070f270;
        func_0x000107c613fc(&UNK_11070f270,0x18,7);
        func_0x000107c61644(puVar6 + 0x10);
        puVar7 = &UNK_11070f298;
        func_0x000107c613fc(&UNK_11070f298,0x2a,7);
        *(undefined **)(puVar7 + 0x10) = puVar6;
        *(undefined **)(puVar7 + 0x18) = param_1;
        *(undefined **)(puVar7 + 0x20) = param_2;
        puVar7[0x28] = (undefined1)uStack_a8;
        puVar7[0x29] = uStack_a8._1_1_;
        pcStack_98 = FUN_103dac290;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_b0 = (undefined1 *)0x42000000;
        uStack_a8 = FUN_103dac190;
        puStack_a0 = &UNK_11070f2b0;
        ppuVar5 = &puStack_b8;
        puStack_90 = puVar7;
        func_0x000107c60bc4(ppuVar5);
        puVar6 = puStack_90;
        func_0x000107c61174(param_1);
        func_0x000107c61174(param_2);
        func_0x000107c61574(puVar6);
        func_0x000107c51adc(puVar18);
        func_0x000107c6142c(puVar3);
        func_0x00010006c090(puVar16,puVar17);
        func_0x000107c615e8(puVar18);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(pcStack_c0);
        puVar16 = pcStack_c0;
        goto LAB_103dab8d8;
      }
      func_0x000107c6142c(puStack_b0);
      pcVar1 = "Sticker Searcher is unavailable";
      uVar12 = 0xd00000000000001f;
    }
    FUN_103dac9b4(param_1,3,param_2,uVar12,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    func_0x000107c6142c(puStack_b0);
    func_0x00010006c090(puVar16,puVar17);
LAB_103dab8d8:
    auVar19._8_8_ = puVar17;
    auVar19._0_8_ = puVar16;
    return auVar19;
  }
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcStack_98 = (code *)0xd000000000000014;
  puStack_90 = (undefined *)0x800000010ef26900;
  puStack_80 = PTR___sSSN_11034da80;
  func_0x000100102924(&pcStack_98,auStack_78);
  func_0x000107c61434(0x800000010ef26900);
  puVar18 = puVar6;
  func_0x000107c61558(puVar6);
  pcStack_98 = (code *)puVar6;
  uVar12 = 0x6567617373656d;
  func_0x0001001029e8(auStack_78,0x6567617373656d,0xe700000000000000,puVar18);
  pcVar4 = pcStack_98;
  puVar6 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar12);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar17 = PTR___sSSSHsWP_11034da90;
  puVar18 = PTR___sSSN_11034da80;
  puVar16 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar7 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  pcVar8 = pcVar4;
  func_0x000107c5f9dc(pcVar4,puVar18,PTR___sypN_11034f1a8 + 8,puVar17);
  auStack_78[0] = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(pcVar8);
  uVar12 = auStack_78[0];
  func_0x000107c61174(auStack_78[0]);
  if (puVar7 == (undefined *)0x0) {
    uVar9 = uVar12;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar12);
    func_0x000107c61654();
    func_0x000107c614ac(uVar9);
    puVar17 = (undefined *)0x0;
    puVar18 = (undefined *)0xf000000000000000;
  }
  else {
    puVar17 = puVar7;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar7);
  }
  puVar7 = puVar16;
  puVar14 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar16,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar16);
  if ((ulong)puVar18 >> 0x3c < 0xf) {
    puVar16 = puVar17;
    func_0x000107c5ee20(puVar17,puVar18);
    func_0x0001000b44c0(puVar17,puVar18);
  }
  else {
    puVar16 = (undefined *)0x0;
    puVar18 = puVar14;
  }
  puVar17 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar16);
  func_0x000107c4d664(param_2);
  func_0x000107c6142c(pcVar4);
  puVar14 = puVar17;
  func_0x000107c61170(puVar17);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    auVar20._8_8_ = puVar18;
    auVar20._0_8_ = puVar14;
    return auVar20;
  }
  func_0x000107c60e78();
  pcStack_c0 = pcVar4;
  uStack_a8 = FUN_103dacc60;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar18 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puStack_d0 = puVar17;
  puStack_c8 = puVar7;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61168();
  puVar10 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar14,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puStack_e0 = (undefined *)0x0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar14);
  puVar7 = puStack_e0;
  func_0x000107c61174();
  if (puVar18 == (undefined *)0x0) {
    puVar18 = puVar7;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar7);
    func_0x000107c61654();
    puVar7 = puVar18;
    func_0x000107c614ac(puVar18);
    puVar14 = (undefined *)0x0;
    puVar15 = (undefined8 *)0xf000000000000000;
    puVar11 = puVar10;
  }
  else {
    puVar14 = puVar18;
    func_0x000107c5ee30();
    puVar7 = puVar18;
    puVar11 = puVar10;
    func_0x000107c61170(puVar18);
    puVar15 = puVar10;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar21._8_8_ = puVar15;
    auVar21._0_8_ = puVar14;
    return auVar21;
  }
  func_0x000107c60e78();
  pcStack_f8 = FUN_103dacd78;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = puVar16;
  puStack_128 = puVar6;
  puStack_120 = puVar17;
  puStack_118 = puVar18;
  puStack_110 = puVar15;
  puStack_108 = puVar14;
  ppuStack_100 = &puStack_b0;
  if ((ulong)puVar11 >> 0x3c < 0xf) {
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar7,puVar11);
    puVar18 = puVar7;
    func_0x000107c5ee20(puVar7,puVar11);
    auStack_158[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar18);
    uVar12 = auStack_158[0];
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_158,puVar6);
      func_0x0001000b44c0(puVar7,puVar11);
      func_0x000107c615e8(puVar6);
      uVar12 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar10 = auStack_168;
      puVar11 = auStack_158;
      func_0x000107c6147c(puVar10,puVar11,PTR___sypN_11034f1a8 + 8,uVar12,6);
      if ((int)puVar10 == 0) {
        auStack_168[0] = 0;
      }
      goto LAB_103dacebc;
    }
    uVar9 = auStack_158[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar12);
    func_0x000107c61170(uVar9);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar7,puVar11);
    func_0x000107c614ac(uVar12);
  }
  auStack_168[0] = 0;
LAB_103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    func_0x000107c60e78(auStack_168[0]);
    return ZEXT816(0x11070f3e8);
  }
  auVar22._8_8_ = puVar11;
  auVar22._0_8_ = auStack_168[0];
  return auVar22;
}



/* Entry: 103dab8f8; end: 103dab953; -[_TtC25LensCTStickerSearchPlugin32LensCTStickerSearchPluginHandler handleRequest:] */

void FUN_103dab8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_103dab3c8(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103dab954; end: 103dab957; -[_TtC25LensCTStickerSearchPlugin32LensCTStickerSearchPluginHandler reset] */

void FUN_103dab954(void)

{
  return;
}



/* Entry: 103dab958; end: 103dac18f;  */

/* WARNING: Removing unreachable block (ram,0x000103dabed4) */
/* WARNING: Removing unreachable block (ram,0x000103dabef8) */
/* WARNING: Removing unreachable block (ram,0x000103dabf10) */

void FUN_103dab958(undefined1 *param_1,long param_2,long param_3,undefined8 param_4,char param_5,
                  uint param_6)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *apuStack_90 [3];
  undefined1 auStack_78 [24];
  
  puVar10 = auStack_78;
  lVar13 = 0;
  func_0x000107c61428(param_2 + 0x10,puVar10,0,0);
  uVar3 = param_2 + 0x10;
  func_0x000107c61648();
  if (uVar3 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      puVar18 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
      if ((ulong)param_1 >> 0x3e == 0) {
        puVar20 = *(undefined1 **)(puVar18 + 0x10);
      }
      else {
        puVar20 = param_1;
        if (-1 < (long)param_1) {
          puVar20 = puVar18;
        }
        func_0x000107c60480();
      }
      uVar16 = uVar3;
      puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar20 != (undefined1 *)0x0) {
        lVar21 = 4;
        do {
          uVar16 = lVar21 - 4;
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar18 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac14c);
              (*pcVar2)();
            }
            uVar23 = *(ulong *)(param_1 + lVar21 * 8);
            func_0x000107c615f0(uVar23);
          }
          else {
            uVar23 = uVar16;
            puVar10 = param_1;
            FUN_103dab1a8();
          }
          if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac148);
            (*pcVar2)();
          }
          puVar19 = (undefined1 *)(lVar21 + -3);
          uVar16 = uVar23;
          func_0x000107c5cae8();
          func_0x000107c61180();
          if (uVar16 == 0) {
LAB_103dab9f0:
            func_0x000107c615e8(uVar23);
            uVar16 = uVar23;
          }
          else {
            uVar4 = uVar16;
            func_0x000107c44904();
            if ((uVar4 & 1) == 0) {
              func_0x000107c61170(uVar16);
              goto LAB_103dab9f0;
            }
            if (param_5 == '\0') {
              puVar10 = (undefined1 *)(ulong)(param_6 & 1);
              uVar4 = uVar16;
              FUN_103dac41c();
              if (lVar13 == 0) {
                func_0x000107c615e8(uVar23);
                func_0x000107c61170(uVar16);
              }
              else {
                puVar5 = puVar6;
                puVar11 = puVar10;
                lVar14 = lVar13;
                func_0x000107c61558();
                if (((ulong)puVar5 & 1) == 0) {
                  puVar11 = (undefined1 *)(*(long *)(puVar6 + 0x10) + 1);
                  puVar6 = (undefined *)0x0;
                  lVar14 = 1;
                  FUN_103dac300();
                }
                uVar22 = *(ulong *)(puVar6 + 0x10);
                if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar22) {
                  puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
                  lVar14 = 1;
                  puVar11 = (undefined1 *)(uVar22 + 1);
                  FUN_103dac300();
                }
                *(undefined1 **)(puVar6 + 0x10) = (undefined1 *)(uVar22 + 1);
                puVar6[uVar22 * 0x18 + 0x20] = (byte)uVar4 & 1;
                puVar6[uVar22 * 0x18 + 0x21] = (char)(uVar4 >> 8);
                *(undefined1 **)(puVar6 + uVar22 * 0x18 + 0x28) = puVar10;
                *(long *)(puVar6 + uVar22 * 0x18 + 0x30) = lVar13;
LAB_103dabd20:
                func_0x000107c615e8(uVar23);
                func_0x000107c61170(uVar16);
                puVar10 = puVar11;
                lVar13 = lVar14;
              }
            }
            else {
              if (param_5 == '\x01') {
                uVar4 = uVar16;
                func_0x000107c4a764();
                func_0x000107c61180();
                if (uVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac178);
                  (*pcVar2)();
                }
                uVar22 = uVar4;
                func_0x000107c42924();
                func_0x000107c61180();
                func_0x000107c61170(uVar4);
                if (uVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac174);
                  (*pcVar2)();
                }
                uVar4 = uVar22;
                func_0x000107c42930();
                func_0x000107c61170(uVar22);
                if ((int)uVar4 == 4) {
                  uVar4 = uVar16;
                  func_0x000107c4a764();
                  func_0x000107c61180();
                  if (uVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac190);
                    (*pcVar2)();
                  }
                  uVar22 = uVar4;
                  func_0x000107c42924();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar4);
                  if (uVar22 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac18c);
                    (*pcVar2)();
                  }
                  uVar4 = uVar22;
                  func_0x000107c424f8();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar22);
                  if (uVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac188);
                    (*pcVar2)();
                  }
                  uVar22 = uVar4;
                  func_0x000107c44dc0();
LAB_103dabcc0:
                  func_0x000107c61180();
                  func_0x000107c61170(uVar4);
                  if (uVar22 != 0) {
                    uVar4 = uVar22;
                    func_0x000107c5faec();
                    puVar11 = puVar10;
                    func_0x000107c61170(uVar22);
                    puVar5 = puVar6;
                    func_0x000107c61558();
                    lVar14 = lVar13;
                    if (((ulong)puVar5 & 1) == 0) {
                      puVar11 = (undefined1 *)(*(long *)(puVar6 + 0x10) + 1);
                      puVar6 = (undefined *)0x0;
                      lVar14 = 1;
                      FUN_103dac300();
                    }
                    uVar22 = *(ulong *)(puVar6 + 0x10);
                    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar22) {
                      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
                      lVar14 = 1;
                      puVar11 = (undefined1 *)(uVar22 + 1);
                      FUN_103dac300();
                    }
                    *(undefined1 **)(puVar6 + 0x10) = (undefined1 *)(uVar22 + 1);
                    *(undefined2 *)(puVar6 + uVar22 * 0x18 + 0x20) = 0x100;
                    *(ulong *)(puVar6 + uVar22 * 0x18 + 0x28) = uVar4;
                    *(undefined1 **)(puVar6 + uVar22 * 0x18 + 0x30) = puVar10;
                    goto LAB_103dabd20;
                  }
                }
              }
              else {
                puVar11 = (undefined1 *)(ulong)(param_6 & 1);
                uVar4 = uVar16;
                FUN_103dac41c();
                puVar10 = puVar11;
                if (lVar13 != 0) {
                  puVar5 = puVar6;
                  lVar14 = lVar13;
                  func_0x000107c61558();
                  if (((ulong)puVar5 & 1) == 0) {
                    puVar10 = (undefined1 *)(*(long *)(puVar6 + 0x10) + 1);
                    puVar6 = (undefined *)0x0;
                    lVar14 = 1;
                    FUN_103dac300();
                  }
                  uVar22 = *(ulong *)(puVar6 + 0x10);
                  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar22) {
                    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
                    lVar14 = 1;
                    puVar10 = (undefined1 *)(uVar22 + 1);
                    FUN_103dac300();
                  }
                  *(undefined1 **)(puVar6 + 0x10) = (undefined1 *)(uVar22 + 1);
                  puVar6[uVar22 * 0x18 + 0x20] = (byte)uVar4 & 1;
                  puVar6[uVar22 * 0x18 + 0x21] = (char)(uVar4 >> 8);
                  *(undefined1 **)(puVar6 + uVar22 * 0x18 + 0x28) = puVar11;
                  *(long *)(puVar6 + uVar22 * 0x18 + 0x30) = lVar13;
                  lVar13 = lVar14;
                }
                uVar4 = uVar16;
                func_0x000107c4a764();
                func_0x000107c61180();
                if (uVar4 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac170);
                  (*pcVar2)();
                }
                uVar22 = uVar4;
                func_0x000107c42924();
                func_0x000107c61180();
                func_0x000107c61170(uVar4);
                if (uVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac16c);
                  (*pcVar2)();
                }
                uVar4 = uVar22;
                func_0x000107c42930();
                func_0x000107c61170(uVar22);
                if ((int)uVar4 == 4) {
                  uVar4 = uVar16;
                  func_0x000107c4a764();
                  func_0x000107c61180();
                  if (uVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac184);
                    (*pcVar2)();
                  }
                  uVar22 = uVar4;
                  func_0x000107c42924();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar4);
                  if (uVar22 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac180);
                    (*pcVar2)();
                  }
                  uVar4 = uVar22;
                  func_0x000107c424f8();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar22);
                  if (uVar4 == 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac17c);
                    (*pcVar2)();
                  }
                  uVar22 = uVar4;
                  func_0x000107c44dc0();
                  goto LAB_103dabcc0;
                }
              }
              func_0x000107c615e8(uVar23);
              func_0x000107c61170(uVar16);
            }
          }
          lVar21 = lVar21 + 1;
        } while (puVar19 != puVar20);
      }
      apuStack_90[0] = puVar6;
      FUN_103dac2c0();
      func_0x000107c61434(puVar6);
      puVar5 = &UNK_11070ee28;
      ppuVar7 = apuStack_90;
      func_0x000107c5eb4c(ppuVar7,&UNK_11070ee28,uVar16);
      puVar12 = puVar5;
      func_0x000107c6142c(puVar6);
      lVar13 = param_3;
      func_0x000107c50374();
      func_0x000107c61180();
      if (lVar13 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar12);
      }
      func_0x000107c4e33c(param_3);
      func_0x000107c61180();
      puVar1 = PTR___sSSSHsWP_11034da90;
      puVar12 = PTR___sSSN_11034da80;
      lVar21 = param_3;
      func_0x000107c5f9e8();
      func_0x000107c61170(param_3);
      puVar8 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      func_0x00010006c00c(ppuVar7,puVar5);
      lVar14 = lVar21;
      func_0x000107c5f9dc(lVar21,puVar12,puVar12,puVar1);
      func_0x000107c6142c(lVar21);
      ppuVar9 = ppuVar7;
      func_0x000107c5ee20(ppuVar7,puVar5);
      func_0x00010006c090(ppuVar7,puVar5);
      func_0x000107c48368(puVar8);
      func_0x000107c61170(lVar13);
      func_0x000107c61170(lVar14);
      func_0x000107c61170(ppuVar9);
      func_0x000107c4d664(param_4);
      func_0x000107c61574(uVar3);
      func_0x000107c61170(puVar8);
      func_0x00010006c090(ppuVar7,puVar5);
      goto LAB_103dabe8c;
    }
    func_0x000107c61574();
  }
  uVar17 = 0xd000000000000019;
  func_0x000107c61428(param_2 + 0x10,apuStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    pcVar15 = "Self reference is missing";
  }
  else {
    func_0x000107c61574();
    pcVar15 = "Error fetching search results";
    uVar17 = 0xd00000000000001d;
  }
  FUN_103dac9b4(param_3,8,param_4,uVar17,(ulong)(pcVar15 + -0x20) | 0x8000000000000000);
  puVar6 = (undefined *)((ulong)(pcVar15 + -0x20) | 0x8000000000000000);
LAB_103dabe8c:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 103dac190; end: 103dac1fb;  */

void FUN_103dac190(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0x112f4c138;
    func_0x0001000285a8(0x112f4c138,&UNK_10db9c570);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103dac1fc; end: 103dac28f;  */

void FUN_103dac1fc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dac290; end: 103dac2bf;  */

/* WARNING: Removing unreachable block (ram,0x000103dabed4) */
/* WARNING: Removing unreachable block (ram,0x000103dabef8) */
/* WARNING: Removing unreachable block (ram,0x000103dabf10) */

void FUN_103dac290(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  char *pcVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  long unaff_x20;
  undefined1 *puVar23;
  undefined1 *puVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined *apuStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar25 = *(long *)(unaff_x20 + 0x10);
  lVar10 = *(long *)(unaff_x20 + 0x18);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x20);
  bVar1 = *(byte *)(unaff_x20 + 0x29);
  cVar2 = *(char *)(unaff_x20 + 0x28);
  puVar13 = auStack_78;
  lVar16 = 0;
  func_0x000107c61428(lVar25 + 0x10,puVar13,0,0);
  uVar5 = lVar25 + 0x10;
  func_0x000107c61648();
  if (uVar5 != 0) {
    if (param_1 != (undefined1 *)0x0) {
      puVar22 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
      if ((ulong)param_1 >> 0x3e == 0) {
        puVar24 = *(undefined1 **)(puVar22 + 0x10);
      }
      else {
        puVar24 = param_1;
        if (-1 < (long)param_1) {
          puVar24 = puVar22;
        }
        func_0x000107c60480();
      }
      uVar20 = uVar5;
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar24 != (undefined1 *)0x0) {
        lVar25 = 4;
        do {
          uVar20 = lVar25 - 4;
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(ulong *)(puVar22 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac14c);
              (*pcVar4)();
            }
            uVar27 = *(ulong *)(param_1 + lVar25 * 8);
            func_0x000107c615f0(uVar27);
          }
          else {
            uVar27 = uVar20;
            puVar13 = param_1;
            FUN_103dab1a8();
          }
          if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac148);
            (*pcVar4)();
          }
          puVar23 = (undefined1 *)(lVar25 + -3);
          uVar20 = uVar27;
          func_0x000107c5cae8();
          func_0x000107c61180();
          if (uVar20 == 0) {
LAB_103dab9f0:
            func_0x000107c615e8(uVar27);
            uVar20 = uVar27;
          }
          else {
            uVar6 = uVar20;
            func_0x000107c44904();
            if ((uVar6 & 1) == 0) {
              func_0x000107c61170(uVar20);
              goto LAB_103dab9f0;
            }
            if (cVar2 == '\0') {
              puVar13 = (undefined1 *)(ulong)(bVar1 & 1);
              uVar6 = uVar20;
              FUN_103dac41c();
              if (lVar16 == 0) {
                func_0x000107c615e8(uVar27);
                func_0x000107c61170(uVar20);
              }
              else {
                puVar7 = puVar8;
                puVar14 = puVar13;
                lVar17 = lVar16;
                func_0x000107c61558();
                if (((ulong)puVar7 & 1) == 0) {
                  puVar14 = (undefined1 *)(*(long *)(puVar8 + 0x10) + 1);
                  puVar8 = (undefined *)0x0;
                  lVar17 = 1;
                  FUN_103dac300();
                }
                uVar26 = *(ulong *)(puVar8 + 0x10);
                if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar26) {
                  puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
                  lVar17 = 1;
                  puVar14 = (undefined1 *)(uVar26 + 1);
                  FUN_103dac300();
                }
                *(undefined1 **)(puVar8 + 0x10) = (undefined1 *)(uVar26 + 1);
                puVar8[uVar26 * 0x18 + 0x20] = (byte)uVar6 & 1;
                puVar8[uVar26 * 0x18 + 0x21] = (char)(uVar6 >> 8);
                *(undefined1 **)(puVar8 + uVar26 * 0x18 + 0x28) = puVar13;
                *(long *)(puVar8 + uVar26 * 0x18 + 0x30) = lVar16;
LAB_103dabd20:
                func_0x000107c615e8(uVar27);
                func_0x000107c61170(uVar20);
                puVar13 = puVar14;
                lVar16 = lVar17;
              }
            }
            else {
              if (cVar2 == '\x01') {
                uVar6 = uVar20;
                func_0x000107c4a764();
                func_0x000107c61180();
                if (uVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac178);
                  (*pcVar4)();
                }
                uVar26 = uVar6;
                func_0x000107c42924();
                func_0x000107c61180();
                func_0x000107c61170(uVar6);
                if (uVar26 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac174);
                  (*pcVar4)();
                }
                uVar6 = uVar26;
                func_0x000107c42930();
                func_0x000107c61170(uVar26);
                if ((int)uVar6 == 4) {
                  uVar6 = uVar20;
                  func_0x000107c4a764();
                  func_0x000107c61180();
                  if (uVar6 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac190);
                    (*pcVar4)();
                  }
                  uVar26 = uVar6;
                  func_0x000107c42924();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar6);
                  if (uVar26 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac18c);
                    (*pcVar4)();
                  }
                  uVar6 = uVar26;
                  func_0x000107c424f8();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar26);
                  if (uVar6 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac188);
                    (*pcVar4)();
                  }
                  uVar26 = uVar6;
                  func_0x000107c44dc0();
LAB_103dabcc0:
                  func_0x000107c61180();
                  func_0x000107c61170(uVar6);
                  if (uVar26 != 0) {
                    uVar6 = uVar26;
                    func_0x000107c5faec();
                    puVar14 = puVar13;
                    func_0x000107c61170(uVar26);
                    puVar7 = puVar8;
                    func_0x000107c61558();
                    lVar17 = lVar16;
                    if (((ulong)puVar7 & 1) == 0) {
                      puVar14 = (undefined1 *)(*(long *)(puVar8 + 0x10) + 1);
                      puVar8 = (undefined *)0x0;
                      lVar17 = 1;
                      FUN_103dac300();
                    }
                    uVar26 = *(ulong *)(puVar8 + 0x10);
                    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar26) {
                      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
                      lVar17 = 1;
                      puVar14 = (undefined1 *)(uVar26 + 1);
                      FUN_103dac300();
                    }
                    *(undefined1 **)(puVar8 + 0x10) = (undefined1 *)(uVar26 + 1);
                    *(undefined2 *)(puVar8 + uVar26 * 0x18 + 0x20) = 0x100;
                    *(ulong *)(puVar8 + uVar26 * 0x18 + 0x28) = uVar6;
                    *(undefined1 **)(puVar8 + uVar26 * 0x18 + 0x30) = puVar13;
                    goto LAB_103dabd20;
                  }
                }
              }
              else {
                puVar14 = (undefined1 *)(ulong)(bVar1 & 1);
                uVar6 = uVar20;
                FUN_103dac41c();
                puVar13 = puVar14;
                if (lVar16 != 0) {
                  puVar7 = puVar8;
                  lVar17 = lVar16;
                  func_0x000107c61558();
                  if (((ulong)puVar7 & 1) == 0) {
                    puVar13 = (undefined1 *)(*(long *)(puVar8 + 0x10) + 1);
                    puVar8 = (undefined *)0x0;
                    lVar17 = 1;
                    FUN_103dac300();
                  }
                  uVar26 = *(ulong *)(puVar8 + 0x10);
                  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar26) {
                    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
                    lVar17 = 1;
                    puVar13 = (undefined1 *)(uVar26 + 1);
                    FUN_103dac300();
                  }
                  *(undefined1 **)(puVar8 + 0x10) = (undefined1 *)(uVar26 + 1);
                  puVar8[uVar26 * 0x18 + 0x20] = (byte)uVar6 & 1;
                  puVar8[uVar26 * 0x18 + 0x21] = (char)(uVar6 >> 8);
                  *(undefined1 **)(puVar8 + uVar26 * 0x18 + 0x28) = puVar14;
                  *(long *)(puVar8 + uVar26 * 0x18 + 0x30) = lVar16;
                  lVar16 = lVar17;
                }
                uVar6 = uVar20;
                func_0x000107c4a764();
                func_0x000107c61180();
                if (uVar6 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac170);
                  (*pcVar4)();
                }
                uVar26 = uVar6;
                func_0x000107c42924();
                func_0x000107c61180();
                func_0x000107c61170(uVar6);
                if (uVar26 == 0) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac16c);
                  (*pcVar4)();
                }
                uVar6 = uVar26;
                func_0x000107c42930();
                func_0x000107c61170(uVar26);
                if ((int)uVar6 == 4) {
                  uVar6 = uVar20;
                  func_0x000107c4a764();
                  func_0x000107c61180();
                  if (uVar6 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac184);
                    (*pcVar4)();
                  }
                  uVar26 = uVar6;
                  func_0x000107c42924();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar6);
                  if (uVar26 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac180);
                    (*pcVar4)();
                  }
                  uVar6 = uVar26;
                  func_0x000107c424f8();
                  func_0x000107c61180();
                  func_0x000107c61170(uVar26);
                  if (uVar6 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x103dac17c);
                    (*pcVar4)();
                  }
                  uVar26 = uVar6;
                  func_0x000107c44dc0();
                  goto LAB_103dabcc0;
                }
              }
              func_0x000107c615e8(uVar27);
              func_0x000107c61170(uVar20);
            }
          }
          lVar25 = lVar25 + 1;
        } while (puVar23 != puVar24);
      }
      apuStack_90[0] = puVar8;
      FUN_103dac2c0();
      func_0x000107c61434(puVar8);
      puVar7 = &UNK_11070ee28;
      ppuVar9 = apuStack_90;
      func_0x000107c5eb4c(ppuVar9,&UNK_11070ee28,uVar20);
      puVar15 = puVar7;
      func_0x000107c6142c(puVar8);
      lVar25 = lVar10;
      func_0x000107c50374();
      func_0x000107c61180();
      if (lVar25 == 0) {
        func_0x000107c5faec();
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar15);
      }
      func_0x000107c4e33c(lVar10);
      func_0x000107c61180();
      puVar3 = PTR___sSSSHsWP_11034da90;
      puVar15 = PTR___sSSN_11034da80;
      lVar16 = lVar10;
      func_0x000107c5f9e8();
      func_0x000107c61170(lVar10);
      puVar11 = PTR_PTR_1126b0278;
      func_0x000107c610f8(PTR_PTR_1126b0278);
      func_0x00010006c00c(ppuVar9,puVar7);
      lVar10 = lVar16;
      func_0x000107c5f9dc(lVar16,puVar15,puVar15,puVar3);
      func_0x000107c6142c(lVar16);
      ppuVar12 = ppuVar9;
      func_0x000107c5ee20(ppuVar9,puVar7);
      func_0x00010006c090(ppuVar9,puVar7);
      func_0x000107c48368(puVar11);
      func_0x000107c61170(lVar25);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(ppuVar12);
      func_0x000107c4d664(uVar18);
      func_0x000107c61574(uVar5);
      func_0x000107c61170(puVar11);
      func_0x00010006c090(ppuVar9,puVar7);
      goto LAB_103dabe8c;
    }
    func_0x000107c61574();
  }
  uVar21 = 0xd000000000000019;
  func_0x000107c61428(lVar25 + 0x10,apuStack_90,0,0);
  lVar25 = lVar25 + 0x10;
  func_0x000107c61648();
  if (lVar25 == 0) {
    pcVar19 = "Self reference is missing";
  }
  else {
    func_0x000107c61574();
    pcVar19 = "Error fetching search results";
    uVar21 = 0xd00000000000001d;
  }
  FUN_103dac9b4(lVar10,8,uVar18,uVar21,(ulong)(pcVar19 + -0x20) | 0x8000000000000000);
  puVar8 = (undefined *)((ulong)(pcVar19 + -0x20) | 0x8000000000000000);
LAB_103dabe8c:
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 103dac2c0; end: 103dac2ff;  */

void FUN_103dac2c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113009970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc91478;
  func_0x000107c61520(&UNK_10dc91478,&UNK_11070ee28);
  puRam0000000113009970 = puVar1;
  return;
}



/* Entry: 103dac300; end: 103dac41b;  */

undefined * FUN_103dac300(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103dac41c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x113009978;
    func_0x0001000285a8(0x113009978,&UNK_10dc91a40);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_11070eea8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 103dac41c; end: 103dac60b;  */

ulong FUN_103dac41c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar2 = param_1;
  uVar4 = param_2;
  func_0x000107c4a764();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac5ec);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x000107c42924();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac5f0);
    (*pcVar1)();
  }
  uVar2 = uVar3;
  func_0x000107c42930();
  func_0x000107c61170(uVar3);
  if ((int)uVar2 == 1) {
    uVar2 = param_1;
    func_0x000107c4a764();
    func_0x000107c61180();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac5f4);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c42924();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac5f8);
      (*pcVar1)();
    }
    uVar2 = uVar3;
    func_0x000107c5b3f8();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac5fc);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c4c948();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac600);
      (*pcVar1)();
    }
    uVar2 = uVar3;
    func_0x000107c40500();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    if (uVar2 != 0) {
      func_0x000107c5faec(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c4a764();
      func_0x000107c61180();
      if (param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac604);
        (*pcVar1)();
      }
      uVar2 = param_1;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (uVar2 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac608);
        (*pcVar1)();
      }
      uVar3 = uVar2;
      func_0x000107c5b3f8();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103dac60c);
        (*pcVar1)();
      }
      uVar2 = uVar3;
      func_0x000107c49a18();
      func_0x000107c61170(uVar3);
      if ((param_2 & 1) != 0) {
        return uVar2 & 0xffffffff;
      }
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      func_0x000107c6142c(uVar4);
    }
  }
  return 0;
}



/* Entry: 103dac60c; end: 103dac657;  */

void FUN_103dac60c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ee4758,&UNK_10db0fa40);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103dac868,param_1);
  return;
}



/* Entry: 103dac658; end: 103dac867;  */

void FUN_103dac658(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uStack_50 = 0x103dac990;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1010e92f4;
  puStack_58 = &UNK_11070f320;
  uStack_48 = param_2;
  func_0x000107c60bc4(&puStack_70);
  uVar8 = uStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar8);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  if (lRam0000000113009870 != -1) {
    func_0x000107c61568(0x113009870,FUN_103daafd0);
  }
  uVar8 = uRam00000001138120f8;
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,1,0);
  uVar1 = *(ulong *)(puStack_70 + 0x10);
  if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puStack_70 + 0x18),uVar1 + 1,1);
  }
  puVar5 = puStack_70;
  *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puStack_70 + uVar1 * 0x10 + 0x20) = 0x5f72656b63697473;
  *(undefined8 *)(puStack_70 + uVar1 * 0x10 + 0x28) = 0xed0000736d657469;
  puVar4 = puStack_70;
  func_0x000100403a6c(puStack_70);
  func_0x000107c61574(puVar5);
  puVar5 = PTR_PTR_1126b0260;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x0001044e4d64(0);
  uVar7 = uVar6;
  func_0x000100f06a9c();
  func_0x000107c5fe08(uVar8,uVar6,uVar7);
  puVar9 = puVar4;
  func_0x000107c5fe08(puVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
  func_0x000107c48360();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  *param_1 = puVar5;
  return;
}



/* Entry: 103dac868; end: 103dac86f;  */

void FUN_103dac868(undefined8 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar3 = &puStack_70;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uStack_50 = 0x103dac990;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1010e92f4;
  puStack_58 = &UNK_11070f320;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  if (lRam0000000113009870 != -1) {
    func_0x000107c61568(0x113009870,FUN_103daafd0);
  }
  uVar8 = uRam00000001138120f8;
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,1,0);
  uVar1 = *(ulong *)(puStack_70 + 0x10);
  if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar1) {
    func_0x000100403514(1 < *(ulong *)(puStack_70 + 0x18),uVar1 + 1,1);
  }
  puVar5 = puStack_70;
  *(ulong *)(puStack_70 + 0x10) = uVar1 + 1;
  *(undefined8 *)(puStack_70 + uVar1 * 0x10 + 0x20) = 0x5f72656b63697473;
  *(undefined8 *)(puStack_70 + uVar1 * 0x10 + 0x28) = 0xed0000736d657469;
  puVar4 = puStack_70;
  func_0x000100403a6c(puStack_70);
  func_0x000107c61574(puVar5);
  puVar5 = PTR_PTR_1126b0260;
  func_0x000107c610f8();
  uVar6 = 0;
  func_0x0001044e4d64(0);
  uVar7 = uVar6;
  func_0x000100f06a9c();
  func_0x000107c5fe08(uVar8,uVar6,uVar7);
  puVar9 = puVar4;
  func_0x000107c5fe08(puVar4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar4);
  func_0x000107c48360();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  *param_1 = puVar5;
  return;
}



/* Entry: 103dac870; end: 103dac94f;  */

long FUN_103dac870(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  func_0x0001000285a8(0x1130099a8,&UNK_10dc91ab8);
  func_0x000100083b20(&uStack_38);
  uVar3 = uStack_38;
  func_0x000107c51aa8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar1 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  lVar2 = 0;
  func_0x000103dac230();
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x000107c5eb24();
  func_0x000107c613fc();
  func_0x000107c5eb20();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  uVar3 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  return lVar2;
}



/* Entry: 103dac950; end: 103dac9b3;  */

undefined ** FUN_103dac950(void)

{
  return &PTR_DAT_1130099b0;
}



/* Entry: 103dac9b4; end: 103dacc5f;  */

undefined1  [16]
FUN_103dac9b4(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  code *pcStack_f8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_80;
  undefined8 auStack_78 [4];
  long lStack_58;
  
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_5 != 0) {
    puStack_80 = PTR___sSSN_11034da80;
    puStack_98 = param_4;
    lStack_90 = param_5;
    func_0x000100102924(&puStack_98,auStack_78);
    func_0x000107c61434(param_5);
    puVar13 = puVar6;
    func_0x000107c61558(puVar6);
    puStack_98 = puVar6;
    param_2 = 0x6567617373656d;
    func_0x0001001029e8(auStack_78,0x6567617373656d,0xe700000000000000,puVar13);
    puVar6 = puStack_98;
  }
  lVar1 = param_1;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar12 = PTR___sSSSHsWP_11034da90;
  puVar13 = PTR___sSSN_11034da80;
  lVar2 = param_1;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_1);
  puVar9 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar11 = puVar6;
  func_0x000107c5f9dc(puVar6,puVar13,PTR___sypN_11034f1a8 + 8,puVar12);
  auStack_78[0] = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  uVar3 = auStack_78[0];
  func_0x000107c61174(auStack_78[0]);
  if (puVar9 == (undefined *)0x0) {
    uVar4 = uVar3;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar3);
    func_0x000107c61654();
    func_0x000107c614ac(uVar4);
    puVar12 = (undefined *)0x0;
    puVar13 = (undefined *)0xf000000000000000;
  }
  else {
    puVar12 = puVar9;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar9);
  }
  lVar5 = lVar2;
  puVar9 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar2);
  if ((ulong)puVar13 >> 0x3c < 0xf) {
    puVar11 = puVar12;
    func_0x000107c5ee20(puVar12,puVar13);
    func_0x0001000b44c0(puVar12,puVar13);
  }
  else {
    puVar11 = (undefined *)0x0;
    puVar13 = puVar9;
  }
  puVar12 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar11);
  func_0x000107c4d664(param_3);
  func_0x000107c6142c(puVar6);
  puVar9 = puVar12;
  func_0x000107c61170(puVar12);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    auVar14._8_8_ = puVar13;
    auVar14._0_8_ = puVar9;
    return auVar14;
  }
  func_0x000107c60e78();
  pcStack_a8 = FUN_103dacc60;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar13 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puStack_d0 = puVar12;
  lStack_c8 = lVar5;
  puStack_c0 = puVar6;
  uStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61168();
  puVar7 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar9,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90)
  ;
  puStack_e0 = (undefined *)0x0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar6 = puStack_e0;
  func_0x000107c61174();
  if (puVar13 == (undefined *)0x0) {
    puVar13 = puVar6;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar6);
    func_0x000107c61654();
    puVar6 = puVar13;
    func_0x000107c614ac(puVar13);
    puVar9 = (undefined *)0x0;
    puVar10 = (undefined8 *)0xf000000000000000;
    puVar8 = puVar7;
  }
  else {
    puVar9 = puVar13;
    func_0x000107c5ee30();
    puVar6 = puVar13;
    puVar8 = puVar7;
    func_0x000107c61170(puVar13);
    puVar10 = puVar7;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar15._8_8_ = puVar10;
    auVar15._0_8_ = puVar9;
    return auVar15;
  }
  func_0x000107c60e78();
  pcStack_f8 = FUN_103dacd78;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = puVar11;
  lStack_128 = lVar1;
  puStack_120 = puVar12;
  puStack_118 = puVar13;
  puStack_110 = puVar10;
  puStack_108 = puVar9;
  ppuStack_100 = &puStack_b0;
  if ((ulong)puVar8 >> 0x3c < 0xf) {
    puVar13 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar6,puVar8);
    puVar12 = puVar6;
    func_0x000107c5ee20(puVar6,puVar8);
    auStack_158[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar12);
    uVar3 = auStack_158[0];
    if (puVar13 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_158,puVar13);
      func_0x0001000b44c0(puVar6,puVar8);
      func_0x000107c615e8(puVar13);
      uVar3 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar7 = auStack_168;
      puVar8 = auStack_158;
      func_0x000107c6147c(puVar7,puVar8,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if ((int)puVar7 == 0) {
        auStack_168[0] = 0;
      }
      goto LAB_103dacebc;
    }
    uVar4 = auStack_158[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar6,puVar8);
    func_0x000107c614ac(uVar3);
  }
  auStack_168[0] = 0;
LAB_103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    func_0x000107c60e78(auStack_168[0]);
    return ZEXT816(0x11070f3e8);
  }
  auVar16._8_8_ = puVar8;
  auVar16._0_8_ = auStack_168[0];
  return auVar16;
}



/* Entry: 103dacc60; end: 103dacd77;  */

undefined1  [16] FUN_103dacc60(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 auStack_c8 [2];
  undefined8 auStack_b8 [4];
  long lStack_98;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar4 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5f9dc(param_1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  puVar2 = (undefined *)0x0;
  func_0x000107c61174();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = puVar2;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar2);
    func_0x000107c61654();
    func_0x000107c614ac(puVar1);
    puVar2 = (undefined *)0x0;
    puVar9 = (undefined8 *)0xf000000000000000;
    puVar7 = puVar4;
  }
  else {
    puVar2 = puVar1;
    func_0x000107c5ee30();
    puVar7 = puVar4;
    func_0x000107c61170(puVar1);
    puVar9 = puVar4;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    auVar10._8_8_ = puVar9;
    auVar10._0_8_ = puVar2;
    return auVar10;
  }
  func_0x000107c60e78();
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)puVar7 >> 0x3c < 0xf) {
    puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar1,puVar7);
    puVar3 = puVar1;
    func_0x000107c5ee20(puVar1,puVar7);
    auStack_b8[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    uVar6 = auStack_b8[0];
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_b8,puVar2);
      func_0x0001000b44c0(puVar1,puVar7);
      func_0x000107c615e8(puVar2);
      uVar6 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar4 = auStack_c8;
      puVar7 = auStack_b8;
      func_0x000107c6147c(puVar4,puVar7,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if ((int)puVar4 == 0) {
        auStack_c8[0] = 0;
      }
      goto LAB_103dacebc;
    }
    uVar5 = auStack_b8[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar1,puVar7);
    func_0x000107c614ac(uVar6);
  }
  auStack_c8[0] = 0;
LAB_103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    func_0x000107c60e78(auStack_c8[0]);
    return ZEXT816(0x11070f3e8);
  }
  auVar11._8_8_ = puVar7;
  auVar11._0_8_ = auStack_c8[0];
  return auVar11;
}



/* Entry: 103dacd78; end: 103daceef;  */

undefined1  [16] FUN_103dacd78(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 auStack_78 [2];
  undefined8 auStack_68 [4];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((ulong)param_2 >> 0x3c < 0xf) {
    puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(param_1,param_2);
    uVar2 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    auStack_68[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar2 = auStack_68[0];
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_68,puVar1);
      func_0x0001000b44c0(param_1,param_2);
      func_0x000107c615e8(puVar1);
      uVar2 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar3 = auStack_78;
      param_2 = auStack_68;
      func_0x000107c6147c(puVar3,param_2,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if ((int)puVar3 == 0) {
        auStack_78[0] = 0;
      }
      goto LAB_103dacebc;
    }
    uVar4 = auStack_68[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x0001000b44c0(param_1,param_2);
    func_0x000107c614ac(uVar2);
  }
  auStack_78[0] = 0;
LAB_103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    func_0x000107c60e78(auStack_78[0]);
    return ZEXT816(0x11070f3e8);
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = auStack_78[0];
  return auVar5;
}



/* Entry: 103dacef0; end: 103daceff;  */

undefined1  [16] FUN_103dacef0(void)

{
  return ZEXT816(0x11070f3e8);
}



/* Entry: 103dacf00; end: 103dacf0f;  */

undefined1  [16] FUN_103dacf00(void)

{
  return ZEXT816(0x11070f488);
}



/* Entry: 103dacf10; end: 103dacf2b;  */

void FUN_103dacf10(undefined8 param_1)

{
  func_0x0001000285a8(0x1130099c8,&UNK_10dc91b40);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103dacf94,param_1);
  return;
}



/* Entry: 103dacf2c; end: 103dacf93;  */

void FUN_103dacf2c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010023a0e0();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_103dad250();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dacf94; end: 103dacf9b;  */

void FUN_103dacf94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010023a0e0();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_103dad250();
  func_0x000107c61574(uStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dacf9c; end: 103dacfe3;  */

undefined8 FUN_103dacf9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103dad250(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 103dacfe4; end: 103dad007;  */

void FUN_103dacfe4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103dad008; end: 103dad073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad008(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010023a290();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_1130099d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103dad074; end: 103dad0bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad074(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_1130099d8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dad0c0; end: 103dad163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103dad0c0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = 0;
  func_0x00010023a0c0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  lStack_40 = lVar1;
  func_0x000107c61174(param_1);
  func_0x00010008a7c8(&uStack_38,&lStack_40);
  func_0x000100083b20(&lStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61574(lVar1);
  lVar1 = lStack_40;
  uVar2 = *(undefined8 *)(lStack_40 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lVar1);
  return uVar2;
}



/* Entry: 103dad164; end: 103dad1df; -[_TtC33LensApiServiceSaberPluginRegistry38LensApiServiceSaberPluginScopeServices buildWithAppliedEffectsObservable:] */

void FUN_103dad164(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103dad0c0(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  uVar2 = 0;
  func_0x000102b2f90c(0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103dad1e0; end: 103dad23f; -[_TtC33LensApiServiceSaberPluginRegistry38LensApiServiceSaberPluginScopeServices init] */

void FUN_103dad1e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensApiServiceSaberPluginRegistry.LensApiServiceSaberPluginScopeServices",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dad20c);
  (*pcVar1)();
}



/* Entry: 103dad240; end: 103dad24f; -[_TtC33LensApiServiceSaberPluginRegistry38LensApiServiceSaberPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad240(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130099d8));
  return;
}



/* Entry: 103dad250; end: 103dad43f;  */

long FUN_103dad250(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  long lStack_68;
  
  func_0x0001048575f8();
  puVar3 = &UNK_10dc91c28;
  func_0x000107c614e0(&UNK_10dc91c28);
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(uVar10 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar7 = uVar10;
    if (0x7fffffffffffffff < param_1) {
      uVar7 = param_1;
    }
    func_0x000107c60480();
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar6;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x103dad3ec);
            (*pcVar2)();
          }
          uVar9 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
          func_0x000107c6157c(uVar9);
        }
        else {
          uVar9 = uVar8;
          func_0x000102b2f370(uVar8,param_1);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103dad3e8);
          (*pcVar2)();
        }
        uVar11 = uVar8 + 1;
        uStack_70 = uVar9;
        func_0x000107c6157c(uVar9);
        func_0x000107c614bc(&lStack_68,&uStack_70,puVar3);
        func_0x000107c61578(uVar9,2);
        lVar1 = lStack_68;
        if (lStack_68 == 0) break;
        puVar5 = puVar6;
        func_0x000107c61550();
        if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
           (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar6 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar6) {
              puVar4 = puVar6;
            }
            func_0x000107c60480(puVar4);
          }
          puVar5 = (undefined *)0x0;
          func_0x000102b2f074(0,puVar4 + 1,1,puVar6);
        }
        uVar9 = (ulong)puVar5 & 0xffffffffffffff8;
        uVar8 = *(ulong *)(uVar9 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar8) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          func_0x000102b2f074(puVar6,uVar8 + 1,1,puVar5);
          uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
        *(long *)(uVar9 + uVar8 * 8 + 0x20) = lVar1;
        uVar8 = uVar11;
        if (uVar11 == uVar7) goto LAB_103dad408;
      }
      uVar8 = uVar8 + 1;
    } while (uVar11 != uVar7);
  }
LAB_103dad408:
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(param_1);
  *(undefined **)(unaff_x20 + 0x10) = puVar6;
  return unaff_x20;
}



/* Entry: 103dad440; end: 103dad467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad440(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010023a290();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_1130099d8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103dad468; end: 103dad4bb;  */

void FUN_103dad468(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 103dad4bc; end: 103dad527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad4bc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103dad8b0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_113009b50) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103dad528; end: 103dad593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad528(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113009b50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dad594; end: 103dad5f3; -[_TtC34LogoutScopedFactoryServiceProvider22SCLogoutScopedServices init] */

void FUN_103dad594(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LogoutScopedFactoryServiceProvider.SCLogoutScopedServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dad5c0);
  (*pcVar1)();
}



/* Entry: 103dad5f4; end: 103dad603; -[_TtC34LogoutScopedFactoryServiceProvider22SCLogoutScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad5f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113009b50));
  return;
}



/* Entry: 103dad604; end: 103dad66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dad604(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11070f740;
  func_0x000107c613fc(&UNK_11070f740,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  FUN_103dc513c(FUN_103dad948,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103dad670; end: 103dad70b;  */

void FUN_103dad670(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11070f650;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11070f650;
  return;
}



/* Entry: 103dad70c; end: 103dad743;  */

void FUN_103dad70c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 103dad744; end: 103dad74b;  */

undefined8 FUN_103dad744(void)

{
  return 0x1b;
}



/* Entry: 103dad74c; end: 103dad87f;  */

void FUN_103dad74c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11070f768;
  func_0x000107c613fc(&UNK_11070f768,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103dad920;
  func_0x00010058fa64(FUN_103dad920,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103dad880; end: 103dad8af;  */

undefined ** FUN_103dad880(void)

{
  return &PTR_DAT_113066c88;
}



/* Entry: 103dad8b0; end: 103dad8cf;  */

void FUN_103dad8b0(void)

{
  func_0x000107c61168(&PTR_PTR_11294a308);
  return;
}



/* Entry: 103dad8d0; end: 103dad91f;  */

undefined1  [16] FUN_103dad8d0(void)

{
  return ZEXT816(0x11070f6a0);
}



/* Entry: 103dad920; end: 103dad947;  */

void FUN_103dad920(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 103dad948; end: 103dad94b;  */

void FUN_103dad948(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103dad94c; end: 103dada2f;  */

/* WARNING: Possible PIC construction at 0x000103dad9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dada08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dad9fc) */
/* WARNING: Removing unreachable block (ram,0x000103dada0c) */

void FUN_103dad94c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11070f7f0;
  func_0x000107c613fc(&UNK_11070f7f0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x113009bc0;
  func_0x0001000285a8(0x113009bc0,&UNK_10dc91ec8);
  func_0x000107c613fc();
  pcVar3 = FUN_103daddc8;
  func_0x0001000841fc(FUN_103daddc8,puVar1,uVar2);
  func_0x000100084214(&UNK_10dc91ea0,0x24,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103dada30; end: 103dada4f;  */

/* WARNING: Possible PIC construction at 0x000103dad9f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103dada08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103dad9fc) */
/* WARNING: Removing unreachable block (ram,0x000103dada0c) */

void FUN_103dada30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_11070f7f0;
  func_0x000107c613fc(&UNK_11070f7f0,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x113009bc0;
  func_0x0001000285a8(0x113009bc0,&UNK_10dc91ec8);
  func_0x000107c613fc();
  pcVar6 = FUN_103daddc8;
  func_0x0001000841fc(FUN_103daddc8,puVar4,uVar5);
  func_0x000100084214(&UNK_10dc91ea0,0x24,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 103dada50; end: 103dadd83;  */

void FUN_103dada50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x113009bc8,&UNK_10dc91ed0);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103daef54();
  func_0x000100082720("LogoutScopeGraphBridgeServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x113009bd0,&UNK_10dc91ee0);
  puVar3 = &UNK_11070f818;
  func_0x000107c613fc(&UNK_11070f818,0x40,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar8 = 0x103daddd8;
  func_0x0001000823a8(0x103daddd8,puVar3);
  func_0x000100082720("SCLogoutEntryPointWrapperServiceProvider",0x28,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_103dad70c;
  func_0x0001000823a8(FUN_103dad70c,0);
  func_0x000100082720("SCLogoutScopedServicesCleanupRelayServiceProvider",0x31,2);
  func_0x0001000285a8(0x113009bd8,&UNK_10dc91ed8);
  puVar3 = &UNK_11070f840;
  func_0x000107c613fc(&UNK_11070f840,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x103dadde8;
  func_0x0001000823a8(0x103dadde8,puVar3);
  func_0x000100082720("SCLogoutScopeInitializationPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x113009b58,&UNK_10dc91cb0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x103daddf4;
  func_0x0001000823a8(0x103daddf4,uVar5);
  func_0x000100082720("SCLogoutScopeInitializationServiceProvider",0x2a,2);
  func_0x0001000285a8(0x113009b48,&UNK_10dc91ca0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103daddfc;
  func_0x0001000823a8(0x103daddfc,uVar6);
  func_0x000100082720("SCLogoutScopedServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11070f868;
  func_0x000107c613fc(&UNK_11070f868,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x103dade04;
  func_0x0001000823a8(0x103dade04,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLogoutScopeEntryPointProvider",0x1f,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 103dadd84; end: 103daddc7;  */

void FUN_103dadd84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103daddc8; end: 103dade0b;  */

void FUN_103daddc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *param_2;
  func_0x0001000285a8(0x113009bc8,&UNK_10dc91ed0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_103daef54();
  func_0x000100082720("LogoutScopeGraphBridgeServicesServiceProvider",0x2d,2);
  func_0x0001000285a8(0x113009bd0,&UNK_10dc91ee0);
  puVar3 = &UNK_11070f818;
  func_0x000107c613fc(&UNK_11070f818,0x40,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar4;
  *(undefined8 *)(puVar3 + 0x20) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar6;
  *(undefined8 *)(puVar3 + 0x30) = uVar8;
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  uVar4 = 0x103daddd8;
  func_0x0001000823a8(0x103daddd8,puVar3);
  func_0x000100082720("SCLogoutEntryPointWrapperServiceProvider",0x28,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar5 = FUN_103dad70c;
  func_0x0001000823a8(FUN_103dad70c,0);
  func_0x000100082720("SCLogoutScopedServicesCleanupRelayServiceProvider",0x31,2);
  func_0x0001000285a8(0x113009bd8,&UNK_10dc91ed8);
  puVar3 = &UNK_11070f840;
  func_0x000107c613fc(&UNK_11070f840,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar4;
  *(code **)(puVar3 + 0x28) = pcVar5;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x103dadde8;
  func_0x0001000823a8(0x103dadde8,puVar3);
  func_0x000100082720("SCLogoutScopeInitializationPluginRegistryServiceProvider",0x38,2);
  func_0x0001000285a8(0x113009b58,&UNK_10dc91cb0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x103daddf4;
  func_0x0001000823a8(0x103daddf4,uVar6);
  func_0x000100082720("SCLogoutScopeInitializationServiceProvider",0x2a,2);
  func_0x0001000285a8(0x113009b48,&UNK_10dc91ca0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103daddfc;
  func_0x0001000823a8(0x103daddfc,uVar7);
  func_0x000100082720("SCLogoutScopedServicesServiceProvider",0x25,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11070f868;
  func_0x000107c613fc(&UNK_11070f868,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  *(code **)(puVar3 + 0x18) = pcVar5;
  func_0x000107c6157c(pcVar5);
  uVar8 = 0x103dade04;
  func_0x0001000823a8(0x103dade04,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCLogoutScopeEntryPointProvider",0x1f,2);
  *param_1 = uVar8;
  return;
}



/* Entry: 103dade0c; end: 103dae507;  */

void FUN_103dade0c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_103dae660();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  puVar1 = PTR_PTR_1126ada40;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar7 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar8 = 0x635374756f676f6c;
  func_0x000107c5fadc(0x635374756f676f6c,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  uVar9 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef116c0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(uVar9);
  uVar8 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar9);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  func_0x000107c3e740(uVar9);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *param_1 = param_2;
  return;
}



/* Entry: 103dae508; end: 103dae553;  */

void FUN_103dae508(void)

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



/* Entry: 103dae554; end: 103dae55b;  */

undefined8 FUN_103dae554(void)

{
  return 0x1b;
}



/* Entry: 103dae55c; end: 103dae5df;  */

void FUN_103dae55c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x103dae6a0,param_2,FUN_103dae6a4,param_2,FUN_103dae6cc,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103dae5e0; end: 103dae62f;  */

undefined8 FUN_103dae5e0(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 103dae630; end: 103dae65f;  */

void FUN_103dae630(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11070f880;
  return;
}



/* Entry: 103dae660; end: 103dae67f;  */

void FUN_103dae660(void)

{
  func_0x000107c61168(&PTR_PTR_113009c48);
  return;
}



/* Entry: 103dae680; end: 103dae6a3;  */

undefined1  [16] FUN_103dae680(void)

{
  return ZEXT816(0x11070f8c0);
}



/* Entry: 103dae6a4; end: 103dae6cb;  */

void FUN_103dae6a4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 103dae6cc; end: 103dae6d3;  */

undefined8 FUN_103dae6cc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 103dae6d4; end: 103dae70f;  */

void FUN_103dae6d4(undefined8 *param_1,undefined8 param_2)

{
  FUN_103dae710();
  func_0x0001000a7f38("SCLogoutScopeInitializationPluginRegistryServiceProvider",0x38,2);
  *param_1 = param_2;
  return;
}



/* Entry: 103dae710; end: 103dae8fb;  */

void FUN_103dae710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d758;
  ppuVar4 = &PTR_DAT_113066c88;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11070f910;
  func_0x000107c613fc(&UNK_11070f910,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x113009cd0;
  func_0x0001000285a8(0x113009cd0,&UNK_10dc92010);
  func_0x0001000a6ee8(&UNK_11070fb20,"LogoutScopeGraphBridgeScopeInitializationPluginKey",0x32,2,
                      FUN_103dae8fc,puVar2,uVar3,&UNK_11070fb20,&PTR_DAT_113009d60);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11070f8c0,"SCLogoutEntryPointWrapperScopeInitializationPluginKey",0x35,2,
                      FUN_103dae9b0,param_3,uVar3,&UNK_11070f8c0,&PTR_DAT_113009be0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11070f938;
  func_0x000107c613fc(&UNK_11070f938,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11070f6e0,"SCLogoutScopedServicesScopeInitializationPluginKey",0x32,2,
                      FUN_103daea60,puVar2,uVar3,&UNK_11070f6e0,&PTR_DAT_113009b60);
  func_0x000107c61574(puVar2);
  uVar3 = 0x113009cd8;
  func_0x0001000285a8(0x113009cd8,&UNK_10dc92018);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 103dae8fc; end: 103dae93b;  */

void FUN_103dae8fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_103daf038(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LogoutScopeGraphBridgeScopeInitializationPluginProvider",0x37,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dae93c; end: 103dae9af;  */

void FUN_103dae93c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x103daea9c;
  func_0x0001000823a8(0x103daea9c,param_3);
  func_0x000100082720("SCLogoutEntryPointWrapperScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dae9b0; end: 103dae9b7;  */

void FUN_103dae9b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x103daea9c;
  func_0x0001000823a8();
  func_0x000100082720("SCLogoutEntryPointWrapperScopeInitializationPluginProvider",0x3a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 103dae9b8; end: 103daea5f;  */

void FUN_103dae9b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11070f960;
  func_0x000107c613fc(&UNK_11070f960,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_103daea94;
  func_0x0001000823a8(FUN_103daea94,puVar1);
  func_0x000100082720("SCLogoutScopedServicesScopeInitializationPluginProvider",0x37,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 103daea60; end: 103daea67;  */

void FUN_103daea60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11070f960;
  func_0x000107c613fc(&UNK_11070f960,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_103daea94;
  func_0x0001000823a8(FUN_103daea94,puVar3);
  func_0x000100082720("SCLogoutScopedServicesScopeInitializationPluginProvider",0x37,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 103daea68; end: 103daea93;  */

void FUN_103daea68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103daea94; end: 103daeaa3;  */

void FUN_103daea94(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11070f768;
  func_0x000107c613fc(&UNK_11070f768,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103dad920;
  func_0x00010058fa64(FUN_103dad920,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103daeaa4; end: 103daeb2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103daeaa4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_103daee64();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113009ce0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113009ce8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103daeb2c);
  (*pcVar1)();
}



/* Entry: 103daeb2c; end: 103daeb8b; -[_TtC22LogoutScopeGraphBridge37LogoutScopeGraphBridgeSaberEntryPoint init] */

void FUN_103daeb2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LogoutScopeGraphBridge.LogoutScopeGraphBridgeSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103daeb58);
  (*pcVar1)();
}



/* Entry: 103daeb8c; end: 103daebc3; -[_TtC22LogoutScopeGraphBridge37LogoutScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103daeba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103daebac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daeb8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113009ce0));
  return;
}



/* Entry: 103daebc4; end: 103daebeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daebc4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113009ce8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113009ce0));
  return;
}



/* Entry: 103daebec; end: 103daec0b;  */

void FUN_103daebec(void)

{
  func_0x000107c61168(&PTR_PTR_11294a3c8);
  return;
}



/* Entry: 103daec0c; end: 103daec93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103daec0c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_113009d18) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_113009d20);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103daec94);
  (*pcVar2)();
}



/* Entry: 103daec94; end: 103daed7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103daec94(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113009d18);
  *(undefined **)(unaff_x20 + _DAT_113009d18) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113009d20);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_113009d20))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11070fa80;
  func_0x000107c613fc(&UNK_11070fa80,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x103daed80,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 103daed7c; end: 103daed87;  */

void FUN_103daed7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 103daed88; end: 103daede7; -[_TtC22LogoutScopeGraphBridge37SCLogoutScopedServicesSaberEntryPoint init] */

void FUN_103daed88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LogoutScopeGraphBridge.SCLogoutScopedServicesSaberEntryPoint",0x3c,"init()",6
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103daedb4);
  (*pcVar1)();
}



/* Entry: 103daede8; end: 103daee1f; -[_TtC22LogoutScopeGraphBridge37SCLogoutScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daede8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_113009d20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113009d18));
  return;
}



/* Entry: 103daee20; end: 103daee23;  */

void FUN_103daee20(void)

{
  return;
}



/* Entry: 103daee24; end: 103daee43;  */

void FUN_103daee24(void)

{
  FUN_103daec94();
  return;
}



/* Entry: 103daee44; end: 103daee63;  */

void FUN_103daee44(void)

{
  func_0x000107c61168(&PTR_PTR_11294a490);
  return;
}



/* Entry: 103daee64; end: 103daef33;  */

undefined8 FUN_103daee64(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x113009d50,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_103daef34();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 103daef34; end: 103daef53;  */

void FUN_103daef34(void)

{
  func_0x000107c61168(&PTR_PTR_11294a558);
  return;
}



/* Entry: 103daef54; end: 103daefbf;  */

void FUN_103daef54(void)

{
  func_0x0001000285a8(0x113009d58,&UNK_10dc920b8);
  func_0x0001000823a8(0x103daef94,0);
  return;
}



/* Entry: 103daefc0; end: 103daeffb; -[_TtC22LogoutScopeGraphBridge30LogoutScopeGraphBridgeServices init] */

void FUN_103daefc0(undefined8 param_1)

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



/* Entry: 103daeffc; end: 103daf02f;  */

void FUN_103daeffc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103daf030; end: 103daf037;  */

undefined8 FUN_103daf030(void)

{
  return 0x1b;
}



/* Entry: 103daf038; end: 103daf1af;  */

void FUN_103daf038(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11070fac8;
  func_0x000107c613fc(&UNK_11070fac8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103daf1b0,puVar1);
  return;
}



/* Entry: 103daf1b0; end: 103daf1b7;  */

void FUN_103daf1b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x113009d50,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x113009d50,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11070fb60;
  func_0x000107c613fc(&UNK_11070fb60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x103daf264;
  func_0x00010058fa64(0x103daf264,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103daf1b8; end: 103daf213;  */

void FUN_103daf1b8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x113009d50,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x113009d50,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 103daf214; end: 103daf26b;  */

undefined ** FUN_103daf214(void)

{
  return &PTR_DAT_113066c88;
}



/* Entry: 103daf26c; end: 103daf2b3; -[SCLogoutScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf26c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113009db0;
  func_0x000107c61428(param_1 + _DAT_113009db0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103daf2b4; end: 103daf30b; -[SCLogoutScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf2b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113009db0;
  func_0x000107c61428(param_1 + _DAT_113009db0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103daf30c; end: 103daf353; -[SCLogoutScopeGraphBridgeSaberEntryPoint logoutScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf30c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113009db8;
  func_0x000107c61428(param_1 + _DAT_113009db8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 103daf354; end: 103daf3b7; -[SCLogoutScopeGraphBridgeSaberEntryPoint setLogoutScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf354(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113009db8;
  func_0x000107c61428(param_1 + _DAT_113009db8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103daf3b8; end: 103daf4eb;  */

/* WARNING: Possible PIC construction at 0x000103daf470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daf48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103daf4a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103daf474) */
/* WARNING: Removing unreachable block (ram,0x000103daf490) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103daf3b8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4c088();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_103daebec();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_103daee64();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103daf4ec);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_113009ce0) = lVar5;
    *(long *)(lVar4 + _DAT_113009ce8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


