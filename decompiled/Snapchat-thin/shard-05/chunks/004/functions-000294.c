/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103de6388; end: 103de69df; -[SCAdRenderDataParserScope initWithAdRenderData:adIdentifier:serveItemId:adServeRequestId:pixelId:adSquadId:campaignId:adAccountId:adProductType:serveLoggingContext:targetingParameters:rawUserData:rawAdData:protoTrackURL:viewReceipt:storyDedupeFp:filledAdTTLInMillis:noFillAdTTLInMillis:backupAdTTLInMillis:serveTimeStampMillis:adSwipeUpLikely:skAdNetworkAttribution:organicValue:adInsertionConfig:adRequestDescription:optimizationGoal:brandSafetyInventoryType:resolvedTimeStampMillis:] */

void FUN_103de6388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,long param_11,long param_12,long param_13,
                  long param_14,long param_15,long param_16,undefined8 param_17,undefined8 param_18,
                  undefined8 param_19,long param_20,long param_21,long param_22,long param_23,
                  undefined8 param_24,undefined1 param_25,undefined4 param_26,undefined8 param_27,
                  undefined8 param_28,long param_29,undefined8 param_30,undefined8 param_31)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long alStack_230 [17];
  undefined1 auStack_1a8 [8];
  long alStack_1a0 [6];
  long lStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined *puStack_150;
  long lStack_148;
  ulong uStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_118;
  long lStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  
  lStack_c0 = param_29;
  uStack_b8 = param_28;
  uStack_a0 = param_27;
  uStack_d8 = param_22;
  lStack_d0 = param_23;
  lStack_e0 = param_21;
  lVar10 = 0x112d3bc20;
  puVar8 = &UNK_10d904ef0;
  uStack_f0 = param_7;
  lStack_e8 = param_10;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar10 = (long)&lStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_a8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lStack_b0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  uStack_100 = param_18;
  uStack_f8 = param_19;
  uStack_108 = param_20;
  lStack_120 = param_16;
  uStack_140 = param_15;
  lStack_170 = param_13;
  lStack_160 = param_12;
  lStack_158 = param_14;
  lStack_c8 = lVar10;
  if (param_9 == 0) {
    _objc_retain(lStack_e8);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_14);
    _objc_retain(param_15);
    _objc_retain(param_16);
    _objc_retain(param_18);
    _objc_retain(param_19);
    _objc_retain(param_20);
    _objc_retain(lStack_e0);
    _objc_retain(uStack_d8);
    _objc_retain(lStack_d0);
    _objc_retain(uStack_a0);
    _objc_retain(uStack_b8);
    _objc_retain(lStack_c0);
    lStack_110 = 0;
    puStack_118 = (undefined *)0xf000000000000000;
  }
  else {
    _objc_retain(lStack_e8);
    _objc_retain(param_11);
    _objc_retain(param_12);
    _objc_retain(param_13);
    _objc_retain(param_14);
    _objc_retain(param_15);
    _objc_retain(param_16);
    _objc_retain(param_18);
    _objc_retain(param_19);
    _objc_retain(param_20);
    _objc_retain(lStack_e0);
    _objc_retain(uStack_d8);
    _objc_retain(lStack_d0);
    _objc_retain(uStack_a0);
    _objc_retain(uStack_b8);
    _objc_retain(lStack_c0);
    lVar12 = param_9;
    _objc_retain(param_9);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    puStack_118 = puVar8;
    lStack_110 = param_9;
    _objc_release(lVar12);
  }
  lVar12 = lStack_e8;
  lVar6 = lStack_e8;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puStack_130 = puVar8;
  uStack_128 = lVar6;
  _objc_release(lVar12);
  lVar12 = lStack_c8;
  if (param_11 == 0) {
    lStack_e8 = 0;
    puStack_138 = (undefined *)0x0;
  }
  else {
    lVar6 = param_11;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_138 = puVar8;
    lStack_e8 = lVar6;
    _objc_release(param_11);
  }
  lVar4 = lStack_b0;
  lVar2 = lStack_158;
  lVar7 = lStack_160;
  lVar6 = lStack_170;
  if (lStack_160 == 0) {
    lStack_148 = 0;
    puStack_150 = (undefined *)0x0;
  }
  else {
    lVar5 = lStack_160;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_150 = puVar8;
    lStack_148 = lVar5;
    _objc_release(lVar7);
  }
  if (lVar6 == 0) {
    lStack_160 = 0;
    puStack_168 = (undefined *)0x0;
  }
  else {
    lVar7 = lVar6;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_168 = puVar8;
    lStack_160 = lVar7;
    _objc_release(lVar6);
  }
  if (lVar2 == 0) {
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
  }
  else {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar12,lVar2);
    _objc_release(lVar2);
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
  }
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar12,lVar2 == 0,1);
  uVar9 = uStack_140;
  bVar1 = uStack_140 == 0;
  if (!bVar1) {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ(lVar4,uStack_140);
    _objc_release(uVar9);
  }
  lVar7 = 0;
  __s10Foundation4UUIDVMa();
  pcVar11 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  (*pcVar11)(lVar4,bVar1,1,lVar7);
  lVar6 = lStack_a8;
  lVar12 = lStack_120;
  bVar1 = lStack_120 == 0;
  if (!bVar1) {
    __s10Foundation4UUIDV36_unconditionallyBridgeFromObjectiveCyACSo6NSUUIDCSgFZ
              (lStack_a8,lStack_120);
    _objc_release(lVar12);
  }
  uVar9 = (ulong)bVar1;
  (*pcVar11)(lVar6,uVar9,1,lVar7);
  uVar14 = uStack_108;
  if (uStack_108 == 0) {
    lStack_120 = 0;
    uStack_140 = 0;
  }
  else {
    uVar13 = uStack_108;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_140 = uVar9;
    lStack_120 = uVar13;
    _objc_release(uVar14);
  }
  lVar6 = lStack_d0;
  uVar14 = uStack_d8;
  lVar12 = lStack_e0;
  if (lStack_e0 == 0) {
    uStack_d8 = 0;
    lStack_d0 = 0;
  }
  else {
    lVar7 = lStack_e0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_d8 = uVar9;
    lStack_d0 = lVar7;
    _objc_release(lVar12);
  }
  if (uVar14 == 0) {
    lStack_e0 = 0;
    uStack_108 = 0;
  }
  else {
    uVar13 = uVar14;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_108 = uVar9;
    lStack_e0 = uVar13;
    _objc_release(uVar14);
  }
  if (lVar6 == 0) {
    lVar12 = 0;
    uVar13 = 0xf000000000000000;
    uVar14 = uVar9;
  }
  else {
    lVar12 = lVar6;
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    uVar14 = uVar9;
    _objc_release(lVar6);
    uVar13 = uVar9;
  }
  lVar6 = lStack_c0;
  if (lStack_c0 == 0) {
    lVar7 = 0;
    uVar14 = 0;
  }
  else {
    lVar7 = lStack_c0;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar6);
  }
  *(undefined8 *)(lVar10 + -0x10) = param_30;
  *(undefined8 *)(lVar10 + -8) = param_31;
  *(long *)(lVar10 + -0x20) = lVar7;
  *(ulong *)(lVar10 + -0x18) = uVar14;
  *(undefined8 *)(lVar10 + -0x28) = uStack_b8;
  *(undefined8 *)(lVar10 + -0x30) = uStack_a0;
  *(undefined1 *)(lVar10 + -0x38) = param_25;
  *(ulong *)(lVar10 + -0x48) = uVar13;
  *(undefined8 *)(lVar10 + -0x40) = param_24;
  *(long *)(lVar10 + -0x50) = lVar12;
  *(ulong *)(lVar10 + -0x58) = uStack_108;
  *(long *)(lVar10 + -0x60) = lStack_e0;
  *(ulong *)(lVar10 + -0x68) = uStack_d8;
  *(long *)(lVar10 + -0x70) = lStack_d0;
  *(ulong *)(lVar10 + -0x78) = uStack_140;
  *(long *)(lVar10 + -0x80) = lStack_120;
  *(undefined8 *)(lVar10 + -0x88) = uStack_f8;
  uVar3 = uStack_100;
  *(undefined8 *)(lVar10 + -0x98) = param_17;
  *(undefined8 *)(lVar10 + -0x90) = uVar3;
  *(long *)(lVar10 + -0xa0) = lStack_a8;
  *(long *)(lVar10 + -0xa8) = lStack_b0;
  *(long *)(lVar10 + -0xb0) = lStack_c8;
  *(undefined **)(lVar10 + -0xb8) = puStack_168;
  *(long *)(lVar10 + -0xc0) = lStack_160;
  func_0x000103de600c(param_1,param_2,param_3,param_4,param_5,param_6,lStack_110,puStack_118,
                      uStack_128,puStack_130,lStack_e8,puStack_138,lStack_148,puStack_150);
  return;
}



/* Entry: 103de69e0; end: 103de6a0f;  */

void FUN_103de69e0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103de6a10(param_1);
  return;
}



