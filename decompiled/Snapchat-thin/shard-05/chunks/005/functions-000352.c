/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e9322c; end: 103e9329f; -[SCSCUcoMemoriesServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9322c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029fa8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113029fb0,0);
  *(undefined8 *)(param_1 + _DAT_113029fb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e932a0; end: 103e932d3;  */

void FUN_103e932a0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e932d4; end: 103e9331b; -[SCSCUcoMemoriesServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e932d4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029fa8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113029fb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113029fb8));
  return;
}



/* Entry: 103e9331c; end: 103e9333b;  */

void FUN_103e9331c(void)

{
  _objc_opt_self(&PTR_PTR_11302a000);
  return;
}



/* Entry: 103e9333c; end: 103e93467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e9333c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000100c096a4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113026858);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302a078);
      *(long *)(unaff_x20 + _DAT_11302a078) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCUnlockableDataStoreServicesSaberServiceProvider.swift"
             ,0x59,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e93468);
  (*pcVar1)();
}



/* Entry: 103e93468; end: 103e9349b; -[SCSCUnlockableDataStoreServicesSaberServiceProvider provide] */

void FUN_103e93468(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e9333c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9349c; end: 103e934df; -[SCSCUnlockableDataStoreServicesSaberServiceProvider end] */

void FUN_103e9349c(undefined8 param_1)

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



/* Entry: 103e934e0; end: 103e93513;  */

void FUN_103e934e0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e93514; end: 103e9355b; -[SCSCUnlockableDataStoreServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93514(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302a068);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302a070);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302a078));
  return;
}



/* Entry: 103e9355c; end: 103e9357b;  */

void FUN_103e9355c(void)

{
  _objc_opt_self(&PTR_PTR_11302a0c0);
  return;
}



/* Entry: 103e9357c; end: 103e93587; -[SCSCUnlockablesNetworkServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e9357c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a128;
  _swift_beginAccess(param_1 + _DAT_11302a128,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e93588; end: 103e93593; -[SCSCUnlockablesNetworkServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a128;
  _swift_beginAccess(param_1 + _DAT_11302a128,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e93594; end: 103e9359f; -[SCSCUnlockablesNetworkServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93594(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a130;
  _swift_beginAccess(param_1 + _DAT_11302a130,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e935a0; end: 103e935e3;  */

void FUN_103e935a0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e935e4; end: 103e935ef; -[SCSCUnlockablesNetworkServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e935e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a130;
  _swift_beginAccess(param_1 + _DAT_11302a130,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e935f0; end: 103e93643;  */

void FUN_103e935f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e93644; end: 103e93857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e93644(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e774d4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113026860);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302a138);
      *(long *)(unaff_x20 + _DAT_11302a138) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCUnlockablesNetworkServicesSaberServiceProvider.swift"
             ,0x58,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e93770);
  (*pcVar1)();
}



/* Entry: 103e93858; end: 103e9388b; -[SCSCUnlockablesNetworkServicesSaberServiceProvider provide] */

void FUN_103e93858(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e93644();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e9388c; end: 103e938bf; -[SCSCUnlockablesNetworkServicesSaberServiceProvider __safeProvide] */

void FUN_103e9388c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e93770();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e938c0; end: 103e93903; -[SCSCUnlockablesNetworkServicesSaberServiceProvider end] */

void FUN_103e938c0(undefined8 param_1)

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



/* Entry: 103e93904; end: 103e93a9b;  */

void FUN_103e93904(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCUnlockablesNetworkServicesSaberServiceProvider.swift"
                   ,0x58,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e93a9c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e93a9c; end: 103e93b47; -[SCSCUnlockablesNetworkServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e93a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e93904(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e93b48; end: 103e93bbb; -[SCSCUnlockablesNetworkServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93b48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302a128,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302a130,0);
  *(undefined8 *)(param_1 + _DAT_11302a138) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e93bbc; end: 103e93bef;  */

void FUN_103e93bbc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e93bf0; end: 103e93c37; -[SCSCUnlockablesNetworkServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93bf0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302a128);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302a130);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302a138));
  return;
}



/* Entry: 103e93c38; end: 103e93c57;  */

void FUN_103e93c38(void)

{
  _objc_opt_self(&PTR_PTR_11302a180);
  return;
}



/* Entry: 103e93c58; end: 103e93c63; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93c58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a1e8;
  _swift_beginAccess(param_1 + _DAT_11302a1e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e93c64; end: 103e93c6f; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93c64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a1e8;
  _swift_beginAccess(param_1 + _DAT_11302a1e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e93c70; end: 103e93c7b; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93c70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11302a1f0;
  _swift_beginAccess(param_1 + _DAT_11302a1f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e93c7c; end: 103e93cbf;  */

