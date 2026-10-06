/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103f0ed48; end: 103f0ed57; -[SCDiscoverFeedContextFeatures feedType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f0ed48(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dce0);
}



/* Entry: 103f0ed58; end: 103f0ed67; -[SCDiscoverFeedContextFeatures sectionPosition] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f0ed58(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dce8);
}



/* Entry: 103f0ed68; end: 103f0eddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0ed68(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302dcd8) = param_1;
  *(undefined4 *)(unaff_x20 + _DAT_11302dce0) = param_2;
  *(undefined4 *)(unaff_x20 + _DAT_11302dce8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f0eddc; end: 103f0ee4f; -[SCDiscoverFeedContextFeatures initWithStoryPosition:feedType:sectionPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0eddc(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  _swift_getObjectType();
  *(undefined4 *)(param_1 + _DAT_11302dcd8) = param_3;
  *(undefined4 *)(param_1 + _DAT_11302dce0) = param_4;
  *(undefined4 *)(param_1 + _DAT_11302dce8) = param_5;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f0ee50; end: 103f0eebf; -[SCDiscoverFeedContextFeatures hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0ee50(long param_1)

{
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(param_1 + _DAT_11302dcd8));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(param_1 + _DAT_11302dce0));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(param_1 + _DAT_11302dce8));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f0eec0; end: 103f0ef8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103f0eec0(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
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
    plVar8 = &lStack_68;
    _swift_dynamicCast(plVar8,auStack_60,PTR___sypN_11034f1a8 + 8,lVar7,6);
    if (((ulong)plVar8 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_11302dcd8);
      iVar2 = *(int *)(lStack_68 + _DAT_11302dcd8);
      iVar3 = *(int *)(unaff_x20 + _DAT_11302dce0);
      iVar4 = *(int *)(lStack_68 + _DAT_11302dce0);
      iVar5 = *(int *)(unaff_x20 + _DAT_11302dce8);
      iVar6 = *(int *)(lStack_68 + _DAT_11302dce8);
      _objc_release();
      return (iVar1 == iVar2 && iVar3 == iVar4) && iVar5 == iVar6;
    }
  }
  return false;
}



/* Entry: 103f0ef90; end: 103f0ef9b; -[SCDiscoverFeedContextFeatures isEqual:] */