/* Entry: 103de6a10; end: 103de70af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103de6a10(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  long lStack_648;
  long lStack_640;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined1 uStack_588;
  undefined7 uStack_587;
  undefined1 uStack_580;
  undefined8 uStack_57f;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined1 uStack_428;
  undefined7 uStack_427;
  undefined1 uStack_420;
  undefined8 uStack_41f;
  undefined1 auStack_358 [352];
  undefined1 auStack_1f8 [352];
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  undefined8 uStack_78;
  
  _swift_getObjectType();
  lVar7 = 0;
  func_0x000100b91fbc();
  lStack_640 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_640 + 0x40));
  lVar14 = (long)&uStack_690 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_668 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar8 = 0x112db39a8;
  lStack_670 = lVar14;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_648 = lVar14 - extraout_x8_00;
  uVar13 = *param_1;
  uVar1 = param_1[1];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_1130107f8);
  *puVar9 = uVar13;
  puVar9[1] = uVar1;
  uStack_650 = param_1[3];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_113010800);
  *puVar9 = param_1[2];
  puVar9[1] = uStack_650;
  uStack_658 = param_1[5];
  uVar15 = param_1[4];
  uVar18 = param_1[7];
  uVar17 = param_1[6];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_113010808);
  puVar9[1] = param_1[5];
  *puVar9 = uVar15;
  uVar15 = param_1[7];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_113010810);
  puVar9[1] = uVar18;
  *puVar9 = uVar17;
  uStack_660 = param_1[9];
  uVar17 = param_1[8];
  puVar9 = (undefined8 *)(unaff_x20 + _DAT_113010818);
  puVar9[1] = param_1[9];
  *puVar9 = uVar17;
  lVar8 = 0;
  FUN_103ddeef8();
  FUN_103de8a10((long)param_1 + (long)*(int *)(lVar8 + 0x24),unaff_x20 + _DAT_113812110,0x112d3bc20,
                &UNK_10d904ef0);
  FUN_103de8a10((long)param_1 + (long)*(int *)(lVar8 + 0x28),unaff_x20 + _DAT_113812118,0x112d3bc20,
                &UNK_10d904ef0);
  FUN_103de8a10((long)param_1 + (long)*(int *)(lVar8 + 0x2c),unaff_x20 + _DAT_113812120,0x112d3bc20,
                &UNK_10d904ef0);
  *(undefined8 *)(unaff_x20 + _DAT_113812128) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x34));
  lVar14 = puVar9[1];
  if (lVar14 == 1) {
    func_0x000100de78a0(uVar13,uVar1);
    _swift_bridgeObjectRetain(uStack_660);
    _swift_bridgeObjectRetain(uStack_650);
    _swift_bridgeObjectRetain(uStack_658);
    _swift_bridgeObjectRetain(uVar15);
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_688 = puVar9[4];
    uVar17 = puVar9[2];
    uVar18 = puVar9[3];
    uVar16 = *puVar9;
    bStack_80 = (byte)uVar18 & 1;
    bStack_7f = (byte)((ulong)uVar18 >> 8) & 1;
    bStack_7e = (byte)((ulong)uVar18 >> 0x10) & 1;
    uVar10 = 0;
    uStack_680 = uVar15;
    lStack_678 = lVar7;
    uStack_98 = uVar16;
    lStack_90 = lVar14;
    uStack_88 = uVar17;
    uStack_78 = uStack_688;
    func_0x00010481c348();
    _objc_allocWithZone();
    uStack_690 = uVar10;
    func_0x000100de78a0(uVar13,uVar1);
    _swift_bridgeObjectRetain(uStack_660);
    _swift_bridgeObjectRetain(uStack_650);
    _swift_bridgeObjectRetain(uStack_658);
    _swift_bridgeObjectRetain(uStack_680);
    lVar7 = lStack_678;
    FUN_103de4004(uVar16,lVar14,uVar17,uVar18,uStack_688);
    puVar9 = &uStack_98;
    func_0x00010481bb6c();
  }
  *(undefined8 **)(unaff_x20 + _DAT_113812130) = puVar9;
  _memcpy(auStack_358,(long)param_1 + (long)*(int *)(lVar8 + 0x38),0x160);
  iVar6 = (int)auStack_358;
  func_0x000101542f6c();
  lVar14 = lStack_648;
  if (iVar6 == 1) {
    puVar11 = (undefined1 *)0x0;
  }
  else {
    _memcpy(auStack_1f8,auStack_358,0x160);
    func_0x000104821150(0);
    _objc_allocWithZone();
    _memcpy(&uStack_4d0,auStack_358,0x160);
    func_0x000102d12354(&uStack_4d0,&uStack_630);
    puVar11 = auStack_1f8;
    func_0x00010481e13c();
  }
  *(undefined1 **)(unaff_x20 + _DAT_113812138) = puVar11;
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x3c));
  uVar13 = *puVar9;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_113812140);
  puVar2[1] = puVar9[1];
  *puVar2 = uVar13;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x40));
  uVar13 = *puVar2;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_113812148);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar13;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x44));
  uVar13 = *puVar3;
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113812150);
  puVar4[1] = puVar3[1];
  *puVar4 = uVar13;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x48));
  uVar13 = *puVar4;
  uVar1 = puVar4[1];
  puVar4 = (undefined8 *)(unaff_x20 + _DAT_113812158);
  *puVar4 = uVar13;
  puVar4[1] = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_113812160) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x4c));
  uStack_650 = puVar9[1];
  *(undefined8 *)(unaff_x20 + _DAT_113812168) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x50));
  *(undefined8 *)(unaff_x20 + _DAT_113812170) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x54));
  uStack_658 = puVar2[1];
  *(undefined8 *)(unaff_x20 + _DAT_113812178) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x58));
  *(undefined8 *)(unaff_x20 + _DAT_113812180) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x5c));
  uVar15 = puVar3[1];
  *(undefined1 *)(unaff_x20 + _DAT_113812188) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x60));
  FUN_103de8a10((long)param_1 + (long)*(int *)(lVar8 + 100),lVar14,0x112db39a8,&UNK_10d95dd90);
  lVar12 = lVar14;
  (**(code **)(lStack_640 + 0x30))(lVar14,1,lVar7);
  lVar7 = lStack_670;
  if ((int)lVar12 == 1) {
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uStack_650);
    _swift_bridgeObjectRetain(uStack_658);
    func_0x000100de78a0(uVar13,uVar1);
    lVar14 = 0;
  }
  else {
    func_0x0001034c75b0(lVar14,lStack_670);
    lVar14 = lStack_668;
    func_0x000103de70b0(lVar7,lStack_668);
    func_0x000104846384(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRetain(uStack_650);
    _swift_bridgeObjectRetain(uStack_658);
    func_0x000100de78a0(uVar13,uVar1);
    func_0x000104843d30();
    func_0x000103de70f4(lVar7,&SUB_100b91fbc);
  }
  *(long *)(unaff_x20 + _DAT_113812190) = lVar14;
  *(undefined4 *)(unaff_x20 + _DAT_113812198) =
       *(undefined4 *)((long)param_1 + (long)*(int *)(lVar8 + 0x68));
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x6c));
  uStack_5a8 = puVar9[0x11];
  uStack_5b0 = puVar9[0x10];
  uStack_598 = puVar9[0x13];
  uStack_5a0 = puVar9[0x12];
  uStack_590 = puVar9[0x14];
  uStack_588 = (undefined1)puVar9[0x15];
  uStack_57f = *(undefined8 *)((long)puVar9 + 0xb1);
  uStack_587 = (undefined7)*(undefined8 *)((long)puVar9 + 0xa9);
  uStack_580 = (undefined1)((ulong)*(undefined8 *)((long)puVar9 + 0xa9) >> 0x38);
  uStack_5c8 = puVar9[0xd];
  uStack_5d0 = puVar9[0xc];
  uStack_5b8 = puVar9[0xf];
  uStack_5c0 = puVar9[0xe];
  uStack_5e8 = puVar9[9];
  uStack_5f0 = puVar9[8];
  uStack_5d8 = puVar9[0xb];
  uStack_5e0 = puVar9[10];
  uStack_628 = puVar9[1];
  uStack_630 = *puVar9;
  uStack_618 = puVar9[3];
  uStack_620 = puVar9[2];
  uStack_608 = puVar9[5];
  uStack_610 = puVar9[4];
  uStack_5f8 = puVar9[7];
  uStack_600 = puVar9[6];
  iVar6 = (int)&uStack_630;
  func_0x000101541310();
  if (iVar6 == 1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uStack_448 = uStack_5a8;
    uStack_450 = uStack_5b0;
    uStack_438 = uStack_598;
    uStack_440 = uStack_5a0;
    uStack_428 = uStack_588;
    uStack_430 = uStack_590;
    uStack_41f = uStack_57f;
    uStack_427 = uStack_587;
    uStack_420 = uStack_580;
    uStack_488 = uStack_5e8;
    uStack_490 = uStack_5f0;
    uStack_478 = uStack_5d8;
    uStack_480 = uStack_5e0;
    uStack_468 = uStack_5c8;
    uStack_470 = uStack_5d0;
    uStack_458 = uStack_5b8;
    uStack_460 = uStack_5c0;
    uStack_4c8 = uStack_628;
    uStack_4d0 = uStack_630;
    uStack_4b8 = uStack_618;
    uStack_4c0 = uStack_620;
    uStack_4a8 = uStack_608;
    uStack_4b0 = uStack_610;
    uStack_498 = uStack_5f8;
    uStack_4a0 = uStack_600;
    func_0x0001047b5e44(0);
    _objc_allocWithZone();
    puVar9 = &uStack_4d0;
    func_0x0001047b45c0();
  }
  *(undefined8 **)(unaff_x20 + _DAT_1138121a0) = puVar9;
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x70));
  uVar13 = *puVar9;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1138121a8);
  puVar2[1] = puVar9[1];
  *puVar2 = uVar13;
  *(undefined8 *)(unaff_x20 + _DAT_1138121b0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x74));
  *(undefined8 *)(unaff_x20 + _DAT_1138121b8) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x78));
  uVar13 = puVar9[1];
  *(undefined8 *)(unaff_x20 + _DAT_1138121c0) =
       *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x7c));
  puVar5 = PTR_s_init_1125d9248;
  _swift_bridgeObjectRetain(uVar13);
  puVar11 = &stack0xfffffffffffffc98;
  _objc_msgSendSuper2(puVar11,puVar5);
  func_0x000103de70f4(param_1,FUN_103ddeef8);
  return puVar11;
}



/* Entry: 103de70b0; end: 103de712f;  */

