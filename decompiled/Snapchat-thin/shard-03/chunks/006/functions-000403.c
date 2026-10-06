/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a8aeb0; end: 102a8af1f;  */

undefined8 FUN_102a8aeb0(undefined8 param_1,undefined8 param_2)

{
  FUN_102a9cf28(param_2,param_1);
  return param_2;
}



/* Entry: 102a8af20; end: 102a8af27;  */

void FUN_102a8af20(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102a8af28; end: 102a8b193;  */

undefined8 FUN_102a8af28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102a8b194; end: 102a8b1b7;  */

void FUN_102a8b194(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102a85a4c(param_1);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102a8b1b8; end: 102a8b26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a8b1b8(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = (undefined8 *)(param_2 + _DAT_112ee7308);
    uVar3 = puVar1[1];
    *puVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar1[1] = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(uVar3);
    uVar2 = ((undefined8 *)(param_1 + _DAT_113804e88))[1];
    puVar1 = (undefined8 *)(param_2 + _DAT_112ee7318);
    uVar3 = puVar1[1];
    *puVar1 = *(undefined8 *)(param_1 + _DAT_113804e88);
    puVar1[1] = uVar2;
    func_0x000107c61434();
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 102a8b270; end: 102a8b2cb; -[_TtC21ShoppingLensAnalytics8Reporter init] */

void FUN_102a8b270(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensAnalytics.Reporter",0x1e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8b29c);
  (*pcVar1)();
}



/* Entry: 102a8b2cc; end: 102a8b3a3; -[_TtC21ShoppingLensAnalytics8Reporter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102a8b324: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a8b344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a8b364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a8b348) */
/* WARNING: Removing unreachable block (ram,0x000102a8b328) */
/* WARNING: Removing unreachable block (ram,0x000102a8b368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a8b2cc(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ee7308 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ee7310 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ee7318 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ee7320));
  return;
}



/* Entry: 102a8b3a4; end: 102a8b3c3;  */

void FUN_102a8b3a4(void)

{
  func_0x000107c61168(&PTR_PTR_112883d78);
  return;
}



/* Entry: 102a8b3c4; end: 102a8b3ef;  */

/* WARNING: Removing unreachable block (ram,0x000102a8fb50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a8b3c4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  long extraout_x8;
  long lVar23;
  long lVar24;
  long extraout_x8_00;
  long lVar25;
  long lVar26;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar27;
  long extraout_x8_03;
  long lVar28;
  long lVar29;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar30;
  long lVar31;
  long extraout_x8_06;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 *puVar43;
  long lVar44;
  byte *pbVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  ulong uVar48;
  long lVar49;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long unaff_x20;
  byte **ppbVar50;
  code *pcVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  undefined8 uVar55;
  long lVar56;
  byte *pbVar57;
  ulong uVar58;
  undefined8 uVar59;
  long lVar60;
  double dVar61;
  undefined8 uVar62;
  double dVar63;
  double dVar64;
  undefined1 auStack_4e0 [8];
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [8];
  undefined8 uStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined8 uStack_4b8;
  undefined8 auStack_4b0 [2];
  double dStack_4a0;
  long alStack_498 [6];
  byte *pbStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_300;
  long lStack_2f0;
  undefined1 auStack_2c0 [112];
  byte *pbStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined8 uStack_1ef;
  byte *pbStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  byte *pbStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  byte *pbStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  lVar56 = 0x112d373d8;
  uStack_428 = param_6;
  uStack_418 = param_5;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar56 + -8) + 0x40));
  lVar13 = (long)&dStack_4a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar13 - extraout_x12;
  lVar56 = 0x112ee7388;
  lStack_420 = lVar23;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  lVar24 = *(long *)(lVar56 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar23 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar35 = lVar23 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar36 = lVar35 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar36 - extraout_x12_02;
  lVar9 = 0;
  func_0x000102a91a2c();
  lVar26 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar60 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar37 = lVar60 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_440 = lVar37;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar37 = lVar37 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_498[5] = lVar37 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = (lVar37 - extraout_x12_04) - extraout_x12_05;
  lStack_3f8 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_06;
  lStack_410 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_07;
  lVar10 = 0;
  lStack_3e8 = lVar38;
  FUN_102a9ded4();
  lVar27 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar27 + 0x40));
  lVar38 = lVar38 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_448 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_08;
  lStack_400 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = lVar38 - extraout_x12_10;
  lVar11 = 0;
  func_0x000107c5eea4();
  lVar29 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar29 + 0x40));
  lVar39 = lVar28 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_430 = lVar39;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar39 = lVar39 - extraout_x12_11;
  lStack_460 = lVar39;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar39 = lVar39 - extraout_x12_12;
  lVar12 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar40 = lVar39 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_408 = lVar40;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar40 = lVar40 - extraout_x12_13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar40 - extraout_x12_14;
  lVar12 = 0;
  func_0x000102a91698();
  lVar31 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar31 + 0x40));
  lVar41 = lVar30 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lStack_458 = lVar41;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar41 = lVar41 - extraout_x12_15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar42 = lVar41 - extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_438 = lVar42 - extraout_x12_17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar43 = (undefined8 *)((lVar42 - extraout_x12_17) - extraout_x12_18);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar44 = (long)puVar43 - extraout_x12_19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar32 = lVar44 - extraout_x12_20;
  lStack_3f0 = ((undefined8 *)(unaff_x20 + _DAT_112ee7308))[1];
  if (lStack_3f0 == 0) {
    return;
  }
  alStack_498[3] = *(undefined8 *)(unaff_x20 + _DAT_112ee7308);
  lVar53 = unaff_x20 + _DAT_112ee7328;
  func_0x000107c61618();
  lVar49 = lStack_3f0;
  if (lVar53 == 0) {
    return;
  }
  alStack_498[1] = lVar13;
  func_0x000107c61434(lStack_3f0);
  lStack_450 = lVar53;
  FUN_102a86474(param_2,param_3,param_4);
  lVar13 = *(long *)(unaff_x20 + _DAT_112ee7330);
  alStack_498[0] = lVar37;
  if (lVar13 == 0) {
LAB_102a8e228:
    func_0x000107c6142c(lVar49);
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar49 = lStack_3f0;
    if (lVar13 == 0) goto LAB_102a8e228;
    uVar52 = *(ulong *)(param_2 + 0x10);
    pbVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    alStack_498[2] = param_3;
    alStack_498[4] = lVar13;
    if (uVar52 != 0) {
      pbStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102a8d1e0(0,uVar52,0);
      uVar48 = 0;
      bVar2 = *(byte *)(lVar31 + 0x50);
      pbStack_468 = (byte *)((ulong)&pbStack_f0 | 1);
      do {
        pbVar18 = pbStack_160;
        if (*(ulong *)(param_2 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
          pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb00);
          (*pcVar51)();
        }
        func_0x000102a8fba0(param_2 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                            *(long *)(lVar31 + 0x48) * uVar48,lVar44,0x102a91698);
        pbVar45 = *(byte **)(lVar44 + 0x20);
        uVar34 = *(ulong *)(lVar44 + 0x28);
        uVar15 = *(undefined8 *)(lVar44 + 0x30);
        lVar37 = *(long *)(lVar44 + 0x38);
        uVar22 = (ulong)pbVar45 & 0xffffffffffff;
        uVar33 = uVar34 >> 0x38 & 0xf;
        uVar58 = uVar22;
        if ((uVar34 & 0x2000000000000000) != 0) {
          uVar58 = uVar33;
        }
        if (uVar58 != 0) {
          if ((uVar34 >> 0x3c & 1) == 0) {
            if ((uVar34 >> 0x3d & 1) == 0) {
              if (((ulong)pbVar45 >> 0x3c & 1) == 0) {
                func_0x000107c60358();
              }
              else {
                pbVar45 = (byte *)((uVar34 & 0xfffffffffffffff) + 0x20);
                uVar34 = uVar22;
              }
              if (*pbVar45 == 0x2b) {
                lVar13 = uVar34 - 1;
                if ((long)uVar34 < 1) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb10);
                  (*pcVar51)();
                }
                if (lVar13 != 0) {
                  lVar53 = 0;
                  while( true ) {
                    pbVar45 = pbVar45 + 1;
                    if ((9 < *pbVar45 - 0x30) ||
                       (lVar49 = lVar53 * 10,
                       SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) break;
                    uVar58 = (ulong)(byte)(*pbVar45 - 0x30);
                    lVar53 = lVar49 + uVar58;
                    if ((SCARRY8(lVar49,uVar58)) || (lVar13 = lVar13 + -1, lVar13 == 0)) break;
                  }
                }
              }
              else if (*pbVar45 == 0x2d) {
                lVar13 = uVar34 - 1;
                if ((long)uVar34 < 1) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb08);
                  (*pcVar51)();
                }
                if (lVar13 != 0) {
                  lVar53 = 0;
                  while( true ) {
                    pbVar45 = pbVar45 + 1;
                    if ((9 < *pbVar45 - 0x30) ||
                       (lVar49 = lVar53 * 10,
                       SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) break;
                    uVar58 = (ulong)(byte)(*pbVar45 - 0x30);
                    lVar53 = lVar49 - uVar58;
                    if ((SBORROW8(lVar49,uVar58)) || (lVar13 = lVar13 + -1, lVar13 == 0)) break;
                  }
                }
              }
              else if ((uVar34 != 0) && (pbVar45 != (byte *)0x0)) {
                lVar13 = 0;
                do {
                  if (((9 < *pbVar45 - 0x30) ||
                      (lVar53 = lVar13 * 10,
                      SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar53 >> 0x3f)) ||
                     (uVar58 = (ulong)(byte)(*pbVar45 - 0x30), lVar13 = lVar53 + uVar58,
                     SCARRY8(lVar53,uVar58))) break;
                  uVar34 = uVar34 - 1;
                  pbVar45 = pbVar45 + 1;
                } while (uVar34 != 0);
              }
            }
            else {
              pbStack_f0 = pbVar45;
              uStack_e8 = uVar34 & 0xffffffffffffff;
              uVar1 = (uint)pbVar45 & 0xff;
              if (uVar1 == 0x2b) {
                if (uVar33 == 0) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb04);
                  (*pcVar51)();
                }
                lVar13 = uVar33 - 1;
                if (lVar13 != 0) {
                  lVar53 = 0;
                  pbVar45 = pbStack_468;
                  do {
                    if (((9 < *pbVar45 - 0x30) ||
                        (lVar49 = lVar53 * 10,
                        SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) ||
                       (uVar58 = (ulong)(byte)(*pbVar45 - 0x30), lVar53 = lVar49 + uVar58,
                       SCARRY8(lVar49,uVar58))) break;
                    lVar13 = lVar13 + -1;
                    pbVar45 = pbVar45 + 1;
                  } while (lVar13 != 0);
                }
              }
              else if (uVar1 == 0x2d) {
                if (uVar33 == 0) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb0c);
                  (*pcVar51)();
                }
                lVar13 = uVar33 - 1;
                if (lVar13 != 0) {
                  lVar53 = 0;
                  pbVar45 = pbStack_468;
                  while( true ) {
                    if ((9 < *pbVar45 - 0x30) ||
                       (lVar49 = lVar53 * 10,
                       SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) break;
                    uVar58 = (ulong)(byte)(*pbVar45 - 0x30);
                    lVar53 = lVar49 - uVar58;
                    if ((SBORROW8(lVar49,uVar58)) ||
                       (lVar13 = lVar13 + -1, pbVar45 = pbVar45 + 1, lVar13 == 0)) break;
                  }
                }
              }
              else if (uVar33 != 0) {
                lVar13 = 0;
                ppbVar50 = &pbStack_f0;
                while( true ) {
                  if ((9 < *(byte *)ppbVar50 - 0x30) ||
                     (lVar53 = lVar13 * 10,
                     SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar53 >> 0x3f)) break;
                  uVar58 = (ulong)(byte)(*(byte *)ppbVar50 - 0x30);
                  lVar13 = lVar53 + uVar58;
                  if ((SCARRY8(lVar53,uVar58)) ||
                     (uVar33 = uVar33 - 1, ppbVar50 = (byte **)((long)ppbVar50 + 1), uVar33 == 0))
                  break;
                }
              }
            }
          }
          else {
            func_0x000107c61434(uVar34);
            func_0x000100fb6b80(pbVar45,uVar34,10);
            func_0x000107c6142c(uVar34);
          }
        }
        func_0x000102a8fc20(lVar44 + *(int *)(lVar12 + 0x40),lVar30,0x112ee6128,&UNK_10db114e0);
        (**(code **)(lVar27 + 0x30))(lVar30,1,lVar10);
        func_0x000107c61434(lVar37);
        func_0x000102a8fcf0(lVar30,0x112ee6128,&UNK_10db114e0);
        (**(code **)(lVar29 + 0x10))(lVar39,lVar44 + *(int *)(lVar12 + 0x2c),lVar11);
        uVar62 = *(undefined8 *)(lVar44 + *(int *)(lVar12 + 0x38));
        if (lVar37 == 0) {
          uVar15 = 0;
        }
        else {
          func_0x000107c5fadc(uVar15,lVar37);
          func_0x000107c6142c(lVar37);
        }
        puVar14 = PTR_PTR_1126abe60;
        func_0x000107c610f8();
        puVar21 = puVar14;
        func_0x000107c5ee70();
        *(undefined **)(lVar32 + -0x10) = puVar21;
        func_0x000107c47fa8(uVar62);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar21);
        (**(code **)(lVar29 + 8))(lVar39,lVar11);
        func_0x000102a8fbe4(lVar44,0x102a91698);
        uVar58 = *(ulong *)(pbVar18 + 0x10);
        pbStack_160 = pbVar18;
        if (*(ulong *)(pbVar18 + 0x18) >> 1 <= uVar58) {
          func_0x000102a8d1e0(1 < *(ulong *)(pbVar18 + 0x18),uVar58 + 1,1);
        }
        uVar48 = uVar48 + 1;
        *(ulong *)(pbStack_160 + 0x10) = uVar58 + 1;
        *(undefined **)(pbStack_160 + uVar58 * 8 + 0x20) = puVar14;
        pbVar18 = pbStack_160;
      } while (uVar48 != uVar52);
    }
    param_3 = alStack_498[2];
    uVar15 = 0;
    func_0x000102a8fcb0(0,0x112ee73a8,&PTR_PTR_1126abe60);
    pbVar45 = pbVar18;
    func_0x000107c5fc48(pbVar18,uVar15);
    func_0x000107c6142c(pbVar18);
    lVar39 = lStack_3f0;
    lVar37 = alStack_498[3];
    func_0x000107c5fadc(alStack_498[3],lStack_3f0);
    func_0x000107c6142c(lVar39);
    lVar30 = alStack_498[4];
    func_0x000107c5cdf8(alStack_498[4]);
    func_0x000107c61170(pbVar45);
    func_0x000107c61170(lVar37);
    lVar39 = *(long *)(param_2 + 0x10);
    if (lVar39 == 0) {
      func_0x000107c615e8(lVar30);
    }
    else {
      lVar30 = param_2 + ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff));
      lVar37 = *(long *)(lVar31 + 0x48);
      do {
        func_0x000102a8fba0(lVar30,lVar32,0x102a91698);
        func_0x000102a8fb5c(lVar32,puVar43,0x102a91698);
        func_0x000102a8fc20((long)puVar43 + (long)*(int *)(lVar12 + 0x40),lVar40,0x112ee6128,
                            &UNK_10db114e0);
        lVar44 = lVar40;
        (**(code **)(lVar27 + 0x30))(lVar40,1,lVar10);
        if ((int)lVar44 == 1) {
          func_0x000102a8fbe4(puVar43,0x102a91698);
          func_0x000102a8fcf0(lVar40,0x112ee6128,&UNK_10db114e0);
        }
        else {
          func_0x000102a8fb5c(lVar40,lVar28,FUN_102a9ded4);
          func_0x000102a8fba0(lVar28,lVar38,FUN_102a9ded4);
          lVar44 = lVar38;
          func_0x000107c614c4(lVar38,lVar10);
          iVar8 = (int)lVar44;
          if (iVar8 < 2) {
            if (iVar8 == 0) {
              func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
              func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
              lVar44 = 0x112ee62c0;
              func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
              iVar8 = *(int *)(lVar44 + 0x30);
              lVar44 = 0;
              func_0x000107c5ede0();
              (**(code **)(*(long *)(lVar44 + -8) + 8))(lVar38 + iVar8,lVar44);
            }
            else {
              func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
              uStack_1d8 = 0;
              pbStack_1e0 = (byte *)0x0;
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              lStack_1c0 = 1;
              uStack_1b0 = 0;
              uStack_1b8 = 0;
              uStack_1a0 = 0;
              uStack_1a8 = 0;
              uStack_190 = 0;
              uStack_198 = 0;
              uStack_180 = 0;
              uStack_17f = 0;
              uStack_188 = 0;
              uStack_187 = 0;
              uStack_178 = 0;
LAB_102a8e6a0:
              puVar14 = PTR_PTR_1126c7d90;
              func_0x000107c610f8(PTR_PTR_1126c7d90);
              func_0x000107c453e4();
              puVar21 = puVar14;
              func_0x000107c5ee70();
              puVar16 = puVar14;
              func_0x000107c5e700(puVar14);
              func_0x000107c61180();
              func_0x000107c61170(puVar21);
              func_0x000107c61170(puVar16);
              func_0x000107c5e5f8(puVar14);
              func_0x000107c61180();
              func_0x000107c61170();
              if (lStack_1c0 == 1) {
                ppbVar50 = (byte **)0x0;
              }
              else {
                uStack_208 = uStack_198;
                uStack_210 = uStack_1a0;
                uStack_1f8 = uStack_188;
                uStack_200 = uStack_190;
                uStack_1ef = CONCAT17(uStack_178,uStack_17f);
                uStack_1f7 = uStack_187;
                uStack_1f0 = uStack_180;
                uStack_248 = uStack_1d8;
                pbStack_250 = pbStack_1e0;
                uStack_238 = uStack_1c8;
                uStack_240 = uStack_1d0;
                uStack_228 = uStack_1b8;
                lStack_230 = lStack_1c0;
                uStack_218 = uStack_1a8;
                uStack_220 = uStack_1b0;
                uStack_e8 = uStack_1d8;
                pbStack_f0 = pbStack_1e0;
                uStack_d8 = uStack_1c8;
                uStack_e0 = uStack_1d0;
                uStack_90 = uStack_180;
                uStack_c8 = uStack_1b8;
                lStack_d0 = lStack_1c0;
                uStack_b8 = uStack_1a8;
                uStack_c0 = uStack_1b0;
                uStack_a8 = uStack_198;
                uStack_b0 = uStack_1a0;
                uStack_98 = uStack_188;
                uStack_97 = uStack_187;
                uStack_a0 = uStack_190;
                uStack_8f = uStack_1ef;
                func_0x0001042826f0(0);
                func_0x000107c610f8();
                func_0x00010178e30c(&pbStack_250,auStack_2c0);
                ppbVar50 = &pbStack_f0;
                func_0x000104281270(ppbVar50);
              }
              puVar21 = puVar14;
              func_0x000107c5e4fc(puVar14);
              func_0x000107c61180();
              func_0x000107c61170(ppbVar50);
              func_0x000107c61170(puVar21);
              puVar21 = puVar14;
              func_0x000107c3ecc8(puVar14);
              func_0x000107c61180();
              uVar15 = *puVar43;
              func_0x000107c5fadc(uVar15,puVar43[1]);
              func_0x000107c5cd84(alStack_498[4]);
              func_0x000107c61170(uVar15);
              func_0x000107c61170(puVar14);
              func_0x000107c61170(puVar21);
              func_0x000102a8fcf0(&pbStack_1e0,0x112dcbca8,&UNK_10d98e380);
              func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
            }
          }
          else if (iVar8 == 2) {
            func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
            lVar44 = 0x112ee62b0;
            func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
            iVar8 = *(int *)(lVar44 + 0x30);
            func_0x000107c6142c(*(undefined8 *)(lVar38 + 8 + (long)*(int *)(lVar44 + 0x50)));
            lVar53 = lStack_3e8;
            bVar2 = *(byte *)(lVar38 + *(int *)(lVar44 + 0x60));
            bVar3 = *(byte *)(lVar38 + *(int *)(lVar44 + 0x70));
            func_0x000102a8fc68(lVar38 + iVar8,lStack_3e8,0x112d36580,&UNK_10d9016d0);
            lVar13 = lStack_410;
            func_0x000102a8fc20(lVar53,lStack_410,0x112d36580,&UNK_10d9016d0);
            lVar49 = 0;
            func_0x000107c5ede0();
            lVar54 = *(long *)(lVar49 + -8);
            uVar15 = 1;
            lVar53 = lVar13;
            (**(code **)(lVar54 + 0x30))(lVar13,1,lVar49);
            if ((int)lVar53 == 1) {
              func_0x000102a8fcf0(lVar13,0x112d36580,&UNK_10d9016d0);
              lVar53 = 0;
              uVar15 = 0;
            }
            else {
              func_0x000107c5ed70();
              (**(code **)(lVar54 + 8))(lVar13,lVar49);
            }
            iVar8 = *(int *)(lVar44 + 0x40);
            *(undefined1 *)(lVar32 + -0x10) = 1;
            *(undefined8 *)(lVar32 + -0x18) = 0;
            *(undefined1 *)(lVar32 + -0x20) = 1;
            *(undefined8 *)(lVar32 + -0x28) = 0;
            *(undefined1 *)(lVar32 + -0x30) = 1;
            *(undefined8 *)(lVar32 + -0x38) = 0;
            *(undefined1 *)(lVar32 + -0x40) = 0;
            func_0x00010420fe14(&pbStack_160,~(bVar2 | bVar3) & 1,bVar3,bVar2,0,lVar53,uVar15,0,0);
            uStack_208 = uStack_118;
            uStack_210 = uStack_120;
            uStack_1f8 = uStack_108;
            uStack_200 = uStack_110;
            uStack_1ef = uStack_ff;
            uStack_1f7 = uStack_107;
            uStack_1f0 = uStack_100;
            uStack_248 = uStack_158;
            pbStack_250 = pbStack_160;
            uStack_238 = uStack_148;
            uStack_240 = uStack_150;
            uStack_228 = uStack_138;
            lStack_230 = lStack_140;
            uStack_218 = uStack_128;
            uStack_220 = uStack_130;
            func_0x000102a8fcf0(lStack_3e8,0x112d36580,&UNK_10d9016d0);
            func_0x000102a8fcf0(lVar38 + iVar8,0x112d36580,&UNK_10d9016d0);
            if ((bVar2 & 1) == 0) {
              uStack_198 = uStack_208;
              uStack_1a0 = uStack_210;
              uStack_188 = uStack_1f8;
              uStack_190 = uStack_200;
              uStack_17f = (undefined7)uStack_1ef;
              uStack_178 = (undefined1)((ulong)uStack_1ef >> 0x38);
              uStack_187 = uStack_1f7;
              uStack_180 = uStack_1f0;
              uStack_1d8 = uStack_248;
              pbStack_1e0 = pbStack_250;
              uStack_1c8 = uStack_238;
              uStack_1d0 = uStack_240;
              uStack_1b8 = uStack_228;
              lStack_1c0 = lStack_230;
              uStack_1a8 = uStack_218;
              uStack_1b0 = uStack_220;
              goto LAB_102a8e6a0;
            }
            func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
            func_0x00010178e348(&pbStack_160);
          }
          else {
            func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
            func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
          }
          func_0x000102a8fbe4(puVar43,0x102a91698);
        }
        lVar30 = lVar30 + lVar37;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
      func_0x000107c615e8(alStack_498[4]);
      param_3 = alStack_498[2];
    }
  }
  lVar38 = lStack_408;
  puVar14 = PTR_PTR_1126c4d80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000102a8fc20(param_4,lVar38,0x112ee6128,&UNK_10db114e0);
  lVar28 = lVar38;
  (**(code **)(lVar27 + 0x30))(lVar38,1,lVar10);
  lVar27 = lStack_400;
  if ((int)lVar28 == 1) {
    func_0x000102a8fcf0(lVar38,0x112ee6128,&UNK_10db114e0);
    goto LAB_102a8ec40;
  }
  func_0x000102a8fb5c(lVar38,lStack_400,FUN_102a9ded4);
  lVar38 = lStack_448;
  func_0x000102a8fba0(lVar27,lStack_448,FUN_102a9ded4);
  lVar27 = lVar38;
  func_0x000107c614c4(lVar38,lVar10);
  iVar8 = (int)lVar27;
  alStack_498[2] = param_3;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
      lVar10 = 0x112ee62c0;
      func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
      iVar8 = *(int *)(lVar10 + 0x30);
      lVar27 = 0;
      func_0x000107c5ede0();
      lVar10 = lStack_3f8;
      lVar28 = *(long *)(lVar27 + -8);
      (**(code **)(lVar28 + 0x20))(lStack_3f8,lVar38 + iVar8,lVar27);
      (**(code **)(lVar28 + 0x38))(lVar10,0,1,lVar27);
    }
    else {
      func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
      lVar38 = 0;
      func_0x000107c5ede0();
      lVar10 = lStack_3f8;
      (**(code **)(*(long *)(lVar38 + -8) + 0x38))(lStack_3f8,1,1,lVar38);
    }
  }
  else if (iVar8 == 2) {
    func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
    lVar10 = 0x112ee62b0;
    func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
    iVar8 = *(int *)(lVar10 + 0x30);
    iVar6 = *(int *)(lVar10 + 0x40);
    func_0x000107c6142c(*(undefined8 *)(lVar38 + *(int *)(lVar10 + 0x50) + 8));
    lVar27 = alStack_498[5];
    cVar4 = *(char *)(lVar38 + *(int *)(lVar10 + 0x60));
    cVar5 = *(char *)(lVar38 + *(int *)(lVar10 + 0x70));
    func_0x000102a8fc68(lVar38 + iVar8,alStack_498[5],0x112d36580,&UNK_10d9016d0);
    lVar10 = alStack_498[0];
    func_0x000102a8fc68(lVar38 + iVar6,alStack_498[0],0x112d36580,&UNK_10d9016d0);
    if (cVar4 == '\x01') {
      func_0x000102a8fcf0(lVar27,0x112d36580,&UNK_10d9016d0);
      lVar27 = lVar10;
    }
    else {
      func_0x000102a8fcf0(lVar10,0x112d36580,&UNK_10d9016d0);
      if (cVar5 != '\0') {
        func_0x000102a8fcf0(lVar27,0x112d36580,&UNK_10d9016d0);
        lVar38 = 0;
        func_0x000107c5ede0();
        lVar10 = lStack_3f8;
        (**(code **)(*(long *)(lVar38 + -8) + 0x38))(lStack_3f8,1,1,lVar38);
        goto LAB_102a8eb48;
      }
    }
    lVar10 = lStack_3f8;
    func_0x000102a8fc68(lVar27,lStack_3f8,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
    lVar38 = 0;
    func_0x000107c5ede0();
    lVar10 = lStack_3f8;
    (**(code **)(*(long *)(lVar38 + -8) + 0x38))(lStack_3f8,1,1,lVar38);
  }
LAB_102a8eb48:
  lVar38 = lStack_440;
  func_0x000102a8fc20(lVar10,lStack_440,0x112d36580,&UNK_10d9016d0);
  lVar27 = 0;
  func_0x000107c5ede0();
  lVar28 = *(long *)(lVar27 + -8);
  uVar15 = 1;
  lVar10 = lVar38;
  (**(code **)(lVar28 + 0x30))(lVar38,1,lVar27);
  if ((int)lVar10 == 1) {
    func_0x000102a8fcf0(lVar38,0x112d36580,&UNK_10d9016d0);
    lVar10 = 0;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar28 + 8))(lVar38,lVar27);
    func_0x000107c5fadc(lVar10,uVar15);
    func_0x000107c6142c(uVar15);
  }
  func_0x000107c54770(puVar14);
  func_0x000107c61170(lVar10);
  func_0x000107c54754(puVar14);
  func_0x000102a8fcf0(lStack_3f8,0x112d36580,&UNK_10d9016d0);
  func_0x000102a8fbe4(lStack_400,FUN_102a9ded4);
LAB_102a8ec40:
  func_0x000107c5476c(puVar14);
  lVar10 = lStack_438;
  uVar52 = *(ulong *)(param_2 + 0x10);
  pbVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar52 != 0) {
    uVar48 = 0;
    do {
      if (*(ulong *)(param_2 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fae8);
        (*pcVar51)();
      }
      uVar58 = (ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff);
      lVar38 = *(long *)(lVar31 + 0x48);
      func_0x000102a8fba0(param_2 + uVar58 + lVar38 * uVar48,lVar10,0x102a91698);
      if (*(char *)(lVar10 + *(int *)(lVar12 + 0x3c)) == '\x01') {
        pbVar45 = pbVar18;
        func_0x000107c61558();
        pbStack_1e0 = pbVar18;
        if (((ulong)pbVar45 & 1) == 0) {
          func_0x000102a8d1bc(0,*(long *)(pbVar18 + 0x10) + 1,1);
        }
        uVar34 = *(ulong *)(pbStack_1e0 + 0x10);
        if (*(ulong *)(pbStack_1e0 + 0x18) >> 1 <= uVar34) {
          func_0x000102a8d1bc(1 < *(ulong *)(pbStack_1e0 + 0x18),uVar34 + 1,1);
        }
        pbVar18 = pbStack_1e0;
        *(ulong *)(pbStack_1e0 + 0x10) = uVar34 + 1;
        func_0x000102a8fb5c(lVar10,pbStack_1e0 + uVar34 * lVar38 + uVar58,0x102a91698);
      }
      else {
        func_0x000102a8fbe4(lVar10,0x102a91698);
      }
      uVar48 = uVar48 + 1;
    } while (uVar52 != uVar48);
  }
  lVar10 = *(long *)(pbVar18 + 0x10);
  if (lVar10 == 0) {
    func_0x000107c61574(pbVar18);
    pbVar45 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pbStack_1e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102a8d180(0,lVar10,0);
    pbVar17 = pbVar18 + ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff));
    lVar38 = *(long *)(lVar31 + 0x48);
    do {
      pbVar45 = pbStack_1e0;
      func_0x000102a8fba0(pbVar17,lVar41,0x102a91698);
      puVar21 = PTR_PTR_1126c4d88;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar15 = *(undefined8 *)(lVar41 + 0x10);
      func_0x000107c5fadc(uVar15,*(undefined8 *)(lVar41 + 0x18));
      func_0x000107c54758(puVar21);
      func_0x000107c61170(uVar15);
      uVar15 = *(undefined8 *)(lVar41 + 0x20);
      uVar62 = *(undefined8 *)(lVar41 + 0x28);
      lVar27 = *(long *)(lVar41 + 0x38);
      if (lVar27 == 0) {
        uVar59 = 0;
      }
      else {
        uVar59 = *(undefined8 *)(lVar41 + 0x30);
        func_0x000107c61434(lVar27);
        func_0x000107c5fadc(uVar59,lVar27);
        func_0x000107c6142c(lVar27);
      }
      func_0x000107c5475c(puVar21);
      func_0x000107c61170(uVar59);
      func_0x000107c54764(puVar21);
      func_0x000107c61434(uVar62);
      func_0x000107c5fadc(uVar15,uVar62);
      func_0x000107c6142c(uVar62);
      func_0x000107c54760(puVar21);
      func_0x000107c61170(uVar15);
      func_0x000102a8fbe4(lVar41,0x102a91698);
      uVar48 = *(ulong *)(pbVar45 + 0x10);
      pbStack_1e0 = pbVar45;
      if (*(ulong *)(pbVar45 + 0x18) >> 1 <= uVar48) {
        func_0x000102a8d180(1 < *(ulong *)(pbVar45 + 0x18),uVar48 + 1,1);
      }
      pbVar45 = pbStack_1e0;
      *(ulong *)(pbStack_1e0 + 0x10) = uVar48 + 1;
      *(undefined **)(pbStack_1e0 + uVar48 * 8 + 0x20) = puVar21;
      pbVar17 = pbVar17 + lVar38;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000107c61574(pbVar18);
  }
  uVar15 = 0;
  func_0x000102a8fcb0(0,0x112ee7390,&PTR_PTR_1126c4d88);
  pbVar18 = pbVar45;
  func_0x000107c5fc48(pbVar45,uVar15);
  func_0x000107c6142c(pbVar45);
  func_0x000107c54768(puVar14);
  func_0x000107c61170(pbVar18);
  pbVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar52 == 0) {
    dVar63 = 0.0;
  }
  else {
    uVar48 = 0;
    iVar8 = *(int *)(lVar12 + 0x44);
    bVar2 = *(byte *)(lVar31 + 0x50);
    dVar63 = 0.0;
    do {
      if (*(ulong *)(param_2 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fafc);
        (*pcVar51)();
      }
      func_0x000102a8fba0(param_2 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                          *(long *)(lVar31 + 0x48) * uVar48,lVar42,0x102a91698);
      lVar10 = *(long *)(lVar42 + iVar8);
      lVar38 = *(long *)(lVar10 + 0x10);
      if (lVar38 != 0) {
        iVar6 = *(int *)(lVar9 + 0x14);
        puVar43 = (undefined8 *)(lVar42 + *(int *)(lVar12 + 0x30));
        uVar46 = *(undefined8 *)(lVar42 + 0x10);
        uVar47 = *(undefined8 *)(lVar42 + 0x18);
        uVar15 = *(undefined8 *)(lVar42 + 0x20);
        uVar59 = *(undefined8 *)(lVar42 + 0x28);
        uVar62 = *puVar43;
        lVar27 = puVar43[1];
        lVar10 = lVar10 + ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff));
        lVar28 = *(long *)(lVar26 + 0x48);
        do {
          func_0x000102a8fba0(lVar10,lVar60,0x102a91a2c);
          puVar21 = PTR_PTR_1126abe50;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar55 = uVar46;
          func_0x000107c5fadc(uVar46,uVar47);
          func_0x000107c5428c(puVar21);
          func_0x000107c61170(uVar55);
          uVar55 = uVar15;
          func_0x000107c5fadc(uVar15,uVar59);
          func_0x000107c57894(puVar21);
          func_0x000107c61170(uVar55);
          dVar64 = *(double *)(lVar60 + iVar6);
          dVar61 = dVar64 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
            pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fadc);
            (*pcVar51)();
          }
          if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fae0);
            (*pcVar51)();
          }
          if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
            pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fae4);
            (*pcVar51)();
          }
          func_0x000107c57454(puVar21);
          if (lVar27 == 0) {
            uVar55 = 0;
          }
          else {
            uVar55 = uVar62;
            func_0x000107c5fadc(uVar62,lVar27);
          }
          func_0x000107c5789c(puVar21);
          func_0x000107c61170(uVar55);
          iVar7 = *(int *)(lVar56 + 0x30);
          (**(code **)(lVar29 + 0x10))(lVar25,lVar60,lVar11);
          *(undefined **)(lVar25 + iVar7) = puVar21;
          pbVar45 = pbVar18;
          func_0x000107c61558();
          pbVar17 = pbVar18;
          if (((ulong)pbVar45 & 1) == 0) {
            pbVar17 = (byte *)0x0;
            FUN_102a8d21c(0,*(long *)(pbVar18 + 0x10) + 1,1,pbVar18,
                          PTR__swift_bridgeObjectRelease_11034f258);
          }
          uVar58 = *(ulong *)(pbVar17 + 0x10);
          pbVar18 = pbVar17;
          if (*(ulong *)(pbVar17 + 0x18) >> 1 <= uVar58) {
            pbVar18 = (byte *)(ulong)(1 < *(ulong *)(pbVar17 + 0x18));
            FUN_102a8d21c(pbVar18,uVar58 + 1,1,pbVar17,PTR__swift_bridgeObjectRelease_11034f258);
          }
          *(ulong *)(pbVar18 + 0x10) = uVar58 + 1;
          func_0x000102a8fc68(lVar25,pbVar18 + *(long *)(lVar24 + 0x48) * uVar58 +
                                               ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                                               ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff
                                               )),0x112ee7388,&UNK_10db12888);
          func_0x000102a8fbe4(lVar60,0x102a91a2c);
          dVar63 = dVar63 + dVar64;
          lVar10 = lVar10 + lVar28;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
      }
      uVar48 = uVar48 + 1;
      func_0x000102a8fbe4(lVar42,0x102a91698);
    } while (uVar48 != uVar52);
    dVar63 = dVar63 * 1000.0;
  }
  pbStack_1e0 = pbVar18;
  func_0x000107c61434(pbVar18);
  FUN_102a8bf2c(&pbStack_1e0);
  pbVar45 = pbStack_1e0;
  lVar12 = *(long *)(pbStack_1e0 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c61574(pbStack_1e0);
    pbVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar56 = lStack_458;
    lVar12 = lStack_450;
  }
  else {
    pbStack_1e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102a8d144(0,lVar12,0);
    pbVar57 = pbVar45 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar24 + 0x48);
    do {
      pbVar17 = pbStack_1e0;
      func_0x000102a8fc20(pbVar57,lVar36,0x112ee7388,&UNK_10db12888);
      func_0x000102a8fc20(lVar36,lVar35,0x112ee7388,&UNK_10db12888);
      iVar8 = *(int *)(lVar56 + 0x30);
      uVar15 = *(undefined8 *)(lVar35 + iVar8);
      (**(code **)(lVar29 + 0x20))(lVar23,lVar35,lVar11);
      *(undefined8 *)(lVar23 + iVar8) = uVar15;
      func_0x000107c61174();
      func_0x000102a8fcf0(lVar23,0x112ee7388,&UNK_10db12888);
      func_0x000102a8fcf0(lVar36,0x112ee7388,&UNK_10db12888);
      uVar48 = *(ulong *)(pbVar17 + 0x10);
      pbStack_1e0 = pbVar17;
      if (*(ulong *)(pbVar17 + 0x18) >> 1 <= uVar48) {
        func_0x000102a8d144(1 < *(ulong *)(pbVar17 + 0x18),uVar48 + 1,1);
      }
      pbVar17 = pbStack_1e0;
      *(ulong *)(pbStack_1e0 + 0x10) = uVar48 + 1;
      *(undefined8 *)(pbStack_1e0 + uVar48 * 8 + 0x20) = uVar15;
      pbVar57 = pbVar57 + lVar9;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c61574(pbVar45);
    lVar56 = lStack_458;
    lVar12 = lStack_450;
  }
  lStack_458 = lVar56;
  lStack_450 = lVar12;
  if (uVar52 == 0) {
    func_0x000107c6142c(param_2);
    uStack_300 = 0;
    lStack_2f0 = 0;
    lVar12 = lStack_450;
  }
  else {
    if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb38);
      (*pcVar51)();
    }
    func_0x000102a8fba0(param_2 + ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff)),lVar56,
                        0x102a91698);
    func_0x000107c6142c(param_2);
    uStack_300 = *(undefined8 *)(lVar56 + 0x40);
    lStack_2f0 = *(long *)(lVar56 + 0x48);
    func_0x000107c61434();
    func_0x000102a8fbe4(lVar56,0x102a91698);
  }
  func_0x000107c61428(lVar12 + 0x20,&pbStack_1e0,0,0);
  lVar56 = *(long *)(lVar12 + 0x20);
  uVar52 = *(ulong *)(lVar56 + 0x10);
  func_0x000107c61434(lVar56);
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar52 != 0) {
    uVar48 = 0;
    lVar12 = lVar56 + 0x48;
    do {
      if (*(ulong *)(lVar56 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faec);
        (*pcVar51)();
      }
      dVar61 = *(double *)(lVar12 + -8);
      uVar15 = *(undefined8 *)(lVar12 + -0x18);
      uVar59 = *(undefined8 *)(lVar12 + -0x10);
      uVar62 = *(undefined8 *)(lVar12 + -0x28);
      uVar46 = *(undefined8 *)(lVar12 + -0x20);
      puVar16 = PTR_PTR_1126abe58;
      func_0x000107c610f8();
      func_0x000107c61434(uVar46);
      func_0x000107c61434(uVar59);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar62,uVar46);
      func_0x000107c5428c(puVar16);
      func_0x000107c61170(uVar62);
      func_0x000107c5fadc(uVar15,uVar59);
      func_0x000107c57894(puVar16);
      func_0x000107c61170(uVar15);
      dVar61 = dVar61 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faf0);
        (*pcVar51)();
      }
      if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faf4);
        (*pcVar51)();
      }
      if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faf8);
        (*pcVar51)();
      }
      func_0x000107c57458(puVar16);
      func_0x000107c55dcc(puVar16);
      func_0x000107c6142c(uVar59);
      func_0x000107c6142c(uVar46);
      puVar20 = puVar21;
      func_0x000107c61550();
      if (((((ulong)puVar20 & 1) == 0) || ((long)puVar21 < 0)) ||
         (puVar20 = puVar21, ((ulong)puVar21 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar21 >> 0x3e == 0) {
          puVar19 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar19 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar21) {
            puVar19 = puVar21;
          }
          func_0x000107c60480(puVar19);
        }
        puVar20 = (undefined *)0x0;
        FUN_102a8bc4c(0,puVar19 + 1,1,puVar21);
      }
      uVar34 = (ulong)puVar20 & 0xffffffffffffff8;
      uVar58 = *(ulong *)(uVar34 + 0x10);
      puVar21 = puVar20;
      if (*(ulong *)(uVar34 + 0x18) >> 1 <= uVar58) {
        puVar21 = (undefined *)(ulong)(1 < *(ulong *)(uVar34 + 0x18));
        FUN_102a8bc4c(puVar21,uVar58 + 1,1,puVar20);
        uVar34 = (ulong)puVar21 & 0xffffffffffffff8;
      }
      uVar48 = uVar48 + 1;
      *(ulong *)(uVar34 + 0x10) = uVar58 + 1;
      *(undefined **)(uVar34 + uVar58 * 8 + 0x20) = puVar16;
      lVar12 = lVar12 + 0x30;
    } while (uVar52 != uVar48);
  }
  func_0x000107c6142c(lVar56);
  lVar56 = lStack_450;
  func_0x000107c61428(lStack_450 + 0x28,&pbStack_250,0,0);
  lVar12 = *(long *)(lVar56 + 0x28);
  lVar56 = lVar12;
  func_0x000107c61434();
  FUN_102a8d6ac();
  func_0x000107c6142c(lVar12);
  func_0x000107c61174(puVar14);
  puVar16 = puVar14;
  FUN_102a8b3f0();
  func_0x000107c54748();
  uVar15 = 0;
  func_0x000102a8fcb0(0,0x112ee7398,&PTR_PTR_1126abe50);
  pbVar45 = pbVar17;
  func_0x000107c5fc48(pbVar17,uVar15);
  func_0x000107c57898(puVar16);
  func_0x000107c61170(pbVar45);
  uVar15 = 0;
  func_0x000102a8fcb0(0,0x112ee73a0,&PTR_PTR_1126abe58);
  puVar20 = puVar21;
  func_0x000107c5fc48(puVar21,uVar15);
  func_0x000107c56790(puVar16);
  func_0x000107c61170(puVar20);
  if ((ulong)pbVar17 >> 0x3e != 0) {
    pbVar45 = (byte *)((ulong)pbVar17 & 0xffffffffffffff8);
    if ((byte *)0x7fffffffffffffff < pbVar17) {
      pbVar45 = pbVar17;
    }
    func_0x000107c60480(pbVar45);
  }
  func_0x000107c59f90(puVar16);
  if (0x7fefffffffffffff < (ulong)ABS(dVar63)) {
                    /* WARNING: Does not return */
    pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb2c);
    (*pcVar51)();
  }
  if (dVar63 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb30);
    (*pcVar51)();
  }
  dVar61 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= dVar63) {
                    /* WARNING: Does not return */
    pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb34);
    (*pcVar51)();
  }
  func_0x000107c59f6c(puVar16);
  if (lStack_2f0 == 0) {
    uStack_300 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_300);
  }
  func_0x000107c598e0(puVar16);
  func_0x000107c61170(uStack_300);
  lVar9 = lStack_420;
  func_0x000102a8fc20(uStack_418,lStack_420,0x112d373d8,&UNK_10d9014c0);
  pcVar51 = *(code **)(lVar29 + 0x30);
  lVar10 = lVar9;
  (*pcVar51)(lVar9,1,lVar11);
  lVar12 = lStack_460;
  if ((int)lVar10 == 1) {
    func_0x000102a8fcf0(lVar9,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar29 + 0x20))(lStack_460,lVar9,lVar11);
    func_0x000107c5ee8c();
    dVar61 = dVar61 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb3c);
      (*pcVar51)();
    }
    if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb40);
      (*pcVar51)();
    }
    if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb48);
      (*pcVar51)();
    }
    func_0x000107c54a58(puVar16);
    (**(code **)(lVar29 + 8))(lVar12,lVar11);
  }
  lVar12 = alStack_498[1];
  func_0x000102a8fc20(uStack_428,alStack_498[1],0x112d373d8,&UNK_10d9014c0);
  lVar9 = lVar12;
  (*pcVar51)(lVar12,1,lVar11);
  if ((int)lVar9 == 1) {
    func_0x000102a8fcf0(lVar12,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lStack_450;
  }
  else {
    (**(code **)(lVar29 + 0x20))(lStack_430,lVar12,lVar11);
    func_0x000107c5ee8c();
    dVar61 = dVar61 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb44);
      (*pcVar51)();
    }
    if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb4c);
      (*pcVar51)();
    }
    if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb50);
      (*pcVar51)();
    }
    func_0x000107c54a54(puVar16);
    (**(code **)(lVar29 + 8))(lStack_430,lVar11);
    lVar12 = lStack_450;
  }
  lStack_450 = lVar12;
  if (lVar56 != 0) {
    func_0x000107c5215c(puVar16);
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112ee7320);
  if (lVar9 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c61174(puVar16);
      func_0x000107c4bfb0(lVar9);
      func_0x000107c6142c(pbVar18);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar14);
      func_0x000107c6142c(pbVar17);
      func_0x000107c6142c(puVar21);
      func_0x000107c6142c(lStack_2f0);
      func_0x000107c61170(lVar56);
      return;
    }
  }
  func_0x000107c6142c(lStack_2f0);
  func_0x000107c61170(lVar56);
  func_0x000107c6142c(pbVar18);
  func_0x000107c61170(puVar16);
  func_0x000107c615e8(lVar12);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c6142c(pbVar17);
  func_0x000107c6142c(puVar21);
  return;
}



