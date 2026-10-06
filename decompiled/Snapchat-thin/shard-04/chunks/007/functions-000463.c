/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1037c2d7c; end: 1037c2d87; -[SCTalkScreenshotLensMetadata lensSwipeId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2d7c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f95758))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f95758);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1037c2d88; end: 1037c2ddf;  */

void FUN_1037c2d88(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037c2de0; end: 1037c2def; -[SCTalkScreenshotLensMetadata isSnapchatExclusiveLens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1037c2de0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f95760);
}



/* Entry: 1037c2df0; end: 1037c324f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c2df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined1 param_28)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f956d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f956e0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f956e8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f956f0) = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f956f8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f95700) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95708);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f95710) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112f95718) = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95720);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112f95728) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112f95730) = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95738);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95740);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95748);
  *puVar1 = param_22;
  puVar1[1] = param_23;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95750);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95758);
  *puVar1 = param_26;
  puVar1[1] = param_27;
  *(undefined1 *)(unaff_x20 + _DAT_112f95760) = param_28;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c3250; end: 1037c34a7; -[SCTalkScreenshotLensMetadata initWithLensSessionId:lensId:lensType:lensSource:lensOptionId:lensOptionSourceType:targetingCampaignId:faceBackCameraCount:faceFrontCameraCount:lensBundleUrl:lensIndexCount:lensIndexPos:lensNamespace:rankingId:rankingData:adId:lensSwipeId:isSnapchatExclusiveLens:] */

void FUN_1037c3250(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,long param_9
                  ,undefined8 param_10,undefined8 param_11,long param_12,undefined8 param_13,
                  undefined8 param_14,long param_15,long param_16,long param_17,long param_18,
                  long param_19,undefined1 param_20)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_3 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_a0 = param_2;
    uStack_98 = param_3;
  }
  func_0x000107c5faec();
  uVar7 = param_2;
  if (param_7 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_c0 = uVar7;
    uStack_b8 = param_7;
  }
  if (param_9 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_d0 = uVar7;
    uStack_c8 = param_9;
  }
  lVar1 = param_12;
  func_0x000107c61174();
  lVar2 = param_15;
  func_0x000107c61174();
  lVar3 = param_16;
  func_0x000107c61174();
  lVar4 = param_17;
  func_0x000107c61174();
  lVar5 = param_18;
  func_0x000107c61174();
  lVar6 = param_19;
  func_0x000107c61174();
  if (lVar1 == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uVar8 = uVar7;
    uVar7 = uStack_e0;
  }
  else {
    func_0x000107c5faec();
    uVar8 = uVar7;
    func_0x000107c61170(lVar1);
    uStack_d8 = param_12;
  }
  if (lVar2 == 0) {
    uStack_f8 = 0;
    uStack_f0 = 0;
    uVar9 = uVar8;
    uVar8 = uStack_f8;
  }
  else {
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c61170(lVar2);
    uStack_f0 = param_15;
  }
  if (lVar3 == 0) {
    uStack_108 = 0;
    uStack_100 = 0;
    uVar10 = uVar9;
    uVar9 = uStack_108;
  }
  else {
    func_0x000107c5faec();
    uVar10 = uVar9;
    func_0x000107c61170(lVar3);
    uStack_100 = param_16;
  }
  if (lVar4 == 0) {
    uStack_118 = 0;
    uStack_110 = 0;
    uVar11 = uVar10;
    uVar10 = uStack_118;
  }
  else {
    func_0x000107c5faec();
    uVar11 = uVar10;
    func_0x000107c61170(lVar4);
    uStack_110 = param_17;
  }
  if (lVar5 == 0) {
    param_18 = 0;
    uVar12 = 0;
    uVar13 = uVar11;
  }
  else {
    func_0x000107c5faec();
    uVar13 = uVar11;
    func_0x000107c61170(lVar5);
    uVar12 = uVar11;
  }
  if (lVar6 == 0) {
    param_19 = 0;
    uVar13 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
  }
  func_0x0001037c3024(uStack_98,uStack_a0,param_4,param_2,param_5,param_6,uStack_b8,uStack_c0,
                      param_8,uStack_c8,uStack_d0,param_10,param_11,uStack_d8,uVar7,param_13,
                      param_14,uStack_f0,uVar8,uStack_100,uVar9,uStack_110,uVar10,param_18,uVar12,
                      param_19,uVar13,param_20);
  return;
}