undefined8 FUN_103de70b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100b91fbc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103de7130; end: 103de7163; -[SCAdRenderDataParserScope hash] */

undefined8 FUN_103de7130(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103de7164();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103de7164; end: 103de78a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de7164(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  float fVar12;
  double dVar13;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [72];
  
  lVar8 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar6 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar8 - extraout_x12_00;
  __ss6HasherVABycfC(auStack_a8);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_1130107f8))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1130107f8);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113010800);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_113010800))[1]);
  uVar2 = uVar1;
  func_0x000107c44c3c();
  _objc_release(uVar1);
  __ss6HasherV8_combineyySuF(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_113010808))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113010808);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113010810))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113010810);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113010818))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113010818);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  FUN_103de8a10(unaff_x20 + _DAT_113812110,lVar9,0x112d3bc20,&UNK_10d904ef0);
  lVar3 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar3 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar4 = lVar9;
  (*pcVar11)(lVar9,1,lVar3);
  if ((int)lVar4 == 1) {
    func_0x000103de8a58(lVar9,0x112d3bc20,&UNK_10d904ef0);
    lVar9 = 0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar10 + 8))(lVar9,lVar3);
    lVar9 = lVar4;
    func_0x000107c44c3c(lVar4);
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar9);
  FUN_103de8a10(unaff_x20 + _DAT_113812118,lVar8,0x112d3bc20,&UNK_10d904ef0);
  lVar9 = lVar8;
  (*pcVar11)(lVar8,1,lVar3);
  if ((int)lVar9 == 1) {
    func_0x000103de8a58(lVar8,0x112d3bc20,&UNK_10d904ef0);
    lVar8 = 0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar10 + 8))(lVar8,lVar3);
    lVar8 = lVar9;
    func_0x000107c44c3c(lVar9);
    _objc_release(lVar9);
  }
  __ss6HasherV8_combineyySuF(lVar8);
  FUN_103de8a10(unaff_x20 + _DAT_113812120,puVar6,0x112d3bc20,&UNK_10d904ef0);
  puVar5 = puVar6;
  (*pcVar11)(puVar6,1,lVar3);
  if ((int)puVar5 == 1) {
    func_0x000103de8a58(puVar6,0x112d3bc20,&UNK_10d904ef0);
    puVar6 = (undefined1 *)0x0;
  }
  else {
    __s10Foundation4UUIDV19_bridgeToObjectiveCSo6NSUUIDCyF();
    (**(code **)(lVar10 + 8))(puVar6,lVar3);
    puVar6 = puVar5;
    func_0x000107c44c3c(puVar5);
    _objc_release(puVar5);
  }
  __ss6HasherV8_combineyySuF(puVar6);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113812128);
  __ss6HasherV8_combineyySuF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_113812130) == 0) {
    uVar1 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010481b6bc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (*(long *)(unaff_x20 + _DAT_113812138) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x00010481c3d4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_113812140))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113812140);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113812148))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113812148);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_113812150))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113812150);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  if ((ulong)((undefined8 *)(unaff_x20 + _DAT_113812158))[1] >> 0x3c < 0xf) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_113812158);
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  else {
    uVar1 = 0;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_113812160));
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113812168) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_113812168);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113812170) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_113812170);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113812178) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_113812178);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113812180) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_113812180);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  uVar7 = (ulong)*(byte *)(unaff_x20 + _DAT_113812188);
  __ss6HasherV8_combineyys5UInt8VF(uVar7);
  if (*(long *)(unaff_x20 + _DAT_113812190) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000104843f48();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  fVar12 = 0.0;
  if (*(float *)(unaff_x20 + _DAT_113812198) != 0.0) {
    fVar12 = *(float *)(unaff_x20 + _DAT_113812198);
  }
  uVar7 = (ulong)(uint)fVar12;
  __ss6HasherV8_combineyys6UInt32VF(uVar7);
  if (*(long *)(unaff_x20 + _DAT_1138121a0) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x0001047b483c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar7);
  }
  if (((undefined8 *)(unaff_x20 + _DAT_1138121a8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_1138121a8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2);
    uVar1 = uVar2;
    func_0x000107c44c3c();
    _objc_release(uVar2);
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138121b0));
  __ss6HasherV8_combineyySuF(*(undefined8 *)(unaff_x20 + _DAT_1138121b8));
  dVar13 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_1138121c0) != 0.0) {
    dVar13 = *(double *)(unaff_x20 + _DAT_1138121c0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar13);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103de78a4; end: 103de8a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103de78a4(undefined8 param_1)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  ulong uVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  undefined8 uVar21;
  long lVar22;
  uint uVar23;
  undefined1 *puVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_180 [12];
  uint uStack_174;
  double dStack_170;
  double dStack_168;
  double dStack_160;
  long lStack_158;
  double dStack_150;
  long lStack_148;
  uint uStack_13c;
  undefined1 *puStack_138;
  code *pcStack_130;
  long lStack_128;
  uint uStack_11c;
  uint uStack_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  long lStack_108;
  ulong uStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long alStack_c8 [5];
  
  lVar9 = unaff_x20;
  _swift_getObjectType();
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar22 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar22 + 0x40));
  puVar24 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar12 = 0x112d68090;
  func_0x0001000285a8(0x112d68090,&UNK_10da24400);
  uStack_d8 = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar12 - 8) + 0x40));
  lVar16 = (long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar14 - extraout_x12_00;
  lVar11 = 0x112d3bc20;
  func_0x0001000285a8(0x112d3bc20,&UNK_10d904ef0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar11 + -8) + 0x40));
  lVar11 = lVar19 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_f8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  lStack_e0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_02;
  lStack_f0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar11 - extraout_x12_03;
  uStack_e8 = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = uVar12 - extraout_x12_04;
  uStack_100 = uVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar12 - extraout_x12_05;
  FUN_103de8a10(param_1,alStack_c8,0x112d387f8,&UNK_10d902650);
  if (alStack_c8[3] == 0) {
    func_0x000103de8a58(alStack_c8,0x112d387f8,&UNK_10d902650);
    return 0;
  }
  plVar6 = &lStack_d0;
  _swift_dynamicCast(plVar6,alStack_c8,PTR___sypN_11034f1a8 + 8,lVar9,6);
  if (((ulong)plVar6 & 1) == 0) {
    return 0;
  }
  uVar13 = *(undefined8 *)(lStack_d0 + _DAT_1130107f8);
  uVar12 = ((undefined8 *)(lStack_d0 + _DAT_1130107f8))[1];
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_1130107f8);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_1130107f8))[1];
  puStack_138 = puVar24;
  lStack_128 = lVar16;
  lStack_108 = lVar22;
  if (uVar8 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_103de7b60;
    func_0x000100de78a0(uVar13,uVar12);
    func_0x000100de78a0(uVar13,uVar12);
    func_0x000100de78a0(uVar15,uVar8);
    uVar18 = uVar15;
    func_0x000100e25fcc(uVar15,uVar8,uVar13,uVar12);
    uStack_10c = (uint)uVar18;
    func_0x0001000b44c0(uVar13,uVar12);
    func_0x0001000b44c0(uVar13,uVar12);
    func_0x0001000b44c0(uVar15,uVar8);
    uStack_10c = uStack_10c ^ 1;
  }
  else if (uVar12 >> 0x3c < 0xf) {
LAB_103de7b60:
    func_0x000100de78a0(uVar13,uVar12);
    func_0x000100de78a0(uVar15,uVar8);
    func_0x0001000b44c0(uVar15,uVar8);
    func_0x0001000b44c0(uVar13,uVar12);
    uStack_10c = 1;
  }
  else {
    func_0x000100de78a0(uVar13,uVar12);
    func_0x000100de78a0(uVar15,uVar8);
    func_0x0001000b44c0(uVar15,uVar8);
    uStack_10c = 0;
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_113010800);
  if ((lVar9 == *(long *)(lStack_d0 + _DAT_113010800)) &&
     (((long *)(unaff_x20 + _DAT_113010800))[1] == ((long *)(lStack_d0 + _DAT_113010800))[1])) {
    uStack_110 = 0;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uStack_110 = (uint)lVar9 ^ 1;
  }
  lVar9 = ((long *)(unaff_x20 + _DAT_113010808))[1];
  lVar16 = ((long *)(lStack_d0 + _DAT_113010808))[1];
  uStack_114 = (uint)(lVar9 == 0 && lVar16 == 0);
  if ((lVar9 != 0) && (lVar16 != 0)) {
    lVar22 = *(long *)(unaff_x20 + _DAT_113010808);
    if ((lVar22 == *(long *)(lStack_d0 + _DAT_113010808)) && (lVar9 == lVar16)) {
      uStack_114 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_114 = (uint)lVar22;
    }
  }
  lVar9 = ((long *)(unaff_x20 + _DAT_113010810))[1];
  lVar16 = ((long *)(lStack_d0 + _DAT_113010810))[1];
  uStack_118 = (uint)(lVar9 == 0 && lVar16 == 0);
  if ((lVar9 != 0) && (lVar16 != 0)) {
    lVar22 = *(long *)(unaff_x20 + _DAT_113010810);
    if ((lVar22 == *(long *)(lStack_d0 + _DAT_113010810)) && (lVar9 == lVar16)) {
      uStack_118 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_118 = (uint)lVar22;
    }
  }
  lVar9 = ((long *)(unaff_x20 + _DAT_113010818))[1];
  lVar16 = ((long *)(lStack_d0 + _DAT_113010818))[1];
  uStack_11c = (uint)(lVar9 == 0 && lVar16 == 0);
  if ((lVar9 != 0) && (lVar16 != 0)) {
    lVar22 = *(long *)(unaff_x20 + _DAT_113010818);
    if ((lVar22 == *(long *)(lStack_d0 + _DAT_113010818)) && (lVar9 == lVar16)) {
      uStack_11c = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uStack_11c = (uint)lVar22;
    }
  }
  lVar16 = _DAT_113812110;
  FUN_103de8a10(lStack_d0 + _DAT_113812110,lVar11,0x112d3bc20,&UNK_10d904ef0);
  lVar9 = (long)*(int *)(uStack_d8 + 0x30);
  FUN_103de8a10(unaff_x20 + lVar16,lVar19,0x112d3bc20,&UNK_10d904ef0);
  FUN_103de8a10(lVar11,lVar19 + lVar9,0x112d3bc20,&UNK_10d904ef0);
  pcVar17 = *(code **)(lStack_108 + 0x30);
  lVar16 = lVar19;
  (*pcVar17)(lVar19,1,lVar5);
  uVar12 = uStack_100;
  pcStack_130 = pcVar17;
  if ((int)lVar16 == 1) {
    func_0x000103de8a58(lVar11,0x112d3bc20,&UNK_10d904ef0);
    lVar9 = lVar19 + lVar9;
    (*pcVar17)(lVar9,1,lVar5);
    if ((int)lVar9 != 1) {
LAB_103de7e98:
      func_0x000103de8a58(lVar19,0x112d68090,&UNK_10da24400);
      uVar10 = 1;
      goto LAB_103de7f50;
    }
    func_0x000103de8a58(lVar19,0x112d3bc20,&UNK_10d904ef0);
    uStack_100 = uStack_100 & 0xffffffff00000000;
  }
  else {
    FUN_103de8a10(lVar19,uStack_100,0x112d3bc20,&UNK_10d904ef0);
    lVar16 = lVar19 + lVar9;
    (*pcVar17)(lVar16,1,lVar5);
    lVar22 = lStack_108;
    puVar24 = puStack_138;
    if ((int)lVar16 == 1) {
      func_0x000103de8a58(lVar11,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lStack_108 + 8))(uVar12,lVar5);
      goto LAB_103de7e98;
    }
    puVar7 = puStack_138;
    (**(code **)(lStack_108 + 0x20))(puStack_138,lVar19 + lVar9,lVar5);
    func_0x000101207ba8();
    uVar8 = uVar12;
    __sSQ2eeoiySbx_xtFZTj(uVar12,puVar24,lVar5,puVar7);
    pcVar17 = *(code **)(lVar22 + 8);
    (*pcVar17)(puVar24,lVar5);
    func_0x000103de8a58(lVar11,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar17)(uVar12,lVar5);
    func_0x000103de8a58(lVar19,0x112d3bc20,&UNK_10d904ef0);
    uVar10 = (uint)uVar8 ^ 1;