/* Entry: 102a8b3f0; end: 102a8b72f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102a8b3f0(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126abe68;
  func_0x000107c610f8(PTR_PTR_1126abe68);
  func_0x000107c453e4();
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ee7308))[1];
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee7308);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar4,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c55d70(puVar1);
  func_0x000107c61170(uVar4);
  lVar2 = unaff_x20 + _DAT_112ee7348;
  lVar5 = lVar2;
  func_0x000107c61618();
  lVar3 = lVar5;
  if (lVar5 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0(lVar5);
    (**(code **)(lVar2 + 8))();
    func_0x000107c615e8(lVar5);
    if (lVar2 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000107c5fadc(lVar3,lVar2);
      func_0x000107c6142c(lVar2);
    }
  }
  func_0x000107c55e70(puVar1);
  func_0x000107c61170(lVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee7350);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112ee7350))[1]);
  func_0x000107c58e40(puVar1);
  func_0x000107c61170(uVar4);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ee7310))[1];
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee7310);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar4,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c55cd0(puVar1);
  func_0x000107c61170(uVar4);
  lVar5 = *(long *)(unaff_x20 + _DAT_112ee7340);
  func_0x000107c55b04(puVar1);
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112ee7318))[1];
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee7318);
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar4,lVar2);
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c590f0(puVar1);
  func_0x000107c61170(uVar4);
  if (lVar5 == 0) {
    func_0x000107c55b08(puVar1);
    func_0x000107c55b10(puVar1);
  }
  else {
    lVar2 = ((undefined8 *)(lVar5 + _DAT_112fbe978))[1];
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112fbe978);
      func_0x000107c61434(lVar2);
      func_0x000107c5fadc(uVar4,lVar2);
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c55b08(puVar1);
    func_0x000107c61170(uVar4);
    lVar2 = ((undefined8 *)(lVar5 + _DAT_112fbe980))[1];
    if (lVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112fbe980);
      func_0x000107c61434(lVar2);
      func_0x000107c5fadc(uVar4,lVar2);
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c55b10(puVar1);
    func_0x000107c61170(uVar4);
    lVar2 = ((undefined8 *)(lVar5 + _DAT_112fbe988))[1];
    if (lVar2 != 0) {
      uVar4 = *(undefined8 *)(lVar5 + _DAT_112fbe988);
      func_0x000107c61434(lVar2);
      func_0x000107c5fadc(uVar4,lVar2);
      func_0x000107c6142c(lVar2);
      goto LAB_102a8b704;
    }
  }
  uVar4 = 0;
LAB_102a8b704:
  func_0x000107c55b14(puVar1);
  func_0x000107c61170(uVar4);
  return puVar1;
}



/* Entry: 102a8b730; end: 102a8b80f; -[_TtC21ShoppingLensAnalytics8Reporter lensTrackerSessionWillEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a8b730(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174();
  func_0x000107c5eea0(puVar4);
  lVar3 = param_1 + _DAT_112ee7338;
  lVar2 = lVar3;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    lVar5 = *(long *)(lVar3 + 8);
    lVar3 = lVar2;
    func_0x000107c614f0();
    (**(code **)(lVar5 + 8))(puVar4,lVar3,lVar5);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar2);
  }
  (**(code **)(lVar6 + 8))(puVar4,lVar1);
  return;
}



/* Entry: 102a8b810; end: 102a8bac3;  */

void FUN_102a8b810(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102a8fcb0(0,param_1,param_2);
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



/* Entry: 102a8bac4; end: 102a8bacf;  */

undefined * FUN_102a8bac4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  puVar3 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar8 = param_2;
  if ((param_3 & 1) != 0) {
    uVar8 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar8 < (long)param_2) {
      if ((long)(uVar8 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8d534);
        (*pcVar4)();
      }
      uVar8 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar8 <= (long)param_2) {
        uVar8 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar8 <= (long)uVar10) {
    uVar8 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar8 != 0) {
    puVar5 = (undefined *)0x112ee73d8;
    func_0x0001000285a8(0x112ee73d8,&UNK_10db128c8);
    lVar6 = 0;
    func_0x000102a91698();
    lVar11 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
    uVar9 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    uVar12 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar5,uVar12 + lVar11 * uVar8,uVar9 | 7);
    puVar7 = puVar5;
    func_0x000107c610a4();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8d52c);
      (*pcVar4)();
    }
    lVar6 = (long)puVar7 - uVar12;
    if (lVar6 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102a8d530);
      (*pcVar4)();
    }
    lVar2 = 0;
    if (lVar11 != 0) {
      lVar2 = lVar6 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar2 << 1;
  }
  lVar6 = 0;
  func_0x000102a91698();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
  uVar8 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
  puVar7 = puVar5 + uVar8;
  puVar1 = param_4 + uVar8;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar7,puVar1,uVar10,lVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar1 + *(long *)(*(long *)(lVar6 + -8) + 0x48) * uVar10 <= puVar7))
    {
      func_0x000107c61414(puVar7,puVar1,uVar10);
    }
    else if (puVar5 != param_4) {
      func_0x000107c61410(puVar7,puVar1,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar3)(param_4);
  return puVar5;
}



