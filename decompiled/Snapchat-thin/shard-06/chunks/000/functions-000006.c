/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043903f4; end: 104390473; -[_TtC18SCPhotoPickerScope26SCPhotoPickerScopeServices buildWithUiContainer:showPhotoLibrary:delegate:] */

void FUN_1043903f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043902e4(param_3,param_4,param_5);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104390474; end: 1043904d3; -[_TtC18SCPhotoPickerScope26SCPhotoPickerScopeServices init] */

void FUN_104390474(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCPhotoPickerScope.SCPhotoPickerScopeServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043904a0);
  (*pcVar1)();
}



/* Entry: 1043904d4; end: 1043904f3; -[_TtC18SCPhotoPickerScope26SCPhotoPickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043904d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073218));
  return;
}



/* Entry: 1043904f4; end: 104390503; -[SCPhotoMetadata readPhotoFileMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043904f4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113073248);
}



/* Entry: 104390504; end: 104390513; -[SCPhotoMetadata timestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390504(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073250));
  return;
}



/* Entry: 104390514; end: 104390523; -[SCPhotoMetadata longitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073258));
  return;
}



/* Entry: 104390524; end: 104390533; -[SCPhotoMetadata latitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073260));
  return;
}



/* Entry: 104390534; end: 104390543; -[SCPhotoMetadata altitude] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073268));
  return;
}



/* Entry: 104390544; end: 1043905df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390544(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113073248) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073250) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113073258) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113073260) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113073268) = param_5;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043905e0; end: 10439069f; -[SCPhotoMetadata initWithReadPhotoFileMetadata:timestamp:longitude:latitude:altitude:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043905e0(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined1 *)(param_1 + _DAT_113073248) = param_3;
  *(undefined8 *)(param_1 + _DAT_113073250) = param_4;
  *(undefined8 *)(param_1 + _DAT_113073258) = param_5;
  *(undefined8 *)(param_1 + _DAT_113073260) = param_6;
  *(undefined8 *)(param_1 + _DAT_113073268) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 1043906a0; end: 104390727;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043906a0(undefined1 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113073248) = *param_1;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(unaff_x20 + _DAT_113073250) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(unaff_x20 + _DAT_113073258) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + _DAT_113073260) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(unaff_x20 + _DAT_113073268) = uVar1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104390728; end: 10439072b; -[SCPhotoMetadata copyWithZone:] */