LAB_103de7f50:
    uStack_100 = CONCAT44(uStack_100._4_4_,uVar10);
  }
  uVar12 = uStack_e8;
  lVar16 = lStack_128;
  lVar9 = _DAT_113812118;
  FUN_103de8a10(lStack_d0 + _DAT_113812118,uStack_e8,0x112d3bc20,&UNK_10d904ef0);
  lVar11 = (long)*(int *)(uStack_d8 + 0x30);
  FUN_103de8a10(unaff_x20 + lVar9,lVar14,0x112d3bc20,&UNK_10d904ef0);
  FUN_103de8a10(uVar12,lVar14 + lVar11,0x112d3bc20,&UNK_10d904ef0);
  pcVar17 = pcStack_130;
  lVar19 = lVar14;
  (*pcStack_130)(lVar14,1,lVar5);
  lVar9 = lStack_f0;
  if ((int)lVar19 == 1) {
    func_0x000103de8a58(uVar12,0x112d3bc20,&UNK_10d904ef0);
    lVar11 = lVar14 + lVar11;
    (*pcVar17)(lVar11,1,lVar5);
    lVar9 = lStack_e0;
    if ((int)lVar11 == 1) {
      func_0x000103de8a58(lVar14,0x112d3bc20,&UNK_10d904ef0);
      uStack_e8 = uStack_e8 & 0xffffffff00000000;
    }
    else {
LAB_103de809c:
      lVar9 = lStack_e0;
      func_0x000103de8a58(lVar14,0x112d68090,&UNK_10da24400);
      uStack_e8 = CONCAT44(uStack_e8._4_4_,1);
    }
  }
  else {
    FUN_103de8a10(lVar14,lStack_f0,0x112d3bc20,&UNK_10d904ef0);
    lVar19 = lVar14 + lVar11;
    (*pcVar17)(lVar19,1,lVar5);
    lVar22 = lStack_108;
    puVar24 = puStack_138;
    if ((int)lVar19 == 1) {
      func_0x000103de8a58(uVar12,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lStack_108 + 8))(lVar9,lVar5);
      goto LAB_103de809c;
    }
    puVar7 = puStack_138;
    (**(code **)(lStack_108 + 0x20))(puStack_138,lVar14 + lVar11,lVar5);
    func_0x000101207ba8();
    __sSQ2eeoiySbx_xtFZTj(lVar9,puVar24,lVar5,puVar7);
    lStack_128 = CONCAT44(lStack_128._4_4_,(int)lVar9);
    pcVar20 = *(code **)(lVar22 + 8);
    (*pcVar20)(puVar24,lVar5);
    func_0x000103de8a58(uVar12,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar20)(lStack_f0,lVar5);
    func_0x000103de8a58(lVar14,0x112d3bc20,&UNK_10d904ef0);
    uStack_e8 = CONCAT44(uStack_e8._4_4_,(uint)lStack_128) ^ 1;
    lVar9 = lStack_e0;
  }
  lVar14 = _DAT_113812120;
  FUN_103de8a10(lStack_d0 + _DAT_113812120,lVar9,0x112d3bc20,&UNK_10d904ef0);
  lVar11 = (long)*(int *)(uStack_d8 + 0x30);
  FUN_103de8a10(unaff_x20 + lVar14,lVar16,0x112d3bc20,&UNK_10d904ef0);
  FUN_103de8a10(lVar9,lVar16 + lVar11,0x112d3bc20,&UNK_10d904ef0);
  lVar19 = lVar16;
  (*pcVar17)(lVar16,1,lVar5);
  lVar14 = lStack_f8;
  if ((int)lVar19 == 1) {
    func_0x000103de8a58(lVar9,0x112d3bc20,&UNK_10d904ef0);
    lVar11 = lVar16 + lVar11;
    (*pcVar17)(lVar11,1,lVar5);
    if ((int)lVar11 != 1) {
LAB_103de828c:
      func_0x000103de8a58(lVar16,0x112d68090,&UNK_10da24400);
      uVar10 = 1;
      goto LAB_103de8340;
    }
    func_0x000103de8a58(lVar16,0x112d3bc20,&UNK_10d904ef0);
    uStack_d8 = uStack_d8 & 0xffffffff00000000;
  }
  else {
    FUN_103de8a10(lVar16,lStack_f8,0x112d3bc20,&UNK_10d904ef0);
    lVar19 = lVar16 + lVar11;
    (*pcVar17)(lVar19,1,lVar5);
    lVar22 = lStack_108;
    puVar24 = puStack_138;
    if ((int)lVar19 == 1) {
      func_0x000103de8a58(lVar9,0x112d3bc20,&UNK_10d904ef0);
      (**(code **)(lStack_108 + 8))(lVar14,lVar5);
      goto LAB_103de828c;
    }
    puVar7 = puStack_138;
    (**(code **)(lStack_108 + 0x20))(puStack_138,lVar16 + lVar11,lVar5);
    func_0x000101207ba8();
    lVar11 = lVar14;
    __sSQ2eeoiySbx_xtFZTj(lVar14,puVar24,lVar5,puVar7);
    pcVar17 = *(code **)(lVar22 + 8);
    (*pcVar17)(puVar24,lVar5);
    func_0x000103de8a58(lVar9,0x112d3bc20,&UNK_10d904ef0);
    (*pcVar17)(lVar14,lVar5);
    func_0x000103de8a58(lVar16,0x112d3bc20,&UNK_10d904ef0);
    uVar10 = (uint)lVar11 ^ 1;
LAB_103de8340:
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar10);
  }
  lStack_e0 = CONCAT44(lStack_e0._4_4_,*(undefined4 *)(unaff_x20 + _DAT_113812128));
  lStack_f0 = CONCAT44(lStack_f0._4_4_,*(undefined4 *)(lStack_d0 + _DAT_113812128));
  if (*(long *)(unaff_x20 + _DAT_113812130) == 0) {
    lStack_f8 = CONCAT44(lStack_f8._4_4_,(uint)(*(long *)(lStack_d0 + _DAT_113812130) == 0));
  }
  else {
    lVar11 = *(long *)(lStack_d0 + _DAT_113812130);
    if (lVar11 == 0) {
      lVar9 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar9 = 0;
      func_0x00010481c348();
    }
    alStack_c8[0] = lVar11;
    alStack_c8[3] = lVar9;
    _objc_retain(lVar11);
    uVar3 = SUB84(alStack_c8,0);
    func_0x00010481b7a0();
    lStack_f8 = CONCAT44(lStack_f8._4_4_,uVar3);
    func_0x000103de8a58(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  if (*(long *)(unaff_x20 + _DAT_113812138) == 0) {
    lStack_108 = CONCAT44(lStack_108._4_4_,(uint)(*(long *)(lStack_d0 + _DAT_113812138) == 0));
  }
  else {
    lVar11 = *(long *)(lStack_d0 + _DAT_113812138);
    if (lVar11 == 0) {
      lVar9 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar9 = 0;
      func_0x000104821150();
    }
    alStack_c8[0] = lVar11;
    alStack_c8[3] = lVar9;
    _objc_retain(lVar11);
    uVar3 = SUB84(alStack_c8,0);
    func_0x00010481ca0c();
    lStack_108 = CONCAT44(lStack_108._4_4_,uVar3);
    func_0x000103de8a58(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  lVar11 = ((long *)(unaff_x20 + _DAT_113812140))[1];
  lVar9 = ((long *)(lStack_d0 + _DAT_113812140))[1];
  uVar10 = (uint)(lVar11 == 0 && lVar9 == 0);
  if ((lVar11 != 0) && (lVar9 != 0)) {
    lVar5 = *(long *)(unaff_x20 + _DAT_113812140);
    if ((lVar5 == *(long *)(lStack_d0 + _DAT_113812140)) && (lVar11 == lVar9)) {
      uVar10 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar10 = (uint)lVar5;
    }
  }
  lStack_128 = CONCAT44(lStack_128._4_4_,uVar10);
  lVar11 = ((long *)(unaff_x20 + _DAT_113812148))[1];
  lVar9 = ((long *)(lStack_d0 + _DAT_113812148))[1];
  uVar10 = (uint)(lVar11 == 0 && lVar9 == 0);
  if ((lVar11 != 0) && (lVar9 != 0)) {
    lVar5 = *(long *)(unaff_x20 + _DAT_113812148);
    if ((lVar5 == *(long *)(lStack_d0 + _DAT_113812148)) && (lVar11 == lVar9)) {
      uVar10 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar10 = (uint)lVar5;
    }
  }
  pcStack_130 = (code *)CONCAT44(pcStack_130._4_4_,uVar10);
  lVar11 = ((long *)(unaff_x20 + _DAT_113812150))[1];
  lVar9 = ((long *)(lStack_d0 + _DAT_113812150))[1];
  uVar10 = (uint)(lVar11 == 0 && lVar9 == 0);
  if ((lVar11 != 0) && (lVar9 != 0)) {
    lVar5 = *(long *)(unaff_x20 + _DAT_113812150);
    if ((lVar5 == *(long *)(lStack_d0 + _DAT_113812150)) && (lVar11 == lVar9)) {
      uVar10 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar10 = (uint)lVar5;
    }
  }
  uVar13 = *(undefined8 *)(lStack_d0 + _DAT_113812158);
  uVar12 = ((undefined8 *)(lStack_d0 + _DAT_113812158))[1];
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_113812158);
  uVar8 = ((undefined8 *)(unaff_x20 + _DAT_113812158))[1];
  puStack_138 = (undefined1 *)CONCAT44(puStack_138._4_4_,uVar10);
  if (uVar8 >> 0x3c < 0xf) {
    if (uVar12 >> 0x3c < 0xf) {
      func_0x000100de78a0(uVar13,uVar12);
      func_0x000100de78a0(uVar13,uVar12);
      func_0x000100de78a0(uVar15,uVar8);
      uVar18 = uVar15;
      func_0x000100e25fcc(uVar15,uVar8,uVar13,uVar12);
      func_0x0001000b44c0(uVar13,uVar12);
      func_0x0001000b44c0(uVar13,uVar12);
      func_0x0001000b44c0(uVar15,uVar8);
      uStack_13c = (uint)uVar18 ^ 1;
      goto LAB_103de8664;
    }
  }
  else if (0xe < uVar12 >> 0x3c) {
    func_0x000100de78a0(uVar13,uVar12);
    func_0x000100de78a0(uVar15,uVar8);
    func_0x0001000b44c0(uVar15,uVar8);
    uStack_13c = 0;
    goto LAB_103de8664;
  }
  func_0x000100de78a0(uVar13,uVar12);
  func_0x000100de78a0(uVar15,uVar8);
  func_0x0001000b44c0(uVar15,uVar8);
  func_0x0001000b44c0(uVar13,uVar12);
  uStack_13c = 1;
LAB_103de8664:
  lStack_148 = *(long *)(unaff_x20 + _DAT_113812160);
  lStack_158 = *(long *)(lStack_d0 + _DAT_113812160);
  dStack_150 = *(double *)(unaff_x20 + _DAT_113812168);
  dStack_160 = *(double *)(lStack_d0 + _DAT_113812168);
  dStack_168 = *(double *)(unaff_x20 + _DAT_113812170);
  dStack_170 = *(double *)(lStack_d0 + _DAT_113812170);
  dVar29 = *(double *)(unaff_x20 + _DAT_113812178);
  dVar30 = *(double *)(lStack_d0 + _DAT_113812178);
  dVar31 = *(double *)(unaff_x20 + _DAT_113812180);
  dVar32 = *(double *)(lStack_d0 + _DAT_113812180);
  uStack_174 = (uint)*(byte *)(unaff_x20 + _DAT_113812188);
  bVar2 = *(byte *)(lStack_d0 + _DAT_113812188);
  if (*(long *)(unaff_x20 + _DAT_113812190) == 0) {
    uVar10 = (uint)(*(long *)(lStack_d0 + _DAT_113812190) == 0);
  }
  else {
    lVar11 = *(long *)(lStack_d0 + _DAT_113812190);
    if (lVar11 == 0) {
      lVar9 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar9 = 0;
      func_0x000104846384();
    }
    alStack_c8[0] = lVar11;
    alStack_c8[3] = lVar9;
    _objc_retain(lVar11);
    plVar6 = alStack_c8;
    func_0x00010484433c(plVar6);
    uVar10 = (uint)plVar6;
    func_0x000103de8a58(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  fVar25 = *(float *)(unaff_x20 + _DAT_113812198);
  fVar26 = *(float *)(lStack_d0 + _DAT_113812198);
  if (*(long *)(unaff_x20 + _DAT_1138121a0) == 0) {
    uVar4 = (uint)(*(long *)(lStack_d0 + _DAT_1138121a0) == 0);
  }
  else {
    lVar11 = *(long *)(lStack_d0 + _DAT_1138121a0);
    if (lVar11 == 0) {
      lVar9 = 0;
      alStack_c8[1] = 0;
      alStack_c8[2] = 0;
    }
    else {
      lVar9 = 0;
      func_0x0001047b5e44();
    }
    alStack_c8[0] = lVar11;
    alStack_c8[3] = lVar9;
    _objc_retain(lVar11);
    plVar6 = alStack_c8;
    func_0x0001047b4ab4(plVar6);
    uVar4 = (uint)plVar6;
    func_0x000103de8a58(alStack_c8,0x112d387f8,&UNK_10d902650);
  }
  lVar11 = ((long *)(unaff_x20 + _DAT_1138121a8))[1];
  lVar9 = ((long *)(lStack_d0 + _DAT_1138121a8))[1];
  uVar23 = (uint)(lVar11 == 0 && lVar9 == 0);
  if ((lVar11 != 0) && (lVar9 != 0)) {
    lVar5 = *(long *)(unaff_x20 + _DAT_1138121a8);
    if ((lVar5 == *(long *)(lStack_d0 + _DAT_1138121a8)) && (lVar11 == lVar9)) {
      uVar23 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar23 = (uint)lVar5;
    }
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_1138121b0);
  uVar15 = *(undefined8 *)(lStack_d0 + _DAT_1138121b0);
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_1138121b8);
  uVar21 = *(undefined8 *)(lStack_d0 + _DAT_1138121b8);
  dVar27 = *(double *)(unaff_x20 + _DAT_1138121c0);
  dVar28 = *(double *)(lStack_d0 + _DAT_1138121c0);
  _objc_release(lStack_d0);
  uVar1 = 0;
  if ((int)uVar13 == (int)uVar15) {
    uVar1 = uVar10 & ((uStack_10c | uStack_110 | uStack_114 ^ 1 | uStack_118 ^ 1 | uStack_11c ^ 1 |
                       (uint)uStack_100 | (uint)uStack_e8 | (uint)uStack_d8 |
                       (uint)((int)lStack_e0 != (int)lStack_f0) | (uint)lStack_f8 ^ 1 |
                       (uint)lStack_108 ^ 1 | (uint)lStack_128 ^ 1 | (uint)pcStack_130 ^ 1 |
                       (uint)puStack_138 ^ 1 |
                       uStack_13c | lStack_148 != lStack_158 | (uint)(dStack_150 != dStack_160) |
                       (uint)(dStack_168 != dStack_170) | (uint)(dVar29 != dVar30) |
                       (uint)(dVar31 != dVar32) | uStack_174 ^ bVar2) ^ 0xffffffff) &
            fVar25 == fVar26 & uVar4 & uVar23;
  }
  uVar10 = 0;
  if ((int)uVar18 == (int)uVar21) {
    uVar10 = uVar1;
  }
  if (dVar27 == dVar28) {
    return uVar10;
  }
  return 0;
}



/* Entry: 103de8a10; end: 103de8a97;  */

undefined8 FUN_103de8a10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103de8a98; end: 103de8b27; -[SCAdRenderDataParserScope isEqual:] */

uint FUN_103de8a98(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103de78a4(&uStack_40);
  _objc_release(param_1);
  func_0x000103de8a58(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103de8b28; end: 103de8b2b; -[SCAdRenderDataParserScope copyWithZone:] */

void FUN_103de8b28(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103de8b2c; end: 103de8bb7; -[SCAdRenderDataParserScope description] */

void FUN_103de8b2c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103ddeef8();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  _objc_retain(param_1);
  FUN_103de8bb8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000103de70f4(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      FUN_103ddeef8);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103de8bb8; end: 103de90cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de8bb8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [352];
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
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined8 uStack_87;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_1130107f8);
  uVar15 = ((undefined8 *)(param_2 + _DAT_1130107f8))[1];
  *param_1 = uVar6;
  param_1[1] = uVar15;
  uVar9 = ((undefined8 *)(param_2 + _DAT_113010800))[1];
  param_1[2] = *(undefined8 *)(param_2 + _DAT_113010800);
  param_1[3] = uVar9;
  puVar1 = (undefined8 *)(param_2 + _DAT_113010808);
  uVar8 = puVar1[1];
  uVar10 = *puVar1;
  puVar2 = (undefined8 *)(param_2 + _DAT_113010810);
  uVar7 = puVar2[1];
  uVar14 = puVar2[1];
  uVar13 = *puVar2;
  param_1[5] = puVar1[1];
  param_1[4] = uVar10;
  param_1[7] = uVar14;
  param_1[6] = uVar13;
  puVar1 = (undefined8 *)(param_2 + _DAT_113010818);
  uVar10 = puVar1[1];
  uVar13 = *puVar1;
  param_1[9] = puVar1[1];
  param_1[8] = uVar13;
  lVar11 = _DAT_113812110;
  lVar5 = 0;
  FUN_103ddeef8();
  FUN_103de8a10(param_2 + lVar11,(long)param_1 + (long)*(int *)(lVar5 + 0x24),0x112d3bc20,
                &UNK_10d904ef0);
  FUN_103de8a10(param_2 + _DAT_113812118,(long)param_1 + (long)*(int *)(lVar5 + 0x28),0x112d3bc20,
                &UNK_10d904ef0);
  FUN_103de8a10(param_2 + _DAT_113812120,(long)param_1 + (long)*(int *)(lVar5 + 0x2c),0x112d3bc20,
                &UNK_10d904ef0);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30)) =
       *(undefined8 *)(param_2 + _DAT_113812128);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x34));
  lVar11 = *(long *)(param_2 + _DAT_113812130);
  if (lVar11 == 0) {
    puVar1[1] = 1;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[2] = 0;
    func_0x000100de78a0(uVar6,uVar15);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar7);
  }
  else {
    func_0x000100de78a0(uVar6,uVar15);
    _swift_bridgeObjectRetain(uVar10);
    _objc_retain(lVar11);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar7);
    func_0x00010481b5d0(&uStack_2c0,lVar11);
    puVar1[1] = uStack_2b8;
    *puVar1 = uStack_2c0;
    puVar1[3] = uStack_2a8;
    puVar1[2] = uStack_2b0;
    puVar1[4] = uStack_2a0;
  }
  lVar11 = (long)*(int *)(lVar5 + 0x38);
  if (*(long *)(param_2 + _DAT_113812138) == 0) {
    func_0x000102d123c4(auStack_298);
    _memcpy((long)param_1 + lVar11,auStack_298,0x160);
  }
  else {
    _objc_retain();
    func_0x00010481c368(auStack_298);
    _memcpy((long)param_1 + lVar11,auStack_298,0x160);
    func_0x000102d123f8((long)param_1 + lVar11);
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_113812140);
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x3c));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  puVar2 = (undefined8 *)(param_2 + _DAT_113812148);
  uVar6 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar6;
  puVar3 = (undefined8 *)(param_2 + _DAT_113812150);
  uVar6 = *puVar3;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x44));
  puVar4[1] = puVar3[1];
  *puVar4 = uVar6;
  uVar6 = *(undefined8 *)(param_2 + _DAT_113812158);
  uVar15 = ((undefined8 *)(param_2 + _DAT_113812158))[1];
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x48));
  *puVar4 = uVar6;
  puVar4[1] = uVar15;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x4c)) =
       *(undefined8 *)(param_2 + _DAT_113812160);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x50)) =
       *(undefined8 *)(param_2 + _DAT_113812168);
  uVar9 = puVar1[1];
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x54)) =
       *(undefined8 *)(param_2 + _DAT_113812170);
  uVar7 = puVar2[1];
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x58)) =
       *(undefined8 *)(param_2 + _DAT_113812178);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x5c)) =
       *(undefined8 *)(param_2 + _DAT_113812180);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x60)) =
       *(undefined1 *)(param_2 + _DAT_113812188);
  uVar8 = puVar3[1];
  lVar12 = (long)*(int *)(lVar5 + 100);
  lVar11 = *(long *)(param_2 + _DAT_113812190);
  if (lVar11 == 0) {
    lVar11 = 0;
    func_0x000100b91fbc();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))((long)param_1 + lVar12,1,1,lVar11);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar7);
    func_0x000100de78a0(uVar6,uVar15);
  }
  else {
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(uVar7);
    func_0x000100de78a0(uVar6,uVar15);
    _objc_retain(lVar11);
    func_0x000104846048((long)param_1 + lVar12);
    lVar11 = 0;
    func_0x000100b91fbc();
    (**(code **)(*(long *)(lVar11 + -8) + 0x38))((long)param_1 + lVar12,0,1,lVar11);
  }
  *(undefined4 *)((long)param_1 + (long)*(int *)(lVar5 + 0x68)) =
       *(undefined4 *)(param_2 + _DAT_113812198);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x6c));
  if (*(long *)(param_2 + _DAT_1138121a0) == 0) {
    func_0x0001015415ac(&uStack_138);
    puVar1[0x11] = uStack_b0;
    puVar1[0x10] = uStack_b8;
    puVar1[0x13] = uStack_a0;
    puVar1[0x12] = uStack_a8;
    puVar1[0x15] = CONCAT71(uStack_8f,uStack_90);
    puVar1[0x14] = uStack_98;
    *(undefined8 *)((long)puVar1 + 0xb1) = uStack_87;
    *(ulong *)((long)puVar1 + 0xa9) = CONCAT17(uStack_88,uStack_8f);
    puVar1[9] = uStack_f0;
    puVar1[8] = uStack_f8;
    puVar1[0xb] = uStack_e0;
    puVar1[10] = uStack_e8;
    puVar1[0xd] = uStack_d0;
    puVar1[0xc] = uStack_d8;
    puVar1[0xf] = uStack_c0;
    puVar1[0xe] = uStack_c8;
    puVar1[1] = uStack_130;
    *puVar1 = uStack_138;
    puVar1[3] = uStack_120;
    puVar1[2] = uStack_128;
    puVar1[5] = uStack_110;
    puVar1[4] = uStack_118;
    puVar1[7] = uStack_100;
    puVar1[6] = uStack_108;
  }
  else {
    _objc_retain();
    func_0x0001047b4100(&uStack_138);
    puVar1[0x11] = uStack_b0;
    puVar1[0x10] = uStack_b8;
    puVar1[0x13] = uStack_a0;
    puVar1[0x12] = uStack_a8;
    puVar1[0x15] = CONCAT71(uStack_8f,uStack_90);
    puVar1[0x14] = uStack_98;
    *(undefined8 *)((long)puVar1 + 0xb1) = uStack_87;
    *(ulong *)((long)puVar1 + 0xa9) = CONCAT17(uStack_88,uStack_8f);
    puVar1[9] = uStack_f0;
    puVar1[8] = uStack_f8;
    puVar1[0xb] = uStack_e0;
    puVar1[10] = uStack_e8;
    puVar1[0xd] = uStack_d0;
    puVar1[0xc] = uStack_d8;
    puVar1[0xf] = uStack_c0;
    puVar1[0xe] = uStack_c8;
    puVar1[1] = uStack_130;
    *puVar1 = uStack_138;
    puVar1[3] = uStack_120;
    puVar1[2] = uStack_128;
    puVar1[5] = uStack_110;
    puVar1[4] = uStack_118;
    puVar1[7] = uStack_100;
    puVar1[6] = uStack_108;
    FUN_103de92cc(puVar1);
  }
  puVar1 = (undefined8 *)(param_2 + _DAT_1138121a8);
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x70));
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x74)) =
       *(undefined8 *)(param_2 + _DAT_1138121b0);
  uVar6 = puVar1[1];
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x78)) =
       *(undefined8 *)(param_2 + _DAT_1138121b8);
  uVar15 = *(undefined8 *)(param_2 + _DAT_1138121c0);
  _swift_bridgeObjectRetain(uVar6);
  _objc_release(param_2);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x7c)) = uVar15;
  return;
}



