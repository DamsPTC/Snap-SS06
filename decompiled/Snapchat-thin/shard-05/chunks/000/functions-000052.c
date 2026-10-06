/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a96e58; end: 103a96e9b; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider end] */

void FUN_103a96e58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a96e9c; end: 103a97033;  */

void FUN_103a96e9c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6af80)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f195080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushActiveUserSessionScopeGraphBridge/SCNotificationCenterButtonProvidingServicesSaberServiceProvider.swift"
                            ,0x6b,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a97034);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a97034; end: 103a970df; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a97034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a96e9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a970e0; end: 103a97153; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a970e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdf378,0);
  func_0x000107c61614(param_1 + _DAT_112fdf380,0);
  *(undefined8 *)(param_1 + _DAT_112fdf388) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a97154; end: 103a97187;  */

void FUN_103a97154(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a97188; end: 103a971cf; -[SCNotificationCenterButtonProvidingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97188(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf378);
  func_0x000107c61610(param_1 + _DAT_112fdf380);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdf388));
  return;
}



/* Entry: 103a971d0; end: 103a971ef;  */

void FUN_103a971d0(void)

{
  func_0x000107c61168(&PTR_PTR_112fdf3d0);
  return;
}



/* Entry: 103a971f0; end: 103a971fb; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a971f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf438;
  func_0x000107c61428(param_1 + _DAT_112fdf438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a971fc; end: 103a97207; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a971fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf438;
  func_0x000107c61428(param_1 + _DAT_112fdf438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a97208; end: 103a97213; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider pushActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97208(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf440;
  func_0x000107c61428(param_1 + _DAT_112fdf440,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a97214; end: 103a97257;  */

void FUN_103a97214(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a97258; end: 103a97263; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider setPushActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97258(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf440;
  func_0x000107c61428(param_1 + _DAT_112fdf440,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a97264; end: 103a972b7;  */

void FUN_103a97264(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a972b8; end: 103a974cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a972b8(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6b8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a9557c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdf068);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdf448);
      *(long *)(unaff_x20 + _DAT_112fdf448) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PushActiveUserSessionScopeGraphBridge/SCNotificationFeatureFlagStoreServiceSaberServiceProvider.swift"
                      ,0x65,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a973e4);
  (*pcVar1)();
}



/* Entry: 103a974cc; end: 103a974ff; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider provide] */

void FUN_103a974cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a972b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a97500; end: 103a97533; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider __safeProvide] */

void FUN_103a97500(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a973e4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a97534; end: 103a97577; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider end] */

void FUN_103a97534(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a97578; end: 103a9770f;  */

void FUN_103a97578(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6af80)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f195080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushActiveUserSessionScopeGraphBridge/SCNotificationFeatureFlagStoreServiceSaberServiceProvider.swift"
                            ,0x65,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a97710);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a97710; end: 103a977bb; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_103a97710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a97578(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a977bc; end: 103a9782f; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a977bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdf438,0);
  func_0x000107c61614(param_1 + _DAT_112fdf440,0);
  *(undefined8 *)(param_1 + _DAT_112fdf448) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a97830; end: 103a97863;  */

void FUN_103a97830(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a97864; end: 103a978ab; -[SCNotificationFeatureFlagStoreServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97864(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf438);
  func_0x000107c61610(param_1 + _DAT_112fdf440);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdf448));
  return;
}



/* Entry: 103a978ac; end: 103a978cb;  */

void FUN_103a978ac(void)

{
  func_0x000107c61168(&PTR_PTR_112fdf490);
  return;
}



/* Entry: 103a978cc; end: 103a978d7; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a978cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf4f8;
  func_0x000107c61428(param_1 + _DAT_112fdf4f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a978d8; end: 103a978e3; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a978d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf4f8;
  func_0x000107c61428(param_1 + _DAT_112fdf4f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a978e4; end: 103a978ef; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider pushActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a978e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf500;
  func_0x000107c61428(param_1 + _DAT_112fdf500,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a978f0; end: 103a97933;  */

void FUN_103a978f0(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a97934; end: 103a9793f; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider setPushActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97934(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf500;
  func_0x000107c61428(param_1 + _DAT_112fdf500,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a97940; end: 103a97993;  */

void FUN_103a97940(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a97994; end: 103a97ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a97994(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4f6b8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a956a8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdf080);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdf508);
      *(long *)(unaff_x20 + _DAT_112fdf508) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PushActiveUserSessionScopeGraphBridge/SCSCNotificationPayloadDecryptionServicesSaberServiceProvider.swift"
                      ,0x69,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a97ac0);
  (*pcVar1)();
}



/* Entry: 103a97ba8; end: 103a97bdb; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider provide] */

void FUN_103a97ba8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a97994();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a97bdc; end: 103a97c0f; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider __safeProvide] */

void FUN_103a97bdc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a97ac0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a97c10; end: 103a97c53; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider end] */

void FUN_103a97c10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a97c54; end: 103a97deb;  */

