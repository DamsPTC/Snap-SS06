/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1022d10c8; end: 1022d10e7;  */

void FUN_1022d10c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128340c8);
  return;
}



/* Entry: 1022d10e8; end: 1022d110f; -[_TtC32SCGenAIDreamsScopeImplementation25GenAIDreamsScrollNotifier observe] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d10e8(long param_1)

{
  func_0x000107c5cb24(*(undefined8 *)(param_1 + _DAT_112e7c4b0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1022d1110; end: 1022d11bb; -[_TtC32SCGenAIDreamsScopeImplementation25GenAIDreamsScrollNotifier scrollNotifyWithSnapId:] */

/* WARNING: Possible PIC construction at 0x0001022d1184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d1188) */
/* WARNING: Removing unreachable block (ram,0x0001010398f0) */
/* WARNING: Removing unreachable block (ram,0x0001010398fc) */
/* WARNING: Removing unreachable block (ram,0x0001010398f4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d1110(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  pcVar1 = *(code **)(param_1 + _DAT_112e7c4b8);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + _DAT_112e7c4b8))[1];
    func_0x000107c61174();
    FUN_101695bd8(pcVar1,uVar2);
    (*pcVar1)(param_3,param_2);
    func_0x000107c61170(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022d11bc; end: 1022d122f; -[_TtC32SCGenAIDreamsScopeImplementation25GenAIDreamsScrollNotifier init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d11bc(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lStack_40;
  long lStack_38;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112e7c4b0;
  puVar4 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(param_1 + _DAT_112e7c4b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1022d1230; end: 1022d1263;  */

void FUN_1022d1230(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1022d1264; end: 1022d129f; -[_TtC32SCGenAIDreamsScopeImplementation25GenAIDreamsScrollNotifier .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d1264(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e7c4b0));
  if (*(long *)(param_1 + _DAT_112e7c4b8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112e7c4b8))[1]);
    return;
  }
  return;
}



/* Entry: 1022d12a0; end: 1022d12bf;  */

void FUN_1022d12a0(void)

{
  func_0x000107c61168(&PTR_PTR_112834198);
  return;
}



