/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e70de4; end: 103e70e43; -[_TtC16AtlasServicesAPI23SCAtlasRegistryServices init] */

void FUN_103e70de4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AtlasServicesAPI.SCAtlasRegistryServices",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e70e10);
  (*pcVar1)();
}



/* Entry: 103e70e44; end: 103e70e53; -[_TtC16AtlasServicesAPI23SCAtlasRegistryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70e44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022778));
  return;
}



/* Entry: 103e70e54; end: 103e70e63; -[_TtC16AtlasServicesAPI15SCAtlasServices atlasMyDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70e54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130227b0));
  return;
}



/* Entry: 103e70e64; end: 103e70e73; -[_TtC16AtlasServicesAPI15SCAtlasServices atlasPublicDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130227b8));
  return;
}



/* Entry: 103e70e74; end: 103e70ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130227a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130227b0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130227b8) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e70ee8; end: 103e70f47; -[_TtC16AtlasServicesAPI15SCAtlasServices init] */

void FUN_103e70ee8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AtlasServicesAPI.SCAtlasServices",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e70f14);
  (*pcVar1)();
}



/* Entry: 103e70f48; end: 103e70f8f; -[_TtC16AtlasServicesAPI15SCAtlasServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70f48(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130227a8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130227b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130227b8));
  return;
}



/* Entry: 103e70f90; end: 103e70f9b; -[SCAtlasBlockedUser userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70f90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130227e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130227e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e70f9c; end: 103e70fa7; -[SCAtlasBlockedUser username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70f9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130227f0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130227f0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e70fa8; end: 103e70fef;  */

void FUN_103e70fa8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e70ff0; end: 103e7104b; -[SCAtlasBlockedUser displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e70ff0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_1130227f8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1130227f8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103e7104c; end: 103e710e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e7104c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130227e8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130227f0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130227f8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e710e8; end: 103e711b3; -[SCAtlasBlockedUser initWithUserId:username:displayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e710e8(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  _swift_getObjectType();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  lVar4 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (param_5 == 0) {
    param_5 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = lVar4;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_1130227e8);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130227f0);
  *puVar1 = param_4;
  puVar1[1] = lVar4;
  plVar2 = (long *)(param_1 + _DAT_1130227f8);
  *plVar2 = param_5;
  plVar2[1] = lVar5;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e711b4; end: 103e71213; -[SCAtlasBlockedUser init] */

void FUN_103e711b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("AtlasServicesAPI.SCAtlasBlockedUser",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e711e0);
  (*pcVar1)();
}



/* Entry: 103e71214; end: 103e71267; -[SCAtlasBlockedUser .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71214(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130227e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130227f0 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130227f8 + 8))
  ;
  return;
}



/* Entry: 103e71268; end: 103e71287;  */

void FUN_103e71268(void)

{
  _objc_opt_self(&PTR_PTR_11295a968);
  return;
}



/* Entry: 103e71288; end: 103e7130f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71288(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a5251c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113022828) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113022830) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71310);
  (*pcVar1)();
}



/* Entry: 103e71310; end: 103e7136f; -[_TtC31LensUserSessionScopeGraphBridge46LensUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e71310(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.LensUserSessionScopeGraphBridgeSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e7133c);
  (*pcVar1)();
}



/* Entry: 103e71370; end: 103e713a7; -[_TtC31LensUserSessionScopeGraphBridge46LensUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71370(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113022828));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022830));
  return;
}



/* Entry: 103e713a8; end: 103e713cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e713a8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113022830),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113022828));
  return;
}



/* Entry: 103e713d0; end: 103e7146b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e713d0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026608);
  *(undefined8 *)(unaff_x20 + _DAT_113022860) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022868) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e7146c; end: 103e714cb; -[_TtC31LensUserSessionScopeGraphBridge43SCLegacyImageProcessServicesSaberEntryPoint init] */

void FUN_103e7146c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLegacyImageProcessServicesSaberEntryPoint",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71498);
  (*pcVar1)();
}