/* Entry: 102a8bad0; end: 102a8bc4b;  */

undefined * FUN_102a8bad0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8bc4c);
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
    puVar4 = (undefined *)0x112ee73e0;
    func_0x0001000285a8(0x112ee73e0,&UNK_10db128d0);
    lVar5 = 0;
    func_0x000102a91a2c();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8bc44);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8bc48);
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
  func_0x000102a91a2c();
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



/* Entry: 102a8bc4c; end: 102a8bd73;  */

ulong FUN_102a8bc4c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8bd74);
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
  FUN_102a8bd74(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8bd70);
      (*pcVar1)();
    }
    FUN_102a8be14(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102a8bd74; end: 102a8be13;  */

undefined * FUN_102a8bd74(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112ee73a0;
    FUN_102a8b810(0x112ee73a0,&PTR_PTR_1126abe58,0x112ee73b8,&UNK_10db128a0);
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



/* Entry: 102a8be14; end: 102a8bf2b;  */

long FUN_102a8be14(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8bf28);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8bf2c);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000102a8fcb0(0,0x112ee73a0,&PTR_PTR_1126abe58);
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
      func_0x000102a8fcb0(0,0x112ee73a0,&PTR_PTR_1126abe58);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8bf24);
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



/* Entry: 102a8bf2c; end: 102a8c053;  */

void FUN_102a8bf2c(ulong *param_1)

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
  
  lVar1 = 0x112ee7388;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  lVar5 = *(long *)(lVar1 + -8);
  uVar4 = *param_1;
  uVar3 = uVar4;
  func_0x000107c61558();
  if ((uVar3 & 1) == 0) {
    FUN_102a8d680();
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
    FUN_102a8c054(&puStack_78,auStack_68,&lStack_60,uVar3);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar6 != 0) {
    FUN_102a8c708(0,uVar6,1,&lStack_60);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 102a8c054; end: 102a8c707;  */

void FUN_102a8c054(long *param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar8;
  long unaff_x21;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
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
  
  lVar7 = 0x112ee7388;
  plStack_d0 = param_1;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  lStack_c8 = *(long *)(lVar7 + -8);
  lStack_70 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar7 = (long)&lStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12;
  lStack_b0 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = lVar7 - extraout_x12_00;
  lStack_68 = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar17 = lVar7 - extraout_x12_01;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = param_3[1];
  if (0 < (long)uVar10) {
    uVar11 = 0;
    lStack_c0 = unaff_x21;
    lStack_e0 = param_4;
    puStack_d8 = param_3;
    do {
      uVar3 = uVar11 + 1;
      uStack_b8 = uVar11;
      if ((long)uVar3 < (long)uVar10) {
        uVar8 = *param_3;
        uVar16 = *(ulong *)(lStack_c8 + 0x48);
        lVar9 = uVar8 + uVar16 * uVar3;
        func_0x000102a8fc20(lVar9,uVar17,0x112ee7388,&UNK_10db12888);
        lVar7 = lStack_68;
        func_0x000102a8fc20(uVar8 + uVar16 * uVar11,lStack_68,0x112ee7388,&UNK_10db12888);
        uVar3 = uVar17;
        func_0x000107c5ee78(uVar17,lVar7);
        uStack_88 = CONCAT44(uStack_88._4_4_,(int)uVar3);
        func_0x000102a8fcf0(lVar7,0x112ee7388,&UNK_10db12888);
        func_0x000102a8fcf0(uVar17,0x112ee7388,&UNK_10db12888);
        lVar7 = uVar8 + uVar16 * (uVar11 + 2);
        uVar11 = uVar11 + 2;
        uStack_80 = uVar16;
        do {
          uVar3 = uVar10;
          if (uVar10 == uVar11) break;
          func_0x000102a8fc20(lVar7,uVar17,0x112ee7388,&UNK_10db12888);
          lVar12 = lStack_68;
          func_0x000102a8fc20(lVar9,lStack_68,0x112ee7388,&UNK_10db12888);
          uVar8 = uVar17;
          func_0x000107c5ee78(uVar17,lVar12);
          func_0x000102a8fcf0(lVar12,0x112ee7388,&UNK_10db12888);
          func_0x000102a8fcf0(uVar17,0x112ee7388,&UNK_10db12888);
          lVar7 = lVar7 + uStack_80;
          lVar9 = lVar9 + uStack_80;
          uVar3 = uVar11;
          uVar11 = uVar11 + 1;
        } while (((uint)uStack_88 & 1) == ((uint)uVar8 & 1));
        param_3 = puStack_d8;
        if ((uStack_88 & 1) != 0) {
          if ((long)uVar3 < (long)uStack_b8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6dc);
            (*pcVar1)();
          }
          if ((long)uStack_b8 < (long)uVar3) {
            lVar9 = 0;
            uVar11 = *puStack_d8;
            lVar14 = uStack_80 * (uVar3 - 1);
            lVar12 = uVar3 * uStack_80;
            lVar7 = uStack_b8 * uStack_80;
            uVar10 = uStack_b8;
            uStack_88 = uVar11;
            do {
              if (uVar10 != (uVar3 + lVar9) - 1) {
                if (uVar11 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6fc);
                  (*pcVar1)();
                }
                uVar11 = uVar11 + lVar7;
                func_0x000102a8fc68(uVar11,lStack_b0,0x112ee7388,&UNK_10db12888);
                if ((lVar7 < lVar14) || (uStack_88 + lVar12 <= uVar11)) {
                  func_0x000107c61414(uVar11,uStack_88 + lVar14,1,lStack_70);
                }
                else if (uStack_80 != 0) {
                  func_0x000107c61410(uVar11,uStack_88 + lVar14,1,lStack_70);
                }
                func_0x000102a8fc68(lStack_b0,uStack_88 + lVar14,0x112ee7388,&UNK_10db12888);
                uVar11 = uStack_88;
              }
              uVar10 = uVar10 + 1;
              lVar9 = lVar9 + -1;
              lVar14 = lVar14 - uStack_80;
              lVar12 = lVar12 - uStack_80;
              lVar7 = lVar7 + uStack_80;
              param_3 = puStack_d8;
            } while ((long)uVar10 < (long)(uVar3 + lVar9));
          }
        }
      }
      uVar10 = param_3[1];
      uVar11 = uVar3;
      lVar7 = lStack_c0;
      if ((long)uVar3 < (long)uVar10) {
        if (SBORROW8(uVar3,uStack_b8)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6d8);
          (*pcVar1)();
        }
        if ((long)(uVar3 - uStack_b8) < lStack_e0) {
          if (SCARRY8(uStack_b8,lStack_e0)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6e0);
            (*pcVar1)();
          }
          uVar8 = uStack_b8 + lStack_e0;
          if ((long)uVar10 <= (long)(uStack_b8 + lStack_e0)) {
            uVar8 = uVar10;
          }
          if ((long)uVar8 < (long)uStack_b8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6e4);
            (*pcVar1)();
          }
          if (uVar3 != uVar8) {
            uVar16 = *param_3;
            lStack_a8 = *(long *)(lStack_c8 + 0x48);
            uVar10 = uVar16 + lStack_a8 * (uVar3 - 1);
            lVar15 = -lStack_a8;
            lVar9 = uStack_b8 - uVar3;
            lVar12 = uVar16 + uVar3 * lStack_a8;
            uStack_a0 = uVar8;
            lVar14 = lVar12;
            lVar13 = lVar9;
            uVar8 = uVar10;
LAB_102a8c434:
            do {
              uStack_80 = uVar3;
              uStack_88 = uVar8;
              lStack_90 = lVar13;
              lStack_98 = lVar14;
              func_0x000102a8fc20(lVar12,uVar17,0x112ee7388,&UNK_10db12888);
              lVar7 = lStack_68;
              func_0x000102a8fc20(uVar10,lStack_68,0x112ee7388,&UNK_10db12888);
              uVar11 = uVar17;
              func_0x000107c5ee78(uVar17,lVar7);
              func_0x000102a8fcf0(lVar7,0x112ee7388,&UNK_10db12888);
              func_0x000102a8fcf0(uVar17,0x112ee7388,&UNK_10db12888);
              lVar7 = lStack_78;
              if ((uVar11 & 1) != 0) {
                if (uVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6e8);
                  (*pcVar1)();
                }
                func_0x000102a8fc68(lVar12,lStack_78,0x112ee7388,&UNK_10db12888);
                func_0x000107c61414(lVar12,uVar10,1,lStack_70);
                func_0x000102a8fc68(lVar7,uVar10,0x112ee7388,&UNK_10db12888);
                uVar10 = uVar10 + lVar15;
                lVar12 = lVar12 + lVar15;
                bVar2 = lVar9 != -1;
                lVar9 = lVar9 + 1;
                lVar14 = lStack_98;
                lVar13 = lStack_90;
                uVar8 = uStack_88;
                uVar3 = uStack_80;
                if (bVar2) goto LAB_102a8c434;
              }
              uVar10 = uStack_88 + lStack_a8;
              lVar9 = lStack_90 + -1;
              lVar12 = lStack_98 + lStack_a8;
              uVar11 = uStack_a0;
              param_3 = puStack_d8;
              lVar7 = lStack_c0;
              lVar14 = lVar12;
              lVar13 = lVar9;
              uVar8 = uVar10;
              uVar3 = uStack_80 + 1;
            } while (uStack_80 + 1 != uStack_a0);
          }
        }
      }
      puVar6 = puStack_58;
      if ((long)uVar11 < (long)uStack_b8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6cc);
        (*pcVar1)();
      }
      puVar4 = puStack_58;
      func_0x000107c61558();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar10 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar10) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        func_0x0001000a91e0(puVar6,uVar10 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar10 + 1;
      *(ulong *)(puVar6 + uVar10 * 0x10 + 0x20) = uStack_b8;
      *(ulong *)(puVar6 + uVar10 * 0x10 + 0x28) = uVar11;
      puStack_58 = puVar6;
      if (*plStack_d0 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c700);
        (*pcVar1)();
      }
      FUN_102a8c90c(&puStack_58,*plStack_d0,param_3);
      puVar6 = puStack_58;
      if (lVar7 != 0) goto LAB_102a8c69c;
      uVar10 = param_3[1];
      lStack_c0 = lVar7;
    } while ((long)uVar11 < (long)uVar10);
    unaff_x21 = 0;
  }
  puVar6 = puStack_58;
  lVar7 = *plStack_d0;
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c708);
    (*pcVar1)();
  }
  puVar4 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar4 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar10 = *(ulong *)(puVar6 + 0x10);
  while (puStack_58 = puVar6, 1 < uVar10) {
    uVar17 = *param_3;
    if (uVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c704);
      (*pcVar1)();
    }
    lVar14 = uVar10 - 1;
    lVar13 = *(long *)(puVar6 + uVar10 * 0x10);
    lVar9 = *(long *)(puVar6 + lVar14 * 0x10 + 0x28);
    lVar12 = *(long *)(lStack_c8 + 0x48);
    FUN_102a8cb98(uVar17 + lVar12 * lVar13,
                  uVar17 + lVar12 * *(long *)(puVar6 + lVar14 * 0x10 + 0x20),uVar17 + lVar12 * lVar9
                  ,lVar7);
    if (unaff_x21 != 0) break;
    if (lVar9 < lVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6d0);
      (*pcVar1)();
    }
    puVar4 = puVar6;
    func_0x000107c61558();
    if (((ulong)puVar4 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar10 - 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c6d4);
      (*pcVar1)();
    }
    *(long *)(puVar6 + uVar10 * 0x10) = lVar13;
    *(long *)((long)(puVar6 + uVar10 * 0x10) + 8) = lVar9;
    puStack_58 = puVar6;
    func_0x0001000a97cc(lVar14);
    puVar6 = puStack_58;
    uVar10 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_102a8c69c:
  func_0x000107c6142c(puVar6);
  return;
}



/* Entry: 102a8c708; end: 102a8c90b;  */

void FUN_102a8c708(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long extraout_x12;
  long extraout_x13;
  long extraout_x13_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined1 auStack_b0 [8];
  
  lVar3 = 0x112ee7388;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar5 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar5 - extraout_x13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar14 = lVar13 - extraout_x13_00;
  if (param_3 != param_2) {
    lVar6 = *param_4;
    lVar7 = *(long *)(extraout_x12 + 0x48);
    lVar10 = lVar6 + lVar7 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar8 = lVar6 + lVar7 * param_3;
    lVar12 = param_1;
    lVar11 = lVar10;
    lVar9 = lVar8;
LAB_102a8c850:
    do {
      func_0x000102a8fc20(lVar8,uVar14,0x112ee7388,&UNK_10db12888);
      func_0x000102a8fc20(lVar10,lVar13,0x112ee7388,&UNK_10db12888);
      uVar4 = uVar14;
      func_0x000107c5ee78(uVar14,lVar13);
      func_0x000102a8fcf0(lVar13,0x112ee7388,&UNK_10db12888);
      func_0x000102a8fcf0(uVar14,0x112ee7388,&UNK_10db12888);
      if ((uVar4 & 1) != 0) {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8c90c);
          (*pcVar1)();
        }
        func_0x000102a8fc68(lVar8,puVar5,0x112ee7388,&UNK_10db12888);
        func_0x000107c61414(lVar8,lVar10,1,lVar3);
        func_0x000102a8fc68(puVar5,lVar10,0x112ee7388,&UNK_10db12888);
        lVar10 = lVar10 + -lVar7;
        lVar8 = lVar8 + -lVar7;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_102a8c850;
      }
      param_3 = param_3 + 1;
      lVar10 = lVar11 + lVar7;
      param_1 = lVar12 + -1;
      lVar8 = lVar9 + lVar7;
      lVar12 = param_1;
      lVar11 = lVar10;
      lVar9 = lVar8;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 102a8c90c; end: 102a8cb97;  */

undefined8 FUN_102a8c90c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar5 = uVar8;
    func_0x000107c61558();
    if ((uVar5 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar5 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar10 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar4 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar6 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_102a8c9e0;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb80);
          (*pcVar3)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar7 = plVar1[1];
        bVar4 = SBORROW8(lVar7,lVar6);
        lVar7 = lVar7 - lVar6;
LAB_102a8ca44:
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb70);
          (*pcVar3)();
        }
        lVar6 = uVar8 + lVar10 * 0x10;
        lVar2 = *(long *)(lVar6 + 0x20);
        lVar6 = *(long *)(lVar6 + 0x28);
        if (SBORROW8(lVar6,lVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb78);
          (*pcVar3)();
        }
        lVar11 = lVar10;
        if (lVar6 - lVar2 < lVar7) {
          return 1;
        }
      }
      else {
        lVar7 = uVar8 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar7 + -0x38),*(long *)(lVar7 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb58);
          (*pcVar3)();
        }
        lVar6 = *(long *)(lVar7 + -0x28) - *(long *)(lVar7 + -0x30);
        if (SBORROW8(*(long *)(lVar7 + -0x28),*(long *)(lVar7 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb5c);
          (*pcVar3)();
        }
        plVar1 = (long *)(uVar8 + uVar5 * 0x10);
        lVar2 = *plVar1;
        lVar11 = plVar1[1];
        lVar9 = lVar11 - lVar2;
        if (SBORROW8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb64);
          (*pcVar3)();
        }
        if (SCARRY8(lVar6,lVar9)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb6c);
          (*pcVar3)();
        }
        bVar4 = false;
        if (lVar6 + lVar9 < *(long *)(lVar7 + -0x38) - *(long *)(lVar7 + -0x40)) {
LAB_102a8c9e0:
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb60);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar8 + uVar5 * 0x10);
          lVar2 = *plVar1;
          lVar11 = plVar1[1];
          lVar7 = lVar11 - lVar2;
          if (SBORROW8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb68);
            (*pcVar3)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
          lVar2 = *plVar1;
          lVar11 = plVar1[1];
          lVar9 = lVar11 - lVar2;
          if (SBORROW8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb74);
            (*pcVar3)();
          }
          if (SCARRY8(lVar7,lVar9)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb7c);
            (*pcVar3)();
          }
          bVar4 = false;
          if (lVar7 + lVar9 < lVar6) goto LAB_102a8ca44;
          lVar11 = uVar5 - 2;
          if (lVar9 <= lVar6) {
            lVar11 = lVar10;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
          lVar7 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb84);
            (*pcVar3)();
          }
          lVar11 = uVar5 - 2;
          if (lVar2 - lVar7 <= lVar6) {
            lVar11 = lVar10;
          }
        }
      }
      uVar12 = lVar11 - 1;
      if (uVar5 <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb4c);
        (*pcVar3)();
      }
      lVar10 = *param_3;
      if (lVar10 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb98);
        (*pcVar3)();
      }
      lVar9 = *(long *)(uVar8 + 0x20 + uVar12 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar11 * 0x10);
      lVar7 = *plVar1;
      lVar2 = plVar1[1];
      lVar6 = 0x112ee7388;
      func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
      lVar6 = *(long *)(*(long *)(lVar6 + -8) + 0x48);
      FUN_102a8cb98(lVar10 + lVar6 * lVar9,lVar10 + lVar6 * lVar7,lVar10 + lVar6 * lVar2,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar2 < lVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb50);
        (*pcVar3)();
      }
      uVar5 = uVar8;
      func_0x000107c61558();
      if ((uVar5 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8cb54);
        (*pcVar3)();
      }
      lVar10 = uVar8 + uVar12 * 0x10;
      *(long *)(lVar10 + 0x20) = lVar9;
      *(long *)(lVar10 + 0x28) = lVar2;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar11);
      uVar8 = *param_1;
      uVar5 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Entry: 102a8cb98; end: 102a8d087;  */

undefined8 FUN_102a8cb98(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x12;
  long lVar7;
  long extraout_x13;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_58;
  
  lVar3 = 0x112ee7388;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar6 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar6 - extraout_x13;
  lVar7 = *(long *)(extraout_x12 + 0x48);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8d080);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8d084);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar7 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8d088);
    (*pcVar2)();
  }
  lVar11 = 0;
  if (lVar7 != 0) {
    lVar11 = (long)(param_2 - param_1) / lVar7;
  }
  lVar10 = 0;
  if (lVar7 != 0) {
    lVar10 = (long)(param_3 - param_2) / lVar7;
  }
  uStack_58 = param_1;
  uStack_68 = param_4;
  if (lVar11 < lVar10) {
    lVar10 = lVar11 * lVar7;
    if ((param_4 < param_1) || (param_1 + lVar10 <= param_4)) {
      func_0x000107c61414(param_4,param_1,lVar11,lVar3);
    }
    else if (param_4 != param_1) {
      func_0x000107c61410(param_4,param_1,lVar11,lVar3);
    }
    uVar13 = param_4 + lVar10;
    uStack_70 = uVar13;
    if (0 < lVar10 && param_2 < param_3) {
      do {
        func_0x000102a8fc20(param_2,uVar12,0x112ee7388,&UNK_10db12888);
        func_0x000102a8fc20(param_4,lVar6,0x112ee7388,&UNK_10db12888);
        uVar4 = uVar12;
        func_0x000107c5ee78(uVar12,lVar6);
        func_0x000102a8fcf0(lVar6,0x112ee7388,&UNK_10db12888);
        func_0x000102a8fcf0(uVar12,0x112ee7388,&UNK_10db12888);
        if ((uVar4 & 1) == 0) {
          uVar8 = param_4 + lVar7;
          uVar4 = param_2;
          uVar1 = uVar8;
          if ((param_1 < param_4) || (uVar8 <= param_1)) {
            func_0x000107c61414(param_1,param_4,1,lVar3);
          }
          else if (param_1 != param_4) {
            func_0x000107c61410(param_1,param_4,1,lVar3);
          }
        }
        else {
          uVar4 = param_2 + lVar7;
          uVar8 = param_4;
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
        param_4 = uVar8;
        param_1 = param_1 + lVar7;
        uStack_58 = param_1;
      } while ((param_4 < uVar13) && (param_2 = uVar4, uStack_58 = param_1, uVar4 < param_3));
    }
  }
  else {
    lVar11 = lVar10 * lVar7;
    if ((param_4 < param_2) || (param_2 + lVar11 <= param_4)) {
      func_0x000107c61414(param_4,param_2,lVar10,lVar3);
    }
    else if (param_4 != param_2) {
      func_0x000107c61410(param_4,param_2,lVar10,lVar3);
    }
    uVar13 = param_4 + lVar11;
    uStack_70 = uVar13;
    uStack_58 = param_2;
    if (0 < lVar11 && param_1 < param_2) {
      lVar7 = -lVar7;
      uStack_58 = param_2;
      uStack_b0 = param_1;
      do {
        uVar4 = uStack_58 + lVar7;
        uVar8 = param_3;
        uStack_a8 = uStack_58;
        while( true ) {
          param_3 = uVar8 + lVar7;
          uVar1 = uVar13 + lVar7;
          func_0x000102a8fc20(uVar1,uVar12,0x112ee7388,&UNK_10db12888);
          func_0x000102a8fc20(uVar4,lVar6,0x112ee7388,&UNK_10db12888);
          uVar5 = uVar12;
          func_0x000107c5ee78(uVar12,lVar6);
          func_0x000102a8fcf0(lVar6,0x112ee7388,&UNK_10db12888);
          func_0x000102a8fcf0(uVar12,0x112ee7388,&UNK_10db12888);
          uVar9 = uStack_b0;
          if ((uVar5 & 1) != 0) break;
          uStack_70 = uVar1;
          if ((uVar8 < uVar13) || (uVar13 <= param_3)) {
            func_0x000107c61414(param_3,uVar1,1,lVar3);
          }
          else if (uVar8 != uVar13) {
            func_0x000107c61410(param_3,uVar1,1,lVar3);
          }
          uVar8 = param_3;
          uVar13 = uVar1;
          if (uVar1 <= param_4) goto LAB_102a8ceb8;
        }
        if ((uVar8 < uStack_a8) || (uStack_a8 <= param_3)) {
          func_0x000107c61414(param_3,uVar4,1,lVar3);
          uVar9 = uStack_b0;
        }
        else if (uVar8 != uStack_a8) {
          func_0x000107c61410(param_3,uVar4,1,lVar3);
        }
        uStack_58 = uVar4;
      } while ((param_4 < uVar13) && (uVar9 < uVar4));
    }
  }
LAB_102a8ceb8:
  FUN_102a8d088(&uStack_58,&uStack_68,&uStack_70);
  return 1;
}



/* Entry: 102a8d088; end: 102a8d143;  */

void FUN_102a8d088(ulong *param_1,ulong *param_2,long *param_3)

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
  lVar3 = 0x112ee7388;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  lVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8d140);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102a8d144);
  (*pcVar2)();
}



/* Entry: 102a8d144; end: 102a8d21b;  */

void FUN_102a8d144(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  func_0x000102a8d534();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102a8d21c; end: 102a8d67f;  */

undefined *
FUN_102a8d21c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8d3b4);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar9) {
    uVar6 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112ee73c8;
    func_0x0001000285a8(0x112ee73c8,&UNK_10db128b8);
    lVar8 = 0x112ee7388;
    func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
    lVar10 = *(long *)(*(long *)(lVar8 + -8) + 0x48);
    uVar7 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
    uVar11 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar6,uVar7 | 7);
    puVar5 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8d3ac);
      (*pcVar3)();
    }
    lVar8 = (long)puVar5 - uVar11;
    if (lVar8 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102a8d3b0);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar8 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar8 = 0x112ee7388;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  uVar6 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar6 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  puVar5 = puVar4 + uVar6;
  puVar1 = param_4 + uVar6;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar9,lVar8);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar8 + -8) + 0x48) * uVar9 <= puVar5))
    {
      func_0x000107c61414(puVar5,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar5,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar4;
}



/* Entry: 102a8d680; end: 102a8d6ab;  */

void FUN_102a8d680(long param_1)

{
  FUN_102a8d21c(0,*(undefined8 *)(param_1 + 0x10),0,param_1,PTR__swift_release_11034f4c0);
  return;
}



/* Entry: 102a8d6ac; end: 102a8d78b;  */

undefined * FUN_102a8d6ac(long param_1,undefined8 param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126abe70;
    func_0x000107c610f8(PTR_PTR_1126abe70);
    func_0x000107c453e4();
    uVar3 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar3 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(param_1 + 0x38);
    func_0x000107c61434(param_1);
    lVar6 = 0;
    while( true ) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
        func_0x000107c5a0b4(puVar4,param_2,1);
      }
      bVar2 = SCARRY8(lVar6,1);
      lVar6 = lVar6 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a8d78c);
        (*pcVar1)();
      }
      if ((long)(uVar3 + 0x3f >> 6) <= lVar6) break;
      uVar5 = ((ulong *)(param_1 + 0x38))[lVar6];
    }
    func_0x000107c61574(param_1);
  }
  return puVar4;
}



/* Entry: 102a8d78c; end: 102a8fb5b;  */