void FUN_103e93c7c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e93cc0; end: 103e93ccb; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e93cc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11302a1f0;
  _swift_beginAccess(param_1 + _DAT_11302a1f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e93ccc; end: 103e93d1f;  */

void FUN_103e93ccc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e93d20; end: 103e93f33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e93d20(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4b520();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e77600();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113026868);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11302a1f8);
      *(long *)(unaff_x20 + _DAT_11302a1f8) = lVar4;
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
             "LensUserSessionScopeGraphBridge/SCSCVoiceMLLensLoggingServicesSaberServiceProvider.swift"
             ,0x58,2,0x6c,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e93e4c);
  (*pcVar1)();
}



/* Entry: 103e93f34; end: 103e93f67; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider provide] */

void FUN_103e93f34(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e93d20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e93f68; end: 103e93f9b; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_103e93f68(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e93e4c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e93f9c; end: 103e93fdf; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider end] */

void FUN_103e93f9c(undefined8 param_1)

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



/* Entry: 103e93fe0; end: 103e94177;  */

void FUN_103e93fe0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "LensUserSessionScopeGraphBridge/SCSCVoiceMLLensLoggingServicesSaberServiceProvider.swift"
                   ,0x58,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e94178);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e94178; end: 103e94223; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e94178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e93fe0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e94224; end: 103e94297; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94224(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302a1e8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11302a1f0,0);
  *(undefined8 *)(param_1 + _DAT_11302a1f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e94298; end: 103e942cb;  */

void FUN_103e94298(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e942cc; end: 103e94313; -[SCSCVoiceMLLensLoggingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e942cc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302a1e8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11302a1f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302a1f8));
  return;
}



/* Entry: 103e94314; end: 103e94333;  */

void FUN_103e94314(void)

{
  _objc_opt_self(&PTR_PTR_11302a240);
  return;
}



/* Entry: 103e94334; end: 103e94373; -[_TtC17LensErrorHandling26SCLensErrorHandlingService errorObsevableObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94334(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x0001004575f0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e94374; end: 103e943d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94374(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a2a8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a2b0) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e943d8; end: 103e94437; -[_TtC17LensErrorHandling26SCLensErrorHandlingService init] */

void FUN_103e943d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensErrorHandling.SCLensErrorHandlingService",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e94404);
  (*pcVar1)();
}



/* Entry: 103e94438; end: 103e9446f; -[_TtC17LensErrorHandling26SCLensErrorHandlingService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94438(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11302a2a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302a2b0));
  return;
}



/* Entry: 103e94470; end: 103e944b7; -[_TtC17LensErrorHandling19LensProcessingError effectIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94470(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a2e0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e944b8; end: 103e944fb; -[_TtC17LensErrorHandling19LensProcessingError error] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e944b8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a2e8);
  _swift_errorRetain(uVar2);
  uVar1 = uVar2;
  __s10Foundation22_convertErrorToNSErrorySo0E0Cs0C0_pF(uVar2);
  _swift_errorRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e944fc; end: 103e945c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e944fc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a2e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a2e8) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e945c4; end: 103e94623; -[_TtC17LensErrorHandling19LensProcessingError init] */

void FUN_103e945c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensErrorHandling.LensProcessingError",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e945f0);
  (*pcVar1)();
}



/* Entry: 103e94624; end: 103e9465b; -[_TtC17LensErrorHandling19LensProcessingError .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94624(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a2e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(*(undefined8 *)(param_1 + _DAT_11302a2e8));
  return;
}



/* Entry: 103e9465c; end: 103e947eb;  */

void FUN_103e9465c(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
  return;
}



/* Entry: 103e947ec; end: 103e947fb; -[_TtC23LensPrefetchingServices25SCLensPrefetchingServices lensPrefetchingFactory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e947ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a318));
  return;
}



/* Entry: 103e947fc; end: 103e94847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e947fc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a318) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e94848; end: 103e94883;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94848(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_11302a318) = param_1;
  func_0x0001002365f0();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e94884; end: 103e948db; -[_TtC23LensPrefetchingServices25SCLensPrefetchingServices initWithLensPrefetchingFactory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94884(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_11302a318) = param_3;
  lVar2 = param_1;
  func_0x0001002365f0();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103e948dc; end: 103e94937; -[_TtC23LensPrefetchingServices25SCLensPrefetchingServices init] */

void FUN_103e948dc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensPrefetchingServices.SCLensPrefetchingServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e94908);
  (*pcVar1)();
}



