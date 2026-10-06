/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1047bafb4; end: 1047bc7d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047bafb4(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar17;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long unaff_x20;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  undefined8 uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_1e0 [8];
  uint uStack_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  uint uStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  long lStack_1b0;
  uint uStack_1a8;
  int iStack_1a4;
  long lStack_1a0;
  uint uStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  long lStack_148;
  undefined1 *puStack_140;
  long lStack_138;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  int iStack_118;
  int iStack_114;
  double dStack_110;
  double dStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long alStack_c8 [5];
  
  lVar7 = 0;
  __s10Foundation4UUIDVMa();
  lVar21 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar17 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  lStack_d8 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar19 = (long)(auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar19 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar25 - extraout_x12_00;
  lVar17 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar23 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar23 - extraout_x12_01;
  lStack_e0 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar18 = lVar17 - extraout_x12_02;
  uStack_f8 = uVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar18 = uVar18 - extraout_x12_03;
  uStack_e8 = uVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar18 = uVar18 - extraout_x12_04;
  uStack_f0 = uVar18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = uVar18 - extraout_x12_05;
  func_0x0001047c0a80(param_1,alStack_c8,0x112d387f8,&UNK_10d902650);
  if (alStack_c8[3] == 0) {
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
    return 0;
  }
  uVar8 = 0;
  FUN_1047c0984(0);
  plVar9 = &lStack_d0;
  _swift_dynamicCast(plVar9,alStack_c8,PTR___sypN_11034f1a8 + 8,uVar8,6);
  if (((ulong)plVar9 & 1) == 0) {
    return 0;
  }
  dVar34 = *(double *)(unaff_x20 + _DAT_11308f108);
  dVar35 = *(double *)(lStack_d0 + _DAT_11308f108);
  dStack_108 = *(double *)(unaff_x20 + _DAT_11308f110);
  dStack_110 = *(double *)(lStack_d0 + _DAT_11308f110);
  dVar30 = *(double *)(unaff_x20 + _DAT_11308f118);
  dVar31 = *(double *)(lStack_d0 + _DAT_11308f118);
  dVar32 = *(double *)(unaff_x20 + _DAT_11308f120);
  dVar33 = *(double *)(lStack_d0 + _DAT_11308f120);
  iStack_114 = *(int *)(unaff_x20 + _DAT_11308f128);
  iStack_118 = *(int *)(lStack_d0 + _DAT_11308f128);
  lVar14 = *(long *)(unaff_x20 + _DAT_11308f130);
  if ((lVar14 == *(long *)(lStack_d0 + _DAT_11308f130)) &&
     (((long *)(unaff_x20 + _DAT_11308f130))[1] == ((long *)(lStack_d0 + _DAT_11308f130))[1])) {
    uStack_11c = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uStack_11c = (uint)lVar14 ^ 1;
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11308f138))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11308f138))[1];
  uStack_120 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar10 = *(long *)(unaff_x20 + _DAT_11308f138);
    if ((lVar10 == *(long *)(lStack_d0 + _DAT_11308f138)) && (lVar14 == lVar15)) {
      uStack_120 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_120 = (uint)lVar10;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11308f140))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11308f140))[1];
  uStack_124 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar10 = *(long *)(unaff_x20 + _DAT_11308f140);
    if ((lVar10 == *(long *)(lStack_d0 + _DAT_11308f140)) && (lVar14 == lVar15)) {
      uStack_124 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_124 = (uint)lVar10;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11308f148))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11308f148))[1];
  uStack_128 = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar10 = *(long *)(unaff_x20 + _DAT_11308f148);
    if ((lVar10 == *(long *)(lStack_d0 + _DAT_11308f148)) && (lVar14 == lVar15)) {
      uStack_128 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_128 = (uint)lVar10;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11308f150))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11308f150))[1];
  uStack_12c = (uint)(lVar14 == 0 && lVar15 == 0);
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar10 = *(long *)(unaff_x20 + _DAT_11308f150);
    if ((lVar10 == *(long *)(lStack_d0 + _DAT_11308f150)) && (lVar14 == lVar15)) {
      uStack_12c = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_12c = (uint)lVar10;
    }
  }
  lVar14 = ((long *)(unaff_x20 + _DAT_11308f158))[1];
  lVar15 = ((long *)(lStack_d0 + _DAT_11308f158))[1];
  uStack_130 = (uint)(lVar14 == 0 && lVar15 == 0);
  lStack_100 = lVar21;
  if ((lVar14 != 0) && (lVar15 != 0)) {
    lVar21 = *(long *)(unaff_x20 + _DAT_11308f158);
    if ((lVar21 == *(long *)(lStack_d0 + _DAT_11308f158)) && (lVar14 == lVar15)) {
      uStack_130 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_130 = (uint)lVar21;
    }
  }
  lVar21 = _DAT_1138151e8;
  lStack_148 = lVar23;
  puStack_140 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_138 = lVar19;
  func_0x0001047c0a80(lStack_d0 + _DAT_1138151e8,lVar17,0x112d3bc20,&UNK_10d904ef0);
  lVar19 = (long)*(int *)(lStack_d8 + 0x30);
  func_0x0001047c0a80(unaff_x20 + lVar21,lVar20,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(lVar17,lVar20 + lVar19,0x112d3bc20,&UNK_10d904ef0);
  lVar21 = lStack_100;
  pcVar24 = *(code **)(lStack_100 + 0x30);
  lVar23 = lVar20;
  (*pcVar24)(lVar20,1,lVar7);
  uVar18 = uStack_f0;
  if ((int)lVar23 == 1) {
    func_0x0001047c0ac8(lVar17,0x112d3bc20,&UNK_10d904ef0);
    lVar19 = lVar20 + lVar19;
    (*pcVar24)(lVar19,1,lVar7);
    if ((int)lVar19 != 1) {
LAB_1047bb5b4:
      func_0x0001047c0ac8(lVar20,0x112d68090,&UNK_10da24400);
      uVar16 = 1;
      goto LAB_1047bb66c;
    }
    func_0x0001047c0ac8(lVar20,0x112d3bc20,&UNK_10d904ef0);
    uStack_f0 = uStack_f0 & 0xffffffff00000000;
  }
  else {
    func_0x0001047c0a80(lVar20,uStack_f0,0x112d3bc20,&UNK_10d904ef0);
    lVar23 = lVar20 + lVar19;
    (*pcVar24)(lVar23,1,lVar7);
    puVar5 = puStack_140;
    if ((int)lVar23 == 1) {
      func_0x0001047c0ac8(lVar17,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lVar21 + 8))(uVar18,lVar7);
      goto LAB_1047bb5b4;
    }
    puVar11 = puStack_140;
    (**(code **)(lVar21 + 0x20))(puStack_140,lVar20 + lVar19,lVar7);
    func_0x000101207ba8();
    __sSQ2eeoiySbx_xtFZTj(uVar18,puVar5,lVar7,puVar11);
    uStack_14c = (uint)uVar18;
    pcVar22 = *(code **)(lVar21 + 8);
    (*pcVar22)(puVar5,lVar7);
    func_0x0001047c0ac8(lVar17,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar22)(uStack_f0,lVar7);
    func_0x0001047c0ac8(lVar20,0x112d3bc20,&UNK_10d904ef0);
    uVar16 = uStack_14c ^ 1;
LAB_1047bb66c:
    uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar16);
  }
  uVar2 = uStack_e8;
  lVar19 = _DAT_1138151f0;
  func_0x0001047c0a80(lStack_d0 + _DAT_1138151f0,uStack_e8,0x112d3bc20,&UNK_10d904ef0);
  lVar17 = (long)*(int *)(lStack_d8 + 0x30);
  func_0x0001047c0a80(unaff_x20 + lVar19,lVar25,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(uVar2,lVar25 + lVar17,0x112d3bc20,&UNK_10d904ef0);
  lVar19 = lVar25;
  (*pcVar24)(lVar25,1,lVar7);
  uVar18 = uStack_f8;
  if ((int)lVar19 == 1) {
    func_0x0001047c0ac8(uVar2,0x112d3bc20,&UNK_10d904ef0);
    lVar17 = lVar25 + lVar17;
    (*pcVar24)(lVar17,1,lVar7);
    lVar19 = lStack_e0;
    if ((int)lVar17 == 1) {
      func_0x0001047c0ac8(lVar25,0x112d3bc20,&UNK_10d904ef0);
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
    }
    else {
LAB_1047bb7a4:
      lVar19 = lStack_e0;
      func_0x0001047c0ac8(lVar25,0x112d68090,&UNK_10da24400);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,1);
    }
  }
  else {
    func_0x0001047c0a80(lVar25,uStack_f8,0x112d3bc20,&UNK_10d904ef0);
    lVar19 = lVar25 + lVar17;
    (*pcVar24)(lVar19,1,lVar7);
    lVar20 = lStack_100;
    puVar5 = puStack_140;
    if ((int)lVar19 == 1) {
      func_0x0001047c0ac8(uVar2,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lStack_100 + 8))(uVar18,lVar7);
      goto LAB_1047bb7a4;
    }
    puVar11 = puStack_140;
    (**(code **)(lStack_100 + 0x20))(puStack_140,lVar25 + lVar17,lVar7);
    func_0x000101207ba8();
    uVar12 = uVar18;
    __sSQ2eeoiySbx_xtFZTj(uVar18,puVar5,lVar7,puVar11);
    uStack_14c = (uint)uVar12;
    pcVar22 = *(code **)(lVar20 + 8);
    (*pcVar22)(puVar5,lVar7);
    func_0x0001047c0ac8(uVar2,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar22)(uVar18,lVar7);
    func_0x0001047c0ac8(lVar25,0x112d3bc20,&UNK_10d904ef0);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,uStack_14c) ^ 1;
    lVar19 = lStack_e0;
  }
  lVar20 = _DAT_1138151f8;
  func_0x0001047c0a80(lStack_d0 + _DAT_1138151f8,lVar19,0x112d3bc20,&UNK_10d904ef0);
  lVar21 = lStack_138;
  lVar17 = (long)*(int *)(lStack_d8 + 0x30);
  func_0x0001047c0a80(unaff_x20 + lVar20,lStack_138,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0a80(lVar19,lVar21 + lVar17,0x112d3bc20,&UNK_10d904ef0);
  lVar23 = lVar21;
  (*pcVar24)(lVar21,1,lVar7);
  lVar20 = lStack_148;
  if ((int)lVar23 == 1) {
    func_0x0001047c0ac8(lVar19,0x112d3bc20,&UNK_10d904ef0);
    lVar17 = lVar21 + lVar17;
    (*pcVar24)(lVar17,1,lVar7);
    if ((int)lVar17 != 1) {
LAB_1047bb9a0:
      func_0x0001047c0ac8(lVar21,0x112d68090,&UNK_10da24400);
      uVar16 = 1;
      goto LAB_1047bba50;
    }
    func_0x0001047c0ac8(lVar21,0x112d3bc20,&UNK_10d904ef0);
    uStack_f8 = uStack_f8 & 0xffffffff00000000;
  }
  else {
    func_0x0001047c0a80(lVar21,lStack_148,0x112d3bc20,&UNK_10d904ef0);
    lVar23 = lVar21 + lVar17;
    (*pcVar24)(lVar23,1,lVar7);
    lVar25 = lStack_100;
    puVar5 = puStack_140;
    if ((int)lVar23 == 1) {
      func_0x0001047c0ac8(lVar19,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lStack_100 + 8))(lVar20,lVar7);
      goto LAB_1047bb9a0;
    }
    puVar11 = puStack_140;
    (**(code **)(lStack_100 + 0x20))(puStack_140,lVar21 + lVar17,lVar7);
    func_0x000101207ba8();
    lVar17 = lVar20;
    __sSQ2eeoiySbx_xtFZTj(lVar20,puVar5,lVar7,puVar11);
    pcVar24 = *(code **)(lVar25 + 8);
    (*pcVar24)(puVar5,lVar7);
    func_0x0001047c0ac8(lVar19,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar24)(lVar20,lVar7);
    func_0x0001047c0ac8(lVar21,0x112d3bc20,&UNK_10d904ef0);
    uVar16 = (uint)lVar17 ^ 1;
LAB_1047bba50:
    uStack_f8 = CONCAT44(uStack_f8._4_4_,uVar16);
  }
  lStack_d8 = CONCAT44(lStack_d8._4_4_,*(undefined4 *)(unaff_x20 + _DAT_113815200));
  lStack_e0 = CONCAT44(lStack_e0._4_4_,*(undefined4 *)(lStack_d0 + _DAT_113815200));
  lVar7 = *(long *)(unaff_x20 + _DAT_113815208);
  lVar17 = *(long *)(lStack_d0 + _DAT_113815208);
  uVar16 = (uint)(lVar7 == 0 && lVar17 == 0);
  if ((lVar7 != 0) && (lVar17 != 0)) {
    _swift_bridgeObjectRetain(lVar17);
    lVar19 = lVar7;
    _swift_bridgeObjectRetain();
    uVar16 = (uint)lVar19;
    FUN_10470d2d8();
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(lVar17);
  }
  lVar17 = *(long *)(unaff_x20 + _DAT_113815210);
  uVar6 = (uint)(lVar17 == 0 && *(long *)(lStack_d0 + _DAT_113815210) == 0);
  if ((lVar17 != 0) && (*(long *)(lStack_d0 + _DAT_113815210) != 0)) {
    func_0x00010142cfc4();
    uVar6 = (uint)lVar17;
  }
  lStack_138 = CONCAT44(lStack_138._4_4_,uVar6);
  lVar17 = *(long *)(unaff_x20 + _DAT_113815218);
  uVar6 = (uint)(lVar17 == 0 && *(long *)(lStack_d0 + _DAT_113815218) == 0);
  if ((lVar17 != 0) && (*(long *)(lStack_d0 + _DAT_113815218) != 0)) {
    func_0x00010142cfc4();
    uVar6 = (uint)lVar17;
  }
  puStack_140 = (undefined1 *)CONCAT44(puStack_140._4_4_,uVar6);
  lVar17 = *(long *)(unaff_x20 + _DAT_113815220);
  uVar6 = (uint)(lVar17 == 0 && *(long *)(lStack_d0 + _DAT_113815220) == 0);
  if ((lVar17 != 0) && (*(long *)(lStack_d0 + _DAT_113815220) != 0)) {
    func_0x00010142cfc4();
    uVar6 = (uint)lVar17;
  }
  lStack_148 = CONCAT44(lStack_148._4_4_,uVar6);
  if (*(long *)(unaff_x20 + _DAT_113815228) == 0) {
    uStack_14c = (uint)(*(long *)(lStack_d0 + _DAT_113815228) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_113815228);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_10482a2ac();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uVar6 = (uint)alStack_c8;
    FUN_1048288cc();
    uStack_14c = uVar6;
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  uStack_150 = (uint)*(byte *)(unaff_x20 + _DAT_113815230);
  uStack_158 = (uint)*(byte *)(lStack_d0 + _DAT_113815230);
  if (*(long *)(unaff_x20 + _DAT_113815238) == 0) {
    uStack_154 = (uint)(*(long *)(lStack_d0 + _DAT_113815238) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_113815238);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_10481c348();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uStack_154 = (uint)alStack_c8;
    FUN_10481b7a0();
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  lStack_100 = CONCAT44(lStack_100._4_4_,uVar16);
  if (*(long *)(unaff_x20 + _DAT_113815240) == 0) {
    uStack_15c = (uint)(*(long *)(lStack_d0 + _DAT_113815240) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_113815240);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_104821150();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uStack_15c = (uint)alStack_c8;
    FUN_10481ca0c();
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  uVar8 = *(undefined8 *)(lStack_d0 + _DAT_113815248);
  uVar18 = ((undefined8 *)(lStack_d0 + _DAT_113815248))[1];
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_113815248);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113815248))[1];
  if (uVar2 >> 0x3c < 0xf) {
    if (0xe < uVar18 >> 0x3c) goto LAB_1047bbd58;
    func_0x000100de78a0(uVar8,uVar18);
    func_0x000100de78a0(uVar8,uVar18);
    func_0x000100de78a0(uVar26,uVar2);
    uVar13 = uVar26;
    func_0x000100e25fcc(uVar26,uVar2,uVar8,uVar18);
    func_0x0001000b44c0(uVar8,uVar18);
    func_0x0001000b44c0(uVar8,uVar18);
    func_0x0001000b44c0(uVar26,uVar2);
    uStack_160 = (uint)uVar13 ^ 1;
  }
  else if (uVar18 >> 0x3c < 0xf) {
LAB_1047bbd58:
    func_0x000100de78a0(uVar8,uVar18);
    func_0x000100de78a0(uVar26,uVar2);
    func_0x0001000b44c0(uVar26,uVar2);
    func_0x0001000b44c0(uVar8,uVar18);
    uStack_160 = 1;
  }
  else {
    func_0x000100de78a0(uVar8,uVar18);
    func_0x000100de78a0(uVar26,uVar2);
    func_0x0001000b44c0(uVar26,uVar2);
    uStack_160 = 0;
  }
  uStack_168 = (uint)*(byte *)(unaff_x20 + _DAT_113815250);
  uStack_16c = (uint)*(byte *)(lStack_d0 + _DAT_113815250);
  lVar17 = ((long *)(unaff_x20 + _DAT_113815258))[1];
  lVar7 = ((long *)(lStack_d0 + _DAT_113815258))[1];
  uStack_164 = (uint)(lVar17 == 0 && lVar7 == 0);
  if ((lVar17 != 0) && (lVar7 != 0)) {
    lVar19 = *(long *)(unaff_x20 + _DAT_113815258);
    if ((lVar19 == *(long *)(lStack_d0 + _DAT_113815258)) && (lVar17 == lVar7)) {
      uStack_164 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_164 = (uint)lVar19;
    }
  }
  lVar17 = ((long *)(unaff_x20 + _DAT_113815260))[1];
  lVar7 = ((long *)(lStack_d0 + _DAT_113815260))[1];
  uStack_170 = (uint)(lVar17 == 0 && lVar7 == 0);
  if ((lVar17 != 0) && (lVar7 != 0)) {
    lVar19 = *(long *)(unaff_x20 + _DAT_113815260);
    if ((lVar19 == *(long *)(lStack_d0 + _DAT_113815260)) && (lVar17 == lVar7)) {
      uStack_170 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_170 = (uint)lVar19;
    }
  }
  lVar17 = ((long *)(unaff_x20 + _DAT_113815268))[1];
  lVar7 = ((long *)(lStack_d0 + _DAT_113815268))[1];
  uStack_174 = (uint)(lVar17 == 0 && lVar7 == 0);
  if ((lVar17 != 0) && (lVar7 != 0)) {
    lVar19 = *(long *)(unaff_x20 + _DAT_113815268);
    if ((lVar19 == *(long *)(lStack_d0 + _DAT_113815268)) && (lVar17 == lVar7)) {
      uStack_174 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_174 = (uint)lVar19;
    }
  }
  uVar8 = *(undefined8 *)(lStack_d0 + _DAT_113815270);
  uVar18 = ((undefined8 *)(lStack_d0 + _DAT_113815270))[1];
  uVar26 = *(undefined8 *)(unaff_x20 + _DAT_113815270);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_113815270))[1];
  if (uVar2 >> 0x3c < 0xf) {
    if (uVar18 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar8,uVar18);
      func_0x000100de78a0(uVar8,uVar18);
      func_0x000100de78a0(uVar26,uVar2);
      uVar13 = uVar26;
      func_0x000100e25fcc(uVar26,uVar2,uVar8,uVar18);
      func_0x0001000b44c0(uVar8,uVar18);
      func_0x0001000b44c0(uVar8,uVar18);
      func_0x0001000b44c0(uVar26,uVar2);
      uStack_178 = (uint)uVar13 ^ 1;
      goto LAB_1047bc03c;
    }
  }
  else if (0xe < uVar18 >> 0x3c) {
    func_0x000100de78a0(uVar8,uVar18);
    func_0x000100de78a0(uVar26,uVar2);
    func_0x0001000b44c0(uVar26,uVar2);
    uStack_178 = 0;
    goto LAB_1047bc03c;
  }
  func_0x000100de78a0(uVar8,uVar18);
  func_0x000100de78a0(uVar26,uVar2);
  func_0x0001000b44c0(uVar26,uVar2);
  func_0x0001000b44c0(uVar8,uVar18);
  uStack_178 = 1;