/* WARNING: Removing unreachable block (ram,0x000102a8fb50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a8d78c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  long extraout_x8;
  long lVar23;
  long lVar24;
  long extraout_x8_00;
  long lVar25;
  long lVar26;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar27;
  long extraout_x8_03;
  long lVar28;
  long lVar29;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar30;
  long lVar31;
  long extraout_x8_06;
  long lVar32;
  ulong uVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 *puVar43;
  long lVar44;
  byte *pbVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  ulong uVar48;
  long lVar49;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long unaff_x20;
  byte **ppbVar50;
  code *pcVar51;
  ulong uVar52;
  long lVar53;
  long lVar54;
  undefined8 uVar55;
  long lVar56;
  byte *pbVar57;
  ulong uVar58;
  undefined8 uVar59;
  long lVar60;
  double dVar61;
  undefined8 uVar62;
  double dVar63;
  double dVar64;
  undefined1 auStack_4e0 [8];
  undefined8 uStack_4d8;
  undefined1 auStack_4d0 [8];
  undefined8 uStack_4c8;
  undefined1 auStack_4c0 [8];
  undefined8 uStack_4b8;
  undefined8 auStack_4b0 [2];
  double dStack_4a0;
  long alStack_498 [6];
  byte *pbStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  undefined8 uStack_300;
  long lStack_2f0;
  undefined1 auStack_2c0 [112];
  byte *pbStack_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long lStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined8 uStack_1ef;
  byte *pbStack_1e0;
  ulong uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  byte *pbStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  byte *pbStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  
  lVar56 = 0x112d373d8;
  uStack_428 = param_5;
  uStack_418 = param_4;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar56 + -8) + 0x40));
  lVar13 = (long)&dStack_4a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar23 = lVar13 - extraout_x12;
  lVar56 = 0x112ee7388;
  lStack_420 = lVar23;
  func_0x0001000285a8(0x112ee7388,&UNK_10db12888);
  lVar24 = *(long *)(lVar56 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar24 + 0x40));
  lVar23 = lVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar35 = lVar23 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar36 = lVar35 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar36 - extraout_x12_02;
  lVar9 = 0;
  func_0x000102a91a2c();
  lVar26 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar60 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar37 = lVar60 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lStack_440 = lVar37;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar37 = lVar37 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  alStack_498[5] = lVar37 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = (lVar37 - extraout_x12_04) - extraout_x12_05;
  lStack_3f8 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_06;
  lStack_410 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_07;
  lVar10 = 0;
  lStack_3e8 = lVar38;
  FUN_102a9ded4();
  lVar27 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar27 + 0x40));
  lVar38 = lVar38 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_448 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_08;
  lStack_400 = lVar38;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar38 = lVar38 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar28 = lVar38 - extraout_x12_10;
  lVar11 = 0;
  func_0x000107c5eea4();
  lVar29 = *(long *)(lVar11 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar29 + 0x40));
  lVar39 = lVar28 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lStack_430 = lVar39;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar39 = lVar39 - extraout_x12_11;
  lStack_460 = lVar39;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar39 = lVar39 - extraout_x12_12;
  lVar12 = 0x112ee6128;
  func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  lVar40 = lVar39 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_408 = lVar40;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar40 = lVar40 - extraout_x12_13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar30 = lVar40 - extraout_x12_14;
  lVar12 = 0;
  func_0x000102a91698();
  lVar31 = *(long *)(lVar12 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar31 + 0x40));
  lVar41 = lVar30 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  lStack_458 = lVar41;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar41 = lVar41 - extraout_x12_15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar42 = lVar41 - extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_438 = lVar42 - extraout_x12_17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar43 = (undefined8 *)((lVar42 - extraout_x12_17) - extraout_x12_18);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar44 = (long)puVar43 - extraout_x12_19;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar32 = lVar44 - extraout_x12_20;
  lStack_3f0 = ((undefined8 *)(unaff_x20 + _DAT_112ee7308))[1];
  if (lStack_3f0 == 0) {
    return;
  }
  alStack_498[3] = *(undefined8 *)(unaff_x20 + _DAT_112ee7308);
  lVar53 = unaff_x20 + _DAT_112ee7328;
  func_0x000107c61618();
  lVar49 = lStack_3f0;
  if (lVar53 == 0) {
    return;
  }
  alStack_498[1] = lVar13;
  func_0x000107c61434(lStack_3f0);
  lStack_450 = lVar53;
  FUN_102a86474(param_1,param_2,param_3);
  lVar13 = *(long *)(unaff_x20 + _DAT_112ee7330);
  alStack_498[0] = lVar37;
  if (lVar13 == 0) {
LAB_102a8e228:
    func_0x000107c6142c(lVar49);
  }
  else {
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar49 = lStack_3f0;
    if (lVar13 == 0) goto LAB_102a8e228;
    uVar52 = *(ulong *)(param_1 + 0x10);
    pbVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    alStack_498[2] = param_2;
    alStack_498[4] = lVar13;
    if (uVar52 != 0) {
      pbStack_160 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000102a8d1e0(0,uVar52,0);
      uVar48 = 0;
      bVar2 = *(byte *)(lVar31 + 0x50);
      pbStack_468 = (byte *)((ulong)&pbStack_f0 | 1);
      do {
        pbVar18 = pbStack_160;
        if (*(ulong *)(param_1 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
          pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb00);
          (*pcVar51)();
        }
        func_0x000102a8fba0(param_1 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                            *(long *)(lVar31 + 0x48) * uVar48,lVar44,0x102a91698);
        pbVar45 = *(byte **)(lVar44 + 0x20);
        uVar34 = *(ulong *)(lVar44 + 0x28);
        uVar15 = *(undefined8 *)(lVar44 + 0x30);
        lVar37 = *(long *)(lVar44 + 0x38);
        uVar22 = (ulong)pbVar45 & 0xffffffffffff;
        uVar33 = uVar34 >> 0x38 & 0xf;
        uVar58 = uVar22;
        if ((uVar34 & 0x2000000000000000) != 0) {
          uVar58 = uVar33;
        }
        if (uVar58 != 0) {
          if ((uVar34 >> 0x3c & 1) == 0) {
            if ((uVar34 >> 0x3d & 1) == 0) {
              if (((ulong)pbVar45 >> 0x3c & 1) == 0) {
                func_0x000107c60358();
              }
              else {
                pbVar45 = (byte *)((uVar34 & 0xfffffffffffffff) + 0x20);
                uVar34 = uVar22;
              }
              if (*pbVar45 == 0x2b) {
                lVar13 = uVar34 - 1;
                if ((long)uVar34 < 1) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb10);
                  (*pcVar51)();
                }
                if (lVar13 != 0) {
                  lVar53 = 0;
                  while( true ) {
                    pbVar45 = pbVar45 + 1;
                    if ((9 < *pbVar45 - 0x30) ||
                       (lVar49 = lVar53 * 10,
                       SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) break;
                    uVar58 = (ulong)(byte)(*pbVar45 - 0x30);
                    lVar53 = lVar49 + uVar58;
                    if ((SCARRY8(lVar49,uVar58)) || (lVar13 = lVar13 + -1, lVar13 == 0)) break;
                  }
                }
              }
              else if (*pbVar45 == 0x2d) {
                lVar13 = uVar34 - 1;
                if ((long)uVar34 < 1) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb08);
                  (*pcVar51)();
                }
                if (lVar13 != 0) {
                  lVar53 = 0;
                  while( true ) {
                    pbVar45 = pbVar45 + 1;
                    if ((9 < *pbVar45 - 0x30) ||
                       (lVar49 = lVar53 * 10,
                       SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) break;
                    uVar58 = (ulong)(byte)(*pbVar45 - 0x30);
                    lVar53 = lVar49 - uVar58;
                    if ((SBORROW8(lVar49,uVar58)) || (lVar13 = lVar13 + -1, lVar13 == 0)) break;
                  }
                }
              }
              else if ((uVar34 != 0) && (pbVar45 != (byte *)0x0)) {
                lVar13 = 0;
                do {
                  if (((9 < *pbVar45 - 0x30) ||
                      (lVar53 = lVar13 * 10,
                      SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar53 >> 0x3f)) ||
                     (uVar58 = (ulong)(byte)(*pbVar45 - 0x30), lVar13 = lVar53 + uVar58,
                     SCARRY8(lVar53,uVar58))) break;
                  uVar34 = uVar34 - 1;
                  pbVar45 = pbVar45 + 1;
                } while (uVar34 != 0);
              }
            }
            else {
              pbStack_f0 = pbVar45;
              uStack_e8 = uVar34 & 0xffffffffffffff;
              uVar1 = (uint)pbVar45 & 0xff;
              if (uVar1 == 0x2b) {
                if (uVar33 == 0) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb04);
                  (*pcVar51)();
                }
                lVar13 = uVar33 - 1;
                if (lVar13 != 0) {
                  lVar53 = 0;
                  pbVar45 = pbStack_468;
                  do {
                    if (((9 < *pbVar45 - 0x30) ||
                        (lVar49 = lVar53 * 10,
                        SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) ||
                       (uVar58 = (ulong)(byte)(*pbVar45 - 0x30), lVar53 = lVar49 + uVar58,
                       SCARRY8(lVar49,uVar58))) break;
                    lVar13 = lVar13 + -1;
                    pbVar45 = pbVar45 + 1;
                  } while (lVar13 != 0);
                }
              }
              else if (uVar1 == 0x2d) {
                if (uVar33 == 0) {
                    /* WARNING: Does not return */
                  pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb0c);
                  (*pcVar51)();
                }
                lVar13 = uVar33 - 1;
                if (lVar13 != 0) {
                  lVar53 = 0;
                  pbVar45 = pbStack_468;
                  while( true ) {
                    if ((9 < *pbVar45 - 0x30) ||
                       (lVar49 = lVar53 * 10,
                       SUB168(SEXT816(lVar53) * SEXT816(10),8) != lVar49 >> 0x3f)) break;
                    uVar58 = (ulong)(byte)(*pbVar45 - 0x30);
                    lVar53 = lVar49 - uVar58;
                    if ((SBORROW8(lVar49,uVar58)) ||
                       (lVar13 = lVar13 + -1, pbVar45 = pbVar45 + 1, lVar13 == 0)) break;
                  }
                }
              }
              else if (uVar33 != 0) {
                lVar13 = 0;
                ppbVar50 = &pbStack_f0;
                while( true ) {
                  if ((9 < *(byte *)ppbVar50 - 0x30) ||
                     (lVar53 = lVar13 * 10,
                     SUB168(SEXT816(lVar13) * SEXT816(10),8) != lVar53 >> 0x3f)) break;
                  uVar58 = (ulong)(byte)(*(byte *)ppbVar50 - 0x30);
                  lVar13 = lVar53 + uVar58;
                  if ((SCARRY8(lVar53,uVar58)) ||
                     (uVar33 = uVar33 - 1, ppbVar50 = (byte **)((long)ppbVar50 + 1), uVar33 == 0))
                  break;
                }
              }
            }
          }
          else {
            func_0x000107c61434(uVar34);
            func_0x000100fb6b80(pbVar45,uVar34,10);
            func_0x000107c6142c(uVar34);
          }
        }
        func_0x000102a8fc20(lVar44 + *(int *)(lVar12 + 0x40),lVar30,0x112ee6128,&UNK_10db114e0);
        (**(code **)(lVar27 + 0x30))(lVar30,1,lVar10);
        func_0x000107c61434(lVar37);
        func_0x000102a8fcf0(lVar30,0x112ee6128,&UNK_10db114e0);
        (**(code **)(lVar29 + 0x10))(lVar39,lVar44 + *(int *)(lVar12 + 0x2c),lVar11);
        uVar62 = *(undefined8 *)(lVar44 + *(int *)(lVar12 + 0x38));
        if (lVar37 == 0) {
          uVar15 = 0;
        }
        else {
          func_0x000107c5fadc(uVar15,lVar37);
          func_0x000107c6142c(lVar37);
        }
        puVar14 = PTR_PTR_1126abe60;
        func_0x000107c610f8();
        puVar21 = puVar14;
        func_0x000107c5ee70();
        *(undefined **)(lVar32 + -0x10) = puVar21;
        func_0x000107c47fa8(uVar62);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar21);
        (**(code **)(lVar29 + 8))(lVar39,lVar11);
        func_0x000102a8fbe4(lVar44,0x102a91698);
        uVar58 = *(ulong *)(pbVar18 + 0x10);
        pbStack_160 = pbVar18;
        if (*(ulong *)(pbVar18 + 0x18) >> 1 <= uVar58) {
          func_0x000102a8d1e0(1 < *(ulong *)(pbVar18 + 0x18),uVar58 + 1,1);
        }
        uVar48 = uVar48 + 1;
        *(ulong *)(pbStack_160 + 0x10) = uVar58 + 1;
        *(undefined **)(pbStack_160 + uVar58 * 8 + 0x20) = puVar14;
        pbVar18 = pbStack_160;
      } while (uVar48 != uVar52);
    }
    param_2 = alStack_498[2];
    uVar15 = 0;
    func_0x000102a8fcb0(0,0x112ee73a8,&PTR_PTR_1126abe60);
    pbVar45 = pbVar18;
    func_0x000107c5fc48(pbVar18,uVar15);
    func_0x000107c6142c(pbVar18);
    lVar39 = lStack_3f0;
    lVar37 = alStack_498[3];
    func_0x000107c5fadc(alStack_498[3],lStack_3f0);
    func_0x000107c6142c(lVar39);
    lVar30 = alStack_498[4];
    func_0x000107c5cdf8(alStack_498[4]);
    func_0x000107c61170(pbVar45);
    func_0x000107c61170(lVar37);
    lVar39 = *(long *)(param_1 + 0x10);
    if (lVar39 == 0) {
      func_0x000107c615e8(lVar30);
    }
    else {
      lVar30 = param_1 + ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff));
      lVar37 = *(long *)(lVar31 + 0x48);
      do {
        func_0x000102a8fba0(lVar30,lVar32,0x102a91698);
        func_0x000102a8fb5c(lVar32,puVar43,0x102a91698);
        func_0x000102a8fc20((long)puVar43 + (long)*(int *)(lVar12 + 0x40),lVar40,0x112ee6128,
                            &UNK_10db114e0);
        lVar44 = lVar40;
        (**(code **)(lVar27 + 0x30))(lVar40,1,lVar10);
        if ((int)lVar44 == 1) {
          func_0x000102a8fbe4(puVar43,0x102a91698);
          func_0x000102a8fcf0(lVar40,0x112ee6128,&UNK_10db114e0);
        }
        else {
          func_0x000102a8fb5c(lVar40,lVar28,FUN_102a9ded4);
          func_0x000102a8fba0(lVar28,lVar38,FUN_102a9ded4);
          lVar44 = lVar38;
          func_0x000107c614c4(lVar38,lVar10);
          iVar8 = (int)lVar44;
          if (iVar8 < 2) {
            if (iVar8 == 0) {
              func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
              func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
              lVar44 = 0x112ee62c0;
              func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
              iVar8 = *(int *)(lVar44 + 0x30);
              lVar44 = 0;
              func_0x000107c5ede0();
              (**(code **)(*(long *)(lVar44 + -8) + 8))(lVar38 + iVar8,lVar44);
            }
            else {
              func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
              uStack_1d8 = 0;
              pbStack_1e0 = (byte *)0x0;
              uStack_1c8 = 0;
              uStack_1d0 = 0;
              lStack_1c0 = 1;
              uStack_1b0 = 0;
              uStack_1b8 = 0;
              uStack_1a0 = 0;
              uStack_1a8 = 0;
              uStack_190 = 0;
              uStack_198 = 0;
              uStack_180 = 0;
              uStack_17f = 0;
              uStack_188 = 0;
              uStack_187 = 0;
              uStack_178 = 0;
LAB_102a8e6a0:
              puVar14 = PTR_PTR_1126c7d90;
              func_0x000107c610f8(PTR_PTR_1126c7d90);
              func_0x000107c453e4();
              puVar21 = puVar14;
              func_0x000107c5ee70();
              puVar16 = puVar14;
              func_0x000107c5e700(puVar14);
              func_0x000107c61180();
              func_0x000107c61170(puVar21);
              func_0x000107c61170(puVar16);
              func_0x000107c5e5f8(puVar14);
              func_0x000107c61180();
              func_0x000107c61170();
              if (lStack_1c0 == 1) {
                ppbVar50 = (byte **)0x0;
              }
              else {
                uStack_208 = uStack_198;
                uStack_210 = uStack_1a0;
                uStack_1f8 = uStack_188;
                uStack_200 = uStack_190;
                uStack_1ef = CONCAT17(uStack_178,uStack_17f);
                uStack_1f7 = uStack_187;
                uStack_1f0 = uStack_180;
                uStack_248 = uStack_1d8;
                pbStack_250 = pbStack_1e0;
                uStack_238 = uStack_1c8;
                uStack_240 = uStack_1d0;
                uStack_228 = uStack_1b8;
                lStack_230 = lStack_1c0;
                uStack_218 = uStack_1a8;
                uStack_220 = uStack_1b0;
                uStack_e8 = uStack_1d8;
                pbStack_f0 = pbStack_1e0;
                uStack_d8 = uStack_1c8;
                uStack_e0 = uStack_1d0;
                uStack_90 = uStack_180;
                uStack_c8 = uStack_1b8;
                lStack_d0 = lStack_1c0;
                uStack_b8 = uStack_1a8;
                uStack_c0 = uStack_1b0;
                uStack_a8 = uStack_198;
                uStack_b0 = uStack_1a0;
                uStack_98 = uStack_188;
                uStack_97 = uStack_187;
                uStack_a0 = uStack_190;
                uStack_8f = uStack_1ef;
                func_0x0001042826f0(0);
                func_0x000107c610f8();
                func_0x00010178e30c(&pbStack_250,auStack_2c0);
                ppbVar50 = &pbStack_f0;
                func_0x000104281270(ppbVar50);
              }
              puVar21 = puVar14;
              func_0x000107c5e4fc(puVar14);
              func_0x000107c61180();
              func_0x000107c61170(ppbVar50);
              func_0x000107c61170(puVar21);
              puVar21 = puVar14;
              func_0x000107c3ecc8(puVar14);
              func_0x000107c61180();
              uVar15 = *puVar43;
              func_0x000107c5fadc(uVar15,puVar43[1]);
              func_0x000107c5cd84(alStack_498[4]);
              func_0x000107c61170(uVar15);
              func_0x000107c61170(puVar14);
              func_0x000107c61170(puVar21);
              func_0x000102a8fcf0(&pbStack_1e0,0x112dcbca8,&UNK_10d98e380);
              func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
            }
          }
          else if (iVar8 == 2) {
            func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
            lVar44 = 0x112ee62b0;
            func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
            iVar8 = *(int *)(lVar44 + 0x30);
            func_0x000107c6142c(*(undefined8 *)(lVar38 + 8 + (long)*(int *)(lVar44 + 0x50)));
            lVar53 = lStack_3e8;
            bVar2 = *(byte *)(lVar38 + *(int *)(lVar44 + 0x60));
            bVar3 = *(byte *)(lVar38 + *(int *)(lVar44 + 0x70));
            func_0x000102a8fc68(lVar38 + iVar8,lStack_3e8,0x112d36580,&UNK_10d9016d0);
            lVar13 = lStack_410;
            func_0x000102a8fc20(lVar53,lStack_410,0x112d36580,&UNK_10d9016d0);
            lVar49 = 0;
            func_0x000107c5ede0();
            lVar54 = *(long *)(lVar49 + -8);
            uVar15 = 1;
            lVar53 = lVar13;
            (**(code **)(lVar54 + 0x30))(lVar13,1,lVar49);
            if ((int)lVar53 == 1) {
              func_0x000102a8fcf0(lVar13,0x112d36580,&UNK_10d9016d0);
              lVar53 = 0;
              uVar15 = 0;
            }
            else {
              func_0x000107c5ed70();
              (**(code **)(lVar54 + 8))(lVar13,lVar49);
            }
            iVar8 = *(int *)(lVar44 + 0x40);
            *(undefined1 *)(lVar32 + -0x10) = 1;
            *(undefined8 *)(lVar32 + -0x18) = 0;
            *(undefined1 *)(lVar32 + -0x20) = 1;
            *(undefined8 *)(lVar32 + -0x28) = 0;
            *(undefined1 *)(lVar32 + -0x30) = 1;
            *(undefined8 *)(lVar32 + -0x38) = 0;
            *(undefined1 *)(lVar32 + -0x40) = 0;
            func_0x00010420fe14(&pbStack_160,~(bVar2 | bVar3) & 1,bVar3,bVar2,0,lVar53,uVar15,0,0);
            uStack_208 = uStack_118;
            uStack_210 = uStack_120;
            uStack_1f8 = uStack_108;
            uStack_200 = uStack_110;
            uStack_1ef = uStack_ff;
            uStack_1f7 = uStack_107;
            uStack_1f0 = uStack_100;
            uStack_248 = uStack_158;
            pbStack_250 = pbStack_160;
            uStack_238 = uStack_148;
            uStack_240 = uStack_150;
            uStack_228 = uStack_138;
            lStack_230 = lStack_140;
            uStack_218 = uStack_128;
            uStack_220 = uStack_130;
            func_0x000102a8fcf0(lStack_3e8,0x112d36580,&UNK_10d9016d0);
            func_0x000102a8fcf0(lVar38 + iVar8,0x112d36580,&UNK_10d9016d0);
            if ((bVar2 & 1) == 0) {
              uStack_198 = uStack_208;
              uStack_1a0 = uStack_210;
              uStack_188 = uStack_1f8;
              uStack_190 = uStack_200;
              uStack_17f = (undefined7)uStack_1ef;
              uStack_178 = (undefined1)((ulong)uStack_1ef >> 0x38);
              uStack_187 = uStack_1f7;
              uStack_180 = uStack_1f0;
              uStack_1d8 = uStack_248;
              pbStack_1e0 = pbStack_250;
              uStack_1c8 = uStack_238;
              uStack_1d0 = uStack_240;
              uStack_1b8 = uStack_228;
              lStack_1c0 = lStack_230;
              uStack_1a8 = uStack_218;
              uStack_1b0 = uStack_220;
              goto LAB_102a8e6a0;
            }
            func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
            func_0x00010178e348(&pbStack_160);
          }
          else {
            func_0x000102a8fbe4(lVar28,FUN_102a9ded4);
            func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
          }
          func_0x000102a8fbe4(puVar43,0x102a91698);
        }
        lVar30 = lVar30 + lVar37;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
      func_0x000107c615e8(alStack_498[4]);
      param_2 = alStack_498[2];
    }
  }
  lVar38 = lStack_408;
  puVar14 = PTR_PTR_1126c4d80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000102a8fc20(param_3,lVar38,0x112ee6128,&UNK_10db114e0);
  lVar28 = lVar38;
  (**(code **)(lVar27 + 0x30))(lVar38,1,lVar10);
  lVar27 = lStack_400;
  if ((int)lVar28 == 1) {
    func_0x000102a8fcf0(lVar38,0x112ee6128,&UNK_10db114e0);
    goto LAB_102a8ec40;
  }
  func_0x000102a8fb5c(lVar38,lStack_400,FUN_102a9ded4);
  lVar38 = lStack_448;
  func_0x000102a8fba0(lVar27,lStack_448,FUN_102a9ded4);
  lVar27 = lVar38;
  func_0x000107c614c4(lVar38,lVar10);
  iVar8 = (int)lVar27;
  alStack_498[2] = param_2;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
      lVar10 = 0x112ee62c0;
      func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
      iVar8 = *(int *)(lVar10 + 0x30);
      lVar27 = 0;
      func_0x000107c5ede0();
      lVar10 = lStack_3f8;
      lVar28 = *(long *)(lVar27 + -8);
      (**(code **)(lVar28 + 0x20))(lStack_3f8,lVar38 + iVar8,lVar27);
      (**(code **)(lVar28 + 0x38))(lVar10,0,1,lVar27);
    }
    else {
      func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
      lVar38 = 0;
      func_0x000107c5ede0();
      lVar10 = lStack_3f8;
      (**(code **)(*(long *)(lVar38 + -8) + 0x38))(lStack_3f8,1,1,lVar38);
    }
  }
  else if (iVar8 == 2) {
    func_0x000107c6142c(*(undefined8 *)(lVar38 + 8));
    lVar10 = 0x112ee62b0;
    func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
    iVar8 = *(int *)(lVar10 + 0x30);
    iVar6 = *(int *)(lVar10 + 0x40);
    func_0x000107c6142c(*(undefined8 *)(lVar38 + *(int *)(lVar10 + 0x50) + 8));
    lVar27 = alStack_498[5];
    cVar4 = *(char *)(lVar38 + *(int *)(lVar10 + 0x60));
    cVar5 = *(char *)(lVar38 + *(int *)(lVar10 + 0x70));
    func_0x000102a8fc68(lVar38 + iVar8,alStack_498[5],0x112d36580,&UNK_10d9016d0);
    lVar10 = alStack_498[0];
    func_0x000102a8fc68(lVar38 + iVar6,alStack_498[0],0x112d36580,&UNK_10d9016d0);
    if (cVar4 == '\x01') {
      func_0x000102a8fcf0(lVar27,0x112d36580,&UNK_10d9016d0);
      lVar27 = lVar10;
    }
    else {
      func_0x000102a8fcf0(lVar10,0x112d36580,&UNK_10d9016d0);
      if (cVar5 != '\0') {
        func_0x000102a8fcf0(lVar27,0x112d36580,&UNK_10d9016d0);
        lVar38 = 0;
        func_0x000107c5ede0();
        lVar10 = lStack_3f8;
        (**(code **)(*(long *)(lVar38 + -8) + 0x38))(lStack_3f8,1,1,lVar38);
        goto LAB_102a8eb48;
      }
    }
    lVar10 = lStack_3f8;
    func_0x000102a8fc68(lVar27,lStack_3f8,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000102a8fbe4(lVar38,FUN_102a9ded4);
    lVar38 = 0;
    func_0x000107c5ede0();
    lVar10 = lStack_3f8;
    (**(code **)(*(long *)(lVar38 + -8) + 0x38))(lStack_3f8,1,1,lVar38);
  }
LAB_102a8eb48:
  lVar38 = lStack_440;
  func_0x000102a8fc20(lVar10,lStack_440,0x112d36580,&UNK_10d9016d0);
  lVar27 = 0;
  func_0x000107c5ede0();
  lVar28 = *(long *)(lVar27 + -8);
  uVar15 = 1;
  lVar10 = lVar38;
  (**(code **)(lVar28 + 0x30))(lVar38,1,lVar27);
  if ((int)lVar10 == 1) {
    func_0x000102a8fcf0(lVar38,0x112d36580,&UNK_10d9016d0);
    lVar10 = 0;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar28 + 8))(lVar38,lVar27);
    func_0x000107c5fadc(lVar10,uVar15);
    func_0x000107c6142c(uVar15);
  }
  func_0x000107c54770(puVar14);
  func_0x000107c61170(lVar10);
  func_0x000107c54754(puVar14);
  func_0x000102a8fcf0(lStack_3f8,0x112d36580,&UNK_10d9016d0);
  func_0x000102a8fbe4(lStack_400,FUN_102a9ded4);