void FUN_103a97c54(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e6af80)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f195080,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PushActiveUserSessionScopeGraphBridge/SCSCNotificationPayloadDecryptionServicesSaberServiceProvider.swift"
                            ,0x69,2,0x38,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a97dec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a48();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a97dec; end: 103a97e97; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a97dec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a97c54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a97e98; end: 103a97f0b; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97e98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdf4f8,0);
  func_0x000107c61614(param_1 + _DAT_112fdf500,0);
  *(undefined8 *)(param_1 + _DAT_112fdf508) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a97f0c; end: 103a97f3f;  */

void FUN_103a97f0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a97f40; end: 103a97f87; -[SCSCNotificationPayloadDecryptionServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97f40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf4f8);
  func_0x000107c61610(param_1 + _DAT_112fdf500);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdf508));
  return;
}



/* Entry: 103a97f88; end: 103a97fa7;  */

void FUN_103a97f88(void)

{
  func_0x000107c61168(&PTR_PTR_112fdf550);
  return;
}



/* Entry: 103a97fa8; end: 103a97fb7;  */

undefined1  [16] FUN_103a97fa8(void)

{
  return ZEXT816(0x1106c8518);
}



/* Entry: 103a97fb8; end: 103a9801f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a97fb8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  func_0x0001002ad580();
  lVar1 = param_2;
  func_0x000107c610f8();
  lVar2 = lVar1;
  func_0x0001000ad7c4();
  *(long *)(lVar1 + _DAT_112fdf5b8) = lVar2;
  lStack_40 = lVar1;
  lStack_38 = param_2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 103a98020; end: 103a98027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98020(undefined8 *param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  func_0x0001002ad580();
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112fdf5b8) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  *param_1 = puVar2;
  return;
}



/* Entry: 103a98028; end: 103a98097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a98028(undefined8 param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  lVar1 = unaff_x20;
  func_0x0001000ad7c4();
  *(long *)(unaff_x20 + _DAT_112fdf5b8) = lVar1;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 103a98098; end: 103a980a7; -[BillboardLoggingServices lazyBillboardUserJourneyLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fdf5b8));
  return;
}



/* Entry: 103a980a8; end: 103a98103; -[BillboardLoggingServices init] */

void FUN_103a980a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BillboardLoggingService.BillboardLoggingServices",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a980d4);
  (*pcVar1)();
}



/* Entry: 103a98104; end: 103a98123; -[BillboardLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf5b8));
  return;
}



/* Entry: 103a98124; end: 103a9816f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98124(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf5f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a98170; end: 103a9818f; -[_TtC41NotificationCenterButtonProvidingServices41NotificationCenterButtonProvidingServices buttonProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98170(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fdf5f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a98190; end: 103a981ef; -[_TtC41NotificationCenterButtonProvidingServices41NotificationCenterButtonProvidingServices init] */

void FUN_103a98190(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationCenterButtonProvidingServices.NotificationCenterButtonProvidingServices"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a981bc);
  (*pcVar1)();
}



/* Entry: 103a981f0; end: 103a9820f; -[_TtC41NotificationCenterButtonProvidingServices41NotificationCenterButtonProvidingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a981f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fdf5f0));
  return;
}



/* Entry: 103a98210; end: 103a9821f; -[SCNotificationFeatureFlagChangeEvent featureFlagType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a98210(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fdf620);
}



/* Entry: 103a98220; end: 103a9822f; -[SCNotificationFeatureFlagChangeEvent isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103a98220(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112fdf628);
}



/* Entry: 103a98230; end: 103a98293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98230(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf620) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112fdf628) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a98294; end: 103a982fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98294(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112fdf620) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112fdf628) = param_2;
  func_0x000103a982dc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a982fc; end: 103a98357; -[SCNotificationFeatureFlagChangeEvent init] */

void FUN_103a982fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationFeatureFlagStoreService.NotificationFeatureFlagChangeEvent",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a98328);
  (*pcVar1)();
}



/* Entry: 103a98358; end: 103a98367; -[NotificationFeatureFlagStoreService featureFlagStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fdf658));
  return;
}



/* Entry: 103a98368; end: 103a98377; -[NotificationFeatureFlagStoreService featureFlagChangeObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fdf660));
  return;
}



/* Entry: 103a98378; end: 103a983db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98378(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf660) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf658) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a983dc; end: 103a9843b; -[NotificationFeatureFlagStoreService init] */

void FUN_103a983dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("NotificationFeatureFlagStoreService.NotificationFeatureFlagStoreService",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a98408);
  (*pcVar1)();
}



/* Entry: 103a9843c; end: 103a98473; -[NotificationFeatureFlagStoreService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a98458: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a9845c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a9843c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf658));
  return;
}



/* Entry: 103a98474; end: 103a9848b;  */

bool FUN_103a98474(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103a9848c; end: 103a984cb;  */

void FUN_103a9848c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fdf690 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc49120;
  func_0x000107c61520(&UNK_10dc49120,&UNK_1106c8680);
  puRam0000000112fdf690 = puVar1;
  return;
}



/* Entry: 103a984cc; end: 103a98577;  */

void FUN_103a984cc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103a98578; end: 103a985af;  */

