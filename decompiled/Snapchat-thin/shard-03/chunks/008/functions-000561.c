/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102daa2b0; end: 102daa303;  */

void FUN_102daa2b0(void)

{
  func_0x000107c61168(&PTR_PTR_1128a62d0);
  return;
}



/* Entry: 102daa304; end: 102daa5fb;  */

void FUN_102daa304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x13;
  long unaff_x20;
  undefined8 uVar5;
  long unaff_x21;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d36580;
  uStack_b0 = param_4;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar8 = (long)&lStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar4 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_b8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_00;
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar4 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar4 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x10);
  uStack_a0 = param_2;
  uStack_98 = param_3;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c6157c(uVar5);
  func_0x000100075034(lVar8,0x102dabb44,auStack_80,lVar2);
  func_0x000107c61574(uVar5);
  pcVar7 = *(code **)(extraout_x13 + 0x30);
  lVar2 = lVar8;
  (*pcVar7)(lVar8,1,lVar3);
  if ((int)lVar2 == 1) {
    FUN_102dad9c0(lVar8,0x112d36580,&UNK_10d9016d0);
    uVar1 = uStack_98;
    uVar5 = uStack_a0;
    lVar8 = lStack_a8;
    FUN_102daa5fc(lStack_a8,uStack_a0,uStack_98,uStack_b0);
    lVar4 = lVar8;
    (*pcVar7)(lVar8,1,lVar3);
    lVar2 = lStack_c0;
    if ((int)lVar4 == 1) {
      FUN_102dad9c0(lVar8,0x112d36580,&UNK_10d9016d0);
      lVar2 = lStack_b8;
      FUN_102dab204(lStack_b8,uVar5,uVar1);
      if (unaff_x21 == 0) {
        (**(code **)(extraout_x13 + 0x20))(param_1,lVar2,lVar3);
      }
      else {
        func_0x000107c61654();
      }
    }
    else {
      pcVar7 = *(code **)(extraout_x13 + 0x20);
      (*pcVar7)(lStack_c0,lVar8,lVar3);
      (*pcVar7)(param_1,lVar2,lVar3);
    }
  }
  else {
    pcVar7 = *(code **)(extraout_x13 + 0x20);
    (*pcVar7)(lVar4,lVar8,lVar3);
    (*pcVar7)(lVar6,lVar4,lVar3);
    (*pcVar7)(lVar6 - extraout_x12_03,lVar6,lVar3);
    (*pcVar7)(param_1,lVar6 - extraout_x12_03,lVar3);
  }
  return;
}



/* Entry: 102daa5fc; end: 102daad87;  */

void FUN_102daa5fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lStack_d8 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(unaff_x20 + 0x18);
  if (lVar14 == 0) {
LAB_102daa8b0:
                    /* WARNING: Could not recover jumptable at 0x000102daa8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar13 + 0x38))(param_1,1,1,lVar2);
    return;
  }
  puStack_a0 = param_4;
  func_0x000107c615f0(lVar14);
  FUN_102dae628(&uStack_98,param_2,param_3);
  if (lStack_90 == 0) {
    func_0x000107c615e8(lVar14);
    goto LAB_102daa8b0;
  }
  uStack_b0 = uStack_80;
  uStack_a8 = uStack_88;
  puVar3 = PTR_PTR_1126b25c8;
  puStack_d0 = auStack_e0 + -extraout_x8;
  uStack_c8 = param_3;
  uStack_c0 = param_2;
  uStack_b8 = param_1;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR_PTR_1126bcf20;
  func_0x000107c610f8(PTR_PTR_1126bcf20);
  func_0x000107c453e4();
  func_0x000107c56420(puVar3);
  func_0x000107c61170(puVar4);
  puVar4 = puVar3;
  func_0x000107c4c99c();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x102daa9e8);
    (*pcVar12)();
  }
  func_0x000107c56438();
  func_0x000107c61170(puVar4);
  puVar4 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c47d08();
  func_0x000107c61170(puVar5);
  func_0x000107c61434(lStack_90);
  FUN_102daea8c(uStack_98,lStack_90);
  puVar5 = PTR_PTR_1126b25b8;
  func_0x000107c610f8(PTR_PTR_1126b25b8);
  uVar6 = uStack_a8;
  func_0x000107c5fadc(uStack_a8,uStack_b0);
  func_0x000107c46814(puVar5);
  func_0x000107c61170(uVar6);
  FUN_102dad9c0(&uStack_98,0x112f178e8,&UNK_10db4dec0);
  lVar7 = lVar14;
  func_0x000107c50768();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c43fb4();
  func_0x000107c61180();
  if (lVar8 != 0) {
    lVar9 = lVar8;
    func_0x000107c44314();
    uVar6 = uStack_c8;
    puVar1 = puStack_d0;
    if (lVar9 == 0) {
      puStack_a0 = puVar4;
      func_0x000102daa9e8(puStack_d0,lVar8,uStack_c0,uStack_c8);
      puVar10 = puVar1;
      (**(code **)(lVar13 + 0x30))(puVar1,1,lVar2);
      if ((int)puVar10 == 1) {
        FUN_102dad9c0(puVar1,0x112d36580,&UNK_10d9016d0);
        func_0x000102daab80(uStack_b8,lVar8,uStack_c0,uVar6);
        func_0x000107c615e8(lVar14);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puStack_a0);
        func_0x000107c61170(puVar5);
        func_0x000107c615e8(lVar7);
        func_0x000107c615e8(lVar8);
        return;
      }
      func_0x000107c615e8(lVar14);
      func_0x000107c615e8(lVar7);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puStack_a0);
      func_0x000107c61170(puVar5);
      lVar14 = lStack_d8;
      pcVar12 = *(code **)(lVar13 + 0x20);
      (*pcVar12)(lStack_d8,puVar1,lVar2);
      uVar6 = uStack_b8;
      (*pcVar12)(uStack_b8,lVar14,lVar2);
      pcVar12 = *(code **)(lVar13 + 0x38);
      uVar11 = 0;
      goto LAB_102daa87c;
    }
    func_0x000107c615e8(lVar8);
  }
  func_0x000107c615e8(lVar14);
  func_0x000107c615e8(lVar7);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  pcVar12 = *(code **)(lVar13 + 0x38);
  uVar11 = 1;
  uVar6 = uStack_b8;
LAB_102daa87c:
  (*pcVar12)(uVar6,uVar11,1,lVar2);
  return;
}



/* Entry: 102daad88; end: 102dab203;  */

void FUN_102daad88(code *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  code *pcVar18;
  code *pcVar19;
  long extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x12;
  code *pcVar20;
  undefined8 uVar21;
  long unaff_x21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined1 *puVar26;
  code *pcVar27;
  undefined1 auStack_1e8 [8];
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [32];
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [8];
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long alStack_a0 [2];
  long *plStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = (code *)0x0;
  pcStack_d8 = param_1;
  uStack_d0 = param_2;
  uStack_c8 = param_3;
  func_0x000107c5ede0();
  pcStack_c0 = *(code **)(pcVar1 + -8);
  pcStack_b8 = pcVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(pcStack_c0 + 0x40));
  pcVar18 = (code *)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar27 = pcVar18 + -extraout_x12;
  alStack_a0[0] = 0x3a;
  alStack_a0[1] = 0xe100000000000000;
  uStack_b0 = 0x5f;
  uStack_a8 = 0xe100000000000000;
  plStack_90 = param_4;
  puStack_88 = (undefined8 *)param_5;
  func_0x000100e8b654();
  puVar12 = PTR___sSSN_11034da80;
  *(code **)(pcVar27 + -0x10) = pcVar1;
  *(code **)(pcVar27 + -8) = pcVar1;
  *(undefined **)(pcVar27 + -0x20) = PTR___sSSN_11034da80;
  *(code **)(pcVar27 + -0x18) = pcVar1;
  plVar2 = alStack_a0;
  puVar15 = &uStack_b0;
  func_0x000107c601fc(plVar2,puVar15,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80);
  alStack_a0[0] = 0x7e;
  alStack_a0[1] = 0xe100000000000000;
  uStack_b0 = 0x5f;
  uStack_a8 = 0xe100000000000000;
  plStack_90 = plVar2;
  puStack_88 = puVar15;
  *(code **)(pcVar27 + -0x10) = pcVar1;
  *(code **)(pcVar27 + -8) = pcVar1;
  plVar2 = alStack_a0;
  puVar25 = &uStack_b0;
  *(undefined **)(pcVar27 + -0x20) = puVar12;
  *(code **)(pcVar27 + -0x18) = pcVar1;
  func_0x000107c601fc(plVar2,puVar25,0,0,0,1,puVar12,puVar12);
  func_0x000107c6142c(puVar15);
  plVar3 = (long *)PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  plVar4 = plVar3;
  func_0x000107c415e0();
  func_0x000107c61180();
  plVar5 = plVar4;
  func_0x000107c5c7fc();
  func_0x000107c61180();
  func_0x000107c61170(plVar4);
  func_0x000107c5edb4(pcVar27,plVar5);
  func_0x000107c61170(plVar5);
  plStack_90 = (long *)0x5f616c61706d69;
  puStack_88 = (undefined8 *)0xe700000000000000;
  func_0x000107c5fb78(plVar2,puVar25);
  func_0x000107c6142c(puVar25);
  func_0x000107c5fb78(0x34706d2e,0xe400000000000000);
  puVar15 = puStack_88;
  puVar25 = puStack_88;
  func_0x000107c5ed9c(pcVar18,plStack_90,puStack_88);
  func_0x000107c6142c(puVar15);
  func_0x000107c415e0();
  func_0x000107c61180();
  plVar4 = plVar3;
  func_0x000107c5edc4();
  uVar13 = puVar25;
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar25);
  plVar6 = plVar3;
  func_0x000107c43418();
  plVar7 = plVar4;
  func_0x000107c61170(plVar4);
  if ((int)plVar6 == 0) {
LAB_102dab14c:
    func_0x000107c5ee40(pcVar18,1,uStack_d0,uStack_c8);
    lVar22 = unaff_x21;
    if (unaff_x21 != 0) {
      func_0x000107c61170(plVar3);
      pcVar1 = pcStack_b8;
      pcVar20 = *(code **)(pcStack_c0 + 8);
      (*pcVar20)(pcVar18,pcStack_b8);
      pcVar9 = pcVar27;
      pcVar19 = pcVar1;
      (*pcVar20)();
      goto LAB_102dab1c4;
    }
  }
  else {
    func_0x000107c5edc4();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar13);
    plStack_90 = (long *)0x0;
    plVar4 = plVar3;
    func_0x000107c3e388();
    func_0x000107c61180();
    func_0x000107c61170(plVar7);
    plVar5 = plStack_90;
    if (plVar4 == (long *)0x0) {
      plVar6 = plStack_90;
      func_0x000107c61174(plStack_90);
      plVar7 = plVar5;
      func_0x000107c5ed30(plVar5);
      func_0x000107c61170(plVar6);
      func_0x000107c61654();
      func_0x000107c614ac(plVar7);
      unaff_x21 = 0;
      goto LAB_102dab14c;
    }
    uVar8 = 0;
    func_0x000101a64068();
    uVar13 = 0x112defdc0;
    FUN_102dadba8(0x112defdc0,&UNK_10d9c6700);
    plVar2 = (long *)PTR___sypN_11034f1a8;
    plVar6 = plVar4;
    func_0x000107c5f9e8(plVar4,uVar8,PTR___sypN_11034f1a8 + 8,uVar13);
    func_0x000107c61174(plVar5);
    func_0x000107c61170(plVar4);
    lVar22 = unaff_x21;
    if (plVar6[2] == 0) {
LAB_102dab0ec:
      puStack_88 = (undefined8 *)0x0;
      plStack_90 = (long *)0x0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      lVar22 = *(long *)PTR__NSFileSize_110345448;
      func_0x000107c61434(plVar6);
      lVar23 = lVar22;
      func_0x000101aae36c(lVar22);
      if ((uVar8 & 1) == 0) {
        func_0x000107c6142c(plVar6);
        goto LAB_102dab0ec;
      }
      func_0x0001000bb420(plVar6[7] + lVar23 * 0x20,&plStack_90);
      func_0x000107c6142c(plVar6);
    }
    func_0x000107c6142c(plVar6);
    if (lStack_78 == 0) {
      FUN_102dad9c0(&plStack_90,0x112d387f8,&UNK_10d902650);
      goto LAB_102dab14c;
    }
    plVar6 = alStack_a0;
    func_0x000107c6147c(plVar6,&plStack_90,(undefined *)((long)plVar2 + 8),
                        PTR___ss5Int64VN_11034ee50,6);
    if ((((ulong)plVar6 & 1) == 0) || (alStack_a0[0] < 1)) goto LAB_102dab14c;
  }
  pcVar20 = pcStack_b8;
  pcVar1 = pcStack_c0;
  (**(code **)(pcStack_c0 + 8))(pcVar27,pcStack_b8);
  func_0x000107c61170(plVar3);
  pcVar9 = pcStack_d8;
  pcVar19 = pcVar18;
  (**(code **)(pcVar1 + 0x20))(pcStack_d8,pcVar18,pcVar20);
