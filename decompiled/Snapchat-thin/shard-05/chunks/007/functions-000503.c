/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10409d69c; end: 10409d6cf;  */

void FUN_10409d69c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409d6d0; end: 10409d717; -[SCSIGNotificationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d6d0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b8d8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305b8e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305b8e8));
  return;
}



/* Entry: 10409d718; end: 10409d737;  */

void FUN_10409d718(void)

{
  _objc_opt_self(&PTR_PTR_11305b930);
  return;
}



/* Entry: 10409d738; end: 10409d747; -[_TtC37SCLocalNotificationSchedulingServices37SCLocalNotificationSchedulingServices localNotificationScheduler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d738(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11305b9a0));
  return;
}



/* Entry: 10409d748; end: 10409d7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409d748(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305b998) = param_1;
  uVar1 = param_1;
  _swift_retain();
  func_0x0001003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11305b9a0) = uVar1;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  _swift_release(param_1);
  return puVar2;
}



/* Entry: 10409d7cc; end: 10409d82b; -[_TtC37SCLocalNotificationSchedulingServices37SCLocalNotificationSchedulingServices init] */

void FUN_10409d7cc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLocalNotificationSchedulingServices.SCLocalNotificationSchedulingServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409d7f8);
  (*pcVar1)();
}



/* Entry: 10409d82c; end: 10409d863; -[_TtC37SCLocalNotificationSchedulingServices37SCLocalNotificationSchedulingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d82c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305b998));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b9a0));
  return;
}



/* Entry: 10409d864; end: 10409d8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409d864(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a23eb0();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11305b9d0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11305b9d8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409d8ec);
  (*pcVar1)();
}



/* Entry: 10409d8ec; end: 10409d94b; -[_TtC25RlsSystemScopeGraphBridge40RlsSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_10409d8ec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("RlsSystemScopeGraphBridge.RlsSystemScopeGraphBridgeSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409d918);
  (*pcVar1)();
}



/* Entry: 10409d94c; end: 10409d983; -[_TtC25RlsSystemScopeGraphBridge40RlsSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d94c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305b9d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305b9d8));
  return;
}



/* Entry: 10409d984; end: 10409d9ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409d984(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305b9d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305b9d0));
  return;
}



/* Entry: 10409d9ac; end: 10409da0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409d9ac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305bae8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10409da10; end: 10409da17;  */

void FUN_10409da10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10409da18; end: 10409dab7;  */

void FUN_10409da18(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10409dab8; end: 10409db23;  */

void FUN_10409dab8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10409db24; end: 10409db83; -[_TtC25RlsSystemScopeGraphBridge33RlsSystemScopeGraphBridgeServices init] */

void FUN_10409db24(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("RlsSystemScopeGraphBridge.RlsSystemScopeGraphBridgeServices",0x3b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409db50);
  (*pcVar1)();
}



/* Entry: 10409db84; end: 10409db93; -[_TtC25RlsSystemScopeGraphBridge33RlsSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409db84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305bae8));
  return;
}



/* Entry: 10409db94; end: 10409dbef;  */

void FUN_10409db94(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x11305bad8,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x11305bad8,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 10409dbf0; end: 10409dc27;  */

undefined1  [16] FUN_10409dbf0(void)

{
  return ZEXT816(0x110740b80);
}



/* Entry: 10409dc28; end: 10409dc6b; -[SCRlsSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_10409dc28(undefined8 param_1)

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



/* Entry: 10409dc6c; end: 10409dc9f;  */

void FUN_10409dc6c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409dca0; end: 10409dce7; -[SCRlsSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409dca0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305bb40);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305bb48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305bb50));
  return;
}



/* Entry: 10409dce8; end: 10409dd07;  */

void FUN_10409dce8(void)

{
  _objc_opt_self(&PTR_PTR_11298a500);
  return;
}



