/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104022584; end: 1040225e3; -[_TtC33WschedUserSessionScopeGraphBridge48WschedUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_104022584(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WschedUserSessionScopeGraphBridge.WschedUserSessionScopeGraphBridgeSaberEntryPoint",
             0x52,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040225b0);
  (*pcVar1)();
}



/* Entry: 1040225e4; end: 10402261b; -[_TtC33WschedUserSessionScopeGraphBridge48WschedUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040225e4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130494a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130494b0));
  return;
}



/* Entry: 10402261c; end: 104022643;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10402261c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_1130494b0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_1130494a8));
  return;
}



/* Entry: 104022644; end: 1040226df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104022644(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_1130495f8);
  *(undefined8 *)(unaff_x20 + _DAT_1130494e0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_1130494e8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 1040226e0; end: 10402273f; -[_TtC33WschedUserSessionScopeGraphBridge45SCComposerJobSchedulerServicesSaberEntryPoint init] */

void FUN_1040226e0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WschedUserSessionScopeGraphBridge.SCComposerJobSchedulerServicesSaberEntryPoint",0x4f,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10402270c);
  (*pcVar1)();
}



/* Entry: 104022740; end: 1040227d3; -[_TtC33WschedUserSessionScopeGraphBridge45SCComposerJobSchedulerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022740(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130494e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130494e8));
  return;
}



/* Entry: 1040227d4; end: 1040227db;  */

undefined8 FUN_1040227d4(void)

{
  return 0;
}



/* Entry: 1040227dc; end: 10402283f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1040227dc(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113049600);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 104022840; end: 104022847;  */

void FUN_104022840(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 104022848; end: 1040228e7;  */

void FUN_104022848(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040228e8; end: 104022907;  */

void FUN_1040228e8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 104022908; end: 10402296b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022908(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130495f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113049600) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10402296c; end: 1040229cb; -[_TtC33WschedUserSessionScopeGraphBridge41WschedUserSessionScopeGraphBridgeServices init] */

void FUN_10402296c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("WschedUserSessionScopeGraphBridge.WschedUserSessionScopeGraphBridgeServices",0x4b,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104022998);
  (*pcVar1)();
}



/* Entry: 1040229cc; end: 104022a5f; -[_TtC33WschedUserSessionScopeGraphBridge41WschedUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040229cc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130495f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113049600));
  return;
}



/* Entry: 104022a60; end: 104022a97;  */

undefined1  [16] FUN_104022a60(void)

{
  return ZEXT816(0x110736898);
}



/* Entry: 104022a98; end: 104022adb; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_104022a98(undefined8 param_1)

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



/* Entry: 104022adc; end: 104022b0f;  */

void FUN_104022adc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104022b10; end: 104022b57; -[SCWschedUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022b10(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113049658);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113049660));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113049668));
  return;
}



/* Entry: 104022b58; end: 104022b77;  */

void FUN_104022b58(void)

{
  _objc_opt_self(&PTR_PTR_11297fa38);
  return;
}



/* Entry: 104022b78; end: 104022bbb; -[SCSCComposerJobSchedulerServicesSaberEntryPoint end] */

void FUN_104022b78(undefined8 param_1)

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



/* Entry: 104022bbc; end: 104022bef;  */

void FUN_104022bbc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104022bf0; end: 104022c47; -[SCSCComposerJobSchedulerServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022bf0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113049698);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130496a0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130496a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130496b0));
  return;
}



/* Entry: 104022c48; end: 104022c67;  */

void FUN_104022c48(void)

{
  _objc_opt_self(&PTR_PTR_11297fb00);
  return;
}



/* Entry: 104022c68; end: 104022c73; -[SCSCUserJobSchedulerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022c68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130496e0;
  _swift_beginAccess(param_1 + _DAT_1130496e0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104022c74; end: 104022c7f; -[SCSCUserJobSchedulerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130496e0;
  _swift_beginAccess(param_1 + _DAT_1130496e0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104022c80; end: 104022c8b; -[SCSCUserJobSchedulerServicesSaberServiceProvider wschedUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022c80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130496e8;
  _swift_beginAccess(param_1 + _DAT_1130496e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104022c8c; end: 104022ccf;  */

void FUN_104022c8c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 104022cd0; end: 104022cdb; -[SCSCUserJobSchedulerServicesSaberServiceProvider setWschedUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104022cd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130496e8;
  _swift_beginAccess(param_1 + _DAT_1130496e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104022cdc; end: 104022d2f;  */

void FUN_104022cdc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104022d30; end: 104022f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104022d30(void)

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
    func_0x000107c5e9d8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010402286c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113049600);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130496f0);
      *(long *)(unaff_x20 + _DAT_1130496f0) = lVar4;
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
             "WschedUserSessionScopeGraphBridge/SCSCUserJobSchedulerServicesSaberServiceProvider.swift"
             ,0x58,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104022e5c);
  (*pcVar1)();
}



/* Entry: 104022f44; end: 104022f77; -[SCSCUserJobSchedulerServicesSaberServiceProvider provide] */