/* Entry: 1037c34a8; end: 1037c36bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c34a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_e0 [16];
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
  
  func_0x000107c614f0();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f956d8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f956e0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_112f956e8) = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_112f956f0) = uVar2;
  uVar2 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f956f8);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f95700) = param_1[8];
  uVar2 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95708);
  puVar1[1] = param_1[10];
  *puVar1 = uVar2;
  uVar2 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_112f95710) = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_112f95718) = uVar2;
  uVar2 = param_1[0xd];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95720);
  puVar1[1] = param_1[0xe];
  *puVar1 = uVar2;
  uVar2 = param_1[0x10];
  *(undefined8 *)(unaff_x20 + _DAT_112f95728) = param_1[0xf];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_68 = param_1[10];
  uStack_70 = param_1[9];
  uStack_78 = param_1[0xe];
  uStack_80 = param_1[0xd];
  *(undefined8 *)(unaff_x20 + _DAT_112f95730) = uVar2;
  uStack_88 = param_1[0x12];
  uStack_90 = param_1[0x11];
  uVar2 = param_1[0x11];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95738);
  puVar1[1] = param_1[0x12];
  *puVar1 = uVar2;
  uStack_98 = param_1[0x14];
  uStack_a0 = param_1[0x13];
  uVar2 = param_1[0x13];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95740);
  puVar1[1] = param_1[0x14];
  *puVar1 = uVar2;
  uStack_a8 = param_1[0x16];
  uStack_b0 = param_1[0x15];
  uVar2 = param_1[0x15];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95748);
  puVar1[1] = param_1[0x16];
  *puVar1 = uVar2;
  uStack_b8 = param_1[0x18];
  uStack_c0 = param_1[0x17];
  uVar2 = param_1[0x17];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95750);
  puVar1[1] = param_1[0x18];
  *puVar1 = uVar2;
  uStack_c8 = param_1[0x1a];
  uStack_d0 = param_1[0x19];
  uVar2 = param_1[0x19];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f95758);
  puVar1[1] = param_1[0x1a];
  *puVar1 = uVar2;
  func_0x000101223174(&uStack_40,auStack_e0);
  func_0x000100402194(&uStack_50,auStack_e0);
  func_0x000101223174(&uStack_60,auStack_e0);
  func_0x000101223174(&uStack_70,auStack_e0);
  func_0x000101223174(&uStack_80,auStack_e0);
  func_0x000101223174(&uStack_90,auStack_e0);
  func_0x000101223174(&uStack_a0,auStack_e0);
  func_0x000101223174(&uStack_b0,auStack_e0);
  func_0x000101223174(&uStack_c0,auStack_e0);
  func_0x000101223174(&uStack_d0,auStack_e0);
  func_0x0001037c2120(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112f95760) = *(undefined1 *)(param_1 + 0x1b);
  func_0x000107c61154(&stack0xffffffffffffff10,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c36bc; end: 1037c36bf; -[SCTalkScreenshotLensMetadata copyWithZone:] */

void FUN_1037c36bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1037c36c0; end: 1037c36f3; -[SCTalkScreenshotLensMetadata description] */

void FUN_1037c36c0(void)

{
  undefined1 auStack_f0 [224];
  
  FUN_1037c3850(auStack_f0);
  func_0x0001037c2120(auStack_f0);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c36f4; end: 1037c376f; -[SCTalkScreenshotLensMetadata init] */

void FUN_1037c36f4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "TalkScreenshotSendingServices/TalkScreenshotLensMetadataWrapper.swift",0x45,2
                      ,0x67,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c373c);
  (*pcVar1)();
}



/* Entry: 1037c3770; end: 1037c384f; -[SCTalkScreenshotLensMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c3790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c37b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c37e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c3808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c3830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c380c) */
/* WARNING: Removing unreachable block (ram,0x0001037c37e4) */
/* WARNING: Removing unreachable block (ram,0x0001037c37bc) */
/* WARNING: Removing unreachable block (ram,0x0001037c3794) */
/* WARNING: Removing unreachable block (ram,0x0001037c3834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3770(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f956d8 + 8))
  ;
  return;
}



/* Entry: 1037c3850; end: 1037c3a2f;  */