/* Entry: 103e714cc; end: 103e7155f; -[_TtC31LensUserSessionScopeGraphBridge43SCLegacyImageProcessServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e714cc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022860));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022868));
  return;
}



/* Entry: 103e71560; end: 103e71567;  */

undefined8 FUN_103e71560(void)

{
  return 0;
}



/* Entry: 103e71568; end: 103e71603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71568(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026620);
  *(undefined8 *)(unaff_x20 + _DAT_113022898) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130228a0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e71604; end: 103e71663; -[_TtC31LensUserSessionScopeGraphBridge43SCLensAssetsDeliveryServicesSaberEntryPoint init] */

void FUN_103e71604(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensAssetsDeliveryServicesSaberEntryPoint",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71630);
  (*pcVar1)();
}



/* Entry: 103e71664; end: 103e716f7; -[_TtC31LensUserSessionScopeGraphBridge43SCLensAssetsDeliveryServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71664(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022898));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130228a0));
  return;
}



/* Entry: 103e716f8; end: 103e716ff;  */

undefined8 FUN_103e716f8(void)

{
  return 0;
}



/* Entry: 103e71700; end: 103e7179b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71700(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026720);
  *(undefined8 *)(unaff_x20 + _DAT_1130228d0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130228d8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e7179c; end: 103e717fb; -[_TtC31LensUserSessionScopeGraphBridge47SCLensMetadataRetrievingServicesSaberEntryPoint init] */

void FUN_103e7179c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensMetadataRetrievingServicesSaberEntryPoint",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e717c8);
  (*pcVar1)();
}



/* Entry: 103e717fc; end: 103e7188f; -[_TtC31LensUserSessionScopeGraphBridge47SCLensMetadataRetrievingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e717fc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130228d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130228d8));
  return;
}



/* Entry: 103e71890; end: 103e71897;  */

undefined8 FUN_103e71890(void)

{
  return 0;
}



/* Entry: 103e71898; end: 103e71933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71898(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026738);
  *(undefined8 *)(unaff_x20 + _DAT_113022908) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022910) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e71934; end: 103e71993; -[_TtC31LensUserSessionScopeGraphBridge48SCLensPickerMetadataStoreServicesSaberEntryPoint init] */

void FUN_103e71934(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensPickerMetadataStoreServicesSaberEntryPoint",0x50
             ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71960);
  (*pcVar1)();
}



/* Entry: 103e71994; end: 103e71a27; -[_TtC31LensUserSessionScopeGraphBridge48SCLensPickerMetadataStoreServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71994(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022908));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022910));
  return;
}



/* Entry: 103e71a28; end: 103e71a2f;  */

undefined8 FUN_103e71a28(void)

{
  return 0;
}



/* Entry: 103e71a30; end: 103e71acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71a30(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026740);
  *(undefined8 *)(unaff_x20 + _DAT_113022940) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022948) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e71acc; end: 103e71b2b; -[_TtC31LensUserSessionScopeGraphBridge35SCLensPickerServicesSaberEntryPoint init] */

void FUN_103e71acc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensPickerServicesSaberEntryPoint",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71af8);
  (*pcVar1)();
}



/* Entry: 103e71b2c; end: 103e71bbf; -[_TtC31LensUserSessionScopeGraphBridge35SCLensPickerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71b2c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022940));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022948));
  return;
}



/* Entry: 103e71bc0; end: 103e71bc7;  */

undefined8 FUN_103e71bc0(void)

{
  return 0;
}



/* Entry: 103e71bc8; end: 103e71c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71bc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026760);
  *(undefined8 *)(unaff_x20 + _DAT_113022978) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022980) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e71c64; end: 103e71cc3; -[_TtC31LensUserSessionScopeGraphBridge38SCLensProcessingFactorySaberEntryPoint init] */

void FUN_103e71c64(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensProcessingFactorySaberEntryPoint",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71c90);
  (*pcVar1)();
}