void FUN_104022f44(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_104022d30();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104022f78; end: 104022fab; -[SCSCUserJobSchedulerServicesSaberServiceProvider __safeProvide] */

void FUN_104022f78(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000104022e5c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104022fac; end: 104022fef; -[SCSCUserJobSchedulerServicesSaberServiceProvider end] */

void FUN_104022fac(undefined8 param_1)

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



/* Entry: 104022ff0; end: 104023187;  */

void FUN_104022ff0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e20870)) {
      uVar2 = 0xd000000000000029;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000029,0x800000010f1df790,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "WschedUserSessionScopeGraphBridge/SCSCUserJobSchedulerServicesSaberServiceProvider.swift"
                   ,0x58,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x104023188);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5a7e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 104023188; end: 104023233; -[SCSCUserJobSchedulerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_104023188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_104022ff0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 104023234; end: 1040232a7; -[SCSCUserJobSchedulerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104023234(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130496e0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130496e8,0);
  *(undefined8 *)(param_1 + _DAT_1130496f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1040232a8; end: 1040232db;  */

void FUN_1040232a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1040232dc; end: 104023323; -[SCSCUserJobSchedulerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040232dc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130496e0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130496e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130496f0));
  return;
}



/* Entry: 104023324; end: 104023343;  */

void FUN_104023324(void)

{
  _objc_opt_self(&PTR_PTR_113049738);
  return;
}



/* Entry: 104023344; end: 104023597;  */

void FUN_104023344(char param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = 0x6f65646976;
  if (param_1 != '\x01') {
    uVar3 = 0x6567616d69;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  uVar5 = 0xea00000000006465;
  uVar4 = 0x6863746170736964;
  if (param_2 != 2) {
    uVar5 = 0xe800000000000000;
    uVar4 = 0x7469685f636e7973;
  }
  uVar1 = 0x66666f5f666f63;
  if (param_2 != 0) {
    uVar1 = 0x64656c6165766572;
  }
  uVar2 = 0xe700000000000000;
  if (param_2 != 0) {
    uVar2 = 0xe800000000000000;
  }
  if (param_2 < 2) {
    uVar5 = uVar2;
    uVar4 = uVar1;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  func_0x00010af4636c(uVar6,uVar3,uVar4,1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 104023598; end: 10402368b;  */

void FUN_104023598(undefined8 param_1,char param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0x6f65646976;
  if (param_2 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  if (param_3 == '\0') {
    uVar2 = 0x73736563637573;
    uVar4 = 0xe700000000000000;
  }
  else {
    uVar2 = 0x726f727265;
    if (param_3 != '\x01') {
      uVar2 = 0x656c6c65636e6163;
    }
    uVar4 = 0xe500000000000000;
    if (param_3 != '\x01') {
      uVar4 = 0xe900000000000064;
    }
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  func_0x00010af46960(param_1,uVar3,uVar1,uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10402368c; end: 1040236cf;  */

void FUN_10402368c(void)

{
  long unaff_x20;
  
  _objc_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1040236d0; end: 1040236ef;  */

void FUN_1040236d0(void)

{
  FUN_104023344();
  return;
}



/* Entry: 1040236f0; end: 104023767;  */

void FUN_1040236f0(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x10);
  uVar1 = 0x6f65646976;
  if (param_2 != '\x01') {
    uVar1 = 0x6567616d69;
  }
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  func_0x00010af4659c(param_1,uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104023768; end: 1040237a7;  */

void FUN_104023768(void)

{
  func_0x000104023450();
  return;
}



/* Entry: 1040237a8; end: 1040237b7;  */

void FUN_1040237a8(void)

{
  long *plVar1;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(*unaff_x20 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c98158,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 1040237b8; end: 10402391b;  */

void FUN_1040237b8(long *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long alStack_70 [3];
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar2 == 0) {
    func_0x0001001d473c(0);
    _objc_allocWithZone();
    lVar7 = 0;
    func_0x0001040321f4();
  }
  else {
    puVar3 = PTR_PTR_1126adb48;
    _objc_allocWithZone();
    func_0x00010bfee200();
    lVar4 = 0;
    func_0x0001040236b0();
    lVar5 = lVar4;
    _swift_allocObject();
    *(undefined **)(lVar5 + 0x10) = puVar3;
    func_0x000100083b20(&lStack_48);
    lVar7 = lStack_48;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10402391c);
      (*pcVar1)();
    }
    FUN_104031a40(0);
    uVar6 = 0;
    FUN_104023a04(0);
    func_0x000104023934();
    ppuStack_50 = &PTR_DAT_1107369b8;
    alStack_70[0] = lVar5;
    lStack_58 = lVar4;
    _swift_retain(lVar5);
    func_0x00010402ff88(lVar7,uVar6,alStack_70);
    func_0x0001001d473c(0);
    _objc_allocWithZone();
    lVar4 = lVar7;
    _objc_retain(lVar7);
    func_0x0001040321f4();
    _objc_release(lVar4);
    _swift_release(lVar5);
  }
  *param_1 = lVar7;
  return;
}



/* Entry: 10402391c; end: 104023953;  */

void FUN_10402391c(long *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long alStack_70 [3];
  long lStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar2 == 0) {
    func_0x0001001d473c(0);
    _objc_allocWithZone();
    lVar7 = 0;
    func_0x0001040321f4();
  }
  else {
    puVar3 = PTR_PTR_1126adb48;
    _objc_allocWithZone();
    func_0x00010bfee200();
    lVar4 = 0;
    func_0x0001040236b0();
    lVar5 = lVar4;
    _swift_allocObject();
    *(undefined **)(lVar5 + 0x10) = puVar3;
    func_0x000100083b20(&lStack_48);
    lVar7 = lStack_48;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_48);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10402391c);
      (*pcVar1)();
    }
    FUN_104031a40(0);
    uVar6 = 0;
    FUN_104023a04(0);
    func_0x000104023934();
    ppuStack_50 = &PTR_DAT_1107369b8;
    alStack_70[0] = lVar5;
    lStack_58 = lVar4;
    _swift_retain(lVar5);
    func_0x00010402ff88(lVar7,uVar6,alStack_70);
    func_0x0001001d473c(0);
    _objc_allocWithZone();
    lVar4 = lVar7;
    _objc_retain(lVar7);
    func_0x0001040321f4();
    _objc_release(lVar4);
    _swift_release(lVar5);
  }
  *param_1 = lVar7;
  return;
}



/* Entry: 104023954; end: 104023973; +[SCWAnalyzerTweaks overrideFromTweaks] */

undefined1 FUN_104023954(void)

{
  undefined1 uVar1;
  
  uVar1 = 2;
  if (cRam0000000113049848 == '\0') {
    uVar1 = uRam0000000113049888;
  }
  return uVar1;
}



/* Entry: 104023974; end: 1040239ff; -[SCWAnalyzerTweaks init] */

void FUN_104023974(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000020,0x800000010f1df8e0,
             "SCWAnalyzerTweaks/SCWAnalyzerTweaks.swift",0x29,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040239cc);
  (*pcVar1)();
}



/* Entry: 104023a00; end: 104023a03; -[SCWAnalyzerTweaks .cxx_destruct] */

void FUN_104023a00(void)

{
  return;
}



/* Entry: 104023a04; end: 104023a23;  */

void FUN_104023a04(void)

{
  _objc_opt_self(&PTR_PTR_11297fc18);
  return;
}



/* Entry: 104023a24; end: 104023a6f;  */

void FUN_104023a24(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *(long *)(*unaff_x20 + 0x60);
  lVar1 = 0;
  func_0x000104023e8c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  _swift_defaultActor_destroy();
  return;
}



/* Entry: 104023a70; end: 104023a87;  */

void FUN_104023a70(void)

{
  FUN_104023a24();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_defaultActor_deallocate_110350098)();
  return;
}



/* Entry: 104023a88; end: 104023a93;  */

void FUN_104023a88(void)

{
  return;
}



/* Entry: 104023a94; end: 104023aab;  */

void FUN_104023a94(void)

{
  FUN_104023a88();
  return;
}



/* Entry: 104023aac; end: 104023adb;  */

bool FUN_104023aac(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 104023adc; end: 104023bf7;  */

undefined * FUN_104023adc(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x113049a20,&UNK_10dcc4d08);
    puVar10 = puVar13;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar14 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar3 = puVar14[-5];
      uVar6 = puVar14[-4];
      uVar4 = puVar14[-3];
      uVar7 = puVar14[-2];
      uVar5 = puVar14[-1];
      uVar8 = *puVar14;
      _swift_unknownObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_retain(uVar4);
      uVar11 = uVar3;
      uVar12 = uVar6;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104023bf4);
        (*pcVar9)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar6;
      puVar2 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x20);
      *puVar2 = uVar4;
      puVar2[1] = uVar7;
      puVar2[2] = uVar5;
      puVar2[3] = uVar8;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x104023bf8);
        (*pcVar9)();
      }
      puVar14 = puVar14 + 6;
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    _swift_release(puVar10);
  }
  return puVar10;
}



/* Entry: 104023bf8; end: 104023ceb;  */