LAB_1047bc03c:
  if (*(long *)(unaff_x20 + _DAT_113815278) == 0) {
    uStack_17c = (uint)(*(long *)(lStack_d0 + _DAT_113815278) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_113815278);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_104846384();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uStack_17c = (uint)alStack_c8;
    FUN_10484433c();
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_113815280) == 0) {
    uStack_184 = (uint)(*(long *)(lStack_d0 + _DAT_113815280) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_113815280);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_1047b15a4();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uStack_184 = (uint)alStack_c8;
    FUN_1047b06e4();
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  fVar28 = *(float *)(unaff_x20 + _DAT_113815288);
  fVar29 = *(float *)(lStack_d0 + _DAT_113815288);
  uStack_194 = (uint)*(byte *)(unaff_x20 + _DAT_113815290);
  uStack_1a8 = (uint)*(byte *)(lStack_d0 + _DAT_113815290);
  if (*(long *)(unaff_x20 + _DAT_113815298) == 0) {
    uStack_180 = (uint)(*(long *)(lStack_d0 + _DAT_113815298) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_113815298);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_1047b5e44();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uStack_180 = (uint)alStack_c8;
    FUN_1047b4ab4();
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  iStack_188 = *(int *)(unaff_x20 + _DAT_1138152a0);
  iStack_18c = *(int *)(lStack_d0 + _DAT_1138152a0);
  uStack_1d0 = (uint)*(byte *)(unaff_x20 + _DAT_1138152a8);
  uStack_1d4 = (uint)*(byte *)(lStack_d0 + _DAT_1138152a8);
  lStack_1a0 = *(long *)(unaff_x20 + _DAT_1138152b0);
  lStack_1b0 = *(long *)(lStack_d0 + _DAT_1138152b0);
  iStack_190 = *(int *)(unaff_x20 + _DAT_1138152b8);
  iStack_1a4 = *(int *)(lStack_d0 + _DAT_1138152b8);
  iStack_1b4 = *(int *)(unaff_x20 + _DAT_1138152c0);
  iStack_1b8 = *(int *)(lStack_d0 + _DAT_1138152c0);
  if (*(long *)(unaff_x20 + _DAT_1138152c8) == 0) {
    uStack_1bc = (uint)(*(long *)(lStack_d0 + _DAT_1138152c8) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_1138152c8);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_104815460();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uStack_1bc = (uint)alStack_c8;
    func_0x000104814c00();
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  iStack_1c0 = *(int *)(unaff_x20 + _DAT_1138152d0);
  iStack_1c4 = *(int *)(lStack_d0 + _DAT_1138152d0);
  iStack_1c8 = *(int *)(unaff_x20 + _DAT_1138152d8);
  iStack_1cc = *(int *)(lStack_d0 + _DAT_1138152d8);
  if (*(long *)(unaff_x20 + _DAT_1138152e0) == 0) {
    uStack_1d8 = (uint)(*(long *)(lStack_d0 + _DAT_1138152e0) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_1138152e0);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_1047b15a4();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    uStack_1d8 = (uint)alStack_c8;
    FUN_1047b06e4();
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_1138152e8) == 0) {
    uVar16 = (uint)(*(long *)(lStack_d0 + _DAT_1138152e8) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_1138152e8);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_1047b15a4();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    plVar9 = alStack_c8;
    FUN_1047b06e4(plVar9);
    uVar16 = (uint)plVar9;
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_1138152f0) == 0) {
    uVar6 = (uint)(*(long *)(lStack_d0 + _DAT_1138152f0) == 0);
  }
  else {
    lVar17 = *(long *)(lStack_d0 + _DAT_1138152f0);
    if (lVar17 == 0) {
      lVar7 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar7 = 0;
      FUN_1047b3450();
    }
    alStack_c8[0] = lVar17;
    alStack_c8[3] = lVar7;
    _objc_retain(lVar17);
    plVar9 = alStack_c8;
    FUN_1047b30f8(plVar9);
    uVar6 = (uint)plVar9;
    func_0x0001047c0ac8(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_1138152f8);
  lVar17 = *(long *)(lStack_d0 + _DAT_1138152f8);
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_113815300);
  uVar26 = *(undefined8 *)(lStack_d0 + _DAT_113815300);
  bVar3 = *(byte *)(unaff_x20 + _DAT_113815308);
  bVar4 = *(byte *)(lStack_d0 + _DAT_113815308);
  _objc_release(lStack_d0);
  uVar27 = (uint)(dVar34 != dVar35);
  if (dStack_108 != dStack_110) {
    uVar27 = 1;
  }
  if (dVar30 != dVar31) {
    uVar27 = 1;
  }
  if (dVar32 != dVar33) {
    uVar27 = 1;
  }
  if (iStack_114 != iStack_118) {
    uVar27 = 1;
  }
  uVar1 = 0;
  if (iStack_190 == iStack_1a4) {
    uVar1 = (uint)(lStack_1a0 == lStack_1b0) &
            (((((uint)((int)lStack_d8 == (int)lStack_e0) &
                ((uVar27 | uStack_11c | uStack_120 ^ 1 | uStack_124 ^ 1 | uStack_128 ^ 1 |
                           uStack_12c ^ 1 | uStack_130 ^ 1 |
                 (uint)uStack_f0 | (uint)uStack_e8 | (uint)uStack_f8) ^ 0xffffffff) &
                (uint)lStack_100 & (uint)lStack_138 & (uint)puStack_140 & (uint)lStack_148 &
                uStack_14c ^ 1 |
               uStack_150 ^ uStack_158 | uStack_154 ^ 1 | uStack_15c ^ 1 | uStack_160 |
               uStack_168 ^ uStack_16c | uStack_164 ^ 1 | uStack_170 ^ 1 | uStack_174 ^ 1 |
               uStack_178) ^ 1) & uStack_17c & uStack_184 ^ 1 |
              (uint)(fVar28 != fVar29) | uStack_194 ^ uStack_1a8 | uStack_180 ^ 0xffffffff |
             (uint)(iStack_188 != iStack_18c) | uStack_1d0 ^ uStack_1d4) ^ 0xffffffff);
  }
  uVar27 = 0;
  if (iStack_1b4 == iStack_1b8) {
    uVar27 = uVar1;
  }
  uVar1 = 0;
  if (iStack_1c0 == iStack_1c4) {
    uVar1 = uVar27 & uStack_1bc;
  }
  uVar27 = 0;
  if (iStack_1c8 == iStack_1cc) {
    uVar27 = uVar1;
  }
  uVar1 = 0;
  if (lVar7 == lVar17) {
    uVar1 = uVar27 & uStack_1d8 & uVar16 & uVar6;
  }
  uVar16 = 0;
  if ((int)uVar8 == (int)uVar26) {
    uVar16 = uVar1;
  }
  return uVar16 & ((bVar3 ^ bVar4) ^ 1);
}



/* Entry: 1047bc7d4; end: 1047bc893; -[SCAdResponse isEqual:] */

uint FUN_1047bc7d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047bafb4(&uStack_40);
  _objc_release(param_1);
  func_0x0001047c0ac8(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 1047bc894; end: 1047bc897; -[SCAdResponse copyWithZone:] */

void FUN_1047bc894(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047bc898; end: 1047bd95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047bc898(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  lVar4 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar6 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar7 - extraout_x12_00;
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11308f108);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20d7c0);
  func_0x00010bf92e80(uVar12,param_1);
  _objc_release(uVar1);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11308f110);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20d7e0);
  func_0x00010bf92e80(uVar12,param_1);
  _objc_release(uVar1);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11308f118);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f20d800);
  func_0x00010bf92e80(uVar12,param_1);
  _objc_release(uVar1);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11308f120);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d830);
  func_0x00010bf92e80(uVar12,param_1);
  _objc_release(uVar1);
  uVar1 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f130);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308f130))[1]);
  uVar12 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar12);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f138))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f138);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0x44495f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f140))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f140);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0x54495f4556524553;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f148))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f148);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0x4554495f454e494c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554495f454e494c,0xec00000044495f4d);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f150))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f150);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20d850);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f158))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f158);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0x44495f4c45584950;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4c45584950,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  func_0x0001047c0a80(unaff_x20 + _DAT_1138151e8,lVar4,0x112d3bc20,&UNK_10d904ef0);
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar2 + -8);
  pcVar10 = *(code **)(lVar8 + 0x30);
  lVar3 = lVar4;
  (*pcVar10)(lVar4,1,lVar2);
  lVar9 = 0;
  if ((int)lVar3 != 1) {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar8 + 8))(lVar4,lVar2);
    lVar9 = lVar3;
  }
  uVar1 = 0x44415551535f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44415551535f4441,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar9);
  _objc_release(uVar1);
  func_0x0001047c0a80(unaff_x20 + _DAT_1138151f0,lVar7,0x112d3bc20,&UNK_10d904ef0);
  lVar4 = lVar7;
  (*pcVar10)(lVar7,1,lVar2);
  if ((int)lVar4 == 1) {
    lVar4 = 0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar8 + 8))(lVar7,lVar2);
  }
  uVar1 = 0x4e474941504d4143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e474941504d4143,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar4);
  _objc_release(uVar1);
  func_0x0001047c0a80(unaff_x20 + _DAT_1138151f8,puVar6,0x112d3bc20,&UNK_10d904ef0);
  puVar5 = puVar6;
  (*pcVar10)(puVar6,1,lVar2);
  if ((int)puVar5 == 1) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar8 + 8))(puVar6,lVar2);
  }
  uVar1 = 0x554f4343415f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f4343415f4441,0xed000044495f544e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar5);
  _objc_release(uVar1);
  uVar1 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_113815208);
  if (lVar4 != 0) {
    uVar1 = 0;
    FUN_1047c6864(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,uVar1);
  }
  uVar1 = 0x5f50414e535f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f50414e535f4441,0xed00005941525241);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar4);
  _objc_release(uVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_113815210);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20d870);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar4);
  _objc_release(uVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_113815218);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000021;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20d8a0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar4);
  _objc_release(uVar1);
  lVar4 = *(long *)(unaff_x20 + _DAT_113815220);
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000023;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f20d8d0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar4);
  _objc_release(uVar1);
  uVar1 = 0x44415f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44415f59524f5453,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x44494c41565f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44494c41565f5349,0xe800000000000000);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20d900);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d920);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113815248))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815248);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar12 = 0x45444e45525f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444e45525f4441,0xee00415441445f52);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  uVar1 = 0x5f44415f45444948;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f44415f45444948,0xec00000047554c53);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113815258))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815258);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0x524553555f574152;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524553555f574152,0xed0000415441445f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  if (((undefined8 *)(unaff_x20 + _DAT_113815260))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815260);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0x445f44415f574152;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f44415f574152,0xeb00000000415441);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  if (((undefined8 *)(unaff_x20 + _DAT_113815268))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815268);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar12 = 0x52545f4f544f5250;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52545f4f544f5250,0xef4c52555f4b4341);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113815270))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113815270);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar12 = 0x4345525f57454956;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4345525f57454956,0xec00000054504945);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar12);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20d940);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d960);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar11 = *(undefined4 *)(unaff_x20 + _DAT_113815288);
  uVar1 = 0x5f43494e4147524f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f43494e4147524f,0xed000045554c4156);
  func_0x00010bf92ee0(uVar11,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20d980);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20d9a0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x59545f4548434143;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f4548434143,0xea00000000004550);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar12 = 0xd000000000000012;
  uVar1 = uVar12;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20d9c0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000024;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000024,0x800000010f20d9e0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20da10);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f20da30);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f435f45524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f45524f5453,0xed0000545845544e);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20da50);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f209a70);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20da70);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20da90);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20dab0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20dad0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f1eeb90);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20daf0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar12);
  return;
}



/* Entry: 1047bd95c; end: 1047bd9ab; -[SCAdResponse encodeWithCoder:] */

