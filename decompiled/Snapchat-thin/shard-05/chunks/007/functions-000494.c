/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10408673c; end: 1040867c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10408673c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a1ed08();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113057af0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113057af8) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040867c4);
  (*pcVar1)();
}



/* Entry: 1040867c4; end: 104086823; -[_TtC27ConvoSystemScopeGraphBridge42ConvoSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_1040867c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ConvoSystemScopeGraphBridge.ConvoSystemScopeGraphBridgeSaberEntryPoint",0x46,"init()",
             6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040867f0);
  (*pcVar1)();
}



/* Entry: 104086824; end: 10408685b; -[_TtC27ConvoSystemScopeGraphBridge42ConvoSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104086824(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113057af0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113057af8));
  return;
}



/* Entry: 10408685c; end: 104086883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10408685c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113057af8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113057af0));
  return;
}



/* Entry: 104086884; end: 1040868e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104086884(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113057c08);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1040868e8; end: 1040868ef;  */

void FUN_1040868e8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1040868f0; end: 10408698f;  */

void FUN_1040868f0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104086990; end: 1040869fb;  */

void FUN_104086990(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040869fc; end: 104086a5b; -[_TtC27ConvoSystemScopeGraphBridge35ConvoSystemScopeGraphBridgeServices init] */

void FUN_1040869fc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ConvoSystemScopeGraphBridge.ConvoSystemScopeGraphBridgeServices",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104086a28);
  (*pcVar1)();
}



/* Entry: 104086a5c; end: 104086a6b; -[_TtC27ConvoSystemScopeGraphBridge35ConvoSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104086a5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113057c08));
  return;
}



/* Entry: 104086a6c; end: 104086ac7;  */

void FUN_104086a6c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(0x113057bf8,auStack_38,0x20,0);
  _objc_setAssociatedObject(param_1,0x113057bf8,0,1);
  _swift_endAccess(auStack_38);
  return;
}



/* Entry: 104086ac8; end: 104086aff;  */

undefined1  [16] FUN_104086ac8(void)

{
  return ZEXT816(0x11073ec18);
}



/* Entry: 104086b00; end: 104086b43; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_104086b00(undefined8 param_1)

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



/* Entry: 104086b44; end: 104086b77;  */

void FUN_104086b44(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104086b78; end: 104086bbf; -[SCConvoSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104086b78(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113057c60);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113057c68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113057c70));
  return;
}



/* Entry: 104086bc0; end: 104086bdf;  */

void FUN_104086bc0(void)

{
  _objc_opt_self(&PTR_PTR_112986300);
  return;
}



/* Entry: 104086be0; end: 104086beb; -[SCSCWatchDetectorServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104086be0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113057ca0;
  _swift_beginAccess(param_1 + _DAT_113057ca0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104086bec; end: 104086bf7; -[SCSCWatchDetectorServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104086bec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113057ca0;
  _swift_beginAccess(param_1 + _DAT_113057ca0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104086bf8; end: 104086c03; -[SCSCWatchDetectorServicesSaberServiceProvider convoSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104086bf8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113057ca8;
  _swift_beginAccess(param_1 + _DAT_113057ca8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104086c04; end: 104086c47;  */

void FUN_104086c04(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104086c48; end: 104086c53; -[SCSCWatchDetectorServicesSaberServiceProvider setConvoSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104086c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113057ca8;
  _swift_beginAccess(param_1 + _DAT_113057ca8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104086c54; end: 104086ca7;  */

void FUN_104086c54(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104086ca8; end: 104086ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104086ca8(void)

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
    func_0x00010bf51840();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000104086914();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113057c08);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113057cb0);
      *(long *)(unaff_x20 + _DAT_113057cb0) = lVar4;
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
             "ConvoSystemScopeGraphBridge/SCSCWatchDetectorServicesSaberServiceProvider.swift",0x4f,
             2,0x1c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104086dd4);
  (*pcVar1)();
}



/* Entry: 104086ebc; end: 104086eef; -[SCSCWatchDetectorServicesSaberServiceProvider provide] */

void FUN_104086ebc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104086ca8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104086ef0; end: 104086f23; -[SCSCWatchDetectorServicesSaberServiceProvider __safeProvide] */

void FUN_104086ef0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104086dd4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104086f24; end: 104086f67; -[SCSCWatchDetectorServicesSaberServiceProvider end] */

void FUN_104086f24(undefined8 param_1)

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



/* Entry: 104086f68; end: 1040870ff;  */

