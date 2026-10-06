/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10401dc40; end: 10401dcb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401dc40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113048780) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113048788) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113048790) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10401dcb4; end: 10401dd13; -[_TtC31SpotUserSessionScopeGraphBridge39SpotUserSessionScopeGraphBridgeServices init] */

void FUN_10401dcb4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SpotUserSessionScopeGraphBridge.SpotUserSessionScopeGraphBridgeServices",0x47,"init()"
             ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401dce0);
  (*pcVar1)();
}



/* Entry: 10401dd14; end: 10401ddb7; -[_TtC31SpotUserSessionScopeGraphBridge39SpotUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401dd14(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113048788));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113048780));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113048790));
  return;
}



/* Entry: 10401ddb8; end: 10401ddef;  */

undefined1  [16] FUN_10401ddb8(void)

{
  return ZEXT816(0x110735ff8);
}



/* Entry: 10401ddf0; end: 10401de33; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_10401ddf0(undefined8 param_1)

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



/* Entry: 10401de34; end: 10401de67;  */

void FUN_10401de34(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10401de68; end: 10401deaf; -[SCSpotUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401de68(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130487e8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130487f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130487f8));
  return;
}



/* Entry: 10401deb0; end: 10401decf;  */

void FUN_10401deb0(void)

{
  _objc_opt_self(&PTR_PTR_11297e830);
  return;
}



/* Entry: 10401ded0; end: 10401df13; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint end] */

void FUN_10401ded0(undefined8 param_1)

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



/* Entry: 10401df14; end: 10401df47;  */

void FUN_10401df14(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10401df48; end: 10401df9f; -[SCSCSpotlightSnapDownloadingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401df48(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113048828);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113048830);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113048838));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113048840));
  return;
}



/* Entry: 10401dfa0; end: 10401dfbf;  */

void FUN_10401dfa0(void)

{
  _objc_opt_self(&PTR_PTR_11297e8f8);
  return;
}



/* Entry: 10401dfc0; end: 10401dfcb; -[SCSCContentBlockingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401dfc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048870;
  _swift_beginAccess(param_1 + _DAT_113048870,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10401dfcc; end: 10401dfd7; -[SCSCContentBlockingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401dfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048870;
  _swift_beginAccess(param_1 + _DAT_113048870,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10401dfd8; end: 10401dfe3; -[SCSCContentBlockingServicesSaberServiceProvider spotUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401dfd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048878;
  _swift_beginAccess(param_1 + _DAT_113048878,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10401dfe4; end: 10401e027;  */

void FUN_10401dfe4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10401e028; end: 10401e033; -[SCSCContentBlockingServicesSaberServiceProvider setSpotUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401e028(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048878;
  _swift_beginAccess(param_1 + _DAT_113048878,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10401e034; end: 10401e087;  */

void FUN_10401e034(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10401e088; end: 10401e29b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10401e088(void)

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
    func_0x000107c5b8a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010401da78();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113048780);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113048880);
      *(long *)(unaff_x20 + _DAT_113048880) = lVar4;
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
             "SpotUserSessionScopeGraphBridge/SCSCContentBlockingServicesSaberServiceProvider.swift"
             ,0x55,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401e1b4);
  (*pcVar1)();
}



/* Entry: 10401e29c; end: 10401e2cf; -[SCSCContentBlockingServicesSaberServiceProvider provide] */

void FUN_10401e29c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10401e088();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10401e2d0; end: 10401e303; -[SCSCContentBlockingServicesSaberServiceProvider __safeProvide] */

void FUN_10401e2d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010401e1b4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10401e304; end: 10401e347; -[SCSCContentBlockingServicesSaberServiceProvider end] */

void FUN_10401e304(undefined8 param_1)

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



/* Entry: 10401e348; end: 10401e4df;  */