LAB_102dab1c4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(long **)(pcVar27 + -0x60) = plVar3;
  *(code **)(pcVar27 + -0x50) = pcVar27;
  *(long **)(pcVar27 + -0x48) = plVar2;
  *(long **)(pcVar27 + -0x40) = plVar5;
  *(code **)(pcVar27 + -0x38) = pcVar18;
  *(long **)(pcVar27 + -0x30) = plVar4;
  *(code **)(pcVar27 + -0x28) = pcVar1;
  *(code **)(pcVar27 + -0x20) = pcVar20;
  *(long *)(pcVar27 + -0x18) = unaff_x21;
  *(undefined1 **)(pcVar27 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(pcVar27 + -8) = FUN_102dab204;
  pcVar1 = pcVar9;
  FUN_102dae628(pcVar27 + -0xa0);
  lVar23 = *(long *)(pcVar27 + -0x98);
  if (lVar23 == 0) {
    FUN_102dad940();
    func_0x000107c613f8(&UNK_1105d06e0,pcVar1,0,0);
    *pcVar1 = (code)0x0;
    func_0x000107c61654();
  }
  else {
    *(undefined8 *)(pcVar27 + -0x100) = extraout_x8_00;
    *(code **)(pcVar27 + -0xf8) = pcVar19;
    *(long *)(pcVar27 + -0xf0) = lVar22;
    uVar13 = *(undefined8 *)(pcVar27 + -0x78);
    uVar21 = *(undefined8 *)(pcVar27 + -0x70);
    uVar24 = *(undefined8 *)(pcVar27 + -0xa0);
    func_0x000107c61434(lVar23);
    FUN_102daea8c(uVar24,lVar23);
    puVar10 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(uVar13,uVar21);
    func_0x000107c4766c(puVar10);
    func_0x000107c61170(uVar13);
    FUN_102dad9c0(pcVar27 + -0xa0,0x112f178e8,&UNK_10db4dec0);
    puVar11 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar11);
    func_0x000107c61170(puVar12);
    uVar13 = 0;
    func_0x000107c60f6c();
    puVar12 = &UNK_1105d05f8;
    func_0x000107c613fc(&UNK_1105d05f8,0x18,7);
    puVar25 = (undefined8 *)(puVar12 + 0x10);
    *puVar25 = 0;
    *(code **)(pcVar27 + -0x58) = pcVar20;
    uVar21 = *(undefined8 *)(pcVar20 + 0x10);
    puVar14 = &UNK_1105d0620;
    func_0x000107c613fc(&UNK_1105d0620,0x20,7);
    *(undefined **)(puVar14 + 0x10) = puVar12;
    *(undefined8 *)(puVar14 + 0x18) = uVar13;
    *(code **)(pcVar27 + -0xb0) = FUN_102dad980;
    *(undefined **)(pcVar27 + -0xa8) = puVar14;
    *(undefined **)(pcVar27 + -0xd0) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(pcVar27 + -200) = 0x42000000;
    *(undefined **)(pcVar27 + -0xc0) = &UNK_100f17d9c;
    *(undefined **)(pcVar27 + -0xb8) = &UNK_1105d0638;
    pcVar1 = pcVar27 + -0xd0;
    func_0x000107c60bc4(pcVar1);
    uVar24 = *(undefined8 *)(pcVar27 + -0xa8);
    func_0x000107c6157c(puVar12);
    func_0x000107c61174();
    func_0x000107c61574(uVar24);
    func_0x000107c50784(uVar21);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(pcVar1);
    func_0x000107c6005c();
    pcVar1 = pcVar27 + -0xe8;
    puVar15 = puVar25;
    func_0x000107c61428(puVar25,pcVar1,0,0);
    puVar26 = (undefined1 *)*puVar25;
    if (puVar26 == (undefined1 *)0x0) {
      FUN_102dad940();
      func_0x000107c613f8(&UNK_1105d06e0,puVar15,0,0);
      *(undefined1 *)puVar15 = 1;
      func_0x000107c61654();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(uVar13);
      func_0x000107c61574(puVar12);
    }
    else {
      puVar16 = puVar26;
      func_0x000107c615f0();
      func_0x000107c44314();
      if (puVar16 == (undefined1 *)0x0) {
        *(undefined8 *)(pcVar27 + -0x108) = uVar13;
        puVar16 = puVar26;
        func_0x000107c4407c();
        func_0x000107c61180();
        pcVar18 = (code *)0x0;
        if (puVar16 != (undefined1 *)0x0) {
          puVar17 = puVar16;
          pcVar18 = pcVar1;
          func_0x000107c5faec();
          func_0x000107c61170(puVar16);
          uVar8 = (ulong)puVar17 & 0xffffffffffff;
          if (((ulong)pcVar18 & 0x2000000000000000) != 0) {
            uVar8 = (ulong)pcVar18 >> 0x38 & 0xf;
          }
          if (uVar8 != 0) {
            uVar21 = *(undefined8 *)(pcVar27 + -0x100);
            func_0x000107c5ed80(uVar21,puVar17,pcVar18);
            func_0x000107c6142c(pcVar18);
            uVar13 = *(undefined8 *)(*(long *)(*(long *)(pcVar27 + -0x58) + 0x20) + 0x10);
            *(code **)(pcVar27 + -0xc0) = pcVar9;
            *(undefined8 *)(pcVar27 + -0xb8) = *(undefined8 *)(pcVar27 + -0xf8);
            *(undefined8 *)(pcVar27 + -0xb0) = uVar21;
            func_0x000107c6157c(uVar13);
            func_0x000100075034(FUN_102dad9a4,pcVar27 + -0xd0,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(puVar12);
            func_0x000107c61574(uVar13);
            func_0x000107c61170(*(undefined8 *)(pcVar27 + -0x108));
            func_0x000107c615e8(puVar26);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar11);
            return;
          }
          func_0x000107c6142c();
        }
        FUN_102dad940();
        func_0x000107c613f8(&UNK_1105d06e0,pcVar18,0,0);
        *pcVar18 = (code)0x3;
        func_0x000107c61654();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
        uVar13 = *(undefined8 *)(pcVar27 + -0x108);
      }
      else {
        FUN_102dad940();
        func_0x000107c613f8(&UNK_1105d06e0,puVar16,0,0);
        *puVar16 = 2;
        func_0x000107c61654();
        func_0x000107c61170(puVar10);
        func_0x000107c61170(puVar11);
      }
      func_0x000107c61170(uVar13);
      func_0x000107c61574(puVar12);
      func_0x000107c615e8(puVar26);
    }
  }
  return;
}



/* Entry: 102dab204; end: 102dab647;  */

void FUN_102dab204(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_e8 [24];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar2 = param_2;
  FUN_102dae628(&uStack_a0);
  if (lStack_98 == 0) {
    FUN_102dad940();
    func_0x000107c613f8(&UNK_1105d06e0,puVar2,0,0);
    *puVar2 = 0;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61434(lStack_98);
    FUN_102daea8c(uStack_a0,lStack_98);
    puVar3 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    uVar6 = uStack_78;
    func_0x000107c5fadc(uStack_78,uStack_70);
    func_0x000107c4766c(puVar3);
    func_0x000107c61170(uVar6);
    FUN_102dad9c0(&uStack_a0,0x112f178e8,&UNK_10db4dec0);
    puVar4 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar4);
    func_0x000107c61170(puVar5);
    uVar6 = 0;
    func_0x000107c60f6c();
    puVar5 = &UNK_1105d05f8;
    func_0x000107c613fc(&UNK_1105d05f8,0x18,7);
    puVar14 = (undefined8 *)(puVar5 + 0x10);
    *puVar14 = 0;
    uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
    puVar7 = &UNK_1105d0620;
    func_0x000107c613fc(&UNK_1105d0620,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar5;
    *(undefined8 *)(puVar7 + 0x18) = uVar6;
    pcStack_b0 = FUN_102dad980;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_100f17d9c;
    puStack_b8 = &UNK_1105d0638;
    ppuVar8 = &puStack_d0;
    puStack_a8 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_a8;
    func_0x000107c6157c(puVar5);
    func_0x000107c61174();
    func_0x000107c61574(puVar7);
    func_0x000107c50784(uVar13);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c6005c();
    puVar2 = auStack_e8;
    puVar9 = puVar14;
    func_0x000107c61428(puVar14,puVar2,0,0);
    puVar15 = (undefined1 *)*puVar14;
    if (puVar15 == (undefined1 *)0x0) {
      FUN_102dad940();
      func_0x000107c613f8(&UNK_1105d06e0,puVar9,0,0);
      *(undefined1 *)puVar9 = 1;
      func_0x000107c61654();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar6);
      func_0x000107c61574(puVar5);
    }
    else {
      puVar10 = puVar15;
      func_0x000107c615f0();
      func_0x000107c44314();
      if (puVar10 == (undefined1 *)0x0) {
        puVar11 = puVar15;
        func_0x000107c4407c();
        func_0x000107c61180();
        puVar10 = (undefined1 *)0x0;
        if (puVar11 != (undefined1 *)0x0) {
          puVar12 = puVar11;
          puVar10 = puVar2;
          func_0x000107c5faec();
          func_0x000107c61170(puVar11);
          uVar1 = (ulong)puVar12 & 0xffffffffffff;
          if (((ulong)puVar10 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)puVar10 >> 0x38 & 0xf;
          }
          if (uVar1 != 0) {
            func_0x000107c5ed80(param_1,puVar12,puVar10);
            func_0x000107c6142c(puVar10);
            uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x10);
            puStack_c0 = param_2;
            puStack_b8 = (undefined *)param_3;
            pcStack_b0 = (code *)param_1;
            func_0x000107c6157c(uVar13);
            func_0x000100075034(FUN_102dad9a4,&puStack_d0,PTR___sytN_11034f1b0 + 8);
            func_0x000107c61574(puVar5);
            func_0x000107c61574(uVar13);
            func_0x000107c61170(uVar6);
            func_0x000107c615e8(puVar15);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar4);
            return;
          }
          func_0x000107c6142c();
        }
        FUN_102dad940();
        func_0x000107c613f8(&UNK_1105d06e0,puVar10,0,0);
        *puVar10 = 3;
        func_0x000107c61654();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
      }
      else {
        FUN_102dad940();
        func_0x000107c613f8(&UNK_1105d06e0,puVar10,0,0);
        *puVar10 = 2;
        func_0x000107c61654();
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar4);
      }
      func_0x000107c61170(uVar6);
      func_0x000107c61574(puVar5);
      func_0x000107c615e8(puVar15);
    }
  }
  return;
}