/* Entry: 1022d12c0; end: 1022d3733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d12c0(long param_1,undefined *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  ulong uVar22;
  long extraout_x12;
  long extraout_x12_00;
  undefined *unaff_x20;
  code *pcVar23;
  ulong *puVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 auStack_200 [7];
  undefined1 auStack_1c8 [8];
  undefined1 auStack_1c0 [8];
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined8 uStack_180;
  long lStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  long lStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar5 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar28 = (long)(auStack_1c0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar28 - extraout_x12;
  lVar5 = 0;
  puStack_130 = (undefined *)lVar21;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar21 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = _DAT_113074cb0;
  lVar27 = lVar21 - extraout_x12_00;
  lVar26 = *(long *)(unaff_x20 + _DAT_112e7c4f0);
  func_0x000107c61428(lVar26 + _DAT_113074cb0,auStack_90,0,0);
  lVar5 = lVar26 + lVar5;
  func_0x000107c61618();
  if (lVar5 == 0) {
    return;
  }
  puStack_98 = PTR_DAT_11269cb40;
  lVar6 = lVar5;
  func_0x000107c61494();
  pcStack_138 = (code *)lVar6;
  if (lVar6 == 0) {
LAB_1022d1f20:
    func_0x000107c615e8(lVar5);
    return;
  }
  lVar6 = lVar5;
  func_0x000107c614f0();
  uVar7 = 0;
  FUN_1022dc008(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x000107c61488(lVar6,uVar7);
  if (lVar6 == 0) goto LAB_1022d1f20;
  puStack_150 = (undefined *)_DAT_113074cc0;
  uVar25 = *(undefined8 *)(lVar26 + _DAT_113074cc0);
  puVar8 = &UNK_1104f22d8;
  lStack_178 = lVar28;
  lStack_170 = lVar21;
  puStack_168 = auStack_1c0 + -extraout_x8;
  lStack_158 = lVar27;
  lStack_140 = lVar5;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar20 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a8 = FUN_1022db454;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)&UNK_101218f4c;
  puStack_b0 = &UNK_1104f2390;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_a0;
  func_0x000107c61174(uVar25);
  func_0x000107c61574(puVar8);
  uVar7 = uVar25;
  func_0x000107c5c320(uVar25);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar25);
  func_0x000107c3e924(uVar7);
  func_0x000107c61170(uVar7);
  uVar25 = *(undefined8 *)(lVar26 + _DAT_113074cc8);
  puVar8 = &UNK_1104f22d8;
  lStack_148 = lVar26;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  pcStack_a8 = (code *)0x1022db484;
  puStack_c8 = puVar20;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)&UNK_101218f4c;
  puStack_b0 = &UNK_1104f23b8;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_a0;
  func_0x000107c61174(uVar25);
  func_0x000107c61574(puVar8);
  uVar7 = uVar25;
  func_0x000107c5c320(uVar25);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(uVar25);
  func_0x000107c3e924(uVar7);
  func_0x000107c61170(uVar7);
  puVar8 = PTR_PTR_1126aa350;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuVar9 = (undefined **)0x0;
  if (param_1 != 0) {
    puStack_c8 = puVar20;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)&UNK_1000f6b44;
    puStack_b0 = &UNK_1104f2890;
    ppuVar9 = &puStack_c8;
    pcStack_a8 = (code *)param_1;
    puStack_a0 = param_2;
    func_0x000107c60bc4(ppuVar9);
    puVar13 = puStack_a0;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar13);
  }
  func_0x000107c56dcc(puVar8);
  func_0x000107c60bd0(ppuVar9);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c528);
  uStack_180 = uVar7;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c56f74(puVar8);
  func_0x000107c61170(uVar7);
  puVar10 = PTR_PTR_1126aa358;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar7 = *(undefined8 *)(lStack_148 + (long)puStack_150);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  func_0x000107c542fc(puVar10);
  func_0x000107c61170(uVar7);
  puVar13 = &UNK_1104f22d8;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar13 + 0x10);
  pcStack_a8 = FUN_1022db4b4;
  puStack_c8 = puVar20;
  uStack_c0 = 0x42000000;
  pcStack_b8 = FUN_1022d45d4;
  puStack_b0 = &UNK_1104f23e0;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar13;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a0);
  func_0x000107c54328(puVar10);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c58ce4(puVar10);
  func_0x000107c5a008(puVar10);
  lVar5 = lStack_140;
  lVar21 = *(long *)(unaff_x20 + _DAT_112e7c5e8);
  if (lVar21 != 0) {
    func_0x000107c4d7dc();
    func_0x000107c61180();
    lVar26 = lVar21;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar21);
    if (lVar26 != 0) {
      lVar21 = lVar26;
      func_0x000107c4d7d4(lVar26);
      func_0x000107c61180();
      func_0x000107c615e8(lVar26);
      puVar13 = &UNK_1104f22d8;
      func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
      func_0x000107c61614(puVar13 + 0x10);
      pcStack_a8 = FUN_1022dbc50;
      puStack_c8 = puVar20;
      uStack_c0 = 0x42000000;
      pcStack_b8 = (code *)0x101eb9ec0;
      puStack_b0 = &UNK_1104f2868;
      ppuVar9 = &puStack_c8;
      puStack_a0 = puVar13;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c61574(puStack_a0);
      lVar26 = lVar21;
      func_0x000107c5c320(lVar21);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(lVar21);
      func_0x000107c3e924(lVar26);
      func_0x000107c61170(lVar26);
    }
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c5f0);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  func_0x000107c56b14(puVar10);
  func_0x000107c61170(uVar7);
  func_0x000107c568e8(puVar8);
  puVar11 = PTR_PTR_1126aa360;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar13 = &UNK_1104f22d8;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  puVar19 = unaff_x20;
  func_0x000107c61614(puVar13 + 0x10);
  pcStack_a8 = (code *)0x1022db4bc;
  puStack_c8 = puVar20;
  uStack_c0 = 0x42000000;
  pcStack_b8 = FUN_1022d4f64;
  puStack_b0 = &UNK_1104f2408;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar13;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a0);
  func_0x000107c542f4(puVar11);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c58ce4(puVar11);
  func_0x000107c5a008(puVar11);
  puVar13 = puVar8;
  puStack_150 = puVar11;
  func_0x000107c54e14(puVar8);
  FUN_1022d501c();
  func_0x000107c54308(puVar8);
  func_0x000107c61170(puVar13);
  puVar13 = unaff_x20 + _DAT_112e7c4e8;
  puVar11 = puVar13;
  func_0x000107c61618();
  if (puVar11 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(puVar13 + 8);
    puVar13 = &UNK_1104f2828;
    func_0x000107c613fc(&UNK_1104f2828,0x20,7);
    *(undefined **)(puVar13 + 0x10) = puVar11;
    *(undefined8 *)(puVar13 + 0x18) = uVar7;
    pcVar23 = FUN_1022dbc30;
    puVar14 = puVar13;
    func_0x0001031c06dc();
    puVar19 = puVar14;
    func_0x000107c615f0(puVar11);
    func_0x000107c61574(puVar13);
    puStack_c8 = puVar20;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)&UNK_1000f6b44;
    puStack_b0 = &UNK_1104f2840;
    ppuVar9 = &puStack_c8;
    pcStack_a8 = pcVar23;
    puStack_a0 = puVar14;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_a0);
    func_0x000107c56e54(puVar8);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c615e8(puVar11);
  }
  lVar26 = *(long *)(unaff_x20 + _DAT_112e7c4f8);
  lVar21 = lVar26;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar21 == 0) {
LAB_1022d1f2c:
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puStack_150);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(puVar8);
    return;
  }
  lVar28 = lVar21;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8(lVar21);
  if (lVar28 == 0) goto LAB_1022d1f2c;
  puVar13 = PTR_PTR_1126afe50;
  puStack_1b0 = (undefined *)lVar26;
  func_0x000107c610f8();
  func_0x000107c4842c();
  func_0x000107c561c0();
  func_0x0001022cdd1c(0);
  func_0x000107c614e8();
  func_0x000107c537e0(puVar13);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c650);
  *(undefined **)(unaff_x20 + _DAT_112e7c650) = puVar13;
  func_0x000107c61174();
  func_0x000107c615e8(uVar7);
  uVar12 = *(ulong *)(unaff_x20 + _DAT_112e7c508);
  func_0x000107c615f0();
  puStack_1a0 = (undefined *)uVar12;
  func_0x000108c2bdf8();
  puStack_198 = puVar10;
  puStack_190 = puVar13;
  lStack_188 = lVar28;
  puStack_160 = puVar8;
  if ((uVar12 & 1) == 0) {
    pcStack_a8 = FUN_1022d591c;
    puStack_a0 = (undefined *)0x0;
    puStack_c8 = puVar20;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)&UNK_100f11710;
    puStack_b0 = &UNK_1104f2430;
    ppuVar9 = &puStack_c8;
    func_0x000107c60bc4(ppuVar9);
    pcStack_a8 = (code *)0x1022d5924;
    puStack_a0 = (undefined *)0x0;
    puStack_c8 = puVar20;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)&UNK_100f10508;
    puStack_b0 = &UNK_1104f2458;
    ppuVar16 = &puStack_c8;
    func_0x000107c60bc4(ppuVar16);
    puVar19 = (undefined *)0x112d360b0;
    FUN_1022dc008(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c614e8();
    func_0x000107c4c214(lVar28);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar9);
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ed0();
    func_0x000107c4a8a4(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    puVar13 = puVar8;
    func_0x000107c5cb24(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    puVar8 = PTR_PTR_1126aa368;
    func_0x000107c610f8(PTR_PTR_1126aa368);
    pcStack_a8 = (code *)0x1022d5928;
    puStack_a0 = (undefined *)0x0;
    puStack_c8 = puVar20;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_1022db4c4;
    puStack_b0 = &UNK_1104f2480;
    ppuVar9 = &puStack_c8;
    func_0x000107c60bc4(ppuVar9);
    lStack_d8 = 0x1022d592c;
    puStack_d0 = (undefined *)0x0;
    puStack_f8 = puVar20;
    uStack_f0 = 0x42000000;
    puStack_e8 = &UNK_100288f10;
    puStack_e0 = &UNK_1104f24a8;
    ppuVar16 = &puStack_f8;
    func_0x000107c60bc4(ppuVar16);
    uStack_108 = 0x1022d5930;
    puStack_100 = (undefined *)0x0;
    puStack_128 = puVar20;
    uStack_120 = 0x42000000;
    puStack_118 = &UNK_1000f6b44;
    puStack_110 = &UNK_1104f24d0;
    ppuVar17 = &puStack_128;
    func_0x000107c60bc4(ppuVar17);
    func_0x000107c49510(puVar8);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61574(puStack_100);
    func_0x000107c61574(puStack_d0);
    func_0x000107c61574(puStack_a0);
    func_0x000107c5432c(puStack_160);
LAB_1022d21b0:
    lVar5 = lStack_148;
    func_0x000107c615e8(lVar28);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar8);
    puVar20 = PTR___NSConcreteStackBlock_11034bd00;
  }
  else {
    puVar13 = *(undefined **)(unaff_x20 + _DAT_112e7c5d8);
    func_0x000107c3dd1c();
    func_0x000107c61180();
    puVar8 = puVar13;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar13);
    lVar5 = lStack_148;
    if (puVar8 != (undefined *)0x0) {
      puVar10 = puVar8;
      func_0x000107c40bf4();
      func_0x000107c61180();
      func_0x000107c615e8(puVar8);
      lVar5 = _DAT_112e7c5e0;
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c5e0);
      *(undefined **)(unaff_x20 + _DAT_112e7c5e0) = puVar10;
      func_0x000107c615f0(puVar10);
      func_0x000107c615e8(uVar7);
      if (*(long *)(unaff_x20 + lVar5) != 0) {
        func_0x000107c574a0();
      }
      puVar11 = &UNK_1104f22d8;
      puVar8 = puVar11;
      func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      pcStack_a8 = FUN_1022dbc10;
      puStack_c8 = puVar20;
      uStack_c0 = 0x42000000;
      pcStack_b8 = (code *)&UNK_100f11710;
      puStack_b0 = &UNK_1104f2750;
      ppuVar9 = &puStack_c8;
      puStack_a0 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      func_0x000107c61574(puStack_a0);
      pcStack_a8 = FUN_1022d51a0;
      puStack_a0 = (undefined *)0x0;
      puStack_c8 = puVar20;
      uStack_c0 = 0x42000000;
      pcStack_b8 = (code *)&UNK_100f10508;
      puStack_b0 = &UNK_1104f2778;
      ppuVar16 = &puStack_c8;
      func_0x000107c60bc4(ppuVar16);
      FUN_1022dc008(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c614e8();
      lVar5 = lStack_188;
      func_0x000107c4c214();
      func_0x000107c61180();
      lStack_1a8 = lVar5;
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c60bd0(ppuVar9);
      puVar8 = puVar10;
      func_0x000107c44310(puVar10);
      func_0x000107c61180();
      puVar13 = puVar8;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      puVar14 = puVar11;
      func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
      func_0x000107c61614(puVar14 + 0x10);
      puVar15 = puVar11;
      func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
      func_0x000107c61614(puVar15 + 0x10);
      func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
      puVar19 = unaff_x20;
      func_0x000107c61614(puVar11 + 0x10);
      puVar8 = PTR_PTR_1126aa368;
      func_0x000107c610f8(PTR_PTR_1126aa368);
      pcStack_a8 = (code *)0x1022dbc18;
      puStack_c8 = puVar20;
      uStack_c0 = 0x42000000;
      pcStack_b8 = FUN_1022db4c4;
      puStack_b0 = &UNK_1104f27a0;
      ppuVar9 = &puStack_c8;
      puStack_1b8 = puVar10;
      puStack_a0 = puVar14;
      func_0x000107c60bc4(ppuVar9);
      lStack_d8 = 0x1022dbc20;
      puStack_f8 = puVar20;
      uStack_f0 = 0x42000000;
      puStack_e8 = &UNK_100288f10;
      puStack_e0 = &UNK_1104f27c8;
      ppuVar16 = &puStack_f8;
      puStack_d0 = puVar15;
      func_0x000107c60bc4(ppuVar16);
      uStack_108 = 0x1022dbc28;
      puStack_128 = puVar20;
      uStack_120 = 0x42000000;
      puStack_118 = &UNK_1000f6b44;
      puStack_110 = &UNK_1104f27f0;
      ppuVar17 = &puStack_128;
      puStack_100 = puVar11;
      func_0x000107c60bc4(ppuVar17);
      func_0x000107c6157c(puVar14);
      func_0x000107c6157c(puVar15);
      func_0x000107c6157c(puVar11);
      lVar28 = lStack_1a8;
      func_0x000107c49510(puVar8);
      func_0x000107c60bd0(ppuVar17);
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puStack_100);
      func_0x000107c61574(puStack_d0);
      puVar20 = puStack_a0;
      func_0x000107c61574(puVar14);
      func_0x000107c61574(puVar15);
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar20);
      func_0x000107c5432c(puStack_160);
      func_0x000107c615e8(puStack_1b8);
      goto LAB_1022d21b0;
    }
  }
  puVar8 = PTR_PTR_1126aa370;
  func_0x000107c610f8();
  func_0x000107c479ec();
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c510) + _DAT_112fbabe0);
  func_0x000107c5c734(uVar7);
  func_0x000107c61180();
  func_0x000107c53548(puVar8);
  func_0x000107c615e8(uVar7);
  lVar21 = *(long *)(unaff_x20 + _DAT_112e7c500);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c54f9c(puVar8);
  func_0x000107c615e8();
  FUN_1022d5934();
  lStack_148 = lVar21;
  if (lVar21 != 0) {
    func_0x000107c61174();
    lVar26 = lVar21;
    func_0x000107c5cb24();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c5c0);
    func_0x000107c5cb24(uVar7);
    func_0x000107c61180();
    puVar13 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    puVar19 = unaff_x20;
    func_0x000107c61614(puVar13 + 0x10);
    puVar11 = PTR_PTR_1126aa3b8;
    func_0x000107c610f8(PTR_PTR_1126aa3b8);
    pcStack_a8 = FUN_1022dbbf0;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x1022dc248;
    puStack_b0 = &UNK_1104f2728;
    ppuVar9 = &puStack_c8;
    puStack_c8 = puVar20;
    puStack_a0 = puVar13;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c6157c(puVar13);
    func_0x000107c480e0(puVar11);
    func_0x000107c61170(lVar26);
    func_0x000107c61170(uVar7);
    puVar20 = PTR___NSConcreteStackBlock_11034bd00;
    func_0x000107c60bd0(ppuVar9);
    puVar10 = puStack_a0;
    func_0x000107c61574(puVar13);
    func_0x000107c61574(puVar10);
    func_0x000107c572a4(puVar8);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(puVar11);
  }
  lVar21 = *(long *)(unaff_x20 + _DAT_112e7c5c8);
  if (lVar21 != 0) {
    puVar13 = PTR_PTR_1126aa3b0;
    func_0x000107c610f8(PTR_PTR_1126aa3b0);
    func_0x000107c615f0(lVar21);
    func_0x000107c459d8(puVar13);
    lVar28 = *(long *)(unaff_x20 + _DAT_112e7c548);
    func_0x000107c42328();
    func_0x000107c61180();
    lVar26 = lVar28;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar28);
    if (lVar26 != 0) {
      lVar28 = lVar26;
      func_0x000107c52064(lVar26);
      func_0x000107c61180();
      lVar6 = lVar28;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(lVar28);
      func_0x000107c58fc4(puVar13);
      func_0x000107c615e8(lVar26);
      func_0x000107c61170(lVar6);
    }
    func_0x000107c526ec(puVar8);
    func_0x000107c615e8(lVar21);
    func_0x000107c61170(puVar13);
  }
  puVar10 = PTR_PTR_1126aa378;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar13 = puVar10;
  func_0x0001022dcbb0();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar19);
  func_0x000107c542d8(puVar10);
  func_0x000107c61170(puVar13);
  puVar13 = puStack_1a0;
  func_0x000108c2be10(puStack_1a0);
  func_0x000107c615e8(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c542dc(puVar10);
  func_0x000107c61170(puVar13);
  puStack_1a0 = puVar10;
  func_0x000107c5a0e0(puVar8);
  puVar1 = (undefined8 *)(lVar5 + _DAT_113074cd8);
  uVar7 = puVar1[1];
  puStack_a0 = (undefined *)puVar1[1];
  pcStack_a8 = (code *)*puVar1;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)0x1022dc22c;
  puStack_b0 = &UNK_1104f24f8;
  ppuVar9 = &puStack_c8;
  puStack_c8 = puVar20;
  func_0x000107c60bc4(ppuVar9);
  puVar20 = puStack_a0;
  func_0x000107c6157c(uVar7);
  func_0x000107c61574(puVar20);
  func_0x000107c56f44(puVar8);
  func_0x000107c60bd0(ppuVar9);
  FUN_1022dc008(0,0x112e7c6d8,&PTR_PTR_1126aa380);
  uVar18 = *(undefined8 *)(lVar5 + _DAT_113074ce8);
  func_0x000107c5cb24();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(lVar5 + _DAT_113074cf0);
  uVar2 = ((undefined8 *)(lVar5 + _DAT_113074cf0))[1];
  uVar25 = *(undefined8 *)(lVar5 + _DAT_113074cf8);
  uVar3 = ((undefined8 *)(lVar5 + _DAT_113074cf8))[1];
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  FUN_1022d5b98(uVar18,uVar7,uVar2,uVar25,uVar3);
  lStack_1a8 = uVar18;
  func_0x000107c54324(puVar8);
  func_0x000100083b20(&puStack_c8);
  puVar20 = puStack_c8;
  puVar13 = puStack_c8;
  func_0x000107c4141c();
  func_0x000107c61180();
  func_0x000107c61170(puVar20);
  puVar20 = puVar13;
  func_0x000107c41414();
  func_0x000107c61180();
  func_0x000107c615e8(puVar13);
  puVar13 = puVar20;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar20);
  if (puVar13 != (undefined *)0x0) {
    pcVar23 = pcStack_138;
    func_0x000107c4d508();
    func_0x000107c61180();
    if (pcVar23 != (code *)0x0) {
      lVar21 = (long)pcVar23;
      func_0x000107c5cc14();
      func_0x000107c61180();
      func_0x000107c61170(pcVar23);
      if (lVar21 != 0) {
        puVar20 = puVar13;
        func_0x000107c409cc();
        func_0x000107c61180();
        if (puVar20 == (undefined *)0x0) {
          func_0x000107c615e8(puVar13);
          func_0x000107c61170(lVar21);
          goto LAB_1022d2724;
        }
        puVar10 = puVar20;
        func_0x000107c40978();
        func_0x000107c61180();
        puVar19 = puVar10;
        func_0x000107c41408();
        func_0x000107c61180();
        func_0x000107c53e8c(puVar8);
        func_0x000107c615e8(puVar13);
        func_0x000107c61170(lVar21);
        func_0x000107c615e8(puVar20);
        func_0x000107c615e8(puVar10);
        puVar13 = puVar19;
      }
    }
    func_0x000107c615e8(puVar13);
  }
LAB_1022d2724:
  puVar10 = PTR_PTR_1126aa388;
  func_0x000107c610f8(PTR_PTR_1126aa388);
  func_0x000107c453e4();
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c610) + _DAT_113015eb8);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&puStack_f8);
  func_0x000107c61574(uVar7);
  lVar21 = lStack_d8;
  puVar20 = puStack_e0;
  func_0x0001022dbf24(&puStack_f8,puStack_e0);
  (**(code **)(lVar21 + 0x20))(puVar20,lVar21);
  uVar7 = 0;
  FUN_1022dc008(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar23 = FUN_1022d5ca0;
  func_0x0001000bfde0(FUN_1022d5ca0,0,uVar7);
  func_0x000107c61574(puVar20);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar23);
  puVar13 = puVar20;
  func_0x000107c5cb24(puVar20);
  func_0x000107c61180();
  func_0x000107c61170(puVar20);
  func_0x000107c54c98(puVar10);
  func_0x000107c61170(puVar13);
  lVar21 = lStack_d8;
  puVar20 = puStack_e0;
  func_0x0001022dbf24(&puStack_f8,puStack_e0);
  (**(code **)(lVar21 + 0x18))(puVar20,lVar21);
  pcVar23 = FUN_1022d6020;
  func_0x0001000bfde0(FUN_1022d6020,0,uVar7);
  func_0x000107c61574(puVar20);
  pcStack_138 = pcVar23;
  func_0x0001004575f0();
  puVar13 = puVar20;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(puVar20);
  func_0x000107c58dec(puVar10);
  func_0x000107c61170(puVar13);
  FUN_1022db574(&puStack_f8,&puStack_c8);
  puVar20 = &UNK_1104f2530;
  func_0x000107c613fc(&UNK_1104f2530,0x38,7);
  FUN_1022db5b8(&puStack_c8,puVar20 + 0x10);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a8 = FUN_1022db5d0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)&UNK_1000f6b44;
  puStack_b0 = &UNK_1104f2548;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar20;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a0);
  func_0x000107c56e48(puVar10);
  func_0x000107c60bd0(ppuVar9);
  FUN_1022db574(&puStack_f8,&puStack_128);
  puVar20 = &UNK_1104f2580;
  func_0x000107c613fc(&UNK_1104f2580,0x38,7);
  FUN_1022db5b8(&puStack_128,puVar20 + 0x10);
  pcStack_a8 = FUN_1022db614;
  puStack_c8 = puVar13;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)0x1022dc230;
  puStack_b0 = &UNK_1104f2598;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar20;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a0);
  func_0x000107c56e44(puVar10);
  func_0x000107c60bd0(ppuVar9);
  puVar20 = PTR_PTR_1126b0c98;
  func_0x000107c610f8();
  func_0x000107c47f1c();
  lVar26 = *(long *)(unaff_x20 + _DAT_112e7c618);
  func_0x000107c439dc();
  func_0x000107c61180();
  lVar21 = lVar26;
  puStack_1b0 = puVar20;
  (**(code **)(lVar26 + 0x10))();
  func_0x000107c61180();
  func_0x000107c60bd0(lVar26);
  lVar26 = lVar21;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar21);
  if (lVar26 != 0) {
    func_0x000107c54c28(puVar10);
    func_0x000107c615e8(lVar26);
  }
  lVar21 = *(long *)(unaff_x20 + _DAT_112e7c680);
  if (lVar21 != 0) {
    puVar20 = &UNK_1104f26e8;
    func_0x000107c613fc(&UNK_1104f26e8,0x18,7);
    *(long *)(puVar20 + 0x10) = lVar21;
    pcStack_a8 = (code *)0x1022dbbe8;
    puStack_c8 = puVar13;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_1022d65f0;
    puStack_b0 = &UNK_1104f2700;
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar20;
    func_0x000107c60bc4(ppuVar9);
    puVar20 = puStack_a0;
    func_0x000107c61174(lVar21);
    func_0x000107c61174();
    func_0x000107c61574(puVar20);
    func_0x000107c56d9c(puVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar21);
  }
  func_0x000107c542ec(puVar8);
  lVar26 = *(long *)(unaff_x20 + _DAT_112e7c600);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar21 = lVar26;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  if (lVar21 != 0) {
    lVar26 = lVar21;
    func_0x000107c5d6fc(lVar21);
    func_0x000107c61180();
    func_0x000107c61170(lVar21);
    puVar20 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61614(puVar20 + 0x10);
    pcStack_a8 = (code *)0x1022dbbe0;
    puStack_c8 = puVar13;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_1021e83b0;
    puStack_b0 = &UNK_1104f26b0;
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar20;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_a0);
    lVar21 = lVar26;
    func_0x000107c5c320(lVar26);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar26);
    func_0x000107c3e924(lVar21);
    func_0x000107c61170(lVar21);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c530);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  puVar20 = &UNK_1104f22d8;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar20 + 0x10);
  puVar11 = PTR_PTR_1126aa390;
  func_0x000107c610f8(PTR_PTR_1126aa390);
  pcStack_a8 = (code *)0x1022db61c;
  puStack_c8 = puVar13;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)0x1022dc250;
  puStack_b0 = &UNK_1104f25c0;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar20;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar20);
  func_0x000107c47f94(puVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c60bd0(ppuVar9);
  puVar19 = puStack_a0;
  func_0x000107c61574(puVar20);
  func_0x000107c61574(puVar19);
  func_0x000107c5430c(puVar8);
  func_0x000107c61170(puVar11);
  puVar20 = puVar8;
  func_0x000107c42320();
  func_0x000107c61180();
  if (puVar20 != (undefined *)0x0) {
    puVar19 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61614(puVar19 + 0x10);
    pcStack_a8 = FUN_1022db6c0;
    puStack_c8 = puVar13;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)&UNK_100c75f50;
    puStack_b0 = &UNK_1104f25e8;
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar19;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_a0);
    func_0x000107c56ee8(puVar20);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar20);
  }
  puVar20 = puVar8;
  func_0x000107c42320();
  func_0x000107c61180();
  if (puVar20 != (undefined *)0x0) {
    puVar19 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61614(puVar19 + 0x10);
    pcStack_a8 = (code *)0x1022db6c8;
    puStack_c8 = puVar13;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)&UNK_1000f6b44;
    puStack_b0 = &UNK_1104f2610;
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar19;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_a0);
    func_0x000107c56e6c(puVar20);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(puVar20);
  }
  puVar20 = puVar8;
  func_0x000107c42320();
  func_0x000107c61180();
  if (puVar20 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c608) + 0x18);
    func_0x000107c5cb24(uVar7);
    func_0x000107c61180();
    func_0x000107c594ac(puVar20);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(uVar7);
  }
  puVar20 = puVar8;
  func_0x000107c42320();
  func_0x000107c61180();
  if (puVar20 != (undefined *)0x0) {
    FUN_1022dc008(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar12 = (ulong)*(byte *)(lVar5 + _DAT_113074d18);
    func_0x000107c6010c(uVar12);
    func_0x000107c5755c(puVar20);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(uVar12);
  }
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e7c608) + 0x10);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  puVar20 = &UNK_1104f22d8;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar20 + 0x10);
  puVar19 = PTR_PTR_1126aa398;
  func_0x000107c610f8(PTR_PTR_1126aa398);
  pcStack_a8 = (code *)0x1022db6d0;
  puStack_c8 = puVar13;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)&UNK_1000f6b44;
  puStack_b0 = &UNK_1104f2638;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar20;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar20);
  func_0x000107c48930(puVar19);
  func_0x000107c61170(uVar7);
  func_0x000107c60bd0(ppuVar9);
  puVar13 = puStack_a0;
  func_0x000107c61574(puVar20);
  func_0x000107c61574(puVar13);
  func_0x000107c5431c(puVar8);
  func_0x000107c61170(puVar19);
  lVar26 = 0;
  func_0x000107c5ede0();
  puVar20 = puStack_130;
  pcVar23 = *(code **)(*(long *)(lVar26 + -8) + 0x38);
  (*pcVar23)(puStack_130,1,1,lVar26);
  lVar21 = lStack_178;
  (*pcVar23)(lStack_178,1,1,lVar26);
  lVar26 = 0;
  func_0x0001046305a8();
  puVar4 = puStack_168;
  (**(code **)(*(long *)(lVar26 + -8) + 0x38))(puStack_168,1,1,lVar26);
  *(undefined1 *)(lVar27 + -8) = 0;
  *(undefined8 *)(lVar27 + -0x10) = 0;
  *(undefined8 *)(lVar27 + -0x18) = 0;
  *(undefined8 *)(lVar27 + -0x20) = 0;
  *(undefined8 *)(lVar27 + -0x28) = 0;
  *(undefined8 *)(lVar27 + -0x30) = 0;
  *(undefined8 *)(lVar27 + -0x38) = 0;
  *(undefined1 **)(lVar27 + -0x40) = puVar4;
  lVar26 = lStack_158;
  func_0x000104638e24(lStack_158,0x18,puVar20,0,lVar21,0,0,0,0);
  func_0x000103bda44c(0);
  lVar21 = lStack_170;
  puVar24 = *(ulong **)(unaff_x20 + _DAT_112e7c648);
  func_0x000100e39298(lVar26,lStack_170);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000104651d90(lVar21);
  func_0x000103bda584(puVar24,0,lVar21);
  pcVar23 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar24) + 0x80);
  func_0x000107c615f0(*(undefined8 *)(lVar5 + _DAT_113074ca8));
  (*pcVar23)();
  puVar20 = puVar8;
  func_0x000107c42330();
  func_0x000107c61180();
  if (puVar20 != (undefined *)0x0) {
    func_0x000107c5a6a4();
    func_0x000107c61170(puVar20);
  }
  uVar7 = *(undefined8 *)(lVar5 + _DAT_113074d08);
  func_0x000107c5cb24(uVar7);
  func_0x000107c61180();
  puVar20 = PTR_PTR_1126aa3a0;
  func_0x000107c610f8(PTR_PTR_1126aa3a0);
  func_0x000107c47af8();
  func_0x000107c61170(uVar7);
  func_0x000107c56af4(puVar8);
  func_0x000107c61170(puVar20);
  FUN_1022db750();
  func_0x000107c525c4(puVar8);
  func_0x000107c61170(puVar20);
  puVar20 = PTR_PTR_1126aa3a8;
  func_0x000107c610f8();
  func_0x000107c49520();
  lVar26 = *(long *)(unaff_x20 + _DAT_112e7c518);
  lVar5 = lVar26;
  func_0x000107c43d50();
  func_0x000107c61180();
  lVar21 = lVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  lVar5 = lStack_140;
  if (lVar21 == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = lVar21;
    func_0x000107c49e78(lVar21);
    func_0x000107c615e8(lVar21);
  }
  func_0x000107c5fca0(lVar27);
  func_0x000107c4d664(uStack_180);
  func_0x000107c61170(lVar27);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c630);
  *(undefined **)(unaff_x20 + _DAT_112e7c630) = puVar20;
  func_0x000107c61174();
  func_0x000107c61174();
  puStack_130 = puVar20;
  func_0x000107c61170(uVar7);
  lVar21 = 0x112e7c6e0;
  func_0x0001000285a8(0x112e7c6e0,&UNK_10da87000);
  func_0x000107c613fc();
  func_0x000107c43d50();
  func_0x000107c61180();
  lVar27 = lVar26;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  if (lVar27 == 0) {
    *(undefined8 *)(lVar21 + 0x20) = 0;
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    lVar26 = lVar27;
    func_0x000107c43d4c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar27);
    *(long *)(lVar21 + 0x20) = lVar26;
    puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar26 != 0) {
      func_0x000107c421ac();
      func_0x000107c61180();
      puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar20 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar5 = lStack_140;
      if (lVar26 != 0) {
        func_0x000107c61550();
        if ((((int)puVar20 == 0) || ((long)puVar13 < 0)) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar13 >> 0x3e == 0) {
            puVar20 = *(undefined **)(((ulong)puVar13 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar20 = (undefined *)((ulong)puVar13 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar13) {
              puVar20 = puVar13;
            }
            func_0x000107c60480(puVar20);
          }
          puVar13 = (undefined *)0x0;
          FUN_1022cd2e0(0,puVar20 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        }
        uVar22 = (ulong)puVar13 & 0xffffffffffffff8;
        uVar12 = *(ulong *)(uVar22 + 0x10);
        puVar20 = puVar13;
        if (*(ulong *)(uVar22 + 0x18) >> 1 <= uVar12) {
          puVar20 = (undefined *)(ulong)(1 < *(ulong *)(uVar22 + 0x18));
          FUN_1022cd2e0(puVar20,uVar12 + 1,1,puVar13);
          uVar22 = (ulong)puVar20 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar22 + 0x10) = uVar12 + 1;
        *(long *)(uVar22 + uVar12 * 8 + 0x20) = lVar26;
        lVar5 = lStack_140;
      }
    }
  }
  puVar19 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  func_0x000107c61588(lVar21);
  func_0x0001022dbc80(lVar21 + 0x20,0x112e7c6e8,&UNK_10daa3020);
  func_0x000107c6145c(lVar21,0x20,7);
  uVar7 = 0x112d5b0a0;
  func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
  puVar13 = puVar20;
  func_0x000107c5fc48(puVar20,uVar7);
  func_0x000107c6142c(puVar20);
  func_0x000107c4cd50(puVar19);
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  puVar20 = &UNK_1104f22d8;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar20 + 0x10);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a8 = FUN_1022dbbd0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  pcStack_b8 = (code *)&UNK_100b5fdac;
  puStack_b0 = &UNK_1104f2660;
  ppuVar9 = &puStack_c8;
  puStack_a0 = puVar20;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61574(puStack_a0);
  puVar20 = puVar19;
  func_0x000107c5c320(puVar19);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(puVar19);
  func_0x000107c3e924(puVar20);
  func_0x000107c61170(puVar20);
  lVar26 = *(long *)(unaff_x20 + _DAT_112e7c548);
  func_0x000107c42328();
  func_0x000107c61180();
  lVar21 = lVar26;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar26);
  if (lVar21 == 0) {
    func_0x000107c61170(puStack_130);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lStack_1a8);
    func_0x000107c61170(puStack_1a0);
    func_0x000107c61170(puStack_190);
    func_0x000107c615e8(lStack_188);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(puStack_160);
    func_0x000107c61170(puStack_150);
    func_0x000107c61170(puStack_198);
    func_0x000107c61170(puStack_1b0);
    func_0x000107c61574(pcStack_138);
  }
  else {
    lVar26 = lVar21;
    func_0x000107c52064(lVar21);
    func_0x000107c61180();
    func_0x000107c615e8(lVar21);
    puVar20 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61614(puVar20 + 0x10);
    pcStack_a8 = (code *)0x1022dbbd8;
    puStack_c8 = puVar13;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)&UNK_10083fefc;
    puStack_b0 = &UNK_1104f2688;
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar20;
    func_0x000107c60bc4(ppuVar9);
    func_0x000107c61574(puStack_a0);
    lVar21 = lVar26;
    func_0x000107c5c320(lVar26);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar26);
    puVar20 = &DAT_112e7c578;
    FUN_1022d3784(&DAT_112e7c578);
    func_0x000107c3e924(lVar21);
    func_0x000107c61170(puStack_198);
    func_0x000107c61170(puStack_150);
    func_0x000107c615e8(lStack_188);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(puStack_190);
    func_0x000107c61170(puStack_1a0);
    func_0x000107c61170(lStack_1a8);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar24);
    func_0x000107c61170(puStack_160);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(puVar20);
    func_0x000107c61170(puStack_1b0);
    func_0x000107c61574(pcStack_138);
    func_0x000107c61170(puStack_130);
  }
  func_0x000107c61170(lStack_148);
  func_0x000100e392dc(lStack_158);
  func_0x0001022dbf04(&puStack_f8);
  return;
}



/* Entry: 1022d3734; end: 1022d3783;  */

