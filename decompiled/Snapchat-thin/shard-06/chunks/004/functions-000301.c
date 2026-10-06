/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1048d3520; end: 1048d3527; +[SCAttributedSendToRankingRecentsSubTask rankingArtifacts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3520(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 6;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3528; end: 1048d352f; +[SCAttributedSendToRankingRecentsSubTask subjectProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3528(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = 7;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3530; end: 1048d3627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3530(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc10) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3628; end: 1048d379b; -[SCAttributedSendToRankingRecentsSubTask matchModelSyncJobProcessor:featureSyncJobProcessor:contextualFeaturesSyncJobProcessor:preload:rankRecipients:concurrentScoring:rankingArtifacts:subjectProvider:] */

void FUN_1048d3628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001048d3580(0x1048d3fd0,auStack_40,0x1048d3fe8,auStack_60,0x1048d3fec,auStack_80,
                      0x1048d3ff0,auStack_a0,0x1048d3ff4,auStack_c0,0x1048d3ff8,auStack_e0,
                      0x1048d3ffc,auStack_100,0x1048d4000,auStack_120);
  _objc_release(param_1);
  return;
}



/* Entry: 1048d379c; end: 1048d37df; -[SCAttributedSharingTask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d379c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11309bc18) == '\x01') && (*(long *)(param_1 + _DAT_11309bc20) == 0))
  {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d37e0);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d37e0; end: 1048d3827; -[SCAttributedSharingTask init] */

void FUN_1048d37e0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSharingTaskWrapper.swift",0x32,2,0xfe,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d3828);
  (*pcVar1)();
}



/* Entry: 1048d3828; end: 1048d382f; +[SCAttributedSharingTask sendToPreload] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3828(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc18) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309bc20) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3830; end: 1048d389b; +[SCAttributedSharingTask sendToRankingRecents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bc18) = 1;
  *(undefined8 *)(lVar2 + _DAT_11309bc20) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d389c; end: 1048d38a3; +[SCAttributedSharingTask selectionGroupObservableRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d389c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc18) = 2;
  *(undefined8 *)(lVar1 + _DAT_11309bc20) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d38a4; end: 1048d38b3; +[SCAttributedSharingTask grantRewardIncentiveCampaign] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d38a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc18) = 3;
  *(undefined8 *)(lVar1 + _DAT_11309bc20) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d38b4; end: 1048d390b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d38b4(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309bc18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11309bc20) = 0;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d390c; end: 1048d3913; +[SCAttributedSharingTask shortcutsBadging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d390c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc18) = 4;
  *(undefined8 *)(lVar1 + _DAT_11309bc20) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3914; end: 1048d396f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3914(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc18) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11309bc20) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d3970; end: 1048d39eb; -[SCAttributedSharingTask matchSendToPreload:sendToRankingRecents:selectionGroupObservableRepository:grantRewardIncentiveCampaign:shortcutsBadging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3970(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309bc18);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001048d39ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
    if (*(long *)(param_1 + _DAT_11309bc20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001048d39e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 0x10))(param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1048d39e8);
    (*pcVar2)();
  }
  if (bVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001048d39b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
  if (bVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x0001048d399c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_6 + 0x10))(param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048d39c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_7 + 0x10))(param_7);
  return;
}



/* Entry: 1048d39ec; end: 1048d3a1f;  */

void FUN_1048d39ec(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d3a20; end: 1048d3a2f; -[SCAttributedSharingTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3a20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309bc20));
  return;
}



/* Entry: 1048d3a30; end: 1048d3b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1048d3a30(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309bc18);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar3 = 8;
    }
    else {
      if (*(long *)(param_1 + _DAT_11309bc20) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1048d3ab8);
        (*pcVar2)();
      }
      uVar3 = *(undefined1 *)(*(long *)(param_1 + _DAT_11309bc20) + _DAT_11309bc10);
    }
  }
  else if (bVar1 == 2) {
    uVar3 = 9;
  }
  else if (bVar1 == 3) {
    uVar3 = 10;
  }
  else {
    uVar3 = 0xb;
  }
  _objc_release();
  return uVar3;
}



/* Entry: 1048d3b64; end: 1048d3c3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d3b64(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined1 uVar5;
  long alStack_80 [2];
  long alStack_70 [2];
  long alStack_60 [2];
  long alStack_50 [2];
  long alStack_40 [2];
  
  plVar3 = alStack_80;
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 10) {
    if (uVar1 == 8) {
      uVar5 = 0;
      lVar4 = 0;
      goto LAB_1048d3bf4;
    }
    if (uVar1 == 9) {
      plVar3 = alStack_60;
      uVar5 = 2;
      lVar4 = 0;
      goto LAB_1048d3bf4;
    }
  }
  else {
    if (uVar1 == 10) {
      lVar4 = 0;
      plVar3 = alStack_50;
      uVar5 = 3;
      goto LAB_1048d3bf4;
    }
    if (uVar1 == 0xb) {
      lVar4 = 0;
      plVar3 = alStack_40;
      uVar5 = 4;
      goto LAB_1048d3bf4;
    }
  }
  func_0x0001048d3ab8();
  plVar3 = alStack_70;
  uVar5 = 1;
  lVar4 = param_1;
LAB_1048d3bf4:
  func_0x0001048d3c60();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bc18) = uVar5;
  *(long *)(lVar2 + _DAT_11309bc20) = lVar4;
  *plVar3 = lVar2;
  plVar3[1] = param_1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d3c40; end: 1048d3c7f;  */

void FUN_1048d3c40(void)

{
  _objc_opt_self(&PTR_PTR_1129e2fe8);
  return;
}



/* Entry: 1048d3c80; end: 1048d3f2b;  */

int FUN_1048d3c80(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d3cfc;
        goto LAB_1048d3ce0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d3ce0:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_1048d3cfc:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d3f2c; end: 1048d3f6b;  */

void FUN_1048d3f2c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bc78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45c50;
  _swift_getWitnessTable(&UNK_10dd45c50,&UNK_1107b4f50);
  puRam000000011309bc78 = puVar1;
  return;
}



/* Entry: 1048d3f6c; end: 1048d3f6f;  */

void FUN_1048d3f6c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bc80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45cf0;
  _swift_getWitnessTable(&UNK_10dd45cf0,&UNK_1107b4ec0);
  puRam000000011309bc80 = puVar1;
  return;
}