void FUN_104390728(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10439072c; end: 104390747; -[SCPhotoMetadata description] */

void FUN_10439072c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104390748; end: 1043907c3; -[SCPhotoMetadata init] */

void FUN_104390748(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCPhotoPickerScope/SCPhotoMetadataWrapper.swift",0x2f,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104390790);
  (*pcVar1)();
}



/* Entry: 1043907c4; end: 10439081b; -[SCPhotoMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043907c4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073250));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073258));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073260));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073268));
  return;
}



/* Entry: 10439081c; end: 10439083b;  */

void FUN_10439081c(void)

{
  _objc_opt_self(&PTR_PTR_1129a6470);
  return;
}



/* Entry: 10439083c; end: 104390883; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439083c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073298;
  _swift_beginAccess(param_1 + _DAT_113073298,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104390884; end: 1043908db; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073298;
  _swift_beginAccess(param_1 + _DAT_113073298,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043908dc; end: 1043908fb; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043908dc(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130732a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043908fc; end: 104390907; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope deckContainerFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043908fc(long param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = _DAT_1130732a8;
  _swift_beginAccess(param_1 + _DAT_1130732a8,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar3,auStack_60);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104390908; end: 104390913; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope setDeckContainerFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390908(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  lVar1 = _DAT_1130732a8;
  _swift_beginAccess(param_1 + _DAT_1130732a8,auStack_68,0x21,0);
  func_0x000100f72e88(&uStack_50,param_1 + lVar1);
  _swift_endAccess(auStack_68);
  _objc_release(param_1);
  return;
}



/* Entry: 104390914; end: 10439091f; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope webLauncher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390914(long param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = _DAT_1130732b0;
  _swift_beginAccess(param_1 + _DAT_1130732b0,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar3,auStack_60);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104390920; end: 10439092b; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope setWebLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390920(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  lVar1 = _DAT_1130732b0;
  _swift_beginAccess(param_1 + _DAT_1130732b0,auStack_68,0x21,0);
  func_0x000100f72e88(&uStack_50,param_1 + lVar1);
  _swift_endAccess(auStack_68);
  _objc_release(param_1);
  return;
}



/* Entry: 10439092c; end: 1043909a3; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope memSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439092c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_1130732b8);
  _swift_beginAccess(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    _swift_bridgeObjectRetain(lVar2);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1043909a4; end: 104390a1b; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope setMemSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043909a4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_1130732b8);
  _swift_beginAccess(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  _swift_bridgeObjectRelease(lVar2);
  return;
}



/* Entry: 104390a1c; end: 104390a27; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope dataObjectContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390a1c(long param_1)

{
  long extraout_x8;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar3 = _DAT_1130732c0;
  _swift_beginAccess(param_1 + _DAT_1130732c0,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar3,auStack_60);
  if (lStack_48 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar3 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
    puVar2 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar3 + 0x10))(puVar2);
    puVar1 = puVar2;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar2,lStack_48);
    (**(code **)(lVar3 + 8))(puVar2,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104390a28; end: 104390b0f;  */

void FUN_104390a28(long param_1,undefined8 param_2,long *param_3)

{
  long extraout_x8;
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_78,0,0);
  func_0x000100672b50(param_1 + lVar1,auStack_60);
  if (lStack_48 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar1 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar1 + 0x40));
    puVar3 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar1 + 0x10))(puVar3);
    puVar2 = puVar3;
    __ss27_bridgeAnythingToObjectiveCyyXlxlF(puVar3,lStack_48);
    (**(code **)(lVar1 + 8))(puVar3,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104390b10; end: 104390b1b; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope setDataObjectContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390b10(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  lVar1 = _DAT_1130732c0;
  _swift_beginAccess(param_1 + _DAT_1130732c0,auStack_68,0x21,0);
  func_0x000100f72e88(&uStack_50,param_1 + lVar1);
  _swift_endAccess(auStack_68);
  _objc_release(param_1);
  return;
}



/* Entry: 104390b1c; end: 104390bbb;  */

void FUN_104390b1c(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
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
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_68,0x21,0);
  func_0x000100f72e88(&uStack_50,param_1 + lVar1);
  _swift_endAccess(auStack_68);
  _objc_release(param_1);
  return;
}



/* Entry: 104390bbc; end: 104390bff; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope bypassCooldown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_104390bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130732c8;
  _swift_beginAccess(param_1 + _DAT_1130732c8,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 104390c00; end: 104390c4f; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope setBypassCooldown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390c00(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130732c8;
  _swift_beginAccess(param_1 + _DAT_1130732c8,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 104390c50; end: 104390d3b; -[_TtC30FaceTaggingPermissionTrayScope30FaceTaggingPermissionTrayScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000104390c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104390c90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104390c50(long param_1)

{
  long lVar1;
  
  func_0x000104390ccc(param_1 + _DAT_113073298);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130732a0));
  param_1 = param_1 + _DAT_1130732a8;
  lVar1 = 0x112d387f8;
  func_0x0001000285a8(0x112d387f8,&UNK_10d902650);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 104390d3c; end: 104390da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390d3c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104391250();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130732d8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104390da4; end: 104390def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104390da4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130732d8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104390df0; end: 104391033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104390df0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uStack_e0;
  long *aplStack_d8 [3];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long lStack_70;
  
  lVar3 = param_1;
  FUN_1043911d8();
  lVar4 = lVar3;
  _objc_allocWithZone();
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073298,0);
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130732a8);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130732b0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130732b8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130732c0);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(lVar4 + _DAT_1130732c8) = 0;
  *(long *)(lVar4 + _DAT_1130732a0) = param_1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_unknownObjectRetain(param_1);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar2);
  lVar3 = _DAT_113073298;
  _swift_beginAccess((long)plVar5 + _DAT_113073298,auStack_90,1,0);
  _swift_unknownObjectWeakAssign((long)plVar5 + lVar3,param_2);
  puVar1 = (undefined8 *)((long)plVar5 + _DAT_1130732b8);
  _swift_beginAccess(puVar1,auStack_a8,1,0);
  uVar6 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRelease(uVar6);
  lVar4 = _DAT_1130732c8;
  _swift_beginAccess((long)plVar5 + _DAT_1130732c8,auStack_c0,1,0);
  lVar3 = _DAT_1130732a8;
  *(undefined1 *)((long)plVar5 + lVar4) = param_5;
  _swift_beginAccess((long)plVar5 + _DAT_1130732a8,aplStack_d8,0x21,0);
  func_0x0001012c2668(param_6,(long)plVar5 + lVar3);
  _swift_endAccess(aplStack_d8);
  lVar3 = _DAT_1130732b0;
  _swift_beginAccess((long)plVar5 + _DAT_1130732b0,aplStack_d8,0x21,0);
  func_0x0001012c2668(param_7,(long)plVar5 + lVar3);
  _swift_endAccess(aplStack_d8);
  lVar3 = _DAT_1130732c0;
  _swift_beginAccess((long)plVar5 + _DAT_1130732c0,aplStack_d8,0x21,0);
  func_0x0001012c2668(param_8,(long)plVar5 + lVar3);
  _swift_endAccess(aplStack_d8);
  aplStack_d8[0] = plVar5;
  func_0x00010008a7c8(&uStack_e0,aplStack_d8);
  func_0x000100083b20(aplStack_d8);
  _swift_release(uStack_e0);
  _swift_unknownObjectRelease(aplStack_d8[0]);
  return plVar5;
}



/* Entry: 104391034; end: 1043911d7; -[_TtC30FaceTaggingPermissionTrayScope38FaceTaggingPermissionTrayScopeServices buildWithUiContainer:delegate:memSessionId:bypassCooldown:deckContainerFactory:webLauncher:dataObjectContext:] */