void FUN_10401e348(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e214a0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1deb60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SpotUserSessionScopeGraphBridge/SCSCContentBlockingServicesSaberServiceProvider.swift"
                   ,0x55,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10401e4e0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c596c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10401e4e0; end: 10401e58b; -[SCSCContentBlockingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10401e4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10401e348(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10401e58c; end: 10401e5ff; -[SCSCContentBlockingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401e58c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113048870,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113048878,0);
  *(undefined8 *)(param_1 + _DAT_113048880) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10401e600; end: 10401e633;  */

void FUN_10401e600(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10401e634; end: 10401e67b; -[SCSCContentBlockingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401e634(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113048870);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113048878);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113048880));
  return;
}



/* Entry: 10401e67c; end: 10401e69b;  */

void FUN_10401e67c(void)

{
  _objc_opt_self(&PTR_PTR_1130488c8);
  return;
}



/* Entry: 10401e69c; end: 10401e6a7; -[SCSpotlightOperaServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401e69c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048930;
  _swift_beginAccess(param_1 + _DAT_113048930,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10401e6a8; end: 10401e6b3; -[SCSpotlightOperaServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401e6a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048930;
  _swift_beginAccess(param_1 + _DAT_113048930,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10401e6b4; end: 10401e6bf; -[SCSpotlightOperaServiceSaberServiceProvider spotUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401e6b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113048938;
  _swift_beginAccess(param_1 + _DAT_113048938,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10401e6c0; end: 10401e703;  */

void FUN_10401e6c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10401e704; end: 10401e70f; -[SCSpotlightOperaServiceSaberServiceProvider setSpotUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401e704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113048938;
  _swift_beginAccess(param_1 + _DAT_113048938,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10401e710; end: 10401e763;  */

void FUN_10401e710(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10401e764; end: 10401e977;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10401e764(void)

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
    func_0x000107c5b8a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010401dba4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113048790);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113048940);
      *(long *)(unaff_x20 + _DAT_113048940) = lVar4;
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
             "SpotUserSessionScopeGraphBridge/SCSpotlightOperaServiceSaberServiceProvider.swift",
             0x51,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401e890);
  (*pcVar1)();
}



/* Entry: 10401e978; end: 10401e9ab; -[SCSpotlightOperaServiceSaberServiceProvider provide] */

void FUN_10401e978(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10401e764();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10401e9ac; end: 10401e9df; -[SCSpotlightOperaServiceSaberServiceProvider __safeProvide] */

void FUN_10401e9ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010401e890();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10401e9e0; end: 10401ea23; -[SCSpotlightOperaServiceSaberServiceProvider end] */

void FUN_10401e9e0(undefined8 param_1)

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



/* Entry: 10401ea24; end: 10401ebbb;  */

void FUN_10401ea24(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e214a0)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1deb60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "SpotUserSessionScopeGraphBridge/SCSpotlightOperaServiceSaberServiceProvider.swift"
                   ,0x51,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10401ebbc);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c596c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10401ebbc; end: 10401ec67; -[SCSpotlightOperaServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_10401ebbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10401ea24(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10401ec68; end: 10401ecdb; -[SCSpotlightOperaServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ec68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113048930,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113048938,0);
  *(undefined8 *)(param_1 + _DAT_113048940) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10401ecdc; end: 10401ed0f;  */

void FUN_10401ecdc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10401ed10; end: 10401ed57; -[SCSpotlightOperaServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ed10(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113048930);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113048938);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113048940));
  return;
}



/* Entry: 10401ed58; end: 10401ed77;  */

void FUN_10401ed58(void)

{
  _objc_opt_self(&PTR_PTR_113048988);
  return;
}



/* Entry: 10401ed78; end: 10401ed87; -[_TtC23SCSpotlightOperaService21SpotlightOperaService operaLifecycleObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ed78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130489f0));
  return;
}



/* Entry: 10401ed88; end: 10401edeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ed88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130489f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130489f8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10401edec; end: 10401ee4b; -[_TtC23SCSpotlightOperaService21SpotlightOperaService init] */

void FUN_10401edec(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpotlightOperaService.SpotlightOperaService",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401ee18);
  (*pcVar1)();
}



/* Entry: 10401ee4c; end: 10401ee83; -[_TtC23SCSpotlightOperaService21SpotlightOperaService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ee4c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130489f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130489f8));
  return;
}



/* Entry: 10401ee84; end: 10401ee93; -[_TtC25SCContentBlockingServices25SCContentBlockingServices contentBlocker] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ee84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113048a28));
  return;
}



/* Entry: 10401ee94; end: 10401ef2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ee94(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113048a28) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10401ef2c; end: 10401ef8b; -[_TtC25SCContentBlockingServices25SCContentBlockingServices init] */

void FUN_10401ef2c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCContentBlockingServices.SCContentBlockingServices",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401ef58);
  (*pcVar1)();
}