void FUN_1047bd95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047bc898(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047bd9ac; end: 1047bd9db;  */

void FUN_1047bd9ac(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047bd9dc(param_1);
  return;
}



/* Entry: 1047bd9dc; end: 1047c061f;  */

undefined8 FUN_1047bd9dc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  undefined *puVar18;
  long extraout_x8;
  code *pcVar19;
  undefined8 **ppuVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  undefined8 *puVar21;
  long lVar22;
  undefined8 unaff_x20;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long alStack_3e0 [38];
  long lStack_2b0;
  undefined4 uStack_2a4;
  ulong uStack_2a0;
  long lStack_298;
  long lStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  ulong uStack_268;
  long lStack_260;
  ulong uStack_258;
  ulong uStack_250;
  undefined4 uStack_244;
  long lStack_240;
  ulong uStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_218;
  undefined4 uStack_20c;
  long lStack_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulong uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined8 *apuStack_110 [2];
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  lVar26 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar26 + -8) + 0x40));
  lVar26 = (long)&lStack_2b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar25 = (undefined8 *)(lVar26 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar27 = (long)puVar25 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar24 = (undefined8 *)(lVar27 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_f8 = (long)puVar24 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar21 = (undefined8 *)(((long)puVar24 - extraout_x12_02) - extraout_x12_03);
  uVar7 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20d7c0);
  func_0x00010bf66da0(param_2);
  uVar28 = param_1;
  _objc_release(uVar7);
  uVar7 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20d7e0);
  func_0x00010bf66da0(param_2);
  uVar29 = uVar28;
  _objc_release(uVar7);
  uVar7 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f20d800);
  func_0x00010bf66da0(param_2);
  uVar30 = uVar29;
  _objc_release(uVar7);
  uVar7 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d830);
  func_0x00010bf66da0(param_2);
  _objc_release(uVar7);
  uVar7 = 0x55444f52505f4441;
  uVar17 = 0x545f5443;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
  uVar8 = param_2;
  func_0x00010bf66f40();
  _objc_release(uVar7);
  func_0x000102d02a38();
  if ((uVar17 & 0xff) == 1) {
LAB_1047bdd18:
    _objc_release(param_2);
  }
  else {
    uVar7 = 0x494649544e454449;
    uStack_100 = uVar8;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
    uVar8 = param_2;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    if (uVar8 == 0) {
      uStack_d8 = 0;
      uStack_e0 = 0;
      lStack_c8 = 0;
      uStack_d0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
      _swift_unknownObjectRelease(uVar8);
    }
    uStack_b8 = uStack_d8;
    uStack_c0 = uStack_e0;
    lStack_a8 = lStack_c8;
    uStack_b0 = uStack_d0;
    if (lStack_c8 == 0) {
      _objc_release(param_2);
      uVar7 = 0x112d387f8;
      puVar18 = &UNK_10d902650;
      puVar21 = &uStack_c0;
    }
    else {
      plVar9 = &lStack_f0;
      _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)plVar9 & 1) == 0) goto LAB_1047bdd18;
      lStack_158 = lStack_f0;
      puStack_128 = puStack_e8;
      uVar7 = 0x44495f4441;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4441,0xe500000000000000);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_180 = 0;
        apuStack_110[0] = (undefined8 *)0x0;
      }
      else {
        plVar9 = &lStack_f0;
        _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        lStack_180 = lStack_f0;
        apuStack_110[0] = puStack_e8;
        if ((int)plVar9 == 0) {
          lStack_180 = 0;
          apuStack_110[0] = (undefined8 *)0x0;
        }
      }
      uVar7 = 0x54495f4556524553;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x54495f4556524553,0xed000044495f4d45);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_188 = 0;
        puStack_118 = (undefined8 *)0x0;
      }
      else {
        plVar9 = &lStack_f0;
        _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        lStack_188 = lStack_f0;
        puStack_118 = puStack_e8;
        if ((int)plVar9 == 0) {
          lStack_188 = 0;
          puStack_118 = (undefined8 *)0x0;
        }
      }
      uVar7 = 0x4554495f454e494c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4554495f454e494c,0xec00000044495f4d);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_190 = 0;
        puStack_120 = (undefined8 *)0x0;
      }
      else {
        plVar9 = &lStack_f0;
        _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        lStack_190 = lStack_f0;
        puStack_120 = puStack_e8;
        if ((int)plVar9 == 0) {
          lStack_190 = 0;
          puStack_120 = (undefined8 *)0x0;
        }
      }
      uVar7 = 0xd000000000000013;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20d850);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_198 = 0;
        puStack_130 = (undefined8 *)0x0;
      }
      else {
        plVar9 = &lStack_f0;
        _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        lStack_198 = lStack_f0;
        puStack_130 = puStack_e8;
        if ((int)plVar9 == 0) {
          lStack_198 = 0;
          puStack_130 = (undefined8 *)0x0;
        }
      }
      uVar7 = 0x44495f4c45584950;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f4c45584950,0xe800000000000000);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      apuStack_110[1] = puVar21;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lStack_1a0 = 0;
        puStack_138 = (undefined8 *)0x0;
      }
      else {
        plVar9 = &lStack_f0;
        _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        lStack_1a0 = lStack_f0;
        puStack_138 = puStack_e8;
        if ((int)plVar9 == 0) {
          lStack_1a0 = 0;
          puStack_138 = (undefined8 *)0x0;
        }
      }
      uVar7 = 0x44415551535f4441;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44415551535f4441,0xeb0000000044495f);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lVar10 = 0;
        __s10Foundation4UUIDVMa();
        pcVar19 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
        uVar17 = 1;
        puVar13 = apuStack_110[1];
      }
      else {
        lVar10 = 0;
        __s10Foundation4UUIDVMa();
        puVar13 = apuStack_110[1];
        puVar11 = apuStack_110[1];
        _swift_dynamicCast(apuStack_110[1],&uStack_c0,PTR___sypN_11034f1a8 + 8,lVar10,6);
        pcVar19 = *(code **)(*(long *)(lVar10 + -8) + 0x38);
        uVar17 = (uint)puVar11 ^ 1;
      }
      (*pcVar19)(puVar13,uVar17,1,lVar10);
      uVar7 = 0x4e474941504d4143;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4e474941504d4143,0xeb0000000044495f);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      lVar10 = lStack_f8;
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lVar12 = 0;
        __s10Foundation4UUIDVMa();
        pcVar19 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
        uVar17 = 1;
      }
      else {
        lVar12 = 0;
        __s10Foundation4UUIDVMa();
        lVar16 = lVar10;
        _swift_dynamicCast(lVar10,&uStack_c0,PTR___sypN_11034f1a8 + 8,lVar12,6);
        pcVar19 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
        uVar17 = (uint)lVar16 ^ 1;
      }
      (*pcVar19)(lVar10,uVar17,1,lVar12);
      uVar7 = 0x554f4343415f4441;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x554f4343415f4441,0xed000044495f544e);
      uVar8 = param_2;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar7);
      if (uVar8 == 0) {
        uStack_d8 = 0;
        uStack_e0 = 0;
        lStack_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
        _swift_unknownObjectRelease(uVar8);
      }
      uStack_b8 = uStack_d8;
      uStack_c0 = uStack_e0;
      lStack_a8 = lStack_c8;
      uStack_b0 = uStack_d0;
      if (lStack_c8 == 0) {
        func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
        lVar12 = 0;
        __s10Foundation4UUIDVMa();
        pcVar19 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
        uVar17 = 1;
      }
      else {
        lVar12 = 0;
        __s10Foundation4UUIDVMa();
        puVar13 = puVar24;
        _swift_dynamicCast(puVar24,&uStack_c0,PTR___sypN_11034f1a8 + 8,lVar12,6);
        pcVar19 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
        uVar17 = (uint)puVar13 ^ 1;
      }
      (*pcVar19)(puVar24,uVar17,1,lVar12);
      uVar7 = 0x455059545f4441;
      uVar17 = 0;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
      uVar8 = param_2;
      func_0x00010bf66f40();
      _objc_release(uVar7);
      func_0x0001042a6cc4();
      if ((uVar17 & 0xff) == 1) {
        _swift_bridgeObjectRelease(puStack_128);
        _objc_release(param_2);
        _swift_bridgeObjectRelease(puStack_138);
        _swift_bridgeObjectRelease(puStack_130);
        _swift_bridgeObjectRelease(puStack_120);
        _swift_bridgeObjectRelease(puStack_118);
        _swift_bridgeObjectRelease(apuStack_110[0]);
        func_0x0001047c0ac8(puVar24,0x112d3bc20,&UNK_10d904ef0);
      }
      else {
        uVar7 = 0x5f50414e535f4441;
        uStack_1f8 = uVar8;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f50414e535f4441,0xed00005941525241)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_1b0 = 0;
        }
        else {
          uVar7 = 0x11308f160;
          func_0x0001000285a8(0x11308f160,&UNK_10dd35520);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_1b0 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_1b0 = 0;
          }
        }
        uVar7 = 0xd000000000000021;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20d870)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_1b8 = 0;
        }
        else {
          uVar7 = 0x112d38270;
          func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_1b8 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_1b8 = 0;
          }
        }
        uVar7 = 0xd000000000000021;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f20d8a0)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_1c0 = 0;
        }
        else {
          uVar7 = 0x112d38270;
          func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_1c0 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_1c0 = 0;
          }
        }
        uVar7 = 0xd000000000000023;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000023,0x800000010f20d8d0)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_1c8 = 0;
        }
        else {
          uVar7 = 0x112d38270;
          func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_1c8 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_1c8 = 0;
          }
        }
        uVar7 = 0x44415f59524f5453;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44415f59524f5453,0xe800000000000000)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_160 = 0;
        }
        else {
          uVar7 = 0;
          FUN_10482a2ac(0);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_160 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_160 = 0;
          }
        }
        uVar7 = 0x44494c41565f5349;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44494c41565f5349,0xe800000000000000)
        ;
        uVar8 = param_2;
        func_0x00010bf66ce0();
        uStack_1fc = (undefined4)uVar8;
        _objc_release(uVar7);
        uVar7 = 0xd000000000000015;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f20d900)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_168 = 0;
        }
        else {
          uVar7 = 0;
          FUN_10481c348(0);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_168 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_168 = 0;
          }
        }
        uVar7 = 0xd000000000000014;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f20d920)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_170 = 0;
        }
        else {
          uVar7 = 0;
          FUN_104821150(0);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_170 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_170 = 0;
          }
        }
        uVar7 = 0x45444e45525f4441;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45444e45525f4441,0xee00415441445f52)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_1a8 = 0;
          puStack_178 = (undefined8 *)0xf000000000000000;
        }
        else {
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,
                             PTR___s10Foundation4DataVN_110350ae0,6);
          puStack_178 = puStack_e8;
          lStack_1a8 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_1a8 = 0;
            puStack_178 = (undefined8 *)0xf000000000000000;
          }
        }
        uVar7 = 0x5f44415f45444948;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f44415f45444948,0xec00000047554c53)
        ;
        uVar8 = param_2;
        func_0x00010bf66ce0();
        uStack_200 = (undefined4)uVar8;
        _objc_release(uVar7);
        uVar7 = 0x524553555f574152;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x524553555f574152,0xed0000415441445f)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_220 = 0;
          puStack_1d0 = (undefined8 *)0x0;
        }
        else {
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          lStack_220 = lStack_f0;
          puStack_1d0 = puStack_e8;
          if ((int)plVar9 == 0) {
            lStack_220 = 0;
            puStack_1d0 = (undefined8 *)0x0;
          }
        }
        uVar7 = 0x445f44415f574152;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x445f44415f574152,0xeb00000000415441)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_228 = 0;
          puStack_1d8 = (undefined8 *)0x0;
        }
        else {
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          lStack_228 = lStack_f0;
          puStack_1d8 = puStack_e8;
          if ((int)plVar9 == 0) {
            lStack_228 = 0;
            puStack_1d8 = (undefined8 *)0x0;
          }
        }
        uVar7 = 0x52545f4f544f5250;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52545f4f544f5250,0xef4c52555f4b4341)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_230 = 0;
          puStack_1e0 = (undefined8 *)0x0;
        }
        else {
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          lStack_230 = lStack_f0;
          puStack_1e0 = puStack_e8;
          if ((int)plVar9 == 0) {
            lStack_230 = 0;
            puStack_1e0 = (undefined8 *)0x0;
          }
        }
        uVar7 = 0x4345525f57454956;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4345525f57454956,0xec00000054504945)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_150 = 0;
          puStack_e8 = (undefined8 *)0xf000000000000000;
        }
        else {
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,
                             PTR___s10Foundation4DataVN_110350ae0,6);
          lStack_150 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_150 = 0;
            puStack_e8 = (undefined8 *)0xf000000000000000;
          }
        }
        uVar7 = 0xd000000000000019;
        puStack_148 = puStack_e8;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20d940)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_1e8 = 0;
        }
        else {
          uVar7 = 0;
          FUN_104846384(0);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar7,6);
          lStack_1e8 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_1e8 = 0;
          }
        }
        uVar7 = 0xd000000000000017;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20d960)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        uVar7 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lStack_1f0 = 0;
        }
        else {
          uVar14 = 0;
          FUN_1047b15a4(0);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar14,6);
          lStack_1f0 = lStack_f0;
          if ((int)plVar9 == 0) {
            lStack_1f0 = 0;
          }
        }
        uVar14 = 0x5f43494e4147524f;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f43494e4147524f,0xed000045554c4156)
        ;
        func_0x00010bf66e40(param_2);
        _objc_release(uVar14);
        uVar14 = 0xd00000000000001a;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20d980)
        ;
        uVar8 = param_2;
        func_0x00010bf66ce0();
        uStack_20c = (undefined4)uVar8;
        _objc_release(uVar14);
        uVar14 = 0xd000000000000013;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f20d9a0)
        ;
        uVar8 = param_2;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        if (uVar8 == 0) {
          uStack_d8 = 0;
          uStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
          _swift_unknownObjectRelease(uVar8);
        }
        uStack_b8 = uStack_d8;
        uStack_c0 = uStack_e0;
        lStack_a8 = lStack_c8;
        uStack_b0 = uStack_d0;
        puStack_140 = puVar24;
        if (lStack_c8 == 0) {
          func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
          lVar12 = 0;
        }
        else {
          uVar14 = 0;
          FUN_1047b5e44(0);
          plVar9 = &lStack_f0;
          _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar14,6);
          lVar12 = lStack_f0;
          if ((int)plVar9 == 0) {
            lVar12 = 0;
          }
        }
        uVar14 = 0x59545f4548434143;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f4548434143,0xea00000000004550)
        ;
        uVar8 = param_2;
        func_0x00010bf66f40();
        _objc_release(uVar14);
        uStack_218 = uVar8;
        if (uVar8 < 2) {
          uVar23 = 0xd000000000000012;
          uVar14 = uVar23;
          lStack_208 = lVar12;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000012,0x800000010f20d9c0);
          uVar8 = param_2;
          func_0x00010bf66ce0();
          _objc_release(uVar14);
          uVar14 = 0xd000000000000024;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000024,0x800000010f20d9e0);
          uVar15 = param_2;
          func_0x00010bf66f40();
          uStack_238 = uVar15;
          _objc_release(uVar14);
          uVar14 = 0xd000000000000019;
          uVar17 = 0xf20da10;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019);
          uVar15 = param_2;
          func_0x00010bf66f40();
          _objc_release(uVar14);
          FUN_1046aebf4();
          if ((uVar17 & 0xff) == 1) {
            _objc_release(lStack_1e8);
            _objc_release(lStack_1f0);
            ppuVar20 = apuStack_110 + 1;
LAB_1047bf430:
            _objc_release(ppuVar20[-0x20]);
            _swift_bridgeObjectRelease(puStack_128);
            _objc_release(param_2);
            _swift_bridgeObjectRelease(puStack_1e0);
            _swift_bridgeObjectRelease(puStack_1d8);
            _swift_bridgeObjectRelease(puStack_1d0);
            _swift_bridgeObjectRelease(lStack_1c8);
            _swift_bridgeObjectRelease(lStack_1c0);
            _swift_bridgeObjectRelease(lStack_1b8);
            _swift_bridgeObjectRelease(lStack_1b0);
            _swift_bridgeObjectRelease(puStack_138);
            _swift_bridgeObjectRelease(puStack_130);
            _swift_bridgeObjectRelease(puStack_120);
            _swift_bridgeObjectRelease(puStack_118);
            _swift_bridgeObjectRelease(apuStack_110[0]);
            func_0x0001000b44c0(lStack_150,puStack_148);
            func_0x0001000b44c0(lStack_1a8,puStack_178);
            _objc_release(lStack_160);
            _objc_release(lStack_168);
            _objc_release(lStack_170);
            puVar24 = puStack_140;
          }
          else {
            uStack_244 = (undefined4)uVar8;
            uVar14 = 0xd00000000000001b;
            uVar17 = 0xf20da30;
            uStack_250 = uVar15;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b);
            uVar8 = param_2;
            func_0x00010bf66f40();
            _objc_release(uVar14);
            FUN_1046af02c();
            puVar24 = puStack_140;
            if ((uVar17 & 0xff) == 1) {
              _objc_release(lStack_1e8);
              _objc_release(lStack_1f0);
              lVar26 = -0xf8;
            }
            else {
              uVar14 = 0x4f435f45524f5453;
              uStack_258 = uVar8;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0x4f435f45524f5453,0xed0000545845544e);
              uVar8 = param_2;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar14);
              if (uVar8 == 0) {
                uStack_d8 = 0;
                uStack_e0 = 0;
                lStack_c8 = 0;
                uStack_d0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
                _swift_unknownObjectRelease(uVar8);
              }
              uStack_b8 = uStack_d8;
              uStack_c0 = uStack_e0;
              lStack_a8 = lStack_c8;
              uStack_b0 = uStack_d0;
              if (lStack_c8 == 0) {
                func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
                lStack_240 = 0;
              }
              else {
                uVar14 = 0;
                FUN_104815460(0);
                plVar9 = &lStack_f0;
                _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar14,6);
                lStack_240 = lStack_f0;
                if ((int)plVar9 == 0) {
                  lStack_240 = 0;
                }
              }
              uVar14 = 0xd000000000000011;
              uVar17 = 0xf20da50;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011);
              uVar8 = param_2;
              func_0x00010bf66f40();
              _objc_release(uVar14);
              func_0x0001046b335c();
              if ((uVar17 & 0xff) != 1) {
                uVar14 = 0xd000000000000018;
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                          (0xd000000000000018,0x800000010f209a70);
                uVar15 = param_2;
                func_0x00010bf66f40();
                _objc_release(uVar14);
                uStack_268 = uVar15;
                if (uVar15 < 2) {
                  uVar14 = 0xd000000000000014;
                  uStack_280 = uVar8;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd000000000000014,0x800000010f20da70);
                  uVar8 = param_2;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar14);
                  if (uVar8 == 0) {
                    uStack_d8 = 0;
                    uStack_e0 = 0;
                    lStack_c8 = 0;
                    uStack_d0 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
                    _swift_unknownObjectRelease(uVar8);
                  }
                  uStack_b8 = uStack_d8;
                  uStack_c0 = uStack_e0;
                  lStack_a8 = lStack_c8;
                  uStack_b0 = uStack_d0;
                  if (lStack_c8 == 0) {
                    func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
                    lStack_260 = 0;
                  }
                  else {
                    uVar14 = 0;
                    FUN_1047b15a4(0);
                    plVar9 = &lStack_f0;
                    _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar14,6);
                    lStack_260 = lStack_f0;
                    if ((int)plVar9 == 0) {
                      lStack_260 = 0;
                    }
                  }
                  uVar14 = 0xd00000000000001a;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd00000000000001a,0x800000010f20da90);
                  uVar8 = param_2;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar14);
                  if (uVar8 == 0) {
                    uStack_d8 = 0;
                    uStack_e0 = 0;
                    lStack_c8 = 0;
                    uStack_d0 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
                    _swift_unknownObjectRelease(uVar8);
                  }
                  uStack_b8 = uStack_d8;
                  uStack_c0 = uStack_e0;
                  lStack_a8 = lStack_c8;
                  uStack_b0 = uStack_d0;
                  if (lStack_c8 == 0) {
                    func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
                    lStack_270 = 0;
                  }
                  else {
                    uVar14 = 0;
                    FUN_1047b15a4(0);
                    plVar9 = &lStack_f0;
                    _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar14,6);
                    lStack_270 = lStack_f0;
                    if ((int)plVar9 == 0) {
                      lStack_270 = 0;
                    }
                  }
                  uVar14 = 0xd000000000000014;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd000000000000014,0x800000010f20dab0);
                  uVar8 = param_2;
                  func_0x00010bf67000();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar14);
                  if (uVar8 == 0) {
                    uStack_d8 = 0;
                    uStack_e0 = 0;
                    lStack_c8 = 0;
                    uStack_d0 = 0;
                  }
                  else {
                    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_e0,uVar8);
                    _swift_unknownObjectRelease(uVar8);
                  }
                  uStack_b8 = uStack_d8;
                  uStack_c0 = uStack_e0;
                  lStack_a8 = lStack_c8;
                  uStack_b0 = uStack_d0;
                  if (lStack_c8 == 0) {
                    func_0x0001047c0ac8(&uStack_c0,0x112d387f8,&UNK_10d902650);
                    lStack_278 = 0;
                  }
                  else {
                    uVar14 = 0;
                    FUN_1047b3450(0);
                    plVar9 = &lStack_f0;
                    _swift_dynamicCast(plVar9,&uStack_c0,PTR___sypN_11034f1a8 + 8,uVar14,6);
                    lStack_278 = lStack_f0;
                    if ((int)plVar9 == 0) {
                      lStack_278 = 0;
                    }
                  }
                  uVar14 = 0xd000000000000013;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                            (0xd000000000000013,0x800000010f20dad0);
                  uVar8 = param_2;
                  func_0x00010bf66f40();
                  uStack_288 = uVar8;
                  _objc_release(uVar14);
                  uVar14 = 0xd000000000000010;
                  uVar17 = 0xf1eeb90;
                  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010);
                  uVar8 = param_2;
                  func_0x00010bf66f40();
                  _objc_release(uVar14);
                  FUN_1046b0524();
                  if ((uVar17 & 0xff) != 1) {
                    uStack_2a0 = uVar8;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                              (0xd000000000000012,0x800000010f20daf0);
                    uVar8 = param_2;
                    func_0x00010bf66ce0();
                    uStack_2a4 = (undefined4)uVar8;
                    _objc_release(uVar23);
                    puVar24 = puStack_128;
                    lVar10 = lStack_158;
                    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_158,puStack_128);
                    lStack_290 = lVar10;
                    _swift_bridgeObjectRelease(puVar24);
                    puVar11 = apuStack_110[0];
                    puVar13 = puStack_118;
                    puVar24 = puStack_120;
                    if (apuStack_110[0] == (undefined8 *)0x0) {
                      lStack_298 = 0;
                    }
                    else {
                      lVar10 = lStack_180;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                                (lStack_180,apuStack_110[0]);
                      lStack_298 = lVar10;
                      _swift_bridgeObjectRelease(puVar11);
                    }
                    puVar11 = apuStack_110[1];
                    if (puVar13 == (undefined8 *)0x0) {
                      lStack_188 = 0;
                    }
                    else {
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_188,puVar13);
                      _swift_bridgeObjectRelease(puVar13);
                    }
                    if (puVar24 == (undefined8 *)0x0) {
                      lStack_190 = 0;
                    }
                    else {
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_190,puVar24);
                      _swift_bridgeObjectRelease(puVar24);
                    }
                    puVar13 = puStack_130;
                    puVar24 = puStack_138;
                    if (puStack_130 == (undefined8 *)0x0) {
                      lStack_198 = 0;
                    }
                    else {
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_198,puStack_130);
                      _swift_bridgeObjectRelease(puVar13);
                    }
                    if (puVar24 == (undefined8 *)0x0) {
                      lStack_1a0 = 0;
                    }
                    else {
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1a0,puVar24);
                      _swift_bridgeObjectRelease(puVar24);
                    }
                    func_0x0001047c0a80(puVar11,lVar27,0x112d3bc20,&UNK_10d904ef0);
                    lVar16 = 0;
                    __s10Foundation4UUIDVMa();
                    lVar22 = *(long *)(lVar16 + -8);
                    pcVar19 = *(code **)(lVar22 + 0x30);
                    lVar10 = lVar27;
                    (*pcVar19)(lVar27,1,lVar16);
                    lVar12 = 0;
                    if ((int)lVar10 != 1) {
                      __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
                      (**(code **)(lVar22 + 8))(lVar27,lVar16);
                      lVar12 = lVar10;
                    }
                    func_0x0001047c0a80(lStack_f8,puVar25,0x112d3bc20,&UNK_10d904ef0);
                    puVar24 = puVar25;
                    (*pcVar19)(puVar25,1,lVar16);
                    lStack_2b0 = lVar12;
                    if ((int)puVar24 == 1) {
                      apuStack_110[0] = (undefined8 *)0x0;
                    }
                    else {
                      __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
                      apuStack_110[0] = puVar24;
                      (**(code **)(lVar22 + 8))(puVar25,lVar16);
                    }
                    func_0x0001047c0a80(puStack_140,lVar26,0x112d3bc20,&UNK_10d904ef0);
                    lVar27 = lVar26;
                    (*pcVar19)(lVar26,1,lVar16);
                    if ((int)lVar27 == 1) {
                      puStack_130 = (undefined8 *)0x0;
                    }
                    else {
                      __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
                      puStack_130 = (undefined8 *)lVar27;
                      (**(code **)(lVar22 + 8))(lVar26,lVar16);
                    }
                    lVar10 = lStack_150;
                    lVar27 = lStack_1b0;
                    lVar26 = lStack_1c8;
                    puVar24 = puStack_1d0;
                    if (lStack_1b0 == 0) {
                      puStack_118 = (undefined8 *)0x0;
                    }
                    else {
                      uVar14 = 0;
                      FUN_1047c6864(0);
                      lVar12 = lVar27;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar27,uVar14);
                      puStack_118 = (undefined8 *)lVar12;
                      _swift_bridgeObjectRelease(lVar27);
                    }
                    lVar27 = lStack_1b8;
                    if (lStack_1b8 == 0) {
                      puStack_120 = (undefined8 *)0x0;
                    }
                    else {
                      lVar12 = lStack_1b8;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                                (lStack_1b8,PTR___sSSN_11034da80);
                      puStack_120 = (undefined8 *)lVar12;
                      _swift_bridgeObjectRelease(lVar27);
                    }
                    lVar27 = lStack_1c0;
                    if (lStack_1c0 == 0) {
                      puStack_128 = (undefined8 *)0x0;
                    }
                    else {
                      lVar12 = lStack_1c0;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                                (lStack_1c0,PTR___sSSN_11034da80);
                      puStack_128 = (undefined8 *)lVar12;
                      _swift_bridgeObjectRelease(lVar27);
                    }
                    puVar25 = puStack_178;
                    if (lVar26 == 0) {
                      puStack_138 = (undefined8 *)0x0;
                    }
                    else {
                      lVar27 = lVar26;
                      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF
                                (lVar26,PTR___sSSN_11034da80);
                      puStack_138 = (undefined8 *)lVar27;
                      _swift_bridgeObjectRelease(lVar26);
                    }
                    lVar26 = lStack_1a8;
                    if ((ulong)puVar25 >> 0x3c < 0xf) {
                      func_0x00010006c00c(lStack_1a8,puVar25);
                      lVar27 = lVar26;
                      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar26,puVar25);
                      lStack_158 = lVar27;
                      func_0x0001000b44c0(lVar26,puVar25);
                    }
                    else {
                      lStack_158 = 0;
                    }
                    puVar25 = puStack_148;
                    if (puVar24 == (undefined8 *)0x0) {
                      lStack_180 = 0;
                    }
                    else {
                      lVar26 = lStack_220;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_220,puVar24);
                      lStack_180 = lVar26;
                      _swift_bridgeObjectRelease(puVar24);
                    }
                    puVar13 = puStack_1d8;
                    puVar24 = puStack_1e0;
                    if (puStack_1d8 == (undefined8 *)0x0) {
                      lVar26 = 0;
                    }
                    else {
                      lVar26 = lStack_228;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_228,puStack_1d8);
                      _swift_bridgeObjectRelease(puVar13);
                    }
                    lVar27 = lStack_208;
                    if (puVar24 == (undefined8 *)0x0) {
                      lVar12 = 0;
                    }
                    else {
                      lVar12 = lStack_230;
                      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_230,puVar24);
                      _swift_bridgeObjectRelease(puVar24);
                    }
                    uVar8 = uStack_280;
                    lStack_150 = lVar10;
                    puStack_148 = puVar25;
                    if ((ulong)puVar25 >> 0x3c < 0xf) {
                      func_0x00010006c00c(lVar10,puVar25);
                      lVar16 = lVar10;
                      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lVar10,puVar25);
                      func_0x0001000b44c0(lVar10,puVar25);
                    }
                    else {
                      lVar16 = 0;
                    }
                    uVar3 = uStack_1f8;
                    uVar2 = uStack_250;
                    uVar1 = uStack_258;
                    uVar15 = uStack_2a0;
                    lStack_1c0 = lVar16;
                    *(char *)(puVar21 + -2) = (char)uStack_2a4;
                    puVar21[-3] = uVar15;
                    puVar21[-4] = uStack_288;
                    uVar15 = uStack_268;
                    puVar21[-9] = uVar8;
                    puVar21[-8] = uVar15;
                    puVar21[-0xc] = uVar2;
                    puVar21[-0xd] = uStack_238;
                    *(char *)(puVar21 + -0xe) = (char)uStack_244;
                    puVar21[-0xb] = uVar1;
                    puVar21[-10] = lStack_240;
                    puVar21[-5] = lStack_278;
                    puVar21[-6] = lStack_270;
                    puVar21[-7] = lStack_260;
                    uVar8 = uStack_218;
                    puVar21[-0x10] = lVar27;
                    puVar21[-0xf] = uVar8;
                    *(char *)(puVar21 + -0x11) = (char)uStack_20c;
                    lVar22 = lStack_1f0;
                    puVar21[-0x12] = lStack_1f0;
                    lVar4 = lStack_1e8;
                    puVar21[-0x14] = lVar16;
                    puVar21[-0x13] = lVar4;
                    lStack_1b0 = lVar12;
                    puVar21[-0x15] = lVar12;
                    lStack_1b8 = lVar26;
                    puVar21[-0x16] = lVar26;
                    puVar21[-0x17] = lStack_180;
                    *(char *)(puVar21 + -0x18) = (char)uStack_200;
                    puVar21[-0x19] = lStack_158;
                    puVar21[-0x1a] = lStack_170;
                    puVar21[-0x1b] = lStack_168;
                    *(char *)(puVar21 + -0x1c) = (char)uStack_1fc;
                    puVar21[-0x1d] = lStack_160;
                    puVar21[-0x1e] = puStack_138;
                    puVar21[-0x1f] = puStack_128;
                    puVar21[-0x20] = puStack_120;
                    puVar24 = puStack_118;
                    puVar21[-0x22] = uVar3;
                    puVar21[-0x21] = puVar24;
                    puVar21[-0x23] = puStack_130;
                    puVar21[-0x24] = apuStack_110[0];
                    lVar26 = lStack_2b0;
                    puVar21[-0x25] = lStack_2b0;
                    lVar12 = lStack_1a0;
                    puVar21[-0x26] = lStack_1a0;
                    lVar6 = lStack_188;
                    lVar5 = lStack_190;
                    lVar16 = lStack_198;
                    lVar10 = lStack_290;
                    lVar27 = lStack_298;
                    func_0x00010c03f7e0(param_1,uVar28,uVar29,uVar30,uVar7);
                    uStack_100 = unaff_x20;
                    _objc_release(lVar4);
                    _objc_release(lVar22);
                    _objc_release(lStack_208);
                    func_0x0001000b44c0(lStack_150,puStack_148);
                    func_0x0001000b44c0(lStack_1a8,puStack_178);
                    _objc_release(lVar10);
                    _objc_release(lVar27);
                    _objc_release(lVar6);
                    _objc_release(lVar5);
                    _objc_release(lVar16);
                    _objc_release(lVar12);
                    _objc_release(lVar26);
                    _objc_release(apuStack_110[0]);
                    _objc_release(puStack_130);
                    _objc_release(puStack_118);
                    _objc_release(puStack_120);
                    _objc_release(puStack_128);
                    _objc_release(puStack_138);
                    _objc_release(lStack_158);
                    _objc_release(lStack_180);
                    _objc_release(lStack_1b8);
                    _objc_release(lStack_1b0);
                    _objc_release(lStack_1c0);
                    _objc_release(param_2);
                    _objc_release(lStack_260);
                    _objc_release(lStack_270);
                    _objc_release(lStack_278);
                    _objc_release(lStack_240);
                    _objc_release(lStack_160);
                    _objc_release(lStack_168);
                    _objc_release(lStack_170);
                    func_0x0001047c0ac8(puStack_140,0x112d3bc20,&UNK_10d904ef0);
                    func_0x0001047c0ac8(lStack_f8,0x112d3bc20,&UNK_10d904ef0);
                    func_0x0001047c0ac8(apuStack_110[1],0x112d3bc20,&UNK_10d904ef0);
                    return uStack_100;
                  }
                  _objc_release(lStack_1e8);
                  _objc_release(lStack_1f0);
                  _objc_release(lStack_208);
                  _objc_release(lStack_240);
                  _objc_release(lStack_260);
                  _objc_release(lStack_270);
                  ppuVar20 = &puStack_178;
                }
                else {
                  _objc_release(lStack_1e8);
                  _objc_release(lStack_1f0);
                  _objc_release(lStack_208);
                  ppuVar20 = &puStack_140;
                }
                goto LAB_1047bf430;
              }
              _objc_release(lStack_1e8);
              _objc_release(lStack_1f0);
              _objc_release(lStack_208);
              lVar26 = -0x130;
            }
            _objc_release(*(undefined8 *)((long)apuStack_110 + lVar26));
            _swift_bridgeObjectRelease(puStack_128);
            _objc_release(param_2);
            _swift_bridgeObjectRelease(puStack_1e0);
            _swift_bridgeObjectRelease(puStack_1d8);
            _swift_bridgeObjectRelease(puStack_1d0);
            _swift_bridgeObjectRelease(lStack_1c8);
            _swift_bridgeObjectRelease(lStack_1c0);
            _swift_bridgeObjectRelease(lStack_1b8);
            _swift_bridgeObjectRelease(lStack_1b0);
            _swift_bridgeObjectRelease(puStack_138);
            _swift_bridgeObjectRelease(puStack_130);
            _swift_bridgeObjectRelease(puStack_120);
            _swift_bridgeObjectRelease(puStack_118);
            _swift_bridgeObjectRelease(apuStack_110[0]);
            func_0x0001000b44c0(lStack_150,puStack_148);
            func_0x0001000b44c0(lStack_1a8,puStack_178);
            _objc_release(lStack_160);
            _objc_release(lStack_168);
            _objc_release(lStack_170);
          }
          func_0x0001047c0ac8(puVar24,0x112d3bc20,&UNK_10d904ef0);
          lVar10 = lStack_f8;
        }
        else {
          _objc_release(lStack_1e8);
          _objc_release(lStack_1f0);
          _objc_release(lVar12);
          _swift_bridgeObjectRelease(puStack_128);
          _objc_release(param_2);
          _swift_bridgeObjectRelease(puStack_1e0);
          _swift_bridgeObjectRelease(puStack_1d8);
          _swift_bridgeObjectRelease(puStack_1d0);
          _swift_bridgeObjectRelease(lStack_1c8);
          _swift_bridgeObjectRelease(lStack_1c0);
          _swift_bridgeObjectRelease(lStack_1b8);
          _swift_bridgeObjectRelease(lStack_1b0);
          _swift_bridgeObjectRelease(puStack_138);
          _swift_bridgeObjectRelease(puStack_130);
          _swift_bridgeObjectRelease(puStack_120);
          _swift_bridgeObjectRelease(puStack_118);
          _swift_bridgeObjectRelease(apuStack_110[0]);
          func_0x0001000b44c0(lStack_150,puStack_148);
          func_0x0001000b44c0(lStack_1a8,puStack_178);
          _objc_release(lStack_160);
          _objc_release(lStack_168);
          _objc_release(lStack_170);
          func_0x0001047c0ac8(puStack_140,0x112d3bc20,&UNK_10d904ef0);
        }
      }
      puVar18 = &UNK_10d904ef0;
      uVar7 = 0x112d3bc20;
      func_0x0001047c0ac8(lVar10,0x112d3bc20,&UNK_10d904ef0);
      puVar21 = apuStack_110[1];
    }
    func_0x0001047c0ac8(puVar21,uVar7,puVar18);
  }
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047c0620; end: 1047c0647; -[SCAdResponse initWithCoder:] */