void FUN_104391034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
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
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_5);
  }
  if (param_7 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    _swift_unknownObjectRetain(param_3);
    _swift_unknownObjectRetain(param_4);
    _swift_unknownObjectRetain(param_8);
    _swift_unknownObjectRetain(param_9);
    _objc_retain(param_1);
  }
  else {
    _swift_unknownObjectRetain(param_3);
    _swift_unknownObjectRetain(param_4);
    _swift_unknownObjectRetain(param_7);
    _swift_unknownObjectRetain(param_8);
    _swift_unknownObjectRetain(param_9);
    _objc_retain(param_1);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_80,param_7);
    _swift_unknownObjectRelease(param_7);
  }
  if (param_8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,param_8);
    _swift_unknownObjectRelease(param_8);
  }
  if (param_9 == 0) {
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_c0,param_9);
    _swift_unknownObjectRelease(param_9);
  }
  uVar1 = param_3;
  FUN_104390df0(param_3,param_4,param_5,param_2,param_6,&uStack_80,&uStack_a0,&uStack_c0);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_4);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x00010006e7f4(&uStack_c0);
  func_0x00010006e7f4(&uStack_a0);
  func_0x00010006e7f4(&uStack_80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043911d8; end: 1043911f7;  */

void FUN_1043911d8(void)

{
  _objc_opt_self(&PTR_PTR_1129a6558);
  return;
}



/* Entry: 1043911f8; end: 1043911fb;  */

void FUN_1043911f8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043911fc; end: 10439122f;  */

void FUN_1043911fc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104391230; end: 10439124f; -[_TtC30FaceTaggingPermissionTrayScope38FaceTaggingPermissionTrayScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391230(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130732d8));
  return;
}



/* Entry: 104391250; end: 10439126f;  */

void FUN_104391250(void)

{
  _objc_opt_self(&PTR_PTR_1129a6648);
  return;
}



/* Entry: 104391270; end: 104391273;  */

void FUN_104391270(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104391274; end: 104391283; -[ChatActionMenuScope conversationMessageIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391274(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073330));
  return;
}



/* Entry: 104391284; end: 104391293; -[ChatActionMenuScope focusedMessageContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073338));
  return;
}



/* Entry: 104391294; end: 1043912b3; -[ChatActionMenuScope focusedMessageCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391294(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073340));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043912b4; end: 1043912c3; -[ChatActionMenuScope focusedMessageViewModelObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043912b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073348));
  return;
}



/* Entry: 1043912c4; end: 1043912cf; -[ChatActionMenuScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043912c4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073350;
  _swift_beginAccess(param_1 + _DAT_113073350,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043912d0; end: 1043912db; -[ChatActionMenuScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043912d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073350;
  _swift_beginAccess(param_1 + _DAT_113073350,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043912dc; end: 1043912e7; -[ChatActionMenuScope inputContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043912dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073358;
  _swift_beginAccess(param_1 + _DAT_113073358,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043912e8; end: 1043912f3; -[ChatActionMenuScope setInputContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043912e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073358;
  _swift_beginAccess(param_1 + _DAT_113073358,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043912f4; end: 104391313; -[ChatActionMenuScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043912f4(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073360));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104391314; end: 10439131f; -[ChatActionMenuScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391314(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073368;
  _swift_beginAccess(param_1 + _DAT_113073368,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104391320; end: 104391363;  */

