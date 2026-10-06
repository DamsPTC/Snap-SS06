/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10406f520; end: 10406f567; -[SCSCThreadMonitoringServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406f520(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130536b0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130536b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130536c0));
  return;
}



/* Entry: 10406f568; end: 10406f587;  */

void FUN_10406f568(void)

{
  _objc_opt_self(&PTR_PTR_113053708);
  return;
}



/* Entry: 10406f588; end: 10406f593; -[SCSCUserTraceLoggerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406f588(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113053770;
  _swift_beginAccess(param_1 + _DAT_113053770,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406f594; end: 10406f59f; -[SCSCUserTraceLoggerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406f594(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113053770;
  _swift_beginAccess(param_1 + _DAT_113053770,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10406f5a0; end: 10406f5ab; -[SCSCUserTraceLoggerServicesSaberServiceProvider appinsSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406f5a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113053778;
  _swift_beginAccess(param_1 + _DAT_113053778,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406f5ac; end: 10406f5ef;  */

void FUN_10406f5ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10406f5f0; end: 10406f5fb; -[SCSCUserTraceLoggerServicesSaberServiceProvider setAppinsSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406f5f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113053778;
  _swift_beginAccess(param_1 + _DAT_113053778,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10406f5fc; end: 10406f64f;  */

void FUN_10406f5fc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10406f650; end: 10406f863;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10406f650(void)

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
    func_0x00010bf07360();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x00010406c63c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113053198);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113053780);
      *(long *)(unaff_x20 + _DAT_113053780) = lVar4;
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
             "AppinsSystemScopeGraphBridge/SCSCUserTraceLoggerServicesSaberServiceProvider.swift",
             0x52,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10406f77c);
  (*pcVar1)();
}



/* Entry: 10406f864; end: 10406f897; -[SCSCUserTraceLoggerServicesSaberServiceProvider provide] */

void FUN_10406f864(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_10406f650();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10406f898; end: 10406f8cb; -[SCSCUserTraceLoggerServicesSaberServiceProvider __safeProvide] */

void FUN_10406f898(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010406f77c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10406f8cc; end: 10406f90f; -[SCSCUserTraceLoggerServicesSaberServiceProvider end] */

void FUN_10406f8cc(undefined8 param_1)

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



/* Entry: 10406f910; end: 10406faa7;  */

void FUN_10406f910(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e1adf0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000024,0x800000010f1e5210,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "AppinsSystemScopeGraphBridge/SCSCUserTraceLoggerServicesSaberServiceProvider.swift"
                   ,0x52,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10406faa8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5281c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10406faa8; end: 10406fb53; -[SCSCUserTraceLoggerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_10406faa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10406f910(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10406fb54; end: 10406fbc7; -[SCSCUserTraceLoggerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406fb54(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113053770,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113053778,0);
  *(undefined8 *)(param_1 + _DAT_113053780) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10406fbc8; end: 10406fbfb;  */

void FUN_10406fbc8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10406fbfc; end: 10406fc43; -[SCSCUserTraceLoggerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10406fbfc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113053770);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113053778);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113053780));
  return;
}



/* Entry: 10406fc44; end: 10406fc63;  */

void FUN_10406fc44(void)

{
  _objc_opt_self(&PTR_PTR_1130537c8);
  return;
}



/* Entry: 10406fc64; end: 10406fc97; +[SCShakeProjectNames activity_feed] */

void FUN_10406fc64(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7974697669746341,0xed00006465654620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fc98; end: 10406fca3;  */

undefined * FUN_10406fc98(void)

{
  return &UNK_10dccbc60;
}



/* Entry: 10406fca4; end: 10406fcc3; +[SCShakeProjectNames ads] */

void FUN_10406fca4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x736441,0xe300000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fcc4; end: 10406fcf7; +[SCShakeProjectNames app_extension] */

void FUN_10406fcc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6574784520707041,0xed00006e6f69736e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fcf8; end: 10406fd2b; +[SCShakeProjectNames app_badge] */

void FUN_10406fcf8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6f634920707041,0xee00656764614220);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fd2c; end: 10406fd5f; +[SCShakeProjectNames app_navigation] */

void FUN_10406fd2c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6976614e20707041,0xee006e6f69746167);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fd60; end: 10406fd93; +[SCShakeProjectNames auth] */

void FUN_10406fd60(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69746e6568747541,0xee006e6f69746163);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fd94; end: 10406fdc3; +[SCShakeProjectNames ar_shopping] */

void FUN_10406fd94(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x70706f6853205241,0xeb00000000676e69);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fdc4; end: 10406fdef; +[SCShakeProjectNames billboard] */

void FUN_10406fdc4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x72616f626c6c6942,0xe900000000000064);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fdf0; end: 10406fe17; +[SCShakeProjectNames bitmoji] */

void FUN_10406fdf0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x696a6f6d746942,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fe18; end: 10406fe23;  */