uint FUN_103f0ef90(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f0eec0(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f0ef9c; end: 103f0efe3; -[SCDiscoverFeedContextFeatures init] */

void FUN_103f0ef9c(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/RecentEvents.swift",0x30,2,0x9c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f0efe4);
  (*pcVar1)();
}



/* Entry: 103f0efe4; end: 103f0efef; -[SCDiscoverFeedStoryFeatures storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0efe4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302dcf0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302dcf0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f0eff0; end: 103f0efff; -[SCDiscoverFeedStoryFeatures storyVersion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0eff0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dcf8);
}



/* Entry: 103f0f000; end: 103f0f00b; -[SCDiscoverFeedStoryFeatures tileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f000(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302dd00))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302dd00);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f0f00c; end: 103f0f01b; -[SCDiscoverFeedStoryFeatures storyProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f00c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dd08));
  return;
}



/* Entry: 103f0f01c; end: 103f0f06f; -[SCDiscoverFeedStoryFeatures snapIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f01c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302dd10);
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



/* Entry: 103f0f070; end: 103f0f07b; -[SCDiscoverFeedStoryFeatures creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f070(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302dd18))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302dd18);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f0f07c; end: 103f0f08b; -[SCDiscoverFeedStoryFeatures storySubType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f07c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd20);
}



/* Entry: 103f0f08c; end: 103f0f09b; -[SCDiscoverFeedStoryFeatures storyCorpusInt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f08c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd28);
}



/* Entry: 103f0f09c; end: 103f0f193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302dcf0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302dcf8) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302dd00);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd08) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd10) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302dd18);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd20) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd28) = param_11;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f0f194; end: 103f0f31b; -[SCDiscoverFeedStoryFeatures initWithStoryId:storyVersion:tileId:storyProperties:snapIds:creatorId:storySubType:storyCorpusInt:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f194(long param_1,undefined *param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_90;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    puStack_90 = (undefined *)0x0;
    lStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puStack_90 = param_2;
    lStack_88 = param_3;
  }
  if (param_5 == 0) {
    param_5 = 0;
    puVar5 = (undefined *)0x0;
    puVar4 = PTR___sSSN_11034da80;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    puVar5 = param_2;
    puVar4 = PTR___sSSN_11034da80;
  }
  PTR___sSSN_11034da80 = puVar4;
  if (param_7 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
    param_2 = puVar4;
  }
  _objc_retain();
  lVar3 = param_8;
  _objc_retain();
  if (lVar3 == 0) {
    param_8 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar3);
  }
  plVar1 = (long *)(param_1 + _DAT_11302dcf0);
  *plVar1 = lStack_88;
  plVar1[1] = (long)puStack_90;
  *(undefined8 *)(param_1 + _DAT_11302dcf8) = param_4;
  plVar1 = (long *)(param_1 + _DAT_11302dd00);
  *plVar1 = param_5;
  plVar1[1] = (long)puVar5;
  *(undefined8 *)(param_1 + _DAT_11302dd08) = param_6;
  *(long *)(param_1 + _DAT_11302dd10) = param_7;
  plVar1 = (long *)(param_1 + _DAT_11302dd18);
  *plVar1 = param_8;
  plVar1[1] = (long)param_2;
  *(undefined8 *)(param_1 + _DAT_11302dd20) = param_9;
  *(undefined8 *)(param_1 + _DAT_11302dd28) = param_10;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f0f31c; end: 103f0f34f; -[SCDiscoverFeedStoryFeatures hash] */

undefined8 FUN_103f0f31c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f0f350();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f0f350; end: 103f0f517;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f350(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11302dcf0))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dcf0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dcf8));
  if (((undefined8 *)(unaff_x20 + _DAT_11302dd00))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dd00);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  if (*(long *)(unaff_x20 + _DAT_11302dd08) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f0eae4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar4);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_11302dd10);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
    lVar3 = lVar2;
    func_0x000107c44c3c();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11302dd18))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dd18);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dd20));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dd28));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f0f518; end: 103f0f7b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f0f518(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long lStack_88;
  long alStack_80 [3];
  long *plStack_68;
  
  lVar5 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_80);
  if (plStack_68 == (long *)0x0) {
    func_0x00010006e7f4(alStack_80);
  }
  else {
    plVar3 = &lStack_88;
    _swift_dynamicCast(plVar3,alStack_80,PTR___sypN_11034f1a8 + 8,lVar5,6);
    if (((ulong)plVar3 & 1) != 0) {
      lVar5 = ((undefined8 *)(unaff_x20 + _DAT_11302dcf0))[1];
      lVar6 = ((undefined8 *)(lStack_88 + _DAT_11302dcf0))[1];
      plVar9 = (long *)(ulong)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        plVar3 = *(long **)(unaff_x20 + _DAT_11302dcf0);
        if (plVar3 == *(long **)(lStack_88 + _DAT_11302dcf0) && lVar5 == lVar6) {
          plVar9 = (long *)0x1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          plVar9 = plVar3;
        }
      }
      lVar8 = *(long *)(unaff_x20 + _DAT_11302dcf8);
      lVar7 = *(long *)(lStack_88 + _DAT_11302dcf8);
      lVar5 = ((undefined8 *)(unaff_x20 + _DAT_11302dd00))[1];
      lVar6 = ((undefined8 *)(lStack_88 + _DAT_11302dd00))[1];
      plVar10 = (long *)(ulong)(lVar5 == 0 && lVar6 == 0);
      if (lVar5 != 0 && lVar6 != 0) {
        plVar3 = *(long **)(unaff_x20 + _DAT_11302dd00);
        if (plVar3 == *(long **)(lStack_88 + _DAT_11302dd00) && lVar5 == lVar6) {
          plVar10 = (long *)0x1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          plVar10 = plVar3;
        }
      }
      if (*(long *)(unaff_x20 + _DAT_11302dd08) == 0) {
        uVar2 = (uint)(*(long *)(lStack_88 + _DAT_11302dd08) == 0);
      }
      else {
        lVar5 = *(long *)(lStack_88 + _DAT_11302dd08);
        if (lVar5 == 0) {
          plVar3 = (long *)0x0;
          alStack_80[1] = 0;
          alStack_80[2] = 0;
        }
        else {
          FUN_103f10e14();
        }
        alStack_80[0] = lVar5;
        plStack_68 = plVar3;
        _objc_retain(lVar5);
        plVar3 = alStack_80;
        FUN_103f0eba4(plVar3);
        uVar2 = (uint)plVar3;
        func_0x00010006e7f4(alStack_80);
      }
      lVar5 = *(long *)(unaff_x20 + _DAT_11302dd10);
      uVar11 = (uint)(lVar5 == 0 && *(long *)(lStack_88 + _DAT_11302dd10) == 0);
      if ((lVar5 != 0) && (*(long *)(lStack_88 + _DAT_11302dd10) != 0)) {
        func_0x00010142cfc4();
        uVar11 = (uint)lVar5;
      }
      lVar5 = ((long *)(unaff_x20 + _DAT_11302dd18))[1];
      lVar6 = ((long *)(lStack_88 + _DAT_11302dd18))[1];
      uVar12 = (uint)(lVar5 == 0 && lVar6 == 0);
      if ((lVar5 != 0) && (lVar6 != 0)) {
        lVar4 = *(long *)(unaff_x20 + _DAT_11302dd18);
        if ((lVar4 == *(long *)(lStack_88 + _DAT_11302dd18)) && (lVar5 == lVar6)) {
          uVar12 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar12 = (uint)lVar4;
        }
      }
      lVar13 = *(long *)(unaff_x20 + _DAT_11302dd20);
      lVar6 = *(long *)(lStack_88 + _DAT_11302dd20);
      lVar5 = *(long *)(unaff_x20 + _DAT_11302dd28);
      lVar4 = *(long *)(lStack_88 + _DAT_11302dd28);
      _objc_release(lStack_88);
      uVar1 = 0;
      if (lVar13 == lVar6) {
        uVar1 = (uint)plVar9 & (uint)(lVar8 == lVar7) & (uint)plVar10 & uVar2 & uVar11 & uVar12;
      }
      if (lVar5 != lVar4) {
        return 0;
      }
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 103f0f7b4; end: 103f0f7bf; -[SCDiscoverFeedStoryFeatures isEqual:] */

uint FUN_103f0f7b4(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f0f518(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f0f7c0; end: 103f0f807; -[SCDiscoverFeedStoryFeatures init] */

void FUN_103f0f7c0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/RecentEvents.swift",0x30,2,0xe3,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f0f808);
  (*pcVar1)();
}



/* Entry: 103f0f808; end: 103f0f87b; -[SCDiscoverFeedStoryFeatures .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f808(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302dcf0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302dd00 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302dd08));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302dd10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302dd18 + 8))
  ;
  return;
}



/* Entry: 103f0f87c; end: 103f0f88b; -[SCDiscoverFeedRecentEvent eventType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f87c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd30);
}



/* Entry: 103f0f88c; end: 103f0f89b; -[SCDiscoverFeedRecentEvent storyFeatures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dd38));
  return;
}



/* Entry: 103f0f89c; end: 103f0f8ab; -[SCDiscoverFeedRecentEvent contextFeatures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f89c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dd40));
  return;
}



/* Entry: 103f0f8ac; end: 103f0f8bb; -[SCDiscoverFeedRecentEvent timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f8ac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd48);
}



/* Entry: 103f0f8bc; end: 103f0f8cb; -[SCDiscoverFeedRecentEvent interactionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f8bc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd50);
}



/* Entry: 103f0f8cc; end: 103f0f8db; -[SCDiscoverFeedRecentEvent watchTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f0f8cc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dd58);
}



/* Entry: 103f0f8dc; end: 103f0f8eb; -[SCDiscoverFeedRecentEvent numUniqueSnapsWatched] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f0f8dc(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dd60);
}



/* Entry: 103f0f8ec; end: 103f0f8fb; -[SCDiscoverFeedRecentEvent maxViewedSnapIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f0f8ec(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dd68);
}



/* Entry: 103f0f8fc; end: 103f0f90b; -[SCDiscoverFeedRecentEvent watchedStoryProperties] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f8fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302dd70));
  return;
}



/* Entry: 103f0f90c; end: 103f0f91b; -[SCDiscoverFeedRecentEvent entryIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f90c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd78);
}



/* Entry: 103f0f91c; end: 103f0f92b; -[SCDiscoverFeedRecentEvent exitIntent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f91c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd80);
}



/* Entry: 103f0f92c; end: 103f0f93b; -[SCDiscoverFeedRecentEvent impressionTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f0f92c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dd88);
}



/* Entry: 103f0f93c; end: 103f0f94b; -[SCDiscoverFeedRecentEvent hideType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f0f93c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dd90);
}



/* Entry: 103f0f94c; end: 103f0fbd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0f94c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
                  undefined4 param_13,undefined8 param_14)

{
  long unaff_x20;
  undefined1 auStack_80 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302dd30) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd38) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd40) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd48) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd50) = param_5;
  *(undefined4 *)(unaff_x20 + _DAT_11302dd58) = param_6;
  *(undefined4 *)(unaff_x20 + _DAT_11302dd60) = param_7;
  *(undefined4 *)(unaff_x20 + _DAT_11302dd68) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd70) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd78) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd80) = param_11;
  *(undefined4 *)(unaff_x20 + _DAT_11302dd88) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_11302dd90) = param_14;
  _objc_msgSendSuper2(auStack_80,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f0fbd4; end: 103f0fc97; -[SCDiscoverFeedRecentEvent initWithEventType:storyFeatures:contextFeatures:timestamp:interactionContext:watchTimeMs:numUniqueSnapsWatched:maxViewedSnapIndex:watchedStoryProperties:entryIntent:exitIntent:impressionTimeMs:hideType:] */

void FUN_103f0fbd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_12);
  func_0x000103f0fa90(param_1,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_12,
                      param_13,param_14,param_15);
  return;
}



