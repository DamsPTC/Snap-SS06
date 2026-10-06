/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e0de94; end: 103e0dfcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0de94(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = ((undefined8 *)(param_2 + _DAT_113011528))[1];
  *param_1 = *(undefined8 *)(param_2 + _DAT_113011528);
  param_1[1] = uVar10;
  uVar8 = *(undefined8 *)(param_2 + _DAT_113011530);
  lVar5 = 0;
  FUN_103e07278();
  iVar2 = *(int *)(lVar5 + 0x14);
  _swift_bridgeObjectRetain(uVar10);
  _objc_retain(uVar8);
  func_0x0001047b6fb0((long)param_1 + (long)iVar2);
  uVar10 = ((undefined8 *)(param_2 + _DAT_113011538))[1];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
  *puVar1 = *(undefined8 *)(param_2 + _DAT_113011538);
  puVar1[1] = uVar10;
  iVar2 = *(int *)(lVar5 + 0x1c);
  lVar6 = *(long *)(param_2 + _DAT_113011540);
  if (lVar6 == 0) {
    _swift_bridgeObjectRetain();
    uVar4 = 2;
  }
  else {
    _swift_bridgeObjectRetain();
    func_0x000107c3ebcc();
    uVar4 = (undefined1)lVar6;
  }
  *(undefined1 *)((long)param_1 + (long)iVar2) = uVar4;
  uVar7 = *(undefined8 *)(param_2 + _DAT_113011548);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20)) = uVar7;
  puVar1 = (undefined8 *)(param_2 + _DAT_113011550);
  uVar10 = *puVar1;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  puVar3[1] = puVar1[1];
  *puVar3 = uVar10;
  uVar9 = puVar1[1];
  uVar10 = *(undefined8 *)(param_2 + _DAT_113011558);
  uVar8 = ((undefined8 *)(param_2 + _DAT_113011558))[1];
  _swift_bridgeObjectRetain(uVar8);
  _objc_retain(uVar7);
  _swift_bridgeObjectRetain(uVar9);
  _objc_release(param_2);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  *param_1 = uVar10;
  param_1[1] = uVar8;
  return;
}



/* Entry: 103e0dfcc; end: 103e0e047; -[SCSponsoredSnapBannerMetadata init] */

void FUN_103e0dfcc(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SponsoredSnapBannerDataServices/SponsoredSnapBannerMetadataWrapper.swift",0x48,2,0x3d,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0e014);
  (*pcVar1)();
}



/* Entry: 103e0e048; end: 103e0e0df; -[SCSponsoredSnapBannerMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e048(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011528 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011530));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011538 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011540));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011548));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011550 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113011558 + 8))
  ;
  return;
}



/* Entry: 103e0e0e0; end: 103e0e0ff;  */

void FUN_103e0e0e0(void)

{
  _objc_opt_self(&PTR_PTR_11294e9f0);
  return;
}



/* Entry: 103e0e100; end: 103e0e133; -[_TtC20SCAdOnDeviceServices20SCAdOnDeviceServices onDeviceFeatureGatingProvider] */

void FUN_103e0e100(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010048fa88();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e0e134; end: 103e0e1bf; -[_TtC20SCAdOnDeviceServices20SCAdOnDeviceServices setOnDeviceFeatureGatingProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e134(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113011590);
  *(undefined8 *)(param_1 + _DAT_113011590) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e0e1c0; end: 103e0e21f; -[_TtC20SCAdOnDeviceServices20SCAdOnDeviceServices init] */

void FUN_103e0e1c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAdOnDeviceServices.SCAdOnDeviceServices",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0e1ec);
  (*pcVar1)();
}



/* Entry: 103e0e220; end: 103e0e2a3; -[_TtC20SCAdOnDeviceServices20SCAdOnDeviceServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e220(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113011588));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113011590));
  return;
}



/* Entry: 103e0e2a4; end: 103e0e303; -[_TtC31AdPlayableWebViewFactoryService31AdPlayableWebViewFactoryService init] */

void FUN_103e0e2a4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdPlayableWebViewFactoryService.AdPlayableWebViewFactoryService",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0e2d0);
  (*pcVar1)();
}



/* Entry: 103e0e304; end: 103e0e313; -[_TtC31AdPlayableWebViewFactoryService31AdPlayableWebViewFactoryService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130115c0));
  return;
}



/* Entry: 103e0e314; end: 103e0e347; -[_TtC31AdPublicStoryPersistenceService31AdPublicStoryPersistenceService publicStoryContentViewHistoryCoordinator] */

void FUN_103e0e314(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e0e348();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e0e348; end: 103e0e3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e0e348(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_1130115f8;
  lVar2 = *(long *)(unaff_x20 + _DAT_1130115f8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + _DAT_1130115f0));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  return lVar2;
}



/* Entry: 103e0e3bc; end: 103e0e447; -[_TtC31AdPublicStoryPersistenceService31AdPublicStoryPersistenceService setPublicStoryContentViewHistoryCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e3bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1130115f8);
  *(undefined8 *)(param_1 + _DAT_1130115f8) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e0e448; end: 103e0e4a7; -[_TtC31AdPublicStoryPersistenceService31AdPublicStoryPersistenceService init] */

void FUN_103e0e448(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdPublicStoryPersistenceService.AdPublicStoryPersistenceService",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0e474);
  (*pcVar1)();
}