void FUN_1022d3734(void)

{
  char *pcVar1;
  
  FUN_1022dc008(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  pcVar1 = "error";
  func_0x000107c60124("error",5,2);
  pcRam00000001138046f8 = pcVar1;
  return;
}



/* Entry: 1022d3784; end: 1022d37eb;  */

undefined * FUN_1022d3784(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  puVar1 = *(undefined **)(unaff_x20 + lVar3);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined **)(unaff_x20 + lVar3) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1022d37ec; end: 1022d38a7;  */

void FUN_1022d37ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long *param_5)

{
  undefined8 uVar1;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lStack_60 = 0;
    uVar1 = 0;
    FUN_1022dc008(0,param_3,param_4);
    func_0x000107c5fc50(param_1,&lStack_60,uVar1);
    if (lStack_60 == 0) {
      func_0x000107c61170(param_2);
    }
    else {
      uVar1 = *(undefined8 *)(param_2 + *param_5);
      *(long *)(param_2 + *param_5) = lStack_60;
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 1022d38a8; end: 1022d39bf;  */

void FUN_1022d38a8(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_6 + 0x10,auStack_68,0,0);
  param_6 = param_6 + 0x10;
  func_0x000107c61618();
  if (param_6 != 0) {
    if (param_4 != 0) {
      func_0x000107c61174();
      lVar2 = param_4;
      func_0x000107c30e2c();
      func_0x000107c61180();
      lVar3 = param_6;
      if (lVar2 != 0) {
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d39b8);
          (*pcVar1)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d39bc);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d39c0);
          (*pcVar1)();
        }
        FUN_1022d39c0((long)param_1,param_2,param_3,lVar2,param_5);
        func_0x000107c61170(param_6);
        lVar3 = param_4;
        param_4 = lVar2;
      }
      param_6 = param_4;
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(param_6);
  }
  return;
}



/* Entry: 1022d39c0; end: 1022d45d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d39c0(long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **ppuVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long unaff_x20;
  long *plVar28;
  ulong uVar29;
  long lVar30;
  undefined8 uVar31;
  ulong uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  undefined *puVar36;
  undefined1 uVar37;
  ulong uVar38;
  undefined1 auStack_d0 [24];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar26 = _DAT_113074cb8;
  lVar35 = *(long *)(unaff_x20 + _DAT_112e7c4f0);
  func_0x000107c61428(lVar35 + _DAT_113074cb8,auStack_80,0,0);
  pcVar4 = (char *)(lVar35 + lVar26);
  func_0x000107c61618();
  if (pcVar4 == (char *)0x0) {
    return;
  }
  puStack_88 = PTR_DAT_11269cb90;
  pcVar5 = pcVar4;
  func_0x000107c61494();
  if (pcVar5 == (char *)0x0) goto LAB_1022d45ac;
  pcVar6 = pcVar4;
  func_0x000107c614f0();
  uVar7 = 0;
  FUN_1022dc008(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x000107c61488(pcVar6,uVar7);
  if (pcVar6 == (char *)0x0) goto LAB_1022d45ac;
  puVar8 = &UNK_1104f3070;
  func_0x000107c613fc(&UNK_1104f3070,0x18,7);
  *(undefined **)(puVar8 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((param_5 == 0) || (*(long *)(param_5 + 0x10) == 0)) {
    uVar29 = *(ulong *)(unaff_x20 + _DAT_112e7c628);
    if (uVar29 == 0) {
      uVar29 = *(ulong *)(unaff_x20 + _DAT_112e7c620);
      if (uVar29 != 0) {
        uVar27 = uVar29 & 0xffffffffffffff8;
        if (uVar29 >> 0x3e == 0) {
          uVar25 = *(ulong *)(uVar27 + 0x10);
        }
        else {
          uVar25 = uVar29;
          if (-1 < (long)uVar29) {
            uVar25 = uVar27;
          }
          func_0x000107c60480();
        }
        func_0x000107c61434(uVar29);
        puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar25 != 0) {
          uVar32 = 0;
          puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
          puVar36 = PTR___swiftEmptyArrayStorage_11034f1c8;
          do {
            if ((uVar29 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uVar27 + 0x10) <= uVar32) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43c0);
                (*pcVar2)();
              }
              uVar9 = *(ulong *)(uVar29 + 0x20 + uVar32 * 8);
              func_0x000107c61174();
            }
            else {
              uVar9 = uVar32;
              func_0x0001022cd0ac(uVar32,uVar29);
            }
            bVar3 = SCARRY8(uVar32,1);
            uVar32 = uVar32 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43bc);
              (*pcVar2)();
            }
            uVar38 = uVar9;
            func_0x000107c5b538();
            func_0x000107c61180();
            uVar7 = 0;
            FUN_1022dc008(0,0x112e7c0a8,&PTR_PTR_1126c3c08);
            uVar14 = uVar38;
            func_0x000107c5fc54(uVar38,uVar7);
            func_0x000107c61170(uVar38);
            if (uVar14 >> 0x3e == 0) {
              uVar38 = *(ulong *)((uVar14 & 0xffffffffffffff8) + 0x10);
              if (uVar38 != 0) goto LAB_1022d418c;
LAB_1022d42a4:
              func_0x000107c6142c(uVar14);
              func_0x000107c61170(uVar9);
            }
            else {
              uVar38 = uVar14 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar14) {
                uVar38 = uVar14;
              }
              func_0x000107c60480();
              if (uVar38 == 0) goto LAB_1022d42a4;
LAB_1022d418c:
              uVar21 = uVar38 & ((long)uVar38 >> 0x3f ^ 0xffffffffffffffffU);
              puStack_b8 = puVar19;
              func_0x000100403514(0,uVar21,0);
              if ((long)uVar38 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43cc);
                (*pcVar2)();
              }
              uVar34 = 0;
              do {
                puVar18 = puStack_b8;
                if ((uVar14 & 0xc000000000000001) == 0) {
                  uVar15 = *(ulong *)(uVar14 + uVar34 * 8 + 0x20);
                  func_0x000107c61174();
                  uVar22 = uVar21;
                }
                else {
                  uVar15 = uVar34;
                  uVar22 = uVar14;
                  func_0x0001022cd0d4();
                }
                func_0x000107c61174();
                uVar16 = uVar15;
                func_0x000107c5b2d0();
                func_0x000107c61180();
                uVar17 = uVar16;
                func_0x000107c5faec();
                uVar21 = uVar22;
                func_0x000107c61170(uVar15);
                func_0x000107c61170(uVar15);
                func_0x000107c61170(uVar16);
                uVar16 = *(ulong *)(puVar18 + 0x10);
                uVar15 = uVar16 + 1;
                puStack_b8 = puVar18;
                if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar16) {
                  uVar21 = uVar15;
                  func_0x000100403514(1 < *(ulong *)(puVar18 + 0x18),uVar15,1);
                }
                puVar19 = puStack_b8;
                uVar34 = uVar34 + 1;
                *(ulong *)(puStack_b8 + 0x10) = uVar15;
                *(ulong *)(puStack_b8 + uVar16 * 0x10 + 0x20) = uVar17;
                *(ulong *)(puStack_b8 + uVar16 * 0x10 + 0x28) = uVar22;
              } while (uVar38 != uVar34);
              func_0x000107c6142c(uVar14);
              func_0x000107c61170(uVar9);
            }
            uVar9 = *(ulong *)(puVar19 + 0x10);
            lVar26 = *(long *)(puVar36 + 0x10);
            if (SCARRY8(lVar26,uVar9)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43c4);
              (*pcVar2)();
            }
            puVar18 = puVar36;
            func_0x000107c61558();
            if (((int)puVar18 == 0) ||
               (uVar38 = *(ulong *)(puVar36 + 0x18) >> 1, (long)uVar38 < (long)(lVar26 + uVar9))) {
              func_0x0001000d182c();
              uVar38 = *(ulong *)(puVar18 + 0x18) >> 1;
              puVar36 = puVar18;
              if (*(long *)(puVar19 + 0x10) != 0) goto LAB_1022d4318;
LAB_1022d40e0:
              func_0x000107c6142c(puVar19);
              puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
              puVar18 = puVar36;
              if (uVar9 != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43c8);
                (*pcVar2)();
              }
            }
            else {
              puVar18 = puVar36;
              if (*(long *)(puVar19 + 0x10) == 0) goto LAB_1022d40e0;
LAB_1022d4318:
              if (uVar38 - *(long *)(puVar18 + 0x10) < uVar9) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43d0);
                (*pcVar2)();
              }
              func_0x000107c6140c(puVar18 + *(long *)(puVar18 + 0x10) * 0x10 + 0x20,puVar19 + 0x20,
                                  uVar9,PTR___sSSN_11034da80);
              func_0x000107c6142c(puVar19);
              puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
              if (uVar9 != 0) {
                if (SCARRY8(*(long *)(puVar18 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43d4);
                  (*pcVar2)();
                }
                *(ulong *)(puVar18 + 0x10) = *(long *)(puVar18 + 0x10) + uVar9;
              }
            }
            puVar36 = puVar18;
          } while (uVar32 != uVar25);
        }
        func_0x000107c6142c(uVar29);
        uVar7 = *(undefined8 *)(puVar8 + 0x10);
        *(undefined **)(puVar8 + 0x10) = puVar18;
        func_0x000107c6142c(uVar7);
      }
    }
    else {
      if (uVar29 >> 0x3e == 0) {
        uVar27 = *(ulong *)((uVar29 & 0xffffffffffffff8) + 0x10);
      }
      else {
        uVar27 = uVar29;
        if (-1 < (long)uVar29) {
          uVar27 = uVar29 & 0xffffffffffffff8;
        }
        func_0x000107c60480();
      }
      puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (uVar27 != 0) {
        puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uVar25 = uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU);
        func_0x000107c61434(uVar29);
        func_0x000100403514(0,uVar25,0);
        if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d43ec);
          (*pcVar2)();
        }
        uVar32 = 0;
        do {
          puVar18 = puStack_b8;
          if ((uVar29 & 0xc000000000000001) == 0) {
            uVar9 = *(ulong *)(uVar29 + uVar32 * 8 + 0x20);
            func_0x000107c61174();
            uVar38 = uVar25;
          }
          else {
            uVar9 = uVar32;
            uVar38 = uVar29;
            func_0x0001022cd0c0();
          }
          uVar14 = uVar9;
          func_0x000107c5b2d0();
          func_0x000107c61180();
          uVar21 = uVar14;
          func_0x000107c5faec();
          uVar25 = uVar38;
          func_0x000107c61170(uVar9);
          func_0x000107c61170(uVar14);
          uVar14 = *(ulong *)(puVar18 + 0x10);
          uVar9 = uVar14 + 1;
          puStack_b8 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar14) {
            uVar25 = uVar9;
            func_0x000100403514(1 < *(ulong *)(puVar18 + 0x18),uVar9,1);
          }
          puVar18 = puStack_b8;
          uVar32 = uVar32 + 1;
          *(ulong *)(puStack_b8 + 0x10) = uVar9;
          *(ulong *)(puStack_b8 + uVar14 * 0x10 + 0x20) = uVar21;
          *(ulong *)(puStack_b8 + uVar14 * 0x10 + 0x28) = uVar38;
        } while (uVar27 != uVar32);
        func_0x000107c6142c(uVar29);
      }
      uVar7 = *(undefined8 *)(puVar8 + 0x10);
      *(undefined **)(puVar8 + 0x10) = puVar18;
      func_0x000107c6142c(uVar7);
    }
  }
  else {
    *(long *)(puVar8 + 0x10) = param_5;
    func_0x000107c61434(param_5);
  }
  lVar26 = *(long *)(*(long *)(puVar8 + 0x10) + 0x10);
  if (lVar26 != 0) {
    lVar33 = 0;
    plVar28 = (long *)(*(long *)(puVar8 + 0x10) + 0x28);
    do {
      uVar29 = plVar28[-1];
      if ((uVar29 == param_2 && *plVar28 == param_3) ||
         (func_0x000107c605b8(uVar29,*plVar28,param_2,param_3,0), (uVar29 & 1) != 0)) {
        uVar37 = 0;
        lVar26 = lVar33;
        goto LAB_1022d3c6c;
      }
      plVar28 = plVar28 + 2;
      lVar33 = lVar33 + 1;
    } while (lVar26 != lVar33);
  }
  uVar37 = 1;
  lVar33 = param_1;
  lVar26 = 0;
LAB_1022d3c6c:
  lVar10 = *(long *)(unaff_x20 + _DAT_112e7c538);
  if (lVar10 != 0) {
    func_0x000107c4cc0c();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    lVar10 = _DAT_112e7c5d0;
    if (lVar11 != 0) {
      lVar12 = *(long *)(unaff_x20 + _DAT_112e7c5d0);
      func_0x000107c43d48();
      func_0x000107c61180();
      lVar13 = lVar12;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      if (lVar13 != 0) {
        lVar12 = lVar13;
        func_0x000107c422f4();
        if ((int)lVar12 != 0) {
          lVar12 = lVar11;
          func_0x000107c5c3f0();
          if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d4404);
            (*pcVar2)();
          }
          lVar24 = (lVar12 + -1) / 2;
          lVar12 = lVar33;
          if (lVar24 <= lVar33) {
            lVar12 = lVar24;
          }
          lVar30 = *(long *)(puVar8 + 0x10);
          lVar23 = *(long *)(lVar30 + 0x10);
          if (SBORROW8(lVar23,lVar33)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d4408);
            (*pcVar2)();
          }
          lVar1 = (lVar23 - lVar33) + -1;
          if (SBORROW8(lVar23 - lVar33,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d440c);
            (*pcVar2)();
          }
          uVar29 = lVar33 - lVar12;
          if (SBORROW8(lVar33,lVar12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d4410);
            (*pcVar2)();
          }
          if (lVar24 <= lVar1) {
            lVar1 = lVar24;
          }
          if (SCARRY8(lVar33,lVar1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d4414);
            (*pcVar2)();
          }
          lVar12 = lVar33 + lVar1 + 1;
          if (SCARRY8(lVar33 + lVar1,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d4418);
            (*pcVar2)();
          }
          uVar27 = uVar29 & ((long)uVar29 >> 0x3f ^ 0xffffffffffffffffU);
          lVar33 = lVar23;
          if (lVar12 <= lVar23) {
            lVar33 = lVar12;
          }
          if (lVar33 < (long)uVar27) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d441c);
            (*pcVar2)();
          }
          if (lVar23 < (long)uVar29) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d4420);
            (*pcVar2)();
          }
          if (lVar12 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1022d4424);
            (*pcVar2)();
          }
          if (lVar23 != lVar33 - uVar27) {
            func_0x000107c61434(lVar30);
            FUN_101994330();
            func_0x000107c61574();
            func_0x000107c6142c(lVar30);
          }
        }
        func_0x000107c615e8(lVar13);
      }
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c5b0);
      *(undefined8 *)(unaff_x20 + _DAT_112e7c5b0) = *(undefined8 *)(unaff_x20 + _DAT_112e7c590);
      func_0x000107c61174();
      func_0x000107c61170(uVar7);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112e7c5b8);
      *(undefined8 *)(unaff_x20 + _DAT_112e7c5b8) = *(undefined8 *)(unaff_x20 + _DAT_112e7c598);
      func_0x000107c61174();
      func_0x000107c61170(uVar7);
      lVar33 = *(long *)(unaff_x20 + lVar10);
      func_0x000107c43d48();
      func_0x000107c61180();
      lVar10 = lVar33;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar33);
      lVar33 = _DAT_113074d10;
      if (lVar10 == 0) {
LAB_1022d449c:
        pcVar6 = "launchOpera(index:snapId:thumbnailView:allSnapIds:)";
        func_0x0001000c10c0("launchOpera(index:snapId:thumbnailView:allSnapIds:)");
        func_0x000107c61180();
        puVar18 = &UNK_1104f22d8;
        func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
        func_0x000107c61614(puVar18 + 0x10,unaff_x20);
        puVar19 = &UNK_1104f3098;
        func_0x000107c613fc(&UNK_1104f3098,0x50,7);
        *(long *)(puVar19 + 0x10) = lVar11;
        *(char **)(puVar19 + 0x18) = pcVar5;
        *(undefined **)(puVar19 + 0x20) = puVar8;
        *(long *)(puVar19 + 0x28) = lVar26;
        puVar19[0x30] = uVar37;
        *(long *)(puVar19 + 0x38) = param_1;
        *(undefined8 *)(puVar19 + 0x40) = param_4;
        *(undefined **)(puVar19 + 0x48) = puVar18;
        pcStack_98 = FUN_1022dbfb8;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_1104f30b0;
        ppuVar20 = &puStack_b8;
        puStack_90 = puVar19;
        func_0x000107c60bc4(ppuVar20);
        puVar18 = puStack_90;
        func_0x000107c615f0(lVar11);
        func_0x000107c615f0(pcVar4);
        func_0x000107c61174(param_4);
        func_0x000107c6157c(puVar8);
        func_0x000107c61574(puVar18);
        func_0x000107c4e524(pcVar6);
      }
      else {
        func_0x000107c61428(lVar35 + _DAT_113074d10,auStack_d0,0,0);
        uVar29 = lVar35 + lVar33;
        func_0x000107c61618();
        if (uVar29 == 0) {
          func_0x000107c615e8(lVar10);
          goto LAB_1022d449c;
        }
        uVar31 = *(undefined8 *)(puVar8 + 0x10);
        uVar7 = uVar31;
        func_0x000107c61434(uVar31);
        func_0x000107c5fc48();
        func_0x000107c6142c(uVar31);
        uVar27 = uVar29;
        func_0x000107c43c7c();
        func_0x000107c61180();
        func_0x000107c615e8(uVar29);
        func_0x000107c61170(uVar7);
        uVar7 = 0;
        FUN_1022dc008(0,0x112d63638,&PTR_PTR_1126af4d0);
        uVar25 = uVar27;
        func_0x000107c5fc54(uVar27,uVar7);
        func_0x000107c61170(uVar27);
        uVar29 = lVar35 + lVar33;
        func_0x000107c61618();
        if (uVar29 == 0) {
          func_0x000107c615e8(lVar10);
          func_0x000107c6142c(uVar25);
          goto LAB_1022d449c;
        }
        uVar31 = *(undefined8 *)(puVar8 + 0x10);
        uVar7 = uVar31;
        func_0x000107c61434(uVar31);
        func_0x000107c5fc48();
        func_0x000107c6142c(uVar31);
        uVar27 = uVar29;
        func_0x000107c43c48();
        func_0x000107c61180();
        func_0x000107c615e8(uVar29);
        func_0x000107c61170(uVar7);
        uVar7 = 0;
        FUN_1022dc008(0,0x112e2d558,&PTR_PTR_1126af4c0);
        uVar29 = uVar27;
        func_0x000107c5fc54(uVar27,uVar7);
        func_0x000107c61170(uVar27);
        if (uVar25 >> 0x3e == 0) {
          uVar27 = *(ulong *)((uVar25 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar27 = uVar25 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar25) {
            uVar27 = uVar25;
          }
          func_0x000107c60480();
        }
        if (uVar29 >> 0x3e != 0) {
          uVar32 = uVar29 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar29) {
            uVar32 = uVar29;
          }
          func_0x000107c60480();
          if (uVar27 == uVar32) goto LAB_1022d3f74;
LAB_1022d4484:
          func_0x000107c615e8(lVar10);
          func_0x000107c6142c(uVar25);
          func_0x000107c6142c(uVar29);
          goto LAB_1022d449c;
        }
        if (uVar27 != *(ulong *)((uVar29 & 0xffffffffffffff8) + 0x10)) goto LAB_1022d4484;
LAB_1022d3f74:
        lVar35 = lVar10;
        func_0x000107c4231c();
        if ((int)lVar35 == 0) goto LAB_1022d4484;
        pcVar6 = "launchOpera(index:snapId:thumbnailView:allSnapIds:)";
        func_0x0001000c10c0("launchOpera(index:snapId:thumbnailView:allSnapIds:)");
        func_0x000107c61180();
        puVar18 = &UNK_1104f22d8;
        func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
        func_0x000107c61614(puVar18 + 0x10,unaff_x20);
        puVar19 = &UNK_1104f30e8;
        func_0x000107c613fc(&UNK_1104f30e8,0x58,7);
        *(long *)(puVar19 + 0x10) = lVar11;
        *(char **)(puVar19 + 0x18) = pcVar5;
        *(ulong *)(puVar19 + 0x20) = uVar25;
        *(ulong *)(puVar19 + 0x28) = uVar29;
        *(long *)(puVar19 + 0x30) = lVar26;
        puVar19[0x38] = uVar37;
        *(long *)(puVar19 + 0x40) = param_1;
        *(undefined8 *)(puVar19 + 0x48) = param_4;
        *(undefined **)(puVar19 + 0x50) = puVar18;
        pcStack_98 = FUN_1022dbfd0;
        puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b0 = 0x42000000;
        puStack_a8 = &UNK_1000f6b44;
        puStack_a0 = &UNK_1104f3100;
        ppuVar20 = &puStack_b8;
        puStack_90 = puVar19;
        func_0x000107c60bc4(ppuVar20);
        puVar18 = puStack_90;
        func_0x000107c615f0(lVar11);
        func_0x000107c615f0(pcVar4);
        func_0x000107c61174(param_4);
        func_0x000107c61574(puVar18);
        func_0x000107c4e524(pcVar6);
        func_0x000107c615e8(lVar11);
        lVar11 = lVar10;
      }
      func_0x000107c615e8(lVar11);
      func_0x000107c615e8(pcVar4);
      func_0x000107c60bd0(ppuVar20);
      pcVar4 = pcVar6;
    }
  }
  func_0x000107c61574(puVar8);
LAB_1022d45ac:
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 1022d45d4; end: 1022d468b;  */