/* Entry: 103e71cc4; end: 103e71d57; -[_TtC31LensUserSessionScopeGraphBridge38SCLensProcessingFactorySaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71cc4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022978));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022980));
  return;
}



/* Entry: 103e71d58; end: 103e71d5f;  */

undefined8 FUN_103e71d58(void)

{
  return 0;
}



/* Entry: 103e71d60; end: 103e71dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71d60(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026768);
  *(undefined8 *)(unaff_x20 + _DAT_1130229b0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130229b8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e71dfc; end: 103e71e5b; -[_TtC31LensUserSessionScopeGraphBridge49SCLensProcessingLaunchDataServicesSaberEntryPoint init] */

void FUN_103e71dfc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensProcessingLaunchDataServicesSaberEntryPoint",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71e28);
  (*pcVar1)();
}



/* Entry: 103e71e5c; end: 103e71eef; -[_TtC31LensUserSessionScopeGraphBridge49SCLensProcessingLaunchDataServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71e5c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130229b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130229b8));
  return;
}



/* Entry: 103e71ef0; end: 103e71ef7;  */

undefined8 FUN_103e71ef0(void)

{
  return 0;
}



/* Entry: 103e71ef8; end: 103e71f93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e71ef8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026770);
  *(undefined8 *)(unaff_x20 + _DAT_1130229e8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130229f0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e71f94; end: 103e71ff3; -[_TtC31LensUserSessionScopeGraphBridge47SCLensProcessingOffscreenFactorySaberEntryPoint init] */

void FUN_103e71f94(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensProcessingOffscreenFactorySaberEntryPoint",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e71fc0);
  (*pcVar1)();
}



/* Entry: 103e71ff4; end: 103e72087; -[_TtC31LensUserSessionScopeGraphBridge47SCLensProcessingOffscreenFactorySaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e71ff4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130229e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130229f0));
  return;
}



/* Entry: 103e72088; end: 103e7208f;  */

undefined8 FUN_103e72088(void)

{
  return 0;
}



/* Entry: 103e72090; end: 103e7212b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e72090(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130267b8);
  *(undefined8 *)(unaff_x20 + _DAT_113022a20) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022a28) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e7212c; end: 103e7218b; -[_TtC31LensUserSessionScopeGraphBridge50SCLensScheduleMetadataStoreServicesSaberEntryPoint init] */

void FUN_103e7212c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensScheduleMetadataStoreServicesSaberEntryPoint",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e72158);
  (*pcVar1)();
}



/* Entry: 103e7218c; end: 103e7221f; -[_TtC31LensUserSessionScopeGraphBridge50SCLensScheduleMetadataStoreServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e7218c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022a20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022a28));
  return;
}



/* Entry: 103e72220; end: 103e72227;  */

undefined8 FUN_103e72220(void)

{
  return 0;
}



/* Entry: 103e72228; end: 103e722c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e72228(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130267c0);
  *(undefined8 *)(unaff_x20 + _DAT_113022a58) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022a60) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e722c4; end: 103e72323; -[_TtC31LensUserSessionScopeGraphBridge46SCLensScheduleNamespaceServicesSaberEntryPoint init] */

void FUN_103e722c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensScheduleNamespaceServicesSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e722f0);
  (*pcVar1)();
}



/* Entry: 103e72324; end: 103e723b7; -[_TtC31LensUserSessionScopeGraphBridge46SCLensScheduleNamespaceServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e72324(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022a58));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022a60));
  return;
}



/* Entry: 103e723b8; end: 103e723bf;  */

undefined8 FUN_103e723b8(void)

{
  return 0;
}



/* Entry: 103e723c0; end: 103e7245b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e723c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130267d0);
  *(undefined8 *)(unaff_x20 + _DAT_113022a90) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022a98) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e7245c; end: 103e724bb; -[_TtC31LensUserSessionScopeGraphBridge35SCLensUnlockServicesSaberEntryPoint init] */

void FUN_103e7245c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensUnlockServicesSaberEntryPoint",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e72488);
  (*pcVar1)();
}