undefined * FUN_104023bf8(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x113049a18,&UNK_10dcc4d00);
    puVar6 = puVar9;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar10 = (undefined1 *)(param_1 + 0x30);
    do {
      uVar2 = *(ulong *)(puVar10 + -0x10);
      uVar3 = *(ulong *)(puVar10 + -8);
      uVar4 = *puVar10;
      _swift_bridgeObjectRetain(uVar3);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104023ce8);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined1 *)(*(long *)(puVar6 + 0x38) + uVar7) = uVar4;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x104023cec);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar10 = puVar10 + 0x18;
    } while (puVar9 != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Entry: 104023cec; end: 104023dff;  */

undefined * FUN_104023cec(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x113049a10,&UNK_10dcc4cf8);
    puVar5 = puVar9;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar1 = puVar11[-3];
      uVar2 = puVar11[-2];
      uVar3 = *(undefined1 *)(puVar11 + -1);
      uVar10 = *puVar11;
      _swift_bridgeObjectRetain(uVar2);
      _swift_retain(uVar10);
      uVar6 = uVar1;
      uVar7 = uVar2;
      FUN_10402b868(uVar1,uVar2,uVar3);
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104023dfc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar8 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x18);
      *puVar8 = uVar1;
      puVar8[1] = uVar2;
      *(undefined1 *)(puVar8 + 2) = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x104023e00);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      puVar11 = puVar11 + 4;
    } while (puVar9 != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Entry: 104023e00; end: 104023e03;  */

void FUN_104023e00(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 104023e04; end: 104023e7f;  */

void FUN_104023e04(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = &UNK_10dcc4bc8;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  func_0x000104023e8c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&puStack_30,param_1 + 0x58);
  }
  return;
}



/* Entry: 104023e80; end: 104023e9f;  */

void FUN_104023e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e7e4ac0);
  return;
}



/* Entry: 104023ea0; end: 104024047;  */

void FUN_104023ea0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___sBoWV_11034d678 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&puStack_30);
  }
  return;
}



/* Entry: 104024048; end: 1040240f3;  */

void FUN_104024048(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1040240d4;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1040240d4:
  if (uVar5 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001040240ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  if (uVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)param_1);
    return;
  }
  return;
}



/* Entry: 1040240f4; end: 1040241e7;  */

undefined8 * FUN_1040240f4(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_10402418c;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_10402418c:
  if (uVar5 == 1) {
    (**(code **)(lVar2 + 0x10))();
    *(undefined1 *)((long)param_1 + uVar4) = 1;
  }
  else {
    if (uVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar4 + 1);
      return param_1;
    }
    uVar3 = *(undefined8 *)param_2;
    *param_1 = uVar3;
    *(undefined1 *)((long)param_1 + uVar4) = 0;
    _swift_retain(uVar3);
  }
  return param_1;
}



/* Entry: 1040241e8; end: 1040243a7;  */

uint * FUN_1040241e8(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_104024294;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_104024294:
  if (uVar3 == 1) {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  else if (uVar3 == 0) {
    _swift_release(*(undefined8 *)param_1);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_10402433c;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_10402433c:
  if (uVar3 == 1) {
    (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2 + 1);
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 0;
    _swift_retain();
  }
  return param_1;
}



/* Entry: 1040243a8; end: 10402448f;  */

undefined8 * FUN_1040243a8(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar2 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar3);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)uVar3;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_104024440;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_104024440:
  if (uVar4 == 1) {
    (**(code **)(lVar2 + 0x20))();
    *(undefined1 *)((long)param_1 + uVar3) = 1;
  }
  else {
    if (uVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar3 + 1);
      return param_1;
    }
    *param_1 = *(undefined8 *)param_2;
    *(undefined1 *)((long)param_1 + uVar3) = 0;
  }
  return param_1;
}



/* Entry: 104024490; end: 10402464f;  */

uint * FUN_104024490(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_104024538;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_104024538:
  if (uVar3 == 1) {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  else if (uVar3 == 0) {
    _swift_release(*(undefined8 *)param_1);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1040245ec;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1040245ec:
  if (uVar3 == 1) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + uVar2) = 1;
  }
  else {
    if (uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)(param_1,param_2,uVar2 + 1);
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(byte *)((long)param_1 + uVar2) = 0;
  }
  return param_1;
}



/* Entry: 104024650; end: 104024753;  */

int FUN_104024650(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfe) goto LAB_1040246f8;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfd >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1040246f8;
      goto LAB_104024684;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_104024684:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfe;
  }
LAB_1040246f8:
  iVar2 = 0;
  if (2 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Entry: 104024754; end: 1040248f7;  */

void FUN_104024754(uint *param_1,uint param_2,uint param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  lVar1 = uVar4 + 1;
  uVar5 = (uint)lVar1;
  if (param_3 < 0xfe) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfd >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfe) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + lVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + lVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfe;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,lVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,lVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + lVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + lVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + lVar1) = iVar7;
    }
  }
  return;
}



/* Entry: 1040248f8; end: 10402498f;  */