/* WARNING: Possible PIC construction at 0x0001037c39cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c39dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c39ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c39fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037c3a0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c3a00) */
/* WARNING: Removing unreachable block (ram,0x0001037c39f0) */
/* WARNING: Removing unreachable block (ram,0x0001037c39e0) */
/* WARNING: Removing unreachable block (ram,0x0001037c39d0) */
/* WARNING: Removing unreachable block (ram,0x0001037c3a10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3850(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112f956d8);
  uVar16 = *(undefined8 *)(param_2 + _DAT_112f956e8);
  uVar21 = *(undefined8 *)(param_2 + _DAT_112f956e0);
  uVar10 = ((undefined8 *)(param_2 + _DAT_112f956e0))[1];
  uVar15 = *(undefined8 *)(param_2 + _DAT_112f956f0);
  puVar2 = (undefined8 *)(param_2 + _DAT_112f956f8);
  uVar17 = *(undefined8 *)(param_2 + _DAT_112f95700);
  uVar18 = *(undefined8 *)(param_2 + _DAT_112f95710);
  puVar3 = (undefined8 *)(param_2 + _DAT_112f95708);
  uVar19 = *(undefined8 *)(param_2 + _DAT_112f95718);
  puVar4 = (undefined8 *)(param_2 + _DAT_112f95720);
  uVar13 = *(undefined8 *)(param_2 + _DAT_112f95728);
  uVar14 = *(undefined8 *)(param_2 + _DAT_112f95730);
  puVar5 = (undefined8 *)(param_2 + _DAT_112f95738);
  puVar6 = (undefined8 *)(param_2 + _DAT_112f95740);
  puVar7 = (undefined8 *)(param_2 + _DAT_112f95748);
  puVar8 = (undefined8 *)(param_2 + _DAT_112f95750);
  puVar9 = (undefined8 *)(param_2 + _DAT_112f95758);
  uVar11 = *(undefined1 *)(param_2 + _DAT_112f95760);
  uVar12 = puVar1[1];
  uVar20 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar20;
  param_1[2] = uVar21;
  param_1[3] = uVar10;
  param_1[4] = uVar16;
  param_1[5] = uVar15;
  uVar21 = *puVar2;
  param_1[7] = puVar2[1];
  param_1[6] = uVar21;
  param_1[8] = uVar17;
  uVar21 = *puVar3;
  param_1[10] = puVar3[1];
  param_1[9] = uVar21;
  param_1[0xb] = uVar18;
  param_1[0xc] = uVar19;
  uVar21 = *puVar4;
  param_1[0xe] = puVar4[1];
  param_1[0xd] = uVar21;
  param_1[0xf] = uVar13;
  param_1[0x10] = uVar14;
  uVar21 = *puVar5;
  param_1[0x12] = puVar5[1];
  param_1[0x11] = uVar21;
  uVar21 = *puVar6;
  param_1[0x14] = puVar6[1];
  param_1[0x13] = uVar21;
  uVar21 = *puVar7;
  param_1[0x16] = puVar7[1];
  param_1[0x15] = uVar21;
  uVar21 = *puVar8;
  param_1[0x18] = puVar8[1];
  param_1[0x17] = uVar21;
  uVar21 = *puVar9;
  param_1[0x1a] = puVar9[1];
  param_1[0x19] = uVar21;
  *(undefined1 *)(param_1 + 0x1b) = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar12);
  return;
}



/* Entry: 1037c3a30; end: 1037c3a4f;  */

void FUN_1037c3a30(void)

{
  func_0x000107c61168(&PTR_PTR_1128ec8d8);
  return;
}



/* Entry: 1037c3a50; end: 1037c3ad7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037c3a50(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acbdac();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f95790) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f95798) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c3ad8);
  (*pcVar1)();
}



/* Entry: 1037c3ad8; end: 1037c3b37; -[_TtC33AdsUserNavigationScopeGraphBridge48AdsUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037c3ad8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdsUserNavigationScopeGraphBridge.AdsUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c3b04);
  (*pcVar1)();
}



/* Entry: 1037c3b38; end: 1037c3b6f; -[_TtC33AdsUserNavigationScopeGraphBridge48AdsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c3b54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c3b58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3b38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95790));
  return;
}



/* Entry: 1037c3b70; end: 1037c3b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3b70(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f95798),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f95790));
  return;
}



/* Entry: 1037c3b98; end: 1037c3bfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037c3b98(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f958a8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037c3bfc; end: 1037c3c03;  */

void FUN_1037c3bfc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037c3c04; end: 1037c3ca3;  */

void FUN_1037c3c04(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037c3ca4; end: 1037c3d0f;  */

void FUN_1037c3ca4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037c3d10; end: 1037c3d6f; -[_TtC33AdsUserNavigationScopeGraphBridge41AdsUserNavigationScopeGraphBridgeServices init] */

void FUN_1037c3d10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdsUserNavigationScopeGraphBridge.AdsUserNavigationScopeGraphBridgeServices",
                      0x4b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c3d3c);
  (*pcVar1)();
}