void FUN_1047c0620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047bd9dc();
  return;
}



/* Entry: 1047c0648; end: 1047c06d3; -[SCAdResponse description] */

void FUN_1047c0648(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  func_0x000100b91d00();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047b6fb0(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001047c0a44(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      &SUB_100b91d00);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047c06d4; end: 1047c074f; -[SCAdResponse init] */

void FUN_1047c06d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdResponseWrapper.swift",0x23,2,
             0x234,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047c071c);
  (*pcVar1)();
}



/* Entry: 1047c0750; end: 1047c0983; -[SCAdResponse .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c0750(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f130 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f138 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f140 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f148 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f150 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f158 + 8));
  func_0x0001047c0ac8(param_1 + _DAT_1138151e8,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0ac8(param_1 + _DAT_1138151f0,0x112d3bc20,&UNK_10d904ef0);
  func_0x0001047c0ac8(param_1 + _DAT_1138151f8,0x112d3bc20,&UNK_10d904ef0);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815208));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815210));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815218));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815220));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815228));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815238));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815240));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113815248),
                      ((undefined8 *)(param_1 + _DAT_113815248))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815258 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815260 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113815268 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113815270),
                      ((undefined8 *)(param_1 + _DAT_113815270))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815278));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815280));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113815298));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138152c8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138152e0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138152e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1138152f0));
  return;
}



/* Entry: 1047c0984; end: 1047c09bb;  */

void FUN_1047c0984(undefined8 param_1)

{
  if (lRam000000011308f190 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e81ae90);
  return;
}



/* Entry: 1047c09bc; end: 1047c0b07;  */

undefined8 FUN_1047c09bc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1047c0b08; end: 1047c0b0f;  */

void FUN_1047c0b08(void)

{
  if (lRam000000011308f190 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e81ae90);
  return;
}



/* Entry: 1047c0b10; end: 1047c0c1f;  */

void FUN_1047c0b10(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
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
  undefined *puStack_98;
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
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_188 = &UNK_10dd35538;
  puStack_180 = &UNK_10dd35550;
  puStack_178 = &UNK_10dd35550;
  puStack_170 = &UNK_10dd35550;
  puStack_168 = &UNK_10dd35550;
  puStack_160 = &UNK_10dd35550;
  lVar2 = 0x13f;
  puStack_1b0 = puVar1;
  puStack_1a8 = puVar1;
  puStack_1a0 = puVar1;
  puStack_198 = puVar1;
  puStack_190 = puVar1;
  func_0x0001000b88b8();
  if (param_2 < 0x40) {
    lStack_158 = *(long *)(lVar2 + -8) + 0x40;
    puStack_138 = &UNK_10dd35568;
    puStack_130 = &UNK_10dd35568;
    puStack_128 = &UNK_10dd35568;
    puStack_120 = &UNK_10dd35568;
    puStack_118 = &UNK_10dd35568;
    puStack_110 = &UNK_10dd35580;
    puStack_108 = &UNK_10dd35568;
    puStack_100 = &UNK_10dd35568;
    puStack_f8 = &UNK_10dd35598;
    puStack_f0 = &UNK_10dd35580;
    puStack_e8 = &UNK_10dd35550;
    puStack_e0 = &UNK_10dd35550;
    puStack_d8 = &UNK_10dd35550;
    puStack_d0 = &UNK_10dd35598;
    puStack_c8 = &UNK_10dd35568;
    puStack_c0 = &UNK_10dd35568;
    puStack_b8 = PTR___sBi32_WV_11034d668 + 0x40;
    puStack_b0 = &UNK_10dd35580;
    puStack_a8 = &UNK_10dd35568;
    puStack_98 = &UNK_10dd35580;
    puStack_78 = &UNK_10dd35568;
    puStack_60 = &UNK_10dd35568;
    puStack_58 = &UNK_10dd35568;
    puStack_50 = &UNK_10dd35568;
    puStack_38 = &UNK_10dd35580;
    lStack_150 = lStack_158;
    lStack_148 = lStack_158;
    puStack_140 = puVar1;
    puStack_a0 = puVar1;
    puStack_90 = puVar1;
    puStack_88 = puVar1;
    puStack_80 = puVar1;
    puStack_70 = puVar1;
    puStack_68 = puVar1;
    puStack_48 = puVar1;
    puStack_40 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0x30,&puStack_1b0,param_1 + 0x50);
  }
  return;
}



/* Entry: 1047c0c20; end: 1047c0c2f; -[SCAdShimmerAnimationProperties alpha] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c0c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f1a0));
  return;
}



/* Entry: 1047c0c30; end: 1047c0c3f; -[SCAdShimmerAnimationProperties directionDegrees] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c0c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f1a8));
  return;
}



/* Entry: 1047c0c40; end: 1047c0ca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c0c40(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11308f1a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f1a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c0ca4; end: 1047c0d1b; -[SCAdShimmerAnimationProperties initWithAlpha:directionDegrees:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c0ca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11308f1a0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11308f1a8) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  return;
}



/* Entry: 1047c0d1c; end: 1047c0d73;  */