undefined * FUN_10406fe18(void)

{
  return &UNK_10dccbc70;
}



/* Entry: 10406fe24; end: 10406fe4b; +[SCShakeProjectNames business] */

void FUN_10406fe24(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7373656e69737542,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fe4c; end: 10406fe6f; +[SCShakeProjectNames camera] */

void FUN_10406fe4c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6172656d6143,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fe70; end: 10406fe7b;  */

undefined * FUN_10406fe70(void)

{
  return &UNK_10dccbc80;
}



/* Entry: 10406fe7c; end: 10406fea3; +[SCShakeProjectNames calling] */

void FUN_10406fe7c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e696c6c6143,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fea4; end: 10406fecb; +[SCShakeProjectNames commerce] */

void FUN_10406fea4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656372656d6d6f43,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fecc; end: 10406fef7; +[SCShakeProjectNames compliance_engine] */

void FUN_10406fecc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1e54d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fef8; end: 10406ff03;  */

undefined * FUN_10406fef8(void)

{
  return &UNK_11073d5b0;
}



/* Entry: 10406ff04; end: 10406ff2f; +[SCShakeProjectNames creator_subscriptions] */

void FUN_10406ff04(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1e54f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406ff30; end: 10406ff4f; +[SCShakeProjectNames dweb] */

void FUN_10406ff30(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x42455744,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406ff50; end: 10406ff77; +[SCShakeProjectNames context] */

void FUN_10406ff50(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x747865746e6f43,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406ff78; end: 10406ff9f; +[SCShakeProjectNames stories] */

void FUN_10406ff78(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x736569726f7453,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406ffa0; end: 10406ffcb; +[SCShakeProjectNames friending] */

void FUN_10406ffa0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e69646e65697246,0xe900000000000067);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406ffcc; end: 10406fffb; +[SCShakeProjectNames friends_feed] */

void FUN_10406ffcc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x2073646e65697246,0xec00000064656546);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10406fffc; end: 10407001f; +[SCShakeProjectNames games] */

void FUN_10406fffc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73656d6147,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070020; end: 10407003f; +[SCShakeProjectNames lens] */

void FUN_104070020(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x736e654c,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070040; end: 104070063; +[SCShakeProjectNames login] */

void FUN_104070040(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e69676f4c,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070064; end: 104070083; +[SCShakeProjectNames map] */

void FUN_104070064(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x70614d,0xe300000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070084; end: 1040700a7; +[SCShakeProjectNames merlin] */

void FUN_104070084(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x494120794d,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040700a8; end: 1040700d7; +[SCShakeProjectNames media_engine] */

void FUN_1040700a8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e4520616964654d,0xec000000656e6967);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040700d8; end: 10407010b; +[SCShakeProjectNames media_quality] */

void FUN_1040700d8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x755120616964654d,0xed00007974696c61);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10407010c; end: 104070117;  */

undefined * FUN_10407010c(void)

{
  return &UNK_10dccbc90;
}



/* Entry: 104070118; end: 10407013f; +[SCShakeProjectNames memories] */

void FUN_104070118(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x736569726f6d654d,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070140; end: 10407015f; +[SCShakeProjectNames chat] */

void FUN_104070140(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74616843,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070160; end: 10407016b;  */

undefined * FUN_104070160(void)

{
  return &UNK_10dccbca0;
}



/* Entry: 10407016c; end: 10407018f; +[SCShakeProjectNames music] */

void FUN_10407016c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x636973754d,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070190; end: 1040701c3; +[SCShakeProjectNames notifications] */

void FUN_104070190(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6163696669746f4e,0xed0000736e6f6974);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040701c4; end: 1040701f3; +[SCShakeProjectNames startup] */

void FUN_1040701c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7261745320707041,0xeb00000000707574);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040701f4; end: 104070227; +[SCShakeProjectNames ui_stickiness] */

void FUN_1040701f4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b63697453204955,0xed00007373656e69);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070228; end: 10407024f; +[SCShakeProjectNames battery] */

void FUN_104070228(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x79726574746142,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070250; end: 10407025b;  */

undefined * FUN_104070250(void)

{
  return &UNK_10dccbcb0;
}



/* Entry: 10407025c; end: 104070287; +[SCShakeProjectNames plus] */

void FUN_10407025c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7461686370616e53,0xe90000000000002b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070288; end: 1040702af; +[SCShakeProjectNames presence] */

void FUN_104070288(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x65636e6573657250,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040702b0; end: 1040702bb;  */

undefined * FUN_1040702b0(void)

{
  return &UNK_10dccbcc0;
}



/* Entry: 1040702bc; end: 1040702e3; +[SCShakeProjectNames preview] */

void FUN_1040702bc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x77656976657250,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040702e4; end: 1040702ef;  */

undefined * FUN_1040702e4(void)

{
  return &UNK_10dccbcd0;
}



/* Entry: 1040702f0; end: 104070317; +[SCShakeProjectNames profile] */

void FUN_1040702f0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656c69666f7250,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070318; end: 104070347; +[SCShakeProjectNames registration] */

void FUN_104070318(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6172747369676552,0xec0000006e6f6974);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070348; end: 104070367; +[SCShakeProjectNames scan] */

void FUN_104070348(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e616353,0xe400000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070368; end: 10407038b; +[SCShakeProjectNames search] */

void FUN_104070368(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x686372616553,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10407038c; end: 1040703bf; +[SCShakeProjectNames self_serve_ads] */

void FUN_10407038c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x72655320666c6553,0xee00736441206576);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040703c0; end: 1040703cb;  */

undefined * FUN_1040703c0(void)

{
  return &UNK_10dccbce0;
}



/* Entry: 1040703cc; end: 1040703f3; +[SCShakeProjectNames send_to] */

void FUN_1040703cc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f5420646e6553,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040703f4; end: 10407041b; +[SCShakeProjectNames sending] */

void FUN_1040703f4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x676e69646e6553,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10407041c; end: 104070427;  */

undefined * FUN_10407041c(void)

{
  return &UNK_10dccbcf0;
}



/* Entry: 104070428; end: 10407044f; +[SCShakeProjectNames settings] */

void FUN_104070428(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73676e6974746553,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070450; end: 104070473; +[SCShakeProjectNames snaps] */

void FUN_104070450(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7370616e53,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070474; end: 10407047f;  */

undefined * FUN_104070474(void)

{
  return &UNK_10dccbd00;
}



/* Entry: 104070480; end: 1040704a7; +[SCShakeProjectNames creators] */

void FUN_104070480(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73726f7461657243,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040704a8; end: 1040704db; +[SCShakeProjectNames spam] */

void FUN_1040704a8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x646e61206d617053,0xee00657375624120);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040704dc; end: 1040704e7;  */

undefined * FUN_1040704dc(void)

{
  return &UNK_10dccbd10;
}



/* Entry: 1040704e8; end: 104070513; +[SCShakeProjectNames spectacles] */

void FUN_1040704e8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6c63617463657053,0xea00000000007365);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070514; end: 10407053b; +[SCShakeProjectNames stickers] */

void FUN_104070514(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x7372656b63697453,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10407053c; end: 104070563; +[SCShakeProjectNames storage] */

void FUN_10407053c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x656761726f7453,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070564; end: 10407058f; +[SCShakeProjectNames spotlight] */

void FUN_104070564(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6867696c746f7053,0xe900000000000074);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070590; end: 1040705bf; +[SCShakeProjectNames translation] */

void FUN_104070590(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74616c736e617254,0xeb000000006e6f69);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040705c0; end: 1040705e3; +[SCShakeProjectNames trends] */

void FUN_1040705c0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x73646e657254,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040705e4; end: 104070617; +[SCShakeProjectNames shake_to_report] */

void FUN_1040705e4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6f5420656b616853,0xef74726f70655220);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070618; end: 10407063f; +[SCShakeProjectNames snap_kit] */

void FUN_104070618(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x74694b2070616e53,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070640; end: 104070663; +[SCShakeProjectNames opera] */

void FUN_104070640(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x617265704f,0xe500000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070664; end: 104070697; +[SCShakeProjectNames notif_campaign] */

void FUN_104070664(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6143206669746f4e,0xee006e676961706d);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070698; end: 1040706c3; +[SCShakeProjectNames inappropriate_content] */

void FUN_104070698(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1e5510);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040706c4; end: 1040706f7; +[SCShakeProjectNames change_username] */

void FUN_1040706c4(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x552065676e616843,0xef656d616e726573);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040706f8; end: 10407071b; +[SCShakeProjectNames saturn] */

void FUN_1040706f8(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e7275746153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10407071c; end: 10407073f; +[SCShakeProjectNames safety] */

void FUN_10407071c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x797465666153,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070740; end: 10407075f; +[SCShakeProjectNames sig] */

void FUN_104070740(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x474953,0xe300000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070760; end: 10407076b;  */

undefined * FUN_104070760(void)

{
  return &UNK_11073d5c0;
}



/* Entry: 10407076c; end: 104070797; +[SCShakeProjectNames notification_center] */

void FUN_10407076c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1e5530);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070798; end: 1040707c3; +[SCShakeProjectNames content_moderation] */

void FUN_104070798(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1e5550);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1040707c4; end: 1040707cf;  */

undefined * FUN_1040707c4(void)

{
  return &UNK_10dccbd20;
}



/* Entry: 1040707d0; end: 104070803; +[SCShakeProjectNames generativeAI] */

void FUN_1040707d0(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x69746172656e6547,0xed00004941206576);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104070804; end: 10407084b; +[SCShakeProjectNames filters] */

void FUN_104070804(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x737265746c6946,0xe700000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