/* Entry: 1037c3d70; end: 1037c3d7f; -[_TtC33AdsUserNavigationScopeGraphBridge41AdsUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3d70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f958a8));
  return;
}



/* Entry: 1037c3d80; end: 1037c3ddb;  */

void FUN_1037c3d80(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f95898,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f95898,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1037c3ddc; end: 1037c3e13;  */

undefined1  [16] FUN_1037c3ddc(void)

{
  return ZEXT816(0x1106960c0);
}



/* Entry: 1037c3e14; end: 1037c3e57; -[SCAdsUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037c3e14(undefined8 param_1)

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



/* Entry: 1037c3e58; end: 1037c3e8b;  */

void FUN_1037c3e58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c3e8c; end: 1037c3ed3; -[SCAdsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c3eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c3ebc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3e8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95900);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95908));
  return;
}



/* Entry: 1037c3ed4; end: 1037c3ef3;  */

void FUN_1037c3ed4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ecbb0);
  return;
}



/* Entry: 1037c3ef4; end: 1037c3eff; -[SCContentPostSendUpsellServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3ef4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95940;
  func_0x000107c61428(param_1 + _DAT_112f95940,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c3f00; end: 1037c3f0b; -[SCContentPostSendUpsellServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95940;
  func_0x000107c61428(param_1 + _DAT_112f95940,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c3f0c; end: 1037c3f17; -[SCContentPostSendUpsellServicesSaberServiceProvider adsUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3f0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95948;
  func_0x000107c61428(param_1 + _DAT_112f95948,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c3f18; end: 1037c3f5b;  */

void FUN_1037c3f18(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037c3f5c; end: 1037c3f67; -[SCContentPostSendUpsellServicesSaberServiceProvider setAdsUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c3f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95948;
  func_0x000107c61428(param_1 + _DAT_112f95948,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c3f68; end: 1037c3fbb;  */

void FUN_1037c3f68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c3fbc; end: 1037c41cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c3fbc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3d9fc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037c3c28();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f958a8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f95950);
      *(long *)(unaff_x20 + _DAT_112f95950) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AdsUserNavigationScopeGraphBridge/SCContentPostSendUpsellServicesSaberServiceProvider.swift"
                      ,0x5b,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c40e8);
  (*pcVar1)();
}



/* Entry: 1037c41d0; end: 1037c4203; -[SCContentPostSendUpsellServicesSaberServiceProvider provide] */

void FUN_1037c41d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037c3fbc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c4204; end: 1037c4237; -[SCContentPostSendUpsellServicesSaberServiceProvider __safeProvide] */

void FUN_1037c4204(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037c40e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c4238; end: 1037c427b; -[SCContentPostSendUpsellServicesSaberServiceProvider end] */

void FUN_1037c4238(undefined8 param_1)

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



/* Entry: 1037c427c; end: 1037c4413;  */

void FUN_1037c427c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e975a0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f168a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AdsUserNavigationScopeGraphBridge/SCContentPostSendUpsellServicesSaberServiceProvider.swift"
                            ,0x5b,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c4414);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52558();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037c4414; end: 1037c44bf; -[SCContentPostSendUpsellServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037c4414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037c427c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037c44c0; end: 1037c4533; -[SCContentPostSendUpsellServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c44c0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f95940,0);
  func_0x000107c61614(param_1 + _DAT_112f95948,0);
  *(undefined8 *)(param_1 + _DAT_112f95950) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c4534; end: 1037c4567;  */

void FUN_1037c4534(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c4568; end: 1037c45af; -[SCContentPostSendUpsellServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c4568(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95940);
  func_0x000107c61610(param_1 + _DAT_112f95948);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f95950));
  return;
}



/* Entry: 1037c45b0; end: 1037c45cf;  */

void FUN_1037c45b0(void)

{
  func_0x000107c61168(&PTR_PTR_112f95998);
  return;
}