/* Entry: 10409dd08; end: 10409dd13; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409dd08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305bb80;
  _swift_beginAccess(param_1 + _DAT_11305bb80,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409dd14; end: 10409dd1f; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409dd14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305bb80;
  _swift_beginAccess(param_1 + _DAT_11305bb80,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409dd20; end: 10409dd2b; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider rlsSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409dd20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305bb88;
  _swift_beginAccess(param_1 + _DAT_11305bb88,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409dd2c; end: 10409dd6f;  */

void FUN_10409dd2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10409dd70; end: 10409dd7b; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider setRlsSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409dd70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305bb88;
  _swift_beginAccess(param_1 + _DAT_11305bb88,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409dd7c; end: 10409ddcf;  */

void FUN_10409dd7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409ddd0; end: 10409dfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10409ddd0(void)

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
    func_0x000107c508b4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010409da3c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305bae8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305bb90);
      *(long *)(unaff_x20 + _DAT_11305bb90) = lVar4;
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
             "RlsSystemScopeGraphBridge/SCSCInternalDistributeServiceWrapperSaberServiceProvider.swift"
             ,0x58,2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409defc);
  (*pcVar1)();
}



/* Entry: 10409dfe4; end: 10409e017; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider provide] */

void FUN_10409dfe4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10409ddd0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409e018; end: 10409e04b; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider __safeProvide] */

void FUN_10409e018(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010409defc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409e04c; end: 10409e08f; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider end] */

void FUN_10409e04c(undefined8 param_1)

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



/* Entry: 10409e090; end: 10409e227;  */

void FUN_10409e090(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e150d0)) {
      uVar2 = 0xd000000000000021;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000021,0x800000010f1eaf30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "RlsSystemScopeGraphBridge/SCSCInternalDistributeServiceWrapperSaberServiceProvider.swift"
                   ,0x58,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409e228);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57efc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409e228; end: 10409e2d3; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider setValue:forIvarName:] */

void FUN_10409e228(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10409e090(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409e2d4; end: 10409e347; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409e2d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305bb80,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305bb88,0);
  *(undefined8 *)(param_1 + _DAT_11305bb90) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409e348; end: 10409e37b;  */

void FUN_10409e348(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409e37c; end: 10409e3c3; -[SCSCInternalDistributeServiceWrapperSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409e37c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305bb80);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305bb88);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305bb90));
  return;
}



/* Entry: 10409e3c4; end: 10409e3e3;  */

void FUN_10409e3c4(void)

{
  _objc_opt_self(&PTR_PTR_11305bbd8);
  return;
}



/* Entry: 10409e3e4; end: 10409e46b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10409e3e4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a435ac();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_11305bc40) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_11305bc48) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409e46c);
  (*pcVar1)();
}



/* Entry: 10409e46c; end: 10409e4cb; -[_TtC26SemcSystemScopeGraphBridge41SemcSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_10409e46c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SemcSystemScopeGraphBridge.SemcSystemScopeGraphBridgeSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409e498);
  (*pcVar1)();
}



/* Entry: 10409e4cc; end: 10409e503; -[_TtC26SemcSystemScopeGraphBridge41SemcSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409e4cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305bc40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305bc48));
  return;
}



/* Entry: 10409e504; end: 10409e52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409e504(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_11305bc48),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_11305bc40));
  return;
}



/* Entry: 10409e52c; end: 10409e58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409e52c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305bef8);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10409e590; end: 10409e597;  */