/* Entry: 103e94938; end: 103e94947; -[_TtC23LensPrefetchingServices25SCLensPrefetchingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94938(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a318));
  return;
}



/* Entry: 103e94948; end: 103e94953; -[SCLensDataPrefetchParameters lensIDsToFetchMetadata] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94948(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a348);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e94954; end: 103e9495f; -[SCLensDataPrefetchParameters lensIDsToFetchResources] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94954(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a350);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e94960; end: 103e949a3;  */

void FUN_103e94960(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e949a4; end: 103e949ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e949a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a350) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e949ac; end: 103e94a3f; -[SCLensDataPrefetchParameters initWithLensIDsToFetchMetadata:lensIDsToFetchResources:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e949ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  puVar1 = PTR___sSSN_11034da80;
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ
            (param_3,PTR___sSSN_11034da80);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_4,puVar1);
  *(undefined8 *)(param_1 + _DAT_11302a348) = param_3;
  *(undefined8 *)(param_1 + _DAT_11302a350) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e94a40; end: 103e94b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94a40(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a350) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e94b08; end: 103e94b0b; -[SCLensDataPrefetchParameters copyWithZone:] */

void FUN_103e94b08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103e94b0c; end: 103e94b27; -[SCLensDataPrefetchParameters description] */

void FUN_103e94b0c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e94b28; end: 103e94ba3; -[SCLensDataPrefetchParameters init] */

void FUN_103e94b28(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "LensPrefetchingServices/LensDataPrefetchParametersWrapper.swift",0x3f,2,0x29,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e94b70);
  (*pcVar1)();
}



/* Entry: 103e94ba4; end: 103e94bdb; -[SCLensDataPrefetchParameters .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94ba4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a348));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302a350));
  return;
}



/* Entry: 103e94bdc; end: 103e94bfb;  */

void FUN_103e94bdc(void)

{
  _objc_opt_self(&PTR_PTR_11295da70);
  return;
}



/* Entry: 103e94bfc; end: 103e94bff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94bfc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a348) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a350) = param_2;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e94c00; end: 103e94c0f; -[_TtC32SCViewfinderDataPipelineServices32SCViewfinderDataPipelineServices audioProcessingPipeline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94c00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a388));
  return;
}



/* Entry: 103e94c10; end: 103e94c1f; -[_TtC32SCViewfinderDataPipelineServices32SCViewfinderDataPipelineServices observationPipeline] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11302a398));
  return;
}



/* Entry: 103e94c20; end: 103e94cab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a380) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11302a388) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11302a390) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11302a398) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e94cac; end: 103e94d0b; -[_TtC32SCViewfinderDataPipelineServices32SCViewfinderDataPipelineServices init] */

void FUN_103e94cac(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCViewfinderDataPipelineServices.SCViewfinderDataPipelineServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e94cd8);
  (*pcVar1)();
}



/* Entry: 103e94d0c; end: 103e94d63; -[_TtC32SCViewfinderDataPipelineServices32SCViewfinderDataPipelineServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94d0c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a380));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a388));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a390));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11302a398));
  return;
}



/* Entry: 103e94d64; end: 103e94d77;  */