/* Entry: 103e0e4a8; end: 103e0e4df; -[_TtC31AdPublicStoryPersistenceService31AdPublicStoryPersistenceService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e4a8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130115f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130115f8));
  return;
}



/* Entry: 103e0e4e0; end: 103e0e53b; -[SCAdPublicStoryContentViewHistory profileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e4e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_113011628))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_113011628);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e0e53c; end: 103e0e54b; -[SCAdPublicStoryContentViewHistory contentViewTimeSinceLastAdSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e0e53c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113011630);
}



/* Entry: 103e0e54c; end: 103e0e59f; -[SCAdPublicStoryContentViewHistory contentOpenTimestampSinceLastAdSeconds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e54c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113011638);
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



/* Entry: 103e0e5a0; end: 103e0e623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e5a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113011628);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113011630) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011638) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0e624; end: 103e0e6e7; -[SCAdPublicStoryContentViewHistory initWithProfileId:contentViewTimeSinceLastAdSeconds:contentOpenTimestampSinceLastAdSeconds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e624(undefined8 param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_2;
  _swift_getObjectType();
  if (param_4 == 0) {
    param_3 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
              (param_5,PTR___sSdN_11034dd90);
  }
  plVar1 = (long *)(param_2 + _DAT_113011628);
  *plVar1 = param_4;
  plVar1[1] = param_3;
  *(undefined8 *)(param_2 + _DAT_113011630) = param_1;
  *(long *)(param_2 + _DAT_113011638) = param_5;
  lStack_60 = param_2;
  lStack_58 = lVar2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0e6e8; end: 103e0e71b; -[SCAdPublicStoryContentViewHistory hash] */

undefined8 FUN_103e0e6e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e0e71c();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 103e0e71c; end: 103e0e803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0e71c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  if (((undefined8 *)(unaff_x20 + _DAT_113011628))[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113011628);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
    uVar4 = uVar1;
    func_0x000107c44c3c();
    _objc_release(uVar1);
  }
  __ss6HasherV8_combineyySuF(uVar4);
  dVar5 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113011630) != 0.0) {
    dVar5 = *(double *)(unaff_x20 + _DAT_113011630);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar5);
  lVar2 = *(long *)(unaff_x20 + _DAT_113011638);
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSdN_11034dd90);
    lVar3 = lVar2;
    func_0x000107c44c3c();
    _objc_release(lVar2);
  }
  __ss6HasherV8_combineyySuF(lVar3);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103e0e804; end: 103e0e9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103e0e804(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  uint uVar7;
  long unaff_x20;
  uint uVar8;
  double dVar9;
  double dVar10;
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
    plVar1 = &lStack_68;
    _swift_dynamicCast(plVar1,auStack_60,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar1 & 1) != 0) {
      lVar3 = ((long *)(unaff_x20 + _DAT_113011628))[1];
      lVar4 = ((long *)(lStack_68 + _DAT_113011628))[1];
      uVar7 = (uint)(lVar3 == 0 && lVar4 == 0);
      if (lVar3 != 0 && lVar4 != 0) {
        lVar2 = *(long *)(unaff_x20 + _DAT_113011628);
        if (lVar2 == *(long *)(lStack_68 + _DAT_113011628) && lVar3 == lVar4) {
          uVar7 = 1;
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          uVar7 = (uint)lVar2;
        }
      }
      dVar9 = *(double *)(unaff_x20 + _DAT_113011630);
      dVar10 = *(double *)(lStack_68 + _DAT_113011630);
      lVar3 = *(long *)(unaff_x20 + _DAT_113011638);
      lVar4 = *(long *)(lStack_68 + _DAT_113011638);
      if (lVar3 == 0) {
        _swift_bridgeObjectRetain(lVar4);
        _objc_release(lStack_68);
        if (lVar4 == 0) {
          uVar8 = 1;
        }
        else {
          _swift_bridgeObjectRelease(lVar4);
          uVar8 = 0;
        }
      }
      else {
        uVar8 = 0;
        if (lVar4 != 0) {
          lVar2 = *(long *)(lVar3 + 0x10);
          if (lVar2 == *(long *)(lVar4 + 0x10)) {
            if ((lVar2 == 0) || (lVar3 == lVar4)) {
              uVar8 = 1;
            }
            else {
              pdVar5 = (double *)(lVar3 + 0x20);
              pdVar6 = (double *)(lVar4 + 0x20);
              do {
                lVar2 = lVar2 + -1;
                uVar8 = (uint)(*pdVar5 == *pdVar6);
                if (*pdVar5 != *pdVar6) break;
                pdVar5 = pdVar5 + 1;
                pdVar6 = pdVar6 + 1;
              } while (lVar2 != 0);
            }
          }
          else {
            uVar8 = 0;
          }
        }
        _objc_release(lStack_68);
      }
      return uVar7 & dVar9 == dVar10 & uVar8;
    }
  }
  return 0;
}



/* Entry: 103e0e9b0; end: 103e0ea2f; -[SCAdPublicStoryContentViewHistory isEqual:] */

uint FUN_103e0e9b0(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103e0e804(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e0ea30; end: 103e0ea33; -[SCAdPublicStoryContentViewHistory copyWithZone:] */

void FUN_103e0ea30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e0ea34; end: 103e0eaaf; -[SCAdPublicStoryContentViewHistory init] */

void FUN_103e0ea34(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "AdPublicStoryPersistenceService/ViewHistory.swift",0x31,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0ea7c);
  (*pcVar1)();
}



/* Entry: 103e0eab0; end: 103e0eaeb; -[SCAdPublicStoryContentViewHistory .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0eab0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113011628 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113011638));
  return;
}



/* Entry: 103e0eaec; end: 103e0eb0b;  */

void FUN_103e0eaec(void)

{
  _objc_opt_self(&PTR_PTR_11294ed38);
  return;
}



/* Entry: 103e0eb0c; end: 103e0eb1b; -[_TtC21AdInteractionServices21AdInteractionServices adReportingInteractionHistoryTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0eb0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011668));
  return;
}



/* Entry: 103e0eb1c; end: 103e0eb2b; -[_TtC21AdInteractionServices21AdInteractionServices adHidingInteractionHistoryTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0eb1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011670));
  return;
}



/* Entry: 103e0eb2c; end: 103e0eb3b; -[_TtC21AdInteractionServices21AdInteractionServices adLifecycleTimestampsTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0eb2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011678));
  return;
}



/* Entry: 103e0eb3c; end: 103e0eb4b; -[_TtC21AdInteractionServices21AdInteractionServices skOverlayLifecycleTracker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0eb3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113011680));
  return;
}



/* Entry: 103e0eb4c; end: 103e0ebd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0eb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113011668) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011670) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113011678) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113011680) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0ebd8; end: 103e0ec37; -[_TtC21AdInteractionServices21AdInteractionServices init] */

void FUN_103e0ebd8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AdInteractionServices.AdInteractionServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0ec04);
  (*pcVar1)();
}