/* Entry: 102dab648; end: 102dab6a7;  */

void FUN_102dab648(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c615e8(uVar1);
  func_0x000107c615f0(param_1);
  func_0x000107c60060();
  return;
}



/* Entry: 102dab6a8; end: 102dab6bb;  */

bool FUN_102dab6a8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102dab6bc; end: 102dab767;  */

void FUN_102dab6bc(void)

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



/* Entry: 102dab768; end: 102dab777;  */

void FUN_102dab768(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102dab778; end: 102dab85b;  */

void FUN_102dab778(undefined8 param_1,long *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *param_2;
  if (*(long *)(lVar4 + 0x10) != 0) {
    func_0x000107c61434(lVar4);
    func_0x000100029284(param_3);
    if ((param_4 & 1) != 0) {
      lVar5 = *(long *)(lVar4 + 0x38);
      lVar1 = 0;
      func_0x000107c5ede0();
      lVar6 = *(long *)(lVar1 + -8);
      (**(code **)(lVar6 + 0x10))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_3,lVar1);
      func_0x000107c6142c(lVar4);
      pcVar3 = *(code **)(lVar6 + 0x38);
      uVar2 = 0;
      goto LAB_102dab83c;
    }
    func_0x000107c6142c(lVar4);
  }
  lVar1 = 0;
  func_0x000107c5ede0();
  pcVar3 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  uVar2 = 1;
LAB_102dab83c:
  (*pcVar3)(param_1,uVar2,1,lVar1);
  return;
}



/* Entry: 102dab85c; end: 102dab93b;  */

void FUN_102dab85c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (**(code **)(lVar3 + 0x10))(puVar2,param_4,lVar1);
  (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
  func_0x000107c61434(param_3);
  FUN_102dab93c(puVar2,param_2,param_3);
  return;
}



/* Entry: 102dab93c; end: 102dabadf;  */

void FUN_102dab93c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x0001001021cc(param_1,lVar5);
  lVar1 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_102dad9c0(lVar5,0x112d36580,&UNK_10d9016d0);
    FUN_102dabbec(puVar4,param_2,param_3);
    func_0x000107c6142c(param_3);
    FUN_102dad9c0(puVar4,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,lVar5,lVar2);
    uVar3 = *unaff_x20;
    func_0x000107c61558(uVar3);
    uStack_68 = *unaff_x20;
    FUN_102dabe94(lVar6,param_2,param_3,uVar3);
    func_0x000107c6142c(param_3);
    *unaff_x20 = uStack_68;
  }
  return;
}



/* Entry: 102dabae0; end: 102dabb5b;  */

void FUN_102dabae0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102dabb5c; end: 102dabbeb;  */

void FUN_102dabb5c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar4 = *(long *)(param_5 + 0x38);
  lVar3 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            (lVar4 + *(long *)(*(long *)(lVar3 + -8) + 0x48) * param_1,param_4,lVar3);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102dabbec);
  (*pcVar2)();
}



/* Entry: 102dabbec; end: 102dabd0b;  */

void FUN_102dabbec(undefined8 param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *unaff_x20;
  func_0x000107c61434(lVar4);
  func_0x000100029284();
  func_0x000107c6142c(lVar4);
  if ((param_3 & 1) == 0) {
    lVar4 = 0;
    func_0x000107c5ede0();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar4 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102dac2a0();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    lVar5 = *(long *)(lVar3 + 0x38);
    lVar4 = 0;
    func_0x000107c5ede0();
    lVar6 = *(long *)(lVar4 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar5 + *(long *)(lVar6 + 0x48) * param_2,lVar4);
    func_0x000102dad410(param_2,lVar3);
    *unaff_x20 = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000102dabcf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar4);
  return;
}



/* Entry: 102dabd0c; end: 102dabe93;  */

undefined8 FUN_102dabd0c(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102dac638();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    func_0x000102dad5e0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102dabe94; end: 102dabfc7;  */

void FUN_102dabe94(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  func_0x000100029284(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102dabf84);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_102dac908(lVar4,param_4 & 1);
    uVar6 = param_3;
    func_0x000100029284(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102dabf34);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102dac2a0();
    lVar4 = *unaff_x20;
    goto joined_r0x000102dabf98;
  }
  lVar4 = *unaff_x20;
joined_r0x000102dabf98:
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(lVar4 + 0x38);
    lVar4 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000102dabf7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(lVar4 + -8) + 0x48) * lVar2,param_1,lVar4);
    return;
  }
  FUN_102dabb5c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102dabfc8; end: 102dabfdb;  */

void FUN_102dabfc8(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac21c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102dad17c(lVar6,param_4 & 1,0x112f17908,&UNK_10db4e340);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac1e0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102dac7a8(0x112f17908,&UNK_10db4e340);
    lVar6 = *unaff_x20;
    goto joined_r0x000102dac238;
  }
  lVar6 = *unaff_x20;
joined_r0x000102dac238:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac2a0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102dabfdc; end: 102dac12b;  */

void FUN_102dabfdc(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac0b4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102dacee0(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac07c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102dac638();
    lVar6 = *unaff_x20;
    goto joined_r0x000102dac0c8;
  }
  lVar6 = *unaff_x20;
joined_r0x000102dac0c8:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac12c);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102dac12c; end: 102dac4bf;  */

void FUN_102dac12c(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac21c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102dad17c(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac1e0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102dac7a8(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102dac238;
  }
  lVar6 = *unaff_x20;
joined_r0x000102dac238:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102dac2a0);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102dac4c0; end: 102dac907;  */

void FUN_102dac4c0(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112f17900,&UNK_10db4dee0);
  lVar13 = *unaff_x20;
  lVar8 = lVar13;
  func_0x000107c6048c();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar13 || lVar1 + uVar9 * 8 <= lVar8 + 0x40U) {
      func_0x000107c610b8(lVar8 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar13 + 0x40);
    if (uVar9 == 0) goto LAB_102dac59c;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        lVar12 = (LZCOUNT(uVar11) | lVar14 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(lVar13 + 0x38) + lVar12);
        uVar4 = *puVar3;
        uVar6 = puVar3[1];
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar12);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x38) + lVar12);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        func_0x00010006c00c();
        func_0x000107c61434(uVar6);
        if (uVar9 != 0) break;
LAB_102dac59c:
        do {
          lVar12 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102dac638);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_102dac610;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar12;
      }
    } while( true );
  }
LAB_102dac610:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 102dac908; end: 102dad93f;  */

void FUN_102dac908(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  undefined1 *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  undefined1 auStack_e0 [8];
  undefined1 auStack_a8 [72];
  
  lVar6 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar7 = 0x112f178f0;
  func_0x0001000285a8(0x112f178f0,&UNK_10db4dec8);
  lVar8 = lVar19;
  func_0x000107c60490(lVar19,lVar1,param_2,uVar7);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_102dacbf4:
    func_0x000107c61574(lVar19);
LAB_102dacbfc:
    *unaff_x20 = lVar8;
    return;
  }
  puVar22 = (ulong *)(lVar19 + 0x40);
  uVar15 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *puVar22;
  lVar1 = lVar8 + 0x40;
  lVar10 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar21 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102dacc24);
          (*pcVar5)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar21) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar19);
            goto LAB_102dacbfc;
          }
          uVar18 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
            *puVar22 = -1L << (uVar18 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar22,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar19 + 0x10) = 0;
          goto LAB_102dacbf4;
        }
        uVar18 = puVar22[lVar21];
        lVar10 = lVar10 + 1;
      } while (uVar18 == 0);
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar21 = lVar10;
    }
    uVar13 = LZCOUNT(uVar13) | lVar21 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + uVar13 * 0x10);
    uVar7 = *puVar2;
    uVar3 = puVar2[1];
    lVar20 = *(long *)(lVar11 + 0x48);
    lVar10 = *(long *)(lVar19 + 0x38) + lVar20 * uVar13;
    if ((param_2 & 1) == 0) {
      (**(code **)(lVar11 + 0x10))(puVar12,lVar10,lVar6);
      func_0x000107c61434(uVar3);
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar12,lVar10,lVar6);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar8 + 0x28));
    puVar9 = auStack_a8;
    func_0x000107c5fb58(puVar9,uVar7,uVar3);
    func_0x000107c606a8();
    uVar17 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    uVar16 = (ulong)puVar9 & (uVar17 ^ 0xffffffffffffffff);
    uVar14 = uVar16 >> 6;
    uVar13 = -1L << (uVar16 & 0x3f) & (*(ulong *)(lVar1 + uVar14 * 8) ^ 0xffffffffffffffff);
    if (uVar13 == 0) {
      bVar4 = false;
      uVar13 = 0x3f - uVar17 >> 6;
      do {
        uVar16 = uVar14 + 1;
        if ((uVar16 == uVar13) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102dacc28);
          (*pcVar5)();
        }
        uVar14 = 0;
        if (uVar16 != uVar13) {
          uVar14 = uVar16;
        }
        bVar4 = (bool)(uVar16 == uVar13 | bVar4);
        uVar16 = *(ulong *)(lVar1 + uVar14 * 8);
      } while (uVar16 == 0xffffffffffffffff);
      uVar16 = ~uVar16;
      uVar13 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar14 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar14) = 1L << (uVar13 & 0x3f) | *(ulong *)(lVar1 + uVar14);
    puVar2 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar13 * 0x10);
    *puVar2 = uVar7;
    puVar2[1] = uVar3;
    (**(code **)(lVar11 + 0x20))(*(long *)(lVar8 + 0x38) + lVar20 * uVar13,puVar12,lVar6);
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
    lVar10 = lVar21;
  } while( true );
}



/* Entry: 102dad940; end: 102dad97f;  */

void FUN_102dad940(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f178e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4df80;
  func_0x000107c61520(&UNK_10db4df80,&UNK_1105d06e0);
  puRam0000000112f178e0 = puVar1;
  return;
}



/* Entry: 102dad980; end: 102dad9a3;  */

void FUN_102dad980(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,1,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  func_0x000107c615e8(uVar2);
  func_0x000107c615f0(param_1);
  func_0x000107c60060();
  return;
}