/* Entry: 103e724bc; end: 103e7254f; -[_TtC31LensUserSessionScopeGraphBridge35SCLensUnlockServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e724bc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022a90));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022a98));
  return;
}



/* Entry: 103e72550; end: 103e72557;  */

undefined8 FUN_103e72550(void)

{
  return 0;
}



/* Entry: 103e72558; end: 103e725f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e72558(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130267f8);
  *(undefined8 *)(unaff_x20 + _DAT_113022ac8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022ad0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e725f4; end: 103e72653; -[_TtC31LensUserSessionScopeGraphBridge41SCLensUserProviderServicesSaberEntryPoint init] */

void FUN_103e725f4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCLensUserProviderServicesSaberEntryPoint",0x49,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e72620);
  (*pcVar1)();
}



/* Entry: 103e72654; end: 103e726e7; -[_TtC31LensUserSessionScopeGraphBridge41SCLensUserProviderServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e72654(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022ac8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022ad0));
  return;
}



/* Entry: 103e726e8; end: 103e726ef;  */

undefined8 FUN_103e726e8(void)

{
  return 0;
}



/* Entry: 103e726f0; end: 103e7278b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e726f0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113026808);
  *(undefined8 *)(unaff_x20 + _DAT_113022b00) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113022b08) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 103e7278c; end: 103e727eb; -[_TtC31LensUserSessionScopeGraphBridge39SCMixerNamespaceServicesSaberEntryPoint init] */

void FUN_103e7278c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensUserSessionScopeGraphBridge.SCMixerNamespaceServicesSaberEntryPoint",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e727b8);
  (*pcVar1)();
}



/* Entry: 103e727ec; end: 103e7287f; -[_TtC31LensUserSessionScopeGraphBridge39SCMixerNamespaceServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e727ec(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113022b00));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113022b08));
  return;
}



/* Entry: 103e72880; end: 103e72887;  */

undefined8 FUN_103e72880(void)

{
  return 0;
}



/* Entry: 103e72888; end: 103e728eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e72888(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130265c8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e728ec; end: 103e728f3;  */

void FUN_103e728ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e728f4; end: 103e72993;  */

void FUN_103e728f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e72994; end: 103e729b3;  */

void FUN_103e72994(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e729b4; end: 103e72a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e729b4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130265d0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e72a18; end: 103e72a1f;  */

void FUN_103e72a18(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e72a20; end: 103e72abf;  */

void FUN_103e72a20(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e72ac0; end: 103e72adf;  */

void FUN_103e72ac0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e72ae0; end: 103e72b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e72ae0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130265d8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e72b44; end: 103e72b4b;  */

void FUN_103e72b44(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e72b4c; end: 103e72beb;  */

void FUN_103e72b4c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e72bec; end: 103e72c0b;  */

void FUN_103e72bec(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e72c0c; end: 103e72c6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e72c0c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130265e0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e72c70; end: 103e72c77;  */

void FUN_103e72c70(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e72c78; end: 103e72c9b;  */

void FUN_103e72c78(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e72c9c; end: 103e72cbb;  */

void FUN_103e72c9c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e72cbc; end: 103e72d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e72cbc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130265e8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e72d20; end: 103e72d27;  */

void FUN_103e72d20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e72d28; end: 103e72dc7;  */

void FUN_103e72d28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e72dc8; end: 103e72de7;  */

void FUN_103e72dc8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e72de8; end: 103e72e4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e72de8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130265f0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e72e4c; end: 103e72e53;  */

void FUN_103e72e4c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e72e54; end: 103e72ef3;  */

void FUN_103e72e54(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e72ef4; end: 103e72f13;  */

void FUN_103e72ef4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e72f14; end: 103e72f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e72f14(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_1130265f8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e72f78; end: 103e72f7f;  */

void FUN_103e72f78(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e72f80; end: 103e72fa3;  */

void FUN_103e72f80(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e72fa4; end: 103e72fc3;  */

void FUN_103e72fa4(void)

{
  func_0x000100083b20();
  return;
}