void FUN_10409e590(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10409e598; end: 10409e637;  */

void FUN_10409e598(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10409e638; end: 10409e657;  */

void FUN_10409e638(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10409e658; end: 10409e6bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409e658(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305bf00);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10409e6bc; end: 10409e6c3;  */

void FUN_10409e6bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10409e6c4; end: 10409e763;  */

void FUN_10409e6c4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10409e764; end: 10409e783;  */

void FUN_10409e764(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10409e784; end: 10409e7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10409e784(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_11305bf08);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10409e7e8; end: 10409e7ef;  */

void FUN_10409e7e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10409e7f0; end: 10409e88f;  */

void FUN_10409e7f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10409e890; end: 10409e8af;  */

void FUN_10409e890(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10409e8b0; end: 10409e923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409e8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11305bef8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11305bf00) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11305bf08) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409e924; end: 10409e983; -[_TtC26SemcSystemScopeGraphBridge34SemcSystemScopeGraphBridgeServices init] */

void FUN_10409e924(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SemcSystemScopeGraphBridge.SemcSystemScopeGraphBridgeServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409e950);
  (*pcVar1)();
}



/* Entry: 10409e984; end: 10409ea27; -[_TtC26SemcSystemScopeGraphBridge34SemcSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409e984(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305bef8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_11305bf00));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305bf08));
  return;
}



/* Entry: 10409ea28; end: 10409ea5f;  */

undefined1  [16] FUN_10409ea28(void)

{
  return ZEXT816(0x110740d60);
}



/* Entry: 10409ea60; end: 10409eaa3; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_10409ea60(undefined8 param_1)

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



/* Entry: 10409eaa4; end: 10409ead7;  */

void FUN_10409eaa4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409ead8; end: 10409eb1f; -[SCSemcSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409ead8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305bf60);
  _objc_release(*(undefined8 *)(param_1 + _DAT_11305bf68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11305bf70));
  return;
}



/* Entry: 10409eb20; end: 10409eb3f;  */

void FUN_10409eb20(void)

{
  _objc_opt_self(&PTR_PTR_11298a7a8);
  return;
}



/* Entry: 10409eb40; end: 10409eb4b; -[SCCloudAccountIdServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409eb40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305bfa0;
  _swift_beginAccess(param_1 + _DAT_11305bfa0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409eb4c; end: 10409eb57; -[SCCloudAccountIdServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409eb4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305bfa0;
  _swift_beginAccess(param_1 + _DAT_11305bfa0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409eb58; end: 10409eb63; -[SCCloudAccountIdServicesSaberServiceProvider semcSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409eb58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305bfa8;
  _swift_beginAccess(param_1 + _DAT_11305bfa8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409eb64; end: 10409eba7;  */

void FUN_10409eb64(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10409eba8; end: 10409ebb3; -[SCCloudAccountIdServicesSaberServiceProvider setSemcSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409eba8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305bfa8;
  _swift_beginAccess(param_1 + _DAT_11305bfa8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409ebb4; end: 10409ec07;  */

void FUN_10409ebb4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409ec08; end: 10409ee1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10409ec08(void)

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
    func_0x000107c51d74();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010409e5bc();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305bef8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305bfb0);
      *(long *)(unaff_x20 + _DAT_11305bfb0) = lVar4;
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
             "SemcSystemScopeGraphBridge/SCCloudAccountIdServicesSaberServiceProvider.swift",0x4d,2,
             0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409ed34);
  (*pcVar1)();
}



/* Entry: 10409ee1c; end: 10409ee4f; -[SCCloudAccountIdServicesSaberServiceProvider provide] */

void FUN_10409ee1c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10409ec08();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409ee50; end: 10409ee83; -[SCCloudAccountIdServicesSaberServiceProvider __safeProvide] */

void FUN_10409ee50(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010409ed34();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409ee84; end: 10409eec7; -[SCCloudAccountIdServicesSaberServiceProvider end] */

void FUN_10409ee84(undefined8 param_1)

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



/* Entry: 10409eec8; end: 10409f05f;  */

void FUN_10409eec8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e14e50)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1eb1b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcSystemScopeGraphBridge/SCCloudAccountIdServicesSaberServiceProvider.swift",
                   0x4d,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409f060);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e78();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409f060; end: 10409f10b; -[SCCloudAccountIdServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10409f060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10409eec8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409f10c; end: 10409f17f; -[SCCloudAccountIdServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f10c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305bfa0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305bfa8,0);
  *(undefined8 *)(param_1 + _DAT_11305bfb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409f180; end: 10409f1b3;  */

void FUN_10409f180(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409f1b4; end: 10409f1fb; -[SCCloudAccountIdServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f1b4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305bfa0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305bfa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305bfb0));
  return;
}



/* Entry: 10409f1fc; end: 10409f21b;  */

void FUN_10409f1fc(void)

{
  _objc_opt_self(&PTR_PTR_11305bff8);
  return;
}



/* Entry: 10409f21c; end: 10409f227; -[SCSCPasswordHashStorageServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f21c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c060;
  _swift_beginAccess(param_1 + _DAT_11305c060,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409f228; end: 10409f233; -[SCSCPasswordHashStorageServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f228(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c060;
  _swift_beginAccess(param_1 + _DAT_11305c060,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409f234; end: 10409f23f; -[SCSCPasswordHashStorageServicesSaberServiceProvider semcSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c068;
  _swift_beginAccess(param_1 + _DAT_11305c068,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409f240; end: 10409f283;  */

void FUN_10409f240(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10409f284; end: 10409f28f; -[SCSCPasswordHashStorageServicesSaberServiceProvider setSemcSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f284(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c068;
  _swift_beginAccess(param_1 + _DAT_11305c068,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409f290; end: 10409f2e3;  */

void FUN_10409f290(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409f2e4; end: 10409f4f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10409f2e4(void)

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
    func_0x000107c51d74();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010409e6e8();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11305bf00);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11305c070);
      *(long *)(unaff_x20 + _DAT_11305c070) = lVar4;
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
             "SemcSystemScopeGraphBridge/SCSCPasswordHashStorageServicesSaberServiceProvider.swift",
             0x54,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10409f410);
  (*pcVar1)();
}



/* Entry: 10409f4f8; end: 10409f52b; -[SCSCPasswordHashStorageServicesSaberServiceProvider provide] */

void FUN_10409f4f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10409f2e4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409f52c; end: 10409f55f; -[SCSCPasswordHashStorageServicesSaberServiceProvider __safeProvide] */

void FUN_10409f52c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010409f410();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10409f560; end: 10409f5a3; -[SCSCPasswordHashStorageServicesSaberServiceProvider end] */

void FUN_10409f560(undefined8 param_1)

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



/* Entry: 10409f5a4; end: 10409f73b;  */

void FUN_10409f5a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e14e50)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1eb1b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SemcSystemScopeGraphBridge/SCSCPasswordHashStorageServicesSaberServiceProvider.swift"
                   ,0x54,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10409f73c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c58e78();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10409f73c; end: 10409f7e7; -[SCSCPasswordHashStorageServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10409f73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10409f5a4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10409f7e8; end: 10409f85b; -[SCSCPasswordHashStorageServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f7e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c060,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11305c068,0);
  *(undefined8 *)(param_1 + _DAT_11305c070) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10409f85c; end: 10409f88f;  */

void FUN_10409f85c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10409f890; end: 10409f8d7; -[SCSCPasswordHashStorageServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f890(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c060);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11305c068);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11305c070));
  return;
}



/* Entry: 10409f8d8; end: 10409f8f7;  */

void FUN_10409f8d8(void)

{
  _objc_opt_self(&PTR_PTR_11305c0b8);
  return;
}



/* Entry: 10409f8f8; end: 10409f903; -[SCSnapTokenStorageServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f8f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c120;
  _swift_beginAccess(param_1 + _DAT_11305c120,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409f904; end: 10409f90f; -[SCSnapTokenStorageServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f904(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c120;
  _swift_beginAccess(param_1 + _DAT_11305c120,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10409f910; end: 10409f91b; -[SCSnapTokenStorageServicesSaberServiceProvider semcSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f910(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305c128;
  _swift_beginAccess(param_1 + _DAT_11305c128,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10409f91c; end: 10409f95f;  */

void FUN_10409f91c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10409f960; end: 10409f96b; -[SCSnapTokenStorageServicesSaberServiceProvider setSemcSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10409f960(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305c128;
  _swift_beginAccess(param_1 + _DAT_11305c128,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}