/* Entry: 102dad9a4; end: 102dad9bf;  */

void FUN_102dad9a4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_102dab85c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102dad9c0; end: 102dad9ff;  */

undefined8 FUN_102dad9c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102dada00; end: 102dadb67;  */

int FUN_102dada00(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102dada7c;
        goto LAB_102dada60;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102dada60:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_102dada7c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102dadb68; end: 102dadba7;  */

void FUN_102dadb68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f17910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4df54;
  func_0x000107c61520(&UNK_10db4df54,&UNK_1105d06e0);
  puRam0000000112f17910 = puVar1;
  return;
}



/* Entry: 102dadba8; end: 102dadbe7;  */

void FUN_102dadba8(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    func_0x000101a64068(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102dadbe8; end: 102dadc0f;  */

void FUN_102dadbe8(void)

{
  FUN_102dad9a4();
  return;
}



/* Entry: 102dadc10; end: 102dadc23;  */

bool FUN_102dadc10(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102dadc24; end: 102dadeeb;  */

void FUN_102dadc24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x7453646e65697246;
  uVar1 = 0xef70616e5379726f;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000012;
    uVar1 = 0x800000010f10d7b0;
  }
  uVar2 = 0x800000010f10d780;
  uVar4 = 0xd000000000000011;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar1 = 0x74616843;
  if (bVar3 != 0) {
    uVar1 = 0x736569726f6d654d;
  }
  uVar5 = 0xe400000000000000;
  if (bVar3 != 0) {
    uVar5 = 0xec00000070616e53;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar4 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 102dadeec; end: 102dadf97;  */

void FUN_102dadeec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  uVar5 = 0x7453646e65697246;
  uVar1 = 0xef70616e5379726f;
  if (bVar3 != 3) {
    uVar5 = 0xd000000000000012;
    uVar1 = 0x800000010f10d7b0;
  }
  uVar2 = 0x800000010f10d780;
  uVar4 = 0xd000000000000011;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar4 = uVar5;
  }
  uVar1 = 0x74616843;
  if (bVar3 != 0) {
    uVar1 = 0x736569726f6d654d;
  }
  uVar5 = 0xe400000000000000;
  if (bVar3 != 0) {
    uVar5 = 0xec00000070616e53;
  }
  if (bVar3 < 2) {
    uVar2 = uVar5;
    uVar4 = uVar1;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Entry: 102dadf98; end: 102dae53b;  */

long FUN_102dadf98(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  byte bStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined1 uStack_82;
  undefined1 uStack_81;
  byte bStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined1 uStack_7a;
  undefined1 uStack_79;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *(long *)(param_3 + 0x10);
  if (lVar23 != 0) {
    lVar19 = 0;
    iVar21 = (int)param_1;
    iVar11 = (int)((ulong)param_1 >> 0x20);
    uVar13 = param_2 >> 0x30 & 0xff;
    lVar14 = (long)iVar21;
    uVar15 = (param_1 >> 0x20) - lVar14;
    puVar20 = (ulong *)(param_3 + 0x28);
    do {
      uVar1 = puVar20[-1];
      uVar2 = *puVar20;
      uVar3 = (uint)(uVar2 >> 0x20);
      uVar12 = uVar3 >> 0x1e;
      uVar4 = (uint)(param_2 >> 0x20);
      iVar7 = (int)uVar1;
      if (uVar2 >> 0x3e == 3) {
        if (((uVar1 == 0 && uVar2 == 0xc000000000000000) && 2 < param_2 >> 0x3e) &&
            (param_1 == 0 && param_2 == 0xc000000000000000)) goto LAB_102dae4bc;
LAB_102dae0d0:
        uVar18 = 0;
joined_r0x000102dae0b4:
        if (uVar4 >> 0x1e < 2) goto LAB_102dae0b8;
LAB_102dae0dc:
        if (uVar4 >> 0x1e == 2) {
          uVar8 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae4fc);
            (*pcVar6)();
          }
          goto LAB_102dae0f0;
        }
        if (uVar18 == 0) goto LAB_102dae4bc;
      }
      else {
        if (1 < uVar3 >> 0x1e) {
          if (uVar12 != 2) goto LAB_102dae0d0;
          uVar18 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
          if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae508);
            (*pcVar6)();
          }
          goto joined_r0x000102dae0b4;
        }
        if (uVar12 != 0) {
          iVar17 = (int)(uVar1 >> 0x20);
          if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae504);
            (*pcVar6)();
          }
          uVar18 = (ulong)(iVar17 - iVar7);
          goto joined_r0x000102dae0b4;
        }
        uVar18 = uVar2 >> 0x30 & 0xff;
        if (1 < uVar4 >> 0x1e) goto LAB_102dae0dc;
LAB_102dae0b8:
        uVar8 = uVar13;
        if ((uVar4 >> 0x1e != 0) && (uVar8 = (long)(iVar11 - iVar21), SBORROW4(iVar11,iVar21))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae500);
          (*pcVar6)();
        }
LAB_102dae0f0:
        if (uVar18 == uVar8) {
          if ((long)uVar18 < 1) goto LAB_102dae4bc;
          if (uVar12 < 2) {
            if (uVar12 == 0) {
              bStack_80 = (byte)uVar1;
              uStack_7f = (undefined1)(uVar1 >> 8);
              uStack_7e = (undefined1)(uVar1 >> 0x10);
              uStack_7d = (undefined1)(uVar1 >> 0x18);
              uStack_7c = (undefined1)(uVar1 >> 0x20);
              uStack_7b = (undefined1)(uVar1 >> 0x28);
              uStack_7a = (undefined1)(uVar1 >> 0x30);
              uStack_79 = (undefined1)(uVar1 >> 0x38);
              uStack_78 = (undefined1)uVar2;
              uStack_77 = (undefined1)(uVar2 >> 8);
              uStack_76 = (undefined1)(uVar2 >> 0x10);
              uStack_75 = (undefined1)(uVar2 >> 0x18);
              uStack_74 = (undefined1)(uVar2 >> 0x20);
              uStack_73 = (undefined1)(uVar2 >> 0x28);
              if (uVar4 >> 0x1e == 0) {
                bStack_8e = (byte)param_1;
                uStack_8d = (undefined1)((ulong)param_1 >> 8);
                uStack_8c = (undefined1)((ulong)param_1 >> 0x10);
                uStack_8b = (undefined1)((ulong)param_1 >> 0x18);
                uStack_8a = (undefined1)((ulong)param_1 >> 0x20);
                uStack_89 = (undefined1)((ulong)param_1 >> 0x28);
                uStack_88 = (undefined1)((ulong)param_1 >> 0x30);
                uStack_87 = (undefined1)((ulong)param_1 >> 0x38);
                uStack_86 = (undefined1)param_2;
                uStack_85 = (undefined1)(param_2 >> 8);
                uStack_84 = (undefined1)(param_2 >> 0x10);
                uStack_83 = (undefined1)(param_2 >> 0x18);
                uStack_82 = (undefined1)(param_2 >> 0x20);
                uStack_81 = (undefined1)(param_2 >> 0x28);
                pbVar10 = &bStack_80;
                func_0x000107c610b0(pbVar10,&bStack_8e,uVar13);
                iVar7 = (int)pbVar10;
              }
              else if (uVar4 >> 0x1e == 1) {
                if (param_1 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae51c);
                  (*pcVar6)();
                }
                uVar18 = uVar1;
                func_0x00010006c00c(uVar1,uVar2);
                func_0x000107c5ec30();
                if (uVar18 == 0) {
                  func_0x000107c5ec38();
LAB_102dae538:
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae53c);
                  (*pcVar6)();
                }
                uVar8 = uVar18;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar14,uVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae524);
                  (*pcVar6)();
                }
                lVar16 = (lVar14 - uVar8) + uVar18;
                func_0x000107c5ec38();
                if (lVar16 == 0) goto LAB_102dae538;
                if ((long)uVar15 <= (long)uVar8) {
                  uVar8 = uVar15;
                }
                pbVar10 = &bStack_80;
                func_0x000107c610b0(pbVar10,lVar16,uVar8);
                func_0x00010006c090(uVar1,uVar2);
                iVar7 = (int)pbVar10;
              }
              else {
                lVar22 = *(long *)(param_1 + 0x10);
                lVar16 = *(long *)(param_1 + 0x18);
                uVar18 = uVar1;
                func_0x00010006c00c(uVar1,uVar2);
                func_0x000107c5ec30();
                uVar8 = uVar18;
                if (uVar18 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,uVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae528);
                    (*pcVar6)();
                  }
                  uVar18 = (lVar22 - uVar8) + uVar18;
                }
                uVar9 = lVar16 - lVar22;
                if (SBORROW8(lVar16,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae520);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                if (uVar18 == 0) goto LAB_102dae52c;
                if ((long)uVar9 <= (long)uVar8) {
                  uVar8 = uVar9;
                }
                pbVar10 = &bStack_80;
                func_0x000107c610b0(pbVar10,uVar18,uVar8);
                func_0x00010006c090(uVar1,uVar2);
                iVar7 = (int)pbVar10;
              }
              if (iVar7 != 0) goto LAB_102dae03c;
              goto LAB_102dae4bc;
            }
            lVar16 = (long)iVar7;
            uVar18 = ((long)uVar1 >> 0x20) - lVar16;
            if ((long)uVar1 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae50c);
              (*pcVar6)();
            }
            uVar8 = uVar1;
            func_0x00010006c00c(uVar1,uVar2);
            func_0x000107c5ec30();
            if (uVar8 == 0) {
              func_0x000107c5ec38();
              lVar16 = 0;
LAB_102dae334:
              lVar22 = 0;
            }
            else {
              uVar9 = uVar8;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar16,uVar9)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae518);
                (*pcVar6)();
              }
              lVar16 = (lVar16 - uVar9) + uVar8;
              func_0x000107c5ec38();
              if (lVar16 == 0) goto LAB_102dae334;
              if ((long)uVar18 <= (long)uVar9) {
                uVar9 = uVar18;
              }
              lVar22 = uVar9 + lVar16;
            }
            func_0x000100e25bdc(&bStack_80,lVar16,lVar22,param_1,param_2);
            func_0x00010006c090(uVar1,uVar2);
            bVar5 = bStack_80;
          }
          else {
            if (uVar12 == 2) {
              lVar16 = *(long *)(uVar1 + 0x10);
              lVar22 = *(long *)(uVar1 + 0x18);
              uVar18 = uVar1;
              func_0x00010006c00c(uVar1,uVar2);
              func_0x000107c5ec30();
              uVar8 = uVar18;
              if (uVar18 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar16,uVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae514);
                  (*pcVar6)();
                }
                uVar18 = (lVar16 - uVar8) + uVar18;
              }
              uVar9 = lVar22 - lVar16;
              if (SBORROW8(lVar22,lVar16)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae510);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              if (uVar18 == 0) {
                lVar16 = 0;
              }
              else {
                if ((long)uVar9 <= (long)uVar8) {
                  uVar8 = uVar9;
                }
                lVar16 = uVar8 + uVar18;
              }
              func_0x000100e25bdc(&bStack_80,uVar18,lVar16,param_1,param_2);
              func_0x00010006c090(uVar1,uVar2);
              if ((bStack_80 & 1) == 0) goto LAB_102dae03c;
              goto LAB_102dae4bc;
            }
            uStack_78 = 0;
            uStack_77 = 0;
            uStack_76 = 0;
            uStack_75 = 0;
            uStack_74 = 0;
            uStack_73 = 0;
            bStack_80 = 0;
            uStack_7f = 0;
            uStack_7e = 0;
            uStack_7d = 0;
            uStack_7c = 0;
            uStack_7b = 0;
            uStack_7a = 0;
            uStack_79 = 0;
            func_0x00010006c00c(uVar1,uVar2);
            func_0x000100e25bdc(&bStack_8e,&bStack_80,&bStack_80,param_1,param_2);
            func_0x00010006c090(uVar1,uVar2);
            bVar5 = bStack_8e;
          }
          if ((bVar5 & 1) != 0) goto LAB_102dae4bc;
        }
      }