/* Entry: 103de90d0; end: 103de914b; -[SCAdRenderDataParserScope init] */

void FUN_103de90d0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdRenderDataParserServices/AdRenderDataParserScopeWrapper.swift",0x3f,2,0xd7,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103de9118);
  (*pcVar1)();
}



/* Entry: 103de914c; end: 103de92cb; -[SCAdRenderDataParserScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de914c(long param_1)

{
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_1130107f8),
                      ((undefined8 *)(param_1 + _DAT_1130107f8))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010800 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010808 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010810 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010818 + 8));
  func_0x000103de8a58(param_1 + _DAT_113812110,0x112d3bc20,&UNK_10d904ef0);
  func_0x000103de8a58(param_1 + _DAT_113812118,0x112d3bc20,&UNK_10d904ef0);
  func_0x000103de8a58(param_1 + _DAT_113812120,0x112d3bc20,&UNK_10d904ef0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113812130));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113812138));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113812140 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113812148 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113812150 + 8));
  func_0x0001000b44c0(*(undefined8 *)(param_1 + _DAT_113812158),
                      ((undefined8 *)(param_1 + _DAT_113812158))[1]);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113812190));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1138121a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1138121a8 + 8))
  ;
  return;
}



/* Entry: 103de92cc; end: 103de92d7;  */