void FUN_103a98578(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 103a985b0; end: 103a985bf; -[ChatMessageDisplayStateLoggingServices chatMessageDisplayStateLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a985b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fdf698));
  return;
}



/* Entry: 103a985c0; end: 103a98657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a985c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf698) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a98658; end: 103a986b7; -[ChatMessageDisplayStateLoggingServices init] */

void FUN_103a98658(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatMessageDisplayStateLoggingServices.ChatMessageDisplayStateLoggingServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a98684);
  (*pcVar1)();
}



/* Entry: 103a986b8; end: 103a986c7; -[ChatMessageDisplayStateLoggingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a986b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf698));
  return;
}



/* Entry: 103a986c8; end: 103a9874f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a986c8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100abcc28();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fdf6c8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fdf6d0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a98750);
  (*pcVar1)();
}



/* Entry: 103a98750; end: 103a987af; -[_TtC39SaturnActiveUserSessionScopeGraphBridge54SaturnActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a98750(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnActiveUserSessionScopeGraphBridge.SaturnActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a9877c);
  (*pcVar1)();
}



/* Entry: 103a987b0; end: 103a987e7; -[_TtC39SaturnActiveUserSessionScopeGraphBridge54SaturnActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a987cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a987d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a987b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf6c8));
  return;
}



/* Entry: 103a987e8; end: 103a9880f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a987e8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fdf6d0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fdf6c8));
  return;
}



/* Entry: 103a98810; end: 103a98873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a98810(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdf8b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a98874; end: 103a9887b;  */

void FUN_103a98874(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a9887c; end: 103a9891b;  */

void FUN_103a9887c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a9891c; end: 103a9893b;  */

void FUN_103a9891c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a9893c; end: 103a9899f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a9893c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdf8b8);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a989a0; end: 103a989a7;  */

void FUN_103a989a0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a989a8; end: 103a98a47;  */

void FUN_103a989a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a98a48; end: 103a98a67;  */

void FUN_103a98a48(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a98a68; end: 103a98acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98a68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdf8b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdf8b8) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a98acc; end: 103a98b2b; -[_TtC39SaturnActiveUserSessionScopeGraphBridge47SaturnActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103a98acc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnActiveUserSessionScopeGraphBridge.SaturnActiveUserSessionScopeGraphBridgeServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a98af8);
  (*pcVar1)();
}



/* Entry: 103a98b2c; end: 103a98bbf; -[_TtC39SaturnActiveUserSessionScopeGraphBridge47SaturnActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a98b48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a98b4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdf8b0));
  return;
}



/* Entry: 103a98bc0; end: 103a98bf7;  */

undefined1  [16] FUN_103a98bc0(void)

{
  return ZEXT816(0x1106c88a8);
}



/* Entry: 103a98bf8; end: 103a98c3b; -[SCSaturnActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103a98bf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a98c3c; end: 103a98c6f;  */

void FUN_103a98c3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a98c70; end: 103a98cb7; -[SCSaturnActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a98c9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a98ca0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98c70(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdf910);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdf918));
  return;
}



/* Entry: 103a98cb8; end: 103a98cd7;  */

void FUN_103a98cb8(void)

{
  func_0x000107c61168(&PTR_PTR_11291e568);
  return;
}



/* Entry: 103a98cd8; end: 103a98ce3; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98cd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf950;
  func_0x000107c61428(param_1 + _DAT_112fdf950,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a98ce4; end: 103a98cef; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf950;
  func_0x000107c61428(param_1 + _DAT_112fdf950,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a98cf0; end: 103a98cfb; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider saturnActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98cf0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdf958;
  func_0x000107c61428(param_1 + _DAT_112fdf958,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a98cfc; end: 103a98d3f;  */

void FUN_103a98cfc(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a98d40; end: 103a98d4b; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider setSaturnActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a98d40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdf958;
  func_0x000107c61428(param_1 + _DAT_112fdf958,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a98d4c; end: 103a98d9f;  */

void FUN_103a98d4c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a98da0; end: 103a98fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a98da0(void)

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
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c51610();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a988a0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdf8b0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdf960);
      *(long *)(unaff_x20 + _DAT_112fdf960) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "SaturnActiveUserSessionScopeGraphBridge/SCSCCommunitiesOrgNetworkServicesSaberServiceProvider.swift"
                      ,99,2,0x1d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a98ecc);
  (*pcVar1)();
}



/* Entry: 103a98fb4; end: 103a98fe7; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider provide] */

void FUN_103a98fb4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a98da0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a98fe8; end: 103a9901b; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider __safeProvide] */

void FUN_103a98fe8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a98ecc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a9901c; end: 103a9905f; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider end] */

void FUN_103a9901c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a99060; end: 103a991f7;  */

void FUN_103a99060(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e6a740)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f1958c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SaturnActiveUserSessionScopeGraphBridge/SCSCCommunitiesOrgNetworkServicesSaberServiceProvider.swift"
                            ,99,2,0x32,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a991f8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c58b80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a991f8; end: 103a992a3; -[SCSCCommunitiesOrgNetworkServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a991f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a99060(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}