bool FUN_103e94d64(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103e94d78; end: 103e94e53;  */

void FUN_103e94d78(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  __ss6HasherV8_combineyys6UInt32VF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 103e94e54; end: 103e94e5f;  */

void FUN_103e94e54(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103e94e60; end: 103e94e6f; -[SCLensNetworkPermissionsConfiguration enabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103e94e60(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11302a3c8);
}



/* Entry: 103e94e70; end: 103e94eb7; -[SCLensNetworkPermissionsConfiguration enabledSpecIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11302a3d0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e94eb8; end: 103e94f0b; -[SCLensNetworkPermissionsConfiguration enabledModulesObjc] */

void FUN_103e94eb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e94f0c();
  _objc_release(param_1);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  uVar3 = uVar1;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103e94f0c; end: 103e94f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e94f0c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_11302a3d8;
  lVar2 = *(long *)(unaff_x20 + _DAT_11302a3d8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_103e94fb8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = 0;
  }
  _swift_bridgeObjectRetain(lVar2);
  return lVar3;
}



/* Entry: 103e94f70; end: 103e94fb7; -[SCLensNetworkPermissionsConfiguration setEnabledModulesObjc:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e94f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001002ed07c(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_3,uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11302a3d8);
  *(undefined8 *)(param_1 + _DAT_11302a3d8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103e94fb8; end: 103e950d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_103e94fb8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  for (lVar7 = *(long *)(*(long *)(param_1 + _DAT_11302a3e0) + 0x10); lVar7 != 0; lVar7 = lVar7 + -1
      ) {
    PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar4;
    _objc_allocWithZone();
    func_0x000107c46ecc();
    if (puVar4 != (undefined *)0x0) {
      puVar3 = puVar5;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar3 == 0) || ((long)puVar5 < 0)) ||
         (puVar3 = puVar5, ((ulong)puVar5 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar5 >> 0x3e == 0) {
          puVar2 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar2 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar5) {
            puVar2 = puVar5;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar2);
        }
        puVar3 = (undefined *)0x0;
        func_0x000101d1802c(0,puVar2 + 1,1,puVar5);
      }
      uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar5 = puVar3;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        func_0x000101d1802c(puVar5,uVar1 + 1,1,puVar3);
        uVar6 = (ulong)puVar5 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar6 + uVar1 * 8 + 0x20) = puVar4;
    }
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  }
  PTR__OBJC_CLASS___NSNumber_1126ae570 = puVar4;
  return puVar5;
}



/* Entry: 103e950d8; end: 103e95137; -[SCLensNetworkPermissionsConfiguration init] */

void FUN_103e950d8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensNetworkPermissionsProvider.LensNetworkPermissionsConfiguration",0x42,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e95104);
  (*pcVar1)();
}



/* Entry: 103e95138; end: 103e9517f; -[SCLensNetworkPermissionsConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e95138(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a3d0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11302a3d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11302a3e0));
  return;
}



/* Entry: 103e95180; end: 103e95197;  */

ulong FUN_103e95180(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if (4 < param_1) {
    uVar1 = 0x100000000;
  }
  return uVar1;
}



/* Entry: 103e95198; end: 103e951d7;  */

void FUN_103e95198(void)

{
  undefined *puVar1;
  
  if (puRam000000011302a3e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dca5640;
  _swift_getWitnessTable(&UNK_10dca5640,&UNK_11071b298);
  puRam000000011302a3e8 = puVar1;
  return;
}



/* Entry: 103e951d8; end: 103e951e7;  */

undefined1  [16] FUN_103e951d8(void)

{
  return ZEXT816(0x11071b298);
}



/* Entry: 103e951e8; end: 103e95207;  */

void FUN_103e951e8(void)

{
  _objc_opt_self(&PTR_PTR_11295dc18);
  return;
}



/* Entry: 103e95208; end: 103e952cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e95208(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 auStack_58 [8];
  undefined *puStack_48;
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11302a420) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_11302a428) = 0;
  lVar1 = _DAT_11302a430;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103e97e34();
  puStack_48 = puVar2;
  func_0x0001000285a8(0x11302a438,&UNK_10dca5750);
  _swift_allocObject();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_11302a418) = param_1;
  _objc_msgSendSuper2(auStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e952cc; end: 103e95397; -[SCLensNetworkPermissionsProvider initWithStudySettingsProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e952cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_11302a420) = 0;
  *(undefined8 *)(param_1 + _DAT_11302a428) = 0;
  lVar1 = _DAT_11302a430;
  _objc_retain();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_103e97e34();
  puStack_48 = puVar3;
  func_0x0001000285a8(0x11302a438,&UNK_10dca5750);
  _swift_allocObject();
  ppuVar4 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(param_1 + lVar1) = ppuVar4;
  *(undefined8 *)(param_1 + _DAT_11302a418) = param_3;
  lStack_58 = param_1;
  lStack_50 = lVar2;
  _objc_msgSendSuper2(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e95398; end: 103e9545f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e95398(long *param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 *puStack_40;
  undefined1 *puStack_38;
  
  ppuVar4 = &puStack_40;
  lVar6 = *param_1;
  puVar2 = *(undefined1 **)(unaff_x20 + lVar6);
  puVar3 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    FUN_103e951e8();
    puVar3 = puVar2;
    _objc_allocWithZone();
    *(undefined8 *)(puVar3 + _DAT_11302a3d8) = 0;
    puVar3[_DAT_11302a3c8] = param_2;
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(puVar3 + _DAT_11302a3e0) = PTR___swiftEmptyArrayStorage_11034f1c8;
    *(undefined **)(puVar3 + _DAT_11302a3d0) = puVar1;
    puStack_40 = puVar3;
    puStack_38 = puVar2;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined1 ***)(unaff_x20 + lVar6) = ppuVar4;
    _objc_retain();
    _objc_release(uVar5);
    puVar2 = (undefined1 *)0x0;
    puVar3 = (undefined1 *)ppuVar4;
  }
  _objc_retain(puVar2);
  return puVar3;
}



/* Entry: 103e95460; end: 103e95def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103e95460(ulong param_1,undefined *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined **ppuVar21;
  uint uVar22;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar1 = _DAT_11302a430;
  uVar18 = *(undefined8 *)(unaff_x20 + _DAT_11302a430);
  _swift_retain(uVar18);
  func_0x0001000c74f0(&puStack_a0);
  _swift_release(uVar18);
  puVar11 = puStack_a0;
  uVar3 = param_1;
  func_0x000107c4b1dc();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  puVar16 = param_2;
  _objc_release(uVar3);
  if (*(long *)(puVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar11);
    puVar16 = param_2;
    func_0x000100029284();
    if (((ulong)puVar16 & 1) != 0) {
      plVar5 = *(long **)(*(long *)(puVar11 + 0x38) + uVar4 * 8);
      _objc_retain(plVar5);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(puVar11,2);
      return plVar5;
    }
    _swift_bridgeObjectRelease(param_2);
    param_2 = puVar11;
  }
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(puVar11);
  uVar3 = param_1;
  func_0x000107c3dd5c();
  if (uVar3 < 2) {
    plVar5 = (long *)&DAT_11302a420;
    FUN_103e95398(&DAT_11302a420,0);
    uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
    uStack_90 = param_1;
    plStack_88 = plVar5;
    _objc_retain();
    _swift_retain(uVar19);
    uVar18 = 0x103e98468;
LAB_103e95588:
    func_0x000100075034(uVar18,&puStack_a0,PTR___sytN_11034f1b0 + 8);
  }
  else {
    uVar3 = param_1;
    func_0x000107c4f5bc();
    uVar4 = param_1;
    func_0x000107c49b94();
    uVar6 = param_1;
    func_0x000107c5c454();
    uVar20 = param_1;
    func_0x000107c4fe18();
    _objc_retainAutoreleasedReturnValue();
    if (uVar20 == 0) {
LAB_103e95650:
      uVar20 = 0;
    }
    else {
      uVar7 = uVar20;
      func_0x000107c4fe2c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar20);
      if (uVar7 == 0) goto LAB_103e95650;
      uVar20 = uVar7;
      puVar16 = PTR___sSSN_11034da80;
      __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
                (uVar7,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      _objc_release(uVar7);
    }
    uVar7 = uVar20;
    FUN_103e97f34();
    _swift_bridgeObjectRelease();
    FUN_103e95df0();
    puVar8 = *(undefined **)(unaff_x20 + _DAT_11302a418);
    func_0x000107c5c734();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR___swiftEmptySetSingleton_11034f1d8;
    puVar10 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (puVar8 != (undefined *)0x0) {
      puVar9 = puVar8;
      func_0x000107c3d9a0();
      _objc_retainAutoreleasedReturnValue();
      _swift_unknownObjectRelease(puVar8);
      puVar10 = puVar9;
      puVar16 = PTR___sSSN_11034da80;
      __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
                (puVar9,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      _objc_release(puVar9);
    }
    puVar8 = puVar10;
    FUN_103e95ecc();
    _swift_bridgeObjectRelease(puVar10);
    puStack_70 = puVar11;
    puStack_68 = puVar11;
    uVar22 = (uint)uVar7;
    if ((int)uVar4 == 0) {
      if ((uVar6 & 1) == 0) {
        if (*(long *)(uVar20 + 0x10) != 0) {
          if (uVar3 != 0) {
            _swift_bridgeObjectRelease(uVar20);
            _swift_bridgeObjectRelease(puVar8);
            puVar11 = PTR___swiftEmptySetSingleton_11034f1d8;
            goto LAB_103e9587c;
          }
          goto LAB_103e95904;
        }
      }
      else {
        if (uVar3 != 0) {
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(puVar8);
          plVar5 = (long *)&DAT_11302a428;
          FUN_103e95398(&DAT_11302a428,1);
          uVar18 = *(undefined8 *)(unaff_x20 + lVar1);
          uStack_90 = param_1;
          plStack_88 = plVar5;
          _objc_retain();
          _swift_retain(uVar18);
          func_0x000100075034(0x103e98440,&puStack_a0,PTR___sytN_11034f1b0 + 8);
          _swift_release(uVar18);
          _objc_release(plVar5);
          _swift_bridgeObjectRelease(PTR___swiftEmptySetSingleton_11034f1d8);
          return plVar5;
        }
        puVar16 = (undefined *)0x4;
        func_0x000103e96844(&puStack_a0,4);
        if (*(long *)(uVar20 + 0x10) != 0) {
LAB_103e95904:
          _swift_bridgeObjectRetain(uVar20);
          func_0x00010105ba6c();
          puVar16 = (undefined *)0x1;
          func_0x000103e96844(&puStack_a0,1);
        }
      }
      plVar5 = (long *)(uVar20 + 0x10);
      puVar11 = puVar16;
      if ((uVar7 & 1) != 0) {
        if (*plVar5 != 0) {
LAB_103e95930:
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(puVar8);
          plVar5 = (long *)&DAT_11302a428;
          FUN_103e95398(&DAT_11302a428,1);
          uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
          uStack_90 = param_1;
          plStack_88 = plVar5;
          _objc_retain();
          _swift_retain(uVar19);
          uVar18 = 0x103e9842c;
          goto LAB_103e95c14;
        }
        puVar11 = (undefined *)0x1;
        func_0x0001044e388c(1);
        func_0x000100403b00(&puStack_a0,puVar11,puVar16);
        _swift_bridgeObjectRelease(uStack_98);
      }
      puVar16 = puVar11;
      if ((uVar22 >> 8 & 1) != 0) {
        if (uVar3 != 0) {
LAB_103e959b8:
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(puVar8);
          plVar5 = (long *)&DAT_11302a428;
          FUN_103e95398(&DAT_11302a428,1);
          uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
          uStack_90 = param_1;
          plStack_88 = plVar5;
          _objc_retain();
          _swift_retain(uVar19);
          uVar18 = 0x103e98418;
          goto LAB_103e95c14;
        }
        puVar16 = (undefined *)0x4;
        func_0x0001044e388c(4);
        func_0x000100403b00(&puStack_a0,puVar16,puVar11);
        _swift_bridgeObjectRelease(uStack_98);
      }
      if ((uVar22 >> 0x10 & 1) != 0) {
        if (*plVar5 != 0 || uVar3 != 0) {
LAB_103e95a50:
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(puVar8);
          plVar5 = (long *)&DAT_11302a428;
          FUN_103e95398(&DAT_11302a428,1);
          uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
          uStack_90 = param_1;
          plStack_88 = plVar5;
          _objc_retain();
          _swift_retain(uVar19);
          uVar18 = 0x103e98404;
          goto LAB_103e95c14;
        }
        puVar11 = (undefined *)0x19;
        func_0x0001044e388c(0x19);
        func_0x000100403b00(&puStack_a0,puVar11,puVar16);
        _swift_bridgeObjectRelease(uStack_98);
        puVar16 = puVar11;
      }
      if ((uVar22 >> 0x18 & 1) != 0) {
        if (((uVar22 >> 8 & 1) != 0) || (*plVar5 != 0)) {
LAB_103e95ae0:
          _swift_bridgeObjectRelease(uVar20);
          _swift_bridgeObjectRelease(puVar8);
          plVar5 = (long *)&DAT_11302a428;
          FUN_103e95398(&DAT_11302a428,1);
          uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
          uStack_90 = param_1;
          plStack_88 = plVar5;
          _objc_retain();
          _swift_retain(uVar19);
          uVar18 = 0x103e983f0;
          goto LAB_103e95c14;
        }
        puVar11 = (undefined *)0x1e;
        func_0x0001044e388c(0x1e);
        func_0x000100403b00(&puStack_a0,puVar11,puVar16);
        _swift_bridgeObjectRelease(uStack_98);
        puVar16 = puVar11;
      }
      if ((uVar7 >> 0x20 & 1) != 0) {
        if ((uVar22 >> 8 & 1) == 0) {
          lVar17 = *(long *)(uVar20 + 0x10);
          _swift_bridgeObjectRelease(uVar20);
          if (lVar17 == 0) {
            uVar18 = 0x1f;
            func_0x0001044e388c(0x1f);
            func_0x000100403b00(&puStack_a0,uVar18,puVar16);
            uVar20 = uStack_98;
            goto LAB_103e95b68;
          }
        }
        else {
LAB_103e95bc4:
          _swift_bridgeObjectRelease(uVar20);
        }
        _swift_bridgeObjectRelease(puVar8);
        plVar5 = (long *)&DAT_11302a428;
        FUN_103e95398(&DAT_11302a428,1);
        uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
        uStack_90 = param_1;
        plStack_88 = plVar5;
        _objc_retain();
        _swift_retain(uVar19);
        uVar18 = 0x103e983dc;
LAB_103e95c14:
        func_0x000100075034(uVar18,&puStack_a0,PTR___sytN_11034f1b0 + 8);
        _swift_release(uVar19);
        _objc_release(plVar5);
        _swift_bridgeObjectRelease(puStack_70);
        _swift_bridgeObjectRelease(puStack_68);
        return plVar5;
      }
    }
    else {
      if (*(long *)(uVar20 + 0x10) != 0 || uVar3 != 0) {
        _swift_bridgeObjectRelease(uVar20);
        _swift_bridgeObjectRelease(puVar8);
        plVar5 = (long *)&DAT_11302a428;
        FUN_103e95398(&DAT_11302a428,1);
        uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
        uStack_90 = param_1;
        plStack_88 = plVar5;
        _objc_retain();
        _swift_retain(uVar19);
        uVar18 = 0x103e98454;
        goto LAB_103e95588;
      }
      func_0x000103e96844(&puStack_a0,3);
      if ((uVar6 & 1) == 0) {
        lVar17 = *(long *)(uVar20 + 0x10);
      }
      else {
        func_0x000103e96844(&puStack_a0,4);
        lVar17 = *(long *)(uVar20 + 0x10);
      }
      if (lVar17 != 0) {
        _swift_bridgeObjectRelease(uVar20);
        _swift_bridgeObjectRelease(puVar8);
        puVar11 = puStack_68;
LAB_103e9587c:
        plVar5 = (long *)&DAT_11302a428;
        FUN_103e95398(&DAT_11302a428,1);
        uVar18 = *(undefined8 *)(unaff_x20 + lVar1);
        uStack_90 = param_1;
        plStack_88 = plVar5;
        _objc_retain();
        _swift_retain(uVar18);
        func_0x000100075034(FUN_103e9823c,&puStack_a0,PTR___sytN_11034f1b0 + 8);
        _swift_release(uVar18);
        _objc_release(plVar5);
        _swift_bridgeObjectRelease(puVar11);
        return plVar5;
      }
      if ((uVar7 & 1) != 0) goto LAB_103e95930;
      if ((uVar22 >> 8 & 1) != 0) goto LAB_103e959b8;
      if ((uVar22 >> 0x10 & 1) != 0) goto LAB_103e95a50;
      if ((uVar22 >> 0x18 & 1) != 0) goto LAB_103e95ae0;
      if ((uVar7 >> 0x20 & 1) != 0) goto LAB_103e95bc4;
    }
LAB_103e95b68:
    _swift_bridgeObjectRelease(uVar20);
    if (*(long *)(puVar8 + 0x10) == 0) {
      _swift_bridgeObjectRelease(puVar8);
    }
    else {
      func_0x00010105ba6c(puVar8);
    }
    puVar11 = puStack_70;
    lVar17 = *(long *)(puStack_70 + 0x10);
    _swift_bridgeObjectRetain(puStack_70);
    if ((lVar17 != 0) && (uVar3 = param_1, func_0x000107c504b8(), (int)uVar3 != 0)) {
      func_0x000103e96844(&puStack_a0,1);
    }
    puVar16 = puStack_68;
    ppuVar21 = *(undefined ***)(puStack_68 + 0x10);
    ppuVar12 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    if (ppuVar21 != (undefined **)0x0) {
      _swift_bridgeObjectRetain(puStack_68);
      ppuVar12 = ppuVar21;
      FUN_103e966d8(ppuVar21,0);
      ppuVar13 = &puStack_a0;
      FUN_103e97d40(ppuVar13,ppuVar12 + 4,ppuVar21,puVar16);
      FUN_103e98254(puStack_a0,uStack_98,uStack_90,plStack_88,uStack_80);
      if (ppuVar13 != ppuVar21) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e95cdc);
        (*pcVar2)();
      }
    }
    ppuVar21 = *(undefined ***)(puVar11 + 0x10);
    if (ppuVar21 == (undefined **)0x0) {
      _swift_bridgeObjectRelease(puVar11);
      ppuVar13 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      ppuVar13 = ppuVar21;
      func_0x00010109b448(ppuVar21,0);
      ppuVar14 = &puStack_a0;
      func_0x00010109b930(ppuVar14,ppuVar13 + 4,ppuVar21,puVar11);
      FUN_103e98254(puStack_a0,uStack_98,uStack_90,plStack_88,uStack_80);
      if (ppuVar14 != ppuVar21) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103e95d30);
        (*pcVar2)();
      }
    }
    lVar15 = 0;
    FUN_103e951e8();
    lVar17 = lVar15;
    _objc_allocWithZone();
    *(undefined8 *)(lVar17 + _DAT_11302a3d8) = 0;
    *(undefined1 *)(lVar17 + _DAT_11302a3c8) = 1;
    *(undefined ***)(lVar17 + _DAT_11302a3e0) = ppuVar12;
    *(undefined ***)(lVar17 + _DAT_11302a3d0) = ppuVar13;
    plVar5 = &lStack_b0;
    lStack_b0 = lVar17;
    lStack_a8 = lVar15;
    _objc_msgSendSuper2(plVar5,PTR_s_init_1125d9248);
    uVar19 = *(undefined8 *)(unaff_x20 + lVar1);
    uStack_90 = param_1;
    plStack_88 = plVar5;
    _objc_retain();
    _swift_retain(uVar19);
    func_0x000100075034(FUN_103e983c8,&puStack_a0,PTR___sytN_11034f1b0 + 8);
    _swift_bridgeObjectRelease(puVar16);
    _swift_bridgeObjectRelease(puVar11);
  }
  _swift_release(uVar19);
  _objc_release(plVar5);
  return plVar5;
}



/* Entry: 103e95df0; end: 103e95ecb;  */

undefined * FUN_103e95df0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x20;
  
  func_0x000107c4fe18();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (unaff_x20 != (undefined *)0x0) {
    puVar1 = unaff_x20;
    func_0x000107c4fe2c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    puVar2 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
                (puVar1,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      _objc_release();
      FUN_103e9628c();
      if (*(ulong *)(puVar2 + 0x10) >> 3 < *(ulong *)(puVar1 + 0x10)) {
        puVar2 = puVar1;
        func_0x000101baba54();
        _swift_bridgeObjectRelease(puVar1);
      }
      else {
        func_0x0001012eef50();
        _swift_bridgeObjectRelease(puVar1);
      }
    }
  }
  return puVar2;
}



/* Entry: 103e95ecc; end: 103e960cb;  */

undefined * FUN_103e95ecc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long unaff_x20;
  ulong *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_71 [9];
  undefined *puStack_68;
  
  func_0x000107c4fe18();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (unaff_x20 != 0) {
    lVar12 = unaff_x20;
    func_0x000107c4fe2c();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x20);
    puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
    if (lVar12 != 0) {
      lVar7 = lVar12;
      __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
                (lVar12,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      _objc_release(lVar12);
      puVar8 = (undefined *)0x11302a4b0;
      func_0x0001000285a8(0x11302a4b0,&UNK_10dca5798);
      _swift_initStaticObject();
      FUN_103e9827c();
      puVar11 = (ulong *)(param_1 + 0x38);
      uVar14 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar15 = 0xffffffffffffffff;
      if (-uVar14 < 0x40) {
        uVar15 = ~(-1L << (-uVar14 & 0x3f));
      }
      uVar15 = uVar15 & *puVar11;
      puStack_68 = puVar8;
      _swift_bridgeObjectRetain(param_1);
      lVar12 = 0;
      lVar13 = lVar12;
      while( true ) {
        while (uVar15 != 0) {
          uVar3 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar15 - 1 & uVar15;
          puVar1 = (undefined8 *)
                   (*(long *)(param_1 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
                   lVar12 * 0x400);
          uVar9 = *puVar1;
          uVar2 = puVar1[1];
          _swift_bridgeObjectRetain_n(uVar2,2);
          func_0x0001044e3b58(uVar9,uVar2);
          if (((uint)uVar9 & 0xff) != 0x38) {
            FUN_103e96758(auStack_71,uVar9);
          }
          _swift_bridgeObjectRelease(uVar2);
          lVar13 = lVar12;
        }
        bVar6 = SCARRY8(lVar12,1);
        lVar12 = lVar12 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x103e960cc);
          (*pcVar5)();
        }
        if ((long)(0x3f - uVar14 >> 6) <= lVar12) break;
        uVar15 = puVar11[lVar12];
      }
      FUN_103e98254(param_1,puVar11,~uVar14,lVar13,0);
      puVar4 = puStack_68;
      puVar8 = puStack_68;
      FUN_103e964c8(puStack_68);
      puVar10 = puVar8;
      func_0x000100403a6c();
      _swift_bridgeObjectRelease(puVar8);
      puVar8 = puVar10;
      func_0x000101157854(puVar10,lVar7);
      _swift_bridgeObjectRelease(puVar4);
      _swift_bridgeObjectRelease(puVar10);
    }
  }
  return puVar8;
}



/* Entry: 103e960cc; end: 103e96127; -[SCLensNetworkPermissionsProvider networkPermissionsForLens:] */

void FUN_103e960cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_103e95460(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e96128; end: 103e961d3;  */

void FUN_103e96128(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_2;
  func_0x000107c4b1dc(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  _objc_release(param_2);
  _objc_retain(param_3);
  uVar2 = *param_1;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar4 = *param_1;
  FUN_103e976d8(param_3,uVar1,uVar3,uVar2);
  _swift_bridgeObjectRelease(uVar3);
  *param_1 = uVar4;
  return;
}



/* Entry: 103e961d4; end: 103e96233; -[SCLensNetworkPermissionsProvider init] */

void FUN_103e961d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("LensNetworkPermissionsProvider.NetworkPermissionsProvider",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e96200);
  (*pcVar1)();
}



/* Entry: 103e96234; end: 103e9628b; -[SCLensNetworkPermissionsProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e96234(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a418));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a420));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11302a428));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11302a430));
  return;
}


