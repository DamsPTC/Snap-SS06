/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f17d18; end: 103f17da3; -[SCDiscoverFeedPlayFriendStoryActionDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17d18(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e350));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e358));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e360));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e368));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e370));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e388));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302e3a0 + 8))
  ;
  return;
}



/* Entry: 103f17da4; end: 103f17f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17da4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = *param_1;
  uStack_40 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11302e350) = uStack_38;
  *(undefined8 *)(unaff_x20 + _DAT_11302e358) = uStack_40;
  uStack_48 = param_1[2];
  uStack_50 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11302e360) = uStack_48;
  *(undefined8 *)(unaff_x20 + _DAT_11302e368) = uStack_50;
  uStack_58 = param_1[4];
  uVar2 = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11302e370) = uStack_58;
  *(undefined8 *)(unaff_x20 + _DAT_11302e378) = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11302e380) = *(undefined1 *)(param_1 + 6);
  uStack_60 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11302e388) = uStack_60;
  *(undefined8 *)(unaff_x20 + _DAT_11302e390) = param_1[8];
  *(undefined1 *)(unaff_x20 + _DAT_11302e398) = *(undefined1 *)(param_1 + 9);
  uStack_68 = param_1[0xb];
  uStack_70 = param_1[10];
  uVar2 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e3a0);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  func_0x000103f1810c(&uStack_38,auStack_80,0x11302e3d0,&UNK_10dcaa5d0);
  func_0x000103f1810c(&uStack_40,auStack_80,0x11302e3d8,&UNK_10dcaa5d8);
  func_0x000103f1810c(&uStack_48,auStack_80,0x11302e3d8,&UNK_10dcaa5d8);
  func_0x000103f1810c(&uStack_50,auStack_80,0x112d511f0,&UNK_10d917eb0);
  func_0x000103f1810c(&uStack_58,auStack_80,0x11302e3e0,&UNK_10dcaa5e8);
  func_0x000103f1810c(&uStack_60,auStack_80,0x11302e3e8,&UNK_10dcaa5f0);
  func_0x000103f1810c(&uStack_70,auStack_80,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xffffffffffffff70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f17f70; end: 103f17fa3;  */

undefined8 FUN_103f17f70(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f15d8c)();
  return param_1;
}



/* Entry: 103f17fa4; end: 103f180ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17fa4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar4 = *(undefined8 *)(param_2 + _DAT_11302e350);
  uVar6 = *(undefined8 *)(param_2 + _DAT_11302e358);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11302e360);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11302e368);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11302e370);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11302e378);
  uVar2 = *(undefined1 *)(param_2 + _DAT_11302e380);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11302e388);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11302e390);
  uVar3 = *(undefined1 *)(param_2 + _DAT_11302e398);
  puVar1 = (undefined8 *)(param_2 + _DAT_11302e3a0);
  *param_1 = uVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  param_1[4] = uVar9;
  param_1[5] = uVar5;
  *(undefined1 *)(param_1 + 6) = uVar2;
  param_1[7] = uVar10;
  param_1[8] = uVar11;
  *(undefined1 *)(param_1 + 9) = uVar3;
  uVar5 = puVar1[1];
  uVar11 = *puVar1;
  param_1[0xb] = puVar1[1];
  param_1[10] = uVar11;
  _objc_retain(uVar4);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103f180ac; end: 103f180cb;  */

void FUN_103f180ac(void)

{
  _objc_opt_self(&PTR_PTR_112965700);
  return;
}



/* Entry: 103f180cc; end: 103f18153;  */

void FUN_103f180cc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 103f18154; end: 103f18163; -[SCMixedCarouselPlayStoryActionDataModel initialStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e3f0));
  return;
}



/* Entry: 103f18164; end: 103f181b3; -[SCMixedCarouselPlayStoryActionDataModel allMixedStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18164(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302e3f8);
  func_0x000103f183e8(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103f181b4; end: 103f181c7; -[SCMixedCarouselPlayStoryActionDataModel loggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f181b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e400));
  return;
}



/* Entry: 103f181c8; end: 103f1826f; -[SCMixedCarouselPlayStoryActionDataModel initWithInitialStory:allMixedStories:loggingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f181c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  uVar3 = 0;
  func_0x000103f183e8(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,uVar3);
  *(undefined8 *)(param_1 + _DAT_11302e3f0) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302e3f8) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302e400) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 103f18270; end: 103f182e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302e3f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e3f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302e400) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f182e4; end: 103f182e7; -[SCMixedCarouselPlayStoryActionDataModel copyWithZone:] */

