/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e336c4; end: 103e33717;  */

void FUN_103e336c4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e33718; end: 103e3392b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e33718(void)

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
    func_0x000107c3fc98();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e33218();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113017c48);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113017cf8);
      *(long *)(unaff_x20 + _DAT_113017cf8) = lVar4;
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
             "CmpUserSessionScopeGraphBridge/SCBusinessIAPServicesSaberServiceProvider.swift",0x4e,2
             ,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e33844);
  (*pcVar1)();
}



/* Entry: 103e3392c; end: 103e3395f; -[SCBusinessIAPServicesSaberServiceProvider provide] */

void FUN_103e3392c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e33718();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e33960; end: 103e33993; -[SCBusinessIAPServicesSaberServiceProvider __safeProvide] */

void FUN_103e33960(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e33844();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e33994; end: 103e339d7; -[SCBusinessIAPServicesSaberServiceProvider end] */

void FUN_103e33994(undefined8 param_1)

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



/* Entry: 103e339d8; end: 103e33b6f;  */

void FUN_103e339d8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e3f670)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1c0990,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CmpUserSessionScopeGraphBridge/SCBusinessIAPServicesSaberServiceProvider.swift",
                   0x4e,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e33b70);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5350c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e33b70; end: 103e33c1b; -[SCBusinessIAPServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e33b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e339d8(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e33c1c; end: 103e33c8f; -[SCBusinessIAPServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e33c1c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113017ce8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113017cf0,0);
  *(undefined8 *)(param_1 + _DAT_113017cf8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e33c90; end: 103e33cc3;  */

void FUN_103e33c90(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e33cc4; end: 103e33d0b; -[SCBusinessIAPServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e33cc4(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017ce8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017cf0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113017cf8));
  return;
}



/* Entry: 103e33d0c; end: 103e33d2b;  */

void FUN_103e33d0c(void)

{
  _objc_opt_self(&PTR_PTR_113017d40);
  return;
}



/* Entry: 103e33d2c; end: 103e33d37; -[SCMultipleProfileServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e33d2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113017da8;
  _swift_beginAccess(param_1 + _DAT_113017da8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e33d38; end: 103e33d43; -[SCMultipleProfileServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e33d38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113017da8;
  _swift_beginAccess(param_1 + _DAT_113017da8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e33d44; end: 103e33d4f; -[SCMultipleProfileServicesSaberServiceProvider cmpUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e33d44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113017db0;
  _swift_beginAccess(param_1 + _DAT_113017db0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e33d50; end: 103e33d93;  */

void FUN_103e33d50(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e33d94; end: 103e33d9f; -[SCMultipleProfileServicesSaberServiceProvider setCmpUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e33d94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113017db0;
  _swift_beginAccess(param_1 + _DAT_113017db0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e33da0; end: 103e33df3;  */

void FUN_103e33da0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e33df4; end: 103e34007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e33df4(void)

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
    func_0x000107c3fc98();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e33344();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113017c50);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113017db8);
      *(long *)(unaff_x20 + _DAT_113017db8) = lVar4;
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
             "CmpUserSessionScopeGraphBridge/SCMultipleProfileServicesSaberServiceProvider.swift",
             0x52,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e33f20);
  (*pcVar1)();
}



/* Entry: 103e34008; end: 103e3403b; -[SCMultipleProfileServicesSaberServiceProvider provide] */

void FUN_103e34008(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e33df4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e3403c; end: 103e3406f; -[SCMultipleProfileServicesSaberServiceProvider __safeProvide] */

void FUN_103e3403c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e33f20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e34070; end: 103e340b3; -[SCMultipleProfileServicesSaberServiceProvider end] */

void FUN_103e34070(undefined8 param_1)

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



/* Entry: 103e340b4; end: 103e3424b;  */

void FUN_103e340b4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e3f670)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1c0990,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CmpUserSessionScopeGraphBridge/SCMultipleProfileServicesSaberServiceProvider.swift"
                   ,0x52,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e3424c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5350c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e3424c; end: 103e342f7; -[SCMultipleProfileServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e3424c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e340b4(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e342f8; end: 103e3436b; -[SCMultipleProfileServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e342f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113017da8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113017db0,0);
  *(undefined8 *)(param_1 + _DAT_113017db8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e3436c; end: 103e3439f;  */

void FUN_103e3436c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e343a0; end: 103e343e7; -[SCMultipleProfileServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e343a0(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017da8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113017db0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113017db8));
  return;
}



/* Entry: 103e343e8; end: 103e34407;  */

void FUN_103e343e8(void)

{
  _objc_opt_self(&PTR_PTR_113017e00);
  return;
}



/* Entry: 103e34408; end: 103e34417; -[BusinessIAPServices businessIAPService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113017e68));
  return;
}



/* Entry: 103e34418; end: 103e344af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34418(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113017e68) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e344b0; end: 103e344e3;  */

void FUN_103e344b0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e344e4; end: 103e344f3; -[BusinessIAPServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e344e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017e68));
  return;
}



/* Entry: 103e344f4; end: 103e34503; -[_TtC25SCMultipleProfileServices23MultipleProfileServices multiProfilePermissionManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e344f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113017e98));
  return;
}



/* Entry: 103e34504; end: 103e3459b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34504(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113017e98) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e3459c; end: 103e345fb; -[_TtC25SCMultipleProfileServices23MultipleProfileServices init] */

void FUN_103e3459c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCMultipleProfileServices.MultipleProfileServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e345c8);
  (*pcVar1)();
}