/* Entry: 103f0fc98; end: 103f0fccb; -[SCDiscoverFeedRecentEvent hash] */

undefined8 FUN_103f0fc98(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f0fccc();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f0fccc; end: 103f0fee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f0fccc(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  double dVar4;
  undefined1 auStack_c0 [72];
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dd30);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  if (*(long *)(unaff_x20 + _DAT_11302dd38) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    FUN_103f0f350();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar1);
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_11302dd40);
  if (lVar3 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherVABycfC(auStack_c0);
    __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(lVar3 + _DAT_11302dcd8));
    __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(lVar3 + _DAT_11302dce0));
    uVar2 = (ulong)*(uint *)(lVar3 + _DAT_11302dce8);
    __ss6HasherV8_combineyys6UInt32VF(uVar2);
    __ss6HasherV8finalizeSiyF();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  dVar4 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11302dd48) != 0.0) {
    dVar4 = *(double *)(unaff_x20 + _DAT_11302dd48);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar4);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dd50));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dd58));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dd60));
  uVar2 = (ulong)*(uint *)(unaff_x20 + _DAT_11302dd68);
  __ss6HasherV8_combineyys6UInt32VF(uVar2);
  if (*(long *)(unaff_x20 + _DAT_11302dd70) == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    func_0x000103f0eae4();
    __ss6HasherV8_combineyys5UInt8VF(1);
    __ss6HasherV8_combineyySuF(uVar2);
  }
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dd78));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dd80));
  __ss6HasherV8_combineyys6UInt32VF(*(undefined4 *)(unaff_x20 + _DAT_11302dd88));
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dd90));
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f0fee8; end: 103f101db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f0fee8(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long *plVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  uint uStack_c4;
  uint uStack_a0;
  uint uStack_9c;
  long lStack_98;
  long alStack_90 [3];
  long *plStack_78;
  
  lVar18 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,alStack_90);
  if (plStack_78 == (long *)0x0) {
    func_0x00010006e7f4(alStack_90);
  }
  else {
    plVar15 = &lStack_98;
    _swift_dynamicCast(plVar15,alStack_90,PTR___sypN_11034f1a8 + 8,lVar18,6);
    if (((ulong)plVar15 & 1) != 0) {
      iVar3 = *(int *)(unaff_x20 + _DAT_11302dd30);
      iVar4 = *(int *)(lStack_98 + _DAT_11302dd30);
      if (*(long *)(unaff_x20 + _DAT_11302dd38) == 0) {
        uStack_9c = (uint)(*(long *)(lStack_98 + _DAT_11302dd38) == 0);
      }
      else {
        lVar18 = *(long *)(lStack_98 + _DAT_11302dd38);
        if (lVar18 == 0) {
          plVar15 = (long *)0x0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          func_0x000103f10e54();
        }
        alStack_90[0] = lVar18;
        plStack_78 = plVar15;
        _objc_retain(lVar18);
        uStack_9c = (uint)alStack_90;
        FUN_103f0f518();
        plVar15 = alStack_90;
        func_0x00010006e7f4();
      }
      if (*(long *)(unaff_x20 + _DAT_11302dd40) == 0) {
        uStack_a0 = (uint)(*(long *)(lStack_98 + _DAT_11302dd40) == 0);
      }
      else {
        lVar18 = *(long *)(lStack_98 + _DAT_11302dd40);
        if (lVar18 == 0) {
          plVar15 = (long *)0x0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          func_0x000103f10e34();
        }
        alStack_90[0] = lVar18;
        plStack_78 = plVar15;
        _objc_retain(lVar18);
        uStack_a0 = (uint)alStack_90;
        FUN_103f0eec0();
        plVar15 = alStack_90;
        func_0x00010006e7f4();
      }
      dVar22 = *(double *)(unaff_x20 + _DAT_11302dd48);
      dVar23 = *(double *)(lStack_98 + _DAT_11302dd48);
      iVar5 = *(int *)(unaff_x20 + _DAT_11302dd50);
      iVar6 = *(int *)(lStack_98 + _DAT_11302dd50);
      iVar7 = *(int *)(unaff_x20 + _DAT_11302dd58);
      iVar8 = *(int *)(lStack_98 + _DAT_11302dd58);
      iVar9 = *(int *)(unaff_x20 + _DAT_11302dd60);
      iVar10 = *(int *)(lStack_98 + _DAT_11302dd60);
      iVar11 = *(int *)(unaff_x20 + _DAT_11302dd68);
      iVar12 = *(int *)(lStack_98 + _DAT_11302dd68);
      if (*(long *)(unaff_x20 + _DAT_11302dd70) == 0) {
        uStack_c4 = (uint)(*(long *)(lStack_98 + _DAT_11302dd70) == 0);
      }
      else {
        lVar18 = *(long *)(lStack_98 + _DAT_11302dd70);
        if (lVar18 == 0) {
          plVar15 = (long *)0x0;
          alStack_90[1] = 0;
          alStack_90[2] = 0;
        }
        else {
          func_0x000103f10e14();
        }
        alStack_90[0] = lVar18;
        plStack_78 = plVar15;
        _objc_retain(lVar18);
        uStack_c4 = (uint)alStack_90;
        FUN_103f0eba4();
        func_0x00010006e7f4(alStack_90);
      }
      lVar20 = *(long *)(unaff_x20 + _DAT_11302dd78);
      lVar21 = *(long *)(lStack_98 + _DAT_11302dd78);
      lVar18 = *(long *)(unaff_x20 + _DAT_11302dd80);
      lVar19 = *(long *)(lStack_98 + _DAT_11302dd80);
      iVar13 = *(int *)(unaff_x20 + _DAT_11302dd88);
      iVar14 = *(int *)(lStack_98 + _DAT_11302dd88);
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_11302dd90);
      uVar17 = *(undefined8 *)(lStack_98 + _DAT_11302dd90);
      _objc_release(lStack_98);
      uVar1 = 0;
      if (dVar22 == dVar23) {
        uVar1 = iVar3 == iVar4 & uStack_9c & uStack_a0;
      }
      uVar2 = 0;
      if (iVar5 == iVar6) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (iVar7 == iVar8) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (iVar9 == iVar10) {
        uVar2 = uVar1;
      }
      uVar1 = 0;
      if (iVar11 == iVar12) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (lVar20 == lVar21) {
        uVar2 = uVar1 & uStack_c4;
      }
      uVar1 = 0;
      if (lVar18 == lVar19) {
        uVar1 = uVar2;
      }
      uVar2 = 0;
      if (iVar13 == iVar14) {
        uVar2 = uVar1;
      }
      if ((int)uVar16 != (int)uVar17) {
        return 0;
      }
      return uVar2;
    }
  }
  return 0;
}