void FUN_104086f68(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e180c0)) {
      uVar2 = 0xd000000000000023;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000023,0x800000010f1e7f40,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ConvoSystemScopeGraphBridge/SCSCWatchDetectorServicesSaberServiceProvider.swift"
                   ,0x4f,2,0x31,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104087100);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53994();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104087100; end: 1040871ab; -[SCSCWatchDetectorServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104087100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104086f68(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1040871ac; end: 10408721f; -[SCSCWatchDetectorServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040871ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113057ca0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113057ca8,0);
  *(undefined8 *)(param_1 + _DAT_113057cb0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104087220; end: 104087253;  */

void FUN_104087220(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104087254; end: 10408729b; -[SCSCWatchDetectorServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104087254(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113057ca0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113057ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113057cb0));
  return;
}



/* Entry: 10408729c; end: 1040872bb;  */

void FUN_10408729c(void)

{
  _objc_opt_self(&PTR_PTR_113057cf8);
  return;
}



/* Entry: 1040872bc; end: 104087343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1040872bc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a1f350();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113057d60) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113057d68) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104087344);
  (*pcVar1)();
}



/* Entry: 104087344; end: 1040873a3; -[_TtC26DatpSystemScopeGraphBridge41DatpSystemScopeGraphBridgeSaberEntryPoint init] */

void FUN_104087344(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpSystemScopeGraphBridge.DatpSystemScopeGraphBridgeSaberEntryPoint",0x44,"init()",6,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104087370);
  (*pcVar1)();
}



/* Entry: 1040873a4; end: 1040873db; -[_TtC26DatpSystemScopeGraphBridge41DatpSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040873a4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113057d60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113057d68));
  return;
}



/* Entry: 1040873dc; end: 104087403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040873dc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113057d68),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113057d60));
  return;
}



/* Entry: 104087404; end: 10408749f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104087404(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113058260);
  *(undefined8 *)(unaff_x20 + _DAT_113057d98) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113057da0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1040874a0; end: 1040874ff; -[_TtC26DatpSystemScopeGraphBridge36SCAttributionServicesSaberEntryPoint init] */

void FUN_1040874a0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpSystemScopeGraphBridge.SCAttributionServicesSaberEntryPoint",0x3f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040874cc);
  (*pcVar1)();
}



/* Entry: 104087500; end: 104087593; -[_TtC26DatpSystemScopeGraphBridge36SCAttributionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104087500(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113057d98));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113057da0));
  return;
}



/* Entry: 104087594; end: 10408759b;  */

undefined8 FUN_104087594(void)

{
  return 0;
}



/* Entry: 10408759c; end: 104087637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10408759c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113058270);
  *(undefined8 *)(unaff_x20 + _DAT_113057dd0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113057dd8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 104087638; end: 104087697; -[_TtC26DatpSystemScopeGraphBridge39SCLegacyBlizzardServicesSaberEntryPoint init] */

void FUN_104087638(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpSystemScopeGraphBridge.SCLegacyBlizzardServicesSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104087664);
  (*pcVar1)();
}



/* Entry: 104087698; end: 10408772b; -[_TtC26DatpSystemScopeGraphBridge39SCLegacyBlizzardServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104087698(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113057dd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113057dd8));
  return;
}



/* Entry: 10408772c; end: 104087733;  */

undefined8 FUN_10408772c(void)

{
  return 0;
}



/* Entry: 104087734; end: 1040877cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104087734(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113058298);
  *(undefined8 *)(unaff_x20 + _DAT_113057e08) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113057e10) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1040877d0; end: 10408782f; -[_TtC26DatpSystemScopeGraphBridge39SCSystemBlizzardServicesSaberEntryPoint init] */

void FUN_1040877d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpSystemScopeGraphBridge.SCSystemBlizzardServicesSaberEntryPoint",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040877fc);
  (*pcVar1)();
}



/* Entry: 104087830; end: 1040878c3; -[_TtC26DatpSystemScopeGraphBridge39SCSystemBlizzardServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104087830(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113057e08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113057e10));
  return;
}



/* Entry: 1040878c4; end: 1040878cb;  */

undefined8 FUN_1040878c4(void)

{
  return 0;
}



/* Entry: 1040878cc; end: 10408792f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040878cc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113058268);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104087930; end: 104087937;  */

void FUN_104087930(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104087938; end: 1040879d7;  */

void FUN_104087938(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040879d8; end: 1040879f7;  */

void FUN_1040879d8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1040879f8; end: 104087a5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040879f8(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113058278);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104087a5c; end: 104087a63;  */

void FUN_104087a5c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104087a64; end: 104087b03;  */

void FUN_104087a64(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104087b04; end: 104087b23;  */

void FUN_104087b04(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104087b24; end: 104087b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104087b24(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113058280);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104087b88; end: 104087b8f;  */

void FUN_104087b88(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104087b90; end: 104087c2f;  */

void FUN_104087b90(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104087c30; end: 104087c4f;  */

void FUN_104087c30(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104087c50; end: 104087cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104087c50(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113058288);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104087cb4; end: 104087cbb;  */

void FUN_104087cb4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104087cbc; end: 104087d5b;  */

void FUN_104087cbc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104087d5c; end: 104087d7b;  */

void FUN_104087d5c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104087d7c; end: 104087ddf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104087d7c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113058290);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104087de0; end: 104087de7;  */

void FUN_104087de0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104087de8; end: 104087e87;  */

void FUN_104087de8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 104087e88; end: 104087ea7;  */

void FUN_104087e88(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104087ea8; end: 104087f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104087ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113058260) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113058268) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113058270) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113058278) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113058280) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113058288) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_113058290) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_113058298) = param_8;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104087f84; end: 104087fe3; -[_TtC26DatpSystemScopeGraphBridge34DatpSystemScopeGraphBridgeServices init] */