void FUN_1047c0d1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_allocWithZone();
  FUN_1047c0d74(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 1047c0d74; end: 1047c0e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c0d74(undefined8 param_1,char param_2,undefined8 param_3,char param_4)

{
  undefined *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  if (param_2 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c00e360(param_1);
  }
  *(undefined **)(unaff_x20 + _DAT_11308f1a0) = puVar1;
  if (param_4 == '\x01') {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_allocWithZone();
    func_0x00010c01e540();
  }
  *(undefined **)(unaff_x20 + _DAT_11308f1a8) = puVar1;
  _objc_msgSendSuper2(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c0e48; end: 1047c0e7b; -[SCAdShimmerAnimationProperties hash] */

undefined8 FUN_1047c0e48(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047c0e7c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047c0e7c; end: 1047c0f47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c0e7c(void)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f1a0);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_11308f1a8);
  if (lVar1 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar1);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047c0f48; end: 1047c10db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047c0f48(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar7 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar6 = *(long *)(unaff_x20 + _DAT_11308f1a0);
      lVar7 = *(long *)(lStack_68 + _DAT_11308f1a0);
      uVar4 = (uint)(lVar6 == 0 && lVar7 == 0);
      if (lVar6 != 0 && lVar7 != 0) {
        func_0x0001002ed07c(0);
        _objc_retain(lVar7);
        _objc_retain(lVar6);
        lVar2 = lVar6;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
        uVar4 = (uint)lVar2;
        _objc_release(lVar6);
        _objc_release(lVar7);
      }
      lVar6 = *(long *)(unaff_x20 + _DAT_11308f1a8);
      lVar7 = *(long *)(lStack_68 + _DAT_11308f1a8);
      if (lVar6 == 0) {
        lVar2 = lVar7;
        _objc_retain(lVar7);
        _objc_release(lStack_68);
        if (lVar7 != 0) {
          uVar5 = 0;
          goto LAB_1047c10ac;
        }
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        lVar2 = lStack_68;
        if (lVar7 != 0) {
          func_0x0001002ed07c(0);
          _objc_retain(lVar7);
          _objc_retain(lVar6);
          lVar3 = lVar6;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
          uVar5 = (uint)lVar3;
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
LAB_1047c10ac:
        _objc_release(lVar2);
      }
      uVar4 = uVar4 & uVar5;
      goto LAB_1047c10b8;
    }
  }
  uVar4 = 0;
LAB_1047c10b8:
  return uVar4 & 1;
}



/* Entry: 1047c10dc; end: 1047c115b; -[SCAdShimmerAnimationProperties isEqual:] */

uint FUN_1047c10dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047c0f48(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047c115c; end: 1047c115f; -[SCAdShimmerAnimationProperties copyWithZone:] */

void FUN_1047c115c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047c1160; end: 1047c1227; -[SCAdShimmerAnimationProperties encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain();
  uVar1 = 0x4148504c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4148504c41,0xe500000000000000);
  func_0x00010bf93020(param_3);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20db40);
  func_0x00010bf93020(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1047c1228; end: 1047c1267;  */

undefined8 FUN_1047c1228(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_1047c140c(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047c1268; end: 1047c12a3; -[SCAdShimmerAnimationProperties initWithCoder:] */

undefined8 FUN_1047c1268(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1047c140c();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1047c12a4; end: 1047c12db; -[SCAdShimmerAnimationProperties description] */

void FUN_1047c12a4(undefined8 param_1)

{
  _objc_retain();
  FUN_1047c1390();
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047c12dc; end: 1047c1357; -[SCAdShimmerAnimationProperties init] */

void FUN_1047c12dc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdDataModel/AdShimmerAnimationPropertiesWrapper.swift",0x35,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047c1324);
  (*pcVar1)();
}



/* Entry: 1047c1358; end: 1047c138f; -[SCAdShimmerAnimationProperties .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1358(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f1a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11308f1a8));
  return;
}



/* Entry: 1047c1390; end: 1047c140b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c1390(undefined8 param_1,long param_2)

{
  if (*(long *)(param_2 + _DAT_11308f1a0) == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  if (*(long *)(param_2 + _DAT_11308f1a8) != 0) {
    func_0x00010c067fc0();
  }
  return param_1;
}



/* Entry: 1047c140c; end: 1047c15c7;  */

undefined8 FUN_1047c140c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar2 = 0x4148504c41;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4148504c41,0xe500000000000000);
  lVar3 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,lVar3);
    _swift_unknownObjectRelease(lVar3);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar2,6);
    uVar2 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar2 = 0;
    }
  }
  uVar5 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f20db40);
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_1);
    _swift_unknownObjectRelease(param_1);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    func_0x0001002ed07c(0);
    puVar4 = &uStack_88;
    _swift_dynamicCast(puVar4,&uStack_60,puVar1 + 8,uVar5,6);
    uVar5 = uStack_88;
    if ((int)puVar4 == 0) {
      uVar5 = 0;
    }
  }
  func_0x00010bff2ba0();
  _objc_release(uVar2);
  _objc_release(uVar5);
  return unaff_x20;
}



/* Entry: 1047c15c8; end: 1047c15e7;  */

void FUN_1047c15c8(void)

{
  _objc_opt_self(&PTR_PTR_1129d3ef0);
  return;
}



/* Entry: 1047c15e8; end: 1047c1f0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c15e8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long extraout_x8;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  code *pcVar18;
  undefined *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined1 auStack_3b0 [8];
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  long lStack_398;
  long lStack_390;
  ulong uStack_388;
  long *plStack_380;
  ulong uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined1 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
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
  undefined1 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined8 uStack_1ff;
  undefined *puStack_1f0;
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
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined8 uStack_11f;
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
  undefined1 uStack_80;
  
  lVar8 = 0x112db3a00;
  func_0x0001000285a8(0x112db3a00,&UNK_10d95dff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_3b0 + -extraout_x8;
  lVar8 = 0;
  FUN_1046d90b0();
  iVar7 = *(int *)(lVar8 + 0x28);
  lVar9 = 0;
  FUN_10477ea9c();
  pcVar18 = *(code **)(*(long *)(lVar9 + -8) + 0x38);
  uStack_378 = (long)iVar7;
  (*pcVar18)((long)param_1 + (long)iVar7,1,1,lVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x50));
  lStack_398 = lVar8;
  func_0x000101541034(&uStack_110);
  puVar1[9] = uStack_c8;
  puVar1[8] = uStack_d0;
  puVar1[0xb] = uStack_b8;
  puVar1[10] = uStack_c0;
  puVar1[5] = uStack_e8;
  puVar1[4] = uStack_f0;
  puVar1[7] = uStack_d8;
  puVar1[6] = uStack_e0;
  *(undefined1 *)(puVar1 + 0x12) = uStack_80;
  puVar1[0xf] = uStack_98;
  puVar1[0xe] = uStack_a0;
  puVar1[0x11] = uStack_88;
  puVar1[0x10] = uStack_90;
  puVar1[0xd] = uStack_a8;
  puVar1[0xc] = uStack_b0;
  puVar1[1] = uStack_108;
  *puVar1 = uStack_110;
  puVar1[3] = uStack_f8;
  puVar1[2] = uStack_100;
  puVar2 = (undefined8 *)(param_2 + _DAT_11308f1d8);
  plStack_380 = (long *)puVar2[1];
  uVar14 = *puVar2;
  uVar11 = *(undefined8 *)(param_2 + _DAT_11308f1e0);
  param_1[1] = puVar2[1];
  *param_1 = uVar14;
  uVar14 = *(undefined8 *)(param_2 + _DAT_11308f1e8);
  param_1[2] = uVar11;
  param_1[3] = uVar14;
  uVar11 = ((undefined8 *)(param_2 + _DAT_11308f1f0))[1];
  param_1[4] = *(undefined8 *)(param_2 + _DAT_11308f1f0);
  param_1[5] = uVar11;
  puVar2 = (undefined8 *)(param_2 + _DAT_11308f1f8);
  uVar22 = puVar2[1];
  uVar24 = *puVar2;
  puVar3 = (undefined8 *)(param_2 + _DAT_11308f200);
  uVar14 = puVar3[1];
  uVar25 = puVar3[1];
  uVar20 = *puVar3;
  param_1[7] = puVar2[1];
  param_1[6] = uVar24;
  param_1[9] = uVar25;
  param_1[8] = uVar20;
  lVar8 = *(long *)(param_2 + _DAT_11308f208);
  puStack_3a0 = puVar1;
  lStack_390 = param_2;
  if (lVar8 == 0) {
    lVar8 = 1;
    (*pcVar18)(puVar16,1);
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(plStack_380);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar22);
  }
  else {
    _swift_bridgeObjectRetain(uVar14);
    _objc_retain(lVar8);
    _swift_bridgeObjectRetain(plStack_380);
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar22);
    FUN_1048264d8(puVar16,lVar8);
    lVar8 = 1;
    (*pcVar18)(puVar16,0);
  }
  uVar10 = (long)param_1 + uStack_378;
  FUN_1046d90e8(puVar16);
  lVar21 = lStack_390;
  lVar12 = lStack_398;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lStack_398 + 0x2c)) =
       *(undefined1 *)(lStack_390 + _DAT_11308f210);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lStack_398 + 0x30)) =
       *(undefined1 *)(lStack_390 + _DAT_11308f218);
  uVar15 = *(ulong *)(lStack_390 + _DAT_11308f220);
  if (uVar15 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    if (uVar15 >> 0x3e == 0) {
      uVar17 = *(ulong *)((uVar15 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar17 = uVar15;
      if (-1 < (long)uVar15) {
        uVar17 = uVar15 & 0xffffffffffffff8;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    puVar19 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar17 != 0) {
      puStack_1f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
      lVar8 = 0;
      func_0x0001046c70e4(0,uVar17 & ((long)uVar17 >> 0x3f ^ 0xffffffffffffffffU));
      if ((long)uVar17 < 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1047c1f0c);
        (*pcVar18)();
      }
      puStack_3a8 = param_1;
      if ((uVar15 & 0xc000000000000001) == 0) {
        plStack_380 = (long *)(uVar15 + 0x20);
        puVar19 = puStack_1f0;
        do {
          lVar12 = *plStack_380;
          uVar11 = *(undefined8 *)(lVar12 + _DAT_11308f2f0);
          uVar14 = ((undefined8 *)(lVar12 + _DAT_11308f2f0))[1];
          uVar22 = *(undefined8 *)(lVar12 + _DAT_11308f2f8);
          uVar24 = *(undefined8 *)(lVar12 + _DAT_11308f300);
          uVar25 = *(undefined8 *)(lVar12 + _DAT_11308f308);
          uVar20 = *(undefined8 *)(lVar12 + _DAT_11308f310);
          uVar10 = *(ulong *)(puVar19 + 0x10);
          uVar23 = *(ulong *)(puVar19 + 0x18);
          plStack_380 = plStack_380 + 1;
          uStack_378 = uVar17;
          puStack_1f0 = puVar19;
          _swift_bridgeObjectRetain(uVar14);
          if (uVar23 >> 1 <= uVar10) {
            lVar8 = 1;
            uVar15 = uVar10 + 1;
            func_0x0001046c70e4(1 < uVar23);
            puVar19 = puStack_1f0;
          }
          *(ulong *)(puVar19 + 0x10) = uVar10 + 1;
          *(undefined8 *)(puVar19 + uVar10 * 0x30 + 0x20) = uVar11;
          *(undefined8 *)(puVar19 + uVar10 * 0x30 + 0x28) = uVar14;
          *(undefined8 *)(puVar19 + uVar10 * 0x30 + 0x30) = uVar22;
          *(undefined8 *)(puVar19 + uVar10 * 0x30 + 0x38) = uVar24;
          *(undefined8 *)(puVar19 + uVar10 * 0x30 + 0x40) = uVar25;
          *(undefined8 *)(puVar19 + uVar10 * 0x30 + 0x48) = uVar20;
          uVar17 = uStack_378 - 1;
          uVar10 = uVar15;
          param_1 = puStack_3a8;
          lVar21 = lStack_390;
          lVar12 = lStack_398;
        } while (uVar17 != 0);
      }
      else {
        uVar23 = 0;
        uStack_388 = uVar15;
        uStack_378 = uVar17;
        do {
          puVar19 = puStack_1f0;
          uVar10 = uVar23;
          func_0x000101542dd0();
          plStack_380 = *(long **)(uVar10 + _DAT_11308f2f0);
          lVar12 = ((long *)(uVar10 + _DAT_11308f2f0))[1];
          uVar11 = *(undefined8 *)(uVar10 + _DAT_11308f2f8);
          uVar22 = *(undefined8 *)(uVar10 + _DAT_11308f300);
          uVar24 = *(undefined8 *)(uVar10 + _DAT_11308f308);
          uVar14 = *(undefined8 *)(uVar10 + _DAT_11308f310);
          _swift_bridgeObjectRetain(lVar12);
          _swift_unknownObjectRelease(uVar10);
          uVar10 = *(ulong *)(puVar19 + 0x10);
          puStack_1f0 = puVar19;
          if (*(ulong *)(puVar19 + 0x18) >> 1 <= uVar10) {
            lVar8 = 1;
            func_0x0001046c70e4(1 < *(ulong *)(puVar19 + 0x18),uVar10 + 1);
          }
          uVar23 = uVar23 + 1;
          *(ulong *)(puStack_1f0 + 0x10) = uVar10 + 1;
          *(long **)(puStack_1f0 + uVar10 * 0x30 + 0x20) = plStack_380;
          *(long *)(puStack_1f0 + uVar10 * 0x30 + 0x28) = lVar12;
          *(undefined8 *)(puStack_1f0 + uVar10 * 0x30 + 0x30) = uVar11;
          *(undefined8 *)(puStack_1f0 + uVar10 * 0x30 + 0x38) = uVar22;
          *(undefined8 *)(puStack_1f0 + uVar10 * 0x30 + 0x40) = uVar24;
          *(undefined8 *)(puStack_1f0 + uVar10 * 0x30 + 0x48) = uVar14;
          uVar10 = uStack_388;
          puVar19 = puStack_1f0;
          param_1 = puStack_3a8;
          lVar21 = lStack_390;
          lVar12 = lStack_398;
        } while (uStack_378 != uVar23);
      }
    }
  }
  *(undefined **)((long)param_1 + (long)*(int *)(lVar12 + 0x34)) = puVar19;
  puVar1 = (undefined8 *)(lVar21 + _DAT_11308f228);
  uVar11 = puVar1[1];
  uVar14 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x38));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar14;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x3c)) =
       *(undefined8 *)(lVar21 + _DAT_11308f230);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x40)) =
       *(undefined8 *)(lVar21 + _DAT_11308f238);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x44));
  lVar13 = *(long *)(lVar21 + _DAT_11308f240);
  if (lVar13 == 0) {
    uVar14 = 0;
    uVar22 = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 1;
  }
  else {
    *(undefined4 *)puVar1 = *(undefined4 *)(lVar13 + _DAT_113090c58);
    puVar2 = (undefined8 *)(lVar13 + _DAT_113090c60);
    uVar24 = puVar2[1];
    uVar14 = *puVar2;
    puVar1[2] = puVar2[1];
    puVar1[1] = uVar14;
    uVar14 = *(undefined8 *)(lVar13 + _DAT_113090c68);
    uVar22 = ((undefined8 *)(lVar13 + _DAT_113090c68))[1];
    _swift_bridgeObjectRetain(uVar22);
    _swift_bridgeObjectRetain(uVar24);
  }
  puVar1[3] = uVar14;
  puVar1[4] = uVar22;
  puVar1 = (undefined8 *)(lVar21 + _DAT_11308f248);
  uVar14 = puVar1[1];
  uVar22 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x48));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar22;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x4c));
  lVar13 = *(long *)(lVar21 + _DAT_11308f250);
  if (lVar13 == 0) {
    puVar1[0xd] = uStack_a8;
    puVar1[0xc] = uStack_b0;
    puVar1[0xf] = uStack_98;
    puVar1[0xe] = uStack_a0;
    puVar1[0x11] = uStack_88;
    puVar1[0x10] = uStack_90;
    *(undefined1 *)(puVar1 + 0x12) = uStack_80;
    puVar1[5] = uStack_e8;
    puVar1[4] = uStack_f0;
    puVar1[7] = uStack_d8;
    puVar1[6] = uStack_e0;
    puVar1[9] = uStack_c8;
    puVar1[8] = uStack_d0;
    puVar1[0xb] = uStack_b8;
    puVar1[10] = uStack_c0;
    puVar1[1] = uStack_108;
    *puVar1 = uStack_110;
    puVar1[3] = uStack_f8;
    puVar1[2] = uStack_100;
    _swift_bridgeObjectRetain(uVar14);
    _swift_bridgeObjectRetain(uVar11);
  }
  else {
    _swift_bridgeObjectRetain(uVar14);
    _objc_retain(lVar13);
    _swift_bridgeObjectRetain(uVar11);
    FUN_10482c6d0(&uStack_370,lVar13);
    _objc_release(lVar13);
    puVar1[0xd] = uStack_308;
    puVar1[0xc] = uStack_310;
    puVar1[0xf] = uStack_2f8;
    puVar1[0xe] = uStack_300;
    puVar1[0x11] = uStack_2e8;
    puVar1[0x10] = uStack_2f0;
    *(undefined1 *)(puVar1 + 0x12) = uStack_2e0;
    puVar1[5] = uStack_348;
    puVar1[4] = uStack_350;
    puVar1[7] = uStack_338;
    puVar1[6] = uStack_340;
    puVar1[9] = uStack_328;
    puVar1[8] = uStack_330;
    puVar1[0xb] = uStack_318;
    puVar1[10] = uStack_320;
    puVar1[1] = uStack_368;
    *puVar1 = uStack_370;
    puVar1[3] = uStack_358;
    puVar1[2] = uStack_360;
    func_0x000101545730(puVar1);
  }
  lVar13 = *(long *)(lVar21 + _DAT_11308f258);
  if (lVar13 == 0) {
    puStack_3a0[0xd] = uStack_a8;
    puStack_3a0[0xc] = uStack_b0;
    puStack_3a0[0xf] = uStack_98;
    puStack_3a0[0xe] = uStack_a0;
    puStack_3a0[0x11] = uStack_88;
    puStack_3a0[0x10] = uStack_90;
    *(undefined1 *)(puStack_3a0 + 0x12) = uStack_80;
    puStack_3a0[5] = uStack_e8;
    puStack_3a0[4] = uStack_f0;
    puStack_3a0[7] = uStack_d8;
    puStack_3a0[6] = uStack_e0;
    puStack_3a0[9] = uStack_c8;
    puStack_3a0[8] = uStack_d0;
    puStack_3a0[0xb] = uStack_b8;
    puStack_3a0[10] = uStack_c0;
    puStack_3a0[1] = uStack_108;
    *puStack_3a0 = uStack_110;
    puStack_3a0[3] = uStack_f8;
    puStack_3a0[2] = uStack_100;
    uVar11 = uStack_110;
  }
  else {
    _objc_retain();
    FUN_10482c6d0(&uStack_2d8);
    _objc_release(lVar13);
    puStack_3a0[0xd] = uStack_270;
    puStack_3a0[0xc] = uStack_278;
    puStack_3a0[0xf] = uStack_260;
    puStack_3a0[0xe] = uStack_268;
    puStack_3a0[0x11] = uStack_250;
    puStack_3a0[0x10] = uStack_258;
    *(undefined1 *)(puStack_3a0 + 0x12) = uStack_248;
    puStack_3a0[5] = uStack_2b0;
    puStack_3a0[4] = uStack_2b8;
    puStack_3a0[7] = uStack_2a0;
    puStack_3a0[6] = uStack_2a8;
    puStack_3a0[9] = uStack_290;
    puStack_3a0[8] = uStack_298;
    puStack_3a0[0xb] = uStack_280;
    puStack_3a0[10] = uStack_288;
    puStack_3a0[1] = uStack_2d0;
    *puStack_3a0 = uStack_2d8;
    puStack_3a0[3] = uStack_2c0;
    puStack_3a0[2] = uStack_2c8;
    func_0x000101545730();
    uVar11 = uStack_2d8;
  }
  plVar4 = (long *)((long)param_1 + (long)*(int *)(lVar12 + 0x54));
  lVar13 = *(long *)(lVar21 + _DAT_11308f260);
  if (lVar13 == 0) {
    lVar8 = 0;
    lVar9 = 0;
    uVar10 = 2;
  }
  else {
    FUN_10481401c();
  }
  *plVar4 = lVar13;
  plVar4[1] = uVar10;
  plVar4[2] = lVar8;
  plVar4[3] = lVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x58));
  bVar5 = *(long *)(lVar21 + _DAT_11308f268) == 0;
  if (bVar5) {
    uVar11 = 0;
  }
  else {
    func_0x00010bf885a0();
  }
  *puVar1 = uVar11;
  *(bool *)(puVar1 + 1) = bVar5;
  puVar1 = (undefined8 *)(lVar21 + _DAT_11308f270);
  uVar14 = puVar1[1];
  uVar11 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x5c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar11;
  puVar1 = (undefined8 *)(lVar21 + _DAT_11308f278);
  uVar11 = puVar1[1];
  uVar22 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x60));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar22;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 100)) =
       *(undefined8 *)(lVar21 + _DAT_11308f280);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x68));
  lVar8 = *(long *)(lVar21 + _DAT_11308f288);
  bVar5 = lVar8 == 0;
  if (bVar5) {
    *(undefined8 *)((long)puVar1 + 0x41) = 0;
    *(undefined8 *)((long)puVar1 + 0x39) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    _swift_bridgeObjectRetain(uVar11);
    _swift_bridgeObjectRetain(uVar14);
  }
  else {
    _swift_bridgeObjectRetain(uVar11);
    _objc_retain(lVar8);
    _swift_bridgeObjectRetain(uVar14);
    FUN_1047d3e28(&uStack_240,lVar8);
    _objc_release(lVar8);
    puVar1[5] = uStack_218;
    puVar1[4] = uStack_220;
    puVar1[7] = CONCAT71(uStack_207,uStack_208);
    puVar1[6] = uStack_210;
    *(undefined8 *)((long)puVar1 + 0x41) = uStack_1ff;
    *(ulong *)((long)puVar1 + 0x39) = CONCAT17(uStack_200,uStack_207);
    puVar1[1] = uStack_238;
    *puVar1 = uStack_240;
    puVar1[3] = uStack_228;
    puVar1[2] = uStack_230;
  }
  *(bool *)((long)puVar1 + 0x49) = bVar5;
  uVar11 = ((undefined8 *)(lVar21 + _DAT_11308f290))[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x6c));
  *puVar1 = *(undefined8 *)(lVar21 + _DAT_11308f290);
  puVar1[1] = uVar11;
  uVar11 = *(undefined8 *)(lVar21 + _DAT_11308f298);
  func_0x000100de78a0();
  _objc_retain(uVar11);
  FUN_1047cd82c(&puStack_1f0);
  _objc_release(uVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x70));
  puVar1[9] = uStack_1a8;
  puVar1[8] = uStack_1b0;
  puVar1[0xb] = uStack_198;
  puVar1[10] = uStack_1a0;
  puVar1[5] = uStack_1c8;
  puVar1[4] = uStack_1d0;
  puVar1[7] = uStack_1b8;
  puVar1[6] = uStack_1c0;
  puVar1[0x11] = uStack_168;
  puVar1[0x10] = uStack_170;
  puVar1[0x13] = uStack_158;
  puVar1[0x12] = uStack_160;
  puVar1[0xd] = uStack_188;
  puVar1[0xc] = uStack_190;
  puVar1[0xf] = uStack_178;
  puVar1[0xe] = uStack_180;
  *(undefined8 *)((long)puVar1 + 0xd1) = uStack_11f;
  *(ulong *)((long)puVar1 + 0xc9) = CONCAT17(uStack_120,uStack_127);
  puVar1[0x17] = uStack_138;
  puVar1[0x16] = uStack_140;
  puVar1[0x19] = CONCAT71(uStack_127,uStack_128);
  puVar1[0x18] = uStack_130;
  puVar1[0x15] = uStack_148;
  puVar1[0x14] = uStack_150;
  uVar6 = *(undefined1 *)(lVar21 + _DAT_11308f2a0);
  puVar1[1] = uStack_1e8;
  *puVar1 = puStack_1f0;
  puVar1[3] = uStack_1d8;
  puVar1[2] = uStack_1e0;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x74)) = uVar6;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x78)) =
       *(undefined8 *)(lVar21 + _DAT_11308f2a8);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar12 + 0x7c)) =
       *(undefined1 *)(lVar21 + _DAT_11308f2b0);
  uVar11 = *(undefined8 *)(lVar21 + _DAT_11308f2b8);
  uVar14 = ((undefined8 *)(lVar21 + _DAT_11308f2b8))[1];
  _swift_bridgeObjectRetain(uVar14);
  _objc_release(lVar21);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x80));
  *param_1 = uVar11;
  param_1[1] = uVar14;
  return;
}



/* Entry: 1047c1f0c; end: 1047c1f3b;  */