/* Entry: 1037c45d0; end: 1037c4657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037c45d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acc3f4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f95a00) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f95a08) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c4658);
  (*pcVar1)();
}



/* Entry: 1037c4658; end: 1037c46b7; -[_TtC36AppinsUserNavigationScopeGraphBridge51AppinsUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037c4658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AppinsUserNavigationScopeGraphBridge.AppinsUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c4684);
  (*pcVar1)();
}



/* Entry: 1037c46b8; end: 1037c46ef; -[_TtC36AppinsUserNavigationScopeGraphBridge51AppinsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c46d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c46d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c46b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95a00));
  return;
}



/* Entry: 1037c46f0; end: 1037c4717;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c46f0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f95a08),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f95a00));
  return;
}



/* Entry: 1037c4718; end: 1037c477b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037c4718(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f95b18);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037c477c; end: 1037c4783;  */

void FUN_1037c477c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037c4784; end: 1037c4823;  */

void FUN_1037c4784(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037c4824; end: 1037c488f;  */

void FUN_1037c4824(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037c4890; end: 1037c48ef; -[_TtC36AppinsUserNavigationScopeGraphBridge44AppinsUserNavigationScopeGraphBridgeServices init] */

void FUN_1037c4890(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AppinsUserNavigationScopeGraphBridge.AppinsUserNavigationScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c48bc);
  (*pcVar1)();
}



/* Entry: 1037c48f0; end: 1037c48ff; -[_TtC36AppinsUserNavigationScopeGraphBridge44AppinsUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c48f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f95b18));
  return;
}



/* Entry: 1037c4900; end: 1037c495b;  */

void FUN_1037c4900(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f95b08,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f95b08,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1037c495c; end: 1037c4993;  */

undefined1  [16] FUN_1037c495c(void)

{
  return ZEXT816(0x110696248);
}



/* Entry: 1037c4994; end: 1037c49d7; -[SCAppinsUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037c4994(undefined8 param_1)

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



/* Entry: 1037c49d8; end: 1037c4a0b;  */

void FUN_1037c49d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c4a0c; end: 1037c4a53; -[SCAppinsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c4a38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c4a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c4a0c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95b70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95b78));
  return;
}



/* Entry: 1037c4a54; end: 1037c4a73;  */

void FUN_1037c4a54(void)

{
  func_0x000107c61168(&PTR_PTR_1128ece48);
  return;
}



/* Entry: 1037c4a74; end: 1037c4a7f; -[SCSCContactSupportScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c4a74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95bb0;
  func_0x000107c61428(param_1 + _DAT_112f95bb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c4a80; end: 1037c4a8b; -[SCSCContactSupportScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c4a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95bb0;
  func_0x000107c61428(param_1 + _DAT_112f95bb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c4a8c; end: 1037c4a97; -[SCSCContactSupportScopeServicesSaberServiceProvider appinsUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c4a8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95bb8;
  func_0x000107c61428(param_1 + _DAT_112f95bb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c4a98; end: 1037c4adb;  */

void FUN_1037c4a98(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037c4adc; end: 1037c4ae7; -[SCSCContactSupportScopeServicesSaberServiceProvider setAppinsUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c4adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95bb8;
  func_0x000107c61428(param_1 + _DAT_112f95bb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c4ae8; end: 1037c4b3b;  */

void FUN_1037c4ae8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c4b3c; end: 1037c4d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c4b3c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3df30();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037c47a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f95b18);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f95bc0);
      *(long *)(unaff_x20 + _DAT_112f95bc0) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AppinsUserNavigationScopeGraphBridge/SCSCContactSupportScopeServicesSaberServiceProvider.swift"
                      ,0x5e,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c4c68);
  (*pcVar1)();
}



/* Entry: 1037c4d50; end: 1037c4d83; -[SCSCContactSupportScopeServicesSaberServiceProvider provide] */

void FUN_1037c4d50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037c4b3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c4d84; end: 1037c4db7; -[SCSCContactSupportScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1037c4d84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001037c4c68();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1037c4db8; end: 1037c4dfb; -[SCSCContactSupportScopeServicesSaberServiceProvider end] */

void FUN_1037c4db8(undefined8 param_1)

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



/* Entry: 1037c4dfc; end: 1037c4f93;  */

void FUN_1037c4dfc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e97340)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f168cc0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "AppinsUserNavigationScopeGraphBridge/SCSCContactSupportScopeServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c4f94);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52824();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1037c4f94; end: 1037c503f; -[SCSCContactSupportScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1037c4f94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1037c4dfc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1037c5040; end: 1037c50b3; -[SCSCContactSupportScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5040(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f95bb0,0);
  func_0x000107c61614(param_1 + _DAT_112f95bb8,0);
  *(undefined8 *)(param_1 + _DAT_112f95bc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1037c50b4; end: 1037c50e7;  */

void FUN_1037c50b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c50e8; end: 1037c512f; -[SCSCContactSupportScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c50e8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95bb0);
  func_0x000107c61610(param_1 + _DAT_112f95bb8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f95bc0));
  return;
}