uint FUN_1040248f8(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Entry: 104024990; end: 104024a57;  */

void FUN_104024990(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar4 = (uint)uVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + uVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x02';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar3) = 2;
      _bzero(param_1,uVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Entry: 104024a58; end: 104024a6b;  */

void FUN_104024a58(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110736c78;
  if (lRam0000000113049a08 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000113049a08 = param_1;
  }
  return;
}



/* Entry: 104024a6c; end: 104024aaf;  */

void FUN_104024a6c(long param_1,long *param_2,long param_3)

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



/* Entry: 104024ab0; end: 104024afb;  */

undefined8 FUN_104024ab0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_104024afc(param_1,param_2);
  return unaff_x20;
}



/* Entry: 104024afc; end: 104024b9f;  */

void FUN_104024afc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_104023adc();
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  *(undefined **)(unaff_x20 + 0x28) = puVar4;
  puVar3 = puVar4;
  func_0x0001003d8468();
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(unaff_x20 + 0x38) = puVar3;
  *(undefined **)(unaff_x20 + 0x40) = puVar2;
  puVar3 = puVar4;
  func_0x0001003d21d8();
  *(undefined **)(unaff_x20 + 0x48) = puVar3;
  FUN_104023bf8();
  *(undefined **)(unaff_x20 + 0x50) = puVar4;
  *(undefined **)(unaff_x20 + 0x58) = puVar2;
  *(undefined **)(unaff_x20 + 0x60) = puVar2;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 104024ba0; end: 104024d13;  */

ulong FUN_104024ba0(uint param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_b0 [16];
  undefined8 uStack_60;
  byte bStack_58;
  byte bStack_57;
  
  uVar1 = param_2;
  _swift_getObjectType();
  uVar3 = param_3;
  (**(code **)(param_3 + 8))();
  uVar2 = 0x113049a28;
  func_0x0001000285a8(0x113049a28,&UNK_10dcc4d10);
  func_0x000100087bd4(&uStack_60,0x104028468,auStack_b0,uVar2);
  if ((param_1 >> 8 & 1) != 0) {
    FUN_104025650(5,uStack_60,uVar1,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    goto LAB_104024cdc;
  }
  if ((bStack_58 & 1) == 0) {
    if ((bStack_57 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar3);
      uVar3 = (ulong)(param_1 & 0xff);
      func_0x000104025b00(uVar3,param_2,param_3,uStack_60);
      goto LAB_104024cdc;
    }
LAB_104024c80:
    FUN_104025650(0,uStack_60,uVar1,uVar3);
  }
  else if (bStack_57 != 0) goto LAB_104024c80;
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = (ulong)(param_1 & 0xff);
  FUN_1040257f0(uVar3,param_2,param_3,uStack_60);
LAB_104024cdc:
  func_0x0001040284a4();
  func_0x0001000c2068();
  _swift_release(uStack_60);
  return uVar3;
}



/* Entry: 104024d14; end: 10402515b;  */

void FUN_104024d14(long *param_1,long param_2,long param_3,ulong param_4,byte param_5,uint param_6,
                  undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_2 + 0x38,auStack_78,0x20,0);
  lVar11 = *(long *)(param_2 + 0x38);
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar9 = param_3;
    uVar5 = param_4;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      bVar2 = *(byte *)(*(long *)(lVar11 + 0x38) + lVar9);
      _swift_bridgeObjectRelease(lVar11);
      goto LAB_104024db4;
    }
    _swift_bridgeObjectRelease(lVar11);
  }
  bVar2 = 2;
LAB_104024db4:
  _swift_endAccess(auStack_78);
  _swift_beginAccess(param_2 + 0x38,auStack_78,0x21,0);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  _swift_isUniquelyReferenced_nonNull_native(uVar3);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0x8000000000000000;
  func_0x000101752900(param_5 & 1,param_3,param_4,uVar3);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  _swift_endAccess(auStack_78);
  _swift_beginAccess(param_2 + 0x20,auStack_78,0x20,0);
  lVar11 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar11);
    lVar9 = param_3;
    uVar5 = param_4;
    func_0x000100029284();
    if ((uVar5 & 1) != 0) {
      plVar1 = (long *)(*(long *)(lVar11 + 0x38) + lVar9 * 0x20);
      lVar9 = *plVar1;
      lVar12 = plVar1[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_retain(lVar9);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(lVar11);
      _swift_retain(lVar9);
      _swift_unknownObjectRelease(lVar12);
      if ((param_6 & 0xff) == 1) {
        uVar3 = 0x101;
        if ((param_6 & 0x100) == 0) {
          uVar3 = 1;
        }
        _swift_unknownObjectRetain(param_7);
      }
      else {
        uVar3 = 0;
        param_7 = 0;
        param_8 = 0;
      }
      _swift_beginAccess(param_2 + 0x20,auStack_78,0x21,0);
      _swift_unknownObjectRetain(param_7);
      uVar7 = *(undefined8 *)(param_2 + 0x20);
      _swift_retain(lVar9);
      _swift_bridgeObjectRetain(param_4);
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      uVar8 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
      FUN_10402bcf4(lVar9,uVar3,param_7,param_8,param_3,param_4,uVar7);
      _swift_bridgeObjectRelease(param_4);
      *(undefined8 *)(param_2 + 0x20) = uVar8;
      _swift_endAccess(auStack_78);
      FUN_10402515c(param_3,param_4);
      _swift_unknownObjectRelease(param_7);
      _swift_release(lVar9);
      *param_1 = lVar9;
      *(undefined1 *)(param_1 + 1) = 0;
      if (bVar2 == 2) {
        param_5 = 1;
      }
      else {
        param_5 = param_5 ^ bVar2;
      }
      *(byte *)((long)param_1 + 9) = param_5 & 1;
      return;
    }
    _swift_bridgeObjectRelease(lVar11);
  }
  _swift_endAccess(auStack_78);
  auStack_78[0] = 0;
  func_0x0001000285a8(0x113049b40,&UNK_10dcc4dd8);
  _swift_allocObject();
  puVar4 = auStack_78;
  func_0x00010042e6a0();
  if ((param_6 & 0xff) == 1) {
    uVar3 = 0x101;
    if ((param_6 & 0x100) == 0) {
      uVar3 = 1;
    }
    _swift_unknownObjectRetain(param_7);
  }
  else {
    uVar3 = 0;
    param_7 = 0;
    param_8 = 0;
  }
  _swift_beginAccess(param_2 + 0x20,auStack_78,0x21,0);
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(puVar4);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  _swift_isUniquelyReferenced_nonNull_native(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = 0x8000000000000000;
  FUN_10402bcf4(puVar4,uVar3,param_7,param_8,param_3,param_4,uVar7);
  _swift_bridgeObjectRelease(param_4);
  *(undefined8 *)(param_2 + 0x20) = uVar8;
  _swift_endAccess(auStack_78);
  _swift_beginAccess(param_2 + 0x28,auStack_78,0x21,0);
  uVar10 = *(ulong *)(param_2 + 0x28);
  _swift_bridgeObjectRetain(param_4);
  uVar5 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(param_2 + 0x28) = uVar10;
  uVar6 = uVar10;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    func_0x0001000d182c(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10);
    *(ulong *)(param_2 + 0x28) = uVar6;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  uVar10 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
    uVar10 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x0001000d182c(uVar10,uVar5 + 1,1,uVar6);
  }
  *(ulong *)(uVar10 + 0x10) = uVar5 + 1;
  lVar11 = uVar10 + uVar5 * 0x10;
  *(long *)(lVar11 + 0x20) = param_3;
  *(ulong *)(lVar11 + 0x28) = param_4;
  *(ulong *)(param_2 + 0x28) = uVar10;
  _swift_endAccess(auStack_78);
  FUN_1040252c8();
  *param_1 = (long)puVar4;
  *(undefined2 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10402515c; end: 1040252c7;  */

void FUN_10402515c(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar3 = auStack_70;
  _swift_beginAccess(unaff_x20 + 0x28,auStack_58,0,0);
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x28) + 0x10);
  if (lVar4 != 0) {
    lVar6 = 0;
    plVar7 = (long *)(*(long *)(unaff_x20 + 0x28) + 0x28);
    do {
      uVar1 = plVar7[-1];
      if ((uVar1 == param_1 && *plVar7 == param_2) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar1,*plVar7,param_1,param_2,0), (uVar1 & 1) != 0)) {
        _swift_beginAccess(unaff_x20 + 0x28,auStack_70,0x21,0);
        func_0x00010266c7f4(lVar6);
        _swift_endAccess(auStack_70);
        _swift_bridgeObjectRelease(puVar3);
        _swift_beginAccess(unaff_x20 + 0x28,auStack_70,0x21,0);
        uVar5 = *(ulong *)(unaff_x20 + 0x28);
        _swift_bridgeObjectRetain(param_2);
        uVar1 = uVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + 0x28) = uVar5;
        uVar2 = uVar5;
        if ((uVar1 & 1) == 0) {
          uVar2 = 0;
          func_0x0001000d182c(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
          *(ulong *)(unaff_x20 + 0x28) = uVar2;
        }
        uVar1 = *(ulong *)(uVar2 + 0x10);
        uVar5 = uVar2;
        if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
          uVar5 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
          func_0x0001000d182c(uVar5,uVar1 + 1,1,uVar2);
        }
        *(ulong *)(uVar5 + 0x10) = uVar1 + 1;
        lVar4 = uVar5 + uVar1 * 0x10;
        *(ulong *)(lVar4 + 0x20) = param_1;
        *(long *)(lVar4 + 0x28) = param_2;
        *(ulong *)(unaff_x20 + 0x28) = uVar5;
        _swift_endAccess(auStack_70);
        return;
      }
      plVar7 = plVar7 + 2;
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
  }
  return;
}



/* Entry: 1040252c8; end: 10402564f;  */

/* WARNING: Removing unreachable block (ram,0x0001040255f8) */

