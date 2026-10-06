/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040a4580; end: 1040a45df; -[_TtC25TstSystemScopeGraphBridge40TstSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_1040a4580(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("TstSystemScopeGraphBridge.TstSystemScopeGraphBridgeSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a45ac);
  (*pcVar1)();
}



/* Entry: 1040a45e0; end: 1040a4617; -[_TtC25TstSystemScopeGraphBridge40TstSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a45e0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305d0b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305d0c0));
  return;
}



/* Entry: 1040a4618; end: 1040a463f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a4618(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305d0c0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305d0b8));
  return;
}



/* Entry: 1040a4640; end: 1040a46a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a4640(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305d2a0);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a46a4; end: 1040a46ab;  */

void FUN_1040a46a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a46ac; end: 1040a474b;  */

void FUN_1040a46ac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a474c; end: 1040a476b;  */

void FUN_1040a474c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a476c; end: 1040a47cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a476c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305d2a8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a47d0; end: 1040a47d7;  */

void FUN_1040a47d0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a47d8; end: 1040a4877;  */

void FUN_1040a47d8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a4878; end: 1040a4897;  */

void FUN_1040a4878(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a4898; end: 1040a48fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a4898(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305d2a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305d2a8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a48fc; end: 1040a495b; -[_TtC25TstSystemScopeGraphBridge33TstSystemScopeGraphBridgeServices init] */

void FUN_1040a48fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("TstSystemScopeGraphBridge.TstSystemScopeGraphBridgeServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a4928);
  (*pcVar1)();
}



/* Entry: 1040a495c; end: 1040a49ef; -[_TtC25TstSystemScopeGraphBridge33TstSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a495c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305d2a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305d2a8));
  return;
}



/* Entry: 1040a49f0; end: 1040a4a27;  */

undefined1  [16] FUN_1040a49f0(void)

{
  return ZEXT816(0x1107416e0);
}



/* Entry: 1040a4a28; end: 1040a4a6b; -[SCTstSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_1040a4a28(undefined8 param_1)

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



/* Entry: 1040a4a6c; end: 1040a4a9f;  */

void FUN_1040a4a6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a4aa0; end: 1040a4ae7; -[SCTstSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a4aa0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305d300);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305d308));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305d310));
  return;
}



/* Entry: 1040a4ae8; end: 1040a4b07;  */

void FUN_1040a4ae8(void)

{
  _objc_opt_self(&PTR_PTR_11298b7c0);
  return;
}



/* Entry: 1040a4b08; end: 1040a4b13; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a4b08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305d340;
  _swift_beginAccess(param_1 + _DAT_11305d340,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a4b14; end: 1040a4b1f; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a4b14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305d340;
  _swift_beginAccess(param_1 + _DAT_11305d340,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a4b20; end: 1040a4b2b; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider tstSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a4b20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305d348;
  _swift_beginAccess(param_1 + _DAT_11305d348,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a4b2c; end: 1040a4b6f;  */

void FUN_1040a4b2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1040a4b70; end: 1040a4b7b; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider setTstSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a4b70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305d348;
  _swift_beginAccess(param_1 + _DAT_11305d348,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a4b7c; end: 1040a4bcf;  */

void FUN_1040a4b7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a4bd0; end: 1040a4de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040a4bd0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d08c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040a46d0();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305d2a0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305d350);
      *(long *)(unaff_x20 + _DAT_11305d350) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "TstSystemScopeGraphBridge/SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider.swift"
             ,0x5a,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a4cfc);
  (*pcVar1)();
}



/* Entry: 1040a4de4; end: 1040a4e17; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider provide] */

void FUN_1040a4de4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040a4bd0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a4e18; end: 1040a4e4b; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider __safeProvide] */

void FUN_1040a4e18(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040a4cfc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a4e4c; end: 1040a4e8f; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider end] */

void FUN_1040a4e4c(undefined8 param_1)

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



/* Entry: 1040a4e90; end: 1040a5027;  */

void FUN_1040a4e90(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e14100)) {
      uVar2 = 0xd000000000000021;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000021,0x800000010f1ebf00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "TstSystemScopeGraphBridge/SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider.swift"
                   ,0x5a,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a5028);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5a0c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040a5028; end: 1040a50d3; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider setValue:forIvarName:] */

void FUN_1040a5028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_1040a4e90(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040a50d4; end: 1040a5147; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a50d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305d340,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305d348,0);
  *(undefined8 *)(param_1 + _DAT_11305d350) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a5148; end: 1040a517b;  */

void FUN_1040a5148(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a517c; end: 1040a51c3; -[SCSCCremaLegacyBackdoorServicesWrapperSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a517c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305d340);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305d348);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305d350));
  return;
}