/* Entry: 10401ef8c; end: 10401ef9b; -[_TtC25SCContentBlockingServices25SCContentBlockingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401ef8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113048a28));
  return;
}



/* Entry: 10401ef9c; end: 10401f11b;  */

void FUN_10401ef9c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x00010401efd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2,lVar1);
  return;
}



/* Entry: 10401f11c; end: 10401f133;  */

void FUN_10401f11c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 10401f134; end: 10401f16b;  */

void FUN_10401f134(undefined8 param_1)

{
  if (lRam0000000113048ab0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7e4198);
  return;
}



/* Entry: 10401f16c; end: 10401f1d3;  */

void FUN_10401f16c(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&lStack_28,param_1 + 0x10);
  }
  return;
}



/* Entry: 10401f1d4; end: 10401f1e3; -[_TtC34SCSpotlightSnapDownloadingServices34SCSpotlightSnapDownloadingServices spotlightSnapDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f1d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113048ae8));
  return;
}



/* Entry: 10401f1e4; end: 10401f22f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f1e4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113048ae8) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10401f230; end: 10401f28f; -[_TtC34SCSpotlightSnapDownloadingServices34SCSpotlightSnapDownloadingServices init] */

void FUN_10401f230(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSpotlightSnapDownloadingServices.SCSpotlightSnapDownloadingServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401f25c);
  (*pcVar1)();
}



/* Entry: 10401f290; end: 10401f29f; -[_TtC34SCSpotlightSnapDownloadingServices34SCSpotlightSnapDownloadingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f290(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113048ae8));
  return;
}



/* Entry: 10401f2a0; end: 10401f337; -[SCSpotlightSnapDownloadResult url] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f2a0(long param_1)

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
  (**(code **)(lVar4 + 0x10))(puVar3,param_1 + _DAT_113813088,lVar1);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10401f338; end: 10401f3cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10401f338(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  _objc_allocWithZone();
  lVar1 = _DAT_113813088;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar4 = *(long *)(lVar2 + -8);
  (**(code **)(lVar4 + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  (**(code **)(lVar4 + 8))(param_1,lVar2);
  return puVar3;
}



/* Entry: 10401f3d0; end: 10401f49b; -[SCSpotlightSnapDownloadResult initWithUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10401f3d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long lVar4;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  _swift_getObjectType();
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation3URLV36_unconditionallyBridgeFromObjectiveCyACSo5NSURLCSgFZ(lVar4,param_3);
  (**(code **)(lVar5 + 0x10))(param_1 + _DAT_113813088,lVar4,lVar2);
  plVar3 = &lStack_50;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(plVar3,PTR_s_init_1125d9248);
  (**(code **)(lVar5 + 8))(lVar4,lVar2);
  return plVar3;
}



/* Entry: 10401f49c; end: 10401f51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10401f49c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar1 = _DAT_113813088;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(unaff_x20 + lVar1,param_1,lVar2);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  FUN_10401f520(param_1);
  return puVar3;
}



/* Entry: 10401f520; end: 10401f55b;  */

undefined8 FUN_10401f520(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10401f134();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10401f55c; end: 10401f55f; -[SCSpotlightSnapDownloadResult copyWithZone:] */

void FUN_10401f55c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10401f560; end: 10401f5f7; -[SCSpotlightSnapDownloadResult description] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f560(long param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_10401f134();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = _DAT_113813088;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1 + lVar1,
             lVar2);
  FUN_10401f520(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10401f5f8; end: 10401f673; -[SCSpotlightSnapDownloadResult init] */

void FUN_10401f5f8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightSnapDownloadingServices/SCSpotlightSnapDownloadResultWrapper.swift",0x4d,2,
             0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401f640);
  (*pcVar1)();
}



/* Entry: 10401f674; end: 10401f6af; -[SCSpotlightSnapDownloadResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f674(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = _DAT_113813088;
  lVar2 = 0;
  __s10Foundation3URLVMa();
                    /* WARNING: Could not recover jumptable at 0x00010401f6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + lVar1,lVar2);
  return;
}



/* Entry: 10401f6b0; end: 10401f6b7;  */

void FUN_10401f6b0(void)

{
  if (lRam0000000113048b40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10e7e41fc);
  return;
}



/* Entry: 10401f6b8; end: 10401f6ef;  */

void FUN_10401f6b8(undefined8 param_1)

{
  if (lRam0000000113048b40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10e7e41fc);
  return;
}