void FUN_104391320(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104391364; end: 10439136f; -[ChatActionMenuScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391364(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073368;
  _swift_beginAccess(param_1 + _DAT_113073368,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104391370; end: 1043913c3;  */

void FUN_104391370(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043913c4; end: 1043913d3; -[ChatActionMenuScope actionEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043913c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073370));
  return;
}



/* Entry: 1043913d4; end: 1043914ff; -[ChatActionMenuScope initWithConversationMessageIdentifier:focusedMessageContent:focusedMessageCell:focusedMessageViewModelObservable:delegate:inputContext:uiContainer:presentingViewController:actionEvents:] */

undefined8
FUN_1043913d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  uVar1 = param_10;
  _objc_retain();
  _objc_retain(param_11);
  uVar2 = param_3;
  FUN_104391ad8(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _swift_unknownObjectRelease(param_9);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104391500; end: 10439152b; -[ChatActionMenuScope init] */

void FUN_104391500(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChatActionMenuScope.ChatActionMenuScope",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439152c);
  (*pcVar1)();
}



/* Entry: 10439152c; end: 10439161f; -[ChatActionMenuScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439152c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073330));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073338));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073340));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073348));
  func_0x000100db7398(param_1 + _DAT_113073350);
  func_0x000100db7398(param_1 + _DAT_113073358);
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_113073360));
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113073368);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073370));
  return;
}



/* Entry: 104391620; end: 10439168b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391620(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104391ab8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073380) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10439168c; end: 104391693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439168c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104391ab8();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073380) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104391694; end: 1043916df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391694(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073380) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043916e0; end: 1043918cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043916e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_d8 [2];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar5 = param_1;
  FUN_104391a14();
  lVar6 = lVar5;
  _objc_allocWithZone();
  lVar2 = _DAT_113073350;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113073350,0);
  lVar3 = _DAT_113073358;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113073358,0);
  lVar4 = _DAT_113073368;
  _swift_unknownObjectWeakInit(lVar6 + _DAT_113073368,0);
  *(long *)(lVar6 + _DAT_113073330) = param_1;
  *(undefined8 *)(lVar6 + _DAT_113073338) = param_2;
  *(undefined8 *)(lVar6 + _DAT_113073340) = param_3;
  *(undefined8 *)(lVar6 + _DAT_113073348) = param_4;
  _swift_beginAccess(lVar6 + lVar2,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar2,param_5);
  _swift_beginAccess(lVar6 + lVar3,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar3,param_6);
  *(undefined8 *)(lVar6 + _DAT_113073360) = param_7;
  _swift_beginAccess(lVar6 + lVar4,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(lVar6 + lVar4,param_8);
  *(undefined8 *)(lVar6 + _DAT_113073370) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  lStack_c0 = lVar6;
  lStack_b8 = lVar5;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_7);
  _objc_retain(param_9);
  plVar7 = &lStack_c0;
  _objc_msgSendSuper2(plVar7,puVar1);
  aplStack_d8[0] = plVar7;
  func_0x00010008a7c8(&uStack_c8,aplStack_d8);
  func_0x000100083b20(aplStack_d8);
  _swift_release(uStack_c8);
  _swift_unknownObjectRelease(aplStack_d8[0]);
  return plVar7;
}



/* Entry: 1043918cc; end: 104391a13; -[ChatActionMenuScopeServices buildWithConversationMessageIdentifier:focusedMessageContent:focusedMessageCell:focusedMessageViewModelObservable:delegate:inputContext:uiContainer:presentingViewController:actionEvents:] */

void FUN_1043918cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  _swift_unknownObjectRetain(param_8);
  _swift_unknownObjectRetain(param_9);
  uVar1 = param_10;
  _objc_retain();
  uVar2 = param_11;
  _objc_retain();
  _objc_retain(param_1);
  uVar3 = param_3;
  FUN_1043916e0(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_6);
  _swift_unknownObjectRelease(param_7);
  _swift_unknownObjectRelease(param_8);
  _swift_unknownObjectRelease(param_9);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104391a14; end: 104391a33;  */

void FUN_104391a14(void)

{
  _objc_opt_self(&PTR_PTR_1129a6708);
  return;
}



/* Entry: 104391a34; end: 104391a5f; -[ChatActionMenuScopeServices init] */

void FUN_104391a34(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChatActionMenuScope.ChatActionMenuScopeServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104391a60);
  (*pcVar1)();
}



/* Entry: 104391a60; end: 104391a63;  */

void FUN_104391a60(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104391a64; end: 104391a97;  */

void FUN_104391a64(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104391a98; end: 104391ab7; -[ChatActionMenuScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073380));
  return;
}



/* Entry: 104391ab8; end: 104391ad7;  */

void FUN_104391ab8(void)

{
  _objc_opt_self(&PTR_PTR_1129a6808);
  return;
}



/* Entry: 104391ad8; end: 104391c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = _DAT_113073350;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113073350,0);
  lVar3 = _DAT_113073358;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113073358,0);
  lVar4 = _DAT_113073368;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113073368,0);
  *(undefined8 *)(unaff_x20 + _DAT_113073330) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073338) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113073340) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113073348) = param_4;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_5);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar3,param_6);
  *(undefined8 *)(unaff_x20 + _DAT_113073360) = param_7;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_a8,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar4,param_8);
  *(undefined8 *)(unaff_x20 + _DAT_113073370) = param_9;
  puVar1 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_retain(param_2);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_7);
  _objc_msgSendSuper2(&stack0xffffffffffffff48,puVar1);
  return;
}



/* Entry: 104391c7c; end: 104391c97;  */

void FUN_104391c7c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104391c98; end: 104391cd7;  */

void FUN_104391c98(void)

{
  undefined *puVar1;
  
  if (puRam00000001130733d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcf3000;
  _swift_getWitnessTable(&UNK_10dcf3000,&UNK_110762648);
  puRam00000001130733d8 = puVar1;
  return;
}



/* Entry: 104391cd8; end: 104391d83;  */

void FUN_104391cd8(void)

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



/* Entry: 104391d84; end: 104391dbb;  */

void FUN_104391d84(ulong *param_1,ulong *param_2)

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



/* Entry: 104391dbc; end: 104391e07; -[ChatCustomizationHubScope conversationId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391dbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130733e0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1130733e0))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104391e08; end: 104391e17; -[ChatCustomizationHubScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104391e08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130733e8);
}



/* Entry: 104391e18; end: 104391e27; -[ChatCustomizationHubScope entryFeature] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_104391e18(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_1130733f0);
}



/* Entry: 104391e28; end: 104391e47; -[ChatCustomizationHubScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391e28(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130733f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104391e48; end: 104391ed3; -[ChatCustomizationHubScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391e48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073400;
  _swift_beginAccess(param_1 + _DAT_113073400,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104391ed4; end: 104392077; -[ChatCustomizationHubScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104391ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073400;
  _swift_beginAccess(param_1 + _DAT_113073400,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104392078; end: 10439210b; -[ChatCustomizationHubScope wallpaperPreviewMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392078(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073408;
  _swift_beginAccess(param_1 + _DAT_113073408,auStack_38,0,0);
  _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10439210c; end: 1043921c3; -[ChatCustomizationHubScope setWallpaperPreviewMedia:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439210c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073408;
  _swift_beginAccess(param_1 + _DAT_113073408,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1043921c4; end: 104392203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1043921c4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_113073408;
  _swift_beginAccess(unaff_x20 + _DAT_113073408,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_104392204;
  return auVar2;
}



/* Entry: 104392204; end: 104392207;  */

void FUN_104392204(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 104392208; end: 1043922c7; -[ChatCustomizationHubScope initWithConversationId:source:entryFeature:uiContainer:delegate:wallpaperPreviewMedia:] */

undefined8
FUN_104392208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  uVar1 = param_8;
  _objc_retain(param_8);
  FUN_1043927b8(param_3,param_2,param_4,param_5,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(uVar1);
  return param_3;
}



/* Entry: 1043922c8; end: 104392323; -[ChatCustomizationHubScope init] */

void FUN_1043922c8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChatCustomizationHubScope.ChatCustomizationHubScope",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043922f4);
  (*pcVar1)();
}



/* Entry: 104392324; end: 1043923a3; -[ChatCustomizationHubScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392324(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130733e0 + 8));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130733f8));
  func_0x000104392380(param_1 + _DAT_113073400);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073408));
  return;
}



/* Entry: 1043923a4; end: 10439240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043923a4(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036ffd8();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073418) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104392410; end: 104392417;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392410(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010036ffd8();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073418) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104392418; end: 104392463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392418(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073418) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104392464; end: 1043925d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104392464(long param_1,long param_2,undefined8 param_3,undefined4 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = param_1;
  func_0x00010036e964();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar1 = _DAT_113073400;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073400,0);
  lVar2 = _DAT_113073408;
  *(undefined8 *)(lVar4 + _DAT_113073408) = 0;
  plVar5 = (long *)(lVar4 + _DAT_1130733e0);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  *(undefined8 *)(lVar4 + _DAT_1130733e8) = param_3;
  *(undefined4 *)(lVar4 + _DAT_1130733f0) = param_4;
  *(undefined8 *)(lVar4 + _DAT_1130733f8) = param_5;
  _swift_beginAccess(lVar4 + lVar1,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar1,param_6);
  _swift_beginAccess(lVar4 + lVar2,auStack_90,1,0);
  uVar6 = *(undefined8 *)(lVar4 + lVar2);
  *(undefined8 *)(lVar4 + lVar2) = param_7;
  _swift_bridgeObjectRetain(param_2);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_7);
  _objc_release(uVar6);
  plVar5 = &lStack_a0;
  lStack_a0 = lVar4;
  lStack_98 = lVar3;
  _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
  aplStack_b8[0] = plVar5;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  _swift_release(uStack_a8);
  _swift_unknownObjectRelease(aplStack_b8[0]);
  return plVar5;
}



/* Entry: 1043925d8; end: 1043926b3; -[_TtC25ChatCustomizationHubScope33ChatCustomizationHubScopeServices buildWithConversationId:source:entryFeature:uiContainer:delegate:wallpaperPreviewMedia:] */

void FUN_1043925d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_unknownObjectRetain(param_6);
  _swift_unknownObjectRetain(param_7);
  uVar1 = param_8;
  _objc_retain(param_8);
  _objc_retain(param_1);
  FUN_104392464(param_3,param_2,param_4,param_5,param_6,param_7,param_8);
  _swift_unknownObjectRelease(param_6);
  _swift_unknownObjectRelease(param_7);
  _objc_release(uVar1);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043926b4; end: 1043926df; -[_TtC25ChatCustomizationHubScope33ChatCustomizationHubScopeServices buildWithConversationId:source:uiContainer:delegate:wallpaperPreviewMedia:] */

void FUN_1043926b4(void)

{
  func_0x00010bf22d60();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043926e0; end: 10439273f; -[_TtC25ChatCustomizationHubScope33ChatCustomizationHubScopeServices init] */

void FUN_1043926e0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChatCustomizationHubScope.ChatCustomizationHubScopeServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439270c);
  (*pcVar1)();
}



/* Entry: 104392740; end: 104392773; -[_TtC25ChatCustomizationHubScope33ChatCustomizationHubScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104392740(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073418));
  return;
}



/* Entry: 104392774; end: 1043927b7;  */

void FUN_104392774(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1043927b8; end: 1043928d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043927b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_113073400;
  _swift_unknownObjectWeakInit(unaff_x20 + _DAT_113073400,0);
  lVar3 = _DAT_113073408;
  *(undefined8 *)(unaff_x20 + _DAT_113073408) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1130733e0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130733e8) = param_3;
  *(undefined4 *)(unaff_x20 + _DAT_1130733f0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_1130733f8) = param_5;
  _swift_beginAccess(unaff_x20 + lVar2,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar2,param_6);
  _swift_beginAccess(unaff_x20 + lVar3,auStack_90,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_7;
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_7);
  _objc_release();
  func_0x00010036e964();
  _objc_msgSendSuper2(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043928d4; end: 10439292b; -[_TtC25ChatCustomizationHubScope25ChatWallpaperPreviewMedia init] */

void FUN_1043928d4(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000026,0x800000010f1f9910,
             "ChatCustomizationHubScope/ChatWallpaperPreviewMedia.swift",0x39,2,0x12,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10439292c);
  (*pcVar1)();
}



/* Entry: 10439292c; end: 104392933;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439292c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113073478);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar2 = PTR_s_init_1125d9248;
  _objc_retain(param_1);
  _objc_msgSendSuper2(auStack_40,puVar2);
  return;
}


