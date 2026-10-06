/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f14bf0; end: 103f14bff; -[SCDiscoverFeedStoryIH viewInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e0a8));
  return;
}



/* Entry: 103f14c00; end: 103f14c0f; -[SCDiscoverFeedStoryIH updateTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f14c00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e0b0);
}



/* Entry: 103f14c10; end: 103f14ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e080);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302e088) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302e090) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302e098) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302e0a0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11302e0a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302e0b0) = param_1;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f14ce4; end: 103f14deb; -[SCDiscoverFeedStoryIH initWithIdentifier:storyDedupeFp:allowanceType:storyInfo:impressionInfo:viewInfo:updateTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14ce4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_2;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_4 = 0;
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_2 + _DAT_11302e080);
  *plVar1 = param_4;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_11302e088) = param_5;
  *(undefined8 *)(param_2 + _DAT_11302e090) = param_6;
  *(undefined8 *)(param_2 + _DAT_11302e098) = param_7;
  *(undefined8 *)(param_2 + _DAT_11302e0a0) = param_8;
  *(undefined8 *)(param_2 + _DAT_11302e0a8) = param_9;
  *(undefined8 *)(param_2 + _DAT_11302e0b0) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_70 = param_2;
  lStack_68 = lVar3;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_msgSendSuper2(&lStack_70,puVar2);
  return;
}



/* Entry: 103f14dec; end: 103f14e1f; -[SCDiscoverFeedStoryIH hash] */

undefined8 FUN_103f14dec(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f14e20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f14e20; end: 103f14fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f14e20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  double dVar3;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11302e080))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302e080);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302e088));
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_11302e090);
  __ss6HasherV8_combineyys6UInt64VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11302e098) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103f1233c();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11302e0a0) == 0) {
    uVar2 = 0;
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103f136ac();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  if (*(long *)(unaff_x20 + _DAT_11302e0a8) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103f142fc();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  dVar3 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11302e0b0) != 0.0) {
    dVar3 = *(double *)(unaff_x20 + _DAT_11302e0b0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f14fac; end: 103f1525b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f14fac(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long *plVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  long lStack_98;
  long alStack_90 [3];
  long *plStack_78;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_90);
  if (plStack_78 == (long *)0x0) {
    func_0x00010006e7f4(alStack_90);
  }
  else {
    plVar3 = &lStack_98;
    _swift_dynamicCast(plVar3,alStack_90,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar4 = ((undefined8 *)(unaff_x20 + _DAT_11302e080))[1];
      lVar5 = ((undefined8 *)(lStack_98 + _DAT_11302e080))[1];
      plVar6 = (long *)(ulong)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        plVar3 = *(long **)(unaff_x20 + _DAT_11302e080);
        if (plVar3 == *(long **)(lStack_98 + _DAT_11302e080) && lVar4 == lVar5) {
          plVar6 = (long *)0x1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          plVar6 = plVar3;
        }
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_11302e088);
      lVar10 = *(long *)(lStack_98 + _DAT_11302e088);
      lVar11 = *(long *)(unaff_x20 + _DAT_11302e090);
      lVar5 = *(long *)(lStack_98 + _DAT_11302e090);
      if (*(long *)(unaff_x20 + _DAT_11302e098) == 0) {
        uVar7 = (uint)(*(long *)(lStack_98 + _DAT_11302e098) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_98 + _DAT_11302e098);
        if (lVar8 == 0) {
          plVar3 = (long *)0x0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          func_0x000103f1529c();
        }
        alStack_90[0] = lVar8;
        plStack_78 = plVar3;
        _objc_retain(lVar8);
        uVar7 = 0;
        FUN_103f129fc();
        plVar3 = alStack_90;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302e0a0) == 0) {
        uVar9 = (uint)(*(long *)(lStack_98 + _DAT_11302e0a0) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_98 + _DAT_11302e0a0);
        if (lVar8 == 0) {
          plVar3 = (long *)0x0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          func_0x000103f1527c();
        }
        alStack_90[0] = lVar8;
        plStack_78 = plVar3;
        _objc_retain(lVar8);
        uVar9 = 0;
        FUN_103f138e4();
        plVar3 = alStack_90;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302e0a8) == 0) {
        uVar2 = (uint)(*(long *)(lStack_98 + _DAT_11302e0a8) == 0);
      }
      else {
        lVar8 = *(long *)(lStack_98 + _DAT_11302e0a8);
        if (lVar8 == 0) {
          plVar3 = (long *)0x0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          func_0x000103f1525c();
        }
        alStack_90[0] = lVar8;
        plStack_78 = plVar3;
        _objc_retain(lVar8);
        plVar3 = alStack_90;
        FUN_103f145f0(plVar3);
        uVar2 = (uint)plVar3;
        func_0x00010006e7f4(alStack_90);
      }
      dVar12 = *(double *)(unaff_x20 + _DAT_11302e0b0);
      dVar13 = *(double *)(lStack_98 + _DAT_11302e0b0);
      _objc_release(lStack_98);
      uVar1 = 0;
      if (lVar11 == lVar5) {
        uVar1 = (uint)plVar6 & (uint)(lVar4 == lVar10);
      }
      if ((uVar1 & uVar7 & uVar9) == 1) {
        return uVar2 & dVar12 == dVar13;
      }
    }
  }
  return 0;
}