/* WARNING: Possible PIC construction at 0x0001022d4660: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d4664) */

void FUN_1022d45d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = param_3;
  func_0x000107c5faec(param_3);
  if (param_5 != 0) {
    func_0x000107c5fc54(param_5,PTR___sSSN_11034da80);
  }
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_1,param_3,uVar3,param_4,param_5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1022d468c; end: 1022d49fb;  */

void FUN_1022d468c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar2 = &UNK_1104f28c8;
  func_0x000107c613fc(&UNK_1104f28c8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0x1022dbc58;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_1022dbc60;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101b54d8c;
  puStack_58 = &UNK_1104f28e0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4c5e4(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_2);
  puVar4 = puVar2;
  func_0x000107c61544(puVar2,"",0x7d,0xf7,0x3b,1);
  func_0x000107c61574(puVar2);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d4798);
  (*pcVar1)();
}



/* Entry: 1022d49fc; end: 1022d4b7f;  */

void FUN_1022d49fc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    if (param_3 != 0) {
      func_0x000107c61174();
      lVar1 = param_3;
      func_0x000107c30e2c();
      func_0x000107c61180();
      if (lVar1 != 0) {
        pcVar2 = "buildDreamsTab(_:)";
        func_0x0001000c10c0("buildDreamsTab(_:)");
        func_0x000107c61180();
        puVar3 = &UNK_1104f3020;
        func_0x000107c613fc(&UNK_1104f3020,0x30,7);
        *(long *)(puVar3 + 0x10) = param_4;
        *(undefined8 *)(puVar3 + 0x18) = param_1;
        *(undefined8 *)(puVar3 + 0x20) = param_2;
        *(long *)(puVar3 + 0x28) = lVar1;
        pcStack_78 = FUN_1022dbf90;
        puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_90 = 0x42000000;
        puStack_88 = &UNK_1000f6b44;
        puStack_80 = &UNK_1104f3038;
        ppuVar4 = &puStack_98;
        puStack_70 = puVar3;
        func_0x000107c60bc4(ppuVar4);
        puVar3 = puStack_70;
        func_0x000107c61174(param_4);
        func_0x000107c61174(param_1);
        func_0x000107c61434(param_2);
        func_0x000107c61174(lVar1);
        func_0x000107c61574(puVar3);
        func_0x000107c4e524(pcVar2);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_3);
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(pcVar2);
        return;
      }
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1022d4b80; end: 1022d4f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d4b80(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x20;
  ulong *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar11 = _DAT_113074cb0;
  lVar10 = *(long *)(unaff_x20 + _DAT_112e7c4f0);
  func_0x000107c61428(lVar10 + _DAT_113074cb0,auStack_78,0,0);
  lVar10 = lVar10 + lVar11;
  func_0x000107c61618();
  if (lVar10 == 0) {
    return;
  }
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c61168(PTR__OBJC_CLASS___UIViewController_1126af898);
  lVar11 = lVar10;
  func_0x000107c6148c(lVar10,puVar2);
  if (lVar11 == 0) goto LAB_1022d4f38;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar11 == 0) goto LAB_1022d4f38;
  lVar3 = lVar11;
  func_0x000107c5cc14();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar3 == 0) goto LAB_1022d4f38;
  puStack_80 = PTR_DAT_11269cb90;
  uVar8 = 1;
  lVar11 = lVar3;
  func_0x000107c61494(lVar3,1,&puStack_80);
  if (lVar11 == 0) {
    func_0x000107c615e8(lVar10);
    func_0x000107c61170(lVar3);
    return;
  }
  if (param_2 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    if (uVar15 == 0) goto LAB_1022d4d9c;
LAB_1022d4c70:
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar8 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000107c61174(lVar3);
    func_0x000100403514(0,uVar8,0);
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d4f64);
      (*pcVar1)();
    }
    uVar16 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(param_2 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
        uVar9 = uVar8;
      }
      else {
        uVar4 = uVar16;
        uVar9 = param_2;
        func_0x0001022cd0d4();
      }
      uVar5 = uVar4;
      func_0x000107c5b2d0();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5faec();
      uVar8 = uVar9;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar2 + 0x10);
      uVar4 = uVar5 + 1;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar5) {
        uVar8 = uVar4;
        func_0x000100403514(1 < *(ulong *)(puVar2 + 0x18),uVar4,1);
      }
      uVar16 = uVar16 + 1;
      *(ulong *)(puVar2 + 0x10) = uVar4;
      *(ulong *)(puVar2 + uVar5 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puVar2 + uVar5 * 0x10 + 0x28) = uVar9;
    } while (uVar15 != uVar16);
  }
  else {
    uVar15 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar15 = param_2;
    }
    func_0x000107c60480();
    if (uVar15 != 0) goto LAB_1022d4c70;
LAB_1022d4d9c:
    func_0x000107c61174(lVar3);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  func_0x000107c5b2d0();
  func_0x000107c61180();
  uVar15 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  lVar11 = *(long *)(puVar2 + 0x10);
  if (lVar11 != 0) {
    lVar14 = 0;
    puVar12 = (ulong *)(puVar2 + 0x28);
    do {
      uVar16 = puVar12[-1];
      if ((uVar16 == uVar15 && *puVar12 == uVar8) ||
         (func_0x000107c605b8(uVar16,*puVar12,uVar15,uVar8,0), (uVar16 & 1) != 0)) break;
      puVar12 = puVar12 + 2;
      lVar14 = lVar14 + 1;
    } while (lVar11 != lVar14);
  }
  func_0x000107c6142c(uVar8);
  lVar11 = *(long *)(unaff_x20 + _DAT_112e7c538);
  if (lVar11 != 0) {
    func_0x000107c4cc0c();
    func_0x000107c61180();
    lVar14 = lVar11;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar14 != 0) {
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e7c5b0);
      *(undefined8 *)(unaff_x20 + _DAT_112e7c5b0) = *(undefined8 *)(unaff_x20 + _DAT_112e7c5a0);
      func_0x000107c61174();
      func_0x000107c61170(uVar13);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e7c5b8);
      *(undefined8 *)(unaff_x20 + _DAT_112e7c5b8) = *(undefined8 *)(unaff_x20 + _DAT_112e7c5a8);
      func_0x000107c61174();
      func_0x000107c61170(uVar13);
      puVar7 = puVar2;
      func_0x000107c5fc48(puVar2,PTR___sSSN_11034da80);
      func_0x000107c6142c(puVar2);
      func_0x000107c4ab64(lVar14);
      func_0x000107c615e8(lVar10);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(lVar14);
      func_0x000107c61170(puVar7);
      return;
    }
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c6142c(puVar2);
LAB_1022d4f38:
  func_0x000107c615e8(lVar10);
  return;
}



/* Entry: 1022d4f64; end: 1022d501b;  */

/* WARNING: Possible PIC construction at 0x0001022d4ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d4ff8) */

void FUN_1022d4f64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1022dc008(0,0x112e7c0a8,&PTR_PTR_1126c3c08);
  func_0x000107c5fc54(param_3,uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1022d501c; end: 1022d511b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1022d501c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e7c550);
  func_0x000107c5cb24(uVar2);
  func_0x000107c61180();
  puVar3 = &UNK_1104f22d8;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = PTR_PTR_1126aa3e0;
  func_0x000107c610f8(PTR_PTR_1126aa3e0);
  pcStack_40 = FUN_1022dbf80;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1022db6d8;
  puStack_48 = &UNK_1104f2fc0;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c(puVar3);
  func_0x000107c466e0(puVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar1 = puStack_38;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  return puVar4;
}



/* Entry: 1022d511c; end: 1022d519f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d511c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112e7c5e0) == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c5de64(*(long *)(param_1 + _DAT_112e7c5e0));
      func_0x000107c61180();
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1022d51a0; end: 1022d51a3;  */

void FUN_1022d51a0(void)

{
  return;
}



/* Entry: 1022d51a4; end: 1022d52bf;  */

void FUN_1022d51a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  pcVar1 = "buildDreamsTab(_:)";
  func_0x0001000c10c0("buildDreamsTab(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104f2990;
  func_0x000107c613fc(&UNK_1104f2990,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  uStack_60 = 0x1022dbcd4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_1104f29a8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_7);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1022d52c0; end: 1022d5693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d52c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_98 [24];
  
  puVar9 = auStack_98;
  func_0x000107c61428(param_5 + 0x10,puVar9,0,0);
  puVar1 = (undefined1 *)(param_5 + 0x10);
  func_0x000107c61618();
  lVar12 = _DAT_112e7c5e0;
  if (puVar1 == (undefined1 *)0x0) {
    return;
  }
  puVar2 = *(undefined1 **)(puVar1 + _DAT_112e7c5e0);
  if (puVar2 == (undefined1 *)0x0) goto LAB_1022d5668;
  func_0x000107c5de64();
  func_0x000107c61180();
  lVar10 = _DAT_112e7c4e8;
  puVar3 = puVar1 + _DAT_112e7c4e8;
  func_0x000107c61618();
  if (puVar3 == (undefined1 *)0x0) {
    func_0x000107c61170(puVar1);
    puVar1 = puVar2;
    goto LAB_1022d5668;
  }
  puVar4 = puVar2;
  func_0x000107c5c42c();
  func_0x000107c61180();
  if (puVar4 != (undefined1 *)0x0) {
    func_0x000107c61170();
    puVar4 = puVar2;
    func_0x000107c5c42c();
    func_0x000107c61180();
    puVar5 = puVar4;
    FUN_1022d014c();
    if (puVar4 == (undefined1 *)0x0) {
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(puVar3);
      puVar1 = puVar5;
      goto LAB_1022d5668;
    }
    FUN_1022dc008(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174();
    puVar6 = puVar4;
    puVar9 = puVar5;
    func_0x000107c60118();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    if (((ulong)puVar6 & 1) == 0) {
      func_0x000107c61170(puVar1);
      goto LAB_1022d5580;
    }
  }
  lVar7 = *(long *)(puVar1 + _DAT_112e7c508);
  func_0x000108c2bddc();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
    func_0x000107c5fadc(lVar13,puVar9);
    func_0x000107c6142c(puVar9);
  }
  puVar8 = PTR_PTR_1126aa328;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c5fadc(param_8,param_9);
  func_0x000107c5fadc(param_10,param_11);
  func_0x000107c45698();
  func_0x000107c61170(lVar13);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61170(puVar1);
LAB_1022d5580:
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(puVar3);
    return;
  }
  lVar7 = *(long *)(puVar1 + lVar12);
  if (lVar7 == 0) {
LAB_1022d564c:
    func_0x000107c61170(puVar1);
    func_0x000107c615e8(puVar3);
  }
  else {
    func_0x000107c5de64();
    func_0x000107c61180();
    puVar9 = puVar1 + lVar10;
    func_0x000107c61618();
    if (puVar9 != (undefined1 *)0x0) {
      lVar10 = lVar7;
      func_0x000107c5c42c();
      func_0x000107c61180();
      if (lVar10 == 0) {
        uVar14 = 0;
        lVar10 = lVar7;
        func_0x000107c526c0(0,lVar7);
        FUN_1022d014c();
        func_0x000107c49778();
        func_0x000107c61170(lVar10);
        puVar11 = PTR__OBJC_CLASS___UIScreen_1126aea10;
        func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
        func_0x000107c4c194();
        func_0x000107c61180();
        func_0x000107c3ec60();
        func_0x000107c61170(puVar11);
        func_0x000107c54b80(uVar14,param_2,param_3,param_4,lVar7);
        func_0x000107c615e8(puVar9);
      }
      else {
        func_0x000107c615e8(puVar9);
        func_0x000107c61170(lVar7);
        lVar7 = lVar10;
      }
    }
    func_0x000107c61170(lVar7);
    lVar12 = *(long *)(puVar1 + lVar12);
    if (lVar12 == 0) goto LAB_1022d564c;
    func_0x000107c615f0(lVar12);
    func_0x000107c4b708();
    func_0x000107c615e8(lVar12);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(puVar8);
  puVar1 = puVar2;
LAB_1022d5668:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1022d5694; end: 1022d58a7;  */

void FUN_1022d5694(undefined1 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "buildDreamsTab(_:)";
  func_0x0001000c10c0("buildDreamsTab(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104f2940;
  func_0x000107c613fc(&UNK_1104f2940,0x19,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  puVar2[0x18] = param_1;
  uStack_40 = 0x1022dbcc8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104f2958;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1022d58a8; end: 1022d591b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d58a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + _DAT_112e7c5e0);
    if (lVar1 != 0) {
      func_0x000107c615f0(lVar1);
      func_0x000107c504e8();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1022d591c; end: 1022d5933;  */

undefined8 FUN_1022d591c(void)

{
  return 0;
}



/* Entry: 1022d5934; end: 1022d5a27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1022d5934(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c518);
  func_0x000107c43d50();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x000107c441fc(lVar2);
    func_0x000107c61180();
    pcStack_40 = FUN_1022d7374;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    pcStack_50 = FUN_1022d7574;
    puStack_48 = &UNK_1104f2f20;
    func_0x000107c60bc4(&puStack_60);
    lVar1 = lVar3;
    func_0x000107c3feb8(lVar3,param_2,ppuVar4);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar3);
  }
  return lVar1;
}



/* Entry: 1022d5a28; end: 1022d5b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d5a28(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e7c520) + _DAT_113042550);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c3df48();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    lVar3 = lVar1;
    func_0x000107c5dbec(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
    puVar4 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_1104f29e0;
    func_0x000107c613fc(&UNK_1104f29e0,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = param_1;
    uStack_50 = 0x1022dbce8;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x1022dc254;
    puStack_58 = &UNK_1104f29f8;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar4);
    func_0x000107c5dc64(lVar3);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1022d5b98; end: 1022d5c9f;  */

undefined8
FUN_1022d5b98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_b0;
  func_0x000107c614e8();
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1104f2ed0;
  ppuVar2 = &puStack_80;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000107c60bc4(ppuVar2);
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_1022db670;
  puStack_98 = &UNK_1104f2ef8;
  uStack_90 = param_4;
  uStack_88 = param_5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c4859c(unaff_x20);
  func_0x000107c61170(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(uStack_58);
  return unaff_x20;
}



/* Entry: 1022d5ca0; end: 1022d5e2b;  */

void FUN_1022d5ca0(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar6 = *param_2;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010101cd8c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d5e2c);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      puVar5 = puStack_68;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d5e10);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar8;
        func_0x00010101b920(uVar8,uVar6);
      }
      uStack_78 = uVar2;
      FUN_1022d5e2c(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar2);
      uVar3 = uStack_70;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x00010101cd8c(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puStack_68 + uVar2 * 8 + 0x20) = uVar3;
      puVar5 = puStack_68;
    } while (uVar7 != uVar8);
  }
  uVar3 = 0;
  FUN_1022dc008(0,0x112d55188,&PTR_PTR_1126a6188);
  puVar4 = puVar5;
  func_0x000107c5fc48(puVar5,uVar3);
  func_0x000107c6142c(puVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1022d5e2c; end: 1022d601f;  */

void FUN_1022d5e2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR__swift_isaMask_11034f488;
  puVar6 = (ulong *)*param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x78))();
  puVar7 = param_2;
  lVar4 = param_3;
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xa8))();
  lVar5 = lVar4;
  if (lVar4 == 0) {
    (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
    puVar1 = (undefined8 *)0x0;
    if (lVar4 != 0) {
      puVar1 = puVar7;
    }
    lVar5 = -0x2000000000000000;
    puVar7 = puVar1;
    if (lVar4 != 0) {
      lVar5 = lVar4;
    }
  }
  puVar3 = PTR_PTR_1126a6188;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  lVar4 = lVar5;
  func_0x000107c5fadc(puVar7);
  func_0x000107c6142c(lVar5);
  func_0x000107c491fc();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c5a42c(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xc0))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c52cc4(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xd8))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c52d30(puVar3);
  func_0x000107c61170(puVar7);
  *param_1 = puVar3;
  return;
}