void FUN_1040252c8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte abStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if (lVar3 < *(long *)(lVar10 + 0x10) && *(long *)(lVar10 + 0x10) != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        lVar10 = lVar10 + uVar14 * 0x10;
        lVar2 = *(long *)(lVar10 + 0x20);
        uVar4 = *(ulong *)(lVar10 + 0x28);
        _swift_beginAccess(unaff_x20 + 0x20,abStack_90,0x20,0);
        lVar10 = *(long *)(unaff_x20 + 0x20);
        lVar11 = *(long *)(lVar10 + 0x10);
        _swift_bridgeObjectRetain(uVar4);
        if (lVar11 == 0) break;
        _swift_bridgeObjectRetain(lVar10);
        lVar11 = lVar2;
        uVar6 = uVar4;
        func_0x000100029284();
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar10);
          break;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar11 * 0x20);
        uVar12 = *puVar1;
        uVar13 = puVar1[2];
        _swift_unknownObjectRetain(uVar13);
        _swift_retain(uVar12);
        _swift_endAccess(abStack_90);
        _swift_bridgeObjectRelease(lVar10);
        _swift_beginAccess(unaff_x20 + 0x50,abStack_90,0x20,0);
        lVar10 = *(long *)(unaff_x20 + 0x50);
        if (*(long *)(lVar10 + 0x10) == 0) {
LAB_104025414:
          _swift_endAccess(abStack_90);
          func_0x000104886d18(abStack_90);
          bVar5 = abStack_90[0];
        }
        else {
          _swift_bridgeObjectRetain(lVar10);
          lVar11 = lVar2;
          uVar6 = uVar4;
          func_0x000100029284();
          if ((uVar6 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar10);
            goto LAB_104025414;
          }
          bVar5 = *(byte *)(*(long *)(lVar10 + 0x38) + lVar11);
          _swift_endAccess(abStack_90);
          _swift_bridgeObjectRelease(lVar10);
        }
        if (5 < bVar5 || (1 << (ulong)(bVar5 & 0x1f) & 0x36U) == 0) {
          _swift_unknownObjectRelease(uVar13);
          _swift_release(uVar12);
          goto LAB_1040255ec;
        }
        pbVar7 = abStack_90;
        _swift_beginAccess(unaff_x20 + 0x28,pbVar7,0x21,0);
        func_0x00010266c7f4(uVar14);
        _swift_endAccess(abStack_90);
        _swift_bridgeObjectRelease(pbVar7);
        uVar8 = 0x21;
        uVar9 = 0;
        _swift_beginAccess(unaff_x20 + 0x20,abStack_90,0x21,0);
        lVar10 = lVar2;
        uVar6 = uVar4;
        FUN_10402bb38(lVar2,uVar4);
        _swift_endAccess(abStack_90);
        FUN_104028584(lVar10,uVar6,uVar8,uVar9);
        _swift_beginAccess(unaff_x20 + 0x40,abStack_90,0x21,0);
        uVar6 = uVar4;
        func_0x0001010af1e4(lVar2,uVar4);
        _swift_endAccess(abStack_90);
        _swift_bridgeObjectRelease(uVar6);
        _swift_beginAccess(unaff_x20 + 0x38,abStack_90,0x21,0);
        func_0x00010402ba7c(lVar2,uVar4);
        _swift_endAccess(abStack_90);
        _swift_beginAccess(unaff_x20 + 0x48,abStack_90,0x21,0);
        func_0x000101fb034c(lVar2,uVar4);
        _swift_endAccess(abStack_90);
        _swift_beginAccess(unaff_x20 + 0x50,abStack_90,0x21,0);
        func_0x00010402b9c0(lVar2,uVar4);
        _swift_endAccess(abStack_90);
        _swift_bridgeObjectRelease(uVar4);
        _swift_unknownObjectRelease(uVar13);
        _swift_release(uVar12);
        lVar10 = *(long *)(unaff_x20 + 0x28);
        if ((long)*(ulong *)(lVar10 + 0x10) <= lVar3) {
          return;
        }
        if (*(ulong *)(lVar10 + 0x10) <= uVar14) {
          return;
        }
      }
      _swift_endAccess(abStack_90);
LAB_1040255ec:
      _swift_bridgeObjectRelease(uVar4);
      uVar14 = uVar14 + 1;
      lVar10 = *(long *)(unaff_x20 + 0x28);
    } while (lVar3 < (long)*(ulong *)(lVar10 + 0x10) && uVar14 < *(ulong *)(lVar10 + 0x10));
  }
  return;
}



/* Entry: 104025650; end: 1040257ef;  */

void FUN_104025650(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_b0 [16];
  char acStack_61 [15];
  char cStack_52;
  byte bStack_51;
  
  bStack_51 = param_1;
  if (param_1 == 5) {
    param_1 = 5;
  }
  else {
    func_0x000100087bd4(&cStack_52,FUN_1040289d0,auStack_b0,PTR___sSbN_11034dd40);
    if (cStack_52 == '\x01') {
      param_1 = 5;
      bStack_51 = 5;
    }
  }
  cStack_52 = '\0';
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar2 != 0) {
    if (lRam0000000113049dd0 != -1) {
      _swift_once(0x113049dd0,FUN_10402f988);
    }
    uVar1 = uRam0000000113049dd8;
    _swift_retain(uRam0000000113049dd8);
    func_0x000100075034(acStack_61,0x104028ac4,auStack_b0,PTR___sSbN_11034dd40);
    _swift_release(uVar1);
    cStack_52 = acStack_61[0];
    if (((param_1 | 4) != 5) && (acStack_61[0] != '\0')) {
      bStack_51 = 1;
    }
  }
  func_0x000100087bd4(acStack_61,0x1040289ec,auStack_b0,PTR___sSbN_11034dd40);
  if (acStack_61[0] == '\x01') {
    FUN_104027f24(param_2,param_3,param_4);
  }
  return;
}