/* Entry: 10401f6f0; end: 10401f75b;  */

void FUN_10401f6f0(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,1,&lStack_28,param_1 + 0x50);
  }
  return;
}



/* Entry: 10401f75c; end: 10401f7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10401f75c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a81688();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113048b50) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113048b58) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401f7e4);
  (*pcVar1)();
}



/* Entry: 10401f7e4; end: 10401f843; -[_TtC30StrUserSessionScopeGraphBridge45StrUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_10401f7e4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StrUserSessionScopeGraphBridge.StrUserSessionScopeGraphBridgeSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401f810);
  (*pcVar1)();
}



/* Entry: 10401f844; end: 10401f87b; -[_TtC30StrUserSessionScopeGraphBridge45StrUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f844(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113048b50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113048b58));
  return;
}



/* Entry: 10401f87c; end: 10401f8a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f87c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113048b58),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113048b50));
  return;
}



/* Entry: 10401f8a4; end: 10401f93f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10401f8a4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  _objc_allocWithZone();
  uVar3 = *(undefined8 *)(param_2 + _DAT_113048e48);
  *(undefined8 *)(unaff_x20 + _DAT_113048b88) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_113048b90) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain(uVar3);
  _objc_msgSendSuper2(auStack_40,puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  return puVar2;
}



/* Entry: 10401f940; end: 10401f99f; -[_TtC30StrUserSessionScopeGraphBridge46SCLegacyStoriesTooltipsServicesSaberEntryPoint init] */

void FUN_10401f940(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StrUserSessionScopeGraphBridge.SCLegacyStoriesTooltipsServicesSaberEntryPoint",0x4d,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401f96c);
  (*pcVar1)();
}



/* Entry: 10401f9a0; end: 10401fa33; -[_TtC30StrUserSessionScopeGraphBridge46SCLegacyStoriesTooltipsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401f9a0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113048b88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113048b90));
  return;
}



/* Entry: 10401fa34; end: 10401fa3b;  */

undefined8 FUN_10401fa34(void)

{
  return 0;
}



/* Entry: 10401fa3c; end: 10401fa9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10401fa3c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113048e40);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10401faa0; end: 10401faa7;  */

void FUN_10401faa0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10401faa8; end: 10401fb47;  */

void FUN_10401faa8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10401fb48; end: 10401fb67;  */

void FUN_10401fb48(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10401fb68; end: 10401fbcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10401fb68(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113048e50);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10401fbcc; end: 10401fbd3;  */

void FUN_10401fbcc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10401fbd4; end: 10401fc73;  */

void FUN_10401fbd4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10401fc74; end: 10401fc93;  */

void FUN_10401fc74(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10401fc94; end: 10401fcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10401fc94(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113048e58);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 10401fcf8; end: 10401fcff;  */

void FUN_10401fcf8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10401fd00; end: 10401fd9f;  */

void FUN_10401fd00(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10401fda0; end: 10401fdbf;  */

void FUN_10401fda0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 10401fdc0; end: 10401fe4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401fdc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113048e40) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113048e48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113048e50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113048e58) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10401fe4c; end: 10401feab; -[_TtC30StrUserSessionScopeGraphBridge38StrUserSessionScopeGraphBridgeServices init] */

void FUN_10401fe4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("StrUserSessionScopeGraphBridge.StrUserSessionScopeGraphBridgeServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10401fe78);
  (*pcVar1)();
}



/* Entry: 10401feac; end: 10401ff5f; -[_TtC30StrUserSessionScopeGraphBridge38StrUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10401feac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113048e48));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113048e40));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113048e50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113048e58));
  return;
}



/* Entry: 10401ff60; end: 10401ff97;  */

undefined1  [16] FUN_10401ff60(void)

{
  return ZEXT816(0x110736338);
}



/* Entry: 10401ff98; end: 10401ffdb; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_10401ff98(undefined8 param_1)

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



/* Entry: 10401ffdc; end: 10402000f;  */

void FUN_10401ffdc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104020010; end: 104020057; -[SCStrUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104020010(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113048eb0);
  _objc_release(*(undefined8 *)(param_1 + _DAT_113048eb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113048ec0));
  return;
}



/* Entry: 104020058; end: 104020077;  */

void FUN_104020058(void)

{
  _objc_opt_self(&PTR_PTR_11297efd8);
  return;
}