void FUN_103f182e4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f182e8; end: 103f18303; -[SCMixedCarouselPlayStoryActionDataModel description] */

void FUN_103f182e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f18304; end: 103f1837f; -[SCMixedCarouselPlayStoryActionDataModel init] */

void FUN_103f18304(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedStoriesServices/SCMixedCarouselPlayStoryActionDataModelWrapper.swift",
             0x52,2,0x2c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1834c);
  (*pcVar1)();
}



/* Entry: 103f18380; end: 103f183c7; -[SCMixedCarouselPlayStoryActionDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18380(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e3f0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e3f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e400));
  return;
}



/* Entry: 103f183c8; end: 103f1842b;  */

void FUN_103f183c8(void)

{
  _objc_opt_self(&PTR_PTR_112965818);
  return;
}



/* Entry: 103f1842c; end: 103f1842f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1842c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302e3f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e3f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302e400) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f18430; end: 103f184db;  */

void FUN_103f18430(void)

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



/* Entry: 103f184dc; end: 103f1851b;  */

void FUN_103f184dc(undefined1 *param_1,long *param_2)

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



/* Entry: 103f1851c; end: 103f18563; -[SCDiscoverFeedStoriesReplayManagerRequest description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1851c(long param_1)

{
  code *pcVar1;
  
  if ((*(char *)(param_1 + _DAT_11302e430) != '\x01') &&
     (*(char *)(param_1 + _DAT_11302e440) == '\x02')) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103f18564);
    (*pcVar1)();
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f18564; end: 103f185ab; -[SCDiscoverFeedStoriesReplayManagerRequest init] */

void FUN_103f18564(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedStoriesServices/SCDiscoverFeedStoriesReplayManagerRequestWrapper.swift",
             0x54,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f185ac);
  (*pcVar1)();
}



/* Entry: 103f185ac; end: 103f185af; -[SCDiscoverFeedStoriesReplayManagerRequest copyWithZone:] */

void FUN_103f185ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f185b0; end: 103f1864b; +[SCDiscoverFeedStoriesReplayManagerRequest startToPlayStoryWithStoryId:hasUnviewedSnaps:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f185b0(long param_1,long param_2,long param_3,undefined1 param_4)

{
  long *plVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11302e430) = 0;
  plVar1 = (long *)(lVar2 + _DAT_11302e438);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined1 *)(lVar2 + _DAT_11302e440) = param_4;
  lStack_40 = lVar2;
  lStack_38 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1864c; end: 103f186bb; +[SCDiscoverFeedStoriesReplayManagerRequest clearTokens] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1864c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11302e430) = 1;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11302e438);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(lVar2 + _DAT_11302e440) = 2;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f186bc; end: 103f1878b; -[SCDiscoverFeedStoriesReplayManagerRequest matchStartToPlayStory:clearTokens:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f186bc(long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + _DAT_11302e430) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103f186fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x10))(param_4);
    return;
  }
  bVar1 = *(byte *)(param_1 + _DAT_11302e440);
  if (bVar1 != 2) {
    lVar3 = ((undefined8 *)(param_1 + _DAT_11302e438))[1];
    if (lVar3 == 0) {
      _objc_retain();
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + _DAT_11302e438);
      _objc_retain();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar3);
    }
    (**(code **)(param_3 + 0x10))(param_3,uVar4,bVar1 & 1);
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f1878c);
  (*pcVar2)();
}



/* Entry: 103f1878c; end: 103f187bf;  */

void FUN_103f1878c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f187c0; end: 103f187d3; -[SCDiscoverFeedStoriesReplayManagerRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f187c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302e438 + 8))
  ;
  return;
}



/* Entry: 103f187d4; end: 103f187f3;  */

void FUN_103f187d4(void)

{
  _objc_opt_self(&PTR_PTR_1129658f0);
  return;
}