LAB_102a8ec40:
  func_0x000107c5476c(puVar14);
  lVar10 = lStack_438;
  uVar52 = *(ulong *)(param_1 + 0x10);
  pbVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar52 != 0) {
    uVar48 = 0;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fae8);
        (*pcVar51)();
      }
      uVar58 = (ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff);
      lVar38 = *(long *)(lVar31 + 0x48);
      func_0x000102a8fba0(param_1 + uVar58 + lVar38 * uVar48,lVar10,0x102a91698);
      if (*(char *)(lVar10 + *(int *)(lVar12 + 0x3c)) == '\x01') {
        pbVar45 = pbVar18;
        func_0x000107c61558();
        pbStack_1e0 = pbVar18;
        if (((ulong)pbVar45 & 1) == 0) {
          func_0x000102a8d1bc(0,*(long *)(pbVar18 + 0x10) + 1,1);
        }
        uVar34 = *(ulong *)(pbStack_1e0 + 0x10);
        if (*(ulong *)(pbStack_1e0 + 0x18) >> 1 <= uVar34) {
          func_0x000102a8d1bc(1 < *(ulong *)(pbStack_1e0 + 0x18),uVar34 + 1,1);
        }
        pbVar18 = pbStack_1e0;
        *(ulong *)(pbStack_1e0 + 0x10) = uVar34 + 1;
        func_0x000102a8fb5c(lVar10,pbStack_1e0 + uVar34 * lVar38 + uVar58,0x102a91698);
      }
      else {
        func_0x000102a8fbe4(lVar10,0x102a91698);
      }
      uVar48 = uVar48 + 1;
    } while (uVar52 != uVar48);
  }
  lVar10 = *(long *)(pbVar18 + 0x10);
  if (lVar10 == 0) {
    func_0x000107c61574(pbVar18);
    pbVar45 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    pbStack_1e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102a8d180(0,lVar10,0);
    pbVar17 = pbVar18 + ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff));
    lVar38 = *(long *)(lVar31 + 0x48);
    do {
      pbVar45 = pbStack_1e0;
      func_0x000102a8fba0(pbVar17,lVar41,0x102a91698);
      puVar21 = PTR_PTR_1126c4d88;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar15 = *(undefined8 *)(lVar41 + 0x10);
      func_0x000107c5fadc(uVar15,*(undefined8 *)(lVar41 + 0x18));
      func_0x000107c54758(puVar21);
      func_0x000107c61170(uVar15);
      uVar15 = *(undefined8 *)(lVar41 + 0x20);
      uVar62 = *(undefined8 *)(lVar41 + 0x28);
      lVar27 = *(long *)(lVar41 + 0x38);
      if (lVar27 == 0) {
        uVar59 = 0;
      }
      else {
        uVar59 = *(undefined8 *)(lVar41 + 0x30);
        func_0x000107c61434(lVar27);
        func_0x000107c5fadc(uVar59,lVar27);
        func_0x000107c6142c(lVar27);
      }
      func_0x000107c5475c(puVar21);
      func_0x000107c61170(uVar59);
      func_0x000107c54764(puVar21);
      func_0x000107c61434(uVar62);
      func_0x000107c5fadc(uVar15,uVar62);
      func_0x000107c6142c(uVar62);
      func_0x000107c54760(puVar21);
      func_0x000107c61170(uVar15);
      func_0x000102a8fbe4(lVar41,0x102a91698);
      uVar48 = *(ulong *)(pbVar45 + 0x10);
      pbStack_1e0 = pbVar45;
      if (*(ulong *)(pbVar45 + 0x18) >> 1 <= uVar48) {
        func_0x000102a8d180(1 < *(ulong *)(pbVar45 + 0x18),uVar48 + 1,1);
      }
      pbVar45 = pbStack_1e0;
      *(ulong *)(pbStack_1e0 + 0x10) = uVar48 + 1;
      *(undefined **)(pbStack_1e0 + uVar48 * 8 + 0x20) = puVar21;
      pbVar17 = pbVar17 + lVar38;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    func_0x000107c61574(pbVar18);
  }
  uVar15 = 0;
  func_0x000102a8fcb0(0,0x112ee7390,&PTR_PTR_1126c4d88);
  pbVar18 = pbVar45;
  func_0x000107c5fc48(pbVar45,uVar15);
  func_0x000107c6142c(pbVar45);
  func_0x000107c54768(puVar14);
  func_0x000107c61170(pbVar18);
  pbVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar52 == 0) {
    dVar63 = 0.0;
  }
  else {
    uVar48 = 0;
    iVar8 = *(int *)(lVar12 + 0x44);
    bVar2 = *(byte *)(lVar31 + 0x50);
    dVar63 = 0.0;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fafc);
        (*pcVar51)();
      }
      func_0x000102a8fba0(param_1 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)) +
                          *(long *)(lVar31 + 0x48) * uVar48,lVar42,0x102a91698);
      lVar10 = *(long *)(lVar42 + iVar8);
      lVar38 = *(long *)(lVar10 + 0x10);
      if (lVar38 != 0) {
        iVar6 = *(int *)(lVar9 + 0x14);
        puVar43 = (undefined8 *)(lVar42 + *(int *)(lVar12 + 0x30));
        uVar46 = *(undefined8 *)(lVar42 + 0x10);
        uVar47 = *(undefined8 *)(lVar42 + 0x18);
        uVar15 = *(undefined8 *)(lVar42 + 0x20);
        uVar59 = *(undefined8 *)(lVar42 + 0x28);
        uVar62 = *puVar43;
        lVar27 = puVar43[1];
        lVar10 = lVar10 + ((ulong)*(byte *)(lVar26 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar26 + 0x50) ^ 0xffffffffffffffff));
        lVar28 = *(long *)(lVar26 + 0x48);
        do {
          func_0x000102a8fba0(lVar10,lVar60,0x102a91a2c);
          puVar21 = PTR_PTR_1126abe50;
          func_0x000107c610f8();
          func_0x000107c453e4();
          uVar55 = uVar46;
          func_0x000107c5fadc(uVar46,uVar47);
          func_0x000107c5428c(puVar21);
          func_0x000107c61170(uVar55);
          uVar55 = uVar15;
          func_0x000107c5fadc(uVar15,uVar59);
          func_0x000107c57894(puVar21);
          func_0x000107c61170(uVar55);
          dVar64 = *(double *)(lVar60 + iVar6);
          dVar61 = dVar64 * 1000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
            pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fadc);
            (*pcVar51)();
          }
          if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fae0);
            (*pcVar51)();
          }
          if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
            pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fae4);
            (*pcVar51)();
          }
          func_0x000107c57454(puVar21);
          if (lVar27 == 0) {
            uVar55 = 0;
          }
          else {
            uVar55 = uVar62;
            func_0x000107c5fadc(uVar62,lVar27);
          }
          func_0x000107c5789c(puVar21);
          func_0x000107c61170(uVar55);
          iVar7 = *(int *)(lVar56 + 0x30);
          (**(code **)(lVar29 + 0x10))(lVar25,lVar60,lVar11);
          *(undefined **)(lVar25 + iVar7) = puVar21;
          pbVar45 = pbVar18;
          func_0x000107c61558();
          pbVar17 = pbVar18;
          if (((ulong)pbVar45 & 1) == 0) {
            pbVar17 = (byte *)0x0;
            FUN_102a8d21c(0,*(long *)(pbVar18 + 0x10) + 1,1,pbVar18,
                          PTR__swift_bridgeObjectRelease_11034f258);
          }
          uVar58 = *(ulong *)(pbVar17 + 0x10);
          pbVar18 = pbVar17;
          if (*(ulong *)(pbVar17 + 0x18) >> 1 <= uVar58) {
            pbVar18 = (byte *)(ulong)(1 < *(ulong *)(pbVar17 + 0x18));
            FUN_102a8d21c(pbVar18,uVar58 + 1,1,pbVar17,PTR__swift_bridgeObjectRelease_11034f258);
          }
          *(ulong *)(pbVar18 + 0x10) = uVar58 + 1;
          func_0x000102a8fc68(lVar25,pbVar18 + *(long *)(lVar24 + 0x48) * uVar58 +
                                               ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                                               ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff
                                               )),0x112ee7388,&UNK_10db12888);
          func_0x000102a8fbe4(lVar60,0x102a91a2c);
          dVar63 = dVar63 + dVar64;
          lVar10 = lVar10 + lVar28;
          lVar38 = lVar38 + -1;
        } while (lVar38 != 0);
      }
      uVar48 = uVar48 + 1;
      func_0x000102a8fbe4(lVar42,0x102a91698);
    } while (uVar48 != uVar52);
    dVar63 = dVar63 * 1000.0;
  }
  pbStack_1e0 = pbVar18;
  func_0x000107c61434(pbVar18);
  FUN_102a8bf2c(&pbStack_1e0);
  pbVar45 = pbStack_1e0;
  lVar12 = *(long *)(pbStack_1e0 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c61574(pbStack_1e0);
    pbVar17 = PTR___swiftEmptyArrayStorage_11034f1c8;
    lVar56 = lStack_458;
    lVar12 = lStack_450;
  }
  else {
    pbStack_1e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000102a8d144(0,lVar12,0);
    pbVar57 = pbVar45 + ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff));
    lVar9 = *(long *)(lVar24 + 0x48);
    do {
      pbVar17 = pbStack_1e0;
      func_0x000102a8fc20(pbVar57,lVar36,0x112ee7388,&UNK_10db12888);
      func_0x000102a8fc20(lVar36,lVar35,0x112ee7388,&UNK_10db12888);
      iVar8 = *(int *)(lVar56 + 0x30);
      uVar15 = *(undefined8 *)(lVar35 + iVar8);
      (**(code **)(lVar29 + 0x20))(lVar23,lVar35,lVar11);
      *(undefined8 *)(lVar23 + iVar8) = uVar15;
      func_0x000107c61174();
      func_0x000102a8fcf0(lVar23,0x112ee7388,&UNK_10db12888);
      func_0x000102a8fcf0(lVar36,0x112ee7388,&UNK_10db12888);
      uVar48 = *(ulong *)(pbVar17 + 0x10);
      pbStack_1e0 = pbVar17;
      if (*(ulong *)(pbVar17 + 0x18) >> 1 <= uVar48) {
        func_0x000102a8d144(1 < *(ulong *)(pbVar17 + 0x18),uVar48 + 1,1);
      }
      pbVar17 = pbStack_1e0;
      *(ulong *)(pbStack_1e0 + 0x10) = uVar48 + 1;
      *(undefined8 *)(pbStack_1e0 + uVar48 * 8 + 0x20) = uVar15;
      pbVar57 = pbVar57 + lVar9;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    func_0x000107c61574(pbVar45);
    lVar56 = lStack_458;
    lVar12 = lStack_450;
  }
  lStack_458 = lVar56;
  lStack_450 = lVar12;
  if (uVar52 == 0) {
    func_0x000107c6142c(param_1);
    uStack_300 = 0;
    lStack_2f0 = 0;
    lVar12 = lStack_450;
  }
  else {
    if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb38);
      (*pcVar51)();
    }
    func_0x000102a8fba0(param_1 + ((ulong)*(byte *)(lVar31 + 0x50) + 0x20 &
                                  ((ulong)*(byte *)(lVar31 + 0x50) ^ 0xffffffffffffffff)),lVar56,
                        0x102a91698);
    func_0x000107c6142c(param_1);
    uStack_300 = *(undefined8 *)(lVar56 + 0x40);
    lStack_2f0 = *(long *)(lVar56 + 0x48);
    func_0x000107c61434();
    func_0x000102a8fbe4(lVar56,0x102a91698);
  }
  func_0x000107c61428(lVar12 + 0x20,&pbStack_1e0,0,0);
  lVar56 = *(long *)(lVar12 + 0x20);
  uVar52 = *(ulong *)(lVar56 + 0x10);
  func_0x000107c61434(lVar56);
  puVar21 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar52 != 0) {
    uVar48 = 0;
    lVar12 = lVar56 + 0x48;
    do {
      if (*(ulong *)(lVar56 + 0x10) <= uVar48) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faec);
        (*pcVar51)();
      }
      dVar61 = *(double *)(lVar12 + -8);
      uVar15 = *(undefined8 *)(lVar12 + -0x18);
      uVar59 = *(undefined8 *)(lVar12 + -0x10);
      uVar62 = *(undefined8 *)(lVar12 + -0x28);
      uVar46 = *(undefined8 *)(lVar12 + -0x20);
      puVar16 = PTR_PTR_1126abe58;
      func_0x000107c610f8();
      func_0x000107c61434(uVar46);
      func_0x000107c61434(uVar59);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar62,uVar46);
      func_0x000107c5428c(puVar16);
      func_0x000107c61170(uVar62);
      func_0x000107c5fadc(uVar15,uVar59);
      func_0x000107c57894(puVar16);
      func_0x000107c61170(uVar15);
      dVar61 = dVar61 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faf0);
        (*pcVar51)();
      }
      if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faf4);
        (*pcVar51)();
      }
      if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
        pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8faf8);
        (*pcVar51)();
      }
      func_0x000107c57458(puVar16);
      func_0x000107c55dcc(puVar16);
      func_0x000107c6142c(uVar59);
      func_0x000107c6142c(uVar46);
      puVar20 = puVar21;
      func_0x000107c61550();
      if (((((ulong)puVar20 & 1) == 0) || ((long)puVar21 < 0)) ||
         (puVar20 = puVar21, ((ulong)puVar21 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar21 >> 0x3e == 0) {
          puVar19 = *(undefined **)(((ulong)puVar21 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar19 = (undefined *)((ulong)puVar21 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar21) {
            puVar19 = puVar21;
          }
          func_0x000107c60480(puVar19);
        }
        puVar20 = (undefined *)0x0;
        FUN_102a8bc4c(0,puVar19 + 1,1,puVar21);
      }
      uVar34 = (ulong)puVar20 & 0xffffffffffffff8;
      uVar58 = *(ulong *)(uVar34 + 0x10);
      puVar21 = puVar20;
      if (*(ulong *)(uVar34 + 0x18) >> 1 <= uVar58) {
        puVar21 = (undefined *)(ulong)(1 < *(ulong *)(uVar34 + 0x18));
        FUN_102a8bc4c(puVar21,uVar58 + 1,1,puVar20);
        uVar34 = (ulong)puVar21 & 0xffffffffffffff8;
      }
      uVar48 = uVar48 + 1;
      *(ulong *)(uVar34 + 0x10) = uVar58 + 1;
      *(undefined **)(uVar34 + uVar58 * 8 + 0x20) = puVar16;
      lVar12 = lVar12 + 0x30;
    } while (uVar52 != uVar48);
  }
  func_0x000107c6142c(lVar56);
  lVar56 = lStack_450;
  func_0x000107c61428(lStack_450 + 0x28,&pbStack_250,0,0);
  lVar12 = *(long *)(lVar56 + 0x28);
  lVar56 = lVar12;
  func_0x000107c61434();
  FUN_102a8d6ac();
  func_0x000107c6142c(lVar12);
  func_0x000107c61174(puVar14);
  puVar16 = puVar14;
  FUN_102a8b3f0();
  func_0x000107c54748();
  uVar15 = 0;
  func_0x000102a8fcb0(0,0x112ee7398,&PTR_PTR_1126abe50);
  pbVar45 = pbVar17;
  func_0x000107c5fc48(pbVar17,uVar15);
  func_0x000107c57898(puVar16);
  func_0x000107c61170(pbVar45);
  uVar15 = 0;
  func_0x000102a8fcb0(0,0x112ee73a0,&PTR_PTR_1126abe58);
  puVar20 = puVar21;
  func_0x000107c5fc48(puVar21,uVar15);
  func_0x000107c56790(puVar16);
  func_0x000107c61170(puVar20);
  if ((ulong)pbVar17 >> 0x3e != 0) {
    pbVar45 = (byte *)((ulong)pbVar17 & 0xffffffffffffff8);
    if ((byte *)0x7fffffffffffffff < pbVar17) {
      pbVar45 = pbVar17;
    }
    func_0x000107c60480(pbVar45);
  }
  func_0x000107c59f90(puVar16);
  if (0x7fefffffffffffff < (ulong)ABS(dVar63)) {
                    /* WARNING: Does not return */
    pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb2c);
    (*pcVar51)();
  }
  if (dVar63 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb30);
    (*pcVar51)();
  }
  dVar61 = 9.223372036854776e+18;
  if (9.223372036854776e+18 <= dVar63) {
                    /* WARNING: Does not return */
    pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb34);
    (*pcVar51)();
  }
  func_0x000107c59f6c(puVar16);
  if (lStack_2f0 == 0) {
    uStack_300 = 0;
  }
  else {
    func_0x000107c5fadc(uStack_300);
  }
  func_0x000107c598e0(puVar16);
  func_0x000107c61170(uStack_300);
  lVar9 = lStack_420;
  func_0x000102a8fc20(uStack_418,lStack_420,0x112d373d8,&UNK_10d9014c0);
  pcVar51 = *(code **)(lVar29 + 0x30);
  lVar10 = lVar9;
  (*pcVar51)(lVar9,1,lVar11);
  lVar12 = lStack_460;
  if ((int)lVar10 == 1) {
    func_0x000102a8fcf0(lVar9,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar29 + 0x20))(lStack_460,lVar9,lVar11);
    func_0x000107c5ee8c();
    dVar61 = dVar61 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb3c);
      (*pcVar51)();
    }
    if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb40);
      (*pcVar51)();
    }
    if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb48);
      (*pcVar51)();
    }
    func_0x000107c54a58(puVar16);
    (**(code **)(lVar29 + 8))(lVar12,lVar11);
  }
  lVar12 = alStack_498[1];
  func_0x000102a8fc20(uStack_428,alStack_498[1],0x112d373d8,&UNK_10d9014c0);
  lVar9 = lVar12;
  (*pcVar51)(lVar12,1,lVar11);
  if ((int)lVar9 == 1) {
    func_0x000102a8fcf0(lVar12,0x112d373d8,&UNK_10d9014c0);
    lVar12 = lStack_450;
  }
  else {
    (**(code **)(lVar29 + 0x20))(lStack_430,lVar12,lVar11);
    func_0x000107c5ee8c();
    dVar61 = dVar61 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(dVar61)) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb44);
      (*pcVar51)();
    }
    if (dVar61 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb4c);
      (*pcVar51)();
    }
    if (9.223372036854776e+18 <= dVar61) {
                    /* WARNING: Does not return */
      pcVar51 = (code *)SoftwareBreakpoint(1,0x102a8fb50);
      (*pcVar51)();
    }
    func_0x000107c54a54(puVar16);
    (**(code **)(lVar29 + 8))(lStack_430,lVar11);
    lVar12 = lStack_450;
  }
  lStack_450 = lVar12;
  if (lVar56 != 0) {
    func_0x000107c5215c(puVar16);
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112ee7320);
  if (lVar9 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c61174(puVar16);
      func_0x000107c4bfb0(lVar9);
      func_0x000107c6142c(pbVar18);
      func_0x000107c615e8(lVar9);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar16);
      func_0x000107c615e8(lVar12);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar14);
      func_0x000107c6142c(pbVar17);
      func_0x000107c6142c(puVar21);
      func_0x000107c6142c(lStack_2f0);
      func_0x000107c61170(lVar56);
      return;
    }
  }
  func_0x000107c6142c(lStack_2f0);
  func_0x000107c61170(lVar56);
  func_0x000107c6142c(pbVar18);
  func_0x000107c61170(puVar16);
  func_0x000107c615e8(lVar12);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(puVar14);
  func_0x000107c6142c(pbVar17);
  func_0x000107c6142c(puVar21);
  return;
}



/* Entry: 102a8fb5c; end: 102a8fd2f;  */

undefined8 FUN_102a8fb5c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a8fd30; end: 102a90127;  */

