/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103e41dfc; end: 103e41e07; -[SCSponsoredSnapConversationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e41dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ac40;
  _swift_beginAccess(param_1 + _DAT_11301ac40,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e41e08; end: 103e41e13; -[SCSponsoredSnapConversationServicesSaberServiceProvider convoUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e41e08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ac48;
  _swift_beginAccess(param_1 + _DAT_11301ac48,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e41e14; end: 103e41e57;  */

void FUN_103e41e14(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e41e58; end: 103e41e63; -[SCSponsoredSnapConversationServicesSaberServiceProvider setConvoUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e41e58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ac48;
  _swift_beginAccess(param_1 + _DAT_11301ac48,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e41e64; end: 103e41eb7;  */

void FUN_103e41e64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e41eb8; end: 103e420cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e41eb8(void)

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
    func_0x000107c40768();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e3c018();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11301a028);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11301ac50);
      *(long *)(unaff_x20 + _DAT_11301ac50) = lVar4;
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
             "ConvoUserSessionScopeGraphBridge/SCSponsoredSnapConversationServicesSaberServiceProvider.swift"
             ,0x5e,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e41fe4);
  (*pcVar1)();
}



/* Entry: 103e420cc; end: 103e420ff; -[SCSponsoredSnapConversationServicesSaberServiceProvider provide] */

void FUN_103e420cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e41eb8();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e42100; end: 103e42133; -[SCSponsoredSnapConversationServicesSaberServiceProvider __safeProvide] */

void FUN_103e42100(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e41fe4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e42134; end: 103e42177; -[SCSponsoredSnapConversationServicesSaberServiceProvider end] */

void FUN_103e42134(undefined8 param_1)

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



/* Entry: 103e42178; end: 103e4230f;  */

void FUN_103e42178(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e3ddb0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000028,0x800000010f1c2250,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ConvoUserSessionScopeGraphBridge/SCSponsoredSnapConversationServicesSaberServiceProvider.swift"
                   ,0x5e,2,0x46,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e42310);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c539a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e42310; end: 103e423bb; -[SCSponsoredSnapConversationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e42310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e42178(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e423bc; end: 103e4242f; -[SCSponsoredSnapConversationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e423bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301ac40,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301ac48,0);
  *(undefined8 *)(param_1 + _DAT_11301ac50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e42430; end: 103e42463;  */

void FUN_103e42430(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e42464; end: 103e424ab; -[SCSponsoredSnapConversationServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42464(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ac40);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ac48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11301ac50));
  return;
}



/* Entry: 103e424ac; end: 103e424cb;  */

void FUN_103e424ac(void)

{
  _objc_opt_self(&PTR_PTR_11301ac98);
  return;
}



/* Entry: 103e424cc; end: 103e424d7; -[SCUrlPreviewServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e424cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ad00;
  _swift_beginAccess(param_1 + _DAT_11301ad00,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e424d8; end: 103e424e3; -[SCUrlPreviewServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e424d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ad00;
  _swift_beginAccess(param_1 + _DAT_11301ad00,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e424e4; end: 103e424ef; -[SCUrlPreviewServicesSaberServiceProvider convoUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e424e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ad08;
  _swift_beginAccess(param_1 + _DAT_11301ad08,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e424f0; end: 103e42533;  */

void FUN_103e424f0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e42534; end: 103e4253f; -[SCUrlPreviewServicesSaberServiceProvider setConvoUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42534(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ad08;
  _swift_beginAccess(param_1 + _DAT_11301ad08,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e42540; end: 103e42593;  */

void FUN_103e42540(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e42594; end: 103e427a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e42594(void)

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
    func_0x000107c40768();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e3c144();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11301a030);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11301ad10);
      *(long *)(unaff_x20 + _DAT_11301ad10) = lVar4;
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
             "ConvoUserSessionScopeGraphBridge/SCUrlPreviewServicesSaberServiceProvider.swift",0x4f,
             2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e426c0);
  (*pcVar1)();
}



/* Entry: 103e427a8; end: 103e427db; -[SCUrlPreviewServicesSaberServiceProvider provide] */

void FUN_103e427a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e42594();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e427dc; end: 103e4280f; -[SCUrlPreviewServicesSaberServiceProvider __safeProvide] */

void FUN_103e427dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e426c0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e42810; end: 103e42853; -[SCUrlPreviewServicesSaberServiceProvider end] */

void FUN_103e42810(undefined8 param_1)

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



/* Entry: 103e42854; end: 103e429eb;  */

void FUN_103e42854(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e3ddb0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000028,0x800000010f1c2250,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ConvoUserSessionScopeGraphBridge/SCUrlPreviewServicesSaberServiceProvider.swift"
                   ,0x4f,2,0x46,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e429ec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c539a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e429ec; end: 103e42a97; -[SCUrlPreviewServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e429ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e42854(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e42a98; end: 103e42b0b; -[SCUrlPreviewServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42a98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301ad00,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301ad08,0);
  *(undefined8 *)(param_1 + _DAT_11301ad10) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e42b0c; end: 103e42b3f;  */

void FUN_103e42b0c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e42b40; end: 103e42b87; -[SCUrlPreviewServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42b40(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ad00);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301ad08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11301ad10));
  return;
}



/* Entry: 103e42b88; end: 103e42ba7;  */

void FUN_103e42b88(void)

{
  _objc_opt_self(&PTR_PTR_11301ad58);
  return;
}



/* Entry: 103e42ba8; end: 103e42bb3; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42ba8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301adc0;
  _swift_beginAccess(param_1 + _DAT_11301adc0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e42bb4; end: 103e42bbf; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42bb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301adc0;
  _swift_beginAccess(param_1 + _DAT_11301adc0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e42bc0; end: 103e42bcb; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider convoUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42bc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301adc8;
  _swift_beginAccess(param_1 + _DAT_11301adc8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e42bcc; end: 103e42c0f;  */

void FUN_103e42bcc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103e42c10; end: 103e42c1b; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider setConvoUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e42c10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301adc8;
  _swift_beginAccess(param_1 + _DAT_11301adc8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e42c1c; end: 103e42c6f;  */

void FUN_103e42c1c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103e42c70; end: 103e42e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103e42c70(void)

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
    func_0x000107c40768();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103e3c270();
      _swift_allocObject();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_11301a038);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_11301add0);
      *(long *)(unaff_x20 + _DAT_11301add0) = lVar4;
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
             "ConvoUserSessionScopeGraphBridge/SCVoiceNoteTranscriptionServicesSaberServiceProvider.swift"
             ,0x5b,2,0x31,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e42d9c);
  (*pcVar1)();
}



/* Entry: 103e42e84; end: 103e42eb7; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider provide] */

void FUN_103e42e84(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_103e42c70();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e42eb8; end: 103e42eeb; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider __safeProvide] */

void FUN_103e42eb8(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000103e42d9c();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103e42eec; end: 103e42f2f; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider end] */

void FUN_103e42eec(undefined8 param_1)

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



/* Entry: 103e42f30; end: 103e430c7;  */

void FUN_103e42f30(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e3ddb0)) {
      uVar2 = 0;
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0xd000000000000028,0x800000010f1c2250,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        __ss11_StringGutsV4growyySiF(0x15);
        _swift_bridgeObjectRelease(0xe000000000000000);
        __sSS6appendyySSF(param_2,param_3);
        __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                  ("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                   "ConvoUserSessionScopeGraphBridge/SCVoiceNoteTranscriptionServicesSaberServiceProvider.swift"
                   ,0x5b,2,0x46,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103e430c8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    __ss27_bridgeAnythingToObjectiveCyyXlxlF();
    func_0x000107c539a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103e430c8; end: 103e43173; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103e430c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103e42f30(auStack_50,uVar1,param_2);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103e43174; end: 103e431e7; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43174(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  _swift_getObjectType();
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301adc0,0);
  _swift_unknownObjectWeakInit(param_1 + _DAT_11301adc8,0);
  *(undefined8 *)(param_1 + _DAT_11301add0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e431e8; end: 103e4321b;  */

void FUN_103e431e8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103e4321c; end: 103e43263; -[SCVoiceNoteTranscriptionServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4321c(long param_1)

{
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301adc0);
  _swift_unknownObjectWeakDestroy(param_1 + _DAT_11301adc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_11301add0));
  return;
}



/* Entry: 103e43264; end: 103e43283;  */

void FUN_103e43264(void)

{
  _objc_opt_self(&PTR_PTR_11301ae18);
  return;
}



/* Entry: 103e43284; end: 103e432cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43284(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301ae80) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e432d0; end: 103e4332f; -[FriendsFeedUpdateSequenceTrackerServices init] */

void FUN_103e432d0(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendsFeedUpdateSequenceTrackerServices.FriendsFeedUpdateSequenceTrackerServices",
             0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e432fc);
  (*pcVar1)();
}



/* Entry: 103e43330; end: 103e4333f; -[FriendsFeedUpdateSequenceTrackerServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301ae80));
  return;
}



/* Entry: 103e43340; end: 103e433cb; -[_TtC44FriendsFeedNativeDataModelTranslatorServices44FriendsFeedNativeDataModelTranslatorServices setTranslator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43340(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11301aeb8);
  *(undefined8 *)(param_1 + _DAT_11301aeb8) = param_3;
  _objc_retain(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 103e433cc; end: 103e4342b; -[_TtC44FriendsFeedNativeDataModelTranslatorServices44FriendsFeedNativeDataModelTranslatorServices init] */

void FUN_103e433cc(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("FriendsFeedNativeDataModelTranslatorServices.FriendsFeedNativeDataModelTranslatorServices"
             ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e433f8);
  (*pcVar1)();
}



/* Entry: 103e4342c; end: 103e43463; -[_TtC44FriendsFeedNativeDataModelTranslatorServices44FriendsFeedNativeDataModelTranslatorServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e4342c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + _DAT_11301aeb0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301aeb8));
  return;
}



/* Entry: 103e43464; end: 103e434cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43464(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001001c7cbc();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_11301aef0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103e434d0; end: 103e434d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e434d0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001001c7cbc();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301aef0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103e434d8; end: 103e43523;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e434d8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301aef0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e43524; end: 103e43543; -[_TtC21MessagingModelService22MessagingModelServices messagingMessageProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43524(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_11301aef0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103e43544; end: 103e435a3; -[_TtC21MessagingModelService22MessagingModelServices init] */

void FUN_103e43544(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("MessagingModelService.MessagingModelServices",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e43570);
  (*pcVar1)();
}



/* Entry: 103e435a4; end: 103e435b3;  */

undefined1  [16] FUN_103e435a4(void)

{
  return ZEXT816(0x110717ee8);
}



/* Entry: 103e435b4; end: 103e435c3; -[_TtC21MessagingModelService22MessagingModelServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e435b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_11301aef0));
  return;
}



/* Entry: 103e435c4; end: 103e43603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e435c4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301af20;
  _swift_beginAccess(unaff_x20 + _DAT_11301af20,auStack_38,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 103e43604; end: 103e436bb; -[_TtC33SponsoredSnapConversationServices33SponsoredSnapConversationServices setSponsoredSnapConversationSeqNumProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301af20;
  _swift_beginAccess(param_1 + _DAT_11301af20,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 103e436bc; end: 103e436fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103e436bc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_11301af20;
  _swift_beginAccess(unaff_x20 + _DAT_11301af20,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103e436fc;
  return auVar2;
}



/* Entry: 103e436fc; end: 103e436ff;  */

void FUN_103e436fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103e43700; end: 103e4374b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e43700(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301af20) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e4374c; end: 103e437a7; -[_TtC33SponsoredSnapConversationServices33SponsoredSnapConversationServices init] */

void FUN_103e4374c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SponsoredSnapConversationServices.SponsoredSnapConversationServices",0x43,"init()",6,0
            );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e43778);
  (*pcVar1)();
}



/* Entry: 103e437a8; end: 103e437b7; -[_TtC33SponsoredSnapConversationServices33SponsoredSnapConversationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e437a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301af20));
  return;
}



/* Entry: 103e437b8; end: 103e437c7; -[_TtC30VoiceNoteTranscriptionServices30VoiceNoteTranscriptionServices voiceNoteTranscriptionService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e437b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11301af50));
  return;
}



/* Entry: 103e437c8; end: 103e4385f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e437c8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11301af50) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103e43860; end: 103e438bf; -[_TtC30VoiceNoteTranscriptionServices30VoiceNoteTranscriptionServices init] */

void FUN_103e43860(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("VoiceNoteTranscriptionServices.VoiceNoteTranscriptionServices",0x3d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103e4388c);
  (*pcVar1)();
}



/* Entry: 103e438c0; end: 103e438cf; -[_TtC30VoiceNoteTranscriptionServices30VoiceNoteTranscriptionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103e438c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11301af50));
  return;
}



/* Entry: 103e438d0; end: 103e43913;  */

uint FUN_103e438d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_103e43914(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e43914; end: 103e43a17;  */

undefined8 FUN_103e43914(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)) &&
     ((uVar1 = param_1[2], uVar1 == param_2[2] && param_1[3] == param_2[3] ||
      (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF()
      , (uVar1 & 1) != 0)))) {
    uVar1 = param_2[5];
    if (param_1[5] == 0) {
      if (uVar1 == 0) {
        return 1;
      }
    }
    else if ((uVar1 != 0) &&
            (((uVar2 = param_1[4], uVar2 == param_2[4] && (param_1[5] == uVar1)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103e43a18; end: 103e43af7;  */

undefined8 * FUN_103e43a18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Entry: 103e43af8; end: 103e43b4b;  */

undefined8 * FUN_103e43af8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 103e43b4c; end: 103e43bef;  */

int FUN_103e43b4c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103e43bf0; end: 103e43c3f;  */

undefined8 FUN_103e43bf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x11301af80;
  func_0x0001000285a8(0x11301af80,&UNK_10dc9e8f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103e43c40; end: 103e43ccf;  */

uint FUN_103e43c40(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_e8 = param_1[0x17];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_28 = param_2[0x17];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_103e43cd0(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 103e43cd0; end: 103e4405b;  */

undefined8 FUN_103e43cd0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  
  uVar3 = param_1[1];
  uVar2 = param_2[1];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = *param_1;
    if ((uVar4 != *param_2 || uVar3 != uVar2) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,*param_2,uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[3];
  uVar2 = param_2[3];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[2];
    if (((uVar4 != param_2[2]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[2],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[5];
  uVar2 = param_2[5];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[4];
    if (((uVar4 != param_2[4]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[4],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[7];
  uVar2 = param_2[7];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[6];
    if (((uVar4 != param_2[6]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[6],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[9];
  uVar2 = param_2[9];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[8];
    if (((uVar4 != param_2[8]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[8],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar3 = param_1[0xb];
  uVar2 = param_2[0xb];
  if (uVar3 == 0) {
    if (uVar2 != 0) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0) {
      return 0;
    }
    uVar4 = param_1[10];
    if (((uVar4 != param_2[10]) || (uVar3 != uVar2)) &&
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (uVar4,uVar3,param_2[10],uVar2,0), (uVar4 & 1) == 0)) {
      return 0;
    }
  }
  uVar2 = param_1[0xc];
  uVar3 = param_2[0xc];
  if (uVar2 == 0) {
    if (uVar3 != 0) {
      return 0;
    }
  }
  else {
    if (uVar3 == 0) {
      return 0;
    }
    FUN_103e46778(uVar2,uVar3);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
  }
  if ((((((byte)param_1[0xd] ^ (byte)param_2[0xd]) & 1) == 0) &&
      ((int)param_1[0xe] == (int)param_2[0xe])) && (param_1[0xf] == param_2[0xf])) {
    uStack_e8 = param_1[0x11];
    uStack_f0 = param_1[0x10];
    uStack_d8 = param_1[0x13];
    uStack_e0 = param_1[0x12];
    uStack_c8 = param_1[0x15];
    uStack_d0 = param_1[0x14];
    uStack_b8 = param_1[0x17];
    uStack_c0 = param_1[0x16];
    uStack_168 = param_1[0x11];
    uStack_170 = param_1[0x10];
    uStack_158 = param_1[0x13];
    uStack_160 = param_1[0x12];
    uStack_a8 = param_2[0x11];
    uStack_b0 = param_2[0x10];
    uStack_98 = param_2[0x13];
    uStack_a0 = param_2[0x12];
    uStack_88 = param_2[0x15];
    uStack_90 = param_2[0x14];
    uStack_78 = param_2[0x17];
    uStack_80 = param_2[0x16];
    uStack_1a8 = param_2[0x11];
    uStack_1b0 = param_2[0x10];
    uStack_198 = param_2[0x13];
    uStack_1a0 = param_2[0x12];
    uStack_148 = param_1[0x15];
    uStack_150 = param_1[0x14];
    uStack_138 = param_1[0x17];
    uStack_140 = param_1[0x16];
    uStack_188 = param_2[0x15];
    uStack_190 = param_2[0x14];
    uStack_178 = param_2[0x17];
    uStack_180 = param_2[0x16];
    uStack_130 = uStack_1b0;
    uStack_128 = uStack_1a8;
    uStack_120 = uStack_1a0;
    uStack_118 = uStack_198;
    uStack_110 = uStack_190;
    uStack_108 = uStack_188;
    uStack_100 = uStack_180;
    uStack_f8 = uStack_178;
    if (uStack_c8 >> 1 == 0xffffffff) {
      if ((uStack_88 & 0xfffffffffffffffe) == 0x1fffffffe) {
        return 1;
      }
    }
    else if ((uStack_88 & 0xfffffffffffffffe) != 0x1fffffffe) {
      uStack_1e8 = param_2[0x11];
      uStack_1f0 = param_2[0x10];
      uStack_1d8 = param_2[0x13];
      uStack_1e0 = param_2[0x12];
      uStack_1c8 = param_2[0x15];
      uStack_1d0 = param_2[0x14];
      uStack_1b8 = param_2[0x17];
      uStack_1c0 = param_2[0x16];
      uStack_68 = param_1[0x11];
      uStack_70 = param_1[0x10];
      uStack_58 = param_1[0x13];
      uStack_60 = param_1[0x12];
      uStack_48 = param_1[0x15];
      uStack_50 = param_1[0x14];
      uStack_38 = param_1[0x17];
      uStack_40 = param_1[0x16];
      puVar1 = &uStack_70;
      FUN_103e44f20(puVar1,&uStack_1f0);
      if (((ulong)puVar1 & 1) == 0) {
        return 0;
      }
      return 1;
    }
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    uStack_1c0 = uStack_140;
    uStack_1b8 = uStack_138;
    FUN_103e43bf0(&uStack_f0,&uStack_70);
    FUN_103e43bf0(&uStack_b0,&uStack_70);
    FUN_103e446fc(&uStack_1f0);
  }
  return 0;
}



/* Entry: 103e4405c; end: 103e4416f;  */

long FUN_103e4405c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103e44170; end: 103e444cb;  */

undefined8 * FUN_103e44170(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar8 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar8;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar2 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar2;
  uVar5 = param_2[0xc];
  param_1[0xc] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  uVar4 = param_2[0xe];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar4;
  uVar3 = param_2[0x15];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar5);
  if (uVar3 >> 1 == 0xffffffff) {
    uVar6 = param_2[0x10];
    uVar8 = param_2[0x13];
    uVar7 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar6;
    param_1[0x13] = uVar8;
    param_1[0x12] = uVar7;
    uVar6 = param_2[0x14];
    uVar8 = param_2[0x17];
    uVar7 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar6;
    param_1[0x17] = uVar8;
    param_1[0x16] = uVar7;
  }
  else {
    uVar6 = param_2[0x10];
    uVar1 = param_2[0x11];
    uVar7 = param_2[0x12];
    uVar2 = param_2[0x13];
    uVar4 = param_2[0x14];
    uVar8 = param_2[0x16];
    uVar5 = param_2[0x17];
    func_0x000103e44088(uVar6,uVar1,uVar7,uVar2,uVar4,uVar3,uVar8,uVar5);
    param_1[0x10] = uVar6;
    param_1[0x11] = uVar1;
    param_1[0x12] = uVar7;
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar3;
    param_1[0x16] = uVar8;
    param_1[0x17] = uVar5;
  }
  return param_1;
}



/* Entry: 103e444cc; end: 103e4460b;  */

undefined8 FUN_103e444cc(undefined8 param_1)

{
  FUN_103e45088();
  return param_1;
}



/* Entry: 103e4460c; end: 103e446fb;  */

int FUN_103e4460c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x30] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103e446fc; end: 103e44743;  */

undefined8 FUN_103e446fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x11301af88;
  func_0x0001000285a8(0x11301af88,&UNK_10dc9e938);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103e44744; end: 103e4478b;  */

uint FUN_103e44744(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_103e4478c(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103e4478c; end: 103e4492b;  */

undefined8 FUN_103e4478c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    if ((char)param_1[3] == '\x01') {
      if ((char)param_2[3] != '\x01') {
        return 0;
      }
    }
    else if ((char)param_2[3] == '\x01' || param_1[2] != param_2[2]) {
      return 0;
    }
    if ((char)param_1[5] == '\x01') {
      if ((char)param_2[5] != '\x01') {
        return 0;
      }
    }
    else {
      if ((char)param_2[5] == '\x01') {
        return 0;
      }
      if (param_1[4] != param_2[4]) {
        return 0;
      }
    }
    uVar1 = param_2[7];
    if (param_1[7] == 0) {
      if (uVar1 == 0) {
        return 1;
      }
    }
    else if ((uVar1 != 0) &&
            (((uVar2 = param_1[6], uVar2 == param_2[6] && (param_1[7] == uVar1)) ||
             (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                        (), (uVar2 & 1) != 0)))) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103e4492c; end: 103e449b7;  */

undefined8 * FUN_103e4492c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Entry: 103e449b8; end: 103e44a1b;  */

undefined8 * FUN_103e449b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Entry: 103e44a1c; end: 103e44ac3;  */

int FUN_103e44a1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103e44ac4; end: 103e44b0b;  */

uint FUN_103e44ac4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = *(undefined1 *)(param_2 + 4);
  FUN_103e44b0c(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103e44b0c; end: 103e44beb;  */

undefined8 FUN_103e44b0c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if ((uVar1 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar1 & 1) != 0)) {
    if (*(char *)((long)param_1 + 0x14) == '\x01') {
      if (*(char *)((long)param_2 + 0x14) != '\x01') {
        return 0;
      }
    }
    else if (*(char *)((long)param_2 + 0x14) == '\x01' || (int)param_1[2] != (int)param_2[2]) {
      return 0;
    }
    if ((char)param_1[4] == '\x01') {
      if ((char)param_2[4] == '\x01') {
        return 1;
      }
    }
    else if (((char)param_2[4] != '\x01') && (param_1[3] == param_2[3])) {
      return 1;
    }
  }
  return 0;
}



/* Entry: 103e44bec; end: 103e44bf3;  */

void FUN_103e44bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 103e44bf4; end: 103e44c3f;  */

undefined8 * FUN_103e44bf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Entry: 103e44c40; end: 103e44cab;  */

undefined8 * FUN_103e44c40(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 2) = uVar1;
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 103e44cac; end: 103e44cff;  */

undefined8 * FUN_103e44cac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x14) = *(undefined1 *)((long)param_2 + 0x14);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 103e44d00; end: 103e44ddb;  */

int FUN_103e44d00(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103e44ddc; end: 103e44e1b;  */

void FUN_103e44ddc(void)

{
  undefined *puVar1;
  
  if (puRam000000011301af90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc9ea18;
  _swift_getWitnessTable(&UNK_10dc9ea18,&UNK_1107182c0);
  puRam000000011301af90 = puVar1;
  return;
}



/* Entry: 103e44e1c; end: 103e44ec7;  */

void FUN_103e44e1c(void)

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



/* Entry: 103e44ec8; end: 103e44ed7;  */

undefined1  [16] FUN_103e44ec8(void)

{
  return ZEXT816(0x1107182c0);
}



/* Entry: 103e44ed8; end: 103e44f1f;  */

uint FUN_103e44ed8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_103e44f20(&uStack_90,&uStack_50);
  return uVar1 & 1;
}