/* Entry: 103f187f4; end: 103f1895b;  */

int FUN_103f187f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f18870;
        goto LAB_103f18854;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f18854:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_103f18870:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f1895c; end: 103f1899b;  */

void FUN_103f1895c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaa690;
  _swift_getWitnessTable(&UNK_10dcaa690,&UNK_110721368);
  puRam000000011302e470 = puVar1;
  return;
}



/* Entry: 103f1899c; end: 103f189f7; -[SCDiscoverFeedFriendStoryLoggingInfo identifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1899c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302e478))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302e478);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f189f8; end: 103f18a07; -[SCDiscoverFeedFriendStoryLoggingInfo isFullyViewed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f189f8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e480);
}



/* Entry: 103f18a08; end: 103f18a1b; -[SCDiscoverFeedFriendStoryLoggingInfo numSnapsAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f18a08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e488);
}



/* Entry: 103f18a1c; end: 103f18b3b; -[SCDiscoverFeedFriendStoryLoggingInfo initWithIdentifier:isFullyViewed:numSnapsAvailable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18a1c(long param_1,long param_2,long param_3,undefined1 param_4,undefined8 param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11302e478);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_11302e480) = param_4;
  *(undefined8 *)(param_1 + _DAT_11302e488) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f18b3c; end: 103f18b3f; -[SCDiscoverFeedFriendStoryLoggingInfo copyWithZone:] */

void FUN_103f18b3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f18b40; end: 103f18b5b; -[SCDiscoverFeedFriendStoryLoggingInfo description] */

void FUN_103f18b40(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f18b5c; end: 103f18bd7; -[SCDiscoverFeedFriendStoryLoggingInfo init] */

void FUN_103f18b5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedStoriesServices/SCDiscoverFeedFriendStoryLoggingInfoWrapper.swift",0x4f,
             2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f18ba4);
  (*pcVar1)();
}



/* Entry: 103f18bd8; end: 103f18beb; -[SCDiscoverFeedFriendStoryLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18bd8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302e478 + 8))
  ;
  return;
}



/* Entry: 103f18bec; end: 103f18c0b;  */

void FUN_103f18bec(void)

{
  _objc_opt_self(&PTR_PTR_1129659c0);
  return;
}



/* Entry: 103f18c0c; end: 103f18c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18c0c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e478);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11302e480) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302e488) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f18c10; end: 103f18d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f18c10(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_1107213e0;
  _swift_allocObject(&UNK_1107213e0,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  uVar2 = 0x11302e1f8;
  func_0x0001000285a8(0x11302e1f8,&UNK_10dcaa1f0);
  uVar3 = uVar2;
  FUN_103f18db8();
  pcVar4 = FUN_103f18db0;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_103f18db0,puVar1,uVar2,uVar3);
  _swift_release(puVar1);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_48);
  _swift_release(pcVar4);
  puVar1 = &UNK_110721408;
  _swift_allocObject(&UNK_110721408,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_49,FUN_103f18ef8,auStack_80,uVar2);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(puStack_48);
  return 1;
}



/* Entry: 103f18d54; end: 103f18daf;  */

void FUN_103f18d54(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000107c41e30();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 103f18db0; end: 103f18db7;  */

void FUN_103f18db0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c41e30();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 103f18db8; end: 103f18e07;  */

void FUN_103f18db8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011302e4c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11302e1f8;
  func_0x00010002969c(0x11302e1f8,&UNK_10dcaa1f0);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam000000011302e4c0 = puVar2;
  return;
}



/* Entry: 103f18e08; end: 103f18ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18e08(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_11302e4d0;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_11302e4d0,auStack_80,0x21,0);
    _swift_bridgeObjectRetain(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    func_0x00010049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    _swift_endAccess(auStack_80);
    _objc_release(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 103f18ef8; end: 103f18f13;  */

void FUN_103f18ef8(void)