/* Entry: 1022d6020; end: 1022d62eb;  */

void FUN_1022d6020(undefined8 *param_1,long *param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  code *pcVar10;
  
  puVar4 = PTR__swift_isaMask_11034f488;
  puVar2 = (ulong *)*param_2;
  if (puVar2 == (ulong *)0x0) {
    FUN_1022dc008(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
  }
  else {
    pcVar10 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x78);
    func_0x000107c61174();
    puVar3 = puVar2;
    (*pcVar10)();
    puVar9 = puVar3;
    lVar7 = param_3;
    (**(code **)((*(ulong *)puVar4 & *puVar2) + 0xa8))();
    lVar8 = lVar7;
    if (lVar7 == 0) {
      (**(code **)((*(ulong *)puVar4 & *puVar2) + 0x90))();
      puVar1 = (ulong *)0x0;
      if (lVar7 != 0) {
        puVar1 = puVar9;
      }
      lVar8 = -0x2000000000000000;
      puVar9 = puVar1;
      if (lVar7 != 0) {
        lVar8 = lVar7;
      }
    }
    puVar5 = PTR_PTR_1126a6188;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar3,param_3);
    func_0x000107c6142c(param_3);
    lVar7 = lVar8;
    func_0x000107c5fadc(puVar9);
    func_0x000107c6142c(lVar8);
    func_0x000107c491fc();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar9);
    (**(code **)((*(ulong *)puVar4 & *puVar2) + 0x90))();
    if (lVar7 == 0) {
      puVar9 = (ulong *)0x0;
    }
    else {
      lVar8 = lVar7;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar7);
      lVar7 = lVar8;
    }
    func_0x000107c5a42c(puVar5);
    func_0x000107c61170(puVar9);
    (**(code **)((*(ulong *)puVar4 & *puVar2) + 0xc0))();
    if (lVar7 == 0) {
      puVar9 = (ulong *)0x0;
    }
    else {
      lVar8 = lVar7;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar7);
      lVar7 = lVar8;
    }
    func_0x000107c52cc4(puVar5);
    func_0x000107c61170(puVar9);
    (**(code **)((*(ulong *)puVar4 & *puVar2) + 0xd8))();
    if (lVar7 == 0) {
      puVar9 = (ulong *)0x0;
    }
    else {
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c52d30(puVar5);
    func_0x000107c61170(puVar9);
    puVar4 = (undefined *)0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    uVar6 = 0;
    FUN_1022dc008(0,0x112d55188,&PTR_PTR_1126a6188);
    *(undefined8 *)(puVar4 + 0x38) = uVar6;
    *(undefined **)(puVar4 + 0x20) = puVar5;
    FUN_1022dc008(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174(puVar5);
    func_0x000107c600f0();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 1022d62ec; end: 1022d648b;  */

/* WARNING: Possible PIC construction at 0x0001022d6330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d635c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d6390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d63bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d63f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d63c0) */
/* WARNING: Removing unreachable block (ram,0x0001022d6394) */
/* WARNING: Removing unreachable block (ram,0x0001022d63c4) */
/* WARNING: Removing unreachable block (ram,0x0001022d63cc) */
/* WARNING: Removing unreachable block (ram,0x0001022d63fc) */
/* WARNING: Removing unreachable block (ram,0x0001022d63e0) */
/* WARNING: Removing unreachable block (ram,0x0001022d63a8) */
/* WARNING: Removing unreachable block (ram,0x0001022d6360) */
/* WARNING: Removing unreachable block (ram,0x0001022d6334) */
/* WARNING: Removing unreachable block (ram,0x0001022d6364) */
/* WARNING: Removing unreachable block (ram,0x0001022d636c) */
/* WARNING: Removing unreachable block (ram,0x0001022d6348) */
/* WARNING: Removing unreachable block (ram,0x0001022d63f8) */
/* WARNING: Removing unreachable block (ram,0x0001022d6404) */

void FUN_1022d62ec(undefined8 param_1)

{
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022d648c; end: 1022d65ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d648c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(param_7 + _DAT_112fc2100);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1104f2b60;
    ppuVar4 = &puStack_a0;
    uStack_80 = param_3;
    uStack_78 = param_4;
    func_0x000107c60bc4(ppuVar4);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(uVar2);
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1104f2b88;
    ppuVar5 = &puStack_a0;
    uStack_80 = param_5;
    uStack_78 = param_6;
    func_0x000107c60bc4(ppuVar5);
    uVar2 = uStack_78;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(uVar2);
    func_0x000107c4969c(lVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1022d65f0; end: 1022d66d7;  */

/* WARNING: Possible PIC construction at 0x0001022d66a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d66b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d66ac) */
/* WARNING: Removing unreachable block (ram,0x0001022d66bc) */

void FUN_1022d65f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c60bc4();
  puVar3 = &UNK_1104f2b20;
  func_0x000107c613fc(&UNK_1104f2b20,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  func_0x000107c60bc4();
  puVar4 = &UNK_1104f2b48;
  func_0x000107c613fc(&UNK_1104f2b48,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar5,0x1022dbd08,puVar3,0x1022dc228,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1022d66d8; end: 1022d67a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d66d8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e7c530);
    func_0x000107c61174(uVar1);
    func_0x000107c4a564();
    FUN_1022d72d8();
    puVar2 = PTR_PTR_1126aa348;
    func_0x000107c610f8(PTR_PTR_1126aa348);
    func_0x000107c46f98();
    func_0x000107c4d664(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1022d67a8; end: 1022d680f;  */

void FUN_1022d67a8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1022d91f0(param_1,0,0,0);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1022d6810; end: 1022d6a47;  */

/* WARNING: Removing unreachable block (ram,0x0001022d92b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d6810(int param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 in_stack_ffffffffffffffa8;
  
  if ((param_1 == 3) && (param_3 != 0)) {
    uVar2 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar2 = param_3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      if ((*(byte *)(unaff_x20 + _DAT_112e7c6a0) & 1) == 0) {
        *(undefined1 *)(unaff_x20 + _DAT_112e7c6a0) = 1;
        lVar12 = *(long *)(unaff_x20 + _DAT_112e7c698);
        uVar11 = *(undefined8 *)(lVar12 + _DAT_113036468);
        func_0x000107c61434(param_3);
        func_0x000107c6157c(uVar11);
        func_0x0001000d224c(&puStack_88);
        func_0x000107c61574(uVar11);
        puVar1 = puStack_88;
        uVar11 = *(undefined8 *)(lVar12 + _DAT_113036458);
        func_0x000107c6157c(uVar11);
        func_0x0001000d224c(&stack0xffffffffffffffa8);
        func_0x000107c61574(uVar11);
        uVar2 = param_2;
        func_0x000107c5fadc(param_2,param_3);
        uVar11 = in_stack_ffffffffffffffa8;
        func_0x000107c4b290(in_stack_ffffffffffffffa8);
        func_0x000107c61180();
        func_0x000107c615e8(in_stack_ffffffffffffffa8);
        func_0x000107c61170(uVar2);
        puVar3 = &UNK_1104f22d8;
        func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
        func_0x000107c61614(puVar3 + 0x10);
        puVar4 = &UNK_1104f2e90;
        func_0x000107c613fc(&UNK_1104f2e90,0x38,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(undefined **)(puVar4 + 0x18) = puStack_88;
        *(undefined4 *)(puVar4 + 0x20) = 3;
        *(ulong *)(puVar4 + 0x28) = param_2;
        *(ulong *)(puVar4 + 0x30) = param_3;
        uStack_68 = 0x1022dbf48;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1010186a8;
        puStack_70 = &UNK_1104f2ea8;
        ppuVar5 = &puStack_88;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c615f0(puVar1);
        func_0x000107c61574(puVar4);
        pcVar6 = "openPlusSubscriptionPage(upsellType:lensId:)";
        func_0x0001000c10c0("openPlusSubscriptionPage(upsellType:lensId:)");
        func_0x000107c61180();
        func_0x000107c5dc64(uVar11);
        func_0x000107c615e8(pcVar6);
        func_0x000107c615e8(puVar1);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(uVar11);
      }
      return;
    }
  }
  uVar11 = 0;
  uStack_68 = 0;
  lVar7 = *(long *)(unaff_x20 + _DAT_112e7c548);
  func_0x000107c42328();
  func_0x000107c61180();
  lVar12 = lVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar12 != 0) {
    lVar7 = lVar12;
    func_0x000107c40fec();
    func_0x000107c61180();
    if (lVar7 != 0) {
      lVar13 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(lVar12);
      goto joined_r0x0001022d9360;
    }
    func_0x000107c615e8(lVar12);
  }
  lVar13 = 0;
  uVar11 = 0;
joined_r0x0001022d9360:
  if (param_1 == 3) {
    func_0x00010439a550(0);
    uVar8 = 1;
    func_0x0001043998c4(1);
    uVar15 = 0xd3;
    uVar14 = 0x25;
  }
  else {
    uVar15 = 0x1e;
    if (param_1 == 0) {
      uVar15 = 0x20;
    }
    uVar14 = 0x1f;
    if (param_1 != 1) {
      uVar14 = uVar15;
    }
    uVar15 = 0xa7;
    uVar8 = 0;
  }
  uVar9 = 0;
  func_0x00010439c014(0);
  func_0x000107c610f8();
  func_0x000107c61174(0);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(0);
  uVar10 = 0xae;
  func_0x00010439b9d8(0xae,lVar13,uVar11,uVar15,uStack_68,0,uVar14,0);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112e7c640);
  func_0x000107c3eda8(uVar15);
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112e7c638);
  func_0x000107c61174(uVar14);
  func_0x000107c42c1c();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar11);
  return;
}



/* Entry: 1022d6a48; end: 1022d6abb;  */

void FUN_1022d6a48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1022d6810(3,param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1022d6abc; end: 1022d6bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d6abc(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112e7c608);
    func_0x000107c6157c(lVar2);
    func_0x000107c61170(param_1);
    if (SCARRY8(*(long *)(lVar2 + 0x30),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d6b3c);
      (*pcVar1)();
    }
    func_0x0001022ce204(*(long *)(lVar2 + 0x30) + 1);
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 1022d6bbc; end: 1022d6c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d6bbc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + _DAT_112e7c518);
    func_0x000107c43d50();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = lVar2;
      func_0x000107c49e78(lVar2);
      func_0x000107c615e8(lVar2);
    }
    uVar3 = *(undefined8 *)(param_2 + _DAT_112e7c528);
    func_0x000107c5fca0(lVar1);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1022d6c94; end: 1022d6cff;  */

void FUN_1022d6c94(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = auStack_38;
  func_0x000107c61428(param_2 + 0x10,puVar1,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5faec(param_1);
    FUN_1022d6d00();
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 1022d6d00; end: 1022d6e6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d6d00(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112e7c690);
  lVar2 = plVar1[1];
  *plVar1 = param_1;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  func_0x000107c61434(param_2);
  puVar3 = &DAT_112e7c580;
  FUN_1022d3784(&DAT_112e7c580);
  func_0x000107c42194();
  func_0x000107c61170(puVar3);
  func_0x000107c5fb5c(param_1,param_2);
  if (0 < param_1) {
    func_0x0001000d224c(&uStack_38);
    uVar4 = uStack_38;
    func_0x000107c42ad0(uStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(uStack_38);
    puVar3 = &UNK_1104f2bc0;
    func_0x000107c613fc(&UNK_1104f2bc0,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    pcStack_48 = FUN_1022dbd14;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    uStack_58 = 0x1022dc234;
    puStack_50 = &UNK_1104f2bd8;
    ppuVar5 = &puStack_68;
    puStack_40 = puVar3;
    func_0x000107c60bc4(ppuVar5);
    puVar3 = puStack_40;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    uVar6 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c3e924(uVar6);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1022d6e70; end: 1022d72d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d6e70(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong *puVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar10 = _DAT_113074d10;
  lVar13 = *(long *)(unaff_x20 + _DAT_112e7c4f0);
  func_0x000107c61428(lVar13 + _DAT_113074d10,auStack_78,0,0);
  lVar13 = lVar13 + lVar10;
  func_0x000107c61618();
  if (lVar13 != 0) {
    lVar10 = ((undefined8 *)(param_1 + _DAT_112ff5fa0))[1];
    if (lVar10 == 0) {
      func_0x000107c615e8(lVar13);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + _DAT_112ff5fa0);
      uVar18 = uVar4;
      func_0x000107c5fadc();
      lVar5 = lVar13;
      func_0x000107c43d64();
      func_0x000107c61180();
      func_0x000107c61170(uVar18);
      puVar6 = (ulong *)0x0;
      func_0x000103bf0fb4();
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar3 = PTR__swift_isaMask_11034f488;
      uVar18 = 1;
      if (*(char *)(lVar5 + _DAT_113074dd0) != '\0') {
        uVar18 = 2;
      }
      pcVar11 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0xf8);
      (*pcVar11)(uVar18,0);
      pcVar15 = *(code **)((*(ulong *)puVar3 & *puVar6) + 0xe0);
      (*pcVar15)(0,0);
      pcVar12 = *(code **)((*(ulong *)puVar3 & *puVar6) + 200);
      (*pcVar12)(*(undefined8 *)(lVar5 + _DAT_113074de0),0);
      lVar14 = ((undefined8 *)(unaff_x20 + _DAT_112e7c690))[1];
      if (lVar14 != 0) {
        uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112e7c690);
        pcVar21 = *(code **)((*(ulong *)puVar3 & *puVar6) + 0x110);
        func_0x000107c61434(lVar14);
        (*pcVar21)(uVar18,lVar14);
      }
      lVar14 = ((undefined8 *)(lVar5 + _DAT_113074dd8))[1];
      if (lVar14 != 0) {
        uVar18 = *(undefined8 *)(lVar5 + _DAT_113074dd8);
        pcVar21 = *(code **)((*(ulong *)puVar3 & *puVar6) + 0x128);
        func_0x000107c61434(lVar14);
        (*pcVar21)(uVar18,lVar14);
      }
      puVar19 = *(ulong **)(param_1 + _DAT_112ff5fc0);
      if (puVar19 != (ulong *)0x0) {
        lVar14 = ((undefined8 *)((long)puVar19 + _DAT_112ff6020))[1];
        if (lVar14 == 0) {
          func_0x000107c61174(puVar19);
        }
        else {
          uVar18 = *(undefined8 *)((long)puVar19 + _DAT_112ff6020);
          pcVar21 = *(code **)((*(ulong *)puVar3 & *puVar6) + 0x128);
          func_0x000107c61434(lVar14);
          func_0x000107c61174(puVar19);
          (*pcVar21)(uVar18,lVar14);
        }
        if (*(char *)((undefined8 *)((long)puVar19 + _DAT_112ff6008) + 1) != '\x01') {
          (*pcVar15)(*(undefined8 *)((long)puVar19 + _DAT_112ff6008));
        }
        bVar2 = *(byte *)((undefined8 *)((long)puVar19 + _DAT_112ff6010) + 1);
        uVar9 = (uint)bVar2;
        if (bVar2 != 1) {
          uVar9 = (uint)bVar2;
          (*pcVar11)(*(undefined8 *)((long)puVar19 + _DAT_112ff6010));
        }
        (**(code **)((*(ulong *)puVar3 & *puVar19) + 0x90))();
        if ((uVar9 & 0xff) != 1) {
          (*pcVar12)();
        }
        lVar14 = ((undefined8 *)((long)puVar19 + _DAT_112ff6028))[1];
        if (lVar14 != 0) {
          uVar18 = *(undefined8 *)((long)puVar19 + _DAT_112ff6028);
          pcVar11 = *(code **)((*(ulong *)puVar3 & *puVar6) + 0x140);
          func_0x000107c61434(lVar14);
          (*pcVar11)(uVar18,lVar14);
        }
        func_0x000107c61170(puVar19);
      }
      (**(code **)((*(ulong *)puVar3 & *puVar6) + 0x98))(0xd3,0);
      uVar20 = *(undefined8 *)(param_1 + _DAT_112ff5f98);
      uVar18 = *(undefined8 *)(param_1 + _DAT_112ff5fa8);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112ff5fa8))[1];
      uVar16 = *(undefined8 *)(param_1 + _DAT_112ff5fb0);
      uVar17 = *(undefined8 *)(param_1 + _DAT_112ff5fb8);
      pcVar11 = *(code **)((*(ulong *)puVar3 & *puVar6) + 0x150);
      func_0x000107c61434(uVar17);
      func_0x000107c61434(lVar10);
      func_0x000107c61434(uVar1);
      uVar7 = uVar16;
      func_0x000107c61434(uVar16);
      (*pcVar11)();
      uVar8 = 0;
      func_0x000103beff0c(0);
      func_0x000107c610f8();
      func_0x000103befe8c(uVar8,uVar20,uVar4,lVar10,uVar18,uVar1,uVar16,uVar17,uVar7);
      func_0x0001000d224c(&uStack_80);
      func_0x000107c4bfc4(uStack_80);
      func_0x000107c615e8(uStack_80);
      func_0x000107c615e8(lVar13);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar20);
    }
  }
  return;
}



/* Entry: 1022d72d8; end: 1022d7373;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1022d72d8(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112e7c600);
  func_0x000107c5c360();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 == 0) {
    uVar1 = 1;
    uVar2 = 0;
  }
  else {
    uVar1 = uVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    uVar3 = uVar1;
    func_0x000107c5c370();
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
    uVar1 = (ulong)(4 < uVar3);
    uVar2 = 0;
    if (uVar3 < 5) {
      uVar2 = uVar3;
    }
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1022d7374; end: 1022d7503;  */

void FUN_1022d7374(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  if (lRam0000000112e7c708 != -1) {
    func_0x000107c61568(0x112e7c708,FUN_1022d3734);
  }
  uVar1 = uRam00000001138046f8;
  uStack_58 = uRam00000001138046f8;
  puVar4 = &UNK_1104f2f58;
  func_0x000107c613fc(&UNK_1104f2f58,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_58;
  puVar5 = &UNK_1104f2f80;
  func_0x000107c613fc(&UNK_1104f2f80,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1022dbf58;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_68 = FUN_1022dbf60;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x42000000;
  puStack_78 = &UNK_10139b30c;
  puStack_70 = &UNK_1104f2f98;
  ppuVar6 = &puStack_88;
  puStack_60 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar2 = puStack_60;
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar2);
  func_0x000107c4c754(param_2);
  func_0x000107c60bd0(ppuVar6);
  uVar1 = uStack_58;
  uVar7 = 0;
  FUN_1022dc008(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  param_1[3] = uVar7;
  *param_1 = uVar1;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x7d,0x26a,0x21,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1022d7504);
  (*pcVar3)();
}



/* Entry: 1022d7504; end: 1022d7573;  */

/* WARNING: Possible PIC construction at 0x0001022d753c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d7540) */

void FUN_1022d7504(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c44fdc();
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1022d7574; end: 1022d7667;  */

void FUN_1022d7574(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001022dbf24(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x0001022dbf04(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1022d7668; end: 1022d7773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d7668(int param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = 0x14;
  if (param_1 != 1) {
    uVar1 = 0;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2 + _DAT_112e7c4e8;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar2 + _DAT_112e7c400) + _DAT_113074ca8);
      func_0x000103f2e0d4(0);
      func_0x000107c610f8();
      func_0x000107c615f4(uVar3,2);
      func_0x000107c615f0(lVar2);
      func_0x000103f2de64(uVar3,uVar3,lVar2,uVar1,0);
      *(undefined8 *)(lVar2 + _DAT_112e7c438) = uVar1;
      func_0x000107c42c1c(*(undefined8 *)(lVar2 + _DAT_112e7c428));
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(uVar3);
    }
  }
  return;
}



/* Entry: 1022d7774; end: 1022d7b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d7774(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 in_stack_ffffffffffffff50;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  uVar1 = param_1;
  func_0x000107c4adb4(param_1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41808();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar3 = 0;
  FUN_1022cd9cc(0);
  uVar1 = uVar2;
  func_0x000107c5fc54(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  puVar4 = PTR_PTR_1133566d0;
  func_0x0001022cc974(PTR_PTR_1133566d0,uVar1);
  func_0x000107c6142c(uVar1);
  uVar1 = param_1;
  func_0x000107c4adb4();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41808();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5fc54(uVar2,uVar3);
  func_0x000107c61170(uVar2);
  puVar5 = PTR_PTR_1133566d8;
  uVar8 = uVar1;
  func_0x0001022cc974(PTR_PTR_1133566d8);
  func_0x000107c6142c(uVar1);
  uVar1 = param_1;
  func_0x000107c43e24();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar9 = uVar8;
  func_0x000107c61170(uVar1);
  uVar1 = param_1;
  func_0x000107c4adb4(param_1);
  func_0x000107c61180();
  uVar6 = uVar1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar6;
  func_0x000107c5faec(uVar6);
  uVar11 = uVar9;
  func_0x000107c61170(uVar6);
  uVar6 = param_1;
  func_0x000107c439a0();
  func_0x000107c61180();
  if (uVar6 == 0) {
    uVar14 = 0;
    uVar11 = 0;
  }
  else {
    uVar14 = uVar6;
    func_0x000107c5faec();
    func_0x000107c61170(uVar6);
  }
  func_0x000107c4adb4();
  func_0x000107c61180();
  uVar13 = *(ulong *)(param_2 + _DAT_112e7c508);
  uVar6 = param_1;
  func_0x0001022dcde8();
  if ((uVar6 & 0xff) == 0) {
    func_0x000108c2beac();
    if ((uVar13 & 1) != 0) {
      uVar6 = param_1;
      func_0x000107c41808(param_1);
      func_0x000107c61180();
      uVar13 = uVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(uVar6);
      puVar7 = PTR_PTR_1133566e0;
      func_0x0001022cc974(PTR_PTR_1133566e0,uVar13);
      uVar12 = SUB81(puVar7,0);
      func_0x000107c6142c(uVar13);
      goto LAB_1022d79d4;
    }
  }
  else if (((uint)uVar6 & 0xff) != 1) {
    uVar12 = 1;
    goto LAB_1022d79d4;
  }
  uVar12 = 0;
LAB_1022d79d4:
  func_0x000107c61170(param_1);
  uVar3 = 0;
  func_0x000103a6cbb8(0);
  func_0x000107c610f8();
  func_0x000103a6c948(uVar3,uVar2,uVar8,uVar1,uVar9,(uint)puVar4 & 1,(uint)puVar5 & 1,uVar14,uVar11,
                      CONCAT71((int7)((ulong)in_stack_ffffffffffffff50 >> 8),uVar12) &
                      0xffffffffffffff01);
  puVar4 = &UNK_1104f22d8;
  func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_2);
  puVar5 = &UNK_1104f2df0;
  func_0x000107c613fc(&UNK_1104f2df0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(ulong *)(puVar5 + 0x18) = uVar2;
  func_0x000107c61174(uVar2);
  uVar3 = 0x20;
  uVar10 = 0;
  func_0x0001001ca524(0x20,0,0x48,4,0,0,&UNK_10da87030,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar3);
  func_0x000107c61174(uVar2);
  uVar1 = uVar2;
  func_0x000107c417f0();
  func_0x000107c61180();
  uVar6 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c5fb78(uVar6,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c5fb78(0x5d,0xe100000000000000);
  FUN_1022d7b84(0x7370616e5349415b,0xea00000000005b5d,0);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(0xea00000000005b5d);
  return;
}



/* Entry: 1022d7b84; end: 1022d7fd7;  */

/* WARNING: Possible PIC construction at 0x0001022d7cdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d7cec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d7ce0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d7b84(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c5d0);
  func_0x000107c43d48();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c3da84();
    if ((int)lVar1 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112e7c678);
      func_0x000107c4d80c();
      func_0x000107c61180();
      lVar1 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar1 != 0) {
        pcVar4 = "showDebugMessage(_:isDestructive:)";
        func_0x0001000c10c0("showDebugMessage(_:isDestructive:)");
        func_0x000107c61180();
        puVar5 = &UNK_1104f2e18;
        func_0x000107c613fc(&UNK_1104f2e18,0x30,7);
        puVar5[0x10] = param_3 & 1;
        *(undefined8 *)(puVar5 + 0x18) = param_1;
        *(undefined8 *)(puVar5 + 0x20) = param_2;
        *(long *)(puVar5 + 0x28) = lVar1;
        pcStack_60 = FUN_1022dbecc;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_1104f2e30;
        puStack_58 = puVar5;
        func_0x000107c60bc4(&puStack_80);
        puVar5 = puStack_58;
        func_0x000107c61434(param_2);
        func_0x000107c615f0(lVar1);
        func_0x000107c61574(puVar5);
        func_0x000107c4e524(pcVar4);
        func_0x000107c60bd0(ppuVar6);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1022d7fd8; end: 1022d8177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d7fd8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  ulong param_5,ulong *param_6)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  
  if (param_1 == 0) {
    puStack_68 = param_4;
    func_0x000100b60084(&puStack_68);
  }
  else {
    func_0x000107c61174();
    func_0x000107c4a4c0();
    func_0x000107c49f9c();
    func_0x000107c44098();
    func_0x000107c61180();
    puVar3 = PTR__swift_isaMask_11034f488;
    puVar2 = param_6;
    if ((param_5 & 1) != 0) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_6) + 0x70))();
    }
    iVar1 = (int)puVar2;
    (**(code **)((*(ulong *)puVar3 & *param_6) + 0x70))();
    (**(code **)((*(ulong *)puVar3 & *param_6) + 0x78))();
    puVar3 = PTR_PTR_1126aa3d0;
    func_0x000107c610f8();
    func_0x000107c46c7c((double)iVar1);
    lVar4 = ((undefined8 *)((long)param_6 + _DAT_113036378))[1];
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)((long)param_6 + _DAT_113036378);
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(uVar5,lVar4);
      func_0x000107c6142c(lVar4);
    }
    func_0x000107c54bbc(puVar3);
    func_0x000107c61170(uVar5);
    puStack_68 = puVar3;
    func_0x000100b60084(&puStack_68);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1022d8178; end: 1022d8263;  */

void FUN_1022d8178(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1022d8264; end: 1022d82b7;  */

void FUN_1022d8264(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1022d82b8();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1022d82b8; end: 1022d850b;  */

/* WARNING: Possible PIC construction at 0x0001022d84ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d84cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d84b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d82b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c678);
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    return;
  }
  puVar3 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c61168(PTR_PTR_1126ae558);
    func_0x000107c451b0();
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b0ae0;
    func_0x000107c61168();
    puVar3 = puVar4;
    FUN_1022dc868();
    uVar5 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x0001022dc934();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
    uVar5 = 0xd000000000000026;
    func_0x000107c5fadc(0xd000000000000026,0x800000010f0817d0);
    func_0x000107c40b0c();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar5);
    pcVar6 = "postGenerationFailedNotification()";
    func_0x0001000c10c0("postGenerationFailedNotification()");
    func_0x000107c61180();
    puVar3 = &UNK_1104f2d50;
    func_0x000107c613fc(&UNK_1104f2d50,0x20,7);
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    uStack_60 = 0x1022dbd8c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1104f2d68;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar3 = puStack_58;
    func_0x000107c615f0(lVar2);
    func_0x000107c61174(puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(pcVar6);
    func_0x000107c60bd0(ppuVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1022d850c; end: 1022d8577;  */

void FUN_1022d850c(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1022d8578; end: 1022d87fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d8578(long param_1)

{
  undefined1 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar12 = _DAT_113074cb8;
  ppuVar9 = &puStack_a0;
  lVar11 = *(long *)(param_1 + _DAT_113074d90);
  if ((lVar11 != 0) && (*(long *)(lVar11 + 0x10) != 0)) {
    lVar10 = *(long *)(unaff_x20 + _DAT_112e7c4f0);
    func_0x000107c61428(lVar10 + _DAT_113074cb8,auStack_68,0,0);
    pcVar2 = (char *)(lVar10 + lVar12);
    func_0x000107c61618();
    if (pcVar2 != (char *)0x0) {
      puStack_70 = PTR_DAT_11269cb90;
      pcVar3 = pcVar2;
      func_0x000107c61494();
      if (pcVar3 != (char *)0x0) {
        pcVar4 = pcVar2;
        func_0x000107c614f0();
        uVar5 = 0;
        FUN_1022dc008(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
        func_0x000107c61488(pcVar4,uVar5);
        if ((pcVar4 != (char *)0x0) && (lVar12 = *(long *)(unaff_x20 + _DAT_112e7c538), lVar12 != 0)
           ) {
          func_0x000107c61434(lVar11);
          func_0x000107c4cc0c();
          func_0x000107c61180();
          lVar10 = lVar12;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
          if (lVar10 == 0) {
            func_0x000107c615e8(pcVar2);
            func_0x000107c6142c(lVar11);
            return;
          }
          lVar6 = *(long *)(unaff_x20 + _DAT_112e7c5d0);
          func_0x000107c43d48();
          func_0x000107c61180();
          lVar12 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar12 == 0) {
            uVar1 = 0;
          }
          else {
            lVar6 = lVar12;
            func_0x000107c3da88();
            uVar1 = (undefined1)lVar6;
            func_0x000107c615e8(lVar12);
          }
          pcVar4 = "openNotificationOpera(_:)";
          func_0x0001000c10c0("openNotificationOpera(_:)");
          func_0x000107c61180();
          puVar7 = &UNK_1104f22d8;
          func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
          func_0x000107c61614(puVar7 + 0x10);
          puVar8 = &UNK_1104f2d00;
          func_0x000107c613fc(&UNK_1104f2d00,0x31,7);
          *(long *)(puVar8 + 0x10) = lVar10;
          *(char **)(puVar8 + 0x18) = pcVar3;
          *(long *)(puVar8 + 0x20) = lVar11;
          *(undefined **)(puVar8 + 0x28) = puVar7;
          puVar8[0x30] = uVar1;
          pcStack_80 = FUN_1022dbd7c;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          puStack_90 = &UNK_1000f6b44;
          puStack_88 = &UNK_1104f2d18;
          puStack_78 = puVar8;
          func_0x000107c60bc4(&puStack_a0);
          puVar7 = puStack_78;
          func_0x000107c615f0(lVar10);
          func_0x000107c615f0(pcVar2);
          func_0x000107c61574(puVar7);
          func_0x000107c4e524(pcVar4);
          func_0x000107c60bd0(ppuVar9);
          func_0x000107c615e8(pcVar2);
          func_0x000107c615e8(lVar10);
          pcVar2 = pcVar4;
        }
      }
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}



/* Entry: 1022d87fc; end: 1022d8957;  */

/* WARNING: Possible PIC construction at 0x0001022d886c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d8870) */
/* WARNING: Removing unreachable block (ram,0x0001022d8898) */
/* WARNING: Removing unreachable block (ram,0x0001022d8874) */

void FUN_1022d87fc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  func_0x000107c5fadc(param_2,param_3);
  if ((param_1 & 1) == 0) {
    func_0x000107c40b14(puVar1);
  }
  else {
    func_0x000107c409d8();
  }
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1022d8958; end: 1022d896f;  */

void FUN_1022d8958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_2;
  *(undefined8 *)(unaff_x22 + 0x130) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1022d8970,0,0);
  return;
}



/* Entry: 1022d8970; end: 1022d8aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d8970(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x128);
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x90,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + _DAT_112e7c668);
    func_0x000107c61174();
    func_0x000107c61170(lVar3);
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x138) = lVar3;
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_1022d8aa4;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,1);
      uVar1 = 0x112e071e0;
      func_0x0001000285a8(0x112e071e0,&UNK_10d9db4a0);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_101bb6270;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1104f2e58;
      *(long *)(unaff_x22 + 0x70) = lVar2;
      func_0x000107c5c29c(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001022d8aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022d8aa4; end: 1022d8afb;  */

void FUN_1022d8aa4(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x140) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1022d8afc;
  }
  else {
    pcVar1 = FUN_1022d90bc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1022d8afc; end: 1022d90bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d8afc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  
  lVar12 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x138));
  lVar16 = _DAT_112fd9af8;
  bVar5 = *(byte *)(lVar12 + _DAT_112fd9af8);
  puVar1 = (undefined8 *)(lVar12 + _DAT_112fd9ae0);
  uVar11 = *puVar1;
  uVar3 = puVar1[1];
  puVar2 = (undefined8 *)(lVar12 + _DAT_112fd9ae8);
  uVar15 = *puVar2;
  uVar4 = puVar2[1];
  puVar7 = PTR_PTR_1126aa3d8;
  func_0x000107c610f8(PTR_PTR_1126aa3d8);
  func_0x000107c5fadc(uVar11,uVar3);
  func_0x000107c5fadc(uVar15,uVar4);
  func_0x000107c46b20(puVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar11);
  lVar13 = ((undefined8 *)(lVar12 + _DAT_112fd9af0))[1];
  if (lVar13 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar12 + _DAT_112fd9af0);
    func_0x000107c61434(lVar13);
    func_0x000107c5fadc(uVar11,lVar13);
    func_0x000107c6142c(lVar13);
  }
  func_0x000107c54bf8(puVar7);
  func_0x000107c61170(uVar11);
  if (1 < bVar5) {
    lVar13 = *(long *)(lVar12 + _DAT_112fd9b00);
    if (lVar13 == 0) {
      uVar15 = 0xed0000726f727265;
      uVar11 = 0x5f6e776f6e6b6e75;
    }
    else {
      func_0x000107c614cc(lVar13,unaff_x22 + 0x120,unaff_x22 + 0x108);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x118);
      func_0x000107c614b0(lVar13);
      func_0x000107c60640(uVar11,uVar15);
      func_0x000107c614ac(lVar13);
    }
    func_0x000107c5fadc(uVar11,uVar15);
    func_0x000107c6142c(uVar15);
    func_0x000107c54668(puVar7);
    func_0x000107c61170(uVar11);
  }
  lVar13 = *(long *)(unaff_x22 + 0x128);
  func_0x000107c61428(lVar13 + 0x10,(long *)(unaff_x22 + 0xa8),0,0);
  lVar13 = lVar13 + 0x10;
  func_0x000107c61618();
  if (lVar13 != 0) {
    lVar14 = *(long *)(unaff_x22 + 0x130);
    func_0x000107c602fc(0x1c);
    func_0x000107c6142c(0xe000000000000000);
    uVar11 = 0x5031;
    if (*(char *)(lVar14 + _DAT_112fd9aa0) != '\0') {
      uVar11 = 0x5032;
    }
    func_0x000107c5fb78(uVar11,0xe200000000000000);
    func_0x000107c6142c(0xe200000000000000);
    uVar11 = 0xe100000000000000;
    func_0x000107c5fb78(0x7c,0xe100000000000000);
    puVar8 = puVar7;
    func_0x000107c61174(puVar7);
    puVar9 = puVar8;
    func_0x000107c417f0();
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c5faec();
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c5fb78(puVar10,uVar11);
    func_0x000107c6142c(uVar11);
    func_0x000107c5fb78(0x746c757365725b5d,0xea0000000000203a);
    cVar6 = *(char *)(lVar12 + lVar16);
    if (cVar6 == '\0') {
      uVar15 = 0xe700000000000000;
      uVar11 = 0x73736563637573;
    }
    else if (cVar6 == '\x01') {
      uVar15 = 0xe700000000000000;
      uVar11 = 0x64656e6e616c70;
    }
    else {
      uVar15 = 0xe600000000000000;
      uVar11 = 0x64656c696166;
    }
    func_0x000107c5fb78(uVar11,uVar15);
    func_0x000107c6142c(uVar15);
    func_0x000107c5fb78(0x5d,0xe100000000000000);
    FUN_1022d7b84(0x7370616e5349415b,0xea00000000005b5d,0);
    func_0x000107c6142c(0xea00000000005b5d);
    func_0x000107c61170(lVar13);
  }
  lVar13 = *(long *)(unaff_x22 + 0x128);
  func_0x000107c61428(lVar13 + 0x10,unaff_x22 + 0xc0,0,0);
  lVar13 = lVar13 + 0x10;
  func_0x000107c61618();
  if (lVar13 != 0) {
    uVar11 = *(undefined8 *)(lVar13 + _DAT_112e7c670);
    func_0x000107c61174(uVar11);
    func_0x000107c61170(lVar13);
    func_0x000107c4d664(uVar11);
    func_0x000107c61170(uVar11);
  }
  cVar6 = *(char *)(lVar12 + lVar16);
  if (cVar6 == '\x02') {
    lVar16 = *(long *)(unaff_x22 + 0x128);
    func_0x000107c61428(lVar16 + 0x10,unaff_x22 + 0xd8,0,0);
    lVar16 = lVar16 + 0x10;
    func_0x000107c61618();
    if (lVar16 == 0) goto LAB_1022d904c;
    FUN_1022d82b8();
    func_0x000107c61170(puVar7);
    func_0x000107c61170(lVar12);
  }
  else if (cVar6 == '\0') {
    lVar16 = *(long *)(unaff_x22 + 0x128);
    uVar11 = *puVar2;
    uVar3 = puVar2[1];
    uVar15 = *puVar1;
    uVar4 = puVar1[1];
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    FUN_1022dc4e4(uVar11,uVar3,uVar15,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c6142c(uVar3);
    func_0x000107c61428(lVar16 + 0x10,unaff_x22 + 0xf0,0,0);
    lVar16 = lVar16 + 0x10;
    func_0x000107c61618();
    if (lVar16 != 0) {
      lVar13 = *(long *)(lVar16 + _DAT_112e7c5e8);
      if (lVar13 == 0) {
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(lVar12);
        goto LAB_1022d9090;
      }
      func_0x000107c61174();
      func_0x000107c61170(lVar16);
      lVar16 = lVar13;
      func_0x000107c4d7dc();
      func_0x000107c61180();
      func_0x000107c61170(lVar13);
      lVar13 = lVar16;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar16);
      if (lVar13 != 0) {
        func_0x000107c5c290(lVar13);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(lVar12);
        func_0x000107c615e8(lVar13);
        goto LAB_1022d9094;
      }
    }
    func_0x000107c61170(puVar7);
    func_0x000107c61170(uVar11);
    lVar16 = lVar12;
  }
  else {
LAB_1022d904c:
    func_0x000107c61170(puVar7);
    lVar16 = lVar12;
  }
LAB_1022d9090:
  func_0x000107c61170(lVar16);
LAB_1022d9094:
                    /* WARNING: Could not recover jumptable at 0x0001022d90b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022d90bc; end: 1022d91ef;  */

void FUN_1022d90bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  lVar2 = *(long *)(unaff_x22 + 0x128);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x50,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  if (lVar2 == 0) {
    func_0x000107c614ac(uVar3);
  }
  else {
    func_0x000107c602fc(0x14);
    func_0x000107c6142c(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
    func_0x000107c614b0(uVar3);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fb18(unaff_x22 + 0xa8,uVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    func_0x000107c5fb78(0x5d,0xe100000000000000);
    FUN_1022d7b84(0xd000000000000011,0x800000010f0818a0,1);
    func_0x000107c614ac(uVar3);
    func_0x000107c6142c(0x800000010f0818a0);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001022d91ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1022d91f0; end: 1022d94b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d91f0(int param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c548);
  uVar9 = param_2;
  func_0x000107c42328();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c40fec();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar10 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
      goto joined_r0x0001022d9360;
    }
    func_0x000107c615e8(lVar2);
  }
  lVar10 = 0;
  uVar9 = 0;
joined_r0x0001022d9360:
  if (param_1 == 3) {
    func_0x00010439a550(0);
    uVar3 = 1;
    func_0x0001043998c4(1);
    if (param_4 == (ulong *)0x0) {
      uVar5 = 0;
    }
    else {
      pcVar8 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_4) + 0x80);
      func_0x000107c61174();
      puVar4 = param_4;
      (*pcVar8)();
      uVar12 = *(undefined8 *)((long)param_4 + _DAT_113036378);
      uVar11 = ((undefined8 *)((long)param_4 + _DAT_113036378))[1];
      func_0x00010439c8f8(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar11);
      uVar5 = 0;
      func_0x00010439c2b8(0,0,0,0,0,(uint)puVar4 & 1,uVar12,uVar11,0,0,0,0);
      func_0x000107c61170(param_4);
    }
    uVar12 = 0xd3;
    uVar11 = 0x25;
  }
  else {
    uVar12 = 0x1e;
    if (param_1 == 0) {
      uVar12 = 0x20;
    }
    uVar11 = 0x1f;
    if (param_1 != 1) {
      uVar11 = uVar12;
    }
    uVar12 = 0xa7;
    uVar5 = 0;
    uVar3 = 0;
  }
  func_0x00010439c014(0);
  func_0x000107c610f8();
  uVar6 = uVar5;
  func_0x000107c61174(uVar5);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(param_3);
  uVar7 = 0xae;
  func_0x00010439b9d8(0xae,lVar10,uVar9,uVar12,param_2,param_3,uVar11,uVar5);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e7c640);
  func_0x000107c3eda8(uVar12);
  func_0x000107c61180();
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e7c638);
  func_0x000107c61174(uVar11);
  func_0x000107c42c1c();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar9);
  return;
}