void FUN_103de92cc(void)

{
  return;
}



/* Entry: 103de92d8; end: 103de930f;  */

void FUN_103de92d8(undefined8 param_1)

{
  if (lRam0000000113010848 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7c51dc);
  return;
}



/* Entry: 103de9310; end: 103de93f7;  */

void FUN_103de9310(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
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
  
  puStack_110 = &UNK_10dc96650;
  puStack_108 = &UNK_10dc96668;
  puStack_100 = &UNK_10dc96680;
  puStack_f8 = &UNK_10dc96680;
  puStack_f0 = &UNK_10dc96680;
  lVar1 = 0x13f;
  func_0x0001000b88b8();
  if (param_2 < 0x40) {
    lStack_e8 = *(long *)(lVar1 + -8) + 0x40;
    puStack_d0 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_c8 = &UNK_10dc96698;
    puStack_c0 = &UNK_10dc96698;
    puStack_b8 = &UNK_10dc96680;
    puStack_b0 = &UNK_10dc96680;
    puStack_a8 = &UNK_10dc96680;
    puStack_a0 = &UNK_10dc96650;
    puStack_70 = &UNK_10dc966b0;
    puStack_60 = PTR___sBi32_WV_11034d668 + 0x40;
    puStack_68 = &UNK_10dc96698;
    puStack_58 = &UNK_10dc96698;
    puStack_50 = &UNK_10dc96680;
    lStack_e0 = lStack_e8;
    lStack_d8 = lStack_e8;
    puStack_98 = puStack_d0;
    puStack_90 = puStack_d0;
    puStack_88 = puStack_d0;
    puStack_80 = puStack_d0;
    puStack_78 = puStack_d0;
    puStack_48 = puStack_d0;
    puStack_40 = puStack_d0;
    puStack_38 = puStack_d0;
    _swift_updateClassMetadata2(param_1,0x100,0x1c,&puStack_110,param_1 + 0x50);
  }
  return;
}