/* Entry: 1040a51c4; end: 1040a51e3;  */

void FUN_1040a51c4(void)

{
  _objc_opt_self(&PTR_PTR_11305d398);
  return;
}



/* Entry: 1040a51e4; end: 1040a51ef; -[SCSCCremaServicesWrapperSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a51e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305d400;
  _swift_beginAccess(param_1 + _DAT_11305d400,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a51f0; end: 1040a51fb; -[SCSCCremaServicesWrapperSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a51f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305d400;
  _swift_beginAccess(param_1 + _DAT_11305d400,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a51fc; end: 1040a5207; -[SCSCCremaServicesWrapperSaberServiceProvider tstSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a51fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305d408;
  _swift_beginAccess(param_1 + _DAT_11305d408,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a5208; end: 1040a524b;  */

void FUN_1040a5208(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1040a524c; end: 1040a5257; -[SCSCCremaServicesWrapperSaberServiceProvider setTstSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a524c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305d408;
  _swift_beginAccess(param_1 + _DAT_11305d408,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a5258; end: 1040a52ab;  */

void FUN_1040a5258(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040a52ac; end: 1040a54bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1040a52ac(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x00010bf18280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5d08c();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001040a47fc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305d2a8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305d410);
      *(long *)(unaff_x20 + _DAT_11305d410) = lVar4;
      _swift_retain();
      _swift_retain(lVar4);
      _swift_release(uVar5);
      func_0x000100083b20(&uStack_48);
      _swift_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar3);
      return uStack_48;
    }
    _objc_release(lVar2);
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
             "TstSystemScopeGraphBridge/SCSCCremaServicesWrapperSaberServiceProvider.swift",0x4c,2,
             0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a53d8);
  (*pcVar1)();
}



/* Entry: 1040a54c0; end: 1040a54f3; -[SCSCCremaServicesWrapperSaberServiceProvider provide] */

void FUN_1040a54c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1040a52ac();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a54f4; end: 1040a5527; -[SCSCCremaServicesWrapperSaberServiceProvider __safeProvide] */

void FUN_1040a54f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040a53d8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a5528; end: 1040a556b; -[SCSCCremaServicesWrapperSaberServiceProvider end] */

void FUN_1040a5528(undefined8 param_1)

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



/* Entry: 1040a556c; end: 1040a5703;  */

void FUN_1040a556c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0)) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e14100)) {
      uVar2 = 0xd000000000000021;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000021,0x800000010f1ebf00,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "TstSystemScopeGraphBridge/SCSCCremaServicesWrapperSaberServiceProvider.swift",
                   0x4c,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a5704);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5a0c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040a5704; end: 1040a57af; -[SCSCCremaServicesWrapperSaberServiceProvider setValue:forIvarName:] */

void FUN_1040a5704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  __ss018_bridgeAnyObjectToB0yypyXlSgF(auStack_50,param_3);
  _swift_unknownObjectRelease(param_3);
  uVar1 = param_4;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _objc_release(param_4);
  FUN_1040a556c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040a57b0; end: 1040a5823; -[SCSCCremaServicesWrapperSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a57b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305d400,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305d408,0);
  *(undefined8 *)(param_1 + _DAT_11305d410) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a5824; end: 1040a5857;  */

void FUN_1040a5824(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a5858; end: 1040a589f; -[SCSCCremaServicesWrapperSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5858(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305d400);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305d408);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305d410));
  return;
}



/* Entry: 1040a58a0; end: 1040a58bf;  */

void FUN_1040a58a0(void)

{
  _objc_opt_self(&PTR_PTR_11305d458);
  return;
}



/* Entry: 1040a58c0; end: 1040a58df; -[SCCremaServices cremaBackdoorService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a58c0(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11305d4c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040a58e0; end: 1040a592b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a58e0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305d4c0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a592c; end: 1040a598b; -[SCCremaServices init] */

void FUN_1040a592c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("SCCremaServices.SCCremaServices",0x1f,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a5958);
  (*pcVar1)();
}



/* Entry: 1040a598c; end: 1040a599b; -[SCCremaServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a598c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11305d4c0));
  return;
}



/* Entry: 1040a599c; end: 1040a5a33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a599c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305d4f0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040a5a34; end: 1040a5a93; -[_TtC15SCCremaServices22SCCremaServicesWrapper init] */

void FUN_1040a5a34(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCremaServices.SCCremaServicesWrapper",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a5a60);
  (*pcVar1)();
}



