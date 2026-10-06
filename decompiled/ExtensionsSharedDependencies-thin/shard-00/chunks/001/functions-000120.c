/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00217c38; end: 00217ca3; +[SCAttributedSharingTask sendToRankingRecents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7e90) = 1;
  *(undefined8 *)(lVar2 + _DAT_00af7e98) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217ca4; end: 00217cab; +[SCAttributedSharingTask selectionGroupObservableRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217ca4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e90) = 2;
  *(undefined8 *)(lVar1 + _DAT_00af7e98) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217cac; end: 00217cb3; +[SCAttributedSharingTask grantRewardIncentiveCampaign] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217cac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e90) = 3;
  *(undefined8 *)(lVar1 + _DAT_00af7e98) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217cb4; end: 00217cbb; +[SCAttributedSharingTask shortcutsBadging] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217cb4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e90) = 4;
  *(undefined8 *)(lVar1 + _DAT_00af7e98) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217cbc; end: 00217d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217cbc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7e90) = param_3;
  *(undefined8 *)(lVar1 + _DAT_00af7e98) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00217d18; end: 00217d93; -[SCAttributedSharingTask matchSendToPreload:sendToRankingRecents:selectionGroupObservableRepository:grantRewardIncentiveCampaign:shortcutsBadging:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217d18(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  code *pcVar2;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7e90);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00217d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x10))(param_3);
      return;
    }
    if (*(long *)(param_1 + _DAT_00af7e98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00217d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_4 + 0x10))(param_4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x217d90);
    (*pcVar2)();
  }
  if (bVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00217d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x10))(param_5);
    return;
  }
  if (bVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00217d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_6 + 0x10))(param_6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00217d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_7 + 0x10))(param_7);
  return;
}



/* Entry: 00217d94; end: 00217dc7;  */

void FUN_00217d94(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00217dc8; end: 00217dd7; -[SCAttributedSharingTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00217dc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af7e98));
  return;
}



/* Entry: 00217dd8; end: 00217e5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00217dd8(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined1 uVar3;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7e90);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar3 = 8;
    }
    else {
      if (*(long *)(param_1 + _DAT_00af7e98) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x217e60);
        (*pcVar2)();
      }
      uVar3 = *(undefined1 *)(*(long *)(param_1 + _DAT_00af7e98) + _DAT_00af7e88);
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



/* Entry: 00217e60; end: 00217e9f;  */

void FUN_00217e60(void)

{
  _objc_opt_self(&PTR_PTR_00acea70);
  return;
}



/* Entry: 00217ea0; end: 0021815b;  */

int FUN_00217ea0(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00217f1c;
        goto LAB_00217f00;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00217f00:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_00217f1c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0021815c; end: 0021819b;  */

void FUN_0021815c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007eccd0;
  _swift_getWitnessTable(&UNK_007eccd0,&UNK_009bf6b0);
  puRam0000000000af7ef0 = puVar1;
  return;
}



/* Entry: 0021819c; end: 0021819f;  */

void FUN_0021819c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ecd70;
  _swift_getWitnessTable(&UNK_007ecd70,&UNK_009bf620);
  puRam0000000000af7ef8 = puVar1;
  return;
}



/* Entry: 002181a0; end: 002181df;  */

void FUN_002181a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ecd70;
  _swift_getWitnessTable(&UNK_007ecd70,&UNK_009bf620);
  puRam0000000000af7ef8 = puVar1;
  return;
}



/* Entry: 002181e0; end: 0021825b;  */