/* Entry: 103e345fc; end: 103e3460b; -[_TtC25SCMultipleProfileServices23MultipleProfileServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e345fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017e98));
  return;
}



/* Entry: 103e3460c; end: 103e34693;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103e3460c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  _objc_allocWithZone();
  lVar2 = unaff_x20;
  func_0x000100a4e624();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_113017ec8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_113017ed0) = param_2;
    _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
    _objc_release(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e34694);
  (*pcVar1)();
}



/* Entry: 103e34694; end: 103e346f3; -[_TtC30CntUserSessionScopeGraphBridge45CntUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103e34694(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CntUserSessionScopeGraphBridge.CntUserSessionScopeGraphBridgeSaberEntryPoint",0x4c,
             "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e346c0);
  (*pcVar1)();
}



/* Entry: 103e346f4; end: 103e3472b; -[_TtC30CntUserSessionScopeGraphBridge45CntUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e346f4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113017ec8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113017ed0));
  return;
}



/* Entry: 103e3472c; end: 103e34753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3472c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_113017ed0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_113017ec8));
  return;
}



/* Entry: 103e34754; end: 103e347b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e34754(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113018180);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e347b8; end: 103e347bf;  */

void FUN_103e347b8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e347c0; end: 103e3485f;  */

void FUN_103e347c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e34860; end: 103e3487f;  */

void FUN_103e34860(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e34880; end: 103e348e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e34880(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113018188);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e348e4; end: 103e348eb;  */

void FUN_103e348e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e348ec; end: 103e3498b;  */

void FUN_103e348ec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e3498c; end: 103e349ab;  */

void FUN_103e3498c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e349ac; end: 103e34a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103e349ac(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  _objc_release();
  _swift_allocObject();
  uVar1 = *(undefined8 *)(param_2 + _DAT_113018190);
  _swift_retain(uVar1);
  _objc_release(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103e34a10; end: 103e34a17;  */

void FUN_103e34a10(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103e34a18; end: 103e34ab7;  */

void FUN_103e34a18(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103e34ab8; end: 103e34ad7;  */

void FUN_103e34ab8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103e34ad8; end: 103e34b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34ad8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113018180) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113018188) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113018190) = param_3;
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e34b4c; end: 103e34bab; -[_TtC30CntUserSessionScopeGraphBridge38CntUserSessionScopeGraphBridgeServices init] */

void FUN_103e34b4c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("CntUserSessionScopeGraphBridge.CntUserSessionScopeGraphBridgeServices",0x45,"init()",6
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e34b78);
  (*pcVar1)();
}



/* Entry: 103e34bac; end: 103e34c4f; -[_TtC30CntUserSessionScopeGraphBridge38CntUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34bac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113018180));
  _swift_release(*(undefined8 *)(param_1 + _DAT_113018188));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113018190));
  return;
}



/* Entry: 103e34c50; end: 103e34c87;  */

undefined1  [16] FUN_103e34c50(void)

{
  return ZEXT816(0x110717068);
}



/* Entry: 103e34c88; end: 103e34ccb; -[SCCntUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103e34c88(undefined8 param_1)

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



/* Entry: 103e34ccc; end: 103e34cff;  */

void FUN_103e34ccc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e34d00; end: 103e34d47; -[SCCntUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34d00(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130181e8);
  _objc_release(*(undefined8 *)(param_1 + _DAT_1130181f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1130181f8));
  return;
}



/* Entry: 103e34d48; end: 103e34d67;  */

void FUN_103e34d48(void)

{
  _objc_opt_self(&PTR_PTR_112953c90);
  return;
}



/* Entry: 103e34d68; end: 103e34d73; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34d68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018228;
  _swift_beginAccess(param_1 + _DAT_113018228,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e34d74; end: 103e34d7f; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34d74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018228;
  _swift_beginAccess(param_1 + _DAT_113018228,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e34d80; end: 103e34d8b; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider cntUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34d80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113018230;
  _swift_beginAccess(param_1 + _DAT_113018230,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e34d8c; end: 103e34dcf;  */

void FUN_103e34d8c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e34dd0; end: 103e34ddb; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider setCntUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e34dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113018230;
  _swift_beginAccess(param_1 + _DAT_113018230,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e34ddc; end: 103e34e2f;  */

void FUN_103e34ddc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e34e30; end: 103e35043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e34e30(void)

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
    func_0x000107c3fca8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e347e4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113018180);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113018238);
      *(long *)(unaff_x20 + _DAT_113018238) = lVar4;
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
             "CntUserSessionScopeGraphBridge/SCSCAuthenticatedNetworkServicesSaberServiceProvider.swift"
             ,0x59,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e34f5c);
  (*pcVar1)();
}



/* Entry: 103e35044; end: 103e35077; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider provide] */