/* Entry: 103e0ec38; end: 103e0ec8f; -[_TtC21AdInteractionServices21AdInteractionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0ec38(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011668));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011670));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011678));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113011680));
  return;
}



/* Entry: 103e0ec90; end: 103e0ec9f; -[_TtC36SCAdWebviewMetricsValidationServices36SCAdWebviewMetricsValidationServices metricsValidator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0ec90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130116b0));
  return;
}



/* Entry: 103e0eca0; end: 103e0eceb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0eca0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130116b0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e0ecec; end: 103e0ed4b; -[_TtC36SCAdWebviewMetricsValidationServices36SCAdWebviewMetricsValidationServices init] */

void FUN_103e0ecec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAdWebviewMetricsValidationServices.SCAdWebviewMetricsValidationServices",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0ed18);
  (*pcVar1)();
}



/* Entry: 103e0ed4c; end: 103e0ed5b; -[_TtC36SCAdWebviewMetricsValidationServices36SCAdWebviewMetricsValidationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0ed4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130116b0));
  return;
}



/* Entry: 103e0ed5c; end: 103e0f23b;  */

long FUN_103e0ed5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103e0f23c; end: 103e0f30f;  */

void FUN_103e0f23c(void)

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



/* Entry: 103e0f310; end: 103e0f32f;  */

void FUN_103e0f310(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Entry: 103e0f330; end: 103e0f363;  */

undefined8 FUN_103e0f330(undefined8 param_1)

{
  (*(code *)(undefined *)0x103e0ed88)();
  return param_1;
}



/* Entry: 103e0f364; end: 103e0f39b; -[SCAdWebviewMetricsValidationModel description] */

void FUN_103e0f364(void)

{
  undefined1 auStack_98 [136];
  
  _objc_retain();
  FUN_103e0f39c(auStack_98);
  FUN_103e0f330(auStack_98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e0f39c; end: 103e0f667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0f39c(long *param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lStack_1e8;
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
  undefined1 uStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined2 uStack_e0;
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
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined2 uStack_50;
  
  lStack_68 = 0;
  lStack_70 = 0;
  lStack_58 = 0;
  lStack_60 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_c8 = 0;
  lStack_d0 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  uStack_50 = 0xff00;
  bVar1 = *(byte *)(param_2 + _DAT_1130116e0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x000103e1083c(param_2 + _DAT_1130116e8,&lStack_160,0x112d387f8,&UNK_10d902650);
      if (lStack_148 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e0f65c);
        (*pcVar2)();
      }
      lVar3 = ((long *)(param_2 + _DAT_1130116f0))[1];
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e0f668);
        (*pcVar2)();
      }
      lVar4 = *(long *)(param_2 + _DAT_1130116f0);
      func_0x000103e107fc(&lStack_d0,0x113011710,&UNK_10dc98ae8);
      func_0x0001000bb420(&lStack_160,&lStack_d0);
      uStack_50 = uStack_50 & 0xff;
      lStack_b0 = lVar4;
      lStack_a8 = lVar3;
      _swift_bridgeObjectRetain(lVar3);
    }
    else {
      func_0x000103e1083c(param_2 + _DAT_1130116f8,&lStack_160,0x112d387f8,&UNK_10d902650);
      if (lStack_148 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e0f660);
        (*pcVar2)();
      }
      func_0x000103e107fc(&lStack_d0,0x113011710,&UNK_10dc98ae8);
      func_0x0001000bb420(&lStack_160,&lStack_d0);
      uStack_50 = CONCAT11(1,(undefined1)uStack_50);
    }
    func_0x000100183ab8(&lStack_160);
  }
  else if (bVar1 == 2) {
    if (*(long *)(param_2 + _DAT_113011700) == 0) {
      func_0x000101895d08(&lStack_160);
    }
    else {
      _objc_retain();
      func_0x00010428c0d8(&lStack_1e8);
      func_0x00010187bc08(&lStack_1e8);
      lStack_f8 = lStack_180;
      lStack_100 = lStack_188;
      lStack_e8 = lStack_170;
      lStack_f0 = lStack_178;
      uStack_e0 = CONCAT11(uStack_e0._1_1_,uStack_168);
      lStack_138 = lStack_1c0;
      lStack_140 = lStack_1c8;
      lStack_128 = lStack_1b0;
      lStack_130 = lStack_1b8;
      lStack_118 = lStack_1a0;
      lStack_120 = lStack_1a8;
      lStack_108 = lStack_190;
      lStack_110 = lStack_198;
      lStack_158 = lStack_1e0;
      lStack_160 = lStack_1e8;
      lStack_148 = lStack_1d0;
      lStack_150 = lStack_1d8;
    }
    func_0x000103e107fc(&lStack_d0,0x113011710,&UNK_10dc98ae8);
    lStack_68 = lStack_f8;
    lStack_70 = lStack_100;
    lStack_58 = lStack_e8;
    lStack_60 = lStack_f0;
    lStack_a8 = lStack_138;
    lStack_b0 = lStack_140;
    lStack_98 = lStack_128;
    lStack_a0 = lStack_130;
    lStack_88 = lStack_118;
    lStack_90 = lStack_120;
    lStack_78 = lStack_108;
    lStack_80 = lStack_110;
    lStack_c8 = lStack_158;
    lStack_d0 = lStack_160;
    lStack_b8 = lStack_148;
    lStack_c0 = lStack_150;
    uStack_50 = CONCAT11(2,(char)uStack_e0);
  }
  else {
    lVar3 = *(long *)(param_2 + _DAT_113011708);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e0f664);
      (*pcVar2)();
    }
    func_0x000103e107fc(&lStack_d0,0x113011710,&UNK_10dc98ae8);
    uStack_50 = CONCAT11(3,(undefined1)uStack_50);
    lStack_d0 = lVar3;
    _swift_bridgeObjectRetain(lVar3);
  }
  func_0x000103e1083c(&lStack_d0,&lStack_160,0x113011710,&UNK_10dc98ae8);
  if (uStack_e0._1_1_ != -1) {
    func_0x000103e107fc(&lStack_d0,0x113011710,&UNK_10dc98ae8);
    _objc_release(param_2);
    param_1[0xd] = lStack_f8;
    param_1[0xc] = lStack_100;
    param_1[0xf] = lStack_e8;
    param_1[0xe] = lStack_f0;
    *(undefined2 *)(param_1 + 0x10) = uStack_e0;
    param_1[5] = lStack_138;
    param_1[4] = lStack_140;
    param_1[7] = lStack_128;
    param_1[6] = lStack_130;
    param_1[9] = lStack_118;
    param_1[8] = lStack_120;
    param_1[0xb] = lStack_108;
    param_1[10] = lStack_110;
    param_1[1] = lStack_158;
    *param_1 = lStack_160;
    param_1[3] = lStack_148;
    param_1[2] = lStack_150;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103e0f658);
  (*pcVar2)();
}