/* Entry: 1037c5130; end: 1037c514f;  */

void FUN_1037c5130(void)

{
  func_0x000107c61168(&PTR_PTR_112f95c08);
  return;
}



/* Entry: 1037c5150; end: 1037c51d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1037c5150(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100acca3c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f95c70) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f95c78) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c51d8);
  (*pcVar1)();
}



/* Entry: 1037c51d8; end: 1037c5237; -[_TtC35AradsUserNavigationScopeGraphBridge50AradsUserNavigationScopeGraphBridgeSaberEntryPoint init] */

void FUN_1037c51d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AradsUserNavigationScopeGraphBridge.AradsUserNavigationScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c5204);
  (*pcVar1)();
}



/* Entry: 1037c5238; end: 1037c526f; -[_TtC35AradsUserNavigationScopeGraphBridge50AradsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c5254: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c5258) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5238(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95c70));
  return;
}



/* Entry: 1037c5270; end: 1037c5297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5270(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f95c78),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f95c70));
  return;
}



/* Entry: 1037c5298; end: 1037c52fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1037c5298(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112f95d88);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1037c52fc; end: 1037c5303;  */

void FUN_1037c52fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1037c5304; end: 1037c53a3;  */

void FUN_1037c5304(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1037c53a4; end: 1037c540f;  */

void FUN_1037c53a4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1037c5410; end: 1037c546f; -[_TtC35AradsUserNavigationScopeGraphBridge43AradsUserNavigationScopeGraphBridgeServices init] */

void FUN_1037c5410(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AradsUserNavigationScopeGraphBridge.AradsUserNavigationScopeGraphBridgeServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c543c);
  (*pcVar1)();
}



/* Entry: 1037c5470; end: 1037c547f; -[_TtC35AradsUserNavigationScopeGraphBridge43AradsUserNavigationScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f95d88));
  return;
}



/* Entry: 1037c5480; end: 1037c54db;  */

void FUN_1037c5480(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f95d78,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f95d78,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1037c54dc; end: 1037c5513;  */

undefined1  [16] FUN_1037c54dc(void)

{
  return ZEXT816(0x1106963f8);
}



/* Entry: 1037c5514; end: 1037c5557; -[SCAradsUserNavigationScopeGraphBridgeSaberEntryPoint end] */

void FUN_1037c5514(undefined8 param_1)

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



/* Entry: 1037c5558; end: 1037c558b;  */

void FUN_1037c5558(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1037c558c; end: 1037c55d3; -[SCAradsUserNavigationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001037c55b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037c55bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c558c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f95de0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f95de8));
  return;
}



/* Entry: 1037c55d4; end: 1037c55f3;  */

void FUN_1037c55d4(void)

{
  func_0x000107c61168(&PTR_PTR_1128ed0e0);
  return;
}



/* Entry: 1037c55f4; end: 1037c55ff; -[SCSponsoredLensLaunchServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c55f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95e20;
  func_0x000107c61428(param_1 + _DAT_112f95e20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c5600; end: 1037c560b; -[SCSponsoredLensLaunchServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c5600(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95e20;
  func_0x000107c61428(param_1 + _DAT_112f95e20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c560c; end: 1037c5617; -[SCSponsoredLensLaunchServicesSaberServiceProvider aradsUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c560c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f95e28;
  func_0x000107c61428(param_1 + _DAT_112f95e28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1037c5618; end: 1037c565b;  */

void FUN_1037c5618(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1037c565c; end: 1037c5667; -[SCSponsoredLensLaunchServicesSaberServiceProvider setAradsUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037c565c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f95e28;
  func_0x000107c61428(param_1 + _DAT_112f95e28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c5668; end: 1037c56bb;  */

void FUN_1037c5668(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1037c56bc; end: 1037c58cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1037c56bc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3e0e4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001037c5328();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112f95d88);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f95e30);
      *(long *)(unaff_x20 + _DAT_112f95e30) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "AradsUserNavigationScopeGraphBridge/SCSponsoredLensLaunchServicesSaberServiceProvider.swift"
                      ,0x5b,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1037c57e8);
  (*pcVar1)();
}



/* Entry: 1037c58d0; end: 1037c5903; -[SCSponsoredLensLaunchServicesSaberServiceProvider provide] */

void FUN_1037c58d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1037c56bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