/* Entry: 103de93f8; end: 103de9407; -[SCAdSnapBottomMediaDataParserScope skAdNetworkAttribution] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de93f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010858));
  return;
}



/* Entry: 103de9408; end: 103de9453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9408(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010858) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103de9454; end: 103de94db; -[SCAdSnapBottomMediaDataParserScope initWithSkAdNetworkAttribution:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9454(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113010858) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103de94dc; end: 103de967b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103de94dc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _swift_getObjectType();
  lVar1 = 0;
  func_0x000100b91fbc();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar4 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar4 - extraout_x12;
  lVar2 = 0x112db39a8;
  func_0x0001000285a8(0x112db39a8,&UNK_10d95dd90);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar6 - extraout_x8_00;
  FUN_103de9874(param_1,lVar7,0x112db39a8,&UNK_10d95dd90);
  lVar2 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar1);
  puVar5 = (undefined1 *)0x0;
  if ((int)lVar2 != 1) {
    func_0x0001034c75b0(lVar7,lVar6);
    FUN_103de70b0(lVar6,puVar4);
    uVar3 = 0;
    func_0x000104846384(0);
    _objc_allocWithZone();
    func_0x000104843d30(puVar4,uVar3);
    FUN_103de967c(lVar6,&SUB_100b91fbc);
    puVar5 = puVar4;
  }
  *(undefined1 **)(unaff_x20 + _DAT_113010858) = puVar5;
  puVar5 = &stack0xffffffffffffff90;
  _objc_msgSendSuper2(puVar5,PTR_s_init_1125d9248);
  FUN_103de967c(param_1,0x103de4634);
  return puVar5;
}



/* Entry: 103de967c; end: 103de96b7;  */