/* Entry: 103f1525c; end: 103f152bb;  */

void FUN_103f1525c(void)

{
  _objc_opt_self(&PTR_PTR_112965178);
  return;
}



/* Entry: 103f152bc; end: 103f152c7; -[SCDiscoverFeedStoryIH isEqual:] */

uint FUN_103f152bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103f14fac(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f152c8; end: 103f15353;  */

uint FUN_103f152c8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  uint uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_50);
    _swift_unknownObjectRelease(param_3);
  }
  (*param_4)(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f15354; end: 103f153cf; -[SCDiscoverFeedStoryIH init] */

void FUN_103f15354(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0x23d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1539c);
  (*pcVar1)();
}



/* Entry: 103f153d0; end: 103f1542b; -[SCDiscoverFeedStoryIH .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f153d0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e080 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e098));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e0a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e0a8));
  return;
}



/* Entry: 103f1542c; end: 103f1544b;  */

void FUN_103f1542c(void)

{
  _objc_opt_self(&PTR_PTR_1129652b0);
  return;
}



/* Entry: 103f1544c; end: 103f1544f; -[SCDiscoverFeedStoryIHEventFloat copyWithZone:] */

void FUN_103f1544c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f15450; end: 103f15453; -[SCDiscoverFeedStoryIHEventBool copyWithZone:] */