void FUN_1047c1f0c(undefined8 param_1)

{
  _objc_allocWithZone();
  func_0x0001047c2b40(param_1);
  return;
}



/* Entry: 1047c1f3c; end: 1047c1f47; -[SCAdSnap creativeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1f3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f1d8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f1d8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c1f48; end: 1047c1f57; -[SCAdSnap adType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c1f48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f1e0);
}



/* Entry: 1047c1f58; end: 1047c1f67; -[SCAdSnap adProductType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c1f58(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f1e8);
}



/* Entry: 1047c1f68; end: 1047c1fb3; -[SCAdSnap identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1f68(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11308f1f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11308f1f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c1fb4; end: 1047c1fbf; -[SCAdSnap brandName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1fb4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f1f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f1f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c1fc0; end: 1047c1fcb; -[SCAdSnap brandHeadline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1fc0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f200))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f200);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c1fcc; end: 1047c1fdb; -[SCAdSnap snapMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f208));
  return;
}



/* Entry: 1047c1fdc; end: 1047c1feb; -[SCAdSnap isSharable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047c1fdc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f210);
}



/* Entry: 1047c1fec; end: 1047c1ffb; -[SCAdSnap isUnskippable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047c1fec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f218);
}



/* Entry: 1047c1ffc; end: 1047c2057; -[SCAdSnap renditionList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c1ffc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11308f220);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_1047c7534(0);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1047c2058; end: 1047c2063; -[SCAdSnap payingAdvertiserName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c2058(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f228))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f228);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c2064; end: 1047c2073; -[SCAdSnap unskippableDurationMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c2064(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f230);
}



/* Entry: 1047c2074; end: 1047c2083; -[SCAdSnap adSkippableType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c2074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f238);
}



/* Entry: 1047c2084; end: 1047c2093; -[SCAdSnap promotePublisherStoryInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c2084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f240));
  return;
}



/* Entry: 1047c2094; end: 1047c209f; -[SCAdSnap offerDetail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c2094(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f248))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f248);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c20a0; end: 1047c20af; -[SCAdSnap interactiveAreaConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c20a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f250));
  return;
}



/* Entry: 1047c20b0; end: 1047c20bf; -[SCAdSnap vOperaInteractiveAreaConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c20b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f258));
  return;
}



/* Entry: 1047c20c0; end: 1047c20cf; -[SCAdSnap pageTransitionConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c20c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f260));
  return;
}



/* Entry: 1047c20d0; end: 1047c20df; -[SCAdSnap tapToAdvanceDelaySec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c20d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f268));
  return;
}



/* Entry: 1047c20e0; end: 1047c20eb; -[SCAdSnap creatorName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c20e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f270))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f270);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c20ec; end: 1047c20f7; -[SCAdSnap nameTaggedInHeadline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c20ec(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f278))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f278);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c20f8; end: 1047c2107; -[SCAdSnap adSlugRenderPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c20f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f280);
}



/* Entry: 1047c2108; end: 1047c2117; -[SCAdSnap adSpecEndCard] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c2108(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f288));
  return;
}



/* Entry: 1047c2118; end: 1047c218b; -[SCAdSnap adSpecData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c2118(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_11308f290))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11308f290);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1047c218c; end: 1047c219b; -[SCAdSnap adSpec] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c218c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11308f298));
  return;
}



/* Entry: 1047c219c; end: 1047c21ab; -[SCAdSnap isAiContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047c219c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f2a0);
}



/* Entry: 1047c21ac; end: 1047c21bb; -[SCAdSnap chatFeedAdSlugPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c21ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f2a8);
}



/* Entry: 1047c21bc; end: 1047c21cb; -[SCAdSnap isDynamicProduct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1047c21bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11308f2b0);
}



/* Entry: 1047c21cc; end: 1047c21d7; -[SCAdSnap organicSpotlightSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c21cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f2b8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f2b8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c21d8; end: 1047c222f;  */

void FUN_1047c21d8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c2230; end: 1047c255f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c2230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
                  undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_88 [24];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f1d8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f1e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f1e8) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f1f0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f1f8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f200);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308f208) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11308f210) = (undefined1)param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11308f218) = param_13._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11308f220) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f228);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11308f230) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f238) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308f240) = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f248);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11308f250) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11308f258) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11308f260) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_11308f268) = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f270);
  *puVar1 = param_26;
  puVar1[1] = param_27;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f278);
  *puVar1 = param_28;
  puVar1[1] = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_11308f280) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_11308f288) = param_31;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f290);
  *puVar1 = param_32;
  puVar1[1] = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_11308f298) = param_34;
  *(undefined1 *)(unaff_x20 + _DAT_11308f2a0) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_11308f2a8) = param_37;
  *(undefined1 *)(unaff_x20 + _DAT_11308f2b0) = param_38;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f2b8);
  *puVar1 = param_40;
  puVar1[1] = param_41;
  _objc_msgSendSuper2(auStack_88,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c2560; end: 1047c278f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c2560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined1 param_35,undefined4 param_36,
                  undefined8 param_37,undefined1 param_38,undefined4 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f1d8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f1e0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f1e8) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f1f0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f1f8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f200);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_11308f208) = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_11308f210) = (undefined1)param_13;
  *(undefined1 *)(unaff_x20 + _DAT_11308f218) = param_13._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11308f220) = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f228);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_11308f230) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f238) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_11308f240) = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f248);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_11308f250) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_11308f258) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_11308f260) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_11308f268) = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f270);
  *puVar1 = param_26;
  puVar1[1] = param_27;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f278);
  *puVar1 = param_28;
  puVar1[1] = param_29;
  *(undefined8 *)(unaff_x20 + _DAT_11308f280) = param_30;
  *(undefined8 *)(unaff_x20 + _DAT_11308f288) = param_31;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f290);
  *puVar1 = param_32;
  puVar1[1] = param_33;
  *(undefined8 *)(unaff_x20 + _DAT_11308f298) = param_34;
  *(undefined1 *)(unaff_x20 + _DAT_11308f2a0) = param_35;
  *(undefined8 *)(unaff_x20 + _DAT_11308f2a8) = param_37;
  *(undefined1 *)(unaff_x20 + _DAT_11308f2b0) = param_38;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f2b8);
  *puVar1 = param_40;
  puVar1[1] = param_41;
  FUN_1047c6864();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c2790; end: 1047c3473; -[SCAdSnap initWithCreativeId:adType:adProductType:identifier:brandName:brandHeadline:snapMedia:isSharable:isUnskippable:renditionList:payingAdvertiserName:unskippableDurationMs:adSkippableType:promotePublisherStoryInfo:offerDetail:interactiveAreaConfig:vOperaInteractiveAreaConfig:pageTransitionConfig:tapToAdvanceDelaySec:creatorName:nameTaggedInHeadline:adSlugRenderPosition:adSpecEndCard:adSpecData:adSpec:isAiContent:chatFeedAdSlugPosition:isDynamicProduct:organicSpotlightSnapId:] */

void FUN_1047c2790(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  ,undefined8 param_10,undefined1 param_11,undefined4 param_12,long param_13,
                  long param_14)

{
  long in_stack_00000030;
  long in_stack_00000058;
  long in_stack_00000060;
  long in_stack_00000078;
  long in_stack_000000a0;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_b8;
  long lStack_b0;
  
  if (param_4 == 0) {
    uStack_b8 = 0;
    lStack_b0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b8 = param_3;
    lStack_b0 = param_4;
  }
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_f0 = param_3;
  if (param_8 == 0) {
    uStack_d8 = 0;
    lStack_d0 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_d8 = uStack_f0;
    lStack_d0 = param_8;
  }
  if (param_9 == 0) {
    uStack_f0 = 0;
    lStack_e8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_e8 = param_9;
  }
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  if (param_13 != 0) {
    FUN_1047c7534();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    _objc_release(param_13);
  }
  if (param_14 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_14);
  }
  if (in_stack_00000030 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000030);
  }
  if (in_stack_00000058 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000058);
  }
  if (in_stack_00000060 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_00000060);
  }
  if (in_stack_00000078 != 0) {
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(in_stack_00000078);
  }
  if (in_stack_000000a0 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(in_stack_000000a0);
  }
  FUN_1047c2560(param_1,lStack_b0,uStack_b8,param_5,param_6,param_7,param_3,lStack_d0,uStack_d8,
                lStack_e8,uStack_f0,param_10,param_11);
  return;
}



/* Entry: 1047c3474; end: 1047c34a7; -[SCAdSnap hash] */