ulong FUN_002181e0(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 0021825c; end: 0021825f; -[SCAttributedSendToRankingRecentsSubTask copyWithZone:] */

void FUN_0021825c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00218260; end: 00218267; -[SCAttributedSharingTask copyWithZone:] */

void FUN_00218260(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00218268; end: 00218313;  */

void FUN_00218268(void)

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



/* Entry: 00218314; end: 0021834b;  */

void FUN_00218314(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 0021834c; end: 00218367; -[SCAttributedSnapAdsTask description] */

void FUN_0021834c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218368; end: 002183af; -[SCAttributedSnapAdsTask init] */

void FUN_00218368(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSnapAdsTaskWrapper.swift",0x32,2,0x2e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2183b0);
  (*pcVar1)();
}



/* Entry: 002183b0; end: 002183b3; -[SCAttributedSnapAdsTask copyWithZone:] */

void FUN_002183b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002183b4; end: 002183bb; +[SCAttributedSnapAdsTask promoteDeeplinkPlugin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002183b4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f00) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002183bc; end: 002183c3; +[SCAttributedSnapAdsTask businessIAPService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002183bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f00) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002183c4; end: 002183cb; +[SCAttributedSnapAdsTask userStoriesAdPrefetchPrewarm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002183c4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f00) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002183cc; end: 0021841b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002183cc(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f00) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021841c; end: 00218447; -[SCAttributedSnapAdsTask matchPromoteDeeplinkPlugin:businessIAPService:userStoriesAdPrefetchPrewarm:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021841c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  if ((*(char *)(param_1 + _DAT_00af7f00) != '\0') &&
     (param_3 = param_4, *(char *)(param_1 + _DAT_00af7f00) != '\x01')) {
    param_3 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00218444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 00218448; end: 0021849b;  */

void FUN_00218448(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0021849c; end: 00218603;  */

int FUN_0021849c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00218518;
        goto LAB_002184fc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_002184fc:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_00218518:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00218604; end: 00218643;  */

void FUN_00218604(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ece50;
  _swift_getWitnessTable(&UNK_007ece50,&UNK_009bf798);
  puRam0000000000af7f30 = puVar1;
  return;
}



/* Entry: 00218644; end: 00218663;  */

void FUN_00218644(undefined1 *param_1,long *param_2)

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



/* Entry: 00218664; end: 002186af; -[SCAttributedPlusStoreKitSubtask description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218664(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_00af7f38) != '\x01') &&
     (*(char *)(param_1 + _DAT_00af7f40 + 8) == '\x01')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x2186b0);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002186b0; end: 002186f7; -[SCAttributedPlusStoreKitSubtask init] */

void FUN_002186b0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedPlusTaskWrapper.swift",0x2f,2,0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2186f8);
  (*pcVar1)();
}



/* Entry: 002186f8; end: 00218783; -[SCAttributedPlusStoreKitSubtask hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002186f8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyySuF(*(undefined1 *)(param_1 + _DAT_00af7f38));
  if (*(char *)((undefined8 *)(param_1 + _DAT_00af7f40) + 1) == '\x01') {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_00af7f40);
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 00218784; end: 00218887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00218784(undefined8 param_1)

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
  func_0x00059828(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_00027748(auStack_50);
  }
  else {
    plVar3 = &lStack_58;
    _swift_dynamicCast(plVar3,auStack_50,PTR___sypN_0099b8d8 + 8,lVar2,6);
    if (((ulong)plVar3 & 1) != 0) {
      if (*(char *)(unaff_x20 + _DAT_00af7f38) == *(char *)(lStack_58 + _DAT_00af7f38)) {
        if (*(char *)(unaff_x20 + _DAT_00af7f38) == '\x01') {
          _objc_release();
          return true;
        }
        cVar1 = *(char *)((undefined8 *)(lStack_58 + _DAT_00af7f40) + 1);
        if (*(char *)((undefined8 *)(unaff_x20 + _DAT_00af7f40) + 1) == '\x01') {
          _objc_release();
          return cVar1 == '\x01';
        }
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_00af7f40);
        uVar5 = *(undefined8 *)(lStack_58 + _DAT_00af7f40);
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



/* Entry: 00218888; end: 00218907; -[SCAttributedPlusStoreKitSubtask isEqual:] */

uint FUN_00218888(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_00218784(&uStack_40);
  _objc_release(param_1);
  FUN_00027748(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00218908; end: 0021896b; +[SCAttributedPlusStoreKitSubtask storeKit2:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218908(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7f38) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7f40);
  *puVar1 = param_3;
  *(undefined1 *)(puVar1 + 1) = 0;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021896c; end: 002189cf; +[SCAttributedPlusStoreKitSubtask processNextTransaction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021896c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7f38) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_00af7f40);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002189d0; end: 00218a1f; -[SCAttributedPlusStoreKitSubtask matchStoreKit2:processNextTransaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002189d0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (*(char *)(param_1 + _DAT_00af7f38) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x002189ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  if (*(char *)((undefined8 *)(param_1 + _DAT_00af7f40) + 1) != '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00218a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + _DAT_00af7f40));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x218a1c);
  (*pcVar1)();
}



/* Entry: 00218a20; end: 00218a8b;  */

void FUN_00218a20(void)

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



/* Entry: 00218a8c; end: 00218a8f;  */

void FUN_00218a8c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00218a90; end: 00218af7;  */

void FUN_00218a90(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00218af8; end: 00218b17;  */

void FUN_00218af8(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00218b18; end: 00218b3b; -[SCAttributedPlusTask description] */

void FUN_00218b18(void)

{
  _objc_retain();
  FUN_00218e54();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218b3c; end: 00218b83; -[SCAttributedPlusTask init] */

void FUN_00218b3c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedPlusTaskWrapper.swift",0x2f,2,0xb0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x218b84);
  (*pcVar1)();
}



/* Entry: 00218b84; end: 00218b87;  */

void FUN_00218b84(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00218b88; end: 00218bef; +[SCAttributedPlusTask storeKit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_00af7f48) = 0;
  *(undefined8 *)(lVar2 + _DAT_00af7f50) = param_3;
  puVar1 = PTR_s_init_00abbf70;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218bf0; end: 00218bf7; +[SCAttributedPlusTask remixWallpaper] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218bf0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = 1;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218bf8; end: 00218bff; +[SCAttributedPlusTask creatorSubscriptions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218bf8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = 2;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218c00; end: 00218c07; +[SCAttributedPlusTask petServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218c00(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = 3;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218c08; end: 00218c0f; +[SCAttributedPlusTask genAiCreateSong] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218c08(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = 4;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218c10; end: 00218c17; +[SCAttributedPlusTask aiFonts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218c10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = 5;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218c18; end: 00218c1f; +[SCAttributedPlusTask lensRemoteApi] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218c18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = 6;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218c20; end: 00218c27; +[SCAttributedPlusTask fhpCampaignPrewarm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218c20(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = 7;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218c28; end: 00218d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218c28(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7f48) = param_3;
  *(undefined8 *)(lVar1 + _DAT_00af7f50) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00218d44; end: 00218e0b; -[SCAttributedPlusTask matchStoreKit:remixWallpaper:creatorSubscriptions:petServices:genAiCreateSong:aiFonts:lensRemoteApi:fhpCampaignPrewarm:] */

void FUN_00218d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  func_0x00218c84(0x21930c,auStack_40,0x21931c,auStack_60,0x219334,auStack_80,0x219338,auStack_a0,
                  0x21933c,auStack_c0,0x219340,auStack_e0,0x219344,auStack_100,0x219348,auStack_120)
  ;
  _objc_release(param_1);
  return;
}



/* Entry: 00218e0c; end: 00218e0f;  */

void FUN_00218e0c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00218e10; end: 00218e43;  */

void FUN_00218e10(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00218e44; end: 00218e53; -[SCAttributedPlusTask .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00218e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(*(undefined8 *)(param_1 + _DAT_00af7f50));
  return;
}



/* Entry: 00218e54; end: 00218f7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00218e54(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  
  bVar2 = *(byte *)(param_1 + _DAT_00af7f48);
  uVar6 = (uint)bVar2;
  if (bVar2 < 4) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        lVar4 = *(long *)(param_1 + _DAT_00af7f50);
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x218f78);
          (*pcVar3)();
        }
        if (*(char *)(lVar4 + _DAT_00af7f38) == '\x01') {
          uVar5 = 0;
          uVar6 = 0;
          uVar7 = 1;
        }
        else {
          if (*(char *)((undefined8 *)(lVar4 + _DAT_00af7f40) + 1) == '\x01') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x218f7c);
            (*pcVar3)();
          }
          uVar7 = 0;
          uVar6 = 0;
          uVar5 = *(undefined8 *)(lVar4 + _DAT_00af7f40);
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



/* Entry: 00218f7c; end: 00218fbb;  */

void FUN_00218f7c(void)

{
  _objc_opt_self(&PTR_PTR_00acecb8);
  return;
}



/* Entry: 00218fbc; end: 00219277;  */

int FUN_00218fbc(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00219038;
        goto LAB_0021901c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_0021901c:
      return ((uint)*param_1 | uVar1 << 8) - 7;
    }
  }
LAB_00219038:
  iVar2 = *param_1 - 8;
  if (*param_1 < 8) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00219278; end: 002192b7;  */

void FUN_00219278(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ecf88;
  _swift_getWitnessTable(&UNK_007ecf88,&UNK_009bf910);
  puRam0000000000af7fa8 = puVar1;
  return;
}



/* Entry: 002192b8; end: 002192bb;  */

void FUN_002192b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed028;
  _swift_getWitnessTable(&UNK_007ed028,&UNK_009bf880);
  puRam0000000000af7fb0 = puVar1;
  return;
}



/* Entry: 002192bc; end: 002192fb;  */

void FUN_002192bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed028;
  _swift_getWitnessTable(&UNK_007ed028,&UNK_009bf880);
  puRam0000000000af7fb0 = puVar1;
  return;
}



/* Entry: 002192fc; end: 00219373;  */

ulong FUN_002192fc(ulong param_1)

{
  if (7 < param_1) {
    param_1 = 8;
  }
  return param_1;
}



/* Entry: 00219374; end: 00219377; -[SCAttributedPlusStoreKitSubtask copyWithZone:] */

void FUN_00219374(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00219378; end: 0021937f; -[SCAttributedPlusTask copyWithZone:] */

void FUN_00219378(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00219380; end: 00219453;  */

void FUN_00219380(void)

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



/* Entry: 00219454; end: 00219473;  */

void FUN_00219454(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 00219474; end: 0021948f; -[SCAttributedSpectaclesTask description] */

void FUN_00219474(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219490; end: 002194d7; -[SCAttributedSpectaclesTask init] */

void FUN_00219490(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSpectaclesTaskWrapper.swift",0x35,2,0x3d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2194d8);
  (*pcVar1)();
}



/* Entry: 002194d8; end: 002194db; -[SCAttributedSpectaclesTask copyWithZone:] */

void FUN_002194d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 002194dc; end: 002194e3; +[SCAttributedSpectaclesTask deviceConnection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002194dc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7fb8) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002194e4; end: 002194eb; +[SCAttributedSpectaclesTask debugStatusController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002194e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7fb8) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002194ec; end: 002194f3; +[SCAttributedSpectaclesTask postStartupInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002194ec(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7fb8) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002194f4; end: 002194fb; +[SCAttributedSpectaclesTask setupLagunaDataSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002194f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7fb8) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002194fc; end: 00219503; +[SCAttributedSpectaclesTask metadataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002194fc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7fb8) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219504; end: 0021950b; +[SCAttributedSpectaclesTask actionTweaksEntryPoint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219504(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7fb8) = 5;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021950c; end: 0021955b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021950c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7fb8) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 0021955c; end: 002195af; -[SCAttributedSpectaclesTask matchDeviceConnection:debugStatusController:postStartupInit:setupLagunaDataSource:metadataProvider:actionTweaksEntryPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0021955c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7,long param_8)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7fb8);
  if (bVar1 < 3) {
    param_6 = param_3;
    if ((bVar1 != 0) && (param_6 = param_4, bVar1 != 1)) {
      param_6 = param_5;
    }
  }
  else if ((bVar1 != 3) && (param_6 = param_7, bVar1 != 4)) {
    param_6 = param_8;
  }
                    /* WARNING: Could not recover jumptable at 0x002195ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_6 + 0x10))(param_6);
  return;
}



/* Entry: 002195b0; end: 00219603;  */

void FUN_002195b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00219604; end: 0021976b;  */

int FUN_00219604(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00219680;
        goto LAB_00219664;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00219664:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_00219680:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 0021976c; end: 002197ab;  */

void FUN_0021976c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af7fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed110;
  _swift_getWitnessTable(&UNK_007ed110,&UNK_009bf9f8);
  puRam0000000000af7fe8 = puVar1;
  return;
}



/* Entry: 002197ac; end: 002197bb;  */

ulong FUN_002197ac(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Entry: 002197bc; end: 0021988f;  */

void FUN_002197bc(void)

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



/* Entry: 00219890; end: 002198af;  */

void FUN_00219890(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 002198b0; end: 002198cb; -[SCAttributedSpotlightTask description] */

void FUN_002198b0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 002198cc; end: 00219913; -[SCAttributedSpotlightTask init] */

void FUN_002198cc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SnapAttribution/AttributedSpotlightTaskWrapper.swift",0x34,2,0x38,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x219914);
  (*pcVar1)();
}



/* Entry: 00219914; end: 00219917; -[SCAttributedSpotlightTask copyWithZone:] */

void FUN_00219914(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_0099ada8)();
  return;
}



/* Entry: 00219918; end: 0021991f; +[SCAttributedSpotlightTask recentStoriesDatabase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219918(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7ff0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219920; end: 00219927; +[SCAttributedSpotlightTask spotlightUsageDatabase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219920(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7ff0) = 1;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219928; end: 0021992f; +[SCAttributedSpotlightTask mixeFeedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219928(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7ff0) = 2;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219930; end: 00219937; +[SCAttributedSpotlightTask notificationProcessor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219930(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7ff0) = 3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219938; end: 0021993f; +[SCAttributedSpotlightTask liveActivity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219938(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7ff0) = 4;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219940; end: 0021998f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219940(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_00af7ff0) = param_3;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_00abbf70);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00219990; end: 002199d7; -[SCAttributedSpotlightTask matchRecentStoriesDatabase:spotlightUsageDatabase:mixeFeedViewController:notificationProcessor:liveActivity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00219990(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long param_6,long param_7)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_00af7ff0);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_3 = param_4;
    }
  }
  else {
    param_3 = param_5;
    if ((bVar1 != 2) && (param_3 = param_6, bVar1 != 3)) {
      param_3 = param_7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x002199d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 002199d8; end: 00219a2b;  */

void FUN_002199d8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 00219a2c; end: 00219b93;  */

int FUN_00219a2c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_00219aa8;
        goto LAB_00219a8c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_00219a8c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_00219aa8:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 00219b94; end: 00219bd3;  */

void FUN_00219b94(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af8020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007ed1f0;
  _swift_getWitnessTable(&UNK_007ed1f0,&UNK_009bfae0);
  puRam0000000000af8020 = puVar1;
  return;
}