void FUN_103f15450(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f15454; end: 103f15457; -[SCDiscoverFeedStoryIHEventInteger copyWithZone:] */

void FUN_103f15454(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f15458; end: 103f1545b; -[SCDiscoverFeedStoryIHCompositeStoryId copyWithZone:] */

void FUN_103f15458(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f1545c; end: 103f1545f; -[SCDiscoverFeedStoryIHStoryInfo copyWithZone:] */

void FUN_103f1545c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f15460; end: 103f15463; -[SCDiscoverFeedStoryIHImpressionInfo copyWithZone:] */

void FUN_103f15460(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f15464; end: 103f15467; -[SCDiscoverFeedStoryIHViewInfo copyWithZone:] */

void FUN_103f15464(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f15468; end: 103f15487; -[SCDiscoverFeedStoryIH copyWithZone:] */

void FUN_103f15468(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f15488; end: 103f154b3; +[SCDiscoverFeedBadgeConsts hasUnviewedFriendStories] */

void FUN_103f15488(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003a,0x800000010f1ce8f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f154b4; end: 103f154df; +[SCDiscoverFeedBadgeConsts badgeForSubscriptionStories] */

void FUN_103f154b4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000003d,0x800000010f1ce930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f154e0; end: 103f1550b; +[SCDiscoverFeedBadgeConsts forceBadgeShown] */

void FUN_103f154e0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000031,0x800000010f1ce970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1550c; end: 103f15537; +[SCDiscoverFeedBadgeConsts thumbnailBadgeShown] */

void FUN_103f1550c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000021,0x800000010f1ce9b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f15538; end: 103f15573; -[SCDiscoverFeedBadgeConsts init] */

void FUN_103f15538(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f15574; end: 103f155a7;  */

void FUN_103f15574(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f155a8; end: 103f155ab; -[SCDiscoverFeedBadgeConsts .cxx_destruct] */

void FUN_103f155a8(void)

{
  return;
}



/* Entry: 103f155ac; end: 103f1561b;  */

void FUN_103f155ac(void)

{
  _objc_opt_self(&PTR_PTR_1129653a0);
  return;
}



/* Entry: 103f1561c; end: 103f160f7;  */

void FUN_103f1561c(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 103f160f8; end: 103f1610b;  */

bool FUN_103f160f8(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f1610c; end: 103f161e3;  */

void FUN_103f1610c(void)

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



/* Entry: 103f161e4; end: 103f16203;  */

void FUN_103f161e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103f16204; end: 103f16243;  */

void FUN_103f16204(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaa310;
  _swift_getWitnessTable(&UNK_10dcaa310,&UNK_110721080);
  puRam000000011302e238 = puVar1;
  return;
}



/* Entry: 103f16244; end: 103f16253;  */

undefined1  [16] FUN_103f16244(void)

{
  return ZEXT816(0x110721080);
}



/* Entry: 103f16254; end: 103f16767;  */

void FUN_103f16254(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 103f16768; end: 103f16777; -[_TtC29SCDiscoverFeedStoriesServices29SCDiscoverFeedStoriesServices replayManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e248));
  return;
}



/* Entry: 103f16778; end: 103f167db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16778(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302e240) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e248) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f167dc; end: 103f1683b; -[_TtC29SCDiscoverFeedStoriesServices29SCDiscoverFeedStoriesServices init] */

void FUN_103f167dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCDiscoverFeedStoriesServices.SCDiscoverFeedStoriesServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f16808);
  (*pcVar1)();
}



/* Entry: 103f1683c; end: 103f16873; -[_TtC29SCDiscoverFeedStoriesServices29SCDiscoverFeedStoriesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1683c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e240));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e248));
  return;
}



/* Entry: 103f16874; end: 103f1687f; -[SCDiscoverFeedMyStoriesDataModel storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16874(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302e278);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302e278))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f16880; end: 103f1688b; -[SCDiscoverFeedMyStoriesDataModel displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16880(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302e280);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11302e280))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f1688c; end: 103f168d3;  */

void FUN_103f1688c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f168d4; end: 103f168e3; -[SCDiscoverFeedMyStoriesDataModel isMyStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f168d4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e288);
}



/* Entry: 103f168e4; end: 103f168f3; -[SCDiscoverFeedMyStoriesDataModel type] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f168e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e290);
}



/* Entry: 103f168f4; end: 103f16903; -[SCDiscoverFeedMyStoriesDataModel thumbnail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f168f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e298));
  return;
}



/* Entry: 103f16904; end: 103f16913; -[SCDiscoverFeedMyStoriesDataModel thumbnailMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e2a0));
  return;
}



/* Entry: 103f16914; end: 103f16923; -[SCDiscoverFeedMyStoriesDataModel hasStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f16914(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e2a8);
}



/* Entry: 103f16924; end: 103f16933; -[SCDiscoverFeedMyStoriesDataModel hasUnviewedStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f16924(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e2b0);
}



/* Entry: 103f16934; end: 103f16943; -[SCDiscoverFeedMyStoriesDataModel totalViewCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f16934(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e2b8);
}



/* Entry: 103f16944; end: 103f16953; -[SCDiscoverFeedMyStoriesDataModel mostRecentStoryTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f16944(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e2c0);
}



/* Entry: 103f16954; end: 103f16963; -[SCDiscoverFeedMyStoriesDataModel totalNumSnaps] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f16954(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e2c8);
}



/* Entry: 103f16964; end: 103f16973; -[SCDiscoverFeedMyStoriesDataModel failedPosts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f16964(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e2d0);
}



/* Entry: 103f16974; end: 103f16c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e278);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e280);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined1 *)(unaff_x20 + _DAT_11302e288) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302e290) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11302e298) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302e2a0) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11302e2a8) = (undefined1)param_10;
  *(undefined1 *)(unaff_x20 + _DAT_11302e2b0) = param_10._1_1_;
  *(undefined8 *)(unaff_x20 + _DAT_11302e2b8) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11302e2c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e2c8) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11302e2d0) = param_14;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f16c04; end: 103f16ce3; -[SCDiscoverFeedMyStoriesDataModel initWithStoryId:displayName:isMyStory:type:thumbnail:thumbnailMedia:hasStories:hasUnviewedStories:totalViewCount:mostRecentStoryTimestamp:totalNumSnaps:failedPosts:] */

void FUN_103f16c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  uVar1 = param_3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  func_0x000103f16abc(param_1,param_4,param_3,param_5,uVar1,param_6,param_7,param_8,param_9,param_10
                     );
  return;
}



/* Entry: 103f16ce4; end: 103f16d23;  */

undefined8 FUN_103f16ce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103f16e38(param_1);
  FUN_103f16f94(param_1);
  return uVar1;
}



/* Entry: 103f16d24; end: 103f16d27; -[SCDiscoverFeedMyStoriesDataModel copyWithZone:] */

void FUN_103f16d24(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f16d28; end: 103f16d5b; -[SCDiscoverFeedMyStoriesDataModel description] */

void FUN_103f16d28(void)

{
  undefined1 auStack_78 [104];
  
  FUN_103f16fc8(auStack_78);
  FUN_103f16f94(auStack_78);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f16d5c; end: 103f16dd7; -[SCDiscoverFeedMyStoriesDataModel init] */

void FUN_103f16d5c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedStoriesServices/SCDiscoverFeedMyStoriesDataModelWrapper.swift",0x4b,2,
             0x51,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f16da4);
  (*pcVar1)();
}



/* Entry: 103f16dd8; end: 103f16e37; -[SCDiscoverFeedMyStoriesDataModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16dd8(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e278 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302e280 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302e298));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e2a0));
  return;
}



/* Entry: 103f16e38; end: 103f16f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16e38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302e278);
  puVar2[1] = uStack_38;
  *puVar2 = uStack_40;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_11302e280);
  puVar2[1] = uStack_48;
  *puVar2 = uStack_50;
  *(undefined1 *)(unaff_x20 + _DAT_11302e288) = *(undefined1 *)(param_1 + 4);
  uStack_58 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_11302e290) = param_1[5];
  *(undefined8 *)(unaff_x20 + _DAT_11302e298) = uStack_58;
  uStack_60 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11302e2a0) = uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_11302e2a8) = *(undefined1 *)(param_1 + 8);
  *(undefined1 *)(unaff_x20 + _DAT_11302e2b0) = *(undefined1 *)((long)param_1 + 0x41);
  *(undefined8 *)(unaff_x20 + _DAT_11302e2b8) = param_1[9];
  *(undefined8 *)(unaff_x20 + _DAT_11302e2c0) = param_1[10];
  uVar1 = param_1[0xc];
  *(undefined8 *)(unaff_x20 + _DAT_11302e2c8) = param_1[0xb];
  *(undefined8 *)(unaff_x20 + _DAT_11302e2d0) = uVar1;
  func_0x000100402194(&uStack_40,auStack_70);
  func_0x000100402194(&uStack_50,auStack_70);
  FUN_103f170e4(&uStack_58,auStack_70,0x11302e300,&UNK_10dcaa488);
  FUN_103f170e4(&uStack_60,auStack_70,0x11302e308,&UNK_10dcaa490);
  _objc_msgSendSuper2(&stack0xffffffffffffff80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f16f94; end: 103f16fc7;  */

undefined8 FUN_103f16f94(undefined8 param_1)

{
  (*(code *)(undefined *)0x103f15a7c)();
  return param_1;
}



/* Entry: 103f16fc8; end: 103f170c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f16fc8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar2 = ((undefined8 *)(param_2 + _DAT_11302e278))[1];
  uVar1 = *(undefined8 *)(param_2 + _DAT_11302e280);
  uVar3 = ((undefined8 *)(param_2 + _DAT_11302e280))[1];
  uVar4 = *(undefined1 *)(param_2 + _DAT_11302e288);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11302e290);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11302e298);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11302e2a0);
  uVar5 = *(undefined1 *)(param_2 + _DAT_11302e2a8);
  uVar6 = *(undefined1 *)(param_2 + _DAT_11302e2b0);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11302e2b8);
  uVar13 = *(undefined8 *)(param_2 + _DAT_11302e2c0);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11302e2c8);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11302e2d0);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11302e278);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = uVar4;
  param_1[5] = uVar8;
  param_1[6] = uVar11;
  param_1[7] = uVar12;
  *(undefined1 *)(param_1 + 8) = uVar5;
  *(undefined1 *)((long)param_1 + 0x41) = uVar6;
  param_1[9] = uVar9;
  param_1[10] = uVar13;
  param_1[0xb] = uVar10;
  param_1[0xc] = uVar7;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _objc_retain(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar12);
  return;
}



/* Entry: 103f170c4; end: 103f170e3;  */

void FUN_103f170c4(void)

{
  _objc_opt_self(&PTR_PTR_112965518);
  return;
}



/* Entry: 103f170e4; end: 103f171ff;  */

undefined8 FUN_103f170e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103f17200; end: 103f1721f;  */

void FUN_103f17200(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103f17220; end: 103f1723b; -[SCDiscoverFeedFriendStoryDataRequest description] */

void FUN_103f17220(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1723c; end: 103f17283; -[SCDiscoverFeedFriendStoryDataRequest init] */

void FUN_103f1723c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedStoriesServices/SCDiscoverFeedFriendStoryDataRequestWrapper.swift",0x4f,
             2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f17284);
  (*pcVar1)();
}



/* Entry: 103f17284; end: 103f17287; -[SCDiscoverFeedFriendStoryDataRequest copyWithZone:] */

void FUN_103f17284(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f17288; end: 103f1728f; +[SCDiscoverFeedFriendStoryDataRequest loadData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17288(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302e310) = 0;
  *(undefined8 *)(lVar1 + _DAT_11302e318) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f17290; end: 103f172f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17290(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302e310) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_11302e318) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_30,puVar1);
  return;
}



/* Entry: 103f172f8; end: 103f17363; +[SCDiscoverFeedFriendStoryDataRequest summaryInfoUpdateWithStorySummaryInfoUpdates:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f172f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_11302e310) = 1;
  *(undefined8 *)(lVar2 + _DAT_11302e318) = param_3;
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



/* Entry: 103f17364; end: 103f1736b; +[SCDiscoverFeedFriendStoryDataRequest customStoryUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17364(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302e310) = 2;
  *(undefined8 *)(lVar1 + _DAT_11302e318) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f1736c; end: 103f17373; +[SCDiscoverFeedFriendStoryDataRequest friendsUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1736c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302e310) = 3;
  *(undefined8 *)(lVar1 + _DAT_11302e318) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f17374; end: 103f173cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17374(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  _swift_getObjCClassMetadata();
  lVar1 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar1 + _DAT_11302e310) = param_3;
  *(undefined8 *)(lVar1 + _DAT_11302e318) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f173d0; end: 103f1742b; -[SCDiscoverFeedFriendStoryDataRequest matchLoadData:summaryInfoUpdate:customStoryUpdate:friendsUpdate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f173d0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + _DAT_11302e310);
  if (1 < bVar1) {
    if (bVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x000103f17404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_5 + 0x10))(param_5);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000103f17428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_6 + 0x10))(param_6);
    return;
  }
  if (bVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103f173f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103f1741c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + _DAT_11302e318));
  return;
}



/* Entry: 103f1742c; end: 103f1745f;  */

void FUN_103f1742c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f17460; end: 103f1746f; -[SCDiscoverFeedFriendStoryDataRequest .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302e318));
  return;
}



/* Entry: 103f17470; end: 103f1748f;  */

void FUN_103f17470(void)

{
  _objc_opt_self(&PTR_PTR_112965638);
  return;
}



/* Entry: 103f17490; end: 103f175f7;  */

int FUN_103f17490(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103f1750c;
        goto LAB_103f174f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103f174f0:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103f1750c:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103f175f8; end: 103f17637;  */

void FUN_103f175f8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302e348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcaa4fc;
  _swift_getWitnessTable(&UNK_10dcaa4fc,&UNK_110721280);
  puRam000000011302e348 = puVar1;
  return;
}



/* Entry: 103f17638; end: 103f17647;  */

ulong FUN_103f17638(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 103f17648; end: 103f17657; -[SCDiscoverFeedPlayFriendStoryActionDataModel currentFriendStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e350));
  return;
}



/* Entry: 103f17658; end: 103f17673; -[SCDiscoverFeedPlayFriendStoryActionDataModel rankedFriendStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17658(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302e358);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f180cc(0,0x112f35048,&PTR_PTR_1126cee88);
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



/* Entry: 103f17674; end: 103f1768f; -[SCDiscoverFeedPlayFriendStoryActionDataModel allFriendStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17674(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302e360);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f180cc(0,0x112f35048,&PTR_PTR_1126cee88);
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



/* Entry: 103f17690; end: 103f176ef;  */

void FUN_103f17690(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + *param_3);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f180cc(0,param_4,param_5);
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



/* Entry: 103f176f0; end: 103f17747; -[SCDiscoverFeedPlayFriendStoryActionDataModel allFriendAndNonfriendStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f176f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302e368);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 103f17748; end: 103f17757; -[SCDiscoverFeedPlayFriendStoryActionDataModel loggingInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302e370));
  return;
}



/* Entry: 103f17758; end: 103f17767; -[SCDiscoverFeedPlayFriendStoryActionDataModel itemSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f17758(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e378);
}



/* Entry: 103f17768; end: 103f17777; -[SCDiscoverFeedPlayFriendStoryActionDataModel shouldOpenLastViewedStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f17768(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e380);
}



/* Entry: 103f17778; end: 103f17793; -[SCDiscoverFeedPlayFriendStoryActionDataModel exitOperaOffsetArray] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17778(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302e388);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_103f180cc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
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



/* Entry: 103f17794; end: 103f177a3; -[SCDiscoverFeedPlayFriendStoryActionDataModel notificationTapTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f17794(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302e390);
}



/* Entry: 103f177a4; end: 103f177b3; -[SCDiscoverFeedPlayFriendStoryActionDataModel optInNotification] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f177a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302e398);
}



/* Entry: 103f177b4; end: 103f1780f; -[SCDiscoverFeedPlayFriendStoryActionDataModel notificationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f177b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302e3a0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302e3a0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f17810; end: 103f17a5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f17810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302e350) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302e358) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302e360) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302e368) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302e370) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302e378) = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11302e380) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302e388) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11302e390) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11302e398) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302e3a0);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f17a60; end: 103f17c23; -[SCDiscoverFeedPlayFriendStoryActionDataModel initWithCurrentFriendStory:rankedFriendStories:allFriendStories:allFriendAndNonfriendStories:loggingInfo:itemSource:shouldOpenLastViewedStory:exitOperaOffsetArray:notificationTapTimestamp:optInNotification:notificationId:] */

void FUN_103f17a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined1 param_10,undefined4 param_11,long param_12,undefined1 param_13,
                  undefined4 param_14,long param_15)