/* Entry: 1040257f0; end: 104025ccf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1040257f0(uint param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  ulong uVar16;
  byte bStack_61;
  
  uVar4 = param_2;
  _swift_getObjectType();
  uVar5 = uVar4;
  lVar12 = param_3;
  (**(code **)(param_3 + 8))();
  lVar14 = *(long *)(unaff_x20 + 0x10);
  iVar3 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  lVar2 = _DAT_113049ea8;
  if ((iVar3 != 0) && (uVar16 = *(ulong *)(lVar14 + _DAT_113049ea8), uVar16 != 0)) {
    FUN_104031a40();
    uVar6 = uVar16;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if ((uVar6 != 0) && (*(char *)(uVar6 + _DAT_113049df8) == '\x01')) {
      uVar13 = *(undefined8 *)(uVar6 + _DAT_113049e08);
      _swift_retain(uVar13);
      uVar7 = 0x112dc3dc8;
      func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
      func_0x000100075034(&bStack_61,0x10403201c,0,uVar7);
      _swift_release(uVar13);
      _swift_unknownObjectRelease(uVar16);
      if ((((bStack_61 != 2) && ((bStack_61 & 1) == 0)) || ((param_1 >> 8 & 1) != 0)) ||
         (uVar16 = *(ulong *)(lVar14 + lVar2), uVar16 == 0)) goto LAB_104025920;
      uVar6 = uVar16;
      _swift_unknownObjectRetain();
      _swift_dynamicCastClass();
      if (uVar6 != 0) {
        _swift_bridgeObjectRelease(lVar12);
        uVar1 = param_1 & 0xff;
        uVar8 = uVar6;
        FUN_104026b8c(uVar6,uVar1,param_2,param_3,param_4);
        if ((uVar8 & 1) != 0) {
          FUN_104026db4(uVar1,param_2,param_3,uVar6,param_4);
          _swift_unknownObjectRelease(uVar16);
          return;
        }
        puVar9 = &UNK_110736cd8;
        _swift_allocObject(&UNK_110736cd8,0x18,7);
        _swift_weakInit(puVar9 + 0x10,unaff_x20);
        if (uVar1 == 1) {
          puVar10 = &UNK_110736e58;
          _swift_allocObject(&UNK_110736e58,0x48,7);
          *(undefined **)(puVar10 + 0x10) = puVar9;
          puVar10[0x18] = 1;
          *(undefined2 *)(puVar10 + 0x20) = 1;
          *(undefined8 *)(puVar10 + 0x28) = param_2;
          *(long *)(puVar10 + 0x30) = param_3;
          *(ulong *)(puVar10 + 0x38) = uVar6;
          *(undefined8 *)(puVar10 + 0x40) = param_4;
          pcVar15 = *(code **)(param_3 + 0x18);
          _swift_unknownObjectRetain(uVar16);
          _swift_retain(param_4);
          _swift_unknownObjectRetain(param_2);
          _swift_retain(puVar9);
          pcVar11 = FUN_104028ad8;
        }
        else {
          puVar10 = &UNK_110736e80;
          _swift_allocObject(&UNK_110736e80,0x40,7);
          *(undefined **)(puVar10 + 0x10) = puVar9;
          *(undefined8 *)(puVar10 + 0x18) = param_4;
          puVar10[0x20] = (char)param_1;
          puVar10[0x21] = 0;
          *(undefined8 *)(puVar10 + 0x28) = param_2;
          *(long *)(puVar10 + 0x30) = param_3;
          *(ulong *)(puVar10 + 0x38) = uVar6;
          pcVar15 = *(code **)(param_3 + 0x10);
          _swift_unknownObjectRetain(uVar16);
          _swift_retain(puVar9);
          _swift_retain(param_4);
          _swift_unknownObjectRetain(param_2);
          pcVar11 = FUN_104028ad8;
        }
        (*pcVar15)(pcVar11,puVar10,uVar4,param_3);
        _swift_unknownObjectRelease(uVar16);
        _swift_release(puVar9);
        _swift_release(puVar10);
        return;
      }
    }
    _swift_unknownObjectRelease(uVar16);
  }
LAB_104025920:
  FUN_104025650(5,param_4,uVar5,lVar12);
  _swift_bridgeObjectRelease(lVar12);
  return;
}



/* Entry: 104025cd0; end: 104025ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104025cd0(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong auStack_90 [2];
  long lStack_58;
  
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113049ea8);
  if (lVar6 == 0) {
    return;
  }
  FUN_104031a40(0);
  lVar4 = lVar6;
  _swift_unknownObjectRetain();
  _swift_dynamicCastClass();
  if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
    return;
  }
  if (lRam0000000113049dd0 != -1) {
    _swift_once(0x113049dd0,FUN_10402f988);
  }
  uVar3 = uRam0000000113049dd8;
  _swift_retain(uRam0000000113049dd8);
  func_0x000100075034(&lStack_58,0x1040284e4,auStack_90,PTR___sSiN_11034deb0);
  _swift_release(uVar3);
  uVar3 = 0x113049a38;
  func_0x0001000285a8(0x113049a38,&UNK_10dcc4d18);
  func_0x000100087bd4(&lStack_58,0x1040284fc,auStack_90,uVar3);
  if (lStack_58 == 0) goto LAB_104025e78;
  uVar5 = param_1;
  uVar3 = param_2;
  func_0x00010402fb34();
  if (((uint)uVar3 & 0xff) == 1) {
    lVar4 = *(long *)(lVar4 + _DAT_113049de0);
    uVar5 = param_1;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    func_0x000107c4d9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar4 != 0) {
      uVar5 = *(ulong *)(lVar4 + 0x10);
      _swift_release(lVar4);
      goto LAB_104025e40;
    }
  }
  else {
LAB_104025e40:
    if (2 < uVar5) {
      auStack_90[0] = uVar5;
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110737450,auStack_90,&UNK_110737450,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x104025ef8);
      (*pcVar1)();
    }
    FUN_104025650(0x30105 >> (ulong)((uint)((uVar5 & 0x1fffff) << 3) & 0x1f),lStack_58,param_1,
                  param_2);
  }
  _swift_release(lStack_58);
LAB_104025e78:
  _swift_unknownObjectRelease(lVar6);
  return;
}



/* Entry: 104025ef8; end: 104025fe3;  */

void FUN_104025ef8(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x20,auStack_68,0x20,0);
  lVar5 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    func_0x000100029284();
    if ((param_4 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_3 * 0x20);
      uVar6 = *puVar1;
      uVar3 = puVar1[1];
      uVar2 = puVar1[2];
      uVar4 = puVar1[3];
      _swift_unknownObjectRetain(uVar2);
      _swift_retain_n(uVar6,2);
      _swift_endAccess(auStack_68);
      _swift_bridgeObjectRelease(lVar5);
      FUN_104028584(uVar6,uVar3,uVar2,uVar4);
      goto LAB_104025fc0;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_endAccess(auStack_68);
  uVar6 = 0;
LAB_104025fc0:
  *param_1 = uVar6;
  return;
}



/* Entry: 104025fe4; end: 1040260ab;  */

/* WARNING: Removing unreachable block (ram,0x000104026050) */

bool FUN_104025fe4(void)

{
  bool bVar1;
  undefined8 uVar2;
  char acStack_80 [16];
  long alStack_50 [2];
  undefined8 uStack_40;
  
  uVar2 = 0x113049a40;
  func_0x0001000285a8(0x113049a40,&UNK_10dcc4d20);
  func_0x000100087bd4(alStack_50,0x104028518,acStack_80,uVar2);
  if (alStack_50[0] == 0) {
    bVar1 = false;
  }
  else {
    func_0x000104886d18(acStack_80);
    _swift_release(alStack_50[0]);
    _swift_unknownObjectRelease(uStack_40);
    bVar1 = acStack_80[0] == '\x03' || acStack_80[0] == '\0';
  }
  return bVar1;
}



/* Entry: 1040260ac; end: 1040261ab;  */

/* WARNING: Removing unreachable block (ram,0x000104026128) */

undefined1 FUN_1040260ac(void)

{
  undefined8 uVar1;
  byte abStack_90 [16];
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_50;
  
  uVar1 = 0x113049a40;
  func_0x0001000285a8(0x113049a40,&UNK_10dcc4d20);
  func_0x000100087bd4(&uStack_60,0x104028ab0,abStack_90,uVar1);
  if (CONCAT71(uStack_5f,uStack_60) == 0) {
    func_0x000100087bd4(&uStack_60,0x104028534,abStack_90,PTR___sSbN_11034dd40);
  }
  else {
    func_0x000104886d18(abStack_90);
    _swift_release(CONCAT71(uStack_5f,uStack_60));
    _swift_unknownObjectRelease(uStack_50);
    uStack_60 = (abStack_90[0] & 0xfb) != 1;
  }
  return uStack_60;
}



