/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103fe4420; end: 103fe442b; -[SCSnapEditorHostServicesSaberServiceProvider previewUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe4420(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043aa0;
  _swift_beginAccess(param_1 + _DAT_113043aa0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe442c; end: 103fe446f;  */

void FUN_103fe442c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103fe4470; end: 103fe447b; -[SCSnapEditorHostServicesSaberServiceProvider setPreviewUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe4470(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113043aa0;
  _swift_beginAccess(param_1 + _DAT_113043aa0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fe447c; end: 103fe44cf;  */

void FUN_103fe447c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fe44d0; end: 103fe46e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe44d0(void)

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
    func_0x000107c4f1d4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fe0498();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113043320);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113043aa8);
      *(long *)(unaff_x20 + _DAT_113043aa8) = lVar4;
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
             "PreviewUserSessionScopeGraphBridge/SCSnapEditorHostServicesSaberServiceProvider.swift"
             ,0x55,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe45fc);
  (*pcVar1)();
}



/* Entry: 103fe46e4; end: 103fe4717; -[SCSnapEditorHostServicesSaberServiceProvider provide] */

void FUN_103fe46e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fe44d0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fe4718; end: 103fe474b; -[SCSnapEditorHostServicesSaberServiceProvider __safeProvide] */

void FUN_103fe4718(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fe45fc();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fe474c; end: 103fe478f; -[SCSnapEditorHostServicesSaberServiceProvider end] */

void FUN_103fe474c(undefined8 param_1)

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



/* Entry: 103fe4790; end: 103fe4927;  */

void FUN_103fe4790(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e24e00)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000002a,0x800000010f1db200,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PreviewUserSessionScopeGraphBridge/SCSnapEditorHostServicesSaberServiceProvider.swift"
                   ,0x55,2,0x3d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe4928);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fe4928; end: 103fe49d3; -[SCSnapEditorHostServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fe4928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103fe4790(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fe49d4; end: 103fe4a47; -[SCSnapEditorHostServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe49d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113043a98,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113043aa0,0);
  *(undefined8 *)(param_1 + _DAT_113043aa8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe4a48; end: 103fe4a7b;  */

void FUN_103fe4a48(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fe4a7c; end: 103fe4ac3; -[SCSnapEditorHostServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe4a7c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113043a98);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113043aa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113043aa8));
  return;
}



/* Entry: 103fe4ac4; end: 103fe4ae3;  */

void FUN_103fe4ac4(void)

{
  _objc_opt_self(&PTR_PTR_113043af0);
  return;
}



/* Entry: 103fe4ae4; end: 103fe4aef; -[SCSnapEditorTweakServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe4ae4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043b58;
  _swift_beginAccess(param_1 + _DAT_113043b58,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe4af0; end: 103fe4afb; -[SCSnapEditorTweakServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe4af0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113043b58;
  _swift_beginAccess(param_1 + _DAT_113043b58,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fe4afc; end: 103fe4b07; -[SCSnapEditorTweakServicesSaberServiceProvider previewUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe4afc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043b60;
  _swift_beginAccess(param_1 + _DAT_113043b60,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe4b08; end: 103fe4b4b;  */

void FUN_103fe4b08(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103fe4b4c; end: 103fe4b57; -[SCSnapEditorTweakServicesSaberServiceProvider setPreviewUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe4b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113043b60;
  _swift_beginAccess(param_1 + _DAT_113043b60,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fe4b58; end: 103fe4bab;  */

void FUN_103fe4b58(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103fe4bac; end: 103fe4dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe4bac(void)

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
    func_0x000107c4f1d4();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103fe05c4();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_113043328);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_113043b68);
      *(long *)(unaff_x20 + _DAT_113043b68) = lVar4;
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
             "PreviewUserSessionScopeGraphBridge/SCSnapEditorTweakServicesSaberServiceProvider.swift"
             ,0x56,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe4cd8);
  (*pcVar1)();
}



/* Entry: 103fe4dc0; end: 103fe4df3; -[SCSnapEditorTweakServicesSaberServiceProvider provide] */

void FUN_103fe4dc0(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103fe4bac();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fe4df4; end: 103fe4e27; -[SCSnapEditorTweakServicesSaberServiceProvider __safeProvide] */

void FUN_103fe4df4(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103fe4cd8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103fe4e28; end: 103fe4e6b; -[SCSnapEditorTweakServicesSaberServiceProvider end] */

void FUN_103fe4e28(undefined8 param_1)

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



/* Entry: 103fe4e6c; end: 103fe5003;  */

void FUN_103fe4e6c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e24e00)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd00000000000002a,0x800000010f1db200,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "PreviewUserSessionScopeGraphBridge/SCSnapEditorTweakServicesSaberServiceProvider.swift"
                   ,0x56,2,0x3d,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe5004);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c57804();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103fe5004; end: 103fe50af; -[SCSnapEditorTweakServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103fe5004(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103fe4e6c(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103fe50b0; end: 103fe5123; -[SCSnapEditorTweakServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe50b0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_113043b58,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_113043b60,0);
  *(undefined8 *)(param_1 + _DAT_113043b68) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe5124; end: 103fe5157;  */

void FUN_103fe5124(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103fe5158; end: 103fe519f; -[SCSnapEditorTweakServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5158(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113043b58);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_113043b60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113043b68));
  return;
}



/* Entry: 103fe51a0; end: 103fe51bf;  */

void FUN_103fe51a0(void)

{
  _objc_opt_self(&PTR_PTR_113043bb0);
  return;
}



/* Entry: 103fe51c0; end: 103fe522b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe51c0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001001d1668();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113043c20) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _swift_retain(param_2);
  _objc_msgSendSuper2(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103fe522c; end: 103fe5233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe522c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001001d1668();
  _objc_allocWithZone();
  *(long *)(lVar2 + _DAT_113043c20) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  _swift_retain();
  _objc_msgSendSuper2(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103fe5234; end: 103fe527f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5234(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043c20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe5280; end: 103fe52df; -[_TtC49SCLensUITestMetadataStoreProviderServicesProvider48SCLensUITestMetadataStoreProviderServicesWrapper init] */

void FUN_103fe5280(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCLensUITestMetadataStoreProviderServicesProvider.SCLensUITestMetadataStoreProviderServicesWrapper"
             ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe52ac);
  (*pcVar1)();
}



/* Entry: 103fe52e0; end: 103fe52ef;  */

undefined1  [16] FUN_103fe52e0(void)

{
  return ZEXT816(0x110730810);
}



/* Entry: 103fe52f0; end: 103fe530f; -[_TtC49SCLensUITestMetadataStoreProviderServicesProvider48SCLensUITestMetadataStoreProviderServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe52f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113043c20));
  return;
}



/* Entry: 103fe5310; end: 103fe535b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5310(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043c58) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe535c; end: 103fe53b3; -[SCSnapRecoveryServices initWithSnapRecovery:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe535c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_113043c58) = param_3;
  lVar2 = param_1;
  func_0x000100236800();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&lStack_30,puVar1);
  return;
}



/* Entry: 103fe53b4; end: 103fe540f; -[SCSnapRecoveryServices init] */

void FUN_103fe53b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCSnapRecoveryAPI.SCSnapRecoveryServices",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe53e0);
  (*pcVar1)();
}



/* Entry: 103fe5410; end: 103fe541f; -[SCSnapRecoveryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113043c58));
  return;
}



/* Entry: 103fe5420; end: 103fe54ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103fe5420(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  _objc_allocWithZone();
  func_0x00010134c94c(param_1,unaff_x20 + _DAT_113043c88);
  _objc_msgSendSuper2(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 103fe5500; end: 103fe555f; -[SnapEditorHostServices init] */

void FUN_103fe5500(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SnapEditorHostServices.SnapEditorHostServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe552c);
  (*pcVar1)();
}



/* Entry: 103fe5560; end: 103fe5587; -[SnapEditorHostServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5560(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_113043c88))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113043c88));
  return;
}



/* Entry: 103fe5588; end: 103fe55c7;  */

void FUN_103fe5588(void)

{
  undefined *puVar1;
  
  if (puRam0000000113043cb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbd230;
  _swift_getWitnessTable(&UNK_10dcbd230,&UNK_110730a28);
  puRam0000000113043cb8 = puVar1;
  return;
}



/* Entry: 103fe55c8; end: 103fe5673;  */

void FUN_103fe55c8(void)

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



/* Entry: 103fe5674; end: 103fe56bf;  */

void FUN_103fe5674(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103fe56c0; end: 103fe5797;  */

void FUN_103fe56c0(void)

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



/* Entry: 103fe5798; end: 103fe57b7;  */

void FUN_103fe5798(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103fe57b8; end: 103fe57f7;  */

void FUN_103fe57b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113043cc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbd300;
  _swift_getWitnessTable(&UNK_10dcbd300,&UNK_110730aa0);
  puRam0000000113043cc0 = puVar1;
  return;
}



/* Entry: 103fe57f8; end: 103fe5807;  */

undefined1  [16] FUN_103fe57f8(void)

{
  return ZEXT816(0x110730aa0);
}



/* Entry: 103fe5808; end: 103fe5817; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices unlockablesRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043cc8));
  return;
}



/* Entry: 103fe5818; end: 103fe5827; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices snapAdsRetriableRequestManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5818(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043cd0));
  return;
}



/* Entry: 103fe5828; end: 103fe5837; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices snapAdsRetriableRequestManagerV3] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113043cf0));
  return;
}



/* Entry: 103fe5838; end: 103fe58eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113043cc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043cd0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043cd8) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113043ce0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113043ce8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_113043cf0) = param_6;
  _objc_msgSendSuper2(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe58ec; end: 103fe59d3; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices initWithUnlockablesRetriableRequestManager:snapAdsRetriableRequestManager:gtqRetriableRequestManager:gtqViewTrackRetriableRequestManager:gtqCreationTrackRetriableRequestManager:snapAdsRetriableRequestManagerV3:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe58ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long lVar2;
  long lStack_60;
  long lStack_58;
  
  lVar2 = param_1;
  _swift_getObjectType();
  *(undefined8 *)(param_1 + _DAT_113043cc8) = param_3;
  *(undefined8 *)(param_1 + _DAT_113043cd0) = param_4;
  *(undefined8 *)(param_1 + _DAT_113043cd8) = param_5;
  *(undefined8 *)(param_1 + _DAT_113043ce0) = param_6;
  *(undefined8 *)(param_1 + _DAT_113043ce8) = param_7;
  *(undefined8 *)(param_1 + _DAT_113043cf0) = param_8;
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_msgSendSuper2(&lStack_60,puVar1);
  return;
}



/* Entry: 103fe59d4; end: 103fe5a33; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices init] */

void FUN_103fe59d4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCRetroNetworkServices.SCRetroNetworkServices",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe5a00);
  (*pcVar1)();
}



/* Entry: 103fe5a34; end: 103fe5aab; -[_TtC22SCRetroNetworkServices22SCRetroNetworkServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe5a34(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043cc8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043cd0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043cd8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043ce0));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113043ce8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113043cf0));
  return;
}



/* Entry: 103fe5aac; end: 103fe5ac3;  */

bool FUN_103fe5aac(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103fe5ac4; end: 103fe5b03;  */

void FUN_103fe5ac4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113043d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbd3f0;
  _swift_getWitnessTable(&UNK_10dcbd3f0,&UNK_110730ba0);
  puRam0000000113043d20 = puVar1;
  return;
}



/* Entry: 103fe5b04; end: 103fe5baf;  */

void FUN_103fe5b04(void)

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



/* Entry: 103fe5bb0; end: 103fe5bff;  */

void FUN_103fe5bb0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103fe5c00; end: 103fe5c3f;  */

void FUN_103fe5c00(void)

{
  undefined *puVar1;
  
  if (puRam0000000113043d28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcbd4d0;
  _swift_getWitnessTable(&UNK_10dcbd4d0,&UNK_110730c18);
  puRam0000000113043d28 = puVar1;
  return;
}



/* Entry: 103fe5c40; end: 103fe5ceb;  */

void FUN_103fe5c40(void)

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



/* Entry: 103fe5cec; end: 103fe5d63;  */

void FUN_103fe5cec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103fe5d64; end: 103fe5d8f;  */

long FUN_103fe5d64(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fe5d90; end: 103fe5f2b;  */

int FUN_103fe5d90(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103fe5f2c; end: 103fe600f;  */

long FUN_103fe5f2c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fe6010; end: 103fe60f3;  */

bool FUN_103fe6010(long *param_1,long *param_2)

{
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return false;
  }
  return param_1[2] == param_2[2];
}



/* Entry: 103fe60f4; end: 103fe611f;  */

long FUN_103fe60f4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fe6120; end: 103fe61c7;  */

int FUN_103fe6120(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103fe61c8; end: 103fe629f;  */

long FUN_103fe61c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fe62a0; end: 103fe647f;  */

undefined8 FUN_103fe62a0(long param_1,long param_2)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uStack_68;
  
  if (param_1 == param_2) {
    uVar10 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uStack_68 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uStack_68 = ~(-1L << (uVar9 & 0x3f));
    }
    uStack_68 = uStack_68 & *(ulong *)(param_1 + 0x40);
    uVar7 = 0;
    _swift_bridgeObjectRetain_n(param_1);
    _swift_bridgeObjectRetain(param_2);
    lVar5 = 0;
    do {
      while( true ) {
        if (uStack_68 == 0) {
          do {
            lVar11 = lVar5 + 1;
            if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103fe6480);
              (*pcVar3)();
            }
            if ((long)(uVar9 + 0x3f >> 6) <= lVar11) {
              uVar10 = 1;
              goto LAB_103fe6430;
            }
            uStack_68 = ((ulong *)(param_1 + 0x40))[lVar11];
            lVar5 = lVar5 + 1;
          } while (uStack_68 == 0);
          uVar8 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uStack_68 = uStack_68 - 1 & uStack_68;
        }
        else {
          uVar8 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uStack_68 = uStack_68 - 1 & uStack_68;
          lVar11 = lVar5;
        }
        uVar8 = LZCOUNT(uVar8) | lVar11 << 6;
        lVar4 = *(long *)(*(long *)(param_1 + 0x30) + uVar8 * 8);
        puVar1 = (ulong *)(*(long *)(param_1 + 0x38) + uVar8 * 0x10);
        uVar8 = *puVar1;
        uVar2 = puVar1[1];
        _objc_retain();
        _swift_bridgeObjectRetain(uVar2);
        lVar5 = lVar4;
        func_0x000100121450();
        _objc_release(lVar4);
        if ((uVar7 & 1) == 0) {
          _swift_bridgeObjectRelease(uVar2);
          uVar10 = 0;
          goto LAB_103fe6430;
        }
        puVar1 = (ulong *)(*(long *)(param_2 + 0x38) + lVar5 * 0x10);
        uVar6 = *puVar1;
        uVar7 = puVar1[1];
        lVar5 = lVar11;
        if (uVar6 != uVar8 || uVar7 != uVar2) break;
        _swift_bridgeObjectRelease(uVar2);
      }
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar6,uVar7,uVar8,uVar2,0);
      _swift_bridgeObjectRelease(uVar2);
    } while ((uVar6 & 1) != 0);
    uVar10 = 0;
LAB_103fe6430:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease_n(param_1,2);
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}



/* Entry: 103fe6480; end: 103fe6533;  */

undefined8 FUN_103fe6480(char *param_1,char *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uStack_68;
  
  if (*param_1 == *param_2) {
    lVar3 = *(long *)(param_2 + 0x10);
    uVar11 = *(ulong *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x0001038a4f38(uVar11,*(undefined8 *)(param_2 + 8));
    if ((uVar11 & 1) != 0) {
      if (lVar4 == lVar3) {
        uVar12 = 1;
      }
      else if (*(long *)(lVar4 + 0x10) == *(long *)(lVar3 + 0x10)) {
        uVar11 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
        uStack_68 = 0xffffffffffffffff;
        if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
          uStack_68 = ~(-1L << (uVar11 & 0x3f));
        }
        uStack_68 = uStack_68 & *(ulong *)(lVar4 + 0x40);
        uVar9 = 0;
        _swift_bridgeObjectRetain_n(lVar4);
        _swift_bridgeObjectRetain(lVar3);
        lVar7 = 0;
        do {
          while( true ) {
            if (uStack_68 == 0) {
              do {
                lVar13 = lVar7 + 1;
                if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103fe6480);
                  (*pcVar5)();
                }
                if ((long)(uVar11 + 0x3f >> 6) <= lVar13) {
                  uVar12 = 1;
                  goto LAB_103fe6430;
                }
                uStack_68 = ((ulong *)(lVar4 + 0x40))[lVar13];
                lVar7 = lVar7 + 1;
              } while (uStack_68 == 0);
              uVar10 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1
              ;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
              uStack_68 = uStack_68 - 1 & uStack_68;
            }
            else {
              uVar10 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1
              ;
              uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
              uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
              uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
              uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
              uStack_68 = uStack_68 - 1 & uStack_68;
              lVar13 = lVar7;
            }
            uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
            lVar6 = *(long *)(*(long *)(lVar4 + 0x30) + uVar10 * 8);
            puVar1 = (ulong *)(*(long *)(lVar4 + 0x38) + uVar10 * 0x10);
            uVar10 = *puVar1;
            uVar2 = puVar1[1];
            _objc_retain();
            _swift_bridgeObjectRetain(uVar2);
            lVar7 = lVar6;
            func_0x000100121450();
            _objc_release(lVar6);
            if ((uVar9 & 1) == 0) {
              _swift_bridgeObjectRelease(uVar2);
              uVar12 = 0;
              goto LAB_103fe6430;
            }
            puVar1 = (ulong *)(*(long *)(lVar3 + 0x38) + lVar7 * 0x10);
            uVar8 = *puVar1;
            uVar9 = puVar1[1];
            lVar7 = lVar13;
            if (uVar8 != uVar10 || uVar9 != uVar2) break;
            _swift_bridgeObjectRelease(uVar2);
          }
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar8,uVar9,uVar10,uVar2,0);
          _swift_bridgeObjectRelease(uVar2);
        } while ((uVar8 & 1) != 0);
        uVar12 = 0;
LAB_103fe6430:
        _swift_bridgeObjectRelease(lVar3);
        _swift_bridgeObjectRelease_n(lVar4,2);
      }
      else {
        uVar12 = 0;
      }
      return uVar12;
    }
  }
  return 0;
}