void FUN_104087f84(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("DatpSystemScopeGraphBridge.DatpSystemScopeGraphBridgeServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104087fb0);
  (*pcVar1)();
}



/* Entry: 104087fe4; end: 1040880d7; -[_TtC26DatpSystemScopeGraphBridge34DatpSystemScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104087fe4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113058260));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113058270));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113058298));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113058268));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113058278));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113058280));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113058288));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113058290));
  return;
}



/* Entry: 1040880d8; end: 10408810f;  */

undefined1  [16] FUN_1040880d8(void)

{
  return ZEXT816(0x11073ee88);
}



/* Entry: 104088110; end: 104088153; -[SCDatpSystemScopeGraphBridgeSaberEntryPoint end] */

void FUN_104088110(undefined8 param_1)

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



/* Entry: 104088154; end: 104088187;  */

void FUN_104088154(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104088188; end: 1040881cf; -[SCDatpSystemScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104088188(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130582f0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130582f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113058300));
  return;
}



/* Entry: 1040881d0; end: 1040881ef;  */

void FUN_1040881d0(void)

{
  _objc_opt_self(&PTR_PTR_112986828);
  return;
}



/* Entry: 1040881f0; end: 104088233; -[SCSCAttributionServicesSaberEntryPoint end] */

void FUN_1040881f0(undefined8 param_1)

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



/* Entry: 104088234; end: 104088267;  */

void FUN_104088234(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104088268; end: 1040882bf; -[SCSCAttributionServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104088268(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058330);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058338);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113058340));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113058348));
  return;
}



/* Entry: 1040882c0; end: 1040882df;  */

void FUN_1040882c0(void)

{
  _objc_opt_self(&PTR_PTR_1129868f0);
  return;
}



/* Entry: 1040882e0; end: 104088323; -[SCSCLegacyBlizzardServicesSaberEntryPoint end] */

void FUN_1040882e0(undefined8 param_1)

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



/* Entry: 104088324; end: 104088357;  */

void FUN_104088324(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104088358; end: 1040883af; -[SCSCLegacyBlizzardServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104088358(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058378);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113058380);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113058388));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113058390));
  return;
}



/* Entry: 1040883b0; end: 1040883cf;  */

void FUN_1040883b0(void)

{
  _objc_opt_self(&PTR_PTR_1129869c0);
  return;
}



/* Entry: 1040883d0; end: 104088413; -[SCSCSystemBlizzardServicesSaberEntryPoint end] */

void FUN_1040883d0(undefined8 param_1)

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



/* Entry: 104088414; end: 104088447;  */

void FUN_104088414(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104088448; end: 10408849f; -[SCSCSystemBlizzardServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104088448(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130583c0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130583c8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130583d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130583d8));
  return;
}



/* Entry: 1040884a0; end: 1040884bf;  */

void FUN_1040884a0(void)

{
  _objc_opt_self(&PTR_PTR_112986a90);
  return;
}



/* Entry: 1040884c0; end: 1040884cb; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040884c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058408;
  _swift_beginAccess(param_1 + _DAT_113058408,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040884cc; end: 1040884d7; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040884cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058408;
  _swift_beginAccess(param_1 + _DAT_113058408,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1040884d8; end: 1040884e3; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider datpSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040884d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058410;
  _swift_beginAccess(param_1 + _DAT_113058410,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040884e4; end: 104088527;  */

void FUN_1040884e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104088528; end: 104088533; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider setDatpSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104088528(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058410;
  _swift_beginAccess(param_1 + _DAT_113058410,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104088534; end: 104088587;  */

void FUN_104088534(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104088588; end: 10408879b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104088588(void)

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
    func_0x00010bf65680();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010408795c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113058268);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113058418);
      *(long *)(unaff_x20 + _DAT_113058418) = lVar4;
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
             "DatpSystemScopeGraphBridge/SCSCBlizzardClientIdProviderServicesSaberServiceProvider.swift"
             ,0x59,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040886b4);
  (*pcVar1)();
}



/* Entry: 10408879c; end: 1040887cf; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider provide] */

void FUN_10408879c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104088588();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1040887d0; end: 104088803; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider __safeProvide] */

void FUN_1040887d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001040886b4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104088804; end: 104088847; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider end] */

void FUN_104088804(undefined8 param_1)

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



/* Entry: 104088848; end: 1040889df;  */

void FUN_104088848(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e17cf0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000022,0x800000010f1e8310,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "DatpSystemScopeGraphBridge/SCSCBlizzardClientIdProviderServicesSaberServiceProvider.swift"
                   ,0x59,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1040889e0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c53e40();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1040889e0; end: 104088a8b; -[SCSCBlizzardClientIdProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1040889e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104088848(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