{
  long unaff_x20;
  
  FUN_103f18e08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103f18f14; end: 103f18f63; -[SCDiscoverFeedFriendStoriesDataCoordinatingListenerAnnouncer addListener:] */

undefined8 FUN_103f18f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103f18c10(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 103f18f64; end: 103f18fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18f64(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_110721408;
  _swift_allocObject(&UNK_110721408,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_103f192e0,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 103f18ff0; end: 103f192df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f18ff0(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_f0 [3];
  ulong auStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  lVar9 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar6 = _DAT_11302e4d0;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_11302e4d0,puVar4,0,0);
    lVar6 = *(long *)(lVar9 + lVar6);
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lVar9);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar9 = param_2, func_0x0001000a7158(), ((ulong)puVar4 & 1) == 0)) {
      _swift_bridgeObjectRelease(lVar6);
    }
    else {
      uVar13 = *(ulong *)(*(long *)(lVar6 + 0x38) + lVar9 * 8);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRelease(lVar6);
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar7 = -1L << ((ulong)*(byte *)(uVar13 + 0x20) & 0x3f);
        puVar12 = (ulong *)(uVar13 + 0x38);
        uVar8 = ~uVar7;
        uVar7 = -uVar7;
        uVar5 = 0xffffffffffffffff;
        if (uVar7 < 0x40) {
          uVar5 = ~(-1L << (uVar7 & 0x3f));
        }
        uVar5 = uVar5 & *puVar12;
        uVar7 = uVar13;
        _swift_bridgeObjectRetain();
        lVar9 = 0;
        uVar14 = uVar13;
      }
      else {
        uVar7 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar7 = uVar13;
        }
        _swift_bridgeObjectRetain(uVar13);
        __ss10__CocoaSetV12makeIteratorAB0D0CyF();
        uVar2 = 0;
        __s7Combine14AnyCancellableCMa(0);
        uVar3 = uVar2;
        FUN_103b8dfcc();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_103f191bc;
      while( true ) {
        while (uVar5 != 0) {
          uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = *(ulong *)(*(long *)(uVar14 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                            lVar6 * 0x200);
          auStack_d8[0] = uVar7;
          _swift_retain(uVar7);
          uVar5 = uVar5 - 1 & uVar5;
          lVar10 = lVar9;
          while( true ) {
            lVar9 = lVar6;
            if (uVar7 == 0) goto LAB_103f19228;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_103f191bc:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_103f19224;
            uVar3 = 0;
            auStack_f0[0] = uVar7;
            __s7Combine14AnyCancellableCMa(0);
            _swift_dynamicCast(auStack_d8,auStack_f0,PTR___syXlN_11034f1a0 + 8,uVar3,7);
            uVar5 = uVar11;
            uVar7 = auStack_d8[0];
            lVar6 = lVar9;
            lVar10 = lVar9;
          }
        }
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f192e0);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_103f19224:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_103f19228:
      FUN_103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_11302e4d0,auStack_f0,0x21,0);
    FUN_103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 103f192e0; end: 103f192f7;  */

void FUN_103f192e0(void)

{
  long unaff_x20;
  
  FUN_103f18ff0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103f192f8; end: 103f193af; -[SCDiscoverFeedFriendStoriesDataCoordinatingListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f192f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110721408;
  _swift_allocObject(&UNK_110721408,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_103f195a0,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 103f193b0; end: 103f193e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f193b0(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 103f193e8; end: 103f19453; -[SCDiscoverFeedFriendStoriesDataCoordinatingListenerAnnouncer didUpdateWithDiscoverFeedFriendStoryDataRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f193e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 103f19454; end: 103f19473;  */

void FUN_103f19454(void)

{
  _objc_opt_self(&PTR_PTR_112965a98);
  return;
}



/* Entry: 103f19474; end: 103f19527; -[SCDiscoverFeedFriendStoriesDataCoordinatingListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19474(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_11302e4c8;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_11302e4d0) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_11302e4b8;
  uVar2 = 0x11302e1f8;
  func_0x0001000285a8(0x11302e1f8,&UNK_10dcaa1f0);
  _swift_allocObject();
  __s7Combine18PassthroughSubjectCACyxq_Gycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_103f19454();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f19528; end: 103f19557;  */

void FUN_103f19528(void)

{
  FUN_103f19454();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f19558; end: 103f1959f; -[SCDiscoverFeedFriendStoriesDataCoordinatingListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19558(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302e4c8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e4d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302e4b8));
  return;
}



/* Entry: 103f195a0; end: 103f195b3;  */

void FUN_103f195a0(void)

{
  FUN_103f192e0();
  return;
}



/* Entry: 103f195b4; end: 103f196f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f195b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined1 uStack_49;
  undefined *puStack_48;
  
  puStack_48 = PTR___swiftEmptySetSingleton_11034f1d8;
  puVar1 = &UNK_110721430;
  _swift_allocObject(&UNK_110721430,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  uVar2 = 0x11302e200;
  func_0x0001000285a8(0x11302e200,&UNK_10dcaa7a0);
  uVar3 = uVar2;
  FUN_103f1975c();
  pcVar4 = FUN_103f19754;
  __s7Combine9PublisherPAAs5NeverO7FailureRtzrlE4sink12receiveValueAA14AnyCancellableCy6OutputQzc_tF
            (FUN_103f19754,puVar1,uVar2,uVar3);
  _swift_release(puVar1);
  __s7Combine14AnyCancellableC5store2inyShyACGz_tF(&puStack_48);
  _swift_release(pcVar4);
  puVar1 = &UNK_110721458;
  _swift_allocObject(&UNK_110721458,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  uVar2 = 0x112d518a8;
  puStack_70 = puVar1;
  uStack_68 = param_1;
  ppuStack_60 = &puStack_48;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  func_0x000100087bd4(&uStack_49,FUN_103f1989c,auStack_80,uVar2);
  _swift_release(puVar1);
  _swift_bridgeObjectRelease(puStack_48);
  return 1;
}



/* Entry: 103f196f8; end: 103f19753;  */

void FUN_103f196f8(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    func_0x000107c41e34();
    _swift_unknownObjectRelease(param_2);
  }
  return;
}



/* Entry: 103f19754; end: 103f1975b;  */

void FUN_103f19754(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    func_0x000107c41e34();
    _swift_unknownObjectRelease(lVar1);
  }
  return;
}



/* Entry: 103f1975c; end: 103f197ab;  */

void FUN_103f1975c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam000000011302e508 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x11302e200;
  func_0x00010002969c(0x11302e200,&UNK_10dcaa7a0);
  puVar2 = PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18;
  _swift_getWitnessTable(PTR___s7Combine18PassthroughSubjectCyxq_GAA9PublisherAAMc_11034ae18,uVar1);
  puRam000000011302e508 = puVar2;
  return;
}



/* Entry: 103f197ac; end: 103f1989b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f197ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar1 = _DAT_11302e518;
  if (param_2 != 0) {
    uVar4 = *param_4;
    _swift_beginAccess(param_2 + _DAT_11302e518,auStack_80,0x21,0);
    _swift_bridgeObjectRetain(uVar4);
    uVar2 = *(undefined8 *)(param_2 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0x8000000000000000;
    func_0x00010049915c(uVar4,param_3,uVar2);
    *(undefined8 *)(param_2 + lVar1) = uVar3;
    _swift_endAccess(auStack_80);
    _objc_release(param_2);
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 103f1989c; end: 103f198b7;  */

void FUN_103f1989c(void)

{
  long unaff_x20;
  
  FUN_103f197ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 103f198b8; end: 103f19907; -[SCDiscoverFeedStoriesReplayManagerListenerAnnouncer addListener:] */

undefined8 FUN_103f198b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  FUN_103f195b4(param_3);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  return 1;
}



/* Entry: 103f19908; end: 103f19993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19908(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_50 [16];
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_110721458;
  _swift_allocObject(&UNK_110721458,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  puStack_40 = puVar1;
  uStack_38 = param_1;
  func_0x000100087bd4(FUN_103f19c84,auStack_50,PTR___sytN_11034f1b0 + 8);
  _swift_release(puVar1);
  return;
}



/* Entry: 103f19994; end: 103f19c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19994(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong auStack_f0 [3];
  ulong auStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  ulong uStack_90;
  ulong *puStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
  lVar9 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar6 = _DAT_11302e518;
  if (lVar9 != 0) {
    puVar4 = auStack_c0;
    _swift_beginAccess(lVar9 + _DAT_11302e518,puVar4,0,0);
    lVar6 = *(long *)(lVar9 + lVar6);
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lVar9);
    if ((*(long *)(lVar6 + 0x10) == 0) ||
       (lVar9 = param_2, func_0x0001000a7158(), ((ulong)puVar4 & 1) == 0)) {
      _swift_bridgeObjectRelease(lVar6);
    }
    else {
      uVar13 = *(ulong *)(*(long *)(lVar6 + 0x38) + lVar9 * 8);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRelease(lVar6);
      if ((uVar13 & 0xc000000000000001) == 0) {
        uVar7 = -1L << ((ulong)*(byte *)(uVar13 + 0x20) & 0x3f);
        puVar12 = (ulong *)(uVar13 + 0x38);
        uVar8 = ~uVar7;
        uVar7 = -uVar7;
        uVar5 = 0xffffffffffffffff;
        if (uVar7 < 0x40) {
          uVar5 = ~(-1L << (uVar7 & 0x3f));
        }
        uVar5 = uVar5 & *puVar12;
        uVar7 = uVar13;
        _swift_bridgeObjectRetain();
        lVar9 = 0;
        uVar14 = uVar13;
      }
      else {
        uVar7 = uVar13 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar13) {
          uVar7 = uVar13;
        }
        _swift_bridgeObjectRetain(uVar13);
        __ss10__CocoaSetV12makeIteratorAB0D0CyF();
        uVar2 = 0;
        __s7Combine14AnyCancellableCMa(0);
        uVar3 = uVar2;
        FUN_103b8dfcc();
        __sSh8IteratorV6_cocoaAByx_Gs10__CocoaSetVAACn_tcfC(&uStack_90,uVar7,uVar2,uVar3);
        uVar8 = uStack_80;
        lVar9 = lStack_78;
        uVar5 = uStack_70;
        puVar12 = puStack_88;
        uVar14 = uStack_90;
      }
      uVar11 = uVar5;
      lVar6 = lVar9;
      if ((long)uVar14 < 0) goto LAB_103f19b60;
      while( true ) {
        while (uVar5 != 0) {
          uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
          uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
          uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
          uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
          uVar7 = *(ulong *)(*(long *)(uVar14 + 0x30) + LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) * 8 +
                            lVar6 * 0x200);
          auStack_d8[0] = uVar7;
          _swift_retain(uVar7);
          uVar5 = uVar5 - 1 & uVar5;
          lVar10 = lVar9;
          while( true ) {
            lVar9 = lVar6;
            if (uVar7 == 0) goto LAB_103f19bcc;
            __s7Combine14AnyCancellableC6cancelyyF();
            _swift_release();
            uVar11 = uVar5;
            lVar6 = lVar9;
            if (-1 < (long)uVar14) break;
LAB_103f19b60:
            __ss10__CocoaSetV8IteratorC4nextyXlSgyF();
            if (uVar7 == 0) goto LAB_103f19bc8;
            uVar3 = 0;
            auStack_f0[0] = uVar7;
            __s7Combine14AnyCancellableCMa(0);
            _swift_dynamicCast(auStack_d8,auStack_f0,PTR___syXlN_11034f1a0 + 8,uVar3,7);
            uVar5 = uVar11;
            uVar7 = auStack_d8[0];
            lVar6 = lVar9;
            lVar10 = lVar9;
          }
        }
        lVar10 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f19c84);
          (*pcVar1)();
        }
        if ((long)(uVar8 + 0x40 >> 6) <= lVar10) break;
        uVar5 = puVar12[lVar10];
        lVar6 = lVar10;
      }
      uVar11 = 0;
LAB_103f19bc8:
      auStack_d8[0] = 0;
      lVar10 = lVar9;
LAB_103f19bcc:
      FUN_103b8e010(uVar14,puVar12,uVar8,lVar10,uVar11);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  _swift_beginAccess(param_1 + 0x10,auStack_d8,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _DAT_11302e518,auStack_f0,0x21,0);
    FUN_103b8df48(param_2);
    _swift_endAccess(auStack_f0);
    _objc_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}



/* Entry: 103f19c84; end: 103f19c9b;  */

void FUN_103f19c84(void)

{
  long unaff_x20;
  
  FUN_103f19994(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103f19c9c; end: 103f19d53; -[SCDiscoverFeedStoriesReplayManagerListenerAnnouncer removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = &UNK_110721458;
  _swift_allocObject(&UNK_110721458,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10,param_1);
  puStack_50 = puVar1;
  uStack_48 = param_3;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  func_0x000100087bd4(FUN_103f19f44,auStack_60,PTR___sytN_11034f1b0 + 8);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_release(puVar1);
  return;
}



/* Entry: 103f19d54; end: 103f19d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19d54(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_28);
  return;
}



/* Entry: 103f19d8c; end: 103f19df7; -[SCDiscoverFeedStoriesReplayManagerListenerAnnouncer didUpdateWithFriendStoriesReplayRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_1);
  __s7Combine18PassthroughSubjectC4sendyyxF(&uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
  return;
}



/* Entry: 103f19df8; end: 103f19e17;  */

void FUN_103f19df8(void)

{
  _objc_opt_self(&PTR_PTR_112965b90);
  return;
}



/* Entry: 103f19e18; end: 103f19ecb; -[SCDiscoverFeedStoriesReplayManagerListenerAnnouncer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19e18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = _DAT_11302e510;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  *(undefined **)(param_1 + _DAT_11302e518) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar1 = _DAT_11302e500;
  uVar2 = 0x11302e200;
  func_0x0001000285a8(0x11302e200,&UNK_10dcaa7a0);
  _swift_allocObject();
  __s7Combine18PassthroughSubjectCACyxq_Gycfc();
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  FUN_103f19df8();
  lStack_40 = param_1;
  uStack_38 = uVar2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f19ecc; end: 103f19efb;  */

void FUN_103f19ecc(void)

{
  FUN_103f19df8();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f19efc; end: 103f19f43; -[SCDiscoverFeedStoriesReplayManagerListenerAnnouncer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f19efc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302e510));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e518));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302e500));
  return;
}