long * FUN_102a8fd30(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  
  uVar7 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar7 >> 0x11 & 1) == 0) {
    lVar9 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar9;
    lVar19 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar19;
    lVar11 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar11;
    lVar13 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar13;
    lVar12 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar12;
    lVar16 = param_2[0xb];
    param_1[10] = param_2[10];
    param_1[0xb] = lVar16;
    lVar18 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = lVar18;
    *(int *)(param_1 + 0xe) = (int)param_2[0xe];
    iVar17 = *(int *)(param_3 + 0x2c);
    lVar8 = 0;
    func_0x000107c5eea4();
    pcVar14 = *(code **)(*(long *)(lVar8 + -8) + 0x10);
    func_0x000107c61434(lVar9);
    func_0x000107c61434(lVar19);
    func_0x000107c61434(lVar11);
    func_0x000107c61434(lVar13);
    func_0x000107c61434(lVar12);
    func_0x000107c61434(lVar16);
    func_0x000107c61434(lVar18);
    (*pcVar14)((long)param_1 + (long)iVar17,(long)param_2 + (long)iVar17,lVar8);
    iVar17 = *(int *)(param_3 + 0x34);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined4 *)((long)param_1 + (long)iVar17) = *(undefined4 *)((long)param_2 + (long)iVar17);
    iVar17 = *(int *)(param_3 + 0x3c);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
    *(undefined1 *)((long)param_1 + (long)iVar17) = *(undefined1 *)((long)param_2 + (long)iVar17);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    lVar9 = 0;
    FUN_102a9ded4();
    lVar19 = *(long *)(lVar9 + -8);
    pcVar14 = *(code **)(lVar19 + 0x30);
    func_0x000107c61434(uVar5);
    puVar10 = puVar2;
    (*pcVar14)(puVar2,1,lVar9);
    if ((int)puVar10 == 0) {
      puVar10 = puVar2;
      func_0x000107c614c4(puVar2,lVar9);
      uVar5 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar5;
      iVar17 = (int)puVar10;
      if (iVar17 < 2) {
        if (iVar17 == 0) {
          func_0x000107c61434();
          lVar11 = 0x112ee62c0;
          func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
          iVar17 = *(int *)(lVar11 + 0x30);
          lVar11 = 0;
          func_0x000107c5ede0();
          (**(code **)(*(long *)(lVar11 + -8) + 0x10))
                    ((long)puVar1 + (long)iVar17,(long)puVar2 + (long)iVar17,lVar11);
        }
        else {
          uVar5 = puVar2[2];
          uVar6 = puVar2[3];
          func_0x000107c61434();
          func_0x00010006c00c(uVar5,uVar6);
          puVar1[2] = uVar5;
          puVar1[3] = uVar6;
        }
      }
      else {
        if (iVar17 == 2) {
          func_0x000107c61434();
          lVar11 = 0x112ee62b0;
          func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
          lVar16 = (long)*(int *)(lVar11 + 0x30);
          lVar12 = 0;
          func_0x000107c5ede0();
          lVar18 = *(long *)(lVar12 + -8);
          pcVar14 = *(code **)(lVar18 + 0x30);
          lVar13 = (long)puVar2 + lVar16;
          (*pcVar14)(lVar13,1,lVar12);
          if ((int)lVar13 == 0) {
            (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,lVar12);
            (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar16,0,1,lVar12);
          }
          else {
            lVar13 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            func_0x000107c610b4((long)puVar1 + lVar16,(long)puVar2 + lVar16,
                                *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
          }
          lVar16 = (long)*(int *)(lVar11 + 0x40);
          lVar13 = (long)puVar2 + lVar16;
          (*pcVar14)(lVar13,1,lVar12);
          if ((int)lVar13 == 0) {
            (**(code **)(lVar18 + 0x10))((long)puVar1 + lVar16,(long)puVar2 + lVar16,lVar12);
            (**(code **)(lVar18 + 0x38))((long)puVar1 + lVar16,0,1,lVar12);
          }
          else {
            lVar13 = 0x112d36580;
            func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
            func_0x000107c610b4((long)puVar1 + lVar16,(long)puVar2 + lVar16,
                                *(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
          }
          puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x50));
          puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x50));
          uVar5 = puVar4[1];
          *puVar3 = *puVar4;
          puVar3[1] = uVar5;
          *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x60)) =
               *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x60));
          *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar11 + 0x70)) =
               *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar11 + 0x70));
        }
        func_0x000107c61434();
      }
      func_0x000107c6159c(puVar1,lVar9,puVar10);
      (**(code **)(lVar19 + 0x38))(puVar1,0,1,lVar9);
    }
    else {
      lVar9 = 0x112ee6128;
      func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
      func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
    func_0x000107c61434();
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar15 = (ulong)uVar7 & 0xff;
    param_1 = (long *)(lVar9 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102a90128; end: 102a90323;  */

/* WARNING: Possible PIC construction at 0x000102a9014c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a9015c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a9016c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a9017c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a901ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a90224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a90250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a9031c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a90254) */
/* WARNING: Removing unreachable block (ram,0x000102a90228) */
/* WARNING: Removing unreachable block (ram,0x000102a901b0) */
/* WARNING: Removing unreachable block (ram,0x000102a90200) */
/* WARNING: Removing unreachable block (ram,0x000102a90234) */
/* WARNING: Removing unreachable block (ram,0x000102a9028c) */
/* WARNING: Removing unreachable block (ram,0x000102a902d8) */
/* WARNING: Removing unreachable block (ram,0x000102a902e8) */
/* WARNING: Removing unreachable block (ram,0x000102a90300) */
/* WARNING: Removing unreachable block (ram,0x000102a90310) */
/* WARNING: Removing unreachable block (ram,0x000102a9023c) */
/* WARNING: Removing unreachable block (ram,0x000102a90244) */
/* WARNING: Removing unreachable block (ram,0x000102a9031c) */
/* WARNING: Removing unreachable block (ram,0x000102a90214) */
/* WARNING: Removing unreachable block (ram,0x000102a9024c) */
/* WARNING: Removing unreachable block (ram,0x000102a90218) */
/* WARNING: Removing unreachable block (ram,0x000102a90220) */
/* WARNING: Removing unreachable block (ram,0x000102a90180) */
/* WARNING: Removing unreachable block (ram,0x000102a90170) */
/* WARNING: Removing unreachable block (ram,0x000102a90160) */
/* WARNING: Removing unreachable block (ram,0x000102a90150) */
/* WARNING: Removing unreachable block (ram,0x000102a90320) */
/* WARNING: Removing unreachable block (ram,0x000102a901e0) */

void FUN_102a90128(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102a90324; end: 102a90d97;  */

undefined8 * FUN_102a90324(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  uVar9 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar9;
  uVar10 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar10;
  uVar11 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar11;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  iVar19 = *(int *)(param_3 + 0x2c);
  lVar12 = 0;
  func_0x000107c5eea4();
  pcVar17 = *(code **)(*(long *)(lVar12 + -8) + 0x10);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(uVar11);
  (*pcVar17)((long)param_1 + (long)iVar19,(long)param_2 + (long)iVar19,lVar12);
  iVar19 = *(int *)(param_3 + 0x34);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  *(undefined4 *)((long)param_1 + (long)iVar19) = *(undefined4 *)((long)param_2 + (long)iVar19);
  iVar19 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)((long)param_1 + (long)iVar19) = *(undefined1 *)((long)param_2 + (long)iVar19);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  lVar12 = 0;
  FUN_102a9ded4();
  lVar21 = *(long *)(lVar12 + -8);
  pcVar17 = *(code **)(lVar21 + 0x30);
  func_0x000107c61434(uVar5);
  puVar13 = puVar2;
  (*pcVar17)(puVar2,1,lVar12);
  if ((int)puVar13 == 0) {
    puVar13 = puVar2;
    func_0x000107c614c4(puVar2,lVar12);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar19 = (int)puVar13;
    if (iVar19 < 2) {
      if (iVar19 == 0) {
        func_0x000107c61434();
        lVar14 = 0x112ee62c0;
        func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
        iVar19 = *(int *)(lVar14 + 0x30);
        lVar14 = 0;
        func_0x000107c5ede0();
        (**(code **)(*(long *)(lVar14 + -8) + 0x10))
                  ((long)puVar1 + (long)iVar19,(long)puVar2 + (long)iVar19,lVar14);
      }
      else {
        uVar5 = puVar2[2];
        uVar6 = puVar2[3];
        func_0x000107c61434();
        func_0x00010006c00c(uVar5,uVar6);
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
    }
    else if (iVar19 == 2) {
      func_0x000107c61434();
      lVar14 = 0x112ee62b0;
      func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
      lVar18 = (long)*(int *)(lVar14 + 0x30);
      lVar15 = 0;
      func_0x000107c5ede0();
      lVar20 = *(long *)(lVar15 + -8);
      pcVar17 = *(code **)(lVar20 + 0x30);
      lVar16 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar16,1,lVar15);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,lVar15);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar18,0,1,lVar15);
      }
      else {
        lVar16 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)puVar1 + lVar18,(long)puVar2 + lVar18,
                            *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      lVar18 = (long)*(int *)(lVar14 + 0x40);
      lVar16 = (long)puVar2 + lVar18;
      (*pcVar17)(lVar16,1,lVar15);
      if ((int)lVar16 == 0) {
        (**(code **)(lVar20 + 0x10))((long)puVar1 + lVar18,(long)puVar2 + lVar18,lVar15);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar18,0,1,lVar15);
      }
      else {
        lVar16 = 0x112d36580;
        func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
        func_0x000107c610b4((long)puVar1 + lVar18,(long)puVar2 + lVar18,
                            *(undefined8 *)(*(long *)(lVar16 + -8) + 0x40));
      }
      puVar3 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x50));
      puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x50));
      uVar5 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar5;
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x60)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x60));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar14 + 0x70)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar14 + 0x70));
      func_0x000107c61434();
    }
    else {
      func_0x000107c61434();
    }
    func_0x000107c6159c(puVar1,lVar12,puVar13);
    (**(code **)(lVar21 + 0x38))(puVar1,0,1,lVar12);
  }
  else {
    lVar12 = 0x112ee6128;
    func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
    func_0x000107c610b4(puVar1,puVar2,*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102a90d98; end: 102a90dd3;  */

undefined8 FUN_102a90d98(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_102a9ded4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 102a90dd4; end: 102a9167f;  */

undefined8 * FUN_102a90dd4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar10 = *param_2;
  uVar16 = param_2[3];
  uVar15 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar16;
  param_1[2] = uVar15;
  uVar10 = param_2[4];
  uVar16 = param_2[7];
  uVar15 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar10;
  param_1[7] = uVar16;
  param_1[6] = uVar15;
  uVar10 = param_2[8];
  uVar16 = param_2[0xb];
  uVar15 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar10;
  param_1[0xb] = uVar16;
  param_1[10] = uVar15;
  uVar10 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar10;
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
  iVar1 = *(int *)(param_3 + 0x2c);
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar5);
  iVar1 = *(int *)(param_3 + 0x34);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined4 *)((long)param_1 + (long)iVar1) = *(undefined4 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x3c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  lVar5 = 0;
  FUN_102a9ded4();
  lVar13 = *(long *)(lVar5 + -8);
  puVar6 = puVar3;
  (**(code **)(lVar13 + 0x30))(puVar3,1,lVar5);
  if ((int)puVar6 != 0) {
    lVar5 = 0x112ee6128;
    func_0x0001000285a8(0x112ee6128,&UNK_10db114e0);
    func_0x000107c610b4(puVar2,puVar3,*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
    goto LAB_102a910c4;
  }
  puVar6 = puVar3;
  func_0x000107c614c4(puVar3,lVar5);
  if ((int)puVar6 == 2) {
    uVar10 = *puVar3;
    puVar2[1] = puVar3[1];
    *puVar2 = uVar10;
    lVar7 = 0x112ee62b0;
    func_0x0001000285a8(0x112ee62b0,&UNK_10db116d0);
    lVar14 = (long)*(int *)(lVar7 + 0x30);
    lVar8 = 0;
    func_0x000107c5ede0();
    lVar12 = *(long *)(lVar8 + -8);
    pcVar11 = *(code **)(lVar12 + 0x30);
    lVar9 = (long)puVar3 + lVar14;
    (*pcVar11)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar2 + lVar14,(long)puVar3 + lVar14,lVar8);
      (**(code **)(lVar12 + 0x38))((long)puVar2 + lVar14,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar2 + lVar14,(long)puVar3 + lVar14,
                          *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    lVar14 = (long)*(int *)(lVar7 + 0x40);
    lVar9 = (long)puVar3 + lVar14;
    (*pcVar11)(lVar9,1,lVar8);
    if ((int)lVar9 == 0) {
      (**(code **)(lVar12 + 0x20))((long)puVar2 + lVar14,(long)puVar3 + lVar14,lVar8);
      (**(code **)(lVar12 + 0x38))((long)puVar2 + lVar14,0,1,lVar8);
    }
    else {
      lVar9 = 0x112d36580;
      func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
      func_0x000107c610b4((long)puVar2 + lVar14,(long)puVar3 + lVar14,
                          *(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    }
    puVar6 = (undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x50));
    uVar10 = *puVar6;
    puVar4 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x50));
    puVar4[1] = puVar6[1];
    *puVar4 = uVar10;
    *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x60)) =
         *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x60));
    *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar7 + 0x70)) =
         *(undefined1 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x70));
    uVar10 = 2;
LAB_102a910a8:
    func_0x000107c6159c(puVar2,lVar5,uVar10);
  }
  else {
    if ((int)puVar6 == 0) {
      uVar10 = *puVar3;
      puVar2[1] = puVar3[1];
      *puVar2 = uVar10;
      lVar7 = 0x112ee62c0;
      func_0x0001000285a8(0x112ee62c0,&UNK_10db116e0);
      iVar1 = *(int *)(lVar7 + 0x30);
      lVar7 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar7 + -8) + 0x20))
                ((long)puVar2 + (long)iVar1,(long)puVar3 + (long)iVar1,lVar7);
      uVar10 = 0;
      goto LAB_102a910a8;
    }
    func_0x000107c610b4(puVar2,puVar3,*(undefined8 *)(lVar13 + 0x40));
  }
  (**(code **)(lVar13 + 0x38))(puVar2,0,1,lVar5);
LAB_102a910c4:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x44)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x44));
  return param_1;
}



/* Entry: 102a91680; end: 102a916ab;  */

void FUN_102a91680(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102a916ac; end: 102a91793;  */

void FUN_102a916ac(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_a0 = &UNK_10db12928;
  puStack_98 = &UNK_10db12928;
  puStack_90 = &UNK_10db12940;
  puStack_88 = &UNK_10db12958;
  puStack_80 = &UNK_10db12958;
  puStack_78 = &UNK_10db12958;
  puVar1 = PTR___sBi32_WV_11034d668 + 0x40;
  lVar2 = 0x13f;
  puStack_70 = puVar1;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_68 = *(long *)(lVar2 + -8) + 0x40;
    puStack_60 = &UNK_10db12958;
    puStack_50 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_48 = &UNK_10db12970;
    lVar2 = 0x13f;
    puStack_58 = puVar1;
    FUN_102a91794();
    if (param_2 < 0x40) {
      lStack_40 = *(long *)(lVar2 + -8) + 0x40;
      puStack_38 = PTR___sBbWV_11034d660 + 0x40;
      func_0x000107c6153c(param_1,0x100,0xe,&puStack_a0,param_1 + 0x10);
    }
  }
  return;
}



/* Entry: 102a91794; end: 102a917e7;  */

void FUN_102a91794(long param_1)

{
  long lVar1;
  
  if (lRam0000000112ee7460 == 0) {
    lVar1 = 0xff;
    FUN_102a9ded4();
    func_0x000107c60188();
    if (lVar1 == 0) {
      lRam0000000112ee7460 = param_1;
    }
  }
  return;
}



/* Entry: 102a917e8; end: 102a9186f;  */

long * FUN_102a917e8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 102a91870; end: 102a918a3;  */

void FUN_102a91870(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000102a918a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Entry: 102a918a4; end: 102a91a13;  */

long FUN_102a918a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Entry: 102a91a14; end: 102a91a3f;  */

void FUN_102a91a14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 102a91a40; end: 102a91a6f;  */

void FUN_102a91a40(undefined8 param_1,long *param_2,undefined8 param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,param_3);
  return;
}



/* Entry: 102a91a70; end: 102a91ae3;  */

void FUN_102a91a70(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 102a91ae4; end: 102a91b2b;  */

/* WARNING: Possible PIC construction at 0x000102a91b14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a91b18) */

void FUN_102a91ae4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 102a91b2c; end: 102a922e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a91b2c(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  
  func_0x000107c613fc();
  FUN_102a85be4();
  func_0x000107c613fc();
  plVar4 = param_1;
  FUN_102a8abd0();
  *(long **)(unaff_x20 + 0x10) = plVar4;
  lVar5 = 0;
  FUN_102a8b3a4();
  lVar6 = lVar5;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ee7308);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112ee7310);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar6 + _DAT_112ee7318);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar8 = lVar6 + _DAT_112ee7328;
  *(undefined8 *)(lVar8 + 8) = 0;
  func_0x000107c61614(lVar8,0);
  lVar9 = lVar6 + _DAT_112ee7338;
  *(undefined8 *)(lVar9 + 8) = 0;
  func_0x000107c61614(lVar9,0);
  lVar14 = lVar6 + _DAT_112ee7348;
  *(undefined8 *)(lVar14 + 8) = 0;
  func_0x000107c61614(lVar14,0);
  lVar3 = _DAT_112ee7358;
  puVar7 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(plVar4);
  func_0x000107c453e4();
  *(undefined **)(lVar6 + lVar3) = puVar7;
  *(undefined8 *)(lVar6 + _DAT_112ee7320) = param_2;
  *(undefined ***)(lVar8 + 8) = &PTR_DAT_1105904d8;
  func_0x000107c61604(lVar8,plVar4);
  *(long *)(lVar6 + _DAT_112ee7330) = param_3;
  *(undefined8 *)(lVar9 + 8) = param_5;
  func_0x000107c61604(lVar9,param_4);
  *(undefined8 *)(lVar6 + _DAT_112ee7340) = param_8;
  *(undefined8 *)(lVar14 + 8) = param_7;
  func_0x000107c61604(lVar14,param_6);
  puVar2 = (undefined8 *)(lVar6 + _DAT_112ee7350);
  *puVar2 = param_9;
  puVar2[1] = param_10;
  pcVar15 = *(code **)(*param_1 + 0x70);
  func_0x000107c61174();
  func_0x000107c61174();
  lVar8 = param_3;
  func_0x000107c61174();
  lVar9 = lVar8;
  (*pcVar15)();
  if (lVar9 == 0) {
    uVar16 = 0;
    uVar13 = 0;
  }
  else {
    uVar16 = *(undefined8 *)(lVar9 + 0x10);
    uVar13 = *(undefined8 *)(lVar9 + 0x18);
    func_0x000107c61434(uVar13);
    func_0x000107c61574(lVar9);
  }
  uVar10 = puVar1[1];
  *puVar1 = uVar16;
  puVar1[1] = uVar13;
  func_0x000107c6142c(uVar10);
  plVar11 = &lStack_78;
  lStack_78 = lVar6;
  lStack_70 = lVar5;
  func_0x000107c61154(plVar11,PTR_s_init_1125d9248);
  lVar14 = param_1[3];
  puVar7 = &UNK_1105905a8;
  func_0x000107c613fc(&UNK_1105905a8,0x18,7);
  func_0x000107c61614(puVar7 + 0x10,plVar11);
  pcStack_88 = FUN_102a92310;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_102a91ae4;
  puStack_90 = &UNK_1105905c0;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar12);
  puVar7 = puStack_80;
  func_0x000107c61174(lVar14);
  func_0x000107c61574(puVar7);
  lVar9 = lVar14;
  func_0x000107c5c320(lVar14);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61170(lVar14);
  func_0x000107c3e924(lVar9);
  func_0x000107c61170(lVar9);
  (**(code **)(*param_1 + 0xf8))(plVar11,lVar5,&PTR_DAT_110590558);
  if (param_3 == 0) {
    func_0x000107c61574(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(plVar4);
  }
  else {
    lVar9 = lVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c55e3c();
      func_0x000107c615e8(lVar9);
    }
    func_0x000107c61574(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61574(plVar4);
    func_0x000107c61170(lVar8);
  }
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_8);
  *(long **)(unaff_x20 + 0x18) = plVar11;
  return;
}



/* Entry: 102a922e4; end: 102a9230f;  */

void FUN_102a922e4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a92310; end: 102a92333;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a92310(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    puVar1 = (undefined8 *)(lVar3 + _DAT_112ee7308);
    uVar4 = puVar1[1];
    *puVar1 = *(undefined8 *)(param_1 + 0x10);
    puVar1[1] = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c6142c(uVar4);
    uVar2 = ((undefined8 *)(param_1 + _DAT_113804e88))[1];
    puVar1 = (undefined8 *)(lVar3 + _DAT_112ee7318);
    uVar4 = puVar1[1];
    *puVar1 = *(undefined8 *)(param_1 + _DAT_113804e88);
    puVar1[1] = uVar2;
    func_0x000107c61434();
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 102a92334; end: 102a92353;  */

void FUN_102a92334(void)

{
  func_0x000107c61168(&PTR_PTR_112ee7590);
  return;
}



/* Entry: 102a92354; end: 102a92373;  */

void FUN_102a92354(long param_1,long param_2)

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



/* Entry: 102a92374; end: 102a9241f;  */

void FUN_102a92374(void)

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



/* Entry: 102a92420; end: 102a92483;  */

undefined1  [16] FUN_102a92420(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  uVar1 = 0x79654b6574617473;
  if (cVar4 != '\x01') {
    uVar1 = 0x61646174654d7261;
  }
  uVar2 = 0xe800000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xea00000000006174;
  }
  uVar3 = 0xe900000000000079;
  uVar5 = 0x654b6e69616d6f64;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 102a92484; end: 102a924a7;  */

void FUN_102a92484(undefined1 *param_1,undefined1 param_2)

{
  FUN_102a9283c();
  *param_1 = param_2;
  return;
}



/* Entry: 102a924a8; end: 102a924bf;  */

undefined1  [16] FUN_102a924a8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a924c0; end: 102a9250f;  */

void FUN_102a924c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a92a4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a92510; end: 102a92707;  */

/* WARNING: Removing unreachable block (ram,0x000102a92618) */

void FUN_102a92510(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long extraout_x8;
  code *pcVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_270 [8];
  undefined1 auStack_268 [168];
  ulong uStack_1c0;
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
  undefined1 uStack_51;
  
  lVar3 = 0x112ee75f8;
  func_0x0001000285a8(0x112ee75f8,&UNK_10db129c0);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102a92a4c();
  func_0x000107c606ec(auStack_270 + -extraout_x8,&UNK_110590798,&UNK_110590798,param_1,uVar1,uVar2);
  uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_1c0,lVar3);
  if (unaff_x21 == 0) {
    uStack_1c0 = CONCAT71(uStack_1c0._1_7_,1);
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_1c0,lVar3);
    uStack_148 = unaff_x20[0x13];
    uStack_150 = unaff_x20[0x12];
    uStack_88 = unaff_x20[0x15];
    uStack_90 = unaff_x20[0x14];
    uStack_138 = unaff_x20[0x15];
    uStack_140 = unaff_x20[0x14];
    uStack_78 = unaff_x20[0x17];
    uStack_80 = unaff_x20[0x16];
    uStack_188 = unaff_x20[0xb];
    uStack_190 = unaff_x20[10];
    uStack_c8 = unaff_x20[0xd];
    uStack_d0 = unaff_x20[0xc];
    uStack_178 = unaff_x20[0xd];
    uStack_180 = unaff_x20[0xc];
    uStack_b8 = unaff_x20[0xf];
    uStack_c0 = unaff_x20[0xe];
    uStack_168 = unaff_x20[0xf];
    uStack_170 = unaff_x20[0xe];
    uStack_a8 = unaff_x20[0x11];
    uStack_b0 = unaff_x20[0x10];
    uStack_158 = unaff_x20[0x11];
    uStack_160 = unaff_x20[0x10];
    uStack_98 = unaff_x20[0x13];
    uStack_a0 = unaff_x20[0x12];
    uStack_108 = unaff_x20[5];
    uStack_110 = unaff_x20[4];
    uStack_f8 = unaff_x20[7];
    uStack_100 = unaff_x20[6];
    uStack_e8 = unaff_x20[9];
    uStack_f0 = unaff_x20[8];
    uStack_d8 = unaff_x20[0xb];
    uStack_e0 = unaff_x20[10];
    uStack_1b8 = unaff_x20[5];
    uStack_1c0 = unaff_x20[4];
    uStack_1a8 = unaff_x20[7];
    uStack_1b0 = unaff_x20[6];
    uStack_198 = unaff_x20[9];
    uStack_1a0 = unaff_x20[8];
    uStack_128 = unaff_x20[0x17];
    uStack_130 = unaff_x20[0x16];
    uStack_70 = unaff_x20[0x18];
    uStack_120 = unaff_x20[0x18];
    uStack_51 = 2;
    puVar4 = &uStack_110;
    FUN_102a7b970(puVar4,auStack_268);
    func_0x000102a92a8c();
    func_0x000107c60554(&uStack_1c0,&uStack_51,lVar3,&UNK_110592588,puVar4);
    func_0x000102a7b9ac(&uStack_1c0);
    pcVar5 = *(code **)(lVar6 + 8);
  }
  else {
    pcVar5 = *(code **)(lVar6 + 8);
  }
  (*pcVar5)(auStack_270 + -extraout_x8,lVar3);
  return;
}



/* Entry: 102a92708; end: 102a92787;  */

void FUN_102a92708(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_102a92acc(&uStack_e8);
  if (unaff_x21 == 0) {
    param_1[0x15] = uStack_40;
    param_1[0x14] = uStack_48;
    param_1[0x17] = uStack_30;
    param_1[0x16] = uStack_38;
    param_1[0x18] = uStack_28;
    param_1[0xd] = uStack_80;
    param_1[0xc] = uStack_88;
    param_1[0xf] = uStack_70;
    param_1[0xe] = uStack_78;
    param_1[0x11] = uStack_60;
    param_1[0x10] = uStack_68;
    param_1[0x13] = uStack_50;
    param_1[0x12] = uStack_58;
    param_1[5] = uStack_c0;
    param_1[4] = uStack_c8;
    param_1[7] = uStack_b0;
    param_1[6] = uStack_b8;
    param_1[9] = uStack_a0;
    param_1[8] = uStack_a8;
    param_1[0xb] = uStack_90;
    param_1[10] = uStack_98;
    param_1[1] = uStack_e0;
    *param_1 = uStack_e8;
    param_1[3] = uStack_d0;
    param_1[2] = uStack_d8;
  }
  return;
}



/* Entry: 102a92788; end: 102a9279b;  */

void FUN_102a92788(void)

{
  FUN_102a92510();
  return;
}



/* Entry: 102a9279c; end: 102a9283b;  */