undefined8 FUN_103de967c(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103de96b8; end: 103de9873; -[SCAdSnapBottomMediaDataParserScope hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103de96b8(long param_1)

{
  long lVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  lVar1 = param_1;
  if (*(long *)(param_1 + _DAT_113010858) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    func_0x000104843f48();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(lVar1);
  }
  __ss6HasherV8finalizeSiyF();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 103de9874; end: 103de98bb;  */

undefined8 FUN_103de9874(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103de98bc; end: 103de993b; -[SCAdSnapBottomMediaDataParserScope isEqual:] */

uint FUN_103de98bc(undefined8 param_1,undefined8 param_2,long param_3)

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
  func_0x000103de9754(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103de993c; end: 103de993f; -[SCAdSnapBottomMediaDataParserScope copyWithZone:] */

void FUN_103de993c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103de9940; end: 103de9a3b; -[SCAdSnapBottomMediaDataParserScope description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9940(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  func_0x000103de4634();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = *(long *)(param_1 + _DAT_113010858);
  if (lVar1 == 0) {
    lVar1 = 0;
    func_0x000100b91fbc();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _objc_retain(lVar1);
    func_0x000104846048(puVar2);
    lVar1 = 0;
    func_0x000100b91fbc();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,0,1,lVar1);
  }
  FUN_103de967c(puVar2,0x103de4634);
  _objc_release(param_1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103de9a3c; end: 103de9ab7; -[SCAdSnapBottomMediaDataParserScope init] */

void FUN_103de9a3c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdRenderDataParserServices/AdSnapBottomMediaDataParserScopeWrapper.swift",0x48,2,0x32,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103de9a84);
  (*pcVar1)();
}



/* Entry: 103de9ab8; end: 103de9ac7; -[SCAdSnapBottomMediaDataParserScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010858));
  return;
}



/* Entry: 103de9ac8; end: 103de9ae7;  */

void FUN_103de9ac8(void)

{
  _objc_opt_self(&PTR_PTR_11294d148);
  return;
}



/* Entry: 103de9ae8; end: 103de9af7; -[AdResponseProviderService adResponseProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9ae8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113010890));
  return;
}



/* Entry: 103de9af8; end: 103de9b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9af8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010888) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010890) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103de9b5c; end: 103de9bbb; -[AdResponseProviderService init] */

void FUN_103de9b5c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdResponseProviderService.AdResponseProviderService",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103de9b88);
  (*pcVar1)();
}



/* Entry: 103de9bbc; end: 103de9bf3; -[AdResponseProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9bbc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010888));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010890));
  return;
}



/* Entry: 103de9bf4; end: 103de9c03; -[AdTrackParserServices adTrackParser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130108c0));
  return;
}



/* Entry: 103de9c04; end: 103de9c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9c04(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130108c0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103de9c50; end: 103de9caf; -[AdTrackParserServices init] */

void FUN_103de9c50(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdTrackParserServices.AdTrackParserServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103de9c7c);
  (*pcVar1)();
}



/* Entry: 103de9cb0; end: 103de9cbf; -[AdTrackParserServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103de9cb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130108c0));
  return;
}



/* Entry: 103de9cc0; end: 103de9eb7;  */

long FUN_103de9cc0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103de9eb8; end: 103de9f3b;  */

void FUN_103de9eb8(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103de9f3c; end: 103de9f3f;  */

void FUN_103de9f3c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130108f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc967f0;
  _swift_getWitnessTable(&UNK_10dc967f0,&UNK_110712ef0);
  puRam00000001130108f0 = puVar1;
  return;
}



/* Entry: 103de9f40; end: 103de9f7f;  */

void FUN_103de9f40(void)

{
  undefined *puVar1;
  
  if (puRam00000001130108f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc967f0;
  _swift_getWitnessTable(&UNK_10dc967f0,&UNK_110712ef0);
  puRam00000001130108f0 = puVar1;
  return;
}



/* Entry: 103de9f80; end: 103de9f83;  */

void FUN_103de9f80(void)

{
  undefined *puVar1;
  
  if (puRam00000001130108f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96858;
  _swift_getWitnessTable(&UNK_10dc96858,&UNK_110712f80);
  puRam00000001130108f8 = puVar1;
  return;
}



/* Entry: 103de9f84; end: 103de9fc3;  */

void FUN_103de9f84(void)

{
  undefined *puVar1;
  
  if (puRam00000001130108f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96858;
  _swift_getWitnessTable(&UNK_10dc96858,&UNK_110712f80);
  puRam00000001130108f8 = puVar1;
  return;
}



/* Entry: 103de9fc4; end: 103dea29b;  */

int FUN_103de9fc4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103dea040;
        goto LAB_103dea024;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103dea024:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_103dea040:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103dea29c; end: 103dea2bb; -[_TtC20AppStoreInfoServices22SCAppStoreInfoServices appStoreInfoProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea29c(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113010900));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103dea2bc; end: 103dea307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea2bc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010900) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103dea308; end: 103dea367; -[_TtC20AppStoreInfoServices22SCAppStoreInfoServices init] */

void FUN_103dea308(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AppStoreInfoServices.SCAppStoreInfoServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dea334);
  (*pcVar1)();
}



/* Entry: 103dea368; end: 103dea377; -[_TtC20AppStoreInfoServices22SCAppStoreInfoServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113010900));
  return;
}



/* Entry: 103dea378; end: 103dea3ab; -[AdViewingHistoryTrackingServices viewingHistoryTracker] */

void FUN_103dea378(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010048fa14();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dea3ac; end: 103dea437; -[AdViewingHistoryTrackingServices setViewingHistoryTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010938);
  *(undefined8 *)(param_1 + _DAT_113010938) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103dea438; end: 103dea497; -[AdViewingHistoryTrackingServices init] */

void FUN_103dea438(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdViewingHistoryTrackingServices.AdViewingHistoryTrackingServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dea464);
  (*pcVar1)();
}



/* Entry: 103dea498; end: 103dea4cf; -[AdViewingHistoryTrackingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea498(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010930));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010938));
  return;
}



/* Entry: 103dea4d0; end: 103dea55b; -[_TtC37SponsoredSnapAdResponseParserServices37SponsoredSnapAdResponseParserServices setScSponsoredSnapAdResponseParser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea4d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010970);
  *(undefined8 *)(param_1 + _DAT_113010970) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103dea55c; end: 103dea5bb; -[_TtC37SponsoredSnapAdResponseParserServices37SponsoredSnapAdResponseParserServices init] */

void FUN_103dea55c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredSnapAdResponseParserServices.SponsoredSnapAdResponseParserServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dea588);
  (*pcVar1)();
}



/* Entry: 103dea5bc; end: 103dea5f3; -[_TtC37SponsoredSnapAdResponseParserServices37SponsoredSnapAdResponseParserServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea5bc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010968));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010970));
  return;
}



/* Entry: 103dea5f4; end: 103dea607;  */

bool FUN_103dea5f4(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103dea608; end: 103dea6b3;  */

void FUN_103dea608(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103dea6b4; end: 103dea6df;  */

void FUN_103dea6b4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103dea6e0; end: 103dea71f;  */

void FUN_103dea6e0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130109a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc969e0;
  _swift_getWitnessTable(&UNK_10dc969e0,&UNK_110713170);
  puRam00000001130109a0 = puVar1;
  return;
}



/* Entry: 103dea720; end: 103dea72f;  */

undefined1  [16] FUN_103dea720(void)

{
  return ZEXT816(0x110713170);
}



/* Entry: 103dea730; end: 103dea763; -[SponsoredSnapEUModalServices optInTracker] */

void FUN_103dea730(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103dea764();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103dea764; end: 103dea7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103dea764(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130109b0;
  lVar2 = *(long *)(unaff_x20 + _DAT_1130109b0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + _DAT_1130109a8));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  return lVar2;
}



/* Entry: 103dea7d8; end: 103dea863; -[SponsoredSnapEUModalServices setOptInTracker:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea7d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130109b0);
  *(undefined8 *)(param_1 + _DAT_1130109b0) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103dea864; end: 103dea8c3; -[SponsoredSnapEUModalServices init] */

void FUN_103dea864(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredSnapEUModalServices.SponsoredSnapEUModalServices",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103dea890);
  (*pcVar1)();
}



/* Entry: 103dea8c4; end: 103dea8fb; -[SponsoredSnapEUModalServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103dea8c4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130109a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130109b0));
  return;
}



/* Entry: 103dea8fc; end: 103deab2f;  */

long FUN_103dea8fc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103deab30; end: 103deab7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deab30(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130109e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103deab7c; end: 103deabdb; -[SponsoredSnapFeedRequestMetadataServices init] */

void FUN_103deab7c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredSnapFeedRequestMetadataServices.SponsoredSnapFeedRequestMetadataServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103deaba8);
  (*pcVar1)();
}



/* Entry: 103deabdc; end: 103deabeb; -[SponsoredSnapFeedRequestMetadataServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deabdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130109e0));
  return;
}



/* Entry: 103deabec; end: 103deac47; -[SCSponsoredSnapAdRequestMetadata protoAdRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deabec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010a10);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113010a10))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103deac48; end: 103deac93; -[SCSponsoredSnapAdRequestMetadata adServerChatUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deac48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113010a18);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113010a18))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103deac94; end: 103deace7; -[SCSponsoredSnapAdRequestMetadata headers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deac94(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113010a20);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103deace8; end: 103deadff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deace8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010a10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010a18);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113010a20) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103deae00; end: 103deaf0b; -[SCSponsoredSnapAdRequestMetadata initWithProtoAdRequest:adServerChatUrl:headers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deae00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = param_3;
  _objc_retain(param_3);
  _objc_retain();
  _objc_retain();
  __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
  uVar5 = param_2;
  _objc_release(uVar3);
  uVar3 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_4);
  uVar4 = param_5;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  _objc_release(param_5);
  puVar1 = (undefined8 *)(param_1 + _DAT_113010a10);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_113010a18);
  *puVar1 = uVar3;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_1 + _DAT_113010a20) = uVar4;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103deaf0c; end: 103deafc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103deaf0c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [16];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_allocWithZone();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010a10);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113010a18);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_113010a20) = uStack_58;
  func_0x0001006e36f4(&uStack_40,auStack_68);
  func_0x000100402194(&uStack_50,auStack_68);
  FUN_103deafc8(&uStack_58,auStack_68);
  puVar2 = auStack_78;
  _objc_msgSendSuper2(puVar2,PTR_s_init_1125d9248);
  func_0x000103deb018(param_1);
  return puVar2;
}



/* Entry: 103deafc8; end: 103deb04b;  */

undefined8 FUN_103deafc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d550a0;
  func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103deb04c; end: 103deb04f; -[SCSponsoredSnapAdRequestMetadata copyWithZone:] */

void FUN_103deb04c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103deb050; end: 103deb0df; -[SCSponsoredSnapAdRequestMetadata description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb050(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010a10);
  uVar2 = ((undefined8 *)(param_1 + _DAT_113010a10))[1];
  uVar3 = *(undefined8 *)(param_1 + _DAT_113010a18 + 8);
  uVar4 = *(undefined8 *)(param_1 + _DAT_113010a20);
  func_0x00010006c00c(uVar1,uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  func_0x00010006c090(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar3);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103deb0e0; end: 103deb15b; -[SCSponsoredSnapAdRequestMetadata init] */

void FUN_103deb0e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredSnapFeedRequestMetadataServices/SponsoredSnapAdRequestMetadataWrapper.swift",
             0x54,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103deb128);
  (*pcVar1)();
}



/* Entry: 103deb15c; end: 103deb1ab; -[SCSponsoredSnapAdRequestMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb15c(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_113010a10),
                      ((undefined8 *)(param_1 + _DAT_113010a10))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113010a18 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113010a20));
  return;
}



/* Entry: 103deb1ac; end: 103deb1cb;  */

void FUN_103deb1ac(void)

{
  _objc_opt_self(&PTR_PTR_11294d770);
  return;
}



/* Entry: 103deb1cc; end: 103deb1ff; -[_TtC24DpaConfigProviderService26SCDpaConfigProviderService scDpaConfigProvider] */

void FUN_103deb1cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010040e024();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103deb200; end: 103deb28b; -[_TtC24DpaConfigProviderService26SCDpaConfigProviderService setScDpaConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb200(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010a58);
  *(undefined8 *)(param_1 + _DAT_113010a58) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103deb28c; end: 103deb2eb; -[_TtC24DpaConfigProviderService26SCDpaConfigProviderService init] */

void FUN_103deb28c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DpaConfigProviderService.SCDpaConfigProviderService",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103deb2b8);
  (*pcVar1)();
}



/* Entry: 103deb2ec; end: 103deb323; -[_TtC24DpaConfigProviderService26SCDpaConfigProviderService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb2ec(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010a50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010a58));
  return;
}



/* Entry: 103deb324; end: 103deb337;  */

bool FUN_103deb324(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103deb338; end: 103deb3e3;  */

void FUN_103deb338(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103deb3e4; end: 103deb40f;  */

void FUN_103deb3e4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103deb410; end: 103deb44f;  */

void FUN_103deb410(void)

{
  undefined *puVar1;
  
  if (puRam0000000113010a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc96bd0;
  _swift_getWitnessTable(&UNK_10dc96bd0,&UNK_1107133d0);
  puRam0000000113010a88 = puVar1;
  return;
}



/* Entry: 103deb450; end: 103deb45f;  */

undefined1  [16] FUN_103deb450(void)

{
  return ZEXT816(0x1107133d0);
}



/* Entry: 103deb460; end: 103deb493; -[_TtC22AdCrashLoggingServices22AdCrashLoggingServices adCrashLogger] */

void FUN_103deb460(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010040de80();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103deb494; end: 103deb4c7; -[_TtC22AdCrashLoggingServices22AdCrashLoggingServices setAdCrashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb494(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010aa0);
  *(undefined8 *)(param_1 + _DAT_113010aa0) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103deb4c8; end: 103deb4fb; -[_TtC22AdCrashLoggingServices22AdCrashLoggingServices sponsoredARCrashLogger] */

void FUN_103deb4c8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103deb4fc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103deb4fc; end: 103deb50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103deb4fc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_113010aa8;
  lVar2 = *(long *)(unaff_x20 + _DAT_113010aa8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113010a98));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 103deb510; end: 103deb543; -[_TtC22AdCrashLoggingServices22AdCrashLoggingServices setSponsoredARCrashLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb510(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113010aa8);
  *(undefined8 *)(param_1 + _DAT_113010aa8) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103deb544; end: 103deb5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb544(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113010aa0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010aa8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113010a90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113010a98) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103deb5c0; end: 103deb61f; -[_TtC22AdCrashLoggingServices22AdCrashLoggingServices init] */

void FUN_103deb5c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdCrashLoggingServices.AdCrashLoggingServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103deb5ec);
  (*pcVar1)();
}



/* Entry: 103deb620; end: 103deb6c3; -[_TtC22AdCrashLoggingServices22AdCrashLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb620(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010a90));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113010a98));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113010aa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113010aa8));
  return;
}



/* Entry: 103deb6c4; end: 103deb71b; -[AdOpportunityNonFatalConfiguration initWithAdConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103deb6c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113010ad8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _swift_unknownObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}