/* Entry: 1040261ac; end: 104026237;  */

void FUN_1040261ac(byte *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x58,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  _swift_bridgeObjectRetain(uVar1);
  func_0x0001000f66f0(param_3,param_4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = (byte)param_3 & 1;
  return;
}



/* Entry: 104026238; end: 10402631f;  */

void FUN_104026238(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x20,auStack_68,0x20,0);
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar3 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 0x20);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      uVar4 = puVar1[2];
      uVar6 = puVar1[3];
      _swift_unknownObjectRetain(uVar4);
      _swift_retain(uVar3);
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 104026320; end: 104026437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104026320(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if ((iVar1 != 0) && (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_113049ea8), lVar4 != 0))
  {
    FUN_104031a40(0);
    lVar2 = lVar4;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if ((lVar2 == 0) || (uVar3 = param_2, func_0x00010402fb34(param_1), ((uint)uVar3 & 0xff) != 1))
    {
      _swift_unknownObjectRelease(lVar4);
    }
    else {
      if (lRam0000000113049de8 != -1) {
        _swift_once(0x113049de8,0x10402f994);
      }
      uVar3 = uRam0000000113049df0;
      uStack_50 = param_1;
      uStack_48 = param_2;
      _swift_retain(uRam0000000113049df0);
      func_0x000100075034(&uStack_31,0x104028550,auStack_60,PTR___sSbN_11034dd40);
      _swift_release(uVar3);
      _swift_unknownObjectRelease(lVar4);
    }
  }
  return;
}



/* Entry: 104026438; end: 104026873;  */

/* WARNING: Removing unreachable block (ram,0x0001040265b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104026438(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  byte abStack_d0 [16];
  char cStack_88;
  undefined7 uStack_87;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  iVar2 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  lVar7 = _DAT_113049ea8;
  if (iVar2 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar10 + _DAT_113049ea8);
  if (lVar6 == 0) {
    return;
  }
  FUN_104031a40(0);
  lVar9 = lVar6;
  _swift_unknownObjectRetain();
  _swift_dynamicCastClass();
  if ((lVar9 == 0) || ((*(byte *)(lVar9 + _DAT_113049df8) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar6);
    return;
  }
  uVar8 = *(undefined8 *)(lVar9 + _DAT_113049e08);
  _swift_retain(uVar8);
  uVar3 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  func_0x000100075034(abStack_d0,0x10403201c,0,uVar3);
  _swift_release(uVar8);
  _swift_unknownObjectRelease(lVar6);
  if ((abStack_d0[0] != 2) && ((abStack_d0[0] & 1) == 0)) {
    return;
  }
  lVar7 = *(long *)(lVar10 + lVar7);
  if (lVar7 == 0) {
    return;
  }
  lVar10 = lVar7;
  _swift_unknownObjectRetain();
  _swift_dynamicCastClass();
  if (lVar10 == 0) goto LAB_10402672c;
  uVar3 = 0x113049a40;
  func_0x0001000285a8(0x113049a40,&UNK_10dcc4d20);
  func_0x000100087bd4(&cStack_88,0x104028568,abStack_d0,uVar3);
  lVar6 = CONCAT71(uStack_87,cStack_88);
  if (lVar6 == 0) goto LAB_10402672c;
  _swift_unknownObjectRetain(lStack_78);
  _swift_retain(lVar6);
  func_0x000104886d18(abStack_d0);
  if (abStack_d0[0] == 5) {
    _swift_unknownObjectRelease(lStack_78);
    _swift_release(lVar6);
LAB_1040266d0:
    FUN_104028584(lVar6,uStack_80,lStack_78,lStack_70);
  }
  else {
    if (lStack_78 == 0) {
      FUN_104028584(lVar6,uStack_80,0,lStack_70);
    }
    else {
      if ((uStack_80 & 0xff) == 1) {
        _swift_unknownObjectRetain(lStack_78);
        func_0x000100087bd4(&cStack_88,FUN_1040285b0,abStack_d0,PTR___sSbN_11034dd40);
        if (cStack_88 != '\x01') {
          lVar9 = *(long *)(lVar10 + _DAT_113049de0);
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
          func_0x000107c4d9c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_1);
          if ((lVar9 == 0) ||
             (cVar1 = *(char *)(lVar9 + 0x18), _swift_release(lVar9), cVar1 != '\x01')) {
            func_0x000100087bd4(&cStack_88,0x1040285cc,abStack_d0,PTR___sSbN_11034dd40);
            lVar9 = lStack_78;
            _swift_getObjectType();
            puVar4 = &UNK_110736cd8;
            _swift_allocObject(&UNK_110736cd8,0x18,7);
            _swift_weakInit(puVar4 + 0x10);
            puVar5 = &UNK_110736d00;
            _swift_allocObject(&UNK_110736d00,0x48,7);
            *(undefined **)(puVar5 + 0x10) = puVar4;
            puVar5[0x18] = cStack_88;
            puVar5[0x20] = (char)uStack_80;
            puVar5[0x21] = (byte)(uStack_80 >> 8) & 1;
            *(long *)(puVar5 + 0x28) = lStack_78;
            *(long *)(puVar5 + 0x30) = lStack_70;
            *(long *)(puVar5 + 0x38) = lVar10;
            *(long *)(puVar5 + 0x40) = lVar6;
            pcVar11 = *(code **)(lStack_70 + 0x18);
            _swift_unknownObjectRetain(lVar7);
            _swift_unknownObjectRetain(lStack_78);
            _swift_retain(puVar4);
            _swift_retain(lVar6);
            (*pcVar11)(FUN_1040285f0,puVar5,lVar9,lStack_70);
            _swift_release(lVar6);
            _swift_unknownObjectRelease_n(lStack_78,2);
            _swift_release(puVar4);
            _swift_release(puVar5);
            FUN_104028584(lVar6,uStack_80,lStack_78,lStack_70);
            goto LAB_10402672c;
          }
        }
        _swift_release(lVar6);
        _swift_unknownObjectRelease_n(lStack_78,2);
        goto LAB_1040266d0;
      }
      _swift_unknownObjectRetain(lStack_78);
      FUN_104028584(lVar6,uStack_80,lStack_78,lStack_70);
      _swift_unknownObjectRelease_n(lStack_78,2);
    }
    _swift_release(lVar6);
  }
LAB_10402672c:
  _swift_unknownObjectRelease(lVar7);
  return;
}



/* Entry: 104026874; end: 104026967;  */

void FUN_104026874(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  FUN_10402515c(param_3,param_4);
  _swift_beginAccess(param_2 + 0x20,auStack_68,0x20,0);
  lVar2 = *(long *)(param_2 + 0x20);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar2);
    func_0x000100029284();
    if ((param_4 & 1) == 0) {
      uVar3 = 0;
      uVar5 = 0;
      uVar4 = 0;
      uVar6 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar2 + 0x38) + param_3 * 0x20);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      uVar4 = puVar1[2];
      uVar6 = puVar1[3];
      _swift_unknownObjectRetain(uVar4);
      _swift_retain(uVar3);
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  *param_1 = uVar3;
  param_1[1] = uVar5;
  param_1[2] = uVar4;
  param_1[3] = uVar6;
  _swift_endAccess(auStack_68);
  return;
}



/* Entry: 104026968; end: 1040269f3;  */