uint FUN_102a9279c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_102a92960(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 102a9283c; end: 102a9295f;  */

undefined4 FUN_102a9283c(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x654b6e69616d6f64 && param_2 == -0x16ffffffffffff87) ||
     (func_0x000107c605b8(0x654b6e69616d6f64,0xe900000000000079,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x79654b6574617473;
    if (((param_1 == 0x79654b6574617473) && (param_2 == -0x1800000000000000)) ||
       (func_0x000107c605b8(0x79654b6574617473,0xe800000000000000,param_1,param_2,0),
       (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x61646174654d7261;
      if ((param_1 == 0x61646174654d7261) && (param_2 == -0x15ffffffffff9e8c)) {
        func_0x000107c6142c(0xea00000000006174);
        uVar2 = 2;
      }
      else {
        func_0x000107c605b8(0x61646174654d7261,0xea00000000006174,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 102a92960; end: 102a92a4b;  */

uint FUN_102a92960(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
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
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
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
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong *puVar3;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uStack_58 = param_1[0x15];
    uStack_60 = param_1[0x14];
    uStack_48 = param_1[0x17];
    uStack_50 = param_1[0x16];
    uStack_40 = param_1[0x18];
    uStack_98 = param_1[0xd];
    uStack_a0 = param_1[0xc];
    uStack_88 = param_1[0xf];
    uStack_90 = param_1[0xe];
    uStack_78 = param_1[0x11];
    uStack_80 = param_1[0x10];
    uStack_68 = param_1[0x13];
    uStack_70 = param_1[0x12];
    uStack_d8 = param_1[5];
    uStack_e0 = param_1[4];
    uStack_c8 = param_1[7];
    uStack_d0 = param_1[6];
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_a8 = param_1[0xb];
    uStack_b0 = param_1[10];
    uStack_108 = param_2[0x15];
    uStack_110 = param_2[0x14];
    uStack_f8 = param_2[0x17];
    uStack_100 = param_2[0x16];
    uStack_f0 = param_2[0x18];
    uStack_148 = param_2[0xd];
    uStack_150 = param_2[0xc];
    uStack_138 = param_2[0xf];
    uStack_140 = param_2[0xe];
    uStack_128 = param_2[0x11];
    uStack_130 = param_2[0x10];
    uStack_118 = param_2[0x13];
    uStack_120 = param_2[0x12];
    uStack_188 = param_2[5];
    uStack_190 = param_2[4];
    uStack_178 = param_2[7];
    uStack_180 = param_2[6];
    uStack_168 = param_2[9];
    uStack_170 = param_2[8];
    uStack_158 = param_2[0xb];
    uStack_160 = param_2[10];
    puVar3 = &uStack_e0;
    FUN_102aa69a0(puVar3,&uStack_190);
    uVar1 = (uint)puVar3;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 102a92a4c; end: 102a92acb;  */

void FUN_102a92a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12b38;
  func_0x000107c61520(&UNK_10db12b38,&UNK_110590798);
  puRam0000000112ee7600 = puVar1;
  return;
}



/* Entry: 102a92acc; end: 102a92ddf;  */

/* WARNING: Removing unreachable block (ram,0x000102a92c6c) */
/* WARNING: Removing unreachable block (ram,0x000102a92c0c) */
/* WARNING: Removing unreachable block (ram,0x000102a92c7c) */
/* WARNING: Removing unreachable block (ram,0x000102a92c90) */
/* WARNING: Removing unreachable block (ram,0x000102a92ba0) */

void FUN_102a92acc(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  long lStack_380;
  undefined1 auStack_378 [200];
  undefined8 ***pppuStack_2b0;
  long lStack_2a8;
  undefined8 ***pppuStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined1 uStack_1e1;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
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
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 ***pppuStack_138;
  long lStack_130;
  undefined8 ***pppuStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar3 = 0x112ee7628;
  func_0x0001000285a8(0x112ee7628,&UNK_10db12b88);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_102a92a4c();
  func_0x000107c606e0(auStack_378 + (-8 - extraout_x8),&UNK_110590798,&UNK_110590798,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    pppuStack_2b0 = (undefined8 ***)((ulong)pppuStack_2b0 & 0xffffffffffffff00);
    ppppuVar5 = &pppuStack_2b0;
    lVar4 = lVar3;
    func_0x000107c604f4();
    pppuStack_2b0 = (undefined8 ***)CONCAT71(pppuStack_2b0._1_7_,1);
    ppppuVar6 = &pppuStack_2b0;
    lVar7 = lVar3;
    pppuStack_138 = ppppuVar5;
    lStack_130 = lVar4;
    func_0x000107c604f4();
    uStack_1e1 = 2;
    lStack_380 = lVar7;
    pppuStack_128 = ppppuVar6;
    lStack_120 = lVar7;
    func_0x000102a93820();
    func_0x000107c60508(&lStack_1e0,&UNK_110592588,&uStack_1e1,lVar3,&UNK_110592588,ppppuVar6);
    (**(code **)(lVar8 + 8))(auStack_378 + (-8 - extraout_x8),lVar3);
    lStack_90 = lStack_158;
    lStack_98 = lStack_160;
    lStack_80 = lStack_148;
    lStack_88 = lStack_150;
    lStack_d0 = lStack_198;
    lStack_d8 = lStack_1a0;
    lStack_c0 = lStack_188;
    lStack_c8 = lStack_190;
    lStack_a0 = lStack_168;
    lStack_a8 = lStack_170;
    lStack_b0 = lStack_178;
    lStack_b8 = lStack_180;
    lStack_110 = lStack_1d8;
    lStack_118 = lStack_1e0;
    lStack_100 = lStack_1c8;
    lStack_108 = lStack_1d0;
    lStack_e0 = lStack_1a8;
    lStack_e8 = lStack_1b0;
    lStack_f0 = lStack_1b8;
    lStack_f8 = lStack_1c0;
    lStack_208 = lStack_158;
    lStack_210 = lStack_160;
    lStack_1f8 = lStack_148;
    lStack_200 = lStack_150;
    lStack_248 = lStack_198;
    lStack_250 = lStack_1a0;
    lStack_238 = lStack_188;
    lStack_240 = lStack_190;
    lStack_78 = lStack_140;
    lStack_1f0 = lStack_140;
    lStack_228 = lStack_178;
    lStack_230 = lStack_180;
    lStack_218 = lStack_168;
    lStack_220 = lStack_170;
    lStack_288 = lStack_1d8;
    lStack_290 = lStack_1e0;
    lStack_278 = lStack_1c8;
    lStack_280 = lStack_1d0;
    lStack_268 = lStack_1b8;
    lStack_270 = lStack_1c0;
    lStack_258 = lStack_1a8;
    lStack_260 = lStack_1b0;
    lStack_2a8 = lStack_130;
    pppuStack_2b0 = pppuStack_138;
    lStack_298 = lStack_120;
    pppuStack_2a0 = pppuStack_128;
    FUN_102a93860(&pppuStack_2b0,auStack_378);
    func_0x0001000834e4(param_2);
    func_0x000102a93894(&pppuStack_138);
    param_1[0x15] = lStack_208;
    param_1[0x14] = lStack_210;
    param_1[0x17] = lStack_1f8;
    param_1[0x16] = lStack_200;
    param_1[0x18] = lStack_1f0;
    param_1[0xd] = lStack_248;
    param_1[0xc] = lStack_250;
    param_1[0xf] = lStack_238;
    param_1[0xe] = lStack_240;
    param_1[0x11] = lStack_228;
    param_1[0x10] = lStack_230;
    param_1[0x13] = lStack_218;
    param_1[0x12] = lStack_220;
    param_1[5] = lStack_288;
    param_1[4] = lStack_290;
    param_1[7] = lStack_278;
    param_1[6] = lStack_280;
    param_1[9] = lStack_268;
    param_1[8] = lStack_270;
    param_1[0xb] = lStack_258;
    param_1[10] = lStack_260;
    param_1[1] = lStack_2a8;
    *param_1 = (long)pppuStack_2b0;
    param_1[3] = lStack_298;
    param_1[2] = (long)pppuStack_2a0;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 102a92de0; end: 102a92e93;  */

long FUN_102a92de0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102a92e94; end: 102a92fdb;  */

undefined8 * FUN_102a92e94(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  lVar1 = param_2[9];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  if (lVar1 == 1) {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    func_0x000107c61434(lVar1);
  }
  lVar1 = param_2[0xb];
  if (lVar1 == 1) {
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    if (lVar1 == 2) {
      uVar2 = param_2[0xe];
      uVar4 = param_2[0x11];
      uVar3 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar2;
      param_1[0x11] = uVar4;
      param_1[0x10] = uVar3;
      uVar2 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0x9a);
      *(undefined8 *)((long)param_1 + 0xa2) = *(undefined8 *)((long)param_2 + 0xa2);
      *(undefined8 *)((long)param_1 + 0x9a) = uVar2;
      uVar2 = param_2[10];
      uVar4 = param_2[0xd];
      uVar3 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar2;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar3;
      lVar1 = param_2[0x18];
      goto joined_r0x000102a92fa8;
    }
    param_1[10] = param_2[10];
    param_1[0xb] = lVar1;
    uVar2 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = uVar2;
    func_0x000107c61434();
    func_0x000107c61434(uVar2);
  }
  uVar2 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  uVar2 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x9a);
  *(undefined8 *)((long)param_1 + 0xa2) = *(undefined8 *)((long)param_2 + 0xa2);
  *(undefined8 *)((long)param_1 + 0x9a) = uVar2;
  lVar1 = param_2[0x18];
joined_r0x000102a92fa8:
  if (lVar1 == 0) {
    uVar2 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar2;
    param_1[0x18] = param_2[0x18];
  }
  else {
    uVar2 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    param_1[0x17] = uVar2;
    param_1[0x18] = lVar1;
    func_0x000107c61434();
    func_0x000107c61434(lVar1);
  }
  return param_1;
}



/* Entry: 102a92fdc; end: 102a932c7;  */

undefined8 * FUN_102a92fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  lVar2 = param_1[9];
  if (lVar2 == 1) {
    if (param_2[9] == 1) {
LAB_102a930b4:
      uVar1 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar1;
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      func_0x000107c61434();
    }
  }
  else {
    if (param_2[9] == 1) {
      func_0x000102a932c8(param_1 + 8);
      goto LAB_102a930b4;
    }
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    func_0x000107c61434();
    func_0x000107c6142c(lVar2);
  }
  lVar3 = param_1[0xb];
  lVar2 = param_2[0xb];
  if (lVar3 == 2) {
    if (lVar2 == 1) {
LAB_102a93164:
      uVar1 = param_2[10];
      uVar5 = param_2[0xd];
      uVar4 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      param_1[0xd] = uVar5;
      param_1[0xc] = uVar4;
    }
    else {
      if (lVar2 == 2) {
        uVar1 = param_2[10];
        uVar5 = param_2[0xd];
        uVar4 = param_2[0xc];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar1;
        param_1[0xd] = uVar5;
        param_1[0xc] = uVar4;
        uVar4 = param_2[0xf];
        uVar1 = param_2[0xe];
        uVar6 = param_2[0x11];
        uVar5 = param_2[0x10];
        uVar8 = param_2[0x13];
        uVar7 = param_2[0x12];
        uVar9 = *(undefined8 *)((long)param_2 + 0x9a);
        *(undefined8 *)((long)param_1 + 0xa2) = *(undefined8 *)((long)param_2 + 0xa2);
        *(undefined8 *)((long)param_1 + 0x9a) = uVar9;
        param_1[0x11] = uVar6;
        param_1[0x10] = uVar5;
        param_1[0x13] = uVar8;
        param_1[0x12] = uVar7;
        param_1[0xf] = uVar4;
        param_1[0xe] = uVar1;
        goto LAB_102a93210;
      }
LAB_102a93170:
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      uVar1 = param_2[0xd];
      param_1[0xd] = uVar1;
      func_0x000107c61434();
      func_0x000107c61434(uVar1);
    }
  }
  else {
    if (lVar2 == 2) {
      func_0x000102a93330(param_1 + 10);
      uVar5 = param_2[10];
      uVar4 = param_2[0xd];
      uVar1 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar1;
      uVar7 = param_2[0x11];
      uVar6 = param_2[0x10];
      uVar4 = param_2[0x13];
      uVar1 = param_2[0x12];
      uVar5 = *(undefined8 *)((long)param_2 + 0x9a);
      uVar9 = param_2[0xf];
      uVar8 = param_2[0xe];
      *(undefined8 *)((long)param_1 + 0xa2) = *(undefined8 *)((long)param_2 + 0xa2);
      *(undefined8 *)((long)param_1 + 0x9a) = uVar5;
      param_1[0x11] = uVar7;
      param_1[0x10] = uVar6;
      param_1[0x13] = uVar4;
      param_1[0x12] = uVar1;
      param_1[0xf] = uVar9;
      param_1[0xe] = uVar8;
      goto LAB_102a93210;
    }
    if (lVar3 == 1) {
      if (lVar2 == 1) goto LAB_102a93164;
      goto LAB_102a93170;
    }
    if (lVar2 == 1) {
      func_0x000102a932fc(param_1 + 10);
      uVar5 = param_2[10];
      uVar4 = param_2[0xd];
      uVar1 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar5;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar1;
    }
    else {
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      func_0x000107c61434();
      func_0x000107c6142c(lVar3);
      param_1[0xc] = param_2[0xc];
      uVar1 = param_1[0xd];
      param_1[0xd] = param_2[0xd];
      func_0x000107c61434();
      func_0x000107c6142c(uVar1);
    }
  }
  uVar4 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  uVar8 = param_2[0x13];
  uVar7 = param_2[0x12];
  uVar9 = *(undefined8 *)((long)param_2 + 0x9a);
  *(undefined8 *)((long)param_1 + 0xa2) = *(undefined8 *)((long)param_2 + 0xa2);
  *(undefined8 *)((long)param_1 + 0x9a) = uVar9;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar8;
  param_1[0x12] = uVar7;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar1;
LAB_102a93210:
  if (param_1[0x18] == 0) {
    if (param_2[0x18] == 0) {
      uVar4 = param_2[0x17];
      uVar1 = param_2[0x16];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar4;
      param_1[0x16] = uVar1;
    }
    else {
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      uVar1 = param_2[0x18];
      param_1[0x18] = uVar1;
      func_0x000107c61434();
      func_0x000107c61434(uVar1);
    }
  }
  else if (param_2[0x18] == 0) {
    func_0x000102a93364(param_1 + 0x16);
    uVar1 = param_2[0x18];
    uVar4 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar4;
    param_1[0x18] = uVar1;
  }
  else {
    param_1[0x16] = param_2[0x16];
    uVar1 = param_1[0x17];
    param_1[0x17] = param_2[0x17];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
    uVar1 = param_1[0x18];
    param_1[0x18] = param_2[0x18];
    func_0x000107c61434();
    func_0x000107c6142c(uVar1);
  }
  return param_1;
}



/* Entry: 102a932c8; end: 102a93397;  */

undefined8 FUN_102a932c8(undefined8 param_1)

{
  (*(code *)(undefined *)0x102aa9fd8)();
  return param_1;
}



/* Entry: 102a93398; end: 102a93527;  */

undefined8 * FUN_102a93398(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
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
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  func_0x000107c6142c(uVar1);
  if (param_1[9] == 1) {
LAB_102a93410:
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
  }
  else {
    lVar3 = param_2[9];
    if (lVar3 == 1) {
      FUN_102a932c8(param_1 + 8);
      goto LAB_102a93410;
    }
    param_1[8] = param_2[8];
    param_1[9] = lVar3;
    func_0x000107c6142c();
  }
  if (param_1[0xb] != 2) {
    lVar3 = param_2[0xb];
    if (lVar3 != 2) {
      if (param_1[0xb] == 1) {
LAB_102a9348c:
        uVar2 = param_2[10];
        uVar4 = param_2[0xd];
        uVar1 = param_2[0xc];
        param_1[0xb] = param_2[0xb];
        param_1[10] = uVar2;
        param_1[0xd] = uVar4;
        param_1[0xc] = uVar1;
      }
      else {
        if (lVar3 == 1) {
          func_0x000102a932fc(param_1 + 10);
          goto LAB_102a9348c;
        }
        param_1[10] = param_2[10];
        param_1[0xb] = lVar3;
        func_0x000107c6142c();
        uVar2 = param_2[0xd];
        uVar1 = param_1[0xd];
        param_1[0xc] = param_2[0xc];
        param_1[0xd] = uVar2;
        func_0x000107c6142c(uVar1);
      }
      uVar2 = param_2[0xe];
      uVar4 = param_2[0x11];
      uVar1 = param_2[0x10];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar2;
      param_1[0x11] = uVar4;
      param_1[0x10] = uVar1;
      uVar2 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar2;
      uVar2 = *(undefined8 *)((long)param_2 + 0x9a);
      *(undefined8 *)((long)param_1 + 0xa2) = *(undefined8 *)((long)param_2 + 0xa2);
      *(undefined8 *)((long)param_1 + 0x9a) = uVar2;
      lVar3 = param_1[0x18];
      goto joined_r0x000102a9346c;
    }
    func_0x000102a93330(param_1 + 10);
  }
  uVar2 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar1 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar2;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar1;
  uVar2 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x9a);
  *(undefined8 *)((long)param_1 + 0xa2) = *(undefined8 *)((long)param_2 + 0xa2);
  *(undefined8 *)((long)param_1 + 0x9a) = uVar2;
  uVar2 = param_2[10];
  uVar4 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar1;
  lVar3 = param_1[0x18];
joined_r0x000102a9346c:
  if (lVar3 != 0) {
    lVar3 = param_2[0x18];
    if (lVar3 != 0) {
      uVar2 = param_2[0x17];
      uVar1 = param_1[0x17];
      param_1[0x16] = param_2[0x16];
      param_1[0x17] = uVar2;
      func_0x000107c6142c(uVar1);
      uVar2 = param_1[0x18];
      param_1[0x18] = lVar3;
      func_0x000107c6142c(uVar2);
      return param_1;
    }
    func_0x000102a93364(param_1 + 0x16);
  }
  uVar2 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar2;
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 102a93528; end: 102a93757;  */

int FUN_102a93528(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a93758; end: 102a93797;  */

void FUN_102a93758(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12b10;
  func_0x000107c61520(&UNK_10db12b10,&UNK_110590798);
  puRam0000000112ee7610 = puVar1;
  return;
}



/* Entry: 102a93798; end: 102a9379b;  */

void FUN_102a93798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12aa8;
  func_0x000107c61520(&UNK_10db12aa8,&UNK_110590798);
  puRam0000000112ee7618 = puVar1;
  return;
}



/* Entry: 102a9379c; end: 102a937db;  */

void FUN_102a9379c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12aa8;
  func_0x000107c61520(&UNK_10db12aa8,&UNK_110590798);
  puRam0000000112ee7618 = puVar1;
  return;
}



/* Entry: 102a937dc; end: 102a937df;  */

void FUN_102a937dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12a80;
  func_0x000107c61520(&UNK_10db12a80,&UNK_110590798);
  puRam0000000112ee7620 = puVar1;
  return;
}



/* Entry: 102a937e0; end: 102a9385f;  */

void FUN_102a937e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12a80;
  func_0x000107c61520(&UNK_10db12a80,&UNK_110590798);
  puRam0000000112ee7620 = puVar1;
  return;
}



/* Entry: 102a93860; end: 102a938bf;  */

undefined8 FUN_102a93860(undefined8 param_1,undefined8 param_2)

{
  FUN_102a92e94(param_2,param_1,&UNK_1105906f8);
  return param_2;
}



/* Entry: 102a938c0; end: 102a938d3;  */

bool FUN_102a938c0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a938d4; end: 102a93a9f;  */

void FUN_102a938d4(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  pcVar1 = "ntain empty json string";
  uVar4 = 0xd000000000000025;
  if (cVar3 != '\x01') {
    pcVar1 = "currentSelectionState";
    uVar4 = 0xd000000000000037;
  }
  pcVar2 = "tSelectionState count";
  uVar5 = 0xd000000000000012;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    uVar5 = uVar4;
  }
  func_0x000107c5fb58(auStack_68,uVar5,(ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c6142c((ulong)pcVar2 | 0x8000000000000000);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a93aa0; end: 102a93b0b;  */

void FUN_102a93aa0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  pcVar1 = "ntain empty json string";
  uVar3 = 0xd000000000000025;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "currentSelectionState";
    uVar3 = 0xd000000000000037;
  }
  pcVar2 = "tSelectionState count";
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (ulong)pcVar2 | 0x8000000000000000;
  return;
}



/* Entry: 102a93b0c; end: 102a9460b;  */

undefined1  [16] FUN_102a93b0c(long param_1)

{
  undefined8 ***pppuVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  code *pcVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long extraout_x8;
  long *plVar19;
  undefined8 ***pppuVar20;
  undefined8 ***pppuVar21;
  undefined8 ***pppuVar22;
  bool bVar23;
  undefined8 ****ppppuVar24;
  long *unaff_x21;
  undefined8 ***pppuVar25;
  undefined *unaff_x22;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined1 auVar29 [16];
  ulong uStack_170;
  undefined8 ***pppuStack_168;
  long lStack_160;
  undefined8 **ppuStack_158;
  long lStack_150;
  undefined8 **ppuStack_148;
  undefined8 ***pppuStack_140;
  undefined8 **ppuStack_138;
  undefined8 ***pppuStack_130;
  ulong uStack_128;
  undefined8 ***pppuStack_120;
  undefined8 ***pppuStack_118;
  long lStack_110;
  char *pcStack_108;
  long *plStack_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***pppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 ***pppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 ***pppuStack_88;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = 0;
  func_0x000107c5fb10();
  lVar26 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  lVar28 = (long)&uStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar7 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uVar8 = uVar7;
  lStack_90 = param_1;
  func_0x000102a9576c();
  puVar15 = &UNK_110590868;
  plVar9 = &lStack_90;
  func_0x000107c5eb4c(plVar9,&UNK_110590868,uVar8);
  if (unaff_x21 != (long *)0x0) {
    func_0x000107c61574(uVar7);
    plVar9 = unaff_x21;
    puVar15 = unaff_x22;
    goto LAB_102a942e4;
  }
  func_0x000107c61574(uVar7);
  plVar19 = (long *)PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  plVar10 = plVar9;
  func_0x000107c5ee20(plVar9,puVar15);
  lStack_90 = 0;
  plStack_100 = plVar19;
  func_0x000107c3ab8c();
  func_0x000107c61180();
  func_0x000107c61170(plVar10);
  lVar12 = lStack_90;
  if (plVar19 == (long *)0x0) {
    lVar6 = lStack_90;
    func_0x000107c61174();
    func_0x000107c5ed30(lVar12);
    func_0x000107c61170(lVar6);
  }
  else {
    func_0x000107c61174();
    func_0x000107c60234(&lStack_90,plVar19);
    func_0x000107c615e8(plVar19);
    uVar8 = 0x112d472a8;
    func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
    puVar2 = PTR___sypN_11034f1a8;
    ppppuVar11 = &pppuStack_b0;
    func_0x000107c6147c(ppppuVar11,&lStack_90,PTR___sypN_11034f1a8 + 8,uVar8,6);
    ppppuVar24 = (undefined8 ****)pppuStack_b0;
    if (((ulong)ppppuVar11 & 1) != 0) {
      pppuStack_f8 = pppuStack_b0;
      if ((undefined8 ***)pppuStack_b0[2] != (undefined8 ***)0x0) {
        func_0x000107c61434(pppuStack_b0);
        pcStack_108 = "ShoppingLensAnalytics.Reporter";
        uVar16 = 0;
        lVar12 = -0x2fffffffffffffeb;
        func_0x000100029284(0xd000000000000015);
        if ((uVar16 & 1) == 0) {
          func_0x000107c61430(ppppuVar24,2);
          ppppuVar11 = ppppuVar24;
          goto LAB_102a942ac;
        }
        func_0x0001000bb420(ppppuVar24[7] + lVar12 * 4,&lStack_90);
        func_0x000107c6142c(ppppuVar24);
        lVar12 = 0x112d77ec8;
        func_0x0001000285a8(0x112d77ec8,&UNK_10d953980);
        ppppuVar11 = &pppuStack_b0;
        lStack_110 = lVar12;
        func_0x000107c6147c(ppppuVar11,&lStack_90,puVar2 + 8,lVar12,6);
        pppuVar20 = pppuStack_b0;
        if (((ulong)ppppuVar11 & 1) != 0) {
          pppuVar25 = *(undefined8 ****)(param_1 + 0x10);
          if (pppuVar25 == (undefined8 ***)pppuStack_b0[2]) {
            if (pppuVar25 == (undefined8 ***)0x0) {
              func_0x000107c6142c(ppppuVar24);
              func_0x000107c6142c(pppuVar20);
              goto LAB_102a942e4;
            }
            pppuStack_168 = ppppuVar24;
            pppuStack_140 = pppuStack_b0 + 4;
            func_0x000107c61434(pppuStack_b0);
            bVar23 = false;
            pppuVar21 = (undefined8 ***)0x0;
            pppuStack_130 = pppuVar20;
            pppuStack_120 = pppuVar20;
            lVar12 = param_1 + 0xe0;
            pppuVar20 = (undefined8 ***)((long)pppuVar25 + -1);
            do {
              pppuVar1 = pppuVar21;
              if (pppuVar21 <= pppuVar25) {
                pppuVar1 = pppuVar25;
              }
              plVar19 = (long *)(lVar12 + (long)pppuVar21 * 200);
              pppuVar22 = pppuVar21;
              while( true ) {
                if (pppuVar1 == pppuVar22) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102a945e8);
                  (*pcVar4)();
                }
                pppuVar21 = (undefined8 ***)((long)pppuVar22 + 1);
                lVar27 = *plVar19;
                if (lVar27 != 0) break;
                plVar19 = plVar19 + 0x19;
                pppuVar22 = pppuVar21;
                if (pppuVar25 == pppuVar21) {
                  func_0x000107c6142c(pppuStack_130);
                  if (bVar23) goto LAB_102a94388;
                  func_0x000107c6142c(pppuStack_168);
                  func_0x000107c6142c(pppuStack_120);
                  goto LAB_102a942e4;
                }
              }
              ppppuVar24 = (undefined8 ****)plVar19[-1];
              ppuStack_158 = pppuVar20;
              lStack_150 = lVar12;
              ppuStack_148 = pppuVar25;
              ppuStack_138 = pppuVar22;
              if (ppppuVar24 == (undefined8 ****)0x0) {
LAB_102a94530:
                ppppuVar24 = (undefined8 ****)pppuStack_130;
                func_0x000107c6142c();
                func_0x000102a957ac();
                func_0x000107c613f8(&UNK_110590900,ppppuVar24,0,0);
                *(undefined1 *)ppppuVar24 = 2;
                func_0x000107c61654();
LAB_102a945b0:
                func_0x00010006c090(plVar9,puVar15);
                func_0x000107c6142c(pppuStack_168);
                ppppuVar24 = (undefined8 ****)pppuStack_120;
                goto LAB_102a94370;
              }
              lStack_90 = plVar19[-2];
              pppuStack_118 = ppppuVar24;
              pppuStack_88 = ppppuVar24;
              FUN_102a957ec(lStack_90,ppppuVar24,lVar27);
              func_0x000107c61434(ppppuVar24);
              func_0x000107c5fb04(lVar28);
              func_0x000100e8b654();
              uVar16 = 0;
              lVar12 = lVar28;
              func_0x000107c60214(lVar28,0,PTR___sSSN_11034da80,ppppuVar24);
              uStack_128 = uVar16;
              func_0x000107c6142c(lVar27);
              pppuVar20 = pppuStack_118;
              func_0x000107c6142c(pppuStack_118);
              (**(code **)(lVar26 + 8))(lVar28,lVar6);
              func_0x000107c6142c(pppuVar20);
              if (0xe < uStack_128 >> 0x3c) goto LAB_102a94530;
              lStack_160 = lVar12;
              func_0x000107c5ee20(lVar12);
              pppuStack_b0 = (undefined8 ****)0x0;
              plVar19 = plStack_100;
              func_0x000107c3ab8c();
              func_0x000107c61180();
              func_0x000107c61170(lVar12);
              ppppuVar24 = (undefined8 ****)pppuStack_b0;
              func_0x000107c61174(pppuStack_b0);
              if (plVar19 == (long *)0x0) {
                func_0x000107c6142c(pppuStack_130);
                func_0x000107c5ed30(ppppuVar24);
                func_0x000107c61170(ppppuVar24);
                func_0x000107c61654();
                func_0x0001000b44c0(lStack_160,uStack_128);
                goto LAB_102a945b0;
              }
              func_0x000107c60234(&lStack_90,plVar19);
              func_0x000107c615e8(plVar19);
              if ((long)pppuStack_130[2] <= (long)ppuStack_138) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102a945ec);
                (*pcVar4)();
              }
              pppuStack_118 = (undefined8 ***)pppuStack_140[(long)ppuStack_138];
              func_0x0001000bb420(&lStack_90,&pppuStack_b0);
              pppuVar20 = pppuStack_118;
              uStack_e8 = uStack_a8;
              pppuStack_f0 = pppuStack_b0;
              lStack_d8 = lStack_98;
              uStack_e0 = uStack_a0;
              if (lStack_98 == 0) {
                func_0x000107c61434(pppuStack_118);
                func_0x00010006e7f4(&pppuStack_f0);
                func_0x000107c61434(pppuVar20);
                uVar13 = 0x61646174654d7261;
                uVar16 = 0;
                func_0x000100029284();
                uStack_170 = uVar13;
                func_0x000107c6142c(pppuVar20);
                pppuVar20 = pppuStack_118;
                if ((uVar16 & 1) == 0) {
                  uStack_c8 = 0;
                  uStack_d0 = 0;
                  uStack_b8 = 0;
                  uStack_c0 = 0;
                }
                else {
                  ppppuVar24 = (undefined8 ****)pppuStack_118;
                  func_0x000107c61558();
                  pppuStack_f0 = pppuVar20;
                  if ((int)ppppuVar24 == 0) {
                    func_0x0001010fc388();
                    pppuStack_118 = pppuStack_f0;
                  }
                  pppuVar20 = pppuStack_118;
                  uVar16 = uStack_170;
                  func_0x000107c6142c(pppuStack_118[6][uStack_170 * 2 + 1]);
                  func_0x000100102924(pppuVar20[7] + uVar16 * 4,&uStack_d0);
                  func_0x0001010f6278(uVar16,pppuVar20);
                }
                ppppuVar24 = (undefined8 ****)pppuStack_120;
                func_0x00010006e7f4(&uStack_d0);
                uVar16 = uStack_128;
              }
              else {
                func_0x000100102924(&pppuStack_f0,&uStack_d0);
                pppuVar20 = pppuStack_118;
                ppppuVar24 = (undefined8 ****)pppuStack_118;
                func_0x000107c61434();
                uVar5 = SUB84(ppppuVar24,0);
                func_0x000107c61558();
                uStack_170 = CONCAT44(uStack_170._4_4_,uVar5);
                pppuStack_f0 = pppuVar20;
                uVar13 = 0x61646174654d7261;
                uVar17 = 0xea00000000006174;
                func_0x000100029284();
                pppuVar20 = (undefined8 ***)pppuVar20[2];
                uVar14 = (uint)uVar17;
                lVar12 = (long)pppuVar20 + ((ulong)~uVar14 & 1);
                if (SCARRY8((long)pppuVar20,(ulong)~uVar14 & 1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x102a945f4);
                  (*pcVar4)();
                }
                if ((long)pppuStack_118[3] < lVar12) {
                  pppuStack_118 = (undefined8 ***)CONCAT44(pppuStack_118._4_4_,uVar14);
                  func_0x000100102b0c(lVar12,uStack_170 & 0xffffffff);
                  uVar13 = 0x61646174654d7261;
                  uVar14 = 0;
                  func_0x000100029284();
                  if (((uint)pppuStack_118 & 1) != (uVar14 & 1)) {
                    func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x102a9460c);
                    (*pcVar4)();
                  }
LAB_102a93fd4:
                  uVar17 = (ulong)pppuStack_118 & 0xffffffff;
                }
                else if ((uStack_170 & 1) == 0) {
                  pppuStack_118 = (undefined8 ***)CONCAT44(pppuStack_118._4_4_,uVar14);
                  func_0x0001010fc388();
                  goto LAB_102a93fd4;
                }
                pppuVar20 = pppuStack_f0;
                uVar16 = uStack_128;
                pppuStack_118 = pppuStack_f0;
                if ((uVar17 & 1) == 0) {
                  pppuStack_f0[(uVar13 >> 6) + 8] =
                       (undefined8 ***)
                       ((ulong)pppuStack_f0[(uVar13 >> 6) + 8] | 1L << (uVar13 & 0x3f));
                  pppuVar25 = (undefined8 ***)pppuStack_f0[6];
                  pppuVar25[uVar13 * 2] = (undefined8 **)0x61646174654d7261;
                  (pppuVar25 + uVar13 * 2)[1] = (undefined8 **)0xea00000000006174;
                  func_0x000100102924(&uStack_d0,pppuStack_f0[7] + uVar13 * 4);
                  if (SCARRY8((long)pppuVar20[2],1)) goto LAB_102a945f8;
                  pppuStack_118[2] = (undefined8 ***)((long)pppuVar20[2] + 1);
                  uVar16 = uStack_128;
                  ppppuVar24 = (undefined8 ****)pppuStack_120;
                }
                else {
                  pppuVar20 = (undefined8 ***)pppuStack_f0[7];
                  FUN_102a9581c(pppuVar20 + uVar13 * 4);
                  func_0x000100102924(&uStack_d0,pppuVar20 + uVar13 * 4);
                  ppppuVar24 = (undefined8 ****)pppuStack_120;
                }
              }
              func_0x000107c61434(pppuStack_118);
              ppppuVar11 = ppppuVar24;
              func_0x000107c61558();
              if (((ulong)ppppuVar11 & 1) == 0) {
                func_0x000102a94bac();
              }
              pppuStack_120 = ppppuVar24[2];
              func_0x0001000b44c0(lStack_160,uVar16);
              ppuVar3 = ppuStack_138;
              if ((long)pppuStack_120 <= (long)ppuStack_138) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x102a945f0);
                (*pcVar4)();
              }
              FUN_102a9581c(&lStack_90);
              pppuVar20 = ppppuVar24[(long)ppuVar3 + 4];
              ppppuVar24[(long)ppuVar3 + 4] = pppuStack_118;
              pppuStack_120 = ppppuVar24;
              func_0x000107c6142c();
              func_0x000107c6142c(pppuVar20);
              bVar23 = true;
              lVar12 = lStack_150;
              pppuVar20 = (undefined8 ***)ppuStack_158;
              pppuVar25 = (undefined8 ***)ppuStack_148;
            } while (ppuStack_158 != ppuVar3);
            func_0x000107c6142c(pppuStack_130);
LAB_102a94388:
            ppppuVar24 = (undefined8 ****)pppuStack_120;
            puVar2 = PTR___sypN_11034f1a8;
            pppuStack_b0 = pppuStack_120;
            lStack_98 = lStack_110;
            if (lStack_110 == 0) {
              func_0x000107c61434(pppuStack_120);
              func_0x00010006e7f4(&pppuStack_b0);
              func_0x000100216878(&lStack_90,0xd000000000000015,
                                  (ulong)pcStack_108 | 0x8000000000000000);
              func_0x00010006e7f4(&lStack_90);
            }
            else {
              func_0x000100102924(&pppuStack_b0,&lStack_90);
              func_0x000107c61434(ppppuVar24);
              pppuVar20 = pppuStack_f8;
              ppppuVar11 = (undefined8 ****)pppuStack_f8;
              func_0x000107c61558(pppuStack_f8);
              pppuStack_b0 = pppuVar20;
              func_0x0001001029e8(&lStack_90,0xd000000000000015,
                                  (ulong)pcStack_108 | 0x8000000000000000,ppppuVar11);
              pppuStack_f8 = pppuStack_b0;
            }
            pppuVar20 = pppuStack_f8;
            ppppuVar11 = (undefined8 ****)pppuStack_f8;
            puVar18 = PTR___sSSN_11034da80;
            func_0x000107c5f9dc(pppuStack_f8,PTR___sSSN_11034da80,puVar2 + 8,
                                PTR___sSSSHsWP_11034da90);
            lStack_90 = 0;
            plVar19 = plStack_100;
            func_0x000107c41300();
            func_0x000107c61180();
            func_0x000107c61170(ppppuVar11);
            lVar6 = lStack_90;
            func_0x000107c61174(lStack_90);
            if (plVar19 != (long *)0x0) {
              plVar10 = plVar19;
              func_0x000107c5ee30(plVar19);
              func_0x00010006c090(plVar9,puVar15);
              func_0x000107c6142c(pppuVar20);
              func_0x000107c6142c(ppppuVar24);
              func_0x000107c61170(plVar19);
              plVar9 = plVar10;
              puVar15 = puVar18;
              goto LAB_102a942e4;
            }
            func_0x000107c5ed30();
            func_0x000107c61170(lVar6);
            func_0x000107c61654();
            func_0x00010006c090(plVar9,puVar15);
            func_0x000107c6142c(pppuVar20);
          }
          else {
            ppppuVar11 = (undefined8 ****)pppuStack_b0;
            func_0x000107c6142c();
            func_0x000102a957ac();
            func_0x000107c613f8(&UNK_110590900,ppppuVar11,0,0);
            *(undefined1 *)ppppuVar11 = 1;
            func_0x000107c61654();
            func_0x00010006c090(plVar9,puVar15);
          }
LAB_102a94370:
          func_0x000107c6142c(ppppuVar24);
          goto LAB_102a942e4;
        }
      }
      func_0x000107c6142c();
      ppppuVar11 = ppppuVar24;
    }