/* Entry: 103f101dc; end: 103f101e7; -[SCDiscoverFeedRecentEvent isEqual:] */

uint FUN_103f101dc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f0fee8(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f101e8; end: 103f1022f; -[SCDiscoverFeedRecentEvent init] */

void FUN_103f101e8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/RecentEvents.swift",0x30,2,0x146,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f10230);
  (*pcVar1)();
}



/* Entry: 103f10230; end: 103f10233;  */

void FUN_103f10230(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103f10234; end: 103f1027b; -[SCDiscoverFeedRecentEvent .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f10234(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302dd38));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302dd40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302dd70));
  return;
}



/* Entry: 103f1027c; end: 103f10287; -[SCDiscoverFeedRecentEventsSession sessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1027c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302dd98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302dd98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f10288; end: 103f10293; -[SCDiscoverFeedRecentEventsSession pageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f10288(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11302dda0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11302dda0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103f10294; end: 103f102eb;  */

void FUN_103f10294(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103f102ec; end: 103f102fb; -[SCDiscoverFeedRecentEventsSession sessionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f102ec(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dda8);
}



/* Entry: 103f102fc; end: 103f1030b; -[SCDiscoverFeedRecentEventsSession sessionStartTs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f102fc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302ddb0);
}



/* Entry: 103f1030c; end: 103f10363; -[SCDiscoverFeedRecentEventsSession recentEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1030c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11302ddb8);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000103f10e74();
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



/* Entry: 103f10364; end: 103f1041f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f10364(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302dd98);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11302dda0);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_11302dda8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11302ddb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302ddb8) = param_7;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f10420; end: 103f1052b; -[SCDiscoverFeedRecentEventsSession initWithSessionId:pageSessionId:sessionType:sessionStartTs:recentEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f10420(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_2;
  _swift_getObjectType();
  if (param_4 == 0) {
    lVar2 = 0;
    lVar4 = lVar3;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_3;
    lVar4 = param_4;
  }
  if (param_5 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar4 = param_5;
  }
  if (param_7 == 0) {
    param_7 = 0;
  }
  else {
    func_0x000103f10e74();
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_7,lVar4);
  }
  plVar1 = (long *)(param_2 + _DAT_11302dd98);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_2 + _DAT_11302dda0);
  *plVar1 = param_5;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_11302dda8) = param_6;
  *(undefined8 *)(param_2 + _DAT_11302ddb0) = param_1;
  *(long *)(param_2 + _DAT_11302ddb8) = param_7;
  lStack_70 = param_2;
  lStack_68 = lVar3;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1052c; end: 103f1055f; -[SCDiscoverFeedRecentEventsSession hash] */

undefined8 FUN_103f1052c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103f10560();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103f10560; end: 103f1069b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f10560(void)

{
  undefined8 uVar1;
  double dVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_11302dd98))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dd98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  if (((undefined8 *)(unaff_x20 + _DAT_11302dda0))[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11302dda0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar5 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __ss6HasherV8_combineyys6UInt64VF(*(undefined8 *)(unaff_x20 + _DAT_11302dda8));
  dVar2 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_11302ddb0) != 0.0) {
    dVar2 = *(double *)(unaff_x20 + _DAT_11302ddb0);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar2);
  lVar4 = *(long *)(unaff_x20 + _DAT_11302ddb8);
  lVar3 = lVar4;
  if (lVar4 != 0) {
    func_0x000103f10e74();
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,dVar2);
    lVar3 = lVar4;
    func_0x000107c44c3c();
    _objc_release(lVar4);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f1069c; end: 103f108ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103f1069c(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long unaff_x20;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar6 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
    return 0;
  }
  plVar4 = &lStack_88;
  _swift_dynamicCast(plVar4,auStack_80,PTR___sypN_11034f1a8 + 8,lVar6,6);
  if (((ulong)plVar4 & 1) == 0) {
    return 0;
  }
  lVar6 = ((long *)(unaff_x20 + _DAT_11302dd98))[1];
  lVar7 = ((long *)(lStack_88 + _DAT_11302dd98))[1];
  uVar8 = (uint)(lVar6 == 0 && lVar7 == 0);
  if (lVar6 != 0 && lVar7 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_11302dd98);
    if (lVar5 == *(long *)(lStack_88 + _DAT_11302dd98) && lVar6 == lVar7) {
      uVar8 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar8 = (uint)lVar5;
    }
  }
  lVar6 = ((long *)(unaff_x20 + _DAT_11302dda0))[1];
  lVar7 = ((long *)(lStack_88 + _DAT_11302dda0))[1];
  uVar9 = (uint)(lVar6 == 0 && lVar7 == 0);
  if (lVar6 != 0 && lVar7 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_11302dda0);
    if (lVar5 == *(long *)(lStack_88 + _DAT_11302dda0) && lVar6 == lVar7) {
      uVar9 = 1;
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
      uVar9 = (uint)lVar5;
    }
  }
  iVar2 = *(int *)(unaff_x20 + _DAT_11302dda8);
  iVar3 = *(int *)(lStack_88 + _DAT_11302dda8);
  dVar11 = *(double *)(unaff_x20 + _DAT_11302ddb0);
  dVar12 = *(double *)(lStack_88 + _DAT_11302ddb0);
  lVar7 = *(long *)(unaff_x20 + _DAT_11302ddb8);
  lVar6 = *(long *)(lStack_88 + _DAT_11302ddb8);
  if (lVar7 == 0) {
    _swift_bridgeObjectRetain(lVar6);
    _objc_release(lStack_88);
    if (lVar6 == 0) {
      uVar10 = 1;
      goto LAB_103f10870;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  else {
    if (lVar6 != 0) {
      _swift_bridgeObjectRetain(lVar6);
      lVar5 = lVar7;
      _swift_bridgeObjectRetain(lVar7);
      uVar10 = (uint)lVar5;
      FUN_103f10a10();
      _swift_bridgeObjectRelease(lVar7);
      _swift_bridgeObjectRelease(lVar6);
      _objc_release(lStack_88);
      goto LAB_103f10870;
    }
    _objc_release(lStack_88);
  }
  uVar10 = 0;
LAB_103f10870:
  uVar1 = 0;
  if (dVar11 == dVar12) {
    uVar1 = uVar8 & uVar9 & (uint)(iVar2 == iVar3);
  }
  return uVar1 & uVar10;
}



/* Entry: 103f108ac; end: 103f108b7; -[SCDiscoverFeedRecentEventsSession isEqual:] */

uint FUN_103f108ac(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f1069c(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f108b8; end: 103f10943;  */

uint FUN_103f108b8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

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



/* Entry: 103f10944; end: 103f109bf; -[SCDiscoverFeedRecentEventsSession init] */

void FUN_103f10944(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCDiscoverFeedRankingServices/RecentEvents.swift",0x30,2,0x17e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f1098c);
  (*pcVar1)();
}



/* Entry: 103f109c0; end: 103f10a0f; -[SCDiscoverFeedRecentEventsSession .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f109c0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302dd98 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302dda0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302ddb8));
  return;
}



/* Entry: 103f10a10; end: 103f10c4f;  */

uint FUN_103f10a10(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar9 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (param_2 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_2 & 0xffffffffffffff8;
    if ((param_2 & 0x8000000000000000) != 0) {
      uVar2 = param_2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  if (uVar9 == uVar2) {
    if (uVar9 != 0) {
      uVar5 = param_1 & 0xffffffffffffff8;
      uVar2 = uVar5;
      if ((param_1 & 0x8000000000000000) != 0) {
        uVar2 = param_1;
      }
      uVar3 = uVar5 + 0x20;
      if (param_1 >> 0x3e != 0) {
        uVar3 = uVar2;
      }
      uVar6 = param_2 & 0xffffffffffffff8;
      uVar2 = uVar6;
      if ((param_2 & 0x8000000000000000) != 0) {
        uVar2 = param_2;
      }
      uVar4 = uVar6 + 0x20;
      if (param_2 >> 0x3e != 0) {
        uVar4 = uVar2;
      }
      if (uVar3 != uVar4) {
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x103f10c50);
          (*pcVar1)();
        }
        func_0x000103f10e74();
        if (((param_2 | param_1) & 0xc000000000000001) == 0) {
          lVar12 = *(long *)(uVar5 + 0x10);
          lVar13 = *(long *)(uVar6 + 0x10);
          puVar10 = (ulong *)(param_1 + 0x20);
          puVar11 = (undefined8 *)(param_2 + 0x20);
          do {
            uVar9 = uVar9 - 1;
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103f10bf0);
              (*pcVar1)();
            }
            if (lVar13 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103f10bf4);
              (*pcVar1)();
            }
            uVar5 = *puVar10;
            uVar7 = *puVar11;
            _objc_retain();
            _objc_retain(uVar7);
            uVar2 = uVar5;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar5,uVar7);
            uVar8 = (uint)uVar2;
            _objc_release(uVar5);
            _objc_release(uVar7);
            if ((uVar2 & 1) == 0) break;
            lVar13 = lVar13 + -1;
            lVar12 = lVar12 + -1;
            puVar10 = puVar10 + 1;
            puVar11 = puVar11 + 1;
          } while (uVar9 != 0);
        }
        else {
          lVar12 = 4;
          do {
            uVar9 = uVar9 - 1;
            uVar2 = lVar12 - 4;
            if ((param_1 & 0xc000000000000001) == 0) {
              if (*(long *)(uVar5 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103f10bf8);
                (*pcVar1)();
              }
              uVar3 = *(ulong *)(param_1 + lVar12 * 8);
              _objc_retain();
              if ((param_2 & 0xc000000000000001) == 0) goto LAB_103f10b18;
LAB_103f10ae8:
              FUN_103f10c50(uVar2,param_2);
            }
            else {
              uVar3 = uVar2;
              FUN_103f10c50(uVar2,param_1);
              if ((param_2 & 0xc000000000000001) != 0) goto LAB_103f10ae8;
LAB_103f10b18:
              if (*(long *)(uVar6 + 0x10) <= (long)uVar2) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x103f10bfc);
                (*pcVar1)();
              }
              uVar2 = *(ulong *)(param_2 + lVar12 * 8);
              _objc_retain(uVar2);
            }
            uVar4 = uVar3;
            __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(uVar3,uVar2);
            uVar8 = (uint)uVar4;
            _objc_release(uVar3);
            _objc_release(uVar2);
          } while (((uVar4 & 1) != 0) && (lVar12 = lVar12 + 1, uVar9 != 0));
        }
        goto LAB_103f10c28;
      }
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
LAB_103f10c28:
  return uVar8 & 1;
}