/* Entry: 103e0f668; end: 103e0f6af; -[SCAdWebviewMetricsValidationModel init] */

void FUN_103e0f668(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdWebviewMetricsValidationServices/AdWebviewMetricsValidationModelWrapper.swift",
             0x51,2,0x4c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e0f6b0);
  (*pcVar1)();
}



/* Entry: 103e0f6b0; end: 103e0f6b3; -[SCAdWebviewMetricsValidationModel copyWithZone:] */

void FUN_103e0f6b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e0f6b4; end: 103e0fb23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e0f6b4(undefined8 param_1)

{
  char *pcVar1;
  byte bVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  bVar2 = *(byte *)(unaff_x20 + _DAT_1130116e0);
  if (1 < bVar2) {
    if (bVar2 == 2) {
      uVar4 = 0xd000000000000029;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000029,0x800000010f1bc4d0);
      func_0x000107c42744(param_1);
      _objc_release(uVar4);
      pcVar1 = "SUBTYPE_LIFECYCLE_TIMESTAMPS";
      uVar4 = 0xd00000000000001c;
    }
    else {
      lVar8 = *(long *)(unaff_x20 + _DAT_113011708);
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103e0fb20);
        (*pcVar3)();
      }
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (lVar8,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      uVar4 = 0xd000000000000025;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1bc480);
      func_0x000107c42744(param_1);
      _objc_release(lVar8);
      _objc_release(uVar4);
      pcVar1 = "SUBTYPE_RAW_TIMING_PAYLOAD";
      uVar4 = 0xd00000000000001a;
    }
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
              (uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar5 = 0x55535f4445444f43;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
    func_0x000107c42744(param_1);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  if (bVar2 == 0) {
    func_0x000103e1083c(unaff_x20 + _DAT_1130116e8,auStack_70,0x112d387f8,&UNK_10d902650);
    if (lStack_58 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e0fb18);
      (*pcVar3)();
    }
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar8 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(puVar7);
    puVar6 = puVar7;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar7,lStack_58);
    (**(code **)(lVar8 + 8))(puVar7,lStack_58);
    func_0x000100183ab8(auStack_70);
    uVar4 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1bc560);
    func_0x000107c42744(param_1);
    _swift_unknownObjectRelease(puVar6);
    _objc_release(uVar4);
    if (((undefined8 *)(unaff_x20 + _DAT_1130116f0))[1] == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e0fb24);
      (*pcVar3)();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130116f0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4);
    uVar5 = 0xd00000000000001b;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1bc580);
    func_0x000107c42744(param_1);
    _objc_release(uVar4);
    _objc_release(uVar5);
    pcVar1 = "SUBTYPE_TRACK_REQUEST";
    lVar8 = -6;
  }
  else {
    func_0x000103e1083c(unaff_x20 + _DAT_1130116f8,auStack_70,0x112d387f8,&UNK_10d902650);
    if (lStack_58 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103e0fb1c);
      (*pcVar3)();
    }
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar8 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
    puVar7 = auStack_70 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x10))(puVar7);
    puVar6 = puVar7;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar7,lStack_58);
    (**(code **)(lVar8 + 8))(puVar7,lStack_58);
    func_0x000100183ab8(auStack_70);
    uVar4 = 0xd00000000000001d;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1bc520);
    func_0x000107c42744(param_1);
    _swift_unknownObjectRelease(puVar6);
    _objc_release(uVar4);
    pcVar1 = "SUBTYPE_MIRROR_REQUEST";
    lVar8 = -5;
  }
  lVar8 = lVar8 + -0x2fffffffffffffe5;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (lVar8,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  uVar4 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  func_0x000107c42744(param_1);
  _objc_release(lVar8);
  _objc_release(uVar4);
  return;
}



/* Entry: 103e0fb24; end: 103e0fb73; -[SCAdWebviewMetricsValidationModel encodeWithCoder:] */

void FUN_103e0fb24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_103e0f6b4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e0fb74; end: 103e0fba3;  */

void FUN_103e0fb74(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_103e0fba4(param_1);
  return;
}