void FUN_104026968(byte *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x40,auStack_58,0,0);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(uVar1);
  func_0x0001000f66f0(param_3,param_4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = (byte)param_3 & 1;
  return;
}



/* Entry: 1040269f4; end: 104026a83;  */

void FUN_1040269f4(byte *param_1)

{
  byte bVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  long unaff_x21;
  char cStack_31;
  
  func_0x000104886d18(&cStack_31);
  if (unaff_x21 == 0) {
    if (cStack_31 == '\x04') {
      FUN_104026a84(in_x5,in_x6);
      bVar1 = (byte)in_x5;
    }
    else {
      bVar1 = 0;
    }
  }
  else {
    _swift_errorRelease();
    bVar1 = 0;
  }
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 104026a84; end: 104026b8b;  */

undefined8 FUN_104026a84(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x48,auStack_58,0x20,0);
  lVar4 = *(long *)(unaff_x20 + 0x48);
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar4);
    lVar5 = param_1;
    uVar2 = param_2;
    func_0x000100029284();
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(*(long *)(lVar4 + 0x38) + lVar5 * 8);
      _swift_endAccess(auStack_58);
      _swift_bridgeObjectRelease(lVar4);
      if (2 < lVar5) {
        return 0;
      }
      goto LAB_104026b1c;
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_endAccess(auStack_58);
  lVar5 = 0;
LAB_104026b1c:
  _swift_beginAccess(unaff_x20 + 0x48,auStack_58,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0x8000000000000000;
  func_0x000101687ce0(lVar5 + 1,param_1,param_2,uVar1);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  _swift_endAccess(auStack_58);
  return 1;
}



/* Entry: 104026b8c; end: 104026d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104026b8c(long param_1,uint param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lStack_68;
  
  lVar1 = param_3;
  _swift_getObjectType();
  pcVar7 = *(code **)(param_4 + 8);
  lVar5 = lVar1;
  lVar2 = param_4;
  (*pcVar7)();
  lVar4 = lVar5;
  lVar3 = lVar2;
  func_0x00010402fb34();
  if (((uint)lVar3 & 0xff) == 1) {
    lVar4 = *(long *)(param_1 + _DAT_113049de0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar5,lVar2);
    func_0x000107c4d9c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _swift_bridgeObjectRelease(lVar2);
    if (lVar4 == 0) {
      return 0;
    }
    lVar5 = *(long *)(lVar4 + 0x10);
    _swift_release();
    lStack_68 = lVar5;
  }
  else {
    _swift_bridgeObjectRelease(lVar2);
    lStack_68 = lVar4;
  }
  if (lStack_68 == 0) {
    uVar6 = 5;
  }
  else if (lStack_68 == 2) {
    uVar6 = 3;
  }
  else {
    if (lStack_68 != 1) {
      __ss32_diagnoseUnexpectedEnumCaseValue4type03rawE0s5NeverOxm_q_tr0_lF
                (&UNK_110737450,&lStack_68,&UNK_110737450,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x104026d20);
      (*pcVar7)();
    }
    uVar6 = (ulong)(param_2 & 0x1ff);
    FUN_104026f98(uVar6,param_3,param_4,param_1);
  }
  (*pcVar7)(lVar1,param_4);
  FUN_104025650(uVar6,param_5,lVar1,param_4);
  _swift_bridgeObjectRelease(param_4);
  return 1;
}



/* Entry: 104026d20; end: 104026db3;  */

void FUN_104026d20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_58 [24];
  
  _swift_getObjectType(param_3);
  (**(code **)(param_4 + 8))();
  _swift_beginAccess(param_1 + 0x48,auStack_58,0x21,0);
  func_0x000101fb034c(param_3,param_4);
  _swift_endAccess(auStack_58);
  _swift_bridgeObjectRelease(param_4);
  return;
}



/* Entry: 104026db4; end: 104026edf;  */

/* WARNING: Removing unreachable block (ram,0x000104026df8) */

void FUN_104026db4(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  char cStack_51;
  
  func_0x000104886d18(&cStack_51);
  if (cStack_51 == '\x02') {
    uVar1 = param_2;
    _swift_getObjectType(param_2);
    puVar2 = &UNK_110736cd8;
    _swift_allocObject(&UNK_110736cd8,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    puVar3 = &UNK_110736ea8;
    _swift_allocObject(&UNK_110736ea8,0x48,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    puVar3[0x18] = 0;
    puVar3[0x20] = (char)param_1;
    puVar3[0x21] = (byte)((uint)param_1 >> 8) & 1;
    *(undefined8 *)(puVar3 + 0x28) = param_2;
    *(long *)(puVar3 + 0x30) = param_3;
    *(undefined8 *)(puVar3 + 0x38) = param_4;
    *(undefined8 *)(puVar3 + 0x40) = param_5;
    pcVar4 = *(code **)(param_3 + 0x18);
    _swift_retain(puVar2);
    _swift_unknownObjectRetain(param_2);
    _objc_retain(param_4);
    _swift_retain(param_5);
    (*pcVar4)(0x104028ae0,puVar3,uVar1,param_3);
    _swift_release(puVar2);
    _swift_release(puVar3);
  }
  return;
}



/* Entry: 104026ee0; end: 104026f97;  */

void FUN_104026ee0(byte *param_1)

{
  byte in_w3;
  long in_x4;
  long unaff_x21;
  char cStack_41;
  
  func_0x000104886d18(&cStack_41);
  if (unaff_x21 == 0) {
    if (cStack_41 == '\x04') {
      _swift_getObjectType();
      (**(code **)(in_x4 + 8))();
      FUN_104026a84();
      _swift_bridgeObjectRelease(in_x4);
      in_w3 = in_w3 & 1;
    }
    else {
      in_w3 = 0;
    }
  }
  else {
    _swift_errorRelease();
    in_w3 = 0;
  }
  *param_1 = in_w3;
  return;
}



/* Entry: 104026f98; end: 1040274ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104026f98(char param_1,undefined8 param_2,long param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_a0 [16];
  byte bStack_61;
  
  if (param_1 == '\x01') {
    _swift_getObjectType();
    pcVar4 = *(code **)(param_3 + 8);
    lVar3 = param_3;
    (*pcVar4)();
    if (lRam0000000113049dd0 != -1) {
      _swift_once(0x113049dd0,FUN_10402f988);
    }
    uVar2 = uRam0000000113049dd8;
    _swift_retain(uRam0000000113049dd8);
    func_0x000100075034(&bStack_61,FUN_1040288a4,auStack_a0,PTR___sSbN_11034dd40);
    _swift_release(uVar2);
    _swift_bridgeObjectRelease(lVar3);
    if (((bStack_61 & 1) == 0) &&
       (func_0x000100087bd4(&bStack_61,0x1040288bc,auStack_a0,PTR___sSbN_11034dd40),
       (bStack_61 & 1) == 0)) {
      (*pcVar4)(param_2,param_3);
      lVar3 = *(long *)(param_4 + _DAT_113049de0);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      func_0x000107c4d9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_2);
      _swift_bridgeObjectRelease(param_3);
      if ((lVar3 == 0) || (cVar1 = *(char *)(lVar3 + 0x18), _swift_release(lVar3), cVar1 != '\x01'))
      {
        return 2;
      }
    }
  }
  return 1;
}