/* Entry: 103f10c50; end: 103f10de3;  */

ulong FUN_103f10c50(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f10d18);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103f10d1c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103f10e74();
    uVar3 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar3 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar3);
    uVar3 = param_1;
    func_0x000103f10e74();
    uVar4 = param_1;
    _swift_dynamicCastClass(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    __ss11_StringGutsV4growyySiF(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  __sSS6appendyySSF(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  __sSS6appendyySSF(0xd000000000000019,0x800000010dcaa050);
  __sSS6appendyySSF(0x756f662074756220,0xeb0000000020646e);
  _swift_getObjectType(param_1);
  uVar5 = 0;
  __ss9_typeName_9qualifiedSSypXp_SbtF();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __ss17_assertionFailure__5flagss5NeverOs12StaticStringV_SSs6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103f10de4);
  (*pcVar2)();
}



/* Entry: 103f10de4; end: 103f10e13;  */

undefined1  [16] FUN_103f10de4(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 4) {
    uVar1 = param_1;
  }
  auVar2[8] = 3 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 103f10e14; end: 103f10e93;  */

void FUN_103f10e14(void)

{
  _objc_opt_self(&PTR_PTR_112964720);
  return;
}



/* Entry: 103f10e94; end: 103f10e97;  */

void FUN_103f10e94(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9c28;
  _swift_getWitnessTable(&UNK_10dca9c28,&UNK_110720c78);
  puRam000000011302ddc0 = puVar1;
  return;
}



/* Entry: 103f10e98; end: 103f10ed7;  */

void FUN_103f10e98(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9c28;
  _swift_getWitnessTable(&UNK_10dca9c28,&UNK_110720c78);
  puRam000000011302ddc0 = puVar1;
  return;
}



/* Entry: 103f10ed8; end: 103f10edb;  */

void FUN_103f10ed8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9cc8;
  _swift_getWitnessTable(&UNK_10dca9cc8,&UNK_110720c98);
  puRam000000011302ddc8 = puVar1;
  return;
}