/* Entry: 103f19f44; end: 103f19f57;  */

void FUN_103f19f44(void)

{
  FUN_103f19c84();
  return;
}



/* Entry: 103f19f58; end: 103f19f6b;  */

bool FUN_103f19f58(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f19f6c; end: 103f1a017;  */

void FUN_103f19f6c(void)

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



/* Entry: 103f1a018; end: 103f1a03f;  */

void FUN_103f1a018(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103f1a040; end: 103f1a07f;  */

undefined8 FUN_103f1a040(void)

{
  if (lRam00000001135ea070 != -1) {
    _swift_once(0x1135ea070,&UNK_100bd39e0);
  }
  return 0x113812540;
}



/* Entry: 103f1a080; end: 103f1a0cf;  */

void FUN_103f1a080(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000030;
  func_0x000100442ccc(0xd000000000000030,0x800000010f1ceea0,0);
  uRam0000000113812548 = uVar1;
  return;
}



/* Entry: 103f1a0d0; end: 103f1a0eb; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedFetchHangImprovementEnabled] */

void FUN_103f1a0d0(void)

{
  if (lRam00000001135ea078 != -1) {
    func_0x000107c61568(0x1135ea078,FUN_103f1a080);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812548);
  return;
}



/* Entry: 103f1a0ec; end: 103f1a13b;  */

void FUN_103f1a0ec(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002a;
  func_0x000100bd65fc(0xd00000000000002a,0x800000010f1cee30,0x14);
  uRam0000000113812558 = uVar1;
  return;
}



/* Entry: 103f1a13c; end: 103f1a17b;  */

undefined8 FUN_103f1a13c(void)

{
  if (lRam00000001135ea088 != -1) {
    _swift_once(0x1135ea088,FUN_103f1a0ec);
  }
  return 0x113812558;
}



/* Entry: 103f1a17c; end: 103f1a197; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedFetchUserCount] */

void FUN_103f1a17c(void)

{
  if (lRam00000001135ea088 != -1) {
    func_0x000107c61568(0x1135ea088,FUN_103f1a0ec);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812558);
  return;
}



/* Entry: 103f1a198; end: 103f1a1e7;  */

void FUN_103f1a198(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002e;
  func_0x000100bd65fc(0xd00000000000002e,0x800000010f1cee00,3);
  uRam0000000113812560 = uVar1;
  return;
}



/* Entry: 103f1a1e8; end: 103f1a227;  */

undefined8 FUN_103f1a1e8(void)

{
  if (lRam00000001135ea090 != -1) {
    _swift_once(0x1135ea090,FUN_103f1a198);
  }
  return 0x113812560;
}



/* Entry: 103f1a228; end: 103f1a243; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedFetchLimitPerUser] */

void FUN_103f1a228(void)

{
  if (lRam00000001135ea090 != -1) {
    func_0x000107c61568(0x1135ea090,FUN_103f1a198);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812560);
  return;
}



/* Entry: 103f1a244; end: 103f1a297;  */

void FUN_103f1a244(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000030;
  func_0x000100bd65fc(0xd000000000000030,0x800000010f1cedc0,0x127500);
  uRam0000000113812568 = uVar1;
  return;
}



/* Entry: 103f1a298; end: 103f1a2d7;  */

undefined8 FUN_103f1a298(void)

{
  if (lRam00000001135ea098 != -1) {
    _swift_once(0x1135ea098,FUN_103f1a244);
  }
  return 0x113812568;
}



/* Entry: 103f1a2d8; end: 103f1a2f3; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedFetchLookbackSeconds] */

void FUN_103f1a2d8(void)

{
  if (lRam00000001135ea098 != -1) {
    func_0x000107c61568(0x1135ea098,FUN_103f1a244);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812568);
  return;
}



/* Entry: 103f1a2f4; end: 103f1a343;  */

void FUN_103f1a2f4(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd00000000000002f;
  func_0x000100442ccc(0xd00000000000002f,0x800000010f1ced90,0);
  uRam0000000113812570 = uVar1;
  return;
}



/* Entry: 103f1a344; end: 103f1a383;  */

undefined8 FUN_103f1a344(void)

{
  if (lRam00000001135ea0a0 != -1) {
    _swift_once(0x1135ea0a0,FUN_103f1a2f4);
  }
  return 0x113812570;
}



/* Entry: 103f1a384; end: 103f1a39f; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedFetchIncludeReposts] */

void FUN_103f1a384(void)

{
  if (lRam00000001135ea0a0 != -1) {
    func_0x000107c61568(0x1135ea0a0,FUN_103f1a2f4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812570);
  return;
}



/* Entry: 103f1a3a0; end: 103f1a3ef;  */

void FUN_103f1a3a0(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000030;
  func_0x000100bd65fc(0xd000000000000030,0x800000010f1ced50,0x5a0);
  uRam0000000113812578 = uVar1;
  return;
}



/* Entry: 103f1a3f0; end: 103f1a42f;  */

undefined8 FUN_103f1a3f0(void)

{
  if (lRam00000001135ea0a8 != -1) {
    _swift_once(0x1135ea0a8,FUN_103f1a3a0);
  }
  return 0x113812578;
}



/* Entry: 103f1a430; end: 103f1a44b; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedFetchIntervalMinutes] */

void FUN_103f1a430(void)

{
  if (lRam00000001135ea0a8 != -1) {
    func_0x000107c61568(0x1135ea0a8,FUN_103f1a3a0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812578);
  return;
}



/* Entry: 103f1a44c; end: 103f1a49b;  */

void FUN_103f1a44c(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000031;
  func_0x000100442ccc(0xd000000000000031,0x800000010f1ced10,0);
  uRam0000000113812580 = uVar1;
  return;
}



/* Entry: 103f1a49c; end: 103f1a4b7; +[SCSpotlightOnFriendsFeedConfigKeys spotlightOnFriendsFeedPlaybackUseMixedFeed] */

void FUN_103f1a49c(void)

{
  if (lRam00000001135ea0b0 != -1) {
    func_0x000107c61568(0x1135ea0b0,FUN_103f1a44c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam0000000113812580);
  return;
}



/* Entry: 103f1a4b8; end: 103f1a507;  */

void FUN_103f1a4b8(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  _objc_allocWithZone();
  uVar1 = 0xd000000000000031;
  func_0x000100442ccc(0xd000000000000031,0x800000010f1cecd0,0);
  uRam0000000113812588 = uVar1;
  return;
}