/* Entry: 103e0fba4; end: 103e1051f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e0fba4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_110 [16];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [16];
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  puVar8 = auStack_110;
  _swift_getObjectType();
  uVar3 = 0x55535f4445444f43;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x55535f4445444f43,0xed00004550595442);
  lVar4 = param_1;
  func_0x000107c41478();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    lStack_98 = 0;
    lStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  puVar1 = PTR___sypN_11034f1a8;
  lStack_78 = lStack_98;
  lStack_80 = lStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
LAB_103e104c4:
    lStack_80 = lStack_a0;
    lStack_78 = lStack_98;
    uStack_70 = uStack_90;
    lStack_68 = lStack_88;
    _objc_release(param_1);
    plVar5 = &lStack_80;
  }
  else {
    plVar5 = &lStack_e0;
    _swift_dynamicCast(plVar5,&lStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar2 = lStack_d8;
    lVar4 = lStack_e0;
    if (((ulong)plVar5 & 1) == 0) {
LAB_103e0ff84:
      _objc_release(param_1);
      goto LAB_103e104e4;
    }
    if ((lStack_e0 == -0x2fffffffffffffeb) && (lStack_d8 == -0x7ffffffef0e43a60)) {
LAB_103e0fcbc:
      _swift_bridgeObjectRelease(lVar2);
      uVar3 = 0xd00000000000001b;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1bc560);
      lVar4 = param_1;
      func_0x000107c41478();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (lVar4 == 0) {
        lStack_98 = 0;
        lStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar4);
        _swift_unknownObjectRelease(lVar4);
        func_0x000100102924(&lStack_e0,&lStack_a0);
      }
      uVar3 = 0x112d387f8;
      func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
      plVar5 = &lStack_e0;
      _swift_dynamicCast(plVar5,&lStack_a0,uVar3,puVar1 + 8,6);
      if (((ulong)plVar5 & 1) != 0) {
        func_0x000100102924(&lStack_e0,&lStack_80);
        uVar3 = 0xd00000000000001b;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1bc580)
        ;
        lVar4 = param_1;
        func_0x000107c41478();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        if (lVar4 == 0) {
          lStack_d8 = 0;
          lStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
        }
        else {
          __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar4);
          _swift_unknownObjectRelease(lVar4);
        }
        lStack_98 = lStack_d8;
        lStack_a0 = lStack_e0;
        lStack_88 = lStack_c8;
        uStack_90 = uStack_d0;
        if (lStack_c8 == 0) {
          func_0x000100183ab8(&lStack_80);
          _objc_release(param_1);
          plVar5 = &lStack_a0;
          goto LAB_103e104e0;
        }
        puVar7 = &uStack_100;
        _swift_dynamicCast(puVar7,&lStack_a0,puVar1 + 8,PTR___sSSN_11034da80,6);
        if (((ulong)puVar7 & 1) != 0) {
          func_0x0001000bb420(&lStack_80,&lStack_a0);
          lStack_d8 = 0;
          lStack_e0 = 0;
          lStack_c8 = 0;
          uStack_d0 = 0;
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_1130116e0) = 0;
          func_0x000103e1083c(&lStack_a0,unaff_x20 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
          puVar7 = (undefined8 *)(unaff_x20 + _DAT_1130116f0);
          *puVar7 = uStack_100;
          puVar7[1] = uStack_f8;
          func_0x000103e1083c(&lStack_e0,unaff_x20 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
          *(undefined8 *)(unaff_x20 + _DAT_113011700) = 0;
          *(undefined8 *)(unaff_x20 + _DAT_113011708) = 0;
LAB_103e10084:
          _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
          _objc_release(param_1);
          func_0x000103e107fc(&lStack_e0,0x112d387f8,&UNK_10d902650);
          func_0x000103e107fc(&lStack_a0,0x112d387f8,&UNK_10d902650);
          func_0x000100183ab8(&lStack_80);
LAB_103e100bc:
          _swift_getObjectType();
          _swift_deallocPartialClassInstance();
          return puVar8;
        }
        func_0x000100183ab8(&lStack_80);
        goto LAB_103e0ff84;
      }
    }
    else {
      uVar6 = 0xd000000000000015;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000015,0x800000010f1bc5a0,lStack_e0,lStack_d8,0);
      if ((uVar6 & 1) != 0) goto LAB_103e0fcbc;
      uVar6 = 0;
      if (((lVar4 != -0x2fffffffffffffea) || (lVar2 != -0x7ffffffef0e43ac0)) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (0xd000000000000016,0x800000010f1bc540,lVar4,lVar2,0), (uVar6 & 1) == 0)) {
        uVar6 = 0;
        if (((lVar4 == -0x2fffffffffffffe4) && (lVar2 == -0x7ffffffef0e43b00)) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001c,0x800000010f1bc500,lVar4,lVar2,0), (uVar6 & 1) != 0)) {
          _swift_bridgeObjectRelease(lVar2);
          uVar3 = 0xd000000000000029;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000029,0x800000010f1bc4d0);
          lVar4 = param_1;
          func_0x000107c41478();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          if (lVar4 == 0) {
            lStack_98 = 0;
            lStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar4);
            _swift_unknownObjectRelease(lVar4);
          }
          lStack_78 = lStack_98;
          lStack_80 = lStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            func_0x000103e107fc(&lStack_80,0x112d387f8,&UNK_10d902650);
            lVar4 = 0;
          }
          else {
            uVar3 = 0;
            FUN_10428e134(0);
            plVar5 = &lStack_e0;
            _swift_dynamicCast(plVar5,&lStack_80,puVar1 + 8,uVar3,6);
            lVar4 = lStack_e0;
            if ((int)plVar5 == 0) {
              lVar4 = 0;
            }
          }
          lStack_78 = 0;
          lStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
          lStack_98 = 0;
          lStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_1130116e0) = 2;
          func_0x000103e1083c(&lStack_80,unaff_x20 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
          puVar7 = (undefined8 *)(unaff_x20 + _DAT_1130116f0);
          *puVar7 = 0;
          puVar7[1] = 0;
          func_0x000103e1083c(&lStack_a0,unaff_x20 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
          *(long *)(unaff_x20 + _DAT_113011700) = lVar4;
          *(undefined8 *)(unaff_x20 + _DAT_113011708) = 0;
          puVar1 = PTR_s_init_1125d9248;
          _objc_retain(lVar4);
          puVar8 = auStack_c0;
          _objc_msgSendSuper2(puVar8,puVar1);
          _objc_release(lVar4);
          _objc_release(param_1);
          func_0x000103e107fc(&lStack_a0,0x112d387f8,&UNK_10d902650);
        }
        else {
          uVar6 = 0;
          if ((lVar4 == -0x2fffffffffffffe6) && (lVar2 == -0x7ffffffef0e43b50)) {
            _swift_bridgeObjectRelease(0x800000010f1bc4b0);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0xd00000000000001a,0x800000010f1bc4b0,lVar4,lVar2,0);
            _swift_bridgeObjectRelease(lVar2);
            if ((uVar6 & 1) == 0) goto LAB_103e0ff84;
          }
          uVar3 = 0xd000000000000025;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000025,0x800000010f1bc480);
          lVar4 = param_1;
          func_0x000107c41478();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          if (lVar4 == 0) {
            lStack_98 = 0;
            lStack_a0 = 0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_a0,lVar4);
            _swift_unknownObjectRelease(lVar4);
          }
          lStack_78 = lStack_98;
          lStack_80 = lStack_a0;
          lStack_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) goto LAB_103e104c4;
          uVar3 = 0x112d472a8;
          func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
          plVar5 = &lStack_e0;
          _swift_dynamicCast(plVar5,&lStack_80,puVar1 + 8,uVar3,6);
          lVar4 = lStack_e0;
          if (((ulong)plVar5 & 1) == 0) goto LAB_103e0ff84;
          lStack_78 = 0;
          lStack_80 = 0;
          lStack_68 = 0;
          uStack_70 = 0;
          lStack_98 = 0;
          lStack_a0 = 0;
          lStack_88 = 0;
          uStack_90 = 0;
          _objc_allocWithZone();
          *(undefined1 *)(unaff_x20 + _DAT_1130116e0) = 3;
          func_0x000103e1083c(&lStack_80,unaff_x20 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
          puVar7 = (undefined8 *)(unaff_x20 + _DAT_1130116f0);
          *puVar7 = 0;
          puVar7[1] = 0;
          func_0x000103e1083c(&lStack_a0,unaff_x20 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
          *(undefined8 *)(unaff_x20 + _DAT_113011700) = 0;
          *(long *)(unaff_x20 + _DAT_113011708) = lVar4;
          puVar8 = auStack_b0;
          _objc_msgSendSuper2(puVar8,PTR_s_init_1125d9248);
          _objc_release(param_1);
          func_0x000103e107fc(&lStack_a0,0x112d387f8,&UNK_10d902650);
        }
        func_0x000103e107fc(&lStack_80,0x112d387f8,&UNK_10d902650);
        goto LAB_103e100bc;
      }
      _swift_bridgeObjectRelease(lVar2);
      uVar3 = 0xd00000000000001d;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001d,0x800000010f1bc520);
      lVar4 = param_1;
      func_0x000107c41478();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      if (lVar4 == 0) {
        lStack_98 = 0;
        lStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&lStack_e0,lVar4);
        _swift_unknownObjectRelease(lVar4);
        func_0x000100102924(&lStack_e0,&lStack_a0);
      }
      uVar3 = 0x112d387f8;
      func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
      plVar5 = &lStack_e0;
      _swift_dynamicCast(plVar5,&lStack_a0,uVar3,puVar1 + 8,6);
      if (((ulong)plVar5 & 1) != 0) {
        func_0x000100102924(&lStack_e0,&lStack_80);
        lStack_98 = 0;
        lStack_a0 = 0;
        lStack_88 = 0;
        uStack_90 = 0;
        func_0x0001000bb420(&lStack_80,&lStack_e0);
        _objc_allocWithZone();
        *(undefined1 *)(unaff_x20 + _DAT_1130116e0) = 1;
        func_0x000103e1083c(&lStack_a0,unaff_x20 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
        puVar7 = (undefined8 *)(unaff_x20 + _DAT_1130116f0);
        *puVar7 = 0;
        puVar7[1] = 0;
        func_0x000103e1083c(&lStack_e0,unaff_x20 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
        *(undefined8 *)(unaff_x20 + _DAT_113011700) = 0;
        *(undefined8 *)(unaff_x20 + _DAT_113011708) = 0;
        puVar8 = auStack_f0;
        goto LAB_103e10084;
      }
    }
    _objc_release(param_1);
    lStack_d8 = 0;
    lStack_e0 = 0;
    lStack_c8 = 0;
    uStack_d0 = 0;
    plVar5 = &lStack_e0;
  }
LAB_103e104e0:
  func_0x000103e107fc(plVar5,0x112d387f8,&UNK_10d902650);
LAB_103e104e4:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return (undefined1 *)0x0;
}



/* Entry: 103e10520; end: 103e10547; -[SCAdWebviewMetricsValidationModel initWithCoder:] */