/* Entry: 1040a5a94; end: 1040a5aa3; -[_TtC15SCCremaServices22SCCremaServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5a94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305d4f0));
  return;
}



/* Entry: 1040a5aa4; end: 1040a5aaf; -[_TtC15SCCremaServices22SCCremaBackdoorRequest method] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5aa4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11305d520);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11305d520))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1040a5ab0; end: 1040a5b47; -[_TtC15SCCremaServices22SCCremaBackdoorRequest url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5ab0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_1138130d8,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1040a5b48; end: 1040a5ba3; -[_TtC15SCCremaServices22SCCremaBackdoorRequest headers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5b48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1138130e0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a5ba4; end: 1040a5baf; -[_TtC15SCCremaServices22SCCremaBackdoorRequest path] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5ba4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1138130e8);
  uVar1 = ((undefined8 *)(param_1 + _DAT_1138130e8))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1040a5bb0; end: 1040a5bf7;  */

void FUN_1040a5bb0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1040a5bf8; end: 1040a5c5f; -[_TtC15SCCremaServices22SCCremaBackdoorRequest query] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5bf8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1138130f0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1040a5c60; end: 1040a5cd3; -[_TtC15SCCremaServices22SCCremaBackdoorRequest data] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a5c60(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = ((undefined8 *)(param_1 + _DAT_1138130f8))[1];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_1138130f8);
    func_0x00010006c00c(uVar3,uVar2);
    uVar1 = uVar3;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar3,uVar2);
    func_0x0001000b44c0(uVar3,uVar2);
  }
  else {
    uVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040a5cd4; end: 1040a5de3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1040a5cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11305d520);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar2 = _DAT_1138130d8;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(unaff_x20 + lVar2,param_3,lVar3);
  *(undefined8 *)(unaff_x20 + _DAT_1138130e0) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138130e8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_1138130f0) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_1138130f8);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar4 = auStack_70;
  _objc_msgSendSuper2(puVar4,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(param_3,lVar3);
  return puVar4;
}



/* Entry: 1040a5de4; end: 1040a5fbf; -[_TtC15SCCremaServices22SCCremaBackdoorRequest initWithMethod:url:headers:path:query:data:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1040a5de4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined *puVar8;
  long lVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  _swift_getObjectType();
  lVar4 = 0;
  lStack_78 = lVar3;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  uStack_88 = param_2;
  uStack_80 = param_3;
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar3,param_4);
  puVar2 = PTR___sypN_11034f1a8;
  puVar7 = PTR___ss11AnyHashableVN_11034e448;
  __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
            (param_5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
             PTR___ss11AnyHashableVSHsWP_11034e450);
  uStack_90 = param_5;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar8 = puVar7;
  if (param_7 != 0) {
    puVar8 = PTR___ss11AnyHashableVN_11034e448;
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_7,PTR___ss11AnyHashableVN_11034e448,puVar2 + 8,
               PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_8 == 0) {
    puVar8 = (undefined *)0xf000000000000000;
  }
  else {
    lVar5 = param_8;
    _objc_retain(param_8);
    __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ();
    _objc_release(lVar5);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_11305d520);
  *puVar1 = uStack_80;
  puVar1[1] = uStack_88;
  (**(code **)(lVar9 + 0x10))(param_1 + _DAT_1138130d8,lVar3,lVar4);
  *(undefined8 *)(param_1 + _DAT_1138130e0) = uStack_90;
  puVar1 = (undefined8 *)(param_1 + _DAT_1138130e8);
  *puVar1 = param_6;
  puVar1[1] = puVar7;
  *(long *)(param_1 + _DAT_1138130f0) = param_7;
  plVar6 = (long *)(param_1 + _DAT_1138130f8);
  *plVar6 = param_8;
  plVar6[1] = (long)puVar8;
  lStack_68 = lStack_78;
  plVar6 = &lStack_70;
  lStack_70 = param_1;
  _objc_msgSendSuper2(plVar6,PTR_s_init_1125d9248);
  (**(code **)(lVar9 + 8))(lVar3,lVar4);
  return plVar6;
}



/* Entry: 1040a5fc0; end: 1040a601f; -[_TtC15SCCremaServices22SCCremaBackdoorRequest init] */

void FUN_1040a5fc0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCCremaServices.SCCremaBackdoorRequest",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a5fec);
  (*pcVar1)();
}



/* Entry: 1040a6020; end: 1040a60b7; -[_TtC15SCCremaServices22SCCremaBackdoorRequest .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a6020(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11305d520 + 8));
  lVar2 = _DAT_1138130d8;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(param_1 + lVar2,lVar4);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138130e0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138130e8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1138130f0));
  uVar3 = *(ulong *)(param_1 + _DAT_1138130f8);
  uVar1 = ((ulong *)(param_1 + _DAT_1138130f8))[1];
  if (0xe < uVar1 >> 0x3c) {
    return;
  }
  uVar5 = (uint)(uVar1 >> 0x3e);
  if (uVar5 == 1) {
    uVar3 = uVar1 & 0x3fffffffffffffff;
  }
  else if (uVar5 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3);
  return;
}



/* Entry: 1040a60b8; end: 1040a60bf;  */