LAB_102dae03c:
      puVar20 = puVar20 + 2;
      lVar19 = lVar19 + 1;
    } while (lVar23 != lVar19);
  }
  lVar19 = 0;
LAB_102dae4bc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return lVar19;
  }
  func_0x000107c60e78();
LAB_102dae52c:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102dae530);
  (*pcVar6)();
}



/* Entry: 102dae53c; end: 102dae627;  */

undefined1  [16] FUN_102dae53c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar1 = param_3;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  uVar4 = (uint)(param_3 >> 0x3b) & 1;
  if ((param_4 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar5 = 7;
  if (uVar4 == 0) {
    uVar5 = 0xb;
  }
  uVar5 = uVar5 | uVar1 << 0x10;
  while( true ) {
    if (uVar5 < 0x4000) {
      uVar5 = 0;
      uVar3 = 1;
      goto LAB_102dae60c;
    }
    func_0x000107c5fb64(uVar5,param_3,param_4);
    uVar1 = uVar5;
    uVar2 = param_3;
    func_0x000107c5fbcc();
    if ((uVar1 == param_1) && (uVar2 == param_2)) break;
    func_0x000107c605b8();
    func_0x000107c6142c(uVar2);
    if ((uVar1 & 1) != 0) {
LAB_102dae5fc:
      uVar3 = 0;
LAB_102dae60c:
      auVar6._8_8_ = uVar3;
      auVar6._0_8_ = uVar5;
      return auVar6;
    }
  }
  func_0x000107c6142c(uVar2);
  goto LAB_102dae5fc;
}



/* Entry: 102dae628; end: 102daea8b;  */

void FUN_102dae628(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte *pbVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte **ppbVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  undefined8 uVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbStack_70;
  ulong uStack_68;
  
  uVar2 = 0x3a;
  uVar18 = 0;
  func_0x00010143c25c(0x3a,0xe100000000000000,param_2,param_3);
  if ((uVar18 & 0xff) != 1) {
    uVar3 = 0xf;
    uVar14 = uVar2;
    uVar16 = param_3;
    func_0x000107c5fbd8(0xf,uVar2,param_2,param_3);
    uVar8 = uVar16;
    func_0x000107c5fb2c();
    func_0x000107c6142c(uVar16);
    func_0x000107c5fb60(uVar2,param_2,param_3);
    func_0x000100ed9f54();
    func_0x000107c5fb2c();
    func_0x000107c6142c(uVar8);
    pbVar4 = (byte *)0x7e;
    uVar18 = 0;
    FUN_102dae53c(0x7e,0xe100000000000000,uVar2,param_2);
    if ((uVar18 & 0xff) == 1) {
      func_0x000107c6142c(uVar14);
      pbVar15 = param_2;
    }
    else {
      uVar16 = 0xf;
      pbVar15 = pbVar4;
      pbVar17 = param_2;
      func_0x000107c5fbd8(0xf,pbVar4,uVar2,param_2);
      pbVar9 = pbVar17;
      func_0x000107c5fb2c();
      func_0x000107c6142c(pbVar17);
      func_0x000107c5fb60(pbVar4,uVar2,param_2);
      uVar5 = uVar2;
      func_0x000100ed9f54();
      func_0x000107c5fb2c();
      func_0x000107c6142c(pbVar9);
      uVar6 = (ulong)pbVar4 & 0xffffffffffff;
      uVar10 = uVar5 >> 0x38 & 0xf;
      uVar7 = uVar6;
      if ((uVar5 & 0x2000000000000000) != 0) {
        uVar7 = uVar10;
      }
      if (uVar7 == 0) {
        func_0x000107c6142c(uVar5);
      }
      else {
        if ((uVar5 >> 0x3c & 1) == 0) {
          if ((uVar5 >> 0x3d & 1) == 0) {
            if (((ulong)pbVar4 >> 0x3c & 1) == 0) {
              uVar6 = uVar5;
              func_0x000107c60358();
            }
            else {
              pbVar4 = (byte *)((uVar5 & 0xfffffffffffffff) + 0x20);
            }
            if (*pbVar4 == 0x2b) {
              if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102daea88);
                (*pcVar1)();
              }
              lVar12 = uVar6 - 1;
              if (lVar12 == 0) goto LAB_102dae9bc;
              pbVar17 = (byte *)0x0;
              do {
                pbVar4 = pbVar4 + 1;
                if (((9 < *pbVar4 - 0x30) ||
                    (lVar13 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar7 = (ulong)(byte)(*pbVar4 - 0x30), pbVar17 = (byte *)(lVar13 + uVar7),
                   SCARRY8(lVar13,uVar7))) goto LAB_102dae9bc;
                uVar18 = 0;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
            else if (*pbVar4 == 0x2d) {
              if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102daea80);
                (*pcVar1)();
              }
              lVar12 = uVar6 - 1;
              if (lVar12 == 0) {
LAB_102dae9bc:
                uVar18 = 1;
                pbVar17 = (byte *)0x0;
              }
              else {
                pbVar17 = (byte *)0x0;
                do {
                  pbVar4 = pbVar4 + 1;
                  if (((9 < *pbVar4 - 0x30) ||
                      (lVar13 = (long)pbVar17 * 10,
                      SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                     (uVar7 = (ulong)(byte)(*pbVar4 - 0x30), pbVar17 = (byte *)(lVar13 - uVar7),
                     SBORROW8(lVar13,uVar7))) goto LAB_102dae9bc;
                  uVar18 = 0;
                  lVar12 = lVar12 + -1;
                } while (lVar12 != 0);
              }
            }
            else {
              if (uVar6 == 0) goto LAB_102dae9bc;
              pbVar17 = (byte *)0x0;
              if (pbVar4 == (byte *)0x0) {
                uVar18 = 0;
              }
              else {
                do {
                  if (((9 < *pbVar4 - 0x30) ||
                      (lVar12 = (long)pbVar17 * 10,
                      SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar7 = (ulong)(byte)(*pbVar4 - 0x30), pbVar17 = (byte *)(lVar12 + uVar7),
                     SCARRY8(lVar12,uVar7))) goto LAB_102dae9bc;
                  uVar18 = 0;
                  uVar6 = uVar6 - 1;
                  pbVar4 = pbVar4 + 1;
                } while (uVar6 != 0);
              }
            }
          }
          else {
            pbStack_70 = pbVar4;
            uStack_68 = uVar5 & 0xffffffffffffff;
            uVar18 = (uint)pbVar4 & 0xff;
            if (uVar18 == 0x2b) {
              if (uVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102daea8c);
                (*pcVar1)();
              }
              lVar12 = uVar10 - 1;
              if (lVar12 == 0) goto LAB_102dae9bc;
              pbVar17 = (byte *)0x0;
              pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar4 - 0x30) ||
                    (lVar13 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar7 = (ulong)(byte)(*pbVar4 - 0x30), pbVar17 = (byte *)(lVar13 + uVar7),
                   SCARRY8(lVar13,uVar7))) goto LAB_102dae9bc;
                uVar18 = 0;
                lVar12 = lVar12 + -1;
                pbVar4 = pbVar4 + 1;
              } while (lVar12 != 0);
            }
            else if (uVar18 == 0x2d) {
              if (uVar10 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x102daea84);
                (*pcVar1)();
              }
              lVar12 = uVar10 - 1;
              if (lVar12 == 0) goto LAB_102dae9bc;
              pbVar17 = (byte *)0x0;
              pbVar4 = (byte *)((ulong)&pbStack_70 | 1);
              do {
                if (((9 < *pbVar4 - 0x30) ||
                    (lVar13 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar7 = (ulong)(byte)(*pbVar4 - 0x30), pbVar17 = (byte *)(lVar13 - uVar7),
                   SBORROW8(lVar13,uVar7))) goto LAB_102dae9bc;
                uVar18 = 0;
                lVar12 = lVar12 + -1;
                pbVar4 = pbVar4 + 1;
              } while (lVar12 != 0);
            }
            else {
              if (uVar10 == 0) goto LAB_102dae9bc;
              pbVar17 = (byte *)0x0;
              ppbVar11 = &pbStack_70;
              do {
                if (((9 < *(byte *)ppbVar11 - 0x30) ||
                    (lVar12 = (long)pbVar17 * 10,
                    SUB168(SEXT816((long)pbVar17) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar7 = (ulong)(byte)(*(byte *)ppbVar11 - 0x30),
                   pbVar17 = (byte *)(lVar12 + uVar7), SCARRY8(lVar12,uVar7))) goto LAB_102dae9bc;
                uVar18 = 0;
                uVar10 = uVar10 - 1;
                ppbVar11 = (byte **)((long)ppbVar11 + 1);
              } while (uVar10 != 0);
            }
          }
        }
        else {
          uVar7 = uVar5;
          func_0x000100fb6b80(pbVar4,uVar5,10);
          uVar18 = (uint)uVar7;
          pbVar17 = pbVar4;
        }
        func_0x000107c6142c(uVar5);
        if ((uVar18 & 0xff) != 1) goto LAB_102daea0c;
      }
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(param_2);
    }
    func_0x000107c6142c(pbVar15);
  }
  uVar3 = 0;
  uVar14 = 0;
  uVar16 = 0;
  pbVar15 = (byte *)0x0;
  pbVar17 = (byte *)0x0;
  uVar2 = 0;
  param_2 = (byte *)0x0;
LAB_102daea0c:
  *param_1 = uVar3;
  param_1[1] = uVar14;
  param_1[2] = uVar16;
  param_1[3] = pbVar15;
  param_1[4] = pbVar17;
  param_1[5] = uVar2;
  param_1[6] = param_2;
  return;
}



/* Entry: 102daea8c; end: 102daeaef;  */

ulong FUN_102daea8c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 102daeaf0; end: 102daeed7;  */

undefined1  [16] FUN_102daeaf0(byte *param_1,byte *param_2)

{
  ulong uVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte **ppbVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  byte *pbStack_50;
  ulong uStack_48;
  
  pbVar3 = (byte *)0x3a;
  uVar13 = 0;
  pbVar7 = param_2;
  func_0x00010143c25c(0x3a,0xe100000000000000,param_1,param_2);
  if ((uVar13 & 0xff) == 1) {
    func_0x000107c61434(param_2);
    pbVar3 = param_1;
  }
  else {
    func_0x000107c5fb60();
    func_0x000100ed9f54();
    func_0x000107c5fb2c();
    func_0x000107c6142c(pbVar7);
    param_2 = param_1;
  }
  func_0x000107c61434(param_2);
  pbVar4 = (byte *)0x7e;
  uVar13 = 0;
  pbVar7 = param_2;
  FUN_102dae53c(0x7e,0xe100000000000000,pbVar3,param_2);
  func_0x000107c6142c(param_2);
  if ((uVar13 & 0xff) == 1) goto LAB_102daee6c;
  pbVar9 = pbVar4;
  func_0x000107c5fb60(pbVar4,pbVar3,param_2);
  pbVar5 = pbVar3;
  func_0x000100ed9f54();
  func_0x000107c5fb2c();
  func_0x000107c6142c(pbVar7);
  pbVar6 = (byte *)((ulong)pbVar9 & 0xffffffffffff);
  pbVar8 = (byte *)((ulong)pbVar5 >> 0x38 & 0xf);
  pbVar7 = pbVar6;
  if (((ulong)pbVar5 & 0x2000000000000000) != 0) {
    pbVar7 = pbVar8;
  }
  if (pbVar7 == (byte *)0x0) {
    func_0x000107c6142c(pbVar5);
    goto LAB_102daee6c;
  }
  if (((ulong)pbVar5 >> 0x3c & 1) == 0) {
    if (((ulong)pbVar5 >> 0x3d & 1) == 0) {
      if (((ulong)pbVar9 >> 0x3c & 1) == 0) {
        pbVar6 = pbVar5;
        func_0x000107c60358();
      }
      else {
        pbVar9 = (byte *)(((ulong)pbVar5 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar9 == 0x2b) {
        pbVar7 = pbVar6 + -1;
        if ((long)pbVar6 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102daeed4);
          (*pcVar2)();
        }
        if (pbVar7 == (byte *)0x0) goto LAB_102daee1c;
        lVar11 = 0;
        do {
          pbVar9 = pbVar9 + 1;
          if (((9 < *pbVar9 - 0x30) ||
              (lVar12 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), lVar11 = lVar12 + uVar1, SCARRY8(lVar12,uVar1))
             ) goto LAB_102daee1c;
          uVar13 = 0;
          pbVar7 = pbVar7 + -1;
        } while (pbVar7 != (byte *)0x0);
      }
      else if (*pbVar9 == 0x2d) {
        pbVar7 = pbVar6 + -1;
        if ((long)pbVar6 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102daeecc);
          (*pcVar2)();
        }
        if (pbVar7 == (byte *)0x0) {
LAB_102daee1c:
          uVar13 = 1;
        }
        else {
          lVar11 = 0;
          do {
            pbVar9 = pbVar9 + 1;
            if (((9 < *pbVar9 - 0x30) ||
                (lVar12 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar12 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), lVar11 = lVar12 - uVar1,
                  SBORROW8(lVar12,uVar1))) goto LAB_102daee1c;
            uVar13 = 0;
            pbVar7 = pbVar7 + -1;
          } while (pbVar7 != (byte *)0x0);
        }
      }
      else {
        if (pbVar6 == (byte *)0x0) goto LAB_102daee1c;
        if (pbVar9 == (byte *)0x0) {
          uVar13 = 0;
        }
        else {
          lVar11 = 0;
          do {
            if (((9 < *pbVar9 - 0x30) ||
                (lVar12 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar12 >> 0x3f))
               || (uVar1 = (ulong)(byte)(*pbVar9 - 0x30), lVar11 = lVar12 + uVar1,
                  SCARRY8(lVar12,uVar1))) goto LAB_102daee1c;
            uVar13 = 0;
            pbVar6 = pbVar6 + -1;
            pbVar9 = pbVar9 + 1;
          } while (pbVar6 != (byte *)0x0);
        }
      }
    }
    else {
      pbStack_50 = pbVar9;
      uStack_48 = (ulong)pbVar5 & 0xffffffffffffff;
      uVar13 = (uint)pbVar9 & 0xff;
      if (uVar13 == 0x2b) {
        if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102daeed8);
          (*pcVar2)();
        }
        pbVar8 = pbVar8 + -1;
        if (pbVar8 == (byte *)0x0) goto LAB_102daee1c;
        lVar11 = 0;
        pbVar7 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar7 - 0x30) ||
              (lVar12 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar7 - 0x30), lVar11 = lVar12 + uVar1, SCARRY8(lVar12,uVar1))
             ) goto LAB_102daee1c;
          uVar13 = 0;
          pbVar8 = pbVar8 + -1;
          pbVar7 = pbVar7 + 1;
        } while (pbVar8 != (byte *)0x0);
      }
      else if (uVar13 == 0x2d) {
        if (pbVar8 == (byte *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102daeed0);
          (*pcVar2)();
        }
        pbVar8 = pbVar8 + -1;
        if (pbVar8 == (byte *)0x0) goto LAB_102daee1c;
        lVar11 = 0;
        pbVar7 = (byte *)((ulong)&pbStack_50 | 1);
        do {
          if (((9 < *pbVar7 - 0x30) ||
              (lVar12 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*pbVar7 - 0x30), lVar11 = lVar12 - uVar1, SBORROW8(lVar12,uVar1)
             )) goto LAB_102daee1c;
          uVar13 = 0;
          pbVar8 = pbVar8 + -1;
          pbVar7 = pbVar7 + 1;
        } while (pbVar8 != (byte *)0x0);
      }
      else {
        if (pbVar8 == (byte *)0x0) goto LAB_102daee1c;
        lVar11 = 0;
        ppbVar10 = &pbStack_50;
        do {
          if (((9 < *(byte *)ppbVar10 - 0x30) ||
              (lVar12 = lVar11 * 10, SUB168(SEXT816(lVar11) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
             (uVar1 = (ulong)(byte)(*(byte *)ppbVar10 - 0x30), lVar11 = lVar12 + uVar1,
             SCARRY8(lVar12,uVar1))) goto LAB_102daee1c;
          uVar13 = 0;
          pbVar8 = pbVar8 + -1;
          ppbVar10 = (byte **)((long)ppbVar10 + 1);
        } while (pbVar8 != (byte *)0x0);
      }
    }
  }
  else {
    pbVar7 = pbVar5;
    func_0x000100edba6c(pbVar9,pbVar5,10);
    uVar13 = (uint)pbVar7;
  }
  func_0x000107c6142c(pbVar5);
  if ((uVar13 & 0xff) != 1) {
    pbVar9 = (byte *)0xf;
    pbVar7 = param_2;
    func_0x000107c5fbd8(0xf,pbVar4,pbVar3,param_2);
    func_0x000107c5fb2c();
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(pbVar7);
    param_2 = pbVar4;
    pbVar3 = pbVar9;
  }
LAB_102daee6c:
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = pbVar3;
  return auVar14;
}