void FUN_103e10520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_103e0fba4();
  return;
}



/* Entry: 103e10548; end: 103e105df; +[SCAdWebviewMetricsValidationModel trackRequestWithTrackRequest:adIdentifier:] */

void FUN_103e10548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [32];
  
  puVar2 = auStack_50;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_103e10a8c(auStack_50,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103e105e0; end: 103e10637; +[SCAdWebviewMetricsValidationModel mirrorRequestWithMirrorRequest:] */

void FUN_103e105e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [32];
  
  puVar1 = auStack_40;
  _swift_unknownObjectRetain(param_3);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_40,param_3);
  _swift_unknownObjectRelease(param_3);
  FUN_103e10ba8(auStack_40);
  func_0x000100183ab8(auStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 103e10638; end: 103e10677; +[SCAdWebviewMetricsValidationModel lifecycleTimestampsWithLifecycleTimestamps:] */

void FUN_103e10638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  FUN_103e10cac(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103e10678; end: 103e106cb; +[SCAdWebviewMetricsValidationModel rawTimingPayloadWithRawTimingPayload:] */

void FUN_103e10678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_3,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  uVar1 = param_3;
  func_0x000103e10dc8();
  _swift_bridgeObjectRelease(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e106cc; end: 103e107fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e106cc(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5,
                  undefined8 param_6,code *param_7)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  bVar1 = *(byte *)(unaff_x20 + _DAT_1130116e0);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x000103e1083c(unaff_x20 + _DAT_1130116e8,auStack_50,0x112d387f8,&UNK_10d902650);
      if (lStack_38 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e107f0);
        (*pcVar2)();
      }
      if (((undefined8 *)(unaff_x20 + _DAT_1130116f0))[1] == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e107fc);
        (*pcVar2)();
      }
      (*param_1)(auStack_50,*(undefined8 *)(unaff_x20 + _DAT_1130116f0));
    }
    else {
      func_0x000103e1083c(unaff_x20 + _DAT_1130116f8,auStack_50,0x112d387f8,&UNK_10d902650);
      if (lStack_38 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e107f4);
        (*pcVar2)();
      }
      (*param_3)(auStack_50);
    }
    func_0x000100183ab8(auStack_50);
  }
  else if (bVar1 == 2) {
    (*param_5)(*(undefined8 *)(unaff_x20 + _DAT_113011700));
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_113011708) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103e107f8);
      (*pcVar2)();
    }
    (*param_7)();
  }
  return;
}