/* Entry: 1022d94b4; end: 1022d9577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d94b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    *(undefined1 *)(param_3 + _DAT_112e7c6a0) = 0;
    if (param_1 == 0) {
      param_4 = 0;
    }
    else {
      func_0x000107c44098(param_4);
      func_0x000107c61180();
    }
    FUN_1022d91f0(param_5,param_6,param_7,param_4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1022d9578; end: 1022d9773;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d9578(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112e7c558;
  if (param_2 != 0) {
    puVar12 = auStack_90;
    func_0x000107c61428(param_2 + _DAT_112e7c558,puVar12,1,0);
    uVar5 = *(undefined8 *)(param_2 + lVar3);
    *(undefined1 **)(param_2 + lVar3) = param_1;
    func_0x000107c6142c(uVar5);
    puVar15 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar14 = *(undefined1 **)(puVar15 + 0x10);
    }
    else {
      puVar14 = puVar15;
      if ((undefined1 *)0x7fffffffffffffff < param_1) {
        puVar14 = param_1;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(param_1);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar14 != (undefined1 *)0x0) {
      puVar8 = (undefined1 *)0x0;
      do {
        while( true ) {
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(undefined1 **)(puVar15 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1022d9760);
              (*pcVar4)();
            }
            puVar6 = *(undefined1 **)(param_1 + (long)puVar8 * 8 + 0x20);
            func_0x000107c61174();
            puVar13 = puVar12;
          }
          else {
            puVar6 = puVar8;
            puVar13 = param_1;
            func_0x0001022cd0e8();
          }
          puVar1 = puVar8 + 1;
          if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1022d975c);
            (*pcVar4)();
          }
          puVar7 = puVar6;
          func_0x000107c3df48();
          func_0x000107c61180();
          if (puVar7 != (undefined1 *)0x0) break;
          func_0x000107c61170(puVar6);
          puVar12 = puVar13;
          puVar8 = puVar8 + 1;
          if (puVar1 == puVar14) goto LAB_1022d9720;
        }
        puVar8 = puVar7;
        func_0x000107c5faec();
        puVar12 = puVar13;
        func_0x000107c61170(puVar7);
        func_0x000107c61170(puVar6);
        puVar9 = puVar11;
        func_0x000107c61558();
        puVar10 = puVar11;
        if (((ulong)puVar9 & 1) == 0) {
          puVar12 = (undefined1 *)(*(long *)(puVar11 + 0x10) + 1);
          puVar10 = (undefined *)0x0;
          func_0x0001000d182c(0,puVar12,1,puVar11);
        }
        uVar2 = *(ulong *)(puVar10 + 0x10);
        puVar6 = (undefined1 *)(uVar2 + 1);
        puVar11 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          puVar12 = puVar6;
          func_0x0001000d182c(puVar11,puVar6,1,puVar10);
        }
        *(undefined1 **)(puVar11 + 0x10) = puVar6;
        *(undefined1 **)(puVar11 + uVar2 * 0x10 + 0x20) = puVar8;
        *(undefined1 **)(puVar11 + uVar2 * 0x10 + 0x28) = puVar13;
        puVar8 = puVar1;
      } while (puVar1 != puVar14);
    }
LAB_1022d9720:
    FUN_1022d9774(puVar11);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(puVar11);
  }
  return;
}



/* Entry: 1022d9774; end: 1022d98e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d9774(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e7c520) + _DAT_113042550);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x00010102c3b8(param_1);
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSSet_1126ae870);
    uVar3 = param_1;
    func_0x000107c5fc48(param_1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(param_1);
    func_0x000107c45788(puVar2);
    func_0x000107c61170(uVar3);
    lVar4 = lVar1;
    func_0x000107c5dbf0(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar2);
    puVar2 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uStack_50 = 0x1022dbf88;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_10122eb08;
    puStack_58 = &UNK_1104f2fe8;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c5dc64(lVar4);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1022d98e4; end: 1022d9a73;  */