/* Entry: 102daeed8; end: 102daeedb;  */

void FUN_102daeed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f179b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4e018;
  func_0x000107c61520(&UNK_10db4e018,&UNK_1105d0858);
  puRam0000000112f179b8 = puVar1;
  return;
}



/* Entry: 102daeedc; end: 102daef1b;  */

void FUN_102daeedc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f179b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db4e018;
  func_0x000107c61520(&UNK_10db4e018,&UNK_1105d0858);
  puRam0000000112f179b8 = puVar1;
  return;
}



/* Entry: 102daef1c; end: 102daef77;  */

long FUN_102daef1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102daef78; end: 102daf067;  */

undefined8 * FUN_102daef78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_2[6];
  param_1[6] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 102daf068; end: 102daf0c3;  */

undefined8 * FUN_102daf068(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 102daf0c4; end: 102daf2db;  */

int FUN_102daf0c4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102daf2dc; end: 102daf33f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102daf2dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f179c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f179c8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102daf340; end: 102daf3b7; -[ImpalaSnapDocImageProvider initWithContentDelivery:localMediaProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102daf340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f179c0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f179c8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102daf3b8; end: 102daf4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102daf3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar1 = param_1;
  uVar5 = param_2;
  FUN_102daeaf0();
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f179c8);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  puVar2 = &UNK_1105d08f0;
  func_0x000107c613fc(&UNK_1105d08f0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1105d0918;
  func_0x000107c613fc(&UNK_1105d0918,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  pcStack_60 = FUN_102dafdd8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1018c5b18;
  puStack_68 = &UNK_1105d0930;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4b810(uVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102daf4ec; end: 102daf893;  */

void FUN_102daf4ec(undefined8 param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    (*param_4)();
    return;
  }
  if (param_2 >> 0x3c < 0xf) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x00010006c00c(param_1,param_2);
    func_0x00010006c00c(param_1,param_2);
    uVar2 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c4635c();
    func_0x000107c61170(uVar2);
    func_0x0001000b44c0(param_1,param_2);
    if (puVar1 != (undefined *)0x0) {
      pcVar3 = "image(forKey:completion:)";
      func_0x0001000c10c0("image(forKey:completion:)");
      func_0x000107c61180();
      puVar4 = &UNK_1105d0990;
      func_0x000107c613fc(&UNK_1105d0990,0x28,7);
      *(code **)(puVar4 + 0x10) = param_4;
      *(undefined8 *)(puVar4 + 0x18) = param_5;
      *(undefined **)(puVar4 + 0x20) = puVar1;
      uStack_88 = 0x102daff38;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1105d09a8;
      ppuVar5 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_80;
      func_0x000107c6157c(param_5);
      func_0x000107c61174(puVar1);
      func_0x000107c61574(puVar4);
      func_0x000107c4e524(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(puVar1);
      func_0x000107c615e8(pcVar3);
      func_0x0001000b44c0(param_1,param_2);
      goto LAB_102daf6b0;
    }
    func_0x0001000b44c0(param_1,param_2);
  }
  func_0x000102daf6d8(param_6,param_7,param_4,param_5);
LAB_102daf6b0:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102daf894; end: 102daf933; -[ImpalaSnapDocImageProvider imageForKey:completion:] */

void FUN_102daf894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1105d0968;
  func_0x000107c613fc(&UNK_1105d0968,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_102daf3b8(param_3,param_2,FUN_102dafe24,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102daf934; end: 102dafd3f;  */

void FUN_102daf934(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar8 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    pcVar3 = "fetchFromContentManager(key:completion:)";
    func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
    func_0x000107c61180();
    puVar4 = &UNK_1105d0a30;
    func_0x000107c613fc(&UNK_1105d0a30,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    pcStack_78 = (code *)0x102daff3c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = &UNK_1105d0a48;
    puStack_70 = puVar4;
  }
  else {
    func_0x000107c61170();
    lVar2 = param_1;
    func_0x000107c44314();
    if (lVar2 == 0) {
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar2 = param_1;
        func_0x000107c5ee30();
        func_0x000107c61170(param_1);
        uVar1 = (uint)((ulong)puVar8 >> 0x20);
        uVar9 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar9 == 0) {
            if (((ulong)puVar8 & 0xff000000000000) != 0) {
LAB_102dafabc:
              puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x000107c610f8();
              func_0x00010006c00c(lVar2,puVar8);
              lVar5 = lVar2;
              func_0x000107c5ee20(lVar2,puVar8);
              func_0x000107c4635c();
              func_0x000107c61170(lVar5);
              func_0x00010006c090(lVar2,puVar8);
              pcVar3 = "fetchFromContentManager(key:completion:)";
              func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
              func_0x000107c61180();
              if (puVar4 == (undefined *)0x0) {
                puVar4 = &UNK_1105d0b20;
                func_0x000107c613fc(&UNK_1105d0b20,0x20,7);
                *(undefined8 *)(puVar4 + 0x10) = param_5;
                *(undefined8 *)(puVar4 + 0x18) = param_6;
                pcStack_78 = (code *)0x102daff44;
                puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_90 = 0x42000000;
                puStack_88 = &UNK_1000f6b44;
                puStack_80 = &UNK_1105d0b38;
                ppuVar7 = &puStack_98;
                puStack_70 = puVar4;
                func_0x000107c60bc4(ppuVar7);
                puVar4 = puStack_70;
                func_0x000107c6157c(param_6);
                func_0x000107c61574(puVar4);
                func_0x000107c4e524(pcVar3);
                func_0x000107c60bd0(ppuVar7);
              }
              else {
                puVar6 = &UNK_1105d0b70;
                func_0x000107c613fc(&UNK_1105d0b70,0x28,7);
                *(undefined8 *)(puVar6 + 0x10) = param_5;
                *(undefined8 *)(puVar6 + 0x18) = param_6;
                *(undefined **)(puVar6 + 0x20) = puVar4;
                pcStack_78 = FUN_102dafed8;
                puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_90 = 0x42000000;
                puStack_88 = &UNK_1000f6b44;
                puStack_80 = &UNK_1105d0b88;
                ppuVar7 = &puStack_98;
                puStack_70 = puVar6;
                func_0x000107c60bc4(ppuVar7);
                puVar6 = puStack_70;
                func_0x000107c6157c(param_6);
                func_0x000107c61174(puVar4);
                func_0x000107c61574(puVar6);
                func_0x000107c4e524(pcVar3);
                func_0x000107c60bd0(ppuVar7);
                func_0x000107c61170(puVar4);
              }
              func_0x000107c615e8(pcVar3);
              func_0x00010006c090(lVar2,puVar8);
              return;
            }
          }
          else if ((long)(int)lVar2 != lVar2 >> 0x20) goto LAB_102dafabc;
        }
        else if ((uVar9 == 2) && (*(long *)(lVar2 + 0x10) != *(long *)(lVar2 + 0x18)))
        goto LAB_102dafabc;
        func_0x00010006c090(lVar2,puVar8);
      }
      pcVar3 = "fetchFromContentManager(key:completion:)";
      func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
      func_0x000107c61180();
      puVar4 = &UNK_1105d0ad0;
      func_0x000107c613fc(&UNK_1105d0ad0,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_5;
      *(undefined8 *)(puVar4 + 0x18) = param_6;
      pcStack_78 = (code *)0x102daff40;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = &UNK_1105d0ae8;
      puStack_70 = puVar4;
    }
    else {
      pcVar3 = "fetchFromContentManager(key:completion:)";
      func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
      func_0x000107c61180();
      puVar4 = &UNK_1105d0a80;
      func_0x000107c613fc(&UNK_1105d0a80,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_5;
      *(undefined8 *)(puVar4 + 0x18) = param_6;
      pcStack_78 = FUN_102dafe88;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = &UNK_1105d0a98;
      puStack_70 = puVar4;
    }
  }
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  ppuVar7 = &puStack_98;
  PTR___NSConcreteStackBlock_11034bd00 = puStack_98;
  func_0x000107c60bc4(ppuVar7);
  puVar4 = puStack_70;
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 102dafd40; end: 102dafd9f; -[ImpalaSnapDocImageProvider init] */

void FUN_102dafd40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaSnapDocPlaybackPlugin.ImpalaSnapDocImageProvider",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102dafd6c);
  (*pcVar1)();
}



/* Entry: 102dafda0; end: 102dafdd7; -[ImpalaSnapDocImageProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102dafdbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102dafdc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102dafda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f179c0));
  return;
}



/* Entry: 102dafdd8; end: 102dafe03;  */

void FUN_102dafdd8(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_78,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar2)();
    return;
  }
  if (param_2 >> 0x3c < 0xf) {
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x00010006c00c(param_1,param_2);
    func_0x00010006c00c(param_1,param_2);
    uVar6 = param_1;
    func_0x000107c5ee20(param_1,param_2);
    func_0x000107c4635c();
    func_0x000107c61170(uVar6);
    func_0x0001000b44c0(param_1,param_2);
    if (puVar5 != (undefined *)0x0) {
      pcVar7 = "image(forKey:completion:)";
      func_0x0001000c10c0("image(forKey:completion:)");
      func_0x000107c61180();
      puVar8 = &UNK_1105d0990;
      func_0x000107c613fc(&UNK_1105d0990,0x28,7);
      *(code **)(puVar8 + 0x10) = pcVar2;
      *(undefined8 *)(puVar8 + 0x18) = uVar1;
      *(undefined **)(puVar8 + 0x20) = puVar5;
      uStack_88 = 0x102daff38;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1105d09a8;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_80;
      func_0x000107c6157c(uVar1);
      func_0x000107c61174(puVar5);
      func_0x000107c61574(puVar8);
      func_0x000107c4e524(pcVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(pcVar7);
      func_0x0001000b44c0(param_1,param_2);
      goto LAB_102daf6b0;
    }
    func_0x0001000b44c0(param_1,param_2);
  }
  func_0x000102daf6d8(uVar3,uVar10,pcVar2,uVar1);
LAB_102daf6b0:
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 102dafe04; end: 102dafe23;  */

void FUN_102dafe04(void)

{
  func_0x000107c61168(&PTR_PTR_1128a63a8);
  return;
}



/* Entry: 102dafe24; end: 102dafe2b;  */

void FUN_102dafe24(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102db0acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 102dafe2c; end: 102dafe77;  */

void FUN_102dafe2c(code *param_1,code *param_2)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dafe78; end: 102dafe87;  */

void FUN_102dafe78(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar9 = auStack_68;
  func_0x000107c61428(lVar3 + 0x10,puVar9,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
    pcVar4 = "fetchFromContentManager(key:completion:)";
    func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
    func_0x000107c61180();
    puVar5 = &UNK_1105d0a30;
    func_0x000107c613fc(&UNK_1105d0a30,0x20,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar1;
    *(undefined8 *)(puVar5 + 0x18) = uVar10;
    pcStack_78 = (code *)0x102daff3c;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_80 = &UNK_1105d0a48;
    puStack_70 = puVar5;
  }
  else {
    func_0x000107c61170();
    lVar3 = param_1;
    func_0x000107c44314();
    if (lVar3 == 0) {
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (param_1 != 0) {
        lVar3 = param_1;
        func_0x000107c5ee30();
        func_0x000107c61170(param_1);
        uVar2 = (uint)((ulong)puVar9 >> 0x20);
        uVar11 = uVar2 >> 0x1e;
        if (uVar2 >> 0x1e < 2) {
          if (uVar11 == 0) {
            if (((ulong)puVar9 & 0xff000000000000) != 0) {
LAB_102dafabc:
              puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x000107c610f8();
              func_0x00010006c00c(lVar3,puVar9);
              lVar6 = lVar3;
              func_0x000107c5ee20(lVar3,puVar9);
              func_0x000107c4635c();
              func_0x000107c61170(lVar6);
              func_0x00010006c090(lVar3,puVar9);
              pcVar4 = "fetchFromContentManager(key:completion:)";
              func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
              func_0x000107c61180();
              if (puVar5 == (undefined *)0x0) {
                puVar5 = &UNK_1105d0b20;
                func_0x000107c613fc(&UNK_1105d0b20,0x20,7);
                *(undefined8 *)(puVar5 + 0x10) = uVar1;
                *(undefined8 *)(puVar5 + 0x18) = uVar10;
                pcStack_78 = (code *)0x102daff44;
                puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_90 = 0x42000000;
                puStack_88 = &UNK_1000f6b44;
                puStack_80 = &UNK_1105d0b38;
                ppuVar8 = &puStack_98;
                puStack_70 = puVar5;
                func_0x000107c60bc4(ppuVar8);
                puVar5 = puStack_70;
                func_0x000107c6157c(uVar10);
                func_0x000107c61574(puVar5);
                func_0x000107c4e524(pcVar4);
                func_0x000107c60bd0(ppuVar8);
              }
              else {
                puVar7 = &UNK_1105d0b70;
                func_0x000107c613fc(&UNK_1105d0b70,0x28,7);
                *(undefined8 *)(puVar7 + 0x10) = uVar1;
                *(undefined8 *)(puVar7 + 0x18) = uVar10;
                *(undefined **)(puVar7 + 0x20) = puVar5;
                pcStack_78 = FUN_102dafed8;
                puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_90 = 0x42000000;
                puStack_88 = &UNK_1000f6b44;
                puStack_80 = &UNK_1105d0b88;
                ppuVar8 = &puStack_98;
                puStack_70 = puVar7;
                func_0x000107c60bc4(ppuVar8);
                puVar7 = puStack_70;
                func_0x000107c6157c(uVar10);
                func_0x000107c61174(puVar5);
                func_0x000107c61574(puVar7);
                func_0x000107c4e524(pcVar4);
                func_0x000107c60bd0(ppuVar8);
                func_0x000107c61170(puVar5);
              }
              func_0x000107c615e8(pcVar4);
              func_0x00010006c090(lVar3,puVar9);
              return;
            }
          }
          else if ((long)(int)lVar3 != lVar3 >> 0x20) goto LAB_102dafabc;
        }
        else if ((uVar11 == 2) && (*(long *)(lVar3 + 0x10) != *(long *)(lVar3 + 0x18)))
        goto LAB_102dafabc;
        func_0x00010006c090(lVar3,puVar9);
      }
      pcVar4 = "fetchFromContentManager(key:completion:)";
      func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
      func_0x000107c61180();
      puVar5 = &UNK_1105d0ad0;
      func_0x000107c613fc(&UNK_1105d0ad0,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar1;
      *(undefined8 *)(puVar5 + 0x18) = uVar10;
      pcStack_78 = (code *)0x102daff40;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = &UNK_1105d0ae8;
      puStack_70 = puVar5;
    }
    else {
      pcVar4 = "fetchFromContentManager(key:completion:)";
      func_0x0001000c10c0("fetchFromContentManager(key:completion:)");
      func_0x000107c61180();
      puVar5 = &UNK_1105d0a80;
      func_0x000107c613fc(&UNK_1105d0a80,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar1;
      *(undefined8 *)(puVar5 + 0x18) = uVar10;
      pcStack_78 = FUN_102dafe88;
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_80 = &UNK_1105d0a98;
      puStack_70 = puVar5;
    }
  }
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  ppuVar8 = &puStack_98;
  PTR___NSConcreteStackBlock_11034bd00 = puStack_98;
  func_0x000107c60bc4(ppuVar8);
  puVar5 = puStack_70;
  func_0x000107c6157c(uVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(pcVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 102dafe88; end: 102dafeab;  */

void FUN_102dafe88(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0);
  return;
}



/* Entry: 102dafeac; end: 102dafed7;  */

void FUN_102dafeac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102dafed8; end: 102dafeff;  */

void FUN_102dafed8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 102daff00; end: 102daff47;  */

void FUN_102daff00(long param_1,long param_2)

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



/* Entry: 102daff48; end: 102daff57; -[SCMassSnapItemInsights viewers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102daff48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f179f8);
}



/* Entry: 102daff58; end: 102daff67; -[SCMassSnapItemInsights views] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102daff58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f17a00);
}



/* Entry: 102daff68; end: 102daff77; -[SCMassSnapItemInsights replays] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102daff68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f17a08);
}



/* Entry: 102daff78; end: 102daff87; -[SCMassSnapItemInsights screenshots] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102daff78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f17a10);
}



/* Entry: 102daff88; end: 102daff97; -[SCMassSnapItemInsights replies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102daff88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f17a18);
}



/* Entry: 102daff98; end: 102db0033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102daff98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f179f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f17a00) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f17a08) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f17a10) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f17a18) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102db0034; end: 102db0053;  */

void FUN_102db0034(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6470);
  return;
}



/* Entry: 102db0054; end: 102db00cb; -[SCMassSnapItemInsights initWithViewers:views:replays:screenshots:replies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0054(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112f179f8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f17a00) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f17a08) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f17a10) = param_6;
  *(undefined8 *)(param_1 + _DAT_112f17a18) = param_7;
  lVar1 = param_1;
  FUN_102db0034();
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102db00cc; end: 102db014b; +[SCMassSnapItemInsights placeholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db00cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  FUN_102db0034();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f179f8) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + _DAT_112f17a00) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + _DAT_112f17a08) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + _DAT_112f17a10) = 0xffffffffffffffff;
  *(undefined8 *)(lVar1 + _DAT_112f17a18) = 0xffffffffffffffff;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102db014c; end: 102db0177; -[SCMassSnapItemInsights init] */

void FUN_102db014c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaSnapDocPlaybackPlugin.MassSnapItemInsights",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0178);
  (*pcVar1)();
}



/* Entry: 102db0178; end: 102db0183;  */

void FUN_102db0178(void)

{
  FUN_102db0034();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102db0184; end: 102db0193; -[SCImpalaSnapDocItemDataModel snapDocData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f17a20));
  return;
}



/* Entry: 102db0194; end: 102db019f; -[SCImpalaSnapDocItemDataModel groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0194(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17a28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17a28);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db01a0; end: 102db01af; -[SCImpalaSnapDocItemDataModel insights] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db01a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f17a30));
  return;
}



/* Entry: 102db01b0; end: 102db01bb; -[SCImpalaSnapDocItemDataModel thumbnailUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db01b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17a38))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17a38);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db01bc; end: 102db01c7; -[SCImpalaSnapDocItemDataModel creatorSubscriptionDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db01bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17a40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17a40);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db01c8; end: 102db021f;  */

void FUN_102db01c8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db0220; end: 102db02e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f17a20) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17a28);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f17a30) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17a38);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17a40);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102db02e4; end: 102db0303;  */

void FUN_102db02e4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6550);
  return;
}



/* Entry: 102db0304; end: 102db0423; -[SCImpalaSnapDocItemDataModel initWithSnapDocData:groupId:insights:thumbnailUrl:creatorSubscriptionDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0304(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_70;
  undefined8 uStack_68;
  
  if (param_4 == 0) {
    param_4 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
  }
  if (param_6 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_7 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174();
  func_0x000107c61174();
  *(undefined8 *)(param_1 + _DAT_112f17a20) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112f17a28);
  *plVar1 = param_4;
  plVar1[1] = lVar3;
  *(undefined8 *)(param_1 + _DAT_112f17a30) = param_5;
  plVar1 = (long *)(param_1 + _DAT_112f17a38);
  *plVar1 = param_6;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112f17a40);
  *plVar1 = param_7;
  plVar1[1] = param_2;
  FUN_102db02e4();
  lStack_70 = param_1;
  uStack_68 = param_5;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102db0424; end: 102db044f; -[SCImpalaSnapDocItemDataModel init] */

void FUN_102db0424(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaSnapDocPlaybackPlugin.SCImpalaSnapDocItemDataModel",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0450);
  (*pcVar1)();
}



/* Entry: 102db0450; end: 102db045b;  */

void FUN_102db0450(void)

{
  FUN_102db02e4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102db045c; end: 102db048b;  */

void FUN_102db045c(code *param_1)

{
  (*param_1)();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102db048c; end: 102db04ff; -[SCImpalaSnapDocItemDataModel .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102db04bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db04e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db04c0) */
/* WARNING: Removing unreachable block (ram,0x000102db04e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db048c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f17a20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f17a28 + 8))
  ;
  return;
}



/* Entry: 102db0500; end: 102db0547; -[SCImpalaSnapDocOperaItem encodedSnapDocs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0500(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f17a98);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102db0548; end: 102db0553; -[SCImpalaSnapDocOperaItem groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0548(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17aa0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17aa0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db0554; end: 102db0563; -[SCImpalaSnapDocOperaItem bundleInsights] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f17aa8));
  return;
}



/* Entry: 102db0564; end: 102db056f; -[SCImpalaSnapDocOperaItem thumbnailUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0564(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17ab0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17ab0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db0570; end: 102db057b; -[SCImpalaSnapDocOperaItem creatorSubscriptionDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db0570(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f17ab8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f17ab8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db057c; end: 102db05d3;  */

void FUN_102db057c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102db05d4; end: 102db0697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db05d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f17a98) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17aa0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f17aa8) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17ab0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f17ab8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102db0698; end: 102db06b7;  */

void FUN_102db0698(void)

{
  func_0x000107c61168(&PTR_PTR_1128a6630);
  return;
}



/* Entry: 102db06b8; end: 102db0903; -[SCImpalaSnapDocOperaItem initWithEncodedSnapDocs:groupId:bundleInsights:thumbnailUrl:creatorSubscriptionDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db06b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lStack_70;
  undefined8 uStack_68;
  
  puVar4 = PTR___s10Foundation4DataVN_110350ae0;
  func_0x000107c5fc54();
  if (param_4 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar3 = puVar4;
  }
  if (param_6 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
    puVar2 = puVar4;
  }
  if (param_7 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174();
  *(undefined8 *)(param_1 + _DAT_112f17a98) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112f17aa0);
  *plVar1 = param_4;
  plVar1[1] = (long)puVar3;
  *(undefined8 *)(param_1 + _DAT_112f17aa8) = param_5;
  plVar1 = (long *)(param_1 + _DAT_112f17ab0);
  *plVar1 = param_6;
  plVar1[1] = (long)puVar2;
  plVar1 = (long *)(param_1 + _DAT_112f17ab8);
  *plVar1 = param_7;
  plVar1[1] = (long)puVar4;
  FUN_102db0698();
  lStack_70 = param_1;
  uStack_68 = param_5;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102db0904; end: 102db0963; -[SCImpalaSnapDocOperaItem copyWithZone:] */

undefined1 * FUN_102db0904(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [24];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x000107c61174();
  func_0x000102db07dc(auStack_40);
  func_0x000107c61170(param_1);
  func_0x0001006732c8(auStack_40,uStack_28);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_40);
  return puVar1;
}