LAB_102a942ac:
    func_0x000102a957ac();
    func_0x000107c613f8(&UNK_110590900,ppppuVar11,0,0);
    *(undefined1 *)ppppuVar11 = 0;
  }
  func_0x000107c61654();
  func_0x00010006c090(plVar9,puVar15);
LAB_102a942e4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    auVar29._8_8_ = puVar15;
    auVar29._0_8_ = plVar9;
    return auVar29;
  }
  func_0x000107c60e78();
LAB_102a945f8:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x102a945fc);
  (*pcVar4)();
}



/* Entry: 102a9460c; end: 102a94613;  */

undefined8 FUN_102a9460c(void)

{
  return 1;
}



/* Entry: 102a94614; end: 102a946b3;  */

void FUN_102a94614(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a946b4; end: 102a946cf;  */

undefined1  [16] FUN_102a946b4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f0e5f10;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Entry: 102a946d0; end: 102a9475f;  */

void FUN_102a946d0(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  if ((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef0f1a0f0)) {
    func_0x000107c6142c(0x800000010f0e5f10);
    bVar1 = 0;
  }
  else {
    bVar1 = 0x15;
    func_0x000107c605b8(0xd000000000000015,0x800000010f0e5f10,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 102a94760; end: 102a94777;  */

undefined1  [16] FUN_102a94760(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102a94778; end: 102a947c7;  */

void FUN_102a94778(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102a94ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102a947c8; end: 102a949b7;  */

undefined8 FUN_102a947c8(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined1 auStack_418 [200];
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
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
  ulong uStack_100;
  ulong uStack_f8;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 != 0) && (param_1 != param_2)) {
    puVar3 = (ulong *)(param_1 + 0x20);
    puVar4 = (ulong *)(param_2 + 0x20);
    while( true ) {
      lVar2 = lVar2 + -1;
      uStack_2a8 = puVar3[0x15];
      uStack_2b0 = puVar3[0x14];
      uStack_298 = puVar3[0x17];
      uStack_2a0 = puVar3[0x16];
      uStack_290 = puVar3[0x18];
      uStack_2e8 = puVar3[0xd];
      uStack_2f0 = puVar3[0xc];
      uStack_2d8 = puVar3[0xf];
      uStack_2e0 = puVar3[0xe];
      uStack_2c8 = puVar3[0x11];
      uStack_2d0 = puVar3[0x10];
      uStack_2b8 = puVar3[0x13];
      uStack_2c0 = puVar3[0x12];
      uStack_328 = puVar3[5];
      uStack_330 = puVar3[4];
      uStack_318 = puVar3[7];
      uStack_320 = puVar3[6];
      uStack_308 = puVar3[9];
      uStack_310 = puVar3[8];
      uStack_2f8 = puVar3[0xb];
      uStack_300 = puVar3[10];
      uStack_348 = puVar3[1];
      uVar5 = *puVar3;
      uStack_338 = puVar3[3];
      uStack_340 = puVar3[2];
      uStack_1d8 = puVar4[0x15];
      uStack_1e0 = puVar4[0x14];
      uStack_1c8 = puVar4[0x17];
      uStack_1d0 = puVar4[0x16];
      uStack_1c0 = puVar4[0x18];
      uStack_218 = puVar4[0xd];
      uStack_220 = puVar4[0xc];
      uStack_208 = puVar4[0xf];
      uStack_210 = puVar4[0xe];
      uStack_1f8 = puVar4[0x11];
      uStack_200 = puVar4[0x10];
      uStack_1e8 = puVar4[0x13];
      uStack_1f0 = puVar4[0x12];
      uStack_258 = puVar4[5];
      uStack_260 = puVar4[4];
      uStack_248 = puVar4[7];
      uStack_250 = puVar4[6];
      uStack_238 = puVar4[9];
      uStack_240 = puVar4[8];
      uStack_228 = puVar4[0xb];
      uStack_230 = puVar4[10];
      uStack_278 = puVar4[1];
      uStack_280 = *puVar4;
      uStack_268 = puVar4[3];
      uStack_270 = puVar4[2];
      uStack_350 = uVar5;
      if ((((uVar5 != uStack_280) || (uStack_348 != uStack_278)) &&
          (func_0x000107c605b8(), (uVar5 & 1) == 0)) ||
         (((uStack_340 != uStack_270 || (uStack_338 != uStack_268)) &&
          (uVar5 = uStack_340, func_0x000107c605b8(), (uVar5 & 1) == 0)))) {
        return 0;
      }
      uStack_128 = uStack_2a8;
      uStack_130 = uStack_2b0;
      uStack_118 = uStack_298;
      uStack_120 = uStack_2a0;
      uStack_110 = uStack_290;
      uStack_168 = uStack_2e8;
      uStack_170 = uStack_2f0;
      uStack_158 = uStack_2d8;
      uStack_160 = uStack_2e0;
      uStack_148 = uStack_2c8;
      uStack_150 = uStack_2d0;
      uStack_138 = uStack_2b8;
      uStack_140 = uStack_2c0;
      uStack_1a8 = uStack_328;
      uStack_1b0 = uStack_330;
      uStack_198 = uStack_318;
      uStack_1a0 = uStack_320;
      uStack_188 = uStack_308;
      uStack_190 = uStack_310;
      uStack_178 = uStack_2f8;
      uStack_180 = uStack_300;
      uStack_78 = uStack_1d8;
      uStack_80 = uStack_1e0;
      uStack_68 = uStack_1c8;
      uStack_70 = uStack_1d0;
      uStack_60 = uStack_1c0;
      uStack_b8 = uStack_218;
      uStack_c0 = uStack_220;
      uStack_a8 = uStack_208;
      uStack_b0 = uStack_210;
      uStack_98 = uStack_1f8;
      uStack_a0 = uStack_200;
      uStack_88 = uStack_1e8;
      uStack_90 = uStack_1f0;
      uStack_f8 = uStack_258;
      uStack_100 = uStack_260;
      uStack_e8 = uStack_248;
      uStack_f0 = uStack_250;
      uStack_d8 = uStack_238;
      uStack_e0 = uStack_240;
      uStack_c8 = uStack_228;
      uStack_d0 = uStack_230;
      FUN_102a93860(&uStack_350,auStack_418);
      FUN_102a93860(&uStack_280,auStack_418);
      puVar1 = &uStack_1b0;
      FUN_102aa69a0(puVar1,&uStack_100);
      func_0x000102a93894(&uStack_280);
      func_0x000102a93894(&uStack_350);
      if (((ulong)puVar1 & 1) == 0) {
        return 0;
      }
      if (lVar2 == 0) break;
      puVar3 = puVar3 + 0x19;
      puVar4 = puVar4 + 0x19;
    }
    return 1;
  }
  return 1;
}



/* Entry: 102a949b8; end: 102a94adf;  */

void FUN_102a949b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  
  lVar3 = 0x112ee7638;
  func_0x0001000285a8(0x112ee7638,&UNK_10db12b90);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  FUN_102a94ae0();
  func_0x000107c606ec(auStack_60 + -extraout_x8,&UNK_110590990,&UNK_110590990,param_1,uVar1,uVar2);
  uStack_58 = param_2;
  func_0x0001000285a8(0x112ee7648,&UNK_10db12b98);
  FUN_102a9583c(0x112ee7650,0x102a94b20,PTR___sSayxGSEsSERzlMc_11034dce0);
  func_0x000107c60554(&uStack_58);
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,lVar3);
  return;
}



/* Entry: 102a94ae0; end: 102a94b5f;  */

void FUN_102a94ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12e18;
  func_0x000107c61520(&UNK_10db12e18,&UNK_110590990);
  puRam0000000112ee7640 = puVar1;
  return;
}



/* Entry: 102a94b60; end: 102a94b87;  */

void FUN_102a94b60(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_102a952ac();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Entry: 102a94b88; end: 102a94b9f;  */

void FUN_102a94b88(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a949b8(param_1,*unaff_x20);
  return;
}



/* Entry: 102a94ba0; end: 102a94c0f;  */

undefined8 FUN_102a94ba0(long *param_1,long *param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_418 [200];
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
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
  ulong uStack_100;
  ulong uStack_f8;
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
  
  lVar2 = *param_1;
  lVar3 = *param_2;
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != *(long *)(lVar3 + 0x10)) {
    return 0;
  }
  if ((lVar4 != 0) && (lVar2 != lVar3)) {
    puVar5 = (ulong *)(lVar2 + 0x20);
    puVar6 = (ulong *)(lVar3 + 0x20);
    while( true ) {
      lVar4 = lVar4 + -1;
      uStack_2a8 = puVar5[0x15];
      uStack_2b0 = puVar5[0x14];
      uStack_298 = puVar5[0x17];
      uStack_2a0 = puVar5[0x16];
      uStack_290 = puVar5[0x18];
      uStack_2e8 = puVar5[0xd];
      uStack_2f0 = puVar5[0xc];
      uStack_2d8 = puVar5[0xf];
      uStack_2e0 = puVar5[0xe];
      uStack_2c8 = puVar5[0x11];
      uStack_2d0 = puVar5[0x10];
      uStack_2b8 = puVar5[0x13];
      uStack_2c0 = puVar5[0x12];
      uStack_328 = puVar5[5];
      uStack_330 = puVar5[4];
      uStack_318 = puVar5[7];
      uStack_320 = puVar5[6];
      uStack_308 = puVar5[9];
      uStack_310 = puVar5[8];
      uStack_2f8 = puVar5[0xb];
      uStack_300 = puVar5[10];
      uStack_348 = puVar5[1];
      uVar7 = *puVar5;
      uStack_338 = puVar5[3];
      uStack_340 = puVar5[2];
      uStack_1d8 = puVar6[0x15];
      uStack_1e0 = puVar6[0x14];
      uStack_1c8 = puVar6[0x17];
      uStack_1d0 = puVar6[0x16];
      uStack_1c0 = puVar6[0x18];
      uStack_218 = puVar6[0xd];
      uStack_220 = puVar6[0xc];
      uStack_208 = puVar6[0xf];
      uStack_210 = puVar6[0xe];
      uStack_1f8 = puVar6[0x11];
      uStack_200 = puVar6[0x10];
      uStack_1e8 = puVar6[0x13];
      uStack_1f0 = puVar6[0x12];
      uStack_258 = puVar6[5];
      uStack_260 = puVar6[4];
      uStack_248 = puVar6[7];
      uStack_250 = puVar6[6];
      uStack_238 = puVar6[9];
      uStack_240 = puVar6[8];
      uStack_228 = puVar6[0xb];
      uStack_230 = puVar6[10];
      uStack_278 = puVar6[1];
      uStack_280 = *puVar6;
      uStack_268 = puVar6[3];
      uStack_270 = puVar6[2];
      uStack_350 = uVar7;
      if ((((uVar7 != uStack_280) || (uStack_348 != uStack_278)) &&
          (func_0x000107c605b8(), (uVar7 & 1) == 0)) ||
         (((uStack_340 != uStack_270 || (uStack_338 != uStack_268)) &&
          (uVar7 = uStack_340, func_0x000107c605b8(), (uVar7 & 1) == 0)))) {
        return 0;
      }
      uStack_128 = uStack_2a8;
      uStack_130 = uStack_2b0;
      uStack_118 = uStack_298;
      uStack_120 = uStack_2a0;
      uStack_110 = uStack_290;
      uStack_168 = uStack_2e8;
      uStack_170 = uStack_2f0;
      uStack_158 = uStack_2d8;
      uStack_160 = uStack_2e0;
      uStack_148 = uStack_2c8;
      uStack_150 = uStack_2d0;
      uStack_138 = uStack_2b8;
      uStack_140 = uStack_2c0;
      uStack_1a8 = uStack_328;
      uStack_1b0 = uStack_330;
      uStack_198 = uStack_318;
      uStack_1a0 = uStack_320;
      uStack_188 = uStack_308;
      uStack_190 = uStack_310;
      uStack_178 = uStack_2f8;
      uStack_180 = uStack_300;
      uStack_78 = uStack_1d8;
      uStack_80 = uStack_1e0;
      uStack_68 = uStack_1c8;
      uStack_70 = uStack_1d0;
      uStack_60 = uStack_1c0;
      uStack_b8 = uStack_218;
      uStack_c0 = uStack_220;
      uStack_a8 = uStack_208;
      uStack_b0 = uStack_210;
      uStack_98 = uStack_1f8;
      uStack_a0 = uStack_200;
      uStack_88 = uStack_1e8;
      uStack_90 = uStack_1f0;
      uStack_f8 = uStack_258;
      uStack_100 = uStack_260;
      uStack_e8 = uStack_248;
      uStack_f0 = uStack_250;
      uStack_d8 = uStack_238;
      uStack_e0 = uStack_240;
      uStack_c8 = uStack_228;
      uStack_d0 = uStack_230;
      FUN_102a93860(&uStack_350,auStack_418);
      FUN_102a93860(&uStack_280,auStack_418);
      puVar1 = &uStack_1b0;
      FUN_102aa69a0(puVar1,&uStack_100);
      func_0x000102a93894(&uStack_280);
      func_0x000102a93894(&uStack_350);
      if (((ulong)puVar1 & 1) == 0) {
        return 0;
      }
      if (lVar4 == 0) break;
      puVar5 = puVar5 + 0x19;
      puVar6 = puVar6 + 0x19;
    }
    return 1;
  }
  return 1;
}



/* Entry: 102a94c10; end: 102a95247;  */

void FUN_102a94c10(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  func_0x0001000285a8(0x112ee7700,&UNK_10db12e70);
  lVar16 = *unaff_x20;
  lVar9 = lVar16;
  func_0x000107c6048c();
  if (*(long *)(lVar16 + 0x10) != 0) {
    lVar1 = lVar16 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar9 != lVar16 || lVar1 + uVar11 * 8 <= lVar9 + 0x40U) {
      func_0x000107c610b8(lVar9 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar17 = 0;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar16 + 0x40);
    if (uVar11 == 0) goto LAB_102a94cf0;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar17 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar15);
        uVar6 = puVar2[1];
        lVar14 = uVar13 * 0x20;
        puVar3 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar14);
        uVar5 = *puVar3;
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar15);
        uVar10 = puVar3[3];
        uVar19 = puVar3[3];
        uVar18 = puVar3[2];
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar14);
        *puVar2 = uVar5;
        puVar2[1] = uVar7;
        puVar2[3] = uVar19;
        puVar2[2] = uVar18;
        func_0x000107c61434(uVar10);
        func_0x000107c61434(uVar6);
        func_0x000107c61434(uVar7);
        if (uVar11 != 0) break;
LAB_102a94cf0:
        do {
          lVar14 = lVar17 + 1;
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x102a94da8);
            (*pcVar8)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_102a94d7c;
          uVar11 = *(ulong *)(lVar1 + lVar14 * 8);
          lVar17 = lVar17 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar17 = lVar14;
      }
    } while( true );
  }
LAB_102a94d7c:
  func_0x000107c61574(lVar16);
  *unaff_x20 = lVar9;
  return;
}



/* Entry: 102a95248; end: 102a952ab;  */

ulong FUN_102a95248(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 102a952ac; end: 102a953fb;  */

long FUN_102a952ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  lVar2 = 0x112ee7708;
  func_0x0001000285a8(0x112ee7708,&UNK_10db12e80);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar5);
  lVar4 = lVar3;
  FUN_102a94ae0();
  func_0x000107c606e0(auStack_60 + -extraout_x8,&UNK_110590990,&UNK_110590990,lVar4,uVar5,uVar1);
  if (unaff_x21 == 0) {
    uVar5 = 0x112ee7648;
    func_0x0001000285a8(0x112ee7648,&UNK_10db12b98);
    FUN_102a9583c(0x112ee7710,FUN_102a958ac,PTR___sSayxGSesSeRzlMc_11034dd10);
    func_0x000107c60508(&lStack_58,uVar5);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,lVar2);
    FUN_102a9581c(param_1);
  }
  else {
    FUN_102a9581c(param_1);
    lStack_58 = lVar3;
  }
  return lStack_58;
}



/* Entry: 102a953fc; end: 102a9565f;  */

undefined1  [16] FUN_102a953fc(void)

{
  return ZEXT816(0x110590868);
}



/* Entry: 102a95660; end: 102a9569f;  */

void FUN_102a95660(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12d10;
  func_0x000107c61520(&UNK_10db12d10,&UNK_110590990);
  puRam0000000112ee7660 = puVar1;
  return;
}



/* Entry: 102a956a0; end: 102a956a3;  */

void FUN_102a956a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12df0;
  func_0x000107c61520(&UNK_10db12df0,&UNK_110590900);
  puRam0000000112ee7668 = puVar1;
  return;
}



/* Entry: 102a956a4; end: 102a956e3;  */

void FUN_102a956a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12df0;
  func_0x000107c61520(&UNK_10db12df0,&UNK_110590900);
  puRam0000000112ee7668 = puVar1;
  return;
}



/* Entry: 102a956e4; end: 102a956e7;  */

void FUN_102a956e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12ca8;
  func_0x000107c61520(&UNK_10db12ca8,&UNK_110590990);
  puRam0000000112ee7670 = puVar1;
  return;
}



/* Entry: 102a956e8; end: 102a95727;  */

void FUN_102a956e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12ca8;
  func_0x000107c61520(&UNK_10db12ca8,&UNK_110590990);
  puRam0000000112ee7670 = puVar1;
  return;
}



/* Entry: 102a95728; end: 102a9572b;  */

void FUN_102a95728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee7678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db12c80;
  func_0x000107c61520(&UNK_10db12c80,&UNK_110590990);
  puRam0000000112ee7678 = puVar1;
  return;
}