/* Entry: 103e107fc; end: 103e10883;  */

undefined8 FUN_103e107fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103e10884; end: 103e108f7; -[SCAdWebviewMetricsValidationModel matchTrackRequest:mirrorRequest:lifecycleTimestamps:rawTimingPayload:] */

void FUN_103e10884(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_90 = param_6;
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  _objc_retain();
  FUN_103e106cc(FUN_103e110ac,auStack_40,0x103e110b4,auStack_60,0x103e110bc,auStack_80,FUN_103e110cc
                ,auStack_a0);
  _objc_release(param_1);
  return;
}



/* Entry: 103e108f8; end: 103e1096b;  */

void FUN_103e108f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2);
  _swift_unknownObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103e1096c; end: 103e109b3;  */

void FUN_103e1096c(long param_1,long param_2)

{
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  (**(code **)(param_2 + 0x10))(param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e109b4; end: 103e109e7;  */

void FUN_103e109b4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e109e8; end: 103e10a7b; -[SCAdWebviewMetricsValidationModel .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e109e8(long param_1)

{
  FUN_103e107fc(param_1 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130116f0 + 8));
  FUN_103e107fc(param_1 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011700));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113011708));
  return;
}



/* Entry: 103e10a7c; end: 103e10a8b;  */

ulong FUN_103e10a7c(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Entry: 103e10a8c; end: 103e10ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e10a8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  plVar4 = &lStack_90;
  func_0x0001000bb420(param_1,auStack_60);
  FUN_103e10ee4();
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar3 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar3 + _DAT_1130116e0) = 0;
  func_0x000103e1083c(auStack_60,lVar3 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
  puVar1 = (undefined8 *)(lVar3 + _DAT_1130116f0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000103e1083c(&uStack_80,lVar3 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
  *(undefined8 *)(lVar3 + _DAT_113011700) = 0;
  *(undefined8 *)(lVar3 + _DAT_113011708) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar3;
  lStack_88 = param_1;
  _swift_bridgeObjectRetain(param_3);
  _objc_msgSendSuper2(&lStack_90,puVar2);
  func_0x000103e107fc(&uStack_80,0x112d387f8,&UNK_10d902650);
  func_0x000103e107fc(auStack_60,0x112d387f8,&UNK_10d902650);
  return (undefined1 *)plVar4;
}



/* Entry: 103e10ba8; end: 103e10cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e10ba8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_80;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x0001000bb420(param_1,auStack_70);
  FUN_103e10ee4();
  lVar2 = param_1;
  _objc_allocWithZone();
  *(undefined1 *)(lVar2 + _DAT_1130116e0) = 1;
  func_0x000103e1083c(&uStack_50,lVar2 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
  puVar1 = (undefined8 *)(lVar2 + _DAT_1130116f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000103e1083c(auStack_70,lVar2 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
  *(undefined8 *)(lVar2 + _DAT_113011700) = 0;
  *(undefined8 *)(lVar2 + _DAT_113011708) = 0;
  lStack_80 = lVar2;
  lStack_78 = param_1;
  _objc_msgSendSuper2(&lStack_80,PTR_s_init_1125d9248);
  func_0x000103e107fc(auStack_70,0x112d387f8,&UNK_10d902650);
  func_0x000103e107fc(&uStack_50,0x112d387f8,&UNK_10d902650);
  return (undefined1 *)plVar3;
}



/* Entry: 103e10cac; end: 103e10ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e10cac(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  plVar5 = &lStack_90;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar3 = param_1;
  FUN_103e10ee4();
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(undefined1 *)(lVar4 + _DAT_1130116e0) = 2;
  func_0x000103e1083c(&uStack_60,lVar4 + _DAT_1130116e8,0x112d387f8,&UNK_10d902650);
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130116f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000103e1083c(&uStack_80,lVar4 + _DAT_1130116f8,0x112d387f8,&UNK_10d902650);
  *(long *)(lVar4 + _DAT_113011700) = param_1;
  *(undefined8 *)(lVar4 + _DAT_113011708) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&lStack_90,puVar2);
  func_0x000103e107fc(&uStack_80,0x112d387f8,&UNK_10d902650);
  func_0x000103e107fc(&uStack_60,0x112d387f8,&UNK_10d902650);
  return (undefined1 *)plVar5;
}



/* Entry: 103e10ee4; end: 103e10f03;  */

void FUN_103e10ee4(void)

{
  _objc_opt_self(&PTR_PTR_11294efa0);
  return;
}



/* Entry: 103e10f04; end: 103e1106b;  */

int FUN_103e10f04(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103e10f80;
        goto LAB_103e10f64;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103e10f64:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_103e10f80:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103e1106c; end: 103e110ab;  */

void FUN_103e1106c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113011740 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc98b48;
  _swift_getWitnessTable(&UNK_10dc98b48,&UNK_1107147f8);
  puRam0000000113011740 = puVar1;
  return;
}



/* Entry: 103e110ac; end: 103e110cb;  */

void FUN_103e110ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  __ss27_bridgeAnythingToObjectiveCyyXlxlF();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
  _swift_unknownObjectRelease(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 103e110cc; end: 103e1111f;  */

void FUN_103e110cc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (param_1,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103e11120; end: 103e111ab; -[_TtC32WebBrowserPrivacyConsentServices32WebBrowserPrivacyConsentServices setPrivacyConsentInfoManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e11120(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113011750);
  *(undefined8 *)(param_1 + _DAT_113011750) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e111ac; end: 103e1120b; -[_TtC32WebBrowserPrivacyConsentServices32WebBrowserPrivacyConsentServices init] */

void FUN_103e111ac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WebBrowserPrivacyConsentServices.WebBrowserPrivacyConsentServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e111d8);
  (*pcVar1)();
}



/* Entry: 103e1120c; end: 103e11243; -[_TtC32WebBrowserPrivacyConsentServices32WebBrowserPrivacyConsentServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e1120c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113011748));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113011750));
  return;
}



/* Entry: 103e11244; end: 103e11277; -[_TtC15WebViewServices15WebViewServices scWebViewRetainer] */

void FUN_103e11244(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e11278();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e11278; end: 103e112eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e11278(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_113011790;
  lVar2 = *(long *)(unaff_x20 + _DAT_113011790);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001003a5b88(*(undefined8 *)(unaff_x20 + _DAT_113011780));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _objc_retain();
    _objc_release(uVar4);
    lVar3 = 0;
  }
  _objc_retain(lVar3);
  return lVar2;
}



/* Entry: 103e112ec; end: 103e1131f; -[_TtC15WebViewServices15WebViewServices setScWebViewRetainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e112ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113011790);
  *(undefined8 *)(param_1 + _DAT_113011790) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e11320; end: 103e1138f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e11320(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113011790) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113011780) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113011788) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e11390; end: 103e113ef; -[_TtC15WebViewServices15WebViewServices init] */

void FUN_103e11390(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("WebViewServices.WebViewServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e113bc);
  (*pcVar1)();
}



/* Entry: 103e113f0; end: 103e11437; -[_TtC15WebViewServices15WebViewServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e113f0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113011780));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113011788));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113011790));
  return;
}



/* Entry: 103e11438; end: 103e114bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e11438(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4b3e4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_1130117c0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_1130117c8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e114c0);
  (*pcVar1)();
}



/* Entry: 103e114c0; end: 103e1151f; -[_TtC33AppinsUserSessionScopeGraphBridge48AppinsUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e114c0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AppinsUserSessionScopeGraphBridge.AppinsUserSessionScopeGraphBridgeSaberEntryPoint",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e114ec);
  (*pcVar1)();
}



/* Entry: 103e11520; end: 103e11557; -[_TtC33AppinsUserSessionScopeGraphBridge48AppinsUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e11520(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130117c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130117c8));
  return;
}



/* Entry: 103e11558; end: 103e1157f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e11558(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130117c8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130117c0));
  return;
}



/* Entry: 103e11580; end: 103e115e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e11580(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130118d8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e115e4; end: 103e115eb;  */

void FUN_103e115e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e115ec; end: 103e1168b;  */

void FUN_103e115ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e1168c; end: 103e116f7;  */

void FUN_103e1168c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e116f8; end: 103e11757; -[_TtC33AppinsUserSessionScopeGraphBridge41AppinsUserSessionScopeGraphBridgeServices init] */

void FUN_103e116f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AppinsUserSessionScopeGraphBridge.AppinsUserSessionScopeGraphBridgeServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e11724);
  (*pcVar1)();
}



/* Entry: 103e11758; end: 103e11767; -[_TtC33AppinsUserSessionScopeGraphBridge41AppinsUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e11758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130118d8));
  return;
}



/* Entry: 103e11768; end: 103e117c3;  */

void FUN_103e11768(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x1130118c8,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x1130118c8,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 103e117c4; end: 103e117fb;  */

undefined1  [16] FUN_103e117c4(void)

{
  return ZEXT816(0x110714a60);
}



/* Entry: 103e117fc; end: 103e1183f; -[SCAppinsUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e117fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  _swift_getObjectType();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e11840; end: 103e11873;  */

void FUN_103e11840(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e11874; end: 103e118bb; -[SCAppinsUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e11874(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113011930);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113011938));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113011940));
  return;
}



/* Entry: 103e118bc; end: 103e118db;  */

void FUN_103e118bc(void)

{
  _objc_opt_self(&PTR_PTR_11294f3b0);
  return;
}



/* Entry: 103e118dc; end: 103e118e7; -[SCSCShakeToReportServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e118dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113011970;
  _swift_beginAccess(param_1 + _DAT_113011970,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e118e8; end: 103e118f3; -[SCSCShakeToReportServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e118e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113011970;
  _swift_beginAccess(param_1 + _DAT_113011970,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e118f4; end: 103e118ff; -[SCSCShakeToReportServicesSaberServiceProvider appinsUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e118f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113011978;
  _swift_beginAccess(param_1 + _DAT_113011978,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