{
  long lVar1;
  long lStack_88;
  
  if (param_5 == 0) {
    lStack_88 = 0;
  }
  else {
    FUN_103f180cc(0,0x112f35048,&PTR_PTR_1126cee88);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    lStack_88 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    FUN_103f180cc(0,0x112f35048,&PTR_PTR_1126cee88);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6);
  }
  if (param_7 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7);
  }
  _objc_retain(param_4);
  _objc_retain(param_8);
  lVar1 = param_12;
  _objc_retain();
  _objc_retain();
  if (lVar1 == 0) {
    param_12 = 0;
  }
  else {
    FUN_103f180cc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_12);
    _objc_release(lVar1);
  }
  if (param_15 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(param_15);
  }
  func_0x000103f17938(param_1,param_4,lStack_88,param_6,param_7,param_8,param_9,param_10,param_12,
                      param_13);
  return;
}



/* Entry: 103f17c24; end: 103f17c63;  */

undefined8 FUN_103f17c24(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_103f17da4(param_1);
  FUN_103f17f70(param_1);
  return uVar1;
}



/* Entry: 103f17c64; end: 103f17c67; -[SCDiscoverFeedPlayFriendStoryActionDataModel copyWithZone:] */

void FUN_103f17c64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f17c68; end: 103f17c9b; -[SCDiscoverFeedPlayFriendStoryActionDataModel description] */

void FUN_103f17c68(void)

{
  undefined1 auStack_70 [96];
  
  FUN_103f17fa4(auStack_70);
  FUN_103f17f70(auStack_70);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103f17c9c; end: 103f17d17; -[SCDiscoverFeedPlayFriendStoryActionDataModel init] */

void FUN_103f17c9c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedStoriesServices/SCDiscoverFeedPlayFriendStoryActionDataModelWrapper.swift"
             ,0x57,2,0x53,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f17ce4);
  (*pcVar1)();
}