/* Entry: 103f10edc; end: 103f10f1b;  */

void FUN_103f10edc(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9cc8;
  _swift_getWitnessTable(&UNK_10dca9cc8,&UNK_110720c98);
  puRam000000011302ddc8 = puVar1;
  return;
}



/* Entry: 103f10f1c; end: 103f10f1f;  */

void FUN_103f10f1c(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9d68;
  _swift_getWitnessTable(&UNK_10dca9d68,&UNK_110720cb8);
  puRam000000011302ddd0 = puVar1;
  return;
}



/* Entry: 103f10f20; end: 103f10f5f;  */

void FUN_103f10f20(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9d68;
  _swift_getWitnessTable(&UNK_10dca9d68,&UNK_110720cb8);
  puRam000000011302ddd0 = puVar1;
  return;
}



/* Entry: 103f10f60; end: 103f10f63;  */

void FUN_103f10f60(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9e08;
  _swift_getWitnessTable(&UNK_10dca9e08,&UNK_110720cd8);
  puRam000000011302ddd8 = puVar1;
  return;
}



/* Entry: 103f10f64; end: 103f10fa3;  */

void FUN_103f10f64(void)

{
  undefined *puVar1;
  
  if (puRam000000011302ddd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9e08;
  _swift_getWitnessTable(&UNK_10dca9e08,&UNK_110720cd8);
  puRam000000011302ddd8 = puVar1;
  return;
}



/* Entry: 103f10fa4; end: 103f10fa7;  */

void FUN_103f10fa4(void)

{
  undefined *puVar1;
  
  if (puRam000000011302dde0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9ea8;
  _swift_getWitnessTable(&UNK_10dca9ea8,&UNK_110720cf8);
  puRam000000011302dde0 = puVar1;
  return;
}



/* Entry: 103f10fa8; end: 103f10fe7;  */

void FUN_103f10fa8(void)

{
  undefined *puVar1;
  
  if (puRam000000011302dde0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca9ea8;
  _swift_getWitnessTable(&UNK_10dca9ea8,&UNK_110720cf8);
  puRam000000011302dde0 = puVar1;
  return;
}



/* Entry: 103f10fe8; end: 103f11037;  */

undefined1  [16] FUN_103f10fe8(void)

{
  return ZEXT816(0x110720c78);
}



/* Entry: 103f11038; end: 103f11057;  */

void FUN_103f11038(void)

{
  _objc_opt_self(&PTR_PTR_112964af8);
  return;
}



/* Entry: 103f11058; end: 103f110bb;  */

bool FUN_103f11058(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103f110bc; end: 103f110bf; -[SCDiscoverFeedStoryCompositionProperties copyWithZone:] */

void FUN_103f110bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f110c0; end: 103f110c3; -[SCDiscoverFeedContextFeatures copyWithZone:] */

void FUN_103f110c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f110c4; end: 103f110c7; -[SCDiscoverFeedStoryFeatures copyWithZone:] */

void FUN_103f110c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f110c8; end: 103f110cb; -[SCDiscoverFeedRecentEvent copyWithZone:] */

void FUN_103f110c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f110cc; end: 103f110e7; -[SCDiscoverFeedRecentEventsSession copyWithZone:] */

void FUN_103f110cc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103f110e8; end: 103f110f7; -[SCDiscoverFeedStoryIHEventBool value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103f110e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302deb0);
}



/* Entry: 103f110f8; end: 103f11107; -[SCDiscoverFeedStoryIHEventBool timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f110f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302deb8);
}



/* Entry: 103f11108; end: 103f1116b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11108(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11302deb0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302deb8) = param_1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f1116c; end: 103f111cf; -[SCDiscoverFeedStoryIHEventBool initWithValue:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f1116c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  _swift_getObjectType();
  *(undefined1 *)(param_2 + _DAT_11302deb0) = param_4;
  *(undefined8 *)(param_2 + _DAT_11302deb8) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f111d0; end: 103f1123b; -[SCDiscoverFeedStoryIHEventBool hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f111d0(long param_1)

{
  double dVar1;
  undefined1 auStack_68 [72];
  
  __ss6HasherVABycfC(auStack_68);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(param_1 + _DAT_11302deb0));
  dVar1 = 0.0;
  if (*(double *)(param_1 + _DAT_11302deb8) != 0.0) {
    dVar1 = *(double *)(param_1 + _DAT_11302deb8);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103f1123c; end: 103f112fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103f1123c(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar4 = &lStack_68;
    _swift_dynamicCast(plVar4,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      bVar1 = *(byte *)(unaff_x20 + _DAT_11302deb0);
      bVar2 = *(byte *)(lStack_68 + _DAT_11302deb0);
      dVar5 = *(double *)(unaff_x20 + _DAT_11302deb8);
      dVar6 = *(double *)(lStack_68 + _DAT_11302deb8);
      _objc_release();
      return dVar5 == dVar6 & (bVar1 ^ bVar2 ^ 0xff);
    }
  }
  return 0;
}



/* Entry: 103f112fc; end: 103f11307; -[SCDiscoverFeedStoryIHEventBool isEqual:] */

uint FUN_103f112fc(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f1123c(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f11308; end: 103f1134f; -[SCDiscoverFeedStoryIHEventBool init] */

void FUN_103f11308(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f11350);
  (*pcVar1)();
}



/* Entry: 103f11350; end: 103f1135f; -[SCDiscoverFeedStoryIHEventFloat value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_103f11350(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_11302dec0);
}



/* Entry: 103f11360; end: 103f1136f; -[SCDiscoverFeedStoryIHEventFloat timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f11360(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302dec8);
}



/* Entry: 103f11370; end: 103f113cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f11370(undefined4 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined4 *)(unaff_x20 + _DAT_11302dec0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302dec8) = param_2;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f113cc; end: 103f1142f; -[SCDiscoverFeedStoryIHEventFloat initWithValue:timestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103f113cc(undefined4 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_3;
  _swift_getObjectType();
  *(undefined4 *)(param_3 + _DAT_11302dec0) = param_1;
  *(undefined8 *)(param_3 + _DAT_11302dec8) = param_2;
  lStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103f11430; end: 103f114cb; -[SCDiscoverFeedStoryIHEventFloat hash] */

void FUN_103f11430(void)

{
  func_0x000103f11450();
  return;
}



/* Entry: 103f114cc; end: 103f11593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_103f114cc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_70);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
  }
  else {
    plVar2 = &lStack_78;
    _swift_dynamicCast(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,lVar1,6);
    if (((ulong)plVar2 & 1) != 0) {
      fVar3 = *(float *)(unaff_x20 + _DAT_11302dec0);
      fVar4 = *(float *)(lStack_78 + _DAT_11302dec0);
      dVar5 = *(double *)(unaff_x20 + _DAT_11302dec8);
      dVar6 = *(double *)(lStack_78 + _DAT_11302dec8);
      _objc_release();
      if (dVar5 != dVar6) {
        return false;
      }
      if (NAN(fVar3) || NAN(fVar4)) {
        return false;
      }
      return fVar3 == fVar4;
    }
  }
  return false;
}



/* Entry: 103f11594; end: 103f1159f; -[SCDiscoverFeedStoryIHEventFloat isEqual:] */

uint FUN_103f11594(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103f114cc(&uStack_50);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103f115a0; end: 103f115e7; -[SCDiscoverFeedStoryIHEventFloat init] */

void FUN_103f115a0(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,"SCDiscoverFeedRankingServices/StoryIH.swift",
             0x2b,2,0x52,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103f115e8);
  (*pcVar1)();
}



/* Entry: 103f115e8; end: 103f115f7; -[SCDiscoverFeedStoryIHEventInteger value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103f115e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11302ded0);
}