void FUN_1022d98e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined1 auStack_98 [24];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  if (param_1 != 0) {
    puVar2 = &UNK_1104f2a30;
    func_0x000107c613fc(&UNK_1104f2a30,0x20,7);
    *(long *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x1022dbcf0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_100b61264;
    puStack_68 = &UNK_1104f2a48;
    ppuVar3 = &puStack_80;
    puStack_58 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61174();
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61428(param_3 + 0x10,auStack_98,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618(param_3);
    func_0x000107c61614(puVar2 + 0x10,param_3);
    func_0x000107c61170(param_3);
    puVar4 = &UNK_1104f2a80;
    func_0x000107c613fc(&UNK_1104f2a80,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    uStack_60 = 0x1022dbcf8;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    puStack_70 = (undefined *)0x1022dc244;
    puStack_68 = &UNK_1104f2a98;
    ppuVar5 = &puStack_80;
    puStack_58 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    puVar2 = puStack_58;
    func_0x000107c61174(param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c4c6bc(param_1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 1022d9a74; end: 1022d9c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d9a74(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  puVar3 = &uStack_50;
  puVar4 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar4,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c43e24();
    func_0x000107c61180();
    if (param_3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar4);
    }
    puVar1 = PTR_PTR_1126aa3c0;
    func_0x000107c610f8(PTR_PTR_1126aa3c0);
    func_0x000107c46b1c();
    func_0x000107c61170(param_3);
    FUN_1022dc008(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = 0xffffffffffffffff;
    func_0x000107c60110(0xffffffffffffffff);
    func_0x000107c57e84(puVar1);
    func_0x000107c61170(uVar2);
    uVar2 = 0x112e7c6f0;
    uStack_50 = param_1;
    func_0x0001000285a8(0x112e7c6f0,&UNK_10da87010);
    func_0x000107c5fb18(&uStack_50,uVar2);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar2);
    func_0x000107c54664(puVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c4d664(*(undefined8 *)(param_2 + _DAT_112e7c5c0));
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 1022d9c38; end: 1022d9daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d9c38(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112e7c520) + _DAT_113042550);
  lVar3 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x000107c43e24();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar3);
    }
    lVar3 = lVar1;
    func_0x000107c4f694(lVar1);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
    lVar1 = lVar3;
    func_0x000107c506c8(lVar3);
    func_0x000107c61180();
    puVar4 = &UNK_1104f2ad0;
    func_0x000107c613fc(&UNK_1104f2ad0,0x20,7);
    *(long *)(puVar4 + 0x10) = param_2;
    *(long *)(puVar4 + 0x18) = unaff_x20;
    uStack_50 = 0x1022dbd00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x1022dc258;
    puStack_58 = &UNK_1104f2ae8;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c61174(param_2);
    func_0x000107c61174();
    func_0x000107c61574(puVar4);
    func_0x000107c5dc64(lVar1);
    func_0x000107c615e8(lVar3);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1022d9db0; end: 1022d9f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d9db0(long param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar2 = param_2;
  func_0x000107c43e24();
  func_0x000107c61180();
  if (param_3 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  puVar1 = PTR_PTR_1126aa3c0;
  func_0x000107c610f8(PTR_PTR_1126aa3c0);
  func_0x000107c46b1c();
  func_0x000107c61170(param_3);
  if (param_2 != 0) {
    func_0x000107c614cc(param_2,auStack_58,auStack_70);
    func_0x000107c614b0(param_2);
    uVar3 = uStack_60;
    func_0x000107c60640(uStack_68,uStack_60);
    uVar4 = uStack_68;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar3);
    func_0x000107c54664(puVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c614ac(param_2);
  }
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_113042688);
    func_0x000107c61174(param_1);
    func_0x000107c5fe40(uVar4);
    func_0x000107c57e84(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c4d664(*(undefined8 *)(param_4 + _DAT_112e7c5c0));
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1022d9f08; end: 1022d9f7b;  */

void FUN_1022d9f08(long param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 != 0) {
      func_0x000107c61174(param_1);
      FUN_1022d9f7c();
      func_0x000107c61170(param_3);
      param_3 = param_1;
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1022d9f7c; end: 1022da46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022d9f7c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long unaff_x20;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  undefined1 *puVar22;
  long lVar23;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined8 auStack_100 [3];
  long lStack_e8;
  undefined8 auStack_c0 [4];
  undefined8 auStack_a0 [6];
  
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar7 = puVar6;
  func_0x000107c5ff48();
  lVar3 = _DAT_112e7c558;
  func_0x000107c5ff50(auStack_100);
  puVar21 = PTR___sSSN_11034da80;
  puVar15 = PTR___sypN_11034f1a8;
  do {
    if (lStack_e8 == 0) {
      func_0x000107c61574(puVar7);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112e7c550));
      func_0x000107c61170(puVar6);
      return;
    }
    func_0x000100102924(auStack_c0,auStack_100);
    func_0x000100102924(auStack_a0,auStack_120);
    func_0x0001000bb420(auStack_100,auStack_140);
    ppuVar8 = &puStack_150;
    func_0x000107c6147c(ppuVar8,auStack_140,puVar15 + 8,puVar21,6);
    puVar14 = puStack_148;
    puVar13 = puStack_150;
    if (((ulong)ppuVar8 & 1) == 0) {
LAB_1022da014:
      FUN_1022dbf04(auStack_120);
      FUN_1022dbf04(auStack_100);
    }
    else {
      func_0x0001000bb420(auStack_120,auStack_140);
      uVar9 = 0;
      func_0x000103fde58c(0);
      ppuVar8 = &puStack_150;
      func_0x000107c6147c(ppuVar8,auStack_140,puVar15 + 8,uVar9,6);
      puVar4 = puStack_150;
      if (((ulong)ppuVar8 & 1) == 0) {
        func_0x000107c6142c(puVar14);
        goto LAB_1022da014;
      }
      puVar16 = auStack_140;
      func_0x000107c61428(unaff_x20 + lVar3,puVar16,0x20,0);
      puVar19 = *(undefined1 **)(unaff_x20 + lVar3);
      if (puVar19 == (undefined1 *)0x0) {
        FUN_1022dbf04(auStack_120);
        FUN_1022dbf04(auStack_100);
        func_0x000107c614a8(auStack_140);
        func_0x000107c6142c(puVar14);
        func_0x000107c61170(puVar4);
      }
      else {
        func_0x000107c614a8(auStack_140);
        puVar20 = (undefined1 *)((ulong)puVar19 & 0xffffffffffffff8);
        if ((ulong)puVar19 >> 0x3e == 0) {
          puVar22 = *(undefined1 **)(puVar20 + 0x10);
        }
        else {
          puVar22 = puVar19;
          if (-1 < (long)puVar19) {
            puVar22 = puVar20;
          }
          func_0x000107c60480();
        }
        func_0x000107c61434(puVar19);
        if (puVar22 != (undefined1 *)0x0) {
          puVar18 = (undefined1 *)0x0;
          do {
            if (((ulong)puVar19 & 0xc000000000000001) == 0) {
              if (*(undefined1 **)(puVar20 + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1022da470);
                (*pcVar5)();
              }
              puVar10 = *(undefined1 **)(puVar19 + (long)puVar18 * 8 + 0x20);
              func_0x000107c61174();
              puVar17 = puVar16;
            }
            else {
              puVar10 = puVar18;
              puVar17 = puVar19;
              func_0x0001022cd0e8();
            }
            puVar1 = puVar18 + 1;
            if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1022da46c);
              (*pcVar5)();
            }
            puVar11 = puVar10;
            func_0x000107c3df48();
            func_0x000107c61180();
            puVar16 = puVar17;
            if (puVar11 != (undefined1 *)0x0) {
              puVar12 = puVar11;
              func_0x000107c5faec();
              puVar16 = puVar17;
              func_0x000107c61170(puVar11);
              if ((puVar12 == puVar13) && (puVar17 == puVar14)) {
                func_0x000107c6142c(puVar14);
                puVar14 = puVar19;
                puVar19 = puVar17;
              }
              else {
                puVar16 = puVar17;
                func_0x000107c605b8(puVar12,puVar17,puVar13,puVar14,0);
                func_0x000107c6142c(puVar17);
                if (((ulong)puVar12 & 1) == 0) goto LAB_1022da140;
              }
              func_0x000107c6142c(puVar14);
              func_0x000107c6142c(puVar19);
              puVar13 = puVar10;
              func_0x000107c4e21c();
              func_0x000107c61180();
              puVar21 = PTR___sSSN_11034da80;
              puVar14 = puVar13;
              if (puVar13 == (undefined1 *)0x0) {
                puVar14 = puVar16;
                func_0x000107c5faec();
                puVar16 = puVar14;
                func_0x000107c5fadc();
                func_0x000107c6142c(puVar14);
              }
              lVar23 = *(long *)(*(long *)(puVar4 + _DAT_1130427f8) + _DAT_1130428a0);
              FUN_1022da4e8();
              puVar19 = (undefined1 *)0x0;
              if (puVar16 != (undefined1 *)0x0) {
                puVar19 = puVar14;
              }
              puVar14 = (undefined1 *)0xe000000000000000;
              if (puVar16 != (undefined1 *)0x0) {
                puVar14 = puVar16;
              }
              puVar15 = PTR_PTR_1126aa340;
              func_0x000107c610f8(PTR_PTR_1126aa340);
              func_0x000107c5fadc(puVar19,puVar14);
              func_0x000107c6142c(puVar14);
              func_0x000107c47cf4((double)lVar23 / 1000.0,puVar15);
              func_0x000107c61170(puVar13);
              func_0x000107c61170(puVar19);
              uVar9 = *(undefined8 *)(puVar4 + _DAT_1130427e8);
              uVar2 = *(undefined8 *)((long)(puVar4 + _DAT_1130427e8) + 8);
              func_0x000107c61434(uVar2);
              func_0x000107c5fadc(uVar9,uVar2);
              func_0x000107c6142c(uVar2);
              func_0x000107c56038(puVar15);
              func_0x000107c61170(uVar9);
              puVar13 = puVar10;
              func_0x000107c3df48(puVar10);
              func_0x000107c61180();
              func_0x000107c52838(puVar15);
              func_0x000107c61170(puVar13);
              func_0x000107c61174(puVar15);
              func_0x000107c3d798(puVar6);
              func_0x000107c61170(puVar4);
              func_0x000107c61170(puVar15);
              func_0x000107c61170(puVar15);
              func_0x000107c61170(puVar10);
              FUN_1022dbf04(auStack_120);
              FUN_1022dbf04(auStack_100);
              puVar15 = PTR___sypN_11034f1a8;
              goto LAB_1022da024;
            }
LAB_1022da140:
            func_0x000107c61170(puVar10);
            puVar18 = puVar18 + 1;
          } while (puVar1 != puVar22);
        }
        func_0x000107c6142c(puVar14);
        func_0x000107c61170(puVar4);
        func_0x000107c6142c(puVar19);
        FUN_1022dbf04(auStack_120);
        FUN_1022dbf04(auStack_100);
        puVar15 = PTR___sypN_11034f1a8;
        puVar21 = PTR___sSSN_11034da80;
      }
    }
LAB_1022da024:
    func_0x000107c5ff50(auStack_100);
  } while( true );
}



/* Entry: 1022da470; end: 1022da4e7;  */

/* WARNING: Possible PIC construction at 0x0001022da4cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022da4d0) */

void FUN_1022da470(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1022da4e8; end: 1022da61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1022da4e8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  puVar3 = PTR__OBJC_CLASS___NSNumberFormatter_1126b1a70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c56bbc();
  lVar8 = *(long *)(unaff_x20 + _DAT_1130427f8);
  puVar1 = (undefined8 *)(lVar8 + _DAT_1130428a8);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  func_0x000107c61434(uVar2);
  uVar7 = uVar2;
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c53c64(puVar3);
  func_0x000107c61170(uVar4);
  lVar8 = *(long *)(lVar8 + _DAT_1130428a0);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0((double)lVar8 / 1000.0);
  puVar5 = puVar3;
  func_0x000107c5c1c0();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    puVar6 = (undefined *)0x0;
    uVar7 = 0;
  }
  else {
    puVar6 = puVar5;
    func_0x000107c5faec(puVar5);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = puVar6;
  return auVar9;
}



/* Entry: 1022da620; end: 1022da8ff;  */

void FUN_1022da620(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long in_stack_00000000;
  undefined1 auStack_78 [24];
  
  if (param_3 >> 0x3e == 0) {
    func_0x000107c61434(param_3);
    func_0x000107c605f8();
    uVar4 = param_3;
  }
  else {
    uVar4 = param_3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_3) {
      uVar4 = param_3;
    }
    func_0x000107c61434(param_3);
    uVar3 = 0x112d508c0;
    func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
    func_0x000107c60458(uVar4,uVar3);
    func_0x000107c6142c(param_3);
  }
  uVar3 = 0x112d508c0;
  func_0x0001000285a8(0x112d508c0,&UNK_10d917410);
  uVar1 = uVar4;
  func_0x000107c5fc48(uVar4,uVar3);
  func_0x000107c6142c(uVar4);
  if (param_4 >> 0x3e == 0) {
    func_0x000107c61434(param_4);
    func_0x000107c605f8();
    uVar4 = param_4;
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar4 = param_4;
    }
    func_0x000107c61434(param_4);
    uVar3 = 0x112d511e8;
    func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
    func_0x000107c60458(uVar4,uVar3);
    func_0x000107c6142c(param_4);
  }
  uVar3 = 0x112d511e8;
  func_0x0001000285a8(0x112d511e8,&UNK_10d927cd0);
  uVar2 = uVar4;
  func_0x000107c5fc48(uVar4,uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c61428(in_stack_00000000 + 0x10,auStack_78,0,0);
  in_stack_00000000 = in_stack_00000000 + 0x10;
  func_0x000107c61618();
  func_0x000107c4ab60(param_1);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(in_stack_00000000);
  return;
}



/* Entry: 1022da900; end: 1022da953; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsTabInteractor didDismissMemoriesOpera] */

/* WARNING: Possible PIC construction at 0x0001022da928: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022da92c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022da900(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e7c5b0);
  *(undefined8 *)(param_1 + _DAT_112e7c5b0) = 0;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1022da954; end: 1022dabbb;  */

/* WARNING: Possible PIC construction at 0x0001022daa54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022daa58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022da954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112e7c5b8);
  if (lVar6 != 0) {
    puVar3 = &UNK_1104f22d8;
    func_0x000107c613fc(&UNK_1104f22d8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1104f2300;
    func_0x000107c613fc(&UNK_1104f2300,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    puVar1 = (undefined8 *)(lVar6 + _DAT_112e7c4b8);
    uVar5 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = FUN_1022db3f8;
    puVar1[1] = puVar4;
    func_0x000107c61174();
    func_0x000107c61434(param_3);
    func_0x000107c6157c(puVar3);
    func_0x000107c615f0(param_1);
    func_0x000107c6157c(puVar4);
    func_0x000100cece74(uVar5,uVar2);
    uVar5 = *(undefined8 *)(lVar6 + _DAT_112e7c4b0);
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c4d664(uVar5);
    func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 1022dabbc; end: 1022dac2b; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsTabInteractor launcher:willOpenItemWithSnapId:] */

void FUN_1022dabbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1022da954(param_3,param_4,param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022dac2c; end: 1022dac33; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsTabInteractor shouldOverrideTransitionMaskWithLauncher:] */

undefined8 FUN_1022dac2c(void)

{
  return 4;
}



/* Entry: 1022dac34; end: 1022dad2b;  */

void FUN_1022dac34(long param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  if (param_1 != 0) {
    ppuVar3 = &puStack_70;
    func_0x000107c61174();
    pcVar1 = "updateThumbnailView(launcher:snapId:)";
    func_0x0001000c10c0("updateThumbnailView(launcher:snapId:)");
    func_0x000107c61180();
    puVar2 = &UNK_1104f2350;
    func_0x000107c613fc(&UNK_1104f2350,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    *(long *)(puVar2 + 0x18) = param_1;
    uStack_50 = 0x1022db40c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1104f2368;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1022dad2c; end: 1022dae53;  */

/* WARNING: Possible PIC construction at 0x0001022dad58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dad7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dadb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dadd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dadec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022dadbc) */
/* WARNING: Removing unreachable block (ram,0x0001022dadf0) */
/* WARNING: Removing unreachable block (ram,0x0001022dae0c) */
/* WARNING: Removing unreachable block (ram,0x0001022dae14) */
/* WARNING: Removing unreachable block (ram,0x0001022dadc0) */
/* WARNING: Removing unreachable block (ram,0x0001022dad80) */
/* WARNING: Removing unreachable block (ram,0x0001022dad5c) */
/* WARNING: Removing unreachable block (ram,0x0001022daddc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022dad2c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e7c638);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5c360(*(undefined8 *)(unaff_x20 + _DAT_112e7c600));
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1022dae54; end: 1022dae7b; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsTabInteractor plusSubscribeDidDismiss] */

void FUN_1022dae54(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1022dad2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022dae7c; end: 1022daedb; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsTabInteractor init] */

void FUN_1022dae7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCGenAIDreamsScopeImplementation.GenAIDreamsTabInteractor",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1022daea8);
  (*pcVar1)();
}



/* Entry: 1022daedc; end: 1022db277; -[_TtC32SCGenAIDreamsScopeImplementation24GenAIDreamsTabInteractor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001022daf08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022daf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022daf48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022daf68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022daf88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dafa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dafc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022dafe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db0a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db0c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db1a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db1e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db228: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022db25c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022db22c) */
/* WARNING: Removing unreachable block (ram,0x0001022db20c) */
/* WARNING: Removing unreachable block (ram,0x0001022db1ec) */
/* WARNING: Removing unreachable block (ram,0x0001022db1ac) */
/* WARNING: Removing unreachable block (ram,0x0001022db18c) */
/* WARNING: Removing unreachable block (ram,0x0001022db14c) */
/* WARNING: Removing unreachable block (ram,0x0001022db11c) */
/* WARNING: Removing unreachable block (ram,0x0001022db0fc) */
/* WARNING: Removing unreachable block (ram,0x0001022db0cc) */
/* WARNING: Removing unreachable block (ram,0x0001022db0ac) */
/* WARNING: Removing unreachable block (ram,0x0001022db08c) */
/* WARNING: Removing unreachable block (ram,0x0001022db06c) */
/* WARNING: Removing unreachable block (ram,0x0001022db04c) */
/* WARNING: Removing unreachable block (ram,0x0001022db02c) */
/* WARNING: Removing unreachable block (ram,0x0001022db00c) */
/* WARNING: Removing unreachable block (ram,0x0001022dafec) */
/* WARNING: Removing unreachable block (ram,0x0001022dafcc) */
/* WARNING: Removing unreachable block (ram,0x0001022dafac) */
/* WARNING: Removing unreachable block (ram,0x0001022daf8c) */
/* WARNING: Removing unreachable block (ram,0x0001022daf6c) */
/* WARNING: Removing unreachable block (ram,0x0001022daf4c) */
/* WARNING: Removing unreachable block (ram,0x0001022daf2c) */
/* WARNING: Removing unreachable block (ram,0x0001022daf0c) */
/* WARNING: Removing unreachable block (ram,0x0001022db260) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022daedc(long param_1)

{
  FUN_1022db430(param_1 + _DAT_112e7c4e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e7c4f0));
  return;
}



/* Entry: 1022db278; end: 1022db3d7; -[SCCAISnapGenerationResponse description] */

void FUN_1022db278(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001022db2d0();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1022db3d8; end: 1022db3f7;  */

void FUN_1022db3d8(void)

{
  func_0x000107c61168(&PTR_PTR_112834258);
  return;
}



/* Entry: 1022db3f8; end: 1022db42f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1022db3f8(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_68 [24];
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar8 + 0x10,auStack_68,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar8 + _DAT_112e7c5b0);
    if (lVar8 != 0) {
      puVar5 = &UNK_1104f2328;
      func_0x000107c613fc(&UNK_1104f2328,0x18,7);
      *(undefined8 *)(puVar5 + 0x10) = uVar7;
      puVar1 = (undefined8 *)(lVar8 + _DAT_112e7c718);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = 0x1022db404;
      puVar1[1] = puVar5;
      func_0x000107c61174();
      func_0x000107c615f0(uVar7);
      func_0x000107c6157c(puVar5);
      func_0x000100cece74(uVar2,uVar3);
      uVar7 = *(undefined8 *)(lVar8 + _DAT_112e7c710);
      func_0x000107c5fadc(uVar6,uVar4);
      func_0x000107c4d664(uVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c61574(puVar5);
      func_0x000107c61170(uVar6);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1022db430; end: 1022db453;  */

undefined8 FUN_1022db430(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1022db454; end: 1022db4b3;  */

void FUN_1022db454(void)

{
  FUN_1022d37ec();
  return;
}



/* Entry: 1022db4b4; end: 1022db4c3;  */

void FUN_1022db4b4(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    if (param_4 != 0) {
      func_0x000107c61174();
      lVar3 = param_4;
      func_0x000107c30e2c();
      func_0x000107c61180();
      lVar4 = lVar2;
      if (lVar3 != 0) {
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d39b8);
          (*pcVar1)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d39bc);
          (*pcVar1)();
        }
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1022d39c0);
          (*pcVar1)();
        }
        FUN_1022d39c0((long)param_1,param_2,param_3,lVar3,param_5);
        func_0x000107c61170(lVar2);
        lVar4 = param_4;
        param_4 = lVar3;
      }
      lVar2 = param_4;
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1022db4c4; end: 1022db573;  */

/* WARNING: Possible PIC construction at 0x0001022db54c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022db550) */

void FUN_1022db4c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_2;
  func_0x000107c5faec(param_2);
  uVar4 = uVar3;
  func_0x000107c5faec(param_3);
  uVar5 = uVar4;
  func_0x000107c5faec(param_4);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,uVar3,param_3,uVar4,param_4,uVar5);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1022db574; end: 1022db5b7;  */

long FUN_1022db574(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1022db5b8; end: 1022db5cf;  */

undefined8 * FUN_1022db5b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1022db5d0; end: 1022db613;  */

void FUN_1022db5d0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001022dbf24(unaff_x20 + 0x10,uVar1);
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  return;
}



/* Entry: 1022db614; end: 1022db623;  */

/* WARNING: Possible PIC construction at 0x0001022d6330: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d635c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d6390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d63bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001022d63f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001022d63c0) */
/* WARNING: Removing unreachable block (ram,0x0001022d6394) */
/* WARNING: Removing unreachable block (ram,0x0001022d63c4) */
/* WARNING: Removing unreachable block (ram,0x0001022d63cc) */
/* WARNING: Removing unreachable block (ram,0x0001022d63fc) */
/* WARNING: Removing unreachable block (ram,0x0001022d63e0) */
/* WARNING: Removing unreachable block (ram,0x0001022d63a8) */
/* WARNING: Removing unreachable block (ram,0x0001022d6360) */
/* WARNING: Removing unreachable block (ram,0x0001022d6334) */
/* WARNING: Removing unreachable block (ram,0x0001022d6364) */
/* WARNING: Removing unreachable block (ram,0x0001022d636c) */
/* WARNING: Removing unreachable block (ram,0x0001022d6348) */
/* WARNING: Removing unreachable block (ram,0x0001022d63f8) */
/* WARNING: Removing unreachable block (ram,0x0001022d6404) */

void FUN_1022db614(undefined8 param_1)

{
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1022db624; end: 1022db66f;  */

void FUN_1022db624(long param_1,undefined8 param_2)

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



/* Entry: 1022db670; end: 1022db683;  */

void FUN_1022db670(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  FUN_1022dc008(0,0x112e7c0b8,&PTR_PTR_1126c3bf8);
  func_0x000107c5fc54(param_2,uVar3);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1022db684; end: 1022db6bf;  */

void FUN_1022db684(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1022db6c0; end: 1022db6eb;  */

void FUN_1022db6c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1022d6810(3,param_1,param_2);
    func_0x000107c61170(lVar1);
  }
  return;
}