void FUN_1040a60b8(void)

{
  if (lRam000000011305d550 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7ed980);
  return;
}



/* Entry: 1040a60c0; end: 1040a60f7;  */

void FUN_1040a60c0(undefined8 param_1)

{
  if (lRam000000011305d550 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7ed980);
  return;
}



/* Entry: 1040a60f8; end: 1040a622b;  */

void FUN_1040a60f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_50;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_50 = &UNK_10dcd24f8;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBbWV_11034d660 + 0x40;
    puStack_38 = &UNK_10dcd24f8;
    puStack_30 = &UNK_10dcd2510;
    puStack_28 = &UNK_10dcd2528;
    _swift_updateClassMetadata2(param_1,0x100,6,&puStack_50,param_1 + 0x50);
  }
  return;
}



/* Entry: 1040a622c; end: 1040a625f;  */

void FUN_1040a622c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040a6260; end: 1040a626f; -[_TtC39SCCremaLegacyBackdoorServicesWrapperAPI36SCCremaLegacyBackdoorServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a6260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305d560));
  return;
}



/* Entry: 1040a6270; end: 1040a62f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040a6270(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a48d20();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11305d590) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11305d598) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a62f8);
  (*pcVar1)();
}



/* Entry: 1040a62f8; end: 1040a6357; -[_TtC28WschedSystemScopeGraphBridge43WschedSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_1040a62f8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WschedSystemScopeGraphBridge.WschedSystemScopeGraphBridgeSaberEntryPoint",0x48,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a6324);
  (*pcVar1)();
}



/* Entry: 1040a6358; end: 1040a638f; -[_TtC28WschedSystemScopeGraphBridge43WschedSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a6358(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305d590));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305d598));
  return;
}



/* Entry: 1040a6390; end: 1040a63b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a6390(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305d598),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305d590));
  return;
}



/* Entry: 1040a63b8; end: 1040a6453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040a63b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305de90);
  *(undefined8 *)(unaff_x20 + _DAT_11305d5c8) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305d5d0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1040a6454; end: 1040a64b3; -[_TtC28WschedSystemScopeGraphBridge49SCInAppSessionJobSchedulerServicesSaberEntryPoint init] */

void FUN_1040a6454(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WschedSystemScopeGraphBridge.SCInAppSessionJobSchedulerServicesSaberEntryPoint",0x4e,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a6480);
  (*pcVar1)();
}



/* Entry: 1040a64b4; end: 1040a6547; -[_TtC28WschedSystemScopeGraphBridge49SCInAppSessionJobSchedulerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a64b4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305d5c8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305d5d0));
  return;
}



/* Entry: 1040a6548; end: 1040a654f;  */

undefined8 FUN_1040a6548(void)

{
  return 0;
}



/* Entry: 1040a6550; end: 1040a65eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040a6550(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_11305dec0);
  *(undefined8 *)(unaff_x20 + _DAT_11305d600) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11305d608) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1040a65ec; end: 1040a664b; -[_TtC28WschedSystemScopeGraphBridge36WorkSchedulerServicesSaberEntryPoint init] */

void FUN_1040a65ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WschedSystemScopeGraphBridge.WorkSchedulerServicesSaberEntryPoint",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040a6618);
  (*pcVar1)();
}



/* Entry: 1040a664c; end: 1040a66df; -[_TtC28WschedSystemScopeGraphBridge36WorkSchedulerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040a664c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305d600));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305d608));
  return;
}



/* Entry: 1040a66e0; end: 1040a66e7;  */

undefined8 FUN_1040a66e0(void)

{
  return 0;
}



/* Entry: 1040a66e8; end: 1040a674b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a66e8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305de68);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a674c; end: 1040a6753;  */

void FUN_1040a674c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a6754; end: 1040a67f3;  */

void FUN_1040a6754(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a67f4; end: 1040a6813;  */

void FUN_1040a67f4(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a6814; end: 1040a6877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a6814(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305de70);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a6878; end: 1040a687f;  */

void FUN_1040a6878(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a6880; end: 1040a691f;  */

void FUN_1040a6880(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a6920; end: 1040a693f;  */

void FUN_1040a6920(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a6940; end: 1040a69a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a6940(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305de78);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a69a4; end: 1040a69ab;  */

void FUN_1040a69a4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040a69ac; end: 1040a6a4b;  */

void FUN_1040a69ac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040a6a4c; end: 1040a6a6b;  */

void FUN_1040a6a4c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040a6a6c; end: 1040a6acf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040a6a6c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305de80);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040a6ad0; end: 1040a6ad7;  */

void FUN_1040a6ad0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