/* Entry: 1048d3f70; end: 1048d3faf;  */

void FUN_1048d3f70(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bc80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45cf0;
  _swift_getWitnessTable(&UNK_10dd45cf0,&UNK_1107b4ec0);
  puRam000000011309bc80 = puVar1;
  return;
}



/* Entry: 1048d3fb0; end: 1048d402b;  */

ulong FUN_1048d3fb0(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 1048d402c; end: 1048d402f; -[SCAttributedSendToRankingRecentsSubTask copyWithZone:] */

void FUN_1048d402c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d4030; end: 1048d4037; -[SCAttributedSharingTask copyWithZone:] */

void FUN_1048d4030(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d4038; end: 1048d40e3;  */

void FUN_1048d4038(void)

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



/* Entry: 1048d40e4; end: 1048d411b;  */

void FUN_1048d40e4(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1048d411c; end: 1048d4137; -[SCAttributedSnapAdsTask description] */

void FUN_1048d411c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4138; end: 1048d417f; -[SCAttributedSnapAdsTask init] */

void FUN_1048d4138(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSnapAdsTaskWrapper.swift",0x32,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d4180);
  (*pcVar1)();
}



/* Entry: 1048d4180; end: 1048d4183; -[SCAttributedSnapAdsTask copyWithZone:] */

void FUN_1048d4180(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d4184; end: 1048d418b; +[SCAttributedSnapAdsTask promoteDeeplinkPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4184(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc88) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d418c; end: 1048d419b; +[SCAttributedSnapAdsTask businessIAPService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d418c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc88) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d419c; end: 1048d41e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d419c(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11309bc88) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d41e8; end: 1048d41ef; +[SCAttributedSnapAdsTask userStoriesAdPrefetchPrewarm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d41e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc88) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d41f0; end: 1048d423f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d41f0(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bc88) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4240; end: 1048d426b; -[SCAttributedSnapAdsTask matchPromoteDeeplinkPlugin:businessIAPService:userStoriesAdPrefetchPrewarm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4240(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_11309bc88) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_11309bc88) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048d4268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1048d426c; end: 1048d429f;  */

void FUN_1048d426c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d42a0; end: 1048d430f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d42a0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong auStack_50 [6];
  
  uVar1 = param_1;
  FUN_1048d4310();
  uVar2 = uVar1;
  _objc_allocWithZone();
  puVar3 = auStack_50;
  if ((param_1 & 0xff) != 0) {
    puVar3 = auStack_50 + 2;
    if (((uint)param_1 & 0xff) != 1) {
      puVar3 = auStack_50 + 4;
    }
  }
  *(char *)(uVar2 + _DAT_11309bc88) = (char)param_1;
  *puVar3 = uVar2;
  puVar3[1] = uVar1;
  _objc_msgSendSuper2(puVar3,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d4310; end: 1048d432f;  */

void FUN_1048d4310(void)

{
  _objc_opt_self(&PTR_PTR_1129e3170);
  return;
}



/* Entry: 1048d4330; end: 1048d4497;  */

int FUN_1048d4330(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d43ac;
        goto LAB_1048d4390;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d4390:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_1048d43ac:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d4498; end: 1048d44d7;  */

void FUN_1048d4498(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bcb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45dd0;
  _swift_getWitnessTable(&UNK_10dd45dd0,&UNK_1107b5038);
  puRam000000011309bcb8 = puVar1;
  return;
}



/* Entry: 1048d44d8; end: 1048d44f7;  */

void FUN_1048d44d8(undefined1 *param_1,long *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 1) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1048d44f8; end: 1048d4543; -[SCAttributedPlusStoreKitSubtask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d44f8(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11309bcc0) != '\x01') &&
     (*(char *)(param_1 + _DAT_11309bcc8 + 8) == '\x01')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d4544);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4544; end: 1048d458b; -[SCAttributedPlusStoreKitSubtask init] */

void FUN_1048d4544(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedPlusTaskWrapper.swift",0x2f,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d458c);
  (*pcVar1)();
}



/* Entry: 1048d458c; end: 1048d4617; -[SCAttributedPlusStoreKitSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d458c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_11309bcc0));
  if (*(char *)((undefined8 *)(param_1 + _DAT_11309bcc8) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11309bcc8);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 1048d4618; end: 1048d471b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1048d4618(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    func_0x00010006e7f4(auStack_50);
  }
  else {
    plVar3 = &lStack_58;
    _swift_dynamicCast(plVar3,auStack_50,PTR___sypN_11034f1a8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      if (*(char *)(unaff_x20 + _DAT_11309bcc0) == *(char *)(lStack_58 + _DAT_11309bcc0)) {
        if (*(char *)(unaff_x20 + _DAT_11309bcc0) == '\x01') {
          _objc_release();
          return true;
        }
        cVar1 = *(char *)((undefined8 *)(lStack_58 + _DAT_11309bcc8) + 1);
        if (*(char *)((undefined8 *)(unaff_x20 + _DAT_11309bcc8) + 1) == '\x01') {
          _objc_release();
          return cVar1 == '\x01';
        }
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_11309bcc8);
        uVar5 = *(undefined8 *)(lStack_58 + _DAT_11309bcc8);
        _objc_release();
        if (cVar1 != '\x01') {
          return (int)uVar4 == (int)uVar5;
        }
      }
      else {
        _objc_release();
      }
    }
  }
  return false;
}



/* Entry: 1048d471c; end: 1048d479b; -[SCAttributedPlusStoreKitSubtask isEqual:] */

uint FUN_1048d471c(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_1048d4618(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1048d479c; end: 1048d47ff; +[SCAttributedPlusStoreKitSubtask storeKit2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d479c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bcc0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bcc8);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4800; end: 1048d4863; +[SCAttributedPlusStoreKitSubtask processNextTransaction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4800(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bcc0) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309bcc8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4864; end: 1048d48af; -[SCAttributedPlusStoreKitSubtask matchStoreKit2:processNextTransaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4864(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_11309bcc0) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001048d4880. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (*(char *)((undefined8 *)(param_1 + _DAT_11309bcc8) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001048d48a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_11309bcc8));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d48b0);
  (*pcVar1)();
}



/* Entry: 1048d48b0; end: 1048d495b;  */

void FUN_1048d48b0(void)

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



/* Entry: 1048d495c; end: 1048d497f; -[SCAttributedPlusTask description] */

void FUN_1048d495c(void)

{
  _objc_retain();
  FUN_1048d4c94();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4980; end: 1048d49c7; -[SCAttributedPlusTask init] */

void FUN_1048d4980(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedPlusTaskWrapper.swift",0x2f,2,0xb0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d49c8);
  (*pcVar1)();
}



/* Entry: 1048d49c8; end: 1048d4a2f; +[SCAttributedPlusTask storeKit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d49c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11309bcd0) = 0;
  *(undefined8 *)(lVar2 + _DAT_11309bcd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a30; end: 1048d4a37; +[SCAttributedPlusTask remixWallpaper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a30(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = 1;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a38; end: 1048d4a3f; +[SCAttributedPlusTask creatorSubscriptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a38(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = 2;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a40; end: 1048d4a47; +[SCAttributedPlusTask petServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a40(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = 3;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a48; end: 1048d4a4f; +[SCAttributedPlusTask genAiCreateSong] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = 4;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a50; end: 1048d4a57; +[SCAttributedPlusTask aiFonts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = 5;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a58; end: 1048d4a5f; +[SCAttributedPlusTask lensRemoteApi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a58(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = 6;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a60; end: 1048d4a67; +[SCAttributedPlusTask fhpCampaignPrewarm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = 7;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4a68; end: 1048d4b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4a68(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11309bcd0) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11309bcd8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d4b84; end: 1048d4c4b; -[SCAttributedPlusTask matchStoreKit:remixWallpaper:creatorSubscriptions:petServices:genAiCreateSong:aiFonts:lensRemoteApi:fhpCampaignPrewarm:] */

void FUN_1048d4b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_f0 = param_9;
  uStack_110 = param_10;
  uStack_d0 = param_8;
  uStack_b0 = param_7;
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  func_0x0001048d4ac4(0x1048d539c,auStack_40,0x1048d53ac,auStack_60,0x1048d53c4,auStack_80,
                      0x1048d53c8,auStack_a0,0x1048d53cc,auStack_c0,0x1048d53d0,auStack_e0,
                      0x1048d53d4,auStack_100,0x1048d53d8,auStack_120);
  _objc_release(param_1);
  return;
}



/* Entry: 1048d4c4c; end: 1048d4c4f;  */

void FUN_1048d4c4c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d4c50; end: 1048d4c83;  */

void FUN_1048d4c50(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d4c84; end: 1048d4c93; -[SCAttributedPlusTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d4c84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11309bcd8));
  return;
}



/* Entry: 1048d4c94; end: 1048d501b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1048d4c94(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  bVar2 = *(byte *)(param_1 + _DAT_11309bcd0);
  uVar6 = (uint)bVar2;
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        lVar4 = *(long *)(param_1 + _DAT_11309bcd8);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1048d4db8);
          (*pcVar3)();
        }
        if (*(char *)(lVar4 + _DAT_11309bcc0) == '\x01') {
          uVar5 = 0;
          uVar6 = 0;
          uVar7 = 1;
        }
        else {
          if (*(char *)((undefined8 *)(lVar4 + _DAT_11309bcc8) + 1) == '\x01') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1048d4dbc);
            (*pcVar3)();
          }
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = *(undefined8 *)(lVar4 + _DAT_11309bcc8);
        }
      }
      else {
        uVar5 = 0;
        uVar7 = 0;
      }
    }
    else {
      uVar5 = 1;
      if (bVar2 != 2) {
        uVar5 = 2;
      }
      uVar7 = 0;
      uVar6 = 1;
    }
  }
  else {
    uVar5 = 5;
    if (bVar2 != 6) {
      uVar5 = 6;
    }
    uVar1 = 3;
    if (bVar2 != 4) {
      uVar1 = 4;
    }
    if (bVar2 < 6) {
      uVar5 = uVar1;
    }
    uVar7 = 0;
    uVar6 = 1;
  }
  _objc_release();
  auVar8._8_4_ = uVar7 | uVar6 << 8;
  auVar8._0_8_ = uVar5;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 1048d501c; end: 1048d505b;  */

void FUN_1048d501c(void)

{
  _objc_opt_self(&PTR_PTR_1129e3230);
  return;
}



/* Entry: 1048d505c; end: 1048d5307;  */

int FUN_1048d505c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf8 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 7) {
      iVar2 = 4;
    }
    if (param_2 + 7 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d50d8;
        goto LAB_1048d50bc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d50bc:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_1048d50d8:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d5308; end: 1048d5347;  */

void FUN_1048d5308(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bd30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45f08;
  _swift_getWitnessTable(&UNK_10dd45f08,&UNK_1107b51b0);
  puRam000000011309bd30 = puVar1;
  return;
}



/* Entry: 1048d5348; end: 1048d534b;  */

void FUN_1048d5348(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bd38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45fa8;
  _swift_getWitnessTable(&UNK_10dd45fa8,&UNK_1107b5120);
  puRam000000011309bd38 = puVar1;
  return;
}



/* Entry: 1048d534c; end: 1048d538b;  */

void FUN_1048d534c(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bd38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd45fa8;
  _swift_getWitnessTable(&UNK_10dd45fa8,&UNK_1107b5120);
  puRam000000011309bd38 = puVar1;
  return;
}



/* Entry: 1048d538c; end: 1048d5403;  */

ulong FUN_1048d538c(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 1048d5404; end: 1048d5407; -[SCAttributedPlusStoreKitSubtask copyWithZone:] */

void FUN_1048d5404(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d5408; end: 1048d540f; -[SCAttributedPlusTask copyWithZone:] */

void FUN_1048d5408(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d5410; end: 1048d54e3;  */

void FUN_1048d5410(void)

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



/* Entry: 1048d54e4; end: 1048d5503;  */

void FUN_1048d54e4(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d5504; end: 1048d551f; -[SCAttributedSpectaclesTask description] */

void FUN_1048d5504(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d5520; end: 1048d5567; -[SCAttributedSpectaclesTask init] */

void FUN_1048d5520(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSpectaclesTaskWrapper.swift",0x35,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d5568);
  (*pcVar1)();
}



/* Entry: 1048d5568; end: 1048d556b; -[SCAttributedSpectaclesTask copyWithZone:] */

void FUN_1048d5568(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d556c; end: 1048d5573; +[SCAttributedSpectaclesTask postStartupInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d556c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd40) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d5574; end: 1048d557b; +[SCAttributedSpectaclesTask metadataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5574(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd40) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d557c; end: 1048d5583; +[SCAttributedSpectaclesTask actionTweaksEntryPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d557c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd40) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d5584; end: 1048d55d7; -[SCAttributedSpectaclesTask matchDeviceConnection:debugStatusController:postStartupInit:setupLagunaDataSource:metadataProvider:actionTweaksEntryPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d5584(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11309bd40);
  if (bVar1 < 3) {
    param_6 = param_3;
    if ((bVar1 != 0) && (param_6 = param_4, bVar1 != 1)) {
      param_6 = param_5;
    }
  }
  else if ((bVar1 != 3) && (param_6 = param_7, bVar1 != 4)) {
    param_6 = param_8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001048d55d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_6 + 0x10))(param_6);
  return;
}



/* Entry: 1048d55d8; end: 1048d560b;  */

void FUN_1048d55d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1048d560c; end: 1048d569f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d560c(ulong param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong auStack_80 [12];
  
  uVar5 = param_1;
  FUN_1048d56a0();
  uVar6 = uVar5;
  _objc_allocWithZone();
  uVar1 = (uint)param_1 & 0xff;
  puVar2 = auStack_80 + 8;
  if (uVar1 != 4) {
    puVar2 = auStack_80 + 10;
  }
  puVar4 = auStack_80 + 6;
  if (uVar1 != 3) {
    puVar4 = puVar2;
  }
  puVar2 = auStack_80 + 2;
  if (uVar1 != 1) {
    puVar2 = auStack_80 + 4;
  }
  puVar3 = auStack_80;
  if ((param_1 & 0xff) != 0) {
    puVar3 = puVar2;
  }
  if (uVar1 < 3) {
    puVar4 = puVar3;
  }
  *(char *)(uVar6 + _DAT_11309bd40) = (char)param_1;
  *puVar4 = uVar6;
  puVar4[1] = uVar5;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1048d56a0; end: 1048d56bf;  */

void FUN_1048d56a0(void)

{
  _objc_opt_self(&PTR_PTR_1129e33c0);
  return;
}



/* Entry: 1048d56c0; end: 1048d5827;  */

int FUN_1048d56c0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1048d573c;
        goto LAB_1048d5720;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1048d5720:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_1048d573c:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1048d5828; end: 1048d5867;  */

void FUN_1048d5828(void)

{
  undefined *puVar1;
  
  if (puRam000000011309bd70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd46090;
  _swift_getWitnessTable(&UNK_10dd46090,&UNK_1107b5298);
  puRam000000011309bd70 = puVar1;
  return;
}



/* Entry: 1048d5868; end: 1048d5877;  */

ulong FUN_1048d5868(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 1048d5878; end: 1048d594b;  */

void FUN_1048d5878(void)

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



/* Entry: 1048d594c; end: 1048d596b;  */

void FUN_1048d594c(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 1048d596c; end: 1048d5987; -[SCAttributedSpotlightTask description] */

void FUN_1048d596c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d5988; end: 1048d59cf; -[SCAttributedSpotlightTask init] */

void FUN_1048d5988(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSpotlightTaskWrapper.swift",0x34,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1048d59d0);
  (*pcVar1)();
}



/* Entry: 1048d59d0; end: 1048d59d3; -[SCAttributedSpotlightTask copyWithZone:] */

void FUN_1048d59d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1048d59d4; end: 1048d59db; +[SCAttributedSpotlightTask recentStoriesDatabase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d59d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd78) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d59dc; end: 1048d59e3; +[SCAttributedSpotlightTask spotlightUsageDatabase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d59dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd78) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d59e4; end: 1048d59eb; +[SCAttributedSpotlightTask mixeFeedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d59e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd78) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1048d59ec; end: 1048d59f3; +[SCAttributedSpotlightTask liveActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1048d59ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309bd78) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