void FUN_103e35044(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e34e30();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e35078; end: 103e350ab; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider __safeProvide] */

void FUN_103e35078(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e34f5c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e350ac; end: 103e350ef; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider end] */

void FUN_103e350ac(undefined8 param_1)

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



/* Entry: 103e350f0; end: 103e35287;  */

void FUN_103e350f0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e3f2e0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1c0d20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CntUserSessionScopeGraphBridge/SCSCAuthenticatedNetworkServicesSaberServiceProvider.swift"
                   ,0x59,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e35288);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5351c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e35288; end: 103e35333; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e35288(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e350f0(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e35334; end: 103e353a7; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35334(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113018228,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113018230,0);
  *(undefined8 *)(param_1 + _DAT_113018238) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e353a8; end: 103e353db;  */

void FUN_103e353a8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e353dc; end: 103e35423; -[SCSCAuthenticatedNetworkServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e353dc(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018228);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113018230);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113018238));
  return;
}



/* Entry: 103e35424; end: 103e35443;  */

void FUN_103e35424(void)

{
  _objc_opt_self(&PTR_PTR_113018280);
  return;
}



/* Entry: 103e35444; end: 103e3544f; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130182e8;
  _swift_beginAccess(param_1 + _DAT_1130182e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e35450; end: 103e3545b; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130182e8;
  _swift_beginAccess(param_1 + _DAT_1130182e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e3545c; end: 103e35467; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider cntUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e3545c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130182f0;
  _swift_beginAccess(param_1 + _DAT_1130182f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e35468; end: 103e354ab;  */

void FUN_103e35468(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e354ac; end: 103e354b7; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider setCntUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e354ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130182f0;
  _swift_beginAccess(param_1 + _DAT_1130182f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e354b8; end: 103e3550b;  */

void FUN_103e354b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e3550c; end: 103e3571f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e3550c(void)

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
    func_0x000107c3fca8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e34910();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113018188);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130182f8);
      *(long *)(unaff_x20 + _DAT_1130182f8) = lVar4;
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
             "CntUserSessionScopeGraphBridge/SCSCUserUnifiedGRPCServicesSaberServiceProvider.swift",
             0x54,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e35638);
  (*pcVar1)();
}



/* Entry: 103e35720; end: 103e35753; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider provide] */

void FUN_103e35720(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e3550c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e35754; end: 103e35787; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider __safeProvide] */

void FUN_103e35754(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e35638();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e35788; end: 103e357cb; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider end] */

void FUN_103e35788(undefined8 param_1)

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



/* Entry: 103e357cc; end: 103e35963;  */

void FUN_103e357cc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e3f2e0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000026,0x800000010f1c0d20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "CntUserSessionScopeGraphBridge/SCSCUserUnifiedGRPCServicesSaberServiceProvider.swift"
                   ,0x54,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e35964);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c5351c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e35964; end: 103e35a0f; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e35964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e357cc(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e35a10; end: 103e35a83; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35a10(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130182e8,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_1130182f0,0);
  *(undefined8 *)(param_1 + _DAT_1130182f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e35a84; end: 103e35ab7;  */

void FUN_103e35a84(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e35ab8; end: 103e35aff; -[SCSCUserUnifiedGRPCServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35ab8(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130182e8);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_1130182f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130182f8));
  return;
}



/* Entry: 103e35b00; end: 103e35b1f;  */

void FUN_103e35b00(void)

{
  _objc_opt_self(&PTR_PTR_113018340);
  return;
}



/* Entry: 103e35b20; end: 103e35b2b; -[SCUnifiedGRPCServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35b20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130183a8;
  _swift_beginAccess(param_1 + _DAT_1130183a8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e35b2c; end: 103e35b37; -[SCUnifiedGRPCServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130183a8;
  _swift_beginAccess(param_1 + _DAT_1130183a8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e35b38; end: 103e35b43; -[SCUnifiedGRPCServicesSaberServiceProvider cntUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35b38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130183b0;
  _swift_beginAccess(param_1 + _DAT_1130183b0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e35b44; end: 103e35b87;  */

void FUN_103e35b44(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e35b88; end: 103e35b93; -[SCUnifiedGRPCServicesSaberServiceProvider setCntUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e35b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130183b0;
  _swift_beginAccess(param_1 + _DAT_1130183b0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e35b94; end: 103e35be7;  */

void FUN_103e35b94(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e35be8; end: 103e35dfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e35be8(void)

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
    func_0x000107c3fca8();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e34a3c();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113018190);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_1130183b8);
      *(long *)(unaff_x20 + _DAT_1130183b8) = lVar4;
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
             "CntUserSessionScopeGraphBridge/SCUnifiedGRPCServicesSaberServiceProvider.swift",0x4e,2
             ,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e35d14);
  (*pcVar1)();
}



/* Entry: 103e35dfc; end: 103e35e2f; -[SCUnifiedGRPCServicesSaberServiceProvider provide] */

void FUN_103e35dfc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e35be8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e35e30; end: 103e35e63; -[SCUnifiedGRPCServicesSaberServiceProvider __safeProvide] */

void FUN_103e35e30(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e35d14();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