undefined8 FUN_1047c3474(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047c34a8();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047c34a8; end: 1047c3a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c34a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f1d8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f1d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f1e0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f1e8));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f1f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar2,((undefined8 *)(unaff_x20 + _DAT_11308f1f0))[1]);
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f1f8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f1f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f200))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f200);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308f208) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104826d28();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308f210));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308f218));
  lVar3 = *(long *)(unaff_x20 + _DAT_11308f220);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = 0;
    FUN_1047c7534(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar2);
    lVar4 = lVar3;
    func_0x00010bfde980();
    _objc_release(lVar3);
  }
  __ss6HasherV8_combineyySuF(lVar4);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f228))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f228);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  dVar5 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f230) != 0.0) {
    dVar5 = *(double *)(unaff_x20 + _DAT_11308f230);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar5);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f238);
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308f240) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_104817828();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308f248))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f248);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308f250) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10482b1c8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308f258) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_10482b1c8();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11308f260) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001048137ac();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11308f268);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    _objc_retain(lVar3);
    __sSo8NSObjectC10ObjectiveCE4hash4intoys6HasherVz_tF(auStack_78);
    _objc_release(lVar3);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_11308f270))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f270);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f278))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f278);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f280);
  __ss6HasherV8_combineyySuF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11308f288) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_1047d2e28();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11308f290))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f290);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  else {
    uVar2 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar2);
  FUN_1047ccf68();
  __ss6HasherV8_combineyySuF();
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308f2a0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f2a8));
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_11308f2b0));
  if (((undefined8 *)(unaff_x20 + _DAT_11308f2b8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f2b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047c3a88; end: 1047c445f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047c3a88(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long lVar34;
  long lVar35;
  long unaff_x20;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  double dVar40;
  double dVar41;
  uint uStack_110;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_e8;
  uint uStack_c4;
  uint uStack_b8;
  uint uStack_a4;
  long lStack_a0;
  long alStack_98 [5];
  
  func_0x0001047c6948(param_1,alStack_98,0x112d387f8,&UNK_10d902650);
  if (alStack_98[3] == 0) {
    func_0x00010006e7f4(alStack_98);
    return 0;
  }
  FUN_1047c6864();
  plVar30 = &lStack_a0;
  _swift_dynamicCast(plVar30,alStack_98,PTR___sypN_11034f1a8 + 8,param_1,6);
  if (((ulong)plVar30 & 1) == 0) {
    return 0;
  }
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f1d8))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f1d8))[1];
  if (lVar34 == 0 || lVar35 == 0) {
    uStack_a4 = (uint)(lVar34 == 0 && lVar35 == 0);
  }
  else {
    lVar31 = *(long *)(unaff_x20 + _DAT_11308f1d8);
    if (lVar31 == *(long *)(lStack_a0 + _DAT_11308f1d8) && lVar34 == lVar35) {
      uStack_a4 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_a4 = (uint)lVar31;
    }
  }
  iVar6 = *(int *)(unaff_x20 + _DAT_11308f1e0);
  iVar7 = *(int *)(lStack_a0 + _DAT_11308f1e0);
  iVar8 = *(int *)(unaff_x20 + _DAT_11308f1e8);
  iVar9 = *(int *)(lStack_a0 + _DAT_11308f1e8);
  lVar34 = *(long *)(unaff_x20 + _DAT_11308f1f0);
  if (lVar34 == *(long *)(lStack_a0 + _DAT_11308f1f0) &&
      ((long *)(unaff_x20 + _DAT_11308f1f0))[1] == ((long *)(lStack_a0 + _DAT_11308f1f0))[1]) {
    uStack_b8 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uStack_b8 = (uint)lVar34;
  }
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f1f8))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f1f8))[1];
  uVar24 = (uint)(lVar34 == 0 && lVar35 == 0);
  if ((lVar34 != 0) && (lVar35 != 0)) {
    lVar31 = *(long *)(unaff_x20 + _DAT_11308f1f8);
    if ((lVar31 == *(long *)(lStack_a0 + _DAT_11308f1f8)) && (lVar34 == lVar35)) {
      uVar24 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar24 = (uint)lVar31;
    }
  }
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f200))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f200))[1];
  uVar25 = (uint)(lVar34 == 0 && lVar35 == 0);
  if ((lVar34 != 0) && (lVar35 != 0)) {
    lVar31 = *(long *)(unaff_x20 + _DAT_11308f200);
    if ((lVar31 == *(long *)(lStack_a0 + _DAT_11308f200)) && (lVar34 == lVar35)) {
      uVar25 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar25 = (uint)lVar31;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_11308f208) == 0) {
    uStack_c4 = (uint)(*(long *)(lStack_a0 + _DAT_11308f208) == 0);
  }
  else {
    lVar34 = *(long *)(lStack_a0 + _DAT_11308f208);
    if (lVar34 == 0) {
      lVar35 = 0;
      alStack_98[1] = 0;
      alStack_98[2] = 0;
    }
    else {
      lVar35 = 0;
      FUN_104828670();
    }
    alStack_98[0] = lVar34;
    alStack_98[3] = lVar35;
    _objc_retain(lVar34);
    uStack_c4 = (uint)alStack_98;
    FUN_104826e84();
    func_0x00010006e7f4(alStack_98);
  }
  bVar16 = *(byte *)(unaff_x20 + _DAT_11308f210);
  bVar17 = *(byte *)(lStack_a0 + _DAT_11308f210);
  bVar18 = *(byte *)(unaff_x20 + _DAT_11308f218);
  bVar19 = *(byte *)(lStack_a0 + _DAT_11308f218);
  lVar35 = *(long *)(unaff_x20 + _DAT_11308f220);
  lVar34 = *(long *)(lStack_a0 + _DAT_11308f220);
  uVar39 = (uint)(lVar35 == 0 && lVar34 == 0);
  if ((lVar35 != 0) && (lVar34 != 0)) {
    _swift_bridgeObjectRetain(lVar34);
    lVar31 = lVar35;
    _swift_bridgeObjectRetain();
    uVar39 = (uint)lVar31;
    func_0x00010470d3b4();
    _swift_bridgeObjectRelease(lVar35);
    _swift_bridgeObjectRelease(lVar34);
  }
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f228))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f228))[1];
  uVar26 = (uint)(lVar34 == 0 && lVar35 == 0);
  if ((lVar34 != 0) && (lVar35 != 0)) {
    lVar31 = *(long *)(unaff_x20 + _DAT_11308f228);
    if ((lVar31 == *(long *)(lStack_a0 + _DAT_11308f228)) && (lVar34 == lVar35)) {
      uVar26 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar26 = (uint)lVar31;
    }
  }
  dVar40 = *(double *)(unaff_x20 + _DAT_11308f230);
  dVar41 = *(double *)(lStack_a0 + _DAT_11308f230);
  iVar10 = *(int *)(unaff_x20 + _DAT_11308f238);
  iVar11 = *(int *)(lStack_a0 + _DAT_11308f238);
  if (*(long *)(unaff_x20 + _DAT_11308f240) == 0) {
    uStack_e8 = (uint)(*(long *)(lStack_a0 + _DAT_11308f240) == 0);
  }
  else {
    lVar34 = *(long *)(lStack_a0 + _DAT_11308f240);
    if (lVar34 == 0) {
      lVar35 = 0;
      alStack_98[1] = 0;
      alStack_98[2] = 0;
    }
    else {
      lVar35 = 0;
      FUN_10481821c();
    }
    alStack_98[0] = lVar34;
    alStack_98[3] = lVar35;
    _objc_retain(lVar34);
    uStack_e8 = (uint)alStack_98;
    FUN_104817900();
    func_0x00010006e7f4(alStack_98);
  }
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f248))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f248))[1];
  uVar27 = (uint)(lVar34 == 0 && lVar35 == 0);
  if ((lVar34 != 0) && (lVar35 != 0)) {
    lVar31 = *(long *)(unaff_x20 + _DAT_11308f248);
    if ((lVar31 == *(long *)(lStack_a0 + _DAT_11308f248)) && (lVar34 == lVar35)) {
      uVar27 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar27 = (uint)lVar31;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_11308f250) == 0) {
    uStack_f0 = (uint)(*(long *)(lStack_a0 + _DAT_11308f250) == 0);
  }
  else {
    lVar34 = *(long *)(lStack_a0 + _DAT_11308f250);
    if (lVar34 == 0) {
      lVar35 = 0;
      alStack_98[1] = 0;
      alStack_98[2] = 0;
    }
    else {
      lVar35 = 0;
      FUN_10482c9f4();
    }
    alStack_98[0] = lVar34;
    alStack_98[3] = lVar35;
    _objc_retain(lVar34);
    uStack_f0 = (uint)alStack_98;
    FUN_10482b3c8();
    func_0x00010006e7f4(alStack_98);
  }
  if (*(long *)(unaff_x20 + _DAT_11308f258) == 0) {
    uStack_f4 = (uint)(*(long *)(lStack_a0 + _DAT_11308f258) == 0);
  }
  else {
    lVar34 = *(long *)(lStack_a0 + _DAT_11308f258);
    if (lVar34 == 0) {
      lVar35 = 0;
      alStack_98[1] = 0;
      alStack_98[2] = 0;
    }
    else {
      lVar35 = 0;
      FUN_10482c9f4();
    }
    alStack_98[0] = lVar34;
    alStack_98[3] = lVar35;
    _objc_retain(lVar34);
    uStack_f4 = (uint)alStack_98;
    FUN_10482b3c8();
    func_0x00010006e7f4(alStack_98);
  }
  if (*(long *)(unaff_x20 + _DAT_11308f260) == 0) {
    uStack_f8 = (uint)(*(long *)(lStack_a0 + _DAT_11308f260) == 0);
  }
  else {
    lVar34 = *(long *)(lStack_a0 + _DAT_11308f260);
    if (lVar34 == 0) {
      lVar35 = 0;
      alStack_98[1] = 0;
      alStack_98[2] = 0;
    }
    else {
      lVar35 = 0;
      FUN_104814298();
    }
    alStack_98[0] = lVar34;
    alStack_98[3] = lVar35;
    _objc_retain(lVar34);
    uStack_f8 = (uint)alStack_98;
    FUN_104813950();
    func_0x00010006e7f4(alStack_98);
  }
  lVar35 = *(long *)(unaff_x20 + _DAT_11308f268);
  lVar34 = *(long *)(lStack_a0 + _DAT_11308f268);
  uVar37 = (uint)(lVar35 == 0 && lVar34 == 0);
  if ((lVar35 != 0) && (lVar34 != 0)) {
    func_0x0001002ed07c(0);
    _objc_retain(lVar34);
    _objc_retain();
    lVar31 = lVar35;
    __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ();
    uVar37 = (uint)lVar31;
    _objc_release(lVar35);
    _objc_release(lVar34);
  }
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f270))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f270))[1];
  uVar28 = (uint)(lVar34 == 0 && lVar35 == 0);
  if ((lVar34 != 0) && (lVar35 != 0)) {
    lVar31 = *(long *)(unaff_x20 + _DAT_11308f270);
    if ((lVar31 == *(long *)(lStack_a0 + _DAT_11308f270)) && (lVar34 == lVar35)) {
      uVar28 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar28 = (uint)lVar31;
    }
  }
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f278))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f278))[1];
  uVar29 = (uint)(lVar34 == 0 && lVar35 == 0);
  if ((lVar34 != 0) && (lVar35 != 0)) {
    lVar31 = *(long *)(unaff_x20 + _DAT_11308f278);
    if ((lVar31 == *(long *)(lStack_a0 + _DAT_11308f278)) && (lVar34 == lVar35)) {
      uVar29 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar29 = (uint)lVar31;
    }
  }
  iVar12 = *(int *)(unaff_x20 + _DAT_11308f280);
  iVar13 = *(int *)(lStack_a0 + _DAT_11308f280);
  if (*(long *)(unaff_x20 + _DAT_11308f288) == 0) {
    uStack_110 = (uint)(*(long *)(lStack_a0 + _DAT_11308f288) == 0);
  }
  else {
    lVar34 = *(long *)(lStack_a0 + _DAT_11308f288);
    if (lVar34 == 0) {
      lVar35 = 0;
      alStack_98[1] = 0;
      alStack_98[2] = 0;
    }
    else {
      lVar35 = 0;
      FUN_1047d3f3c();
    }
    alStack_98[0] = lVar34;
    alStack_98[3] = lVar35;
    _objc_retain(lVar34);
    uStack_110 = (uint)alStack_98;
    FUN_1047d2fac();
    func_0x00010006e7f4(alStack_98);
  }
  uVar33 = *(undefined8 *)(lStack_a0 + _DAT_11308f290);
  uVar4 = ((undefined8 *)(lStack_a0 + _DAT_11308f290))[1];
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_11308f290);
  uVar5 = ((undefined8 *)(unaff_x20 + _DAT_11308f290))[1];
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_1047c41c4;
    func_0x000100de78a0(uVar33,uVar4);
    func_0x000100de78a0(uVar33,uVar4);
    func_0x000100de78a0(uVar3,uVar5);
    uVar32 = uVar3;
    func_0x000100e25fcc(uVar3,uVar5,uVar33,uVar4);
    uVar38 = (uint)uVar32;
    func_0x0001000b44c0(uVar33,uVar4);
    func_0x0001000b44c0(uVar33,uVar4);
    func_0x0001000b44c0(uVar3,uVar5);
  }
  else if (uVar4 >> 0x3c < 0xf) {
LAB_1047c41c4:
    func_0x000100de78a0(uVar33,uVar4);
    func_0x000100de78a0(uVar3,uVar5);
    func_0x0001000b44c0(uVar3,uVar5);
    func_0x0001000b44c0(uVar33,uVar4);
    uVar38 = 0;
  }
  else {
    func_0x000100de78a0(uVar33,uVar4);
    func_0x000100de78a0(uVar3,uVar5);
    func_0x0001000b44c0(uVar3,uVar5);
    uVar38 = 1;
  }
  lVar34 = *(long *)(lStack_a0 + _DAT_11308f298);
  uVar33 = 0;
  FUN_1047cdac4();
  alStack_98[0] = lVar34;
  alStack_98[3] = uVar33;
  _objc_retain(lVar34);
  plVar30 = alStack_98;
  func_0x0001047cd134(plVar30);
  func_0x00010006e7f4(alStack_98);
  bVar20 = *(byte *)(unaff_x20 + _DAT_11308f2a0);
  bVar21 = *(byte *)(lStack_a0 + _DAT_11308f2a0);
  iVar14 = *(int *)(unaff_x20 + _DAT_11308f2a8);
  iVar15 = *(int *)(lStack_a0 + _DAT_11308f2a8);
  bVar22 = *(byte *)(unaff_x20 + _DAT_11308f2b0);
  bVar23 = *(byte *)(lStack_a0 + _DAT_11308f2b0);
  lVar34 = ((long *)(unaff_x20 + _DAT_11308f2b8))[1];
  lVar35 = ((long *)(lStack_a0 + _DAT_11308f2b8))[1];
  if (lVar34 == 0) {
    _swift_bridgeObjectRetain(lVar35);
    _objc_release(lStack_a0);
    if (lVar35 != 0) {
      _swift_bridgeObjectRelease(lVar35);
      uVar36 = 0;
      goto LAB_1047c4350;
    }
LAB_1047c4330:
    uVar36 = 1;
  }
  else {
    uVar36 = 0;
    if (lVar35 != 0) {
      lVar31 = *(long *)(unaff_x20 + _DAT_11308f2b8);
      if ((lVar31 == *(long *)(lStack_a0 + _DAT_11308f2b8)) && (lVar34 == lVar35)) {
        _objc_release(lStack_a0);
        goto LAB_1047c4330;
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar36 = (uint)lVar31;
    }
    _objc_release(lStack_a0);
  }
LAB_1047c4350:
  uVar1 = 0;
  if (iVar8 == iVar9) {
    uVar1 = uStack_a4 & iVar6 == iVar7;
  }
  uVar2 = 0;
  if (iVar10 == iVar11) {
    uVar2 = uVar39 & ((uVar1 & uStack_b8 & uVar24 & uVar25 & uStack_c4 ^ 1 |
                      (uint)(byte)(bVar16 ^ bVar17 | bVar18 ^ bVar19)) ^ 0xffffffff) &
            uVar26 & dVar40 == dVar41;
  }
  uVar24 = 0;
  if (iVar14 == iVar15) {
    uVar24 = uVar2 & uStack_e8 & uVar27 & uStack_f0 & uStack_f4 & uStack_f8 & uVar37 & uVar28 &
                     uVar29 & (uint)(iVar12 == iVar13) & uStack_110 & uVar38 & (uint)plVar30 &
             ((bVar20 ^ bVar21) ^ 0xffffffff);
  }
  return uVar24 & ((bVar22 ^ bVar23) ^ 1) & uVar36;
}



/* Entry: 1047c4460; end: 1047c450b; -[SCAdSnap isEqual:] */

uint FUN_1047c4460(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047c3a88(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047c450c; end: 1047c450f; -[SCAdSnap copyWithZone:] */

void FUN_1047c450c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047c4510; end: 1047c4e97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c4510(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11308f1d8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f1d8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x4556495441455243;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4556495441455243,0xeb0000000044495f);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x455059545f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441,0xe700000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x55444f52505f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441,0xef455059545f5443);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f1f0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11308f1f0))[1]);
  uVar2 = 0x494649544e454449;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f1f8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f1f8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x414e5f444e415242;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e5f444e415242,0xea0000000000454d);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f200))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f200);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x45485f444e415242;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45485f444e415242,0xee00454e494c4441);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x44454d5f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44454d5f50414e53,0xea00000000004149);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x41524148535f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41524148535f5349,0xeb00000000454c42);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x494b534e555f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494b534e555f5349,0xee00454c42415050);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_11308f220);
  if (lVar3 != 0) {
    uVar1 = 0;
    FUN_1047c7534(0);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar3,uVar1);
  }
  uVar1 = 0x4f495449444e4552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f495449444e4552,0xee005453494c5f4e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar3);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f228))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f228);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar4 = 0xd000000000000016;
  uVar2 = uVar4;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20dba0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f230);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dbc0);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f1bb0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001c;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20dbe0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f248))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f248);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x45445f524546464f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f524546464f,0xec0000004c494154);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dc00);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f20dc20);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20dc40);
  func_0x00010bf93020(param_1);
  _objc_release(uVar4);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20dc60);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f270))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f270);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f524f5441455243;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524f5441455243,0xec000000454d414e);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f278))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f278);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dc80);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dca0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000010;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20dcc0);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_11308f290))[1] >> 0x3c < 0xf) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f290);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1);
  }
  else {
    uVar1 = 0;
  }
  uVar2 = 0x5f434550535f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f434550535f4441,0xec00000041544144);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x434550535f4441;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434550535f4441,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f435f49415f5349;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f435f49415f5349,0xed0000544e45544e);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f20dce0);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f20daf0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f2b8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f2b8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000019;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000019,0x800000010f20dd00);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1047c4e98; end: 1047c4ee7; -[SCAdSnap encodeWithCoder:] */

void FUN_1047c4e98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047c4510(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047c4ee8; end: 1047c4f17;  */

void FUN_1047c4ee8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047c4f18(param_1);
  return;
}



/* Entry: 1047c4f18; end: 1047c65c7;  */