/* Entry: 103fe6534; end: 103fe6597;  */

undefined1 * FUN_103fe6534(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 103fe6598; end: 103fe65db;  */

undefined1 * FUN_103fe6598(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 103fe65dc; end: 103fe66eb;  */

int FUN_103fe65dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103fe66ec; end: 103fe674f;  */

uint FUN_103fe66ec(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_103fe6750(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103fe6750; end: 103fe683f;  */

undefined8 FUN_103fe6750(int *param_1,int *param_2)

{
  if (((((*param_1 == *param_2) && (param_1[2] == param_2[2])) &&
       (*(long *)(param_1 + 4) == *(long *)(param_2 + 4))) &&
      ((((*(long *)(param_1 + 6) == *(long *)(param_2 + 6) &&
         (*(long *)(param_1 + 8) == *(long *)(param_2 + 8))) &&
        ((*(long *)(param_1 + 10) == *(long *)(param_2 + 10) &&
         ((*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc) &&
          (*(long *)(param_1 + 0xe) == *(long *)(param_2 + 0xe))))))) &&
       (param_1[0x10] == param_2[0x10])))) &&
     ((((param_1[0x12] == param_2[0x12] && (*(long *)(param_1 + 0x14) == *(long *)(param_2 + 0x14)))
       && (*(long *)(param_1 + 0x16) == *(long *)(param_2 + 0x16))) &&
      ((*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18) &&
       (*(long *)(param_1 + 0x1a) == *(long *)(param_2 + 0x1a))))))) {
    return 1;
  }
  return 0;
}



/* Entry: 103fe6840; end: 103fe686b;  */

long FUN_103fe6840(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103fe686c; end: 103fe68e3;  */

int FUN_103fe686c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103fe68e4; end: 103fe696f; -[_TtC17SCAdConfigService17SCAdConfigService setAdConfigProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe68e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_113043d38);
  *(undefined8 *)(param_1 + _DAT_113043d38) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103fe6970; end: 103fe69cf; -[_TtC17SCAdConfigService17SCAdConfigService init] */

void FUN_103fe6970(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCAdConfigService.SCAdConfigService",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe699c);
  (*pcVar1)();
}



/* Entry: 103fe69d0; end: 103fe6a07; -[_TtC17SCAdConfigService17SCAdConfigService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe69d0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_113043d30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113043d38));
  return;
}



/* Entry: 103fe6a08; end: 103fe6a17; -[SCAdCTAConfigValue enable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe6a08(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043d68);
}



/* Entry: 103fe6a18; end: 103fe6a27; -[SCAdCTAConfigValue interactivePaddingHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe6a18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043d70);
}



/* Entry: 103fe6a28; end: 103fe6a37; -[SCAdCTAConfigValue animationTimeMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe6a28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043d78);
}



/* Entry: 103fe6a38; end: 103fe6a4b; -[SCAdCTAConfigValue animationDelayMs] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe6a38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043d80);
}



/* Entry: 103fe6a4c; end: 103fe6b63; -[SCAdCTAConfigValue initWithEnable:interactivePaddingHeight:animationTimeMs:animationDelayMs:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe6a4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_4;
  _swift_getObjectType();
  *(undefined1 *)(param_4 + _DAT_113043d68) = param_6;
  *(undefined8 *)(param_4 + _DAT_113043d70) = param_1;
  *(undefined8 *)(param_4 + _DAT_113043d78) = param_2;
  *(undefined8 *)(param_4 + _DAT_113043d80) = param_3;
  lStack_50 = param_4;
  lStack_48 = lVar1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe6b64; end: 103fe6b83; -[SCAdCTAConfigValue hash] */

void FUN_103fe6b64(void)

{
  FUN_103fe6b84();
  return;
}



/* Entry: 103fe6b84; end: 103fe6c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe6b84(void)

{
  long unaff_x20;
  double dVar1;
  undefined1 auStack_78 [72];
  
  __ss6HasherVABycfC(auStack_78);
  __ss6HasherV8_combineyys5UInt8VF(*(undefined1 *)(unaff_x20 + _DAT_113043d68));
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113043d70) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_113043d70);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113043d78) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_113043d78);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  dVar1 = 0.0;
  if (*(double *)(unaff_x20 + _DAT_113043d80) != 0.0) {
    dVar1 = *(double *)(unaff_x20 + _DAT_113043d80);
  }
  __ss6HasherV8_combineyys6UInt64VF(dVar1);
  __ss6HasherV8finalizeSiyF();
  return;
}



/* Entry: 103fe6c38; end: 103fe6d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_103fe6c38(undefined8 param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar4 = unaff_x20;
  _swift_getObjectType();
  func_0x000100672b50(param_1,auStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(auStack_80);
  }
  else {
    plVar5 = &lStack_88;
    _swift_dynamicCast(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar5 & 1) != 0) {
      bVar2 = *(byte *)(unaff_x20 + _DAT_113043d68);
      bVar3 = *(byte *)(lStack_88 + _DAT_113043d68);
      dVar6 = *(double *)(unaff_x20 + _DAT_113043d70);
      dVar7 = *(double *)(lStack_88 + _DAT_113043d70);
      dVar8 = *(double *)(unaff_x20 + _DAT_113043d78);
      dVar9 = *(double *)(lStack_88 + _DAT_113043d78);
      dVar10 = *(double *)(unaff_x20 + _DAT_113043d80);
      dVar11 = *(double *)(lStack_88 + _DAT_113043d80);
      _objc_release();
      bVar1 = 0;
      if (dVar8 == dVar9) {
        bVar1 = dVar6 == dVar7 & (bVar2 ^ bVar3 ^ 0xff);
      }
      if (dVar10 != dVar11) {
        return 0;
      }
      return bVar1;
    }
  }
  return 0;
}



/* Entry: 103fe6d38; end: 103fe6db7; -[SCAdCTAConfigValue isEqual:] */

uint FUN_103fe6d38(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    _objc_retain(param_1);
  }
  else {
    _objc_retain(param_1);
    _swift_unknownObjectRetain(param_3);
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_40);
    _swift_unknownObjectRelease(param_3);
  }
  FUN_103fe6c38(&uStack_40);
  _objc_release(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103fe6db8; end: 103fe6dbb; -[SCAdCTAConfigValue copyWithZone:] */

void FUN_103fe6db8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103fe6dbc; end: 103fe6dd7; -[SCAdCTAConfigValue description] */

void FUN_103fe6dbc(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103fe6dd8; end: 103fe6e73; -[SCAdCTAConfigValue init] */

void FUN_103fe6dd8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCAdConfigService/AdCTAConfigValueWrapper.swift",0x2f,2,0x48,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103fe6e20);
  (*pcVar1)();
}



/* Entry: 103fe6e74; end: 103fe6e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103fe6e74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_113043d68) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_113043d70) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113043d78) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113043d80) = param_3;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103fe6e78; end: 103fe6e87; -[SCAdMidRollStoryAdsConfigValue enablePublisherStories] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe6e78(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043db0);
}



/* Entry: 103fe6e88; end: 103fe6e97; -[SCAdMidRollStoryAdsConfigValue enableShows] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103fe6e88(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113043db8);
}



/* Entry: 103fe6e98; end: 103fe6ea7; -[SCAdMidRollStoryAdsConfigValue expandButtonIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe6e98(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043dc0);
}



/* Entry: 103fe6ea8; end: 103fe6eb7; -[SCAdMidRollStoryAdsConfigValue additionalNumberOfSnapsWithPreparedMedia] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103fe6ea8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113043dc8);
}