/* Entry: 102db0964; end: 102db09bf; -[SCImpalaSnapDocOperaItem init] */

void FUN_102db0964(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCImpalaSnapDocPlaybackPlugin.SCImpalaSnapDocOperaItem",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0990);
  (*pcVar1)();
}



/* Entry: 102db09c0; end: 102db0a33; -[SCImpalaSnapDocOperaItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102db09dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102db0a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102db09e0) */
/* WARNING: Removing unreachable block (ram,0x000102db0a18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102db09c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f17a98));
  return;
}



/* Entry: 102db0a34; end: 102db0abb;  */

undefined8 FUN_102db0a34(long param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*(long *)(param_3 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(param_3);
    FUN_102dba280(param_1,param_2,PTR___sSS4hash4intoys6HasherVz_tF_11034d980,&UNK_1000292e8);
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x38) + param_1 * 8);
      func_0x000107c61174(uVar1);
    }
    func_0x000107c6142c(param_3);
  }
  return uVar1;
}



/* Entry: 102db0abc; end: 102db0adf;  */

void FUN_102db0abc(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000102db0acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Entry: 102db0ae0; end: 102db0e03;  */

undefined * FUN_102db0ae0(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong unaff_x20;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = unaff_x20;
  func_0x000107c4a8c4();
  func_0x000107c61180();
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0df0);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x000107c5ee30();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000101286fac(uVar3,param_2);
  func_0x00010006c090(uVar3);
  if (((uint)uVar2 & 0xff00) == 0x100 || ((uint)uVar2 & 0xff) != 10) {
    uVar4 = unaff_x20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0df8);
      (*pcVar1)();
    }
    uVar2 = uVar4;
    func_0x000107c5ee30();
    uVar3 = param_2;
    func_0x000107c61170(uVar4);
  }
  else {
    uVar2 = unaff_x20;
    func_0x000107c4a8c4();
    func_0x000107c61180();
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0dfc);
      (*pcVar1)();
    }
    uVar3 = uVar2;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar2);
    func_0x000101287044(&uStack_70,1,uVar3,param_2);
    uVar2 = uStack_70;
    param_2 = uStack_68;
  }
  uVar4 = unaff_x20;
  func_0x000107c4a804();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000101286fac(uVar5,uVar3);
    func_0x00010006c090(uVar5);
    if ((((uint)uVar4 & 0xff00) == 0x100) || (((uint)uVar4 & 0xff) != 10)) {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0e00);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c5ee30();
      func_0x000107c61170(unaff_x20);
    }
    else {
      func_0x000107c4a804();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0e04);
        (*pcVar1)();
      }
      uVar4 = unaff_x20;
      func_0x000107c5ee30();
      func_0x000107c61170(unaff_x20);
      func_0x000101287044(&uStack_70,1,uVar4,uVar3);
      uVar4 = uStack_70;
      uVar3 = uStack_68;
    }
    uVar5 = uVar2;
    uVar9 = param_2;
    func_0x000107c5ee04(uVar2,param_2,0);
    if (uVar9 >> 0x3c < 0xf) {
      uVar7 = uVar4;
      uVar10 = uVar3;
      func_0x000107c5ee04(uVar4,uVar3,0);
      if (uVar10 >> 0x3c < 0xf) {
        puVar6 = PTR_PTR_1126d5750;
        func_0x000107c610f8(PTR_PTR_1126d5750);
        func_0x000107c453e4();
        uVar8 = uVar5;
        func_0x000107c5ee20(uVar5,uVar9);
        func_0x000107c559a4(puVar6);
        func_0x000107c61170(uVar8);
        uVar8 = uVar7;
        func_0x000107c5ee20(uVar7,uVar10);
        func_0x000107c55938(puVar6);
        func_0x000107c61170(uVar8);
        func_0x0001000b44c0(uVar7,uVar10);
        func_0x0001000b44c0(uVar5,uVar9);
        func_0x00010006c090(uVar4,uVar3);
        func_0x00010006c090(uVar2,param_2);
      }
      else {
        func_0x00010006c090(uVar4,uVar3);
        func_0x00010006c090(uVar2,param_2);
        func_0x0001000b44c0(uVar5,uVar9);
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      func_0x00010006c090(uVar4,uVar3);
      func_0x00010006c090(uVar2,param_2);
      puVar6 = (undefined *)0x0;
    }
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102db0df4);
  (*pcVar1)();
}