undefined8 FUN_1047c4f18(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  undefined8 unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lStack_1d8;
  ulong uStack_1d0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_180;
  ulong uStack_170;
  ulong uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  ulong uStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  ulong uStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  long lStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  uVar3 = 0x4556495441455243;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4556495441455243,0xeb0000000044495f);
  uVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (uVar4 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    lStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar4);
    _swift_unknownObjectRelease(uVar4);
  }
  uStack_98 = uStack_b8;
  uStack_a0 = uStack_c0;
  lStack_88 = lStack_a8;
  uStack_90 = uStack_b0;
  if (lStack_a8 == 0) {
    func_0x00010006e7f4(&uStack_a0);
    uVar4 = 0;
    lVar14 = 0;
  }
  else {
    plVar5 = &lStack_d0;
    _swift_dynamicCast(plVar5,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar4 = uStack_c8;
    lVar14 = lStack_d0;
    if ((int)plVar5 == 0) {
      lVar14 = 0;
      uVar4 = 0;
    }
  }
  uVar3 = 0x455059545f4441;
  uVar12 = 0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x455059545f4441);
  uVar6 = param_1;
  func_0x00010bf66f40(param_1);
  _objc_release(uVar3);
  func_0x0001042a6cc4(uVar6);
  if ((uVar12 & 0xff) == 1) {
LAB_1047c51b0:
    _objc_release(param_1);
  }
  else {
    uVar3 = 0x55444f52505f4441;
    uVar12 = 0x545f5443;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55444f52505f4441);
    func_0x00010bf66f40();
    _objc_release(uVar3);
    func_0x000102d02a38();
    if ((uVar12 & 0xff) == 1) goto LAB_1047c51b0;
    uVar3 = 0x494649544e454449;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494649544e454449,0xea00000000005245);
    uVar6 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar6 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar6);
      _swift_unknownObjectRelease(uVar6);
    }
    puVar1 = PTR___sypN_11034f1a8;
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uVar4);
LAB_1047c5214:
      func_0x00010006e7f4(&uStack_a0);
      goto LAB_1047c51c0;
    }
    plVar5 = &lStack_d0;
    _swift_dynamicCast(plVar5,&uStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_c8;
    lVar11 = lStack_d0;
    if (((ulong)plVar5 & 1) == 0) goto LAB_1047c51b0;
    uVar3 = 0x414e5f444e415242;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x414e5f444e415242,0xea0000000000454d);
    uVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar7 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar7);
      _swift_unknownObjectRelease(uVar7);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      lStack_128 = 0;
      uStack_e0 = 0;
    }
    else {
      plVar5 = &lStack_d0;
      _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_128 = lStack_d0;
      uStack_e0 = uStack_c8;
      if ((int)plVar5 == 0) {
        lStack_128 = 0;
        uStack_e0 = 0;
      }
    }
    uVar3 = 0x45485f444e415242;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45485f444e415242,0xee00454e494c4441);
    uVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar7 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar7);
      _swift_unknownObjectRelease(uVar7);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      lStack_130 = 0;
      uStack_f8 = 0;
    }
    else {
      plVar5 = &lStack_d0;
      _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_130 = lStack_d0;
      uStack_f8 = uStack_c8;
      if ((int)plVar5 == 0) {
        lStack_130 = 0;
        uStack_f8 = 0;
      }
    }
    uVar3 = 0x44454d5f50414e53;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44454d5f50414e53,0xea00000000004149);
    uVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar7 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar7);
      _swift_unknownObjectRelease(uVar7);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      lStack_e8 = 0;
    }
    else {
      uVar3 = 0;
      FUN_104828670(0);
      plVar5 = &lStack_d0;
      _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar3,6);
      lStack_e8 = lStack_d0;
      if ((int)plVar5 == 0) {
        lStack_e8 = 0;
      }
    }
    uVar3 = 0x41524148535f5349;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x41524148535f5349,0xeb00000000454c42);
    func_0x00010bf66ce0();
    _objc_release(uVar3);
    uVar3 = 0x494b534e555f5349;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494b534e555f5349,0xee00454c42415050);
    func_0x00010bf66ce0();
    _objc_release(uVar3);
    uVar3 = 0x4f495449444e4552;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f495449444e4552,0xee005453494c5f4e);
    uVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar7 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar7);
      _swift_unknownObjectRelease(uVar7);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      lStack_100 = 0;
    }
    else {
      uVar3 = 0x11308f2c0;
      func_0x0001000285a8(0x11308f2c0,&UNK_10dd355d8);
      plVar5 = &lStack_d0;
      _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar3,6);
      lStack_100 = lStack_d0;
      if ((int)plVar5 == 0) {
        lStack_100 = 0;
      }
    }
    uVar13 = 0xd000000000000016;
    uVar3 = uVar13;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20dba0);
    uVar7 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (uVar7 == 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      lStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar7);
      _swift_unknownObjectRelease(uVar7);
    }
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_88 = lStack_a8;
    uStack_90 = uStack_b0;
    uVar3 = uStack_b0;
    if (lStack_a8 == 0) {
      func_0x00010006e7f4(&uStack_a0);
      lStack_138 = 0;
      uStack_108 = 0;
    }
    else {
      plVar5 = &lStack_d0;
      _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
      lStack_138 = lStack_d0;
      uStack_108 = uStack_c8;
      if ((int)plVar5 == 0) {
        lStack_138 = 0;
        uStack_108 = 0;
      }
    }
    uVar7 = uStack_108;
    uVar8 = 0xd000000000000017;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dbc0);
    func_0x00010bf66da0(param_1);
    _objc_release(uVar8);
    uVar8 = 0xd000000000000011;
    uVar12 = 0xf1f1bb0;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011);
    func_0x00010bf66f40();
    _objc_release(uVar8);
    FUN_1046b3eac();
    if ((uVar12 & 0xff) == 1) {
      _objc_release(lStack_e8);
      _swift_bridgeObjectRelease(uVar6);
      _objc_release(param_1);
    }
    else {
      uVar8 = 0xd00000000000001c;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001c,0x800000010f20dbe0);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_140 = 0;
      }
      else {
        uVar8 = 0;
        FUN_10481821c(0);
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar8,6);
        lStack_140 = lStack_d0;
        if ((int)plVar5 == 0) {
          lStack_140 = 0;
        }
      }
      uVar8 = 0x45445f524546464f;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x45445f524546464f,0xec0000004c494154);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_190 = 0;
        uStack_148 = 0;
      }
      else {
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
        lStack_190 = lStack_d0;
        uStack_148 = uStack_c8;
        if ((int)plVar5 == 0) {
          lStack_190 = 0;
          uStack_148 = 0;
        }
      }
      uVar8 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dc00);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_150 = 0;
      }
      else {
        uVar8 = 0;
        FUN_10482c9f4(0);
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar8,6);
        lStack_150 = lStack_d0;
        if ((int)plVar5 == 0) {
          lStack_150 = 0;
        }
      }
      uVar8 = 0xd00000000000001f;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f20dc20);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_120 = 0;
      }
      else {
        uVar8 = 0;
        FUN_10482c9f4(0);
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar8,6);
        lStack_120 = lStack_d0;
        if ((int)plVar5 == 0) {
          lStack_120 = 0;
        }
      }
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f20dc40);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_158 = 0;
      }
      else {
        uVar13 = 0;
        FUN_104814298(0);
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar13,6);
        lStack_158 = lStack_d0;
        if ((int)plVar5 == 0) {
          lStack_158 = 0;
        }
      }
      uVar13 = 0xd000000000000018;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f20dc60);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_160 = 0;
      }
      else {
        uVar13 = 0;
        func_0x0001002ed07c(0);
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar13,6);
        lStack_160 = lStack_d0;
        if ((int)plVar5 == 0) {
          lStack_160 = 0;
        }
      }
      uVar13 = 0x5f524f5441455243;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f524f5441455243,0xec000000454d414e);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_198 = 0;
        uStack_168 = 0;
      }
      else {
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
        lStack_198 = lStack_d0;
        uStack_168 = uStack_c8;
        if ((int)plVar5 == 0) {
          lStack_198 = 0;
          uStack_168 = 0;
        }
      }
      uVar13 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dc80);
      uVar9 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar13);
      if (uVar9 == 0) {
        uStack_b8 = 0;
        uStack_c0 = 0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
        _swift_unknownObjectRelease(uVar9);
      }
      uStack_98 = uStack_b8;
      uStack_a0 = uStack_c0;
      lStack_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        func_0x00010006e7f4(&uStack_a0);
        lStack_1a0 = 0;
        uStack_170 = 0;
      }
      else {
        plVar5 = &lStack_d0;
        _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
        lStack_1a0 = lStack_d0;
        uStack_170 = uStack_c8;
        if ((int)plVar5 == 0) {
          lStack_1a0 = 0;
          uStack_170 = 0;
        }
      }
      uVar13 = 0xd000000000000017;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f20dca0);
      uVar9 = param_1;
      func_0x00010bf66f40();
      _objc_release(uVar13);
      if (uVar9 < 3) {
        uVar13 = 0xd000000000000010;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000010,0x800000010f20dcc0)
        ;
        uVar9 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (uVar9 == 0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
          _swift_unknownObjectRelease(uVar9);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          func_0x00010006e7f4(&uStack_a0);
          lStack_180 = 0;
        }
        else {
          uVar13 = 0;
          FUN_1047d3f3c(0);
          plVar5 = &lStack_d0;
          _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar13,6);
          lStack_180 = lStack_d0;
          if ((int)plVar5 == 0) {
            lStack_180 = 0;
          }
        }
        uVar13 = 0x5f434550535f4441;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f434550535f4441,0xec00000041544144)
        ;
        uVar9 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (uVar9 == 0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar9);
          _swift_unknownObjectRelease(uVar9);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          func_0x00010006e7f4(&uStack_a0);
          lStack_1a8 = 0;
          uVar9 = 0xf000000000000000;
        }
        else {
          plVar5 = &lStack_d0;
          _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___s10Foundation4DataVN_110350ae0,6);
          uVar9 = uStack_c8;
          lStack_1a8 = lStack_d0;
          if ((int)plVar5 == 0) {
            lStack_1a8 = 0;
            uVar9 = 0xf000000000000000;
          }
        }
        uVar13 = 0x434550535f4441;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x434550535f4441,0xe700000000000000);
        uVar10 = param_1;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
        if (uVar10 == 0) {
          uStack_b8 = 0;
          uStack_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar10);
          _swift_unknownObjectRelease(uVar10);
        }
        uStack_98 = uStack_b8;
        uStack_a0 = uStack_c0;
        lStack_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 != 0) {
          uVar13 = 0;
          FUN_1047cdac4(0);
          plVar5 = &lStack_d0;
          _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,uVar13,6);
          lVar2 = lStack_d0;
          if (((ulong)plVar5 & 1) == 0) {
            _objc_release(param_1);
            _objc_release(lStack_180);
            _objc_release(lStack_140);
            _objc_release(lStack_150);
            _objc_release(lStack_120);
            _objc_release(lStack_158);
            _objc_release(lStack_160);
            _objc_release(lStack_e8);
            _swift_bridgeObjectRelease(uVar6);
            _swift_bridgeObjectRelease(uVar4);
            _swift_bridgeObjectRelease(uStack_108);
            _swift_bridgeObjectRelease(lStack_100);
            _swift_bridgeObjectRelease(uStack_f8);
            _swift_bridgeObjectRelease(uStack_e0);
            _swift_bridgeObjectRelease(uStack_170);
            _swift_bridgeObjectRelease(uStack_168);
            _swift_bridgeObjectRelease(uStack_148);
            func_0x0001000b44c0(lStack_1a8,uVar9);
          }
          else {
            uVar13 = 0x4f435f49415f5349;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                      (0x4f435f49415f5349,0xed0000544e45544e);
            func_0x00010bf66ce0();
            _objc_release(uVar13);
            uVar13 = 0xd00000000000001a;
            uVar12 = 0xf20dce0;
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a);
            func_0x00010bf66f40();
            _objc_release(uVar13);
            FUN_1046b6128();
            if ((uVar12 & 0xff) != 1) {
              uVar13 = 0xd000000000000012;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd000000000000012,0x800000010f20daf0);
              func_0x00010bf66ce0();
              _objc_release(uVar13);
              uVar13 = 0xd000000000000019;
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                        (0xd000000000000019,0x800000010f20dd00);
              uVar10 = param_1;
              func_0x00010bf67000();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar13);
              if (uVar10 == 0) {
                uStack_b8 = 0;
                uStack_c0 = 0;
                lStack_a8 = 0;
                uStack_b0 = 0;
              }
              else {
                __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,uVar10);
                _swift_unknownObjectRelease(uVar10);
              }
              uStack_98 = uStack_b8;
              uStack_a0 = uStack_c0;
              lStack_88 = lStack_a8;
              uStack_90 = uStack_b0;
              if (lStack_a8 == 0) {
                func_0x00010006e7f4(&uStack_a0);
                lStack_1d8 = 0;
                uStack_1d0 = 0;
              }
              else {
                plVar5 = &lStack_d0;
                _swift_dynamicCast(plVar5,&uStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
                lStack_1d8 = lStack_d0;
                uStack_1d0 = uStack_c8;
                if ((int)plVar5 == 0) {
                  lStack_1d8 = 0;
                  uStack_1d0 = 0;
                }
              }
              if (uVar4 == 0) {
                uStack_108 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar14,uVar4);
                _swift_bridgeObjectRelease(uVar4);
                uStack_108 = lVar14;
              }
              __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar11,uVar6);
              _swift_bridgeObjectRelease(uVar6);
              if (uStack_e0 == 0) {
                lStack_128 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_128,uStack_e0);
                _swift_bridgeObjectRelease(uStack_e0);
              }
              if (uStack_f8 == 0) {
                lStack_130 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_130,uStack_f8);
                _swift_bridgeObjectRelease(uStack_f8);
              }
              if (lStack_100 == 0) {
                uStack_e0 = 0;
              }
              else {
                uVar13 = 0;
                FUN_1047c7534(0);
                uStack_e0 = lStack_100;
                __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lStack_100,uVar13);
                _swift_bridgeObjectRelease(lStack_100);
              }
              if (uVar7 == 0) {
                lStack_f0 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_138,uVar7);
                _swift_bridgeObjectRelease(uVar7);
                lStack_f0 = lStack_138;
              }
              if (uStack_148 == 0) {
                uStack_f8 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_190,uStack_148);
                _swift_bridgeObjectRelease(uStack_148);
                uStack_f8 = lStack_190;
              }
              if (uStack_168 == 0) {
                lStack_198 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_198,uStack_168);
                _swift_bridgeObjectRelease(uStack_168);
              }
              if (uStack_170 == 0) {
                lStack_1a0 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1a0,uStack_170);
                _swift_bridgeObjectRelease(uStack_170);
              }
              if (uVar9 >> 0x3c < 0xf) {
                func_0x00010006c00c(lStack_1a8,uVar9);
                lVar14 = lStack_1a8;
                __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(lStack_1a8,uVar9);
                func_0x0001000b44c0(lStack_1a8,uVar9);
              }
              else {
                lVar14 = 0;
              }
              if (uStack_1d0 == 0) {
                lStack_1d8 = 0;
              }
              else {
                __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_1d8,uStack_1d0);
                _swift_bridgeObjectRelease(uStack_1d0);
              }
              func_0x00010c0067e0(uVar3);
              _objc_release(lStack_140);
              _objc_release(lStack_150);
              _objc_release(lStack_120);
              _objc_release(lStack_158);
              _objc_release(lStack_160);
              _objc_release(lStack_e8);
              func_0x0001000b44c0(lStack_1a8,uVar9);
              _objc_release(uStack_108);
              _objc_release(lVar11);
              _objc_release(lStack_128);
              _objc_release(lStack_130);
              _objc_release(uStack_e0);
              _objc_release(lStack_f0);
              _objc_release(uStack_f8);
              _objc_release(lStack_198);
              _objc_release(lStack_1a0);
              _objc_release(lVar14);
              _objc_release(lStack_1d8);
              _objc_release(param_1);
              _objc_release(lVar2);
              _objc_release(lStack_180);
              return unaff_x20;
            }
            _objc_release(lVar2);
            _swift_bridgeObjectRelease(uVar6);
            _objc_release(param_1);
            _swift_bridgeObjectRelease(uStack_170);
            _swift_bridgeObjectRelease(uStack_168);
            _swift_bridgeObjectRelease(uStack_148);
            _swift_bridgeObjectRelease(uStack_108);
            _swift_bridgeObjectRelease(lStack_100);
            _swift_bridgeObjectRelease(uStack_f8);
            _swift_bridgeObjectRelease(uStack_e0);
            _swift_bridgeObjectRelease(uVar4);
            func_0x0001000b44c0(lStack_1a8,uVar9);
            _objc_release(lStack_e8);
            _objc_release(lStack_140);
            _objc_release(lStack_150);
            _objc_release(lStack_120);
            _objc_release(lStack_158);
            _objc_release(lStack_160);
            _objc_release(lStack_180);
          }
          goto LAB_1047c51c0;
        }
        _objc_release(param_1);
        _objc_release(lStack_180);
        _objc_release(lStack_140);
        _objc_release(lStack_150);
        _objc_release(lStack_120);
        _objc_release(lStack_158);
        _objc_release(lStack_160);
        _objc_release(lStack_e8);
        _swift_bridgeObjectRelease(uVar6);
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uStack_108);
        _swift_bridgeObjectRelease(lStack_100);
        _swift_bridgeObjectRelease(uStack_f8);
        _swift_bridgeObjectRelease(uStack_e0);
        _swift_bridgeObjectRelease(uStack_170);
        _swift_bridgeObjectRelease(uStack_168);
        _swift_bridgeObjectRelease(uStack_148);
        func_0x0001000b44c0(lStack_1a8,uVar9);
        goto LAB_1047c5214;
      }
      _objc_release(lStack_e8);
      _objc_release(lStack_140);
      _objc_release(lStack_150);
      _objc_release(lStack_120);
      _objc_release(lStack_158);
      _objc_release(lStack_160);
      _swift_bridgeObjectRelease(uVar6);
      _objc_release(param_1);
      _swift_bridgeObjectRelease(uStack_170);
      _swift_bridgeObjectRelease(uStack_168);
      _swift_bridgeObjectRelease(uStack_148);
    }
    _swift_bridgeObjectRelease(uStack_108);
    _swift_bridgeObjectRelease(lStack_100);
    _swift_bridgeObjectRelease(uStack_f8);
    _swift_bridgeObjectRelease(uStack_e0);
  }
  _swift_bridgeObjectRelease(uVar4);
LAB_1047c51c0:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 1047c65c8; end: 1047c65ef; -[SCAdSnap initWithCoder:] */

void FUN_1047c65c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_1047c4f18();
  return;
}



/* Entry: 1047c65f0; end: 1047c667b; -[SCAdSnap description] */

void FUN_1047c65f0(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_1046d90b0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_1047c15e8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x0001047c690c(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_1046d90b0);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1047c667c; end: 1047c66f3; -[SCAdSnap init] */

void FUN_1047c667c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"AdDataModel/AdSnapWrapper.swift",0x1f,2,0x188
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1047c66c4);
  (*pcVar1)();
}



/* Entry: 1047c66f4; end: 1047c6863; -[SCAdSnap .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c66f4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f1d8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f1f0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f1f8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f200 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f208));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f220));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f228 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f240));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f248 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f250));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f258));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f260));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f268));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f270 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11308f278 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f288));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_11308f290),
                      ((undefined8 *)(param_1 + _DAT_11308f290))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11308f298));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11308f2b8 + 8))
  ;
  return;
}



/* Entry: 1047c6864; end: 1047c6883;  */

void FUN_1047c6864(void)

{
  _objc_opt_self(&PTR_PTR_1129d3fc8);
  return;
}



/* Entry: 1047c6884; end: 1047c6a1b;  */

undefined8 FUN_1047c6884(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10477ea9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1047c6a1c; end: 1047c6a77; -[SCAdSnapMediaRendition mediaURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c6a1c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11308f2f0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11308f2f0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1047c6a78; end: 1047c6a87; -[SCAdSnapMediaRendition width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c6a78(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f2f8);
}



/* Entry: 1047c6a88; end: 1047c6a97; -[SCAdSnapMediaRendition height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c6a88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f300);
}



/* Entry: 1047c6a98; end: 1047c6aa7; -[SCAdSnapMediaRendition fileSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c6a98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f308);
}



/* Entry: 1047c6aa8; end: 1047c6ab7; -[SCAdSnapMediaRendition renditionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1047c6aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11308f310);
}



/* Entry: 1047c6ab8; end: 1047c6c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c6ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11308f2f0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11308f2f8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11308f300) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11308f308) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11308f310) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c6c10; end: 1047c6cd3; -[SCAdSnapMediaRendition initWithMediaURL:width:height:fileSize:renditionType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c6c10(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_2 + _DAT_11308f2f0);
  *plVar1 = param_4;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_11308f2f8) = param_5;
  *(undefined8 *)(param_2 + _DAT_11308f300) = param_6;
  *(undefined8 *)(param_2 + _DAT_11308f308) = param_1;
  *(undefined8 *)(param_2 + _DAT_11308f310) = param_7;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1047c6cd4; end: 1047c6d07; -[SCAdSnapMediaRendition hash] */

undefined8 FUN_1047c6cd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1047c6d08();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1047c6d08; end: 1047c6de7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c6d08(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11308f2f0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f2f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x00010bfde980();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f2f8));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f300));
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11308f308) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11308f308);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_11308f310));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1047c6de8; end: 1047c6f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1047c6de8(undefined8 param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar2 = &lStack_88;
    _swift_dynamicCast(plVar2,auStack_80,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar2 & 1) != 0) {
      lVar3 = ((long *)(unaff_x20 + _DAT_11308f2f0))[1];
      lVar4 = ((long *)(lStack_88 + _DAT_11308f2f0))[1];
      uVar6 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar5 = *(long *)(unaff_x20 + _DAT_11308f2f0);
        if (lVar5 == *(long *)(lStack_88 + _DAT_11308f2f0) && lVar3 == lVar4) {
          uVar6 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (lVar5);
          uVar6 = (uint)lVar5;
        }
      }
      lVar3 = *(long *)(unaff_x20 + _DAT_11308f2f8);
      lVar4 = *(long *)(lStack_88 + _DAT_11308f2f8);
      lVar5 = *(long *)(unaff_x20 + _DAT_11308f300);
      lVar8 = *(long *)(lStack_88 + _DAT_11308f300);
      dVar10 = *(double *)(unaff_x20 + _DAT_11308f308);
      dVar11 = *(double *)(lStack_88 + _DAT_11308f308);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_11308f310);
      uVar9 = *(undefined8 *)(lStack_88 + _DAT_11308f310);
      _objc_release();
      uVar1 = 0;
      if (lVar5 == lVar8) {
        uVar1 = uVar6 & lVar3 == lVar4;
      }
      uVar6 = 0;
      if (dVar10 == dVar11) {
        uVar6 = uVar1;
      }
      if ((int)uVar7 != (int)uVar9) {
        return 0;
      }
      return uVar6;
    }
  }
  return 0;
}



/* Entry: 1047c6f50; end: 1047c6fcf; -[SCAdSnapMediaRendition isEqual:] */

uint FUN_1047c6f50(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_1047c6de8(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1047c6fd0; end: 1047c6fd3; -[SCAdSnapMediaRendition copyWithZone:] */

void FUN_1047c6fd0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1047c6fd4; end: 1047c716f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1047c6fd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11308f2f0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308f2f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x52555f414944454d;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x52555f414944454d,0xe90000000000004c);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0x4854444957;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4854444957,0xe500000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar1 = 0x544847494548;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x544847494548,0xe600000000000000);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11308f308);
  uVar1 = 0x5a49535f454c4946;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5a49535f454c4946,0xe900000000000045);
  func_0x00010bf92e80(uVar2,param_1);
  _objc_release(uVar1);
  uVar1 = 0x4f495449444e4552;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x4f495449444e4552,0xee00455059545f4e);
  func_0x00010bf92fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1047c7170; end: 1047c71bf; -[SCAdSnapMediaRendition encodeWithCoder:] */

void FUN_1047c7170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_1047c6fd4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1047c71c0; end: 1047c71ef;  */

void FUN_1047c71c0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_1047c71f0(param_1);
  return;
}


