/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027eb5ec; end: 1027eb5f7; -[SCSCTalkUIScopeServicesSaberServiceProvider setChatScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eb5ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec21c0;
  func_0x000107c61428(param_1 + _DAT_112ec21c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027eb5f8; end: 1027eb64b;  */

void FUN_1027eb5f8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027eb64c; end: 1027eb85f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027eb64c(void)

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
    func_0x000107c3f92c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001027e16a4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ec1a40);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec21c8);
      *(long *)(unaff_x20 + _DAT_112ec21c8) = lVar4;
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
                      "ChatScopeGraphBridge/SCSCTalkUIScopeServicesSaberServiceProvider.swift",0x46,
                      2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027eb778);
  (*pcVar1)();
}



/* Entry: 1027eb860; end: 1027eb893; -[SCSCTalkUIScopeServicesSaberServiceProvider provide] */

void FUN_1027eb860(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027eb64c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027eb894; end: 1027eb8c7; -[SCSCTalkUIScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1027eb894(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001027eb778();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027eb8c8; end: 1027eb90b; -[SCSCTalkUIScopeServicesSaberServiceProvider end] */

void FUN_1027eb8c8(undefined8 param_1)

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



/* Entry: 1027eb90c; end: 1027ebaa3;  */

void FUN_1027eb90c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f3ec90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0c1370,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ChatScopeGraphBridge/SCSCTalkUIScopeServicesSaberServiceProvider.swift"
                            ,0x46,2,0x5a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ebaa4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c533c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027ebaa4; end: 1027ebb4f; -[SCSCTalkUIScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1027ebaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027eb90c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027ebb50; end: 1027ebbc3; -[SCSCTalkUIScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ebb50(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec21b8,0);
  func_0x000107c61614(param_1 + _DAT_112ec21c0,0);
  *(undefined8 *)(param_1 + _DAT_112ec21c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027ebbc4; end: 1027ebbf7;  */

void FUN_1027ebbc4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027ebbf8; end: 1027ebc3f; -[SCSCTalkUIScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ebbf8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec21b8);
  func_0x000107c61610(param_1 + _DAT_112ec21c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec21c8));
  return;
}



/* Entry: 1027ebc40; end: 1027ebc5f;  */

void FUN_1027ebc40(void)

{
  func_0x000107c61168(&PTR_PTR_112ec2210);
  return;
}



/* Entry: 1027ebc60; end: 1027ebc6b; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ebc60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2278;
  func_0x000107c61428(param_1 + _DAT_112ec2278,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027ebc6c; end: 1027ebc77; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ebc6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2278;
  func_0x000107c61428(param_1 + _DAT_112ec2278,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027ebc78; end: 1027ebc83; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider chatScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ebc78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2280;
  func_0x000107c61428(param_1 + _DAT_112ec2280,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027ebc84; end: 1027ebcc7;  */

void FUN_1027ebc84(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1027ebcc8; end: 1027ebcd3; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider setChatScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ebcc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2280;
  func_0x000107c61428(param_1 + _DAT_112ec2280,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027ebcd4; end: 1027ebd27;  */

void FUN_1027ebcd4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027ebd28; end: 1027ebf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027ebd28(void)

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
    func_0x000107c3f92c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001027e17d0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112ec1a58);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ec2288);
      *(long *)(unaff_x20 + _DAT_112ec2288) = lVar4;
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
                      "ChatScopeGraphBridge/SCSCUnreadMessageAlertScopeServicesSaberServiceProvider.swift"
                      ,0x52,2,0x45,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ebe54);
  (*pcVar1)();
}



/* Entry: 1027ebf3c; end: 1027ebf6f; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider provide] */

void FUN_1027ebf3c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027ebd28();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027ebf70; end: 1027ebfa3; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider __safeProvide] */

void FUN_1027ebf70(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001027ebe54();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027ebfa4; end: 1027ebfe7; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider end] */

void FUN_1027ebfa4(undefined8 param_1)

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



/* Entry: 1027ebfe8; end: 1027ec17f;  */

void FUN_1027ebfe8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0f3ec90)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000001c,0x800000010f0c1370,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ChatScopeGraphBridge/SCSCUnreadMessageAlertScopeServicesSaberServiceProvider.swift"
                            ,0x52,2,0x5a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ec180);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c533c4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027ec180; end: 1027ec22b; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1027ec180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027ebfe8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027ec22c; end: 1027ec29f; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec22c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec2278,0);
  func_0x000107c61614(param_1 + _DAT_112ec2280,0);
  *(undefined8 *)(param_1 + _DAT_112ec2288) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027ec2a0; end: 1027ec2d3;  */

void FUN_1027ec2a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027ec2d4; end: 1027ec31b; -[SCSCUnreadMessageAlertScopeServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec2d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec2278);
  func_0x000107c61610(param_1 + _DAT_112ec2280);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec2288));
  return;
}



/* Entry: 1027ec31c; end: 1027ec33b;  */

void FUN_1027ec31c(void)

{
  func_0x000107c61168(&PTR_PTR_112ec22d0);
  return;
}



/* Entry: 1027ec33c; end: 1027ec383; -[SCSCChatScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec33c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2338;
  func_0x000107c61428(param_1 + _DAT_112ec2338,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027ec384; end: 1027ec3db; -[SCSCChatScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec384(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2338;
  func_0x000107c61428(param_1 + _DAT_112ec2338,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027ec3dc; end: 1027ec4b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec3dc(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar7 = &lStack_50;
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = 0;
    FUN_1027e1aa4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ec18d8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027ec4b4);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ec18e0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec2340);
    *(long **)(unaff_x20 + _DAT_112ec2340) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1027ec4b4; end: 1027ec4db; -[SCSCChatScopedServicesSaberEntryPoint begin] */

void FUN_1027ec4b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027ec3dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027ec4dc; end: 1027ec653;  */

/* WARNING: Possible PIC construction at 0x0001027ec544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ec5dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027ec548) */
/* WARNING: Removing unreachable block (ram,0x0001027ec5e0) */
/* WARNING: Removing unreachable block (ram,0x0001027ec5f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec4dc(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec2340);
  if (lVar2 == 0) {
    func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_end_1125c29d0);
  }
  else {
    puVar1 = PTR_PTR_1126afc98;
    func_0x000107c61168(PTR_PTR_1126afc98);
    func_0x000107c61174(lVar2);
    func_0x000107c3e26c(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1027ec654; end: 1027ec65b;  */

void FUN_1027ec654(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027ec65c; end: 1027ec68f; -[SCSCChatScopedServicesSaberEntryPoint end] */

void FUN_1027ec65c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027ec4dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027ec690; end: 1027ec7af;  */

void FUN_1027ec690(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0x6e496e69676562 || param_3 != -0x1900000000000000) &&
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) == 0))
  {
    func_0x000107c602fc(0x15);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_2,param_3);
    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                        "ChatScopeGraphBridge/SCSCChatScopedServicesSaberEntryPoint.swift",0x40,2,
                        0x50,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ec7b0);
    (*pcVar1)();
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c52c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027ec7b0; end: 1027ec85b; -[SCSCChatScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1027ec7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027ec690(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027ec85c; end: 1027ec8bb; -[SCSCChatScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec85c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec2338,0);
  *(undefined8 *)(param_1 + _DAT_112ec2340) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027ec8bc; end: 1027ec8ef;  */

void FUN_1027ec8bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027ec8f0; end: 1027ec927; -[SCSCChatScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ec8f0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec2338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec2340));
  return;
}



/* Entry: 1027ec928; end: 1027ec947;  */

void FUN_1027ec928(void)

{
  func_0x000107c61168(&PTR_PTR_112864098);
  return;
}



/* Entry: 1027ec948; end: 1027ecd23;  */

void FUN_1027ec948(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105503f0;
  func_0x000107c613fc(&UNK_1105503f0,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_4;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_1027ecd24,puVar1);
  return;
}



/* Entry: 1027ecd24; end: 1027ecd47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ecd24(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puVar9;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  lVar1 = lStack_68;
  uVar2 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0c1800);
  lVar3 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    puVar9 = (undefined *)0x0;
  }
  else {
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f0c1820);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&lStack_68);
    lVar3 = lStack_68;
    func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
    func_0x000107c610f8();
    func_0x00010017da58(lVar3);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&lStack_68);
    uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083898);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lStack_68);
    func_0x000100083b20(&uStack_70);
    uVar2 = uStack_70;
    func_0x000107c444a4(uStack_70);
    func_0x000107c61180();
    func_0x000107c61170(uStack_70);
    func_0x000107c61174(puVar4);
    func_0x000100083b20(&uStack_78);
    func_0x000100083b20(&uStack_80);
    uVar6 = uStack_80;
    func_0x000107c4d604(uStack_80);
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    func_0x000100083b20(&uStack_88);
    pcVar7 = 
    "provide(circumstanceEngineLazy:valdiBlizzardLoggingServicesLazy:grapheneServicesLazy:postbackInfoEventHandlerLazy:composerNetworkingBridgeServicesLazy:messagingModelServicesLazy:adAttachmentHandlerScopeExposerObservableLazy:adAttachmentHandlerScopeServicesLazy:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
    func_0x000100083b20(&lStack_90);
    uVar8 = *(undefined8 *)(lStack_90 + _DAT_11301aef0);
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(lStack_90);
    puVar9 = PTR_PTR_1126ab058;
    func_0x000107c610f8();
    func_0x000107c459f8();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_78);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uStack_88);
    func_0x000107c615e8(pcVar7);
    func_0x000107c615e8(uVar8);
    func_0x000107c4ea04(puVar9);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar4);
  }
  *param_1 = puVar9;
  return;
}



/* Entry: 1027ecd48; end: 1027ece0f;  */

void FUN_1027ecd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110550438;
  func_0x000107c613fc(&UNK_110550438,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1027ed060,puVar1);
  return;
}



/* Entry: 1027ece10; end: 1027ed05f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ece10(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  uVar2 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f0c1960);
  lVar3 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar3 = lStack_68;
    uVar2 = 0x112e51d58;
    func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
    func_0x000107c610f8();
    func_0x00010017da58(lVar3,uVar2);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&lStack_68);
    uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083898);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lStack_68);
    func_0x000107c61174(puVar4);
    func_0x000100083b20(&uStack_70);
    pcVar6 = 
    "provide(circumstanceEngineLazy:valdiBlizzardLoggingServicesLazy:messagingModelServicesLazy:grapheneServicesLazy:adAttachmentHandlerScopeExposerObservableLazy:adAttachmentHandlerScopeServicesLazy:)"
    ;
    func_0x0001000c10c0(
                       "provide(circumstanceEngineLazy:valdiBlizzardLoggingServicesLazy:messagingModelServicesLazy:grapheneServicesLazy:adAttachmentHandlerScopeExposerObservableLazy:adAttachmentHandlerScopeServicesLazy:)"
                       );
    func_0x000107c61180();
    func_0x000100083b20(&lStack_78);
    uVar8 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(lStack_78);
    func_0x000100083b20(&uStack_80);
    uVar2 = uStack_80;
    func_0x000107c444a4(uStack_80);
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    puVar7 = PTR_PTR_1126c6808;
    func_0x000107c610f8();
    func_0x000107c459dc();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_70);
    func_0x000107c615e8(pcVar6);
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c4ea04(puVar7);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar4);
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 1027ed060; end: 1027ed07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed060(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = lStack_68;
  uVar2 = 0xd00000000000002f;
  func_0x000107c5fadc(0xd00000000000002f,0x800000010f0c1960);
  lVar3 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    puVar7 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar3 = lStack_68;
    uVar2 = 0x112e51d58;
    func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
    func_0x000107c610f8();
    func_0x00010017da58(lVar3,uVar2);
    puVar4 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar3);
    func_0x000100083b20(&lStack_68);
    uVar5 = *(undefined8 *)(lStack_68 + _DAT_113083898);
    func_0x000107c61174(uVar5);
    func_0x000107c61170(lStack_68);
    func_0x000107c61174(puVar4);
    func_0x000100083b20(&uStack_70);
    pcVar6 = 
    "provide(circumstanceEngineLazy:valdiBlizzardLoggingServicesLazy:messagingModelServicesLazy:grapheneServicesLazy:adAttachmentHandlerScopeExposerObservableLazy:adAttachmentHandlerScopeServicesLazy:)"
    ;
    func_0x0001000c10c0(
                       "provide(circumstanceEngineLazy:valdiBlizzardLoggingServicesLazy:messagingModelServicesLazy:grapheneServicesLazy:adAttachmentHandlerScopeExposerObservableLazy:adAttachmentHandlerScopeServicesLazy:)"
                       );
    func_0x000107c61180();
    func_0x000100083b20(&lStack_78);
    uVar8 = *(undefined8 *)(lStack_78 + _DAT_11301aef0);
    func_0x000107c615f0(uVar8);
    func_0x000107c61170(lStack_78);
    func_0x000100083b20(&uStack_80);
    uVar2 = uStack_80;
    func_0x000107c444a4(uStack_80);
    func_0x000107c61180();
    func_0x000107c61170(uStack_80);
    puVar7 = PTR_PTR_1126c6808;
    func_0x000107c610f8();
    func_0x000107c459dc();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uStack_70);
    func_0x000107c615e8(pcVar6);
    func_0x000107c615e8(uVar8);
    func_0x000107c61170(uVar2);
    func_0x000107c4ea04(puVar7);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar4);
  }
  *param_1 = puVar7;
  return;
}



/* Entry: 1027ed080; end: 1027ed147;  */

void FUN_1027ed080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110550480;
  func_0x000107c613fc(&UNK_110550480,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1027ed4a0,puVar1);
  return;
}



/* Entry: 1027ed148; end: 1027ed49f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed148(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0c1a60);
  lVar2 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  if ((int)lVar2 == 0) {
    func_0x000107c615e8(lVar1);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar4 = 0x112e51d58;
    func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
    func_0x000107c610f8();
    func_0x00010017da58(lVar2,uVar4);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar2);
    uVar4 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar2 = lVar1;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar4);
    if ((int)lVar2 == 0) {
      func_0x000100083b20(&lStack_68);
      uVar4 = *(undefined8 *)(lStack_68 + _DAT_113083898);
      func_0x000107c61174(uVar4);
      func_0x000107c61170(lStack_68);
      func_0x000100083b20(&lStack_70);
      uVar7 = *(undefined8 *)(lStack_70 + _DAT_11301afa0);
      func_0x000107c61174(uVar7);
      func_0x000107c61170(lStack_70);
      puVar6 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar8 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(lStack_80);
      puVar5 = PTR_PTR_1126ab060;
      func_0x000107c610f8();
      func_0x000107c45a14();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uStack_78);
      func_0x000107c615e8(uVar8);
    }
    else {
      func_0x000100083b20(&lStack_68);
      puVar5 = *(undefined **)(lStack_68 + _DAT_113083898);
      func_0x000107c61174();
      func_0x000107c61170(lStack_68);
      func_0x000100083b20(&lStack_70);
      uVar4 = *(undefined8 *)(lStack_70 + _DAT_11301afa0);
      func_0x000107c61174(uVar4);
      func_0x000107c61170(lStack_70);
      puVar6 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar7 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar7);
      func_0x000107c61170(lStack_80);
      FUN_1027ee90c(0);
      func_0x000107c610f8();
      func_0x0001027edbb8(puVar5,uVar4,puVar6,uStack_78,uVar7);
    }
    func_0x000107c615f0(puVar5);
    func_0x000107c4ea04();
    func_0x000107c615e8(puVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar3);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1027ed4a0; end: 1027ed4bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed4a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = lStack_68;
  uVar4 = 0xd00000000000002c;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f0c1a60);
  lVar2 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar4);
  if ((int)lVar2 == 0) {
    func_0x000107c615e8(lVar1);
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar4 = 0x112e51d58;
    func_0x0001000285a8(0x112e51d58,&UNK_10da97cc0);
    func_0x000107c610f8();
    func_0x00010017da58(lVar2,uVar4);
    puVar3 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar2);
    uVar4 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar2 = lVar1;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar4);
    if ((int)lVar2 == 0) {
      func_0x000100083b20(&lStack_68);
      uVar4 = *(undefined8 *)(lStack_68 + _DAT_113083898);
      func_0x000107c61174(uVar4);
      func_0x000107c61170(lStack_68);
      func_0x000100083b20(&lStack_70);
      uVar7 = *(undefined8 *)(lStack_70 + _DAT_11301afa0);
      func_0x000107c61174(uVar7);
      func_0x000107c61170(lStack_70);
      puVar6 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar8 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(lStack_80);
      puVar5 = PTR_PTR_1126ab060;
      func_0x000107c610f8();
      func_0x000107c45a14();
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uStack_78);
      func_0x000107c615e8(uVar8);
    }
    else {
      func_0x000100083b20(&lStack_68);
      puVar5 = *(undefined **)(lStack_68 + _DAT_113083898);
      func_0x000107c61174();
      func_0x000107c61170(lStack_68);
      func_0x000100083b20(&lStack_70);
      uVar4 = *(undefined8 *)(lStack_70 + _DAT_11301afa0);
      func_0x000107c61174(uVar4);
      func_0x000107c61170(lStack_70);
      puVar6 = puVar3;
      func_0x000107c61174(puVar3);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar7 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar7);
      func_0x000107c61170(lStack_80);
      FUN_1027ee90c(0);
      func_0x000107c610f8();
      func_0x0001027edbb8(puVar5,uVar4,puVar6,uStack_78,uVar7);
    }
    func_0x000107c615f0(puVar5);
    func_0x000107c4ea04();
    func_0x000107c615e8(puVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar3);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 1027ed4c0; end: 1027ed587;  */

void FUN_1027ed4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_1105504c8;
  func_0x000107c613fc(&UNK_1105504c8,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1027ed91c,puVar1);
  return;
}



/* Entry: 1027ed588; end: 1027ed91b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed588(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar1 = lStack_68;
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0c1a90);
  lVar3 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f0c1820);
    lVar4 = lVar1;
    func_0x000107c3ebd4(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&lStack_68);
    lVar3 = lStack_68;
    uVar2 = 0x112e4de20;
    func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
    func_0x000107c610f8();
    func_0x00010017da58(lVar3,uVar2);
    puVar5 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar3);
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar3 = lVar1;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    if ((int)lVar3 == 0) {
      func_0x000100083b20(&lStack_68);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083898);
      func_0x000107c61174(uVar8);
      func_0x000107c61170(lStack_68);
      puVar7 = puVar5;
      func_0x000107c61174(puVar5);
      func_0x000100083b20(&uStack_70);
      uVar2 = uStack_70;
      func_0x000107c4d604(uStack_70);
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar9 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar9);
      func_0x000107c61170(lStack_80);
      puVar6 = PTR_PTR_1126ab068;
      func_0x000107c610f8();
      func_0x000107c45a1c();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uStack_78);
      func_0x000107c615e8(uVar9);
    }
    else {
      func_0x000100083b20(&lStack_68);
      puVar6 = *(undefined **)(lStack_68 + _DAT_113083898);
      func_0x000107c61174();
      func_0x000107c61170(lStack_68);
      puVar7 = puVar5;
      func_0x000107c61174(puVar5);
      func_0x000100083b20(&uStack_70);
      uVar2 = uStack_70;
      func_0x000107c4d604(uStack_70);
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar8 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(lStack_80);
      FUN_1027f098c(0);
      func_0x000107c610f8();
      func_0x0001027eed54(puVar6,puVar7,uVar2,uStack_78,lVar4,uVar8);
    }
    func_0x000107c615f0(puVar6);
    func_0x000107c4ea04();
    func_0x000107c615e8(puVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar5);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 1027ed91c; end: 1027ed93b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed91c(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  lVar1 = lStack_68;
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0c1a90);
  lVar3 = lVar1;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  if ((int)lVar3 == 0) {
    func_0x000107c615e8(lVar1);
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar2 = 0xd000000000000027;
    func_0x000107c5fadc(0xd000000000000027,0x800000010f0c1820);
    lVar4 = lVar1;
    func_0x000107c3ebd4(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000100083b20(&lStack_68);
    lVar3 = lStack_68;
    uVar2 = 0x112e4de20;
    func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
    func_0x000107c610f8();
    func_0x00010017da58(lVar3,uVar2);
    puVar5 = PTR_PTR_1126a73e0;
    func_0x000107c610f8(PTR_PTR_1126a73e0);
    func_0x000107c4907c();
    func_0x000107c61170(lVar3);
    uVar2 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f,0x800000010efb44e0);
    lVar3 = lVar1;
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar2);
    if ((int)lVar3 == 0) {
      func_0x000100083b20(&lStack_68);
      uVar8 = *(undefined8 *)(lStack_68 + _DAT_113083898);
      func_0x000107c61174(uVar8);
      func_0x000107c61170(lStack_68);
      puVar7 = puVar5;
      func_0x000107c61174(puVar5);
      func_0x000100083b20(&uStack_70);
      uVar2 = uStack_70;
      func_0x000107c4d604(uStack_70);
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar9 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar9);
      func_0x000107c61170(lStack_80);
      puVar6 = PTR_PTR_1126ab068;
      func_0x000107c610f8();
      func_0x000107c45a1c();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uStack_78);
      func_0x000107c615e8(uVar9);
    }
    else {
      func_0x000100083b20(&lStack_68);
      puVar6 = *(undefined **)(lStack_68 + _DAT_113083898);
      func_0x000107c61174();
      func_0x000107c61170(lStack_68);
      puVar7 = puVar5;
      func_0x000107c61174(puVar5);
      func_0x000100083b20(&uStack_70);
      uVar2 = uStack_70;
      func_0x000107c4d604(uStack_70);
      func_0x000107c61180();
      func_0x000107c61170(uStack_70);
      func_0x000100083b20(&uStack_78);
      func_0x000100083b20(&lStack_80);
      uVar8 = *(undefined8 *)(lStack_80 + _DAT_11301aef0);
      func_0x000107c615f0(uVar8);
      func_0x000107c61170(lStack_80);
      FUN_1027f098c(0);
      func_0x000107c610f8();
      func_0x0001027eed54(puVar6,puVar7,uVar2,uStack_78,lVar4,uVar8);
    }
    func_0x000107c615f0(puVar6);
    func_0x000107c4ea04();
    func_0x000107c615e8(puVar6);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar5);
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 1027ed93c; end: 1027ed983; -[SuggestedSearchMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed93c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2378;
  func_0x000107c61428(param_1 + _DAT_112ec2378,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027ed984; end: 1027ed98f; -[SuggestedSearchMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed984(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2378;
  func_0x000107c61428(param_1 + _DAT_112ec2378,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ed990; end: 1027ed9d7; -[SuggestedSearchMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed990(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2380;
  func_0x000107c61428(param_1 + _DAT_112ec2380,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027ed9d8; end: 1027ed9e3; -[SuggestedSearchMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ed9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2380;
  func_0x000107c61428(param_1 + _DAT_112ec2380,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027ed9e4; end: 1027eda43;  */

void FUN_1027ed9e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1027eda44; end: 1027eda8b; -[SuggestedSearchMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eda44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2388;
  func_0x000107c61428(param_1 + _DAT_112ec2388,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027eda8c; end: 1027edae3; -[SuggestedSearchMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eda8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2388;
  func_0x000107c61428(param_1 + _DAT_112ec2388,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027edae4; end: 1027edc8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027edae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec2378) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2380) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ec2388,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec2390) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2398) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec23a0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec23a8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ec23b0) = param_5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027edc8c; end: 1027edd77;  */

void FUN_1027edc8c(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "valdiContextParams(for:conversationParticipants:)";
  func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
  func_0x000107c61180();
  puVar2 = &UNK_110550630;
  func_0x000107c613fc(&UNK_110550630,0x28,7);
  *(undefined4 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  pcStack_50 = FUN_1027ee9c0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110550648;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1027edd78; end: 1027ede0f;  */

void FUN_1027edd78(int param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (param_1 == 2) {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = 1;
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = 0;
  }
  FUN_1027ede10(param_3,uVar1);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1027ede10; end: 1027ee1ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ede10(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined1 auVar3 [8];
  long lVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long alStack_110 [3];
  long alStack_f0 [2];
  undefined1 auStack_df [7];
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  long alStack_c8 [10];
  undefined1 uStack_78;
  undefined7 uStack_77;
  long lStack_70;
  
  lVar7 = 0;
  alStack_110[2] = param_2;
  func_0x000100b91584();
  alStack_110[0] = lVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar13 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  alStack_110[1] = lVar13;
  func_0x000100b915bc();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0x112d36580;
  puVar10 = &UNK_10d9016d0;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar13 - extraout_x8_01;
  lVar9 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar7 = param_1;
  func_0x000107c5c3f8();
  func_0x000107c61180();
  if (lVar7 == 0) {
    lVar16 = 0;
    puStack_d0 = (undefined *)0x0;
    puVar11 = puVar10;
  }
  else {
    lVar16 = lVar7;
    func_0x000107c5faec();
    puVar11 = puVar10;
    func_0x000107c61170(lVar7);
    puStack_d0 = puVar10;
  }
  alStack_c8[1] = 0;
  alStack_c8[0] = 0;
  alStack_c8[3] = 0;
  alStack_c8[2] = 0;
  alStack_c8[5] = 3;
  alStack_c8[4] = 3;
  alStack_c8[7] = 0;
  alStack_c8[6] = 0;
  alStack_c8[9] = 0;
  alStack_c8[8] = 0;
  uStack_78 = 1;
  lStack_70 = 0;
  auStack_d8 = (undefined1  [8])lVar16;
  func_0x000107c3abfc();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar7 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    func_0x000107c5edd0(lVar17,lVar7,puVar11);
    func_0x000107c6142c(puVar11);
    lVar7 = lVar17;
    (**(code **)(lVar15 + 0x30))(lVar17,1,lVar9);
    if ((int)lVar7 == 1) {
      func_0x00010192246c(auStack_d8);
      func_0x0001000293e4(lVar17);
    }
    else {
      (**(code **)(lVar15 + 0x20))(lVar12,lVar17,lVar9);
      (**(code **)(lVar15 + 0x10))(lVar13,lVar12,lVar9);
      lVar7 = _DAT_112ec2388;
      *(long *)(lVar13 + *(int *)(lVar8 + 0x14)) = alStack_110[2];
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar8 + 0x18));
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 1;
      puVar1[4] = 0;
      puVar1[3] = 0;
      puVar1[6] = 0;
      puVar1[5] = 0;
      *(undefined8 *)((long)puVar1 + 0x39) = 0;
      *(undefined8 *)((long)puVar1 + 0x31) = 0;
      *(undefined8 *)(lVar13 + *(int *)(lVar8 + 0x1c)) = 0;
      lVar5 = alStack_c8[9];
      lVar4 = alStack_c8[8];
      lVar17 = alStack_c8[6];
      auVar3 = auStack_d8;
      plVar2 = (long *)(lVar13 + *(int *)(lVar8 + 0x20));
      plVar2[9] = alStack_c8[7];
      plVar2[8] = lVar17;
      lVar16 = alStack_c8[0];
      plVar2[0xb] = lVar5;
      plVar2[10] = lVar4;
      lVar4 = alStack_c8[1];
      lVar17 = CONCAT71(uStack_77,uStack_78);
      plVar2[0xd] = lStack_70;
      plVar2[0xc] = lVar17;
      plVar2[1] = (long)puStack_d0;
      *plVar2 = (long)auVar3;
      plVar2[3] = lVar4;
      plVar2[2] = lVar16;
      lVar4 = alStack_c8[5];
      lVar16 = alStack_c8[4];
      lVar17 = alStack_c8[2];
      plVar2[5] = alStack_c8[3];
      plVar2[4] = lVar17;
      plVar2[7] = lVar4;
      plVar2[6] = lVar16;
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar8 + 0x24));
      puVar1[1] = 0;
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[2] = 0;
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar8 + 0x28));
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(lVar13 + *(int *)(lVar8 + 0x2c)) = 0;
      puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar8 + 0x30));
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(lVar13 + *(int *)(lVar8 + 0x34)) = 0;
      func_0x000107c61428(unaff_x20 + _DAT_112ec2388,alStack_f0,0,0);
      lVar7 = unaff_x20 + lVar7;
      func_0x000107c61618();
      if (lVar7 != 0) {
        uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112ec23a8);
        func_0x000107c614f0(uVar14);
        lVar8 = alStack_110[1];
        FUN_102458e68(lVar13,alStack_110[1]);
        func_0x000107c6159c(lVar8,alStack_110[0],0);
        lVar17 = lVar8;
        func_0x00010418bbf4(lVar8,lVar7,0xd000000000000019,0x800000010f0c1b30,unaff_x20,0,0,uVar14);
        FUN_1027ee9cc(lVar8,&SUB_100b91584);
        func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ec23a0));
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(lVar17);
      }
      FUN_1027ee9cc(lVar13,&SUB_100b915bc);
      (**(code **)(lVar15 + 8))(lVar12,lVar9);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1027ee1f0);
  (*pcVar6)();
}



/* Entry: 1027ee1f0; end: 1027ee263; -[SuggestedSearchMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1027ee1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1027ee49c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027ee264; end: 1027ee267; -[SuggestedSearchMessagePlugin pluginDidRegister] */

void FUN_1027ee264(void)

{
  return;
}



/* Entry: 1027ee268; end: 1027ee27f; -[SuggestedSearchMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x0001027ee27c) */

void FUN_1027ee268(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1027ee280; end: 1027ee287; -[SuggestedSearchMessagePlugin pluginType] */

undefined8 FUN_1027ee280(void)

{
  return 0;
}



/* Entry: 1027ee288; end: 1027ee30b; -[SuggestedSearchMessagePlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001027ee2c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ee2e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027ee2c8) */
/* WARNING: Removing unreachable block (ram,0x0001027ee2e4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ee288(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027ee30c; end: 1027ee36b; -[SuggestedSearchMessagePlugin init] */

void FUN_1027ee30c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdMessagePluginsSwift.SuggestedSearchMessagePlugin",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ee338);
  (*pcVar1)();
}



/* Entry: 1027ee36c; end: 1027ee403; -[SuggestedSearchMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027ee3e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027ee3ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ee36c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2378));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2380));
  func_0x000100e3b598(param_1 + _DAT_112ec2388);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2390));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec2398));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec23a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ec23a8));
  return;
}



/* Entry: 1027ee404; end: 1027ee487; -[SuggestedSearchMessagePlugin adAttachmentHandlerDidComplete:result:] */

/* WARNING: Possible PIC construction at 0x0001027ee440: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027ee45c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027ee444) */
/* WARNING: Removing unreachable block (ram,0x0001027ee460) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ee404(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027ee488; end: 1027ee48b; -[SuggestedSearchMessagePlugin adAttachmentHandlerDidPresent:] */

void FUN_1027ee488(void)

{
  return;
}



/* Entry: 1027ee48c; end: 1027ee48f; -[SuggestedSearchMessagePlugin adAttachmentHandlerViewDidFullyAppear:] */

void FUN_1027ee48c(void)

{
  return;
}



/* Entry: 1027ee490; end: 1027ee493; -[SuggestedSearchMessagePlugin adAttachmentHandlerViewDidFullyDisappear:] */

void FUN_1027ee490(void)

{
  return;
}



/* Entry: 1027ee494; end: 1027ee497; -[SuggestedSearchMessagePlugin adAttachmentHandlerViewWillFullyAppear:] */

void FUN_1027ee494(void)

{
  return;
}



/* Entry: 1027ee498; end: 1027ee49b; -[SuggestedSearchMessagePlugin adAttachmentHandlerViewWillFullyDisappear:] */

void FUN_1027ee498(void)

{
  return;
}



/* Entry: 1027ee49c; end: 1027ee90b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027ee49c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112ec23b0);
  func_0x000107c4ce08(uVar2,param_2,param_1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4051c();
  func_0x000107c61180();
  if (uVar3 == 0) goto LAB_1027ee8b8;
  uVar4 = uVar3;
  func_0x000107c404a8();
  if ((int)uVar4 == 5) {
    uVar4 = uVar3;
    func_0x000107c5a934();
    func_0x000107c61180();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5a960();
      if ((int)uVar5 == 0x1a) {
        uVar5 = uVar4;
        func_0x000107c3d48c();
        func_0x000107c61180();
        if (uVar5 != 0) {
          uVar6 = uVar5;
          func_0x000107c3d494();
          if ((int)uVar6 == 2) {
            uVar6 = uVar5;
            func_0x000107c5c3f4();
            func_0x000107c61180();
            if (uVar6 != 0) {
              uVar7 = uVar6;
              func_0x000107c3abfc();
              func_0x000107c61180();
              if (uVar7 == 0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ee908);
                (*pcVar1)();
              }
              uVar8 = uVar7;
              func_0x000107c5faec();
              func_0x000107c61170(uVar7);
              func_0x000107c6142c(param_2);
              uVar7 = uVar8 & 0xffffffffffff;
              if ((param_2 & 0x2000000000000000) != 0) {
                uVar7 = param_2 >> 0x38 & 0xf;
              }
              if (uVar7 != 0) {
                uVar7 = uVar5;
                func_0x000107c3ec9c();
                uVar8 = uVar6;
                func_0x000107c3abfc();
                func_0x000107c61180();
                if (uVar8 != 0) {
                  puVar9 = PTR_PTR_1126c6818;
                  func_0x000107c610f8();
                  func_0x000107c49140();
                  func_0x000107c61170(uVar8);
                  uVar8 = uVar6;
                  func_0x000107c4f598(uVar6);
                  func_0x000107c61180();
                  func_0x000107c579bc(puVar9);
                  func_0x000107c61170(uVar8);
                  uVar8 = uVar6;
                  func_0x000107c5c3f8(uVar6);
                  func_0x000107c61180();
                  func_0x000107c59ac0(puVar9);
                  func_0x000107c61170(uVar8);
                  uVar8 = uVar2;
                  func_0x000107c40674(uVar2);
                  func_0x000107c61180();
                  func_0x000107c53964(puVar9);
                  func_0x000107c61170(uVar8);
                  puVar10 = PTR_PTR_1126c6820;
                  func_0x000107c610f8();
                  func_0x000107c453e4();
                  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ec2390);
                  func_0x000107c5c734(uVar11);
                  func_0x000107c61180();
                  func_0x000107c52d78(puVar10);
                  func_0x000107c615e8(uVar11);
                  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ec2398);
                  func_0x000107c5c734(uVar11);
                  func_0x000107c61180();
                  func_0x000107c5a278(puVar10);
                  func_0x000107c615e8(uVar11);
                  puVar12 = &UNK_1105505b8;
                  func_0x000107c613fc(&UNK_1105505b8,0x18,7);
                  func_0x000107c61614(puVar12 + 0x10);
                  puVar13 = &UNK_1105505e0;
                  func_0x000107c613fc(&UNK_1105505e0,0x28,7);
                  *(int *)(puVar13 + 0x10) = (int)uVar7;
                  *(undefined **)(puVar13 + 0x18) = puVar12;
                  *(ulong *)(puVar13 + 0x20) = uVar6;
                  pcStack_70 = FUN_1027ee92c;
                  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_88 = 0x42000000;
                  puStack_80 = &UNK_100c75f50;
                  puStack_78 = &UNK_1105505f8;
                  ppuVar14 = &puStack_90;
                  puStack_68 = puVar13;
                  func_0x000107c60bc4(ppuVar14);
                  puVar12 = puStack_68;
                  func_0x000107c61174(uVar6);
                  func_0x000107c61574(puVar12);
                  func_0x000107c56f0c(puVar10);
                  func_0x000107c60bd0(ppuVar14);
                  uVar11 = 0x112ec23e0;
                  uVar15 = 0;
                  FUN_1027ee954(0,0x112ec23e0,&PTR_PTR_1126c6828);
                  func_0x000107c614e8();
                  func_0x000107c3ff48();
                  func_0x000107c61180();
                  uVar16 = uVar15;
                  func_0x000107c5faec();
                  func_0x000107c61170(uVar15);
                  uVar15 = 0;
                  FUN_1027ee954(0,0x112ec23e8,&PTR_PTR_1126c6818);
                  uVar17 = 0;
                  puStack_90 = puVar9;
                  puStack_78 = (undefined *)uVar15;
                  FUN_1027ee954(0,0x112ec23f0,&PTR_PTR_1126c6820);
                  apuStack_b0[0] = puVar10;
                  uStack_98 = uVar17;
                  func_0x000107c610f8(PTR_PTR_1126c67d8);
                  func_0x000107c61174(puVar9);
                  func_0x000107c61174(puVar10);
                  FUN_1027efbc4(uVar16,uVar11,&puStack_90,apuStack_b0);
                  func_0x000107c615e8(uVar2);
                  func_0x000107c61170(puVar10);
                  func_0x000107c61170(puVar9);
                  func_0x000107c61170(uVar6);
                  func_0x000107c61170(uVar5);
                  func_0x000107c61170(uVar4);
                  func_0x000107c61170(uVar3);
                  return uVar16;
                }
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ee90c);
                (*pcVar1)();
              }
              func_0x000107c61170(uVar3);
              func_0x000107c61170(uVar4);
              func_0x000107c61170(uVar5);
              uVar3 = uVar6;
              goto LAB_1027ee8b4;
            }
          }
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar4);
          uVar3 = uVar5;
          goto LAB_1027ee8b4;
        }
      }
      func_0x000107c61170(uVar3);
      uVar3 = uVar4;
    }
  }
LAB_1027ee8b4:
  func_0x000107c61170(uVar3);
LAB_1027ee8b8:
  func_0x000107c615e8(uVar2);
  return 0;
}



/* Entry: 1027ee90c; end: 1027ee92b;  */

void FUN_1027ee90c(void)

{
  func_0x000107c61168(&PTR_PTR_112864158);
  return;
}



/* Entry: 1027ee92c; end: 1027ee953;  */

void FUN_1027ee92c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar3 = *(undefined4 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar6 = &puStack_70;
  pcVar4 = "valdiContextParams(for:conversationParticipants:)";
  func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
  func_0x000107c61180();
  puVar5 = &UNK_110550630;
  func_0x000107c613fc(&UNK_110550630,0x28,7);
  *(undefined4 *)(puVar5 + 0x10) = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  pcStack_50 = FUN_1027ee9c0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110550648;
  puStack_48 = puVar5;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61574(puVar5);
  func_0x000107c4e524(pcVar4);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c615e8(pcVar4);
  return;
}



/* Entry: 1027ee954; end: 1027ee993;  */

void FUN_1027ee954(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1027ee994; end: 1027ee9bf;  */

void FUN_1027ee994(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027ee9c0; end: 1027ee9cb;  */

void FUN_1027ee9c0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(unaff_x20 + 0x10) == 2) {
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    uVar3 = 1;
  }
  else {
    func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      return;
    }
    uVar3 = 0;
  }
  FUN_1027ede10(uVar1,uVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1027ee9cc; end: 1027eea07;  */

undefined8 FUN_1027ee9cc(undefined8 param_1,code *param_2)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_2)();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1027eea08; end: 1027eea1b;  */

void FUN_1027eea08(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110550680;
  if (lRam0000000112ec23f8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ec23f8 = param_1;
  }
  return;
}



/* Entry: 1027eea1c; end: 1027eea5f;  */

void FUN_1027eea1c(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1027eea60; end: 1027eea67;  */

void FUN_1027eea60(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1027eea68; end: 1027eeaaf; -[TextAdMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eea68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2400;
  func_0x000107c61428(param_1 + _DAT_112ec2400,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027eeab0; end: 1027eeabb; -[TextAdMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eeab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2400;
  func_0x000107c61428(param_1 + _DAT_112ec2400,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027eeabc; end: 1027eeb03; -[TextAdMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eeabc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2408;
  func_0x000107c61428(param_1 + _DAT_112ec2408,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027eeb04; end: 1027eeb0f; -[TextAdMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eeb04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2408;
  func_0x000107c61428(param_1 + _DAT_112ec2408,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027eeb10; end: 1027eeb57; -[TextAdMessagePlugin uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eeb10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2410;
  func_0x000107c61428(param_1 + _DAT_112ec2410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027eeb58; end: 1027eebaf; -[TextAdMessagePlugin setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eeb58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2410;
  func_0x000107c61428(param_1 + _DAT_112ec2410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027eebb0; end: 1027eebf7; -[TextAdMessagePlugin messageViewEvents] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eebb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec2418;
  func_0x000107c61428(param_1 + _DAT_112ec2418,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027eebf8; end: 1027eec03; -[TextAdMessagePlugin setMessageViewEvents:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eebf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec2418;
  func_0x000107c61428(param_1 + _DAT_112ec2418,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027eec04; end: 1027eec63;  */

void FUN_1027eec04(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1027eec64; end: 1027eee43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027eec64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec2400) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2408) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112ec2410,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ec2418) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2420) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2428) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2430) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2438) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112ec2440) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ec2448) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027eee44; end: 1027ef147;  */

void FUN_1027eee44(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar11 = *param_2;
  lVar2 = lVar11;
  func_0x000107c5cab0();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef068);
    (*pcVar1)();
  }
  lVar3 = lVar11;
  func_0x000107c420f0();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c61170(lVar2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef074);
    (*pcVar1)();
  }
  lVar4 = lVar11;
  func_0x000107c4216c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef088);
    (*pcVar1)();
  }
  lVar5 = lVar11;
  func_0x000107c3ceb8();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef0a4);
    (*pcVar1)();
  }
  lVar6 = lVar11;
  func_0x000107c41840();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef0c8);
    (*pcVar1)();
  }
  lVar7 = lVar11;
  func_0x000107c3d2dc();
  func_0x000107c61180();
  if (lVar7 == 0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef0f4);
    (*pcVar1)();
  }
  lVar8 = lVar11;
  func_0x000107c45228();
  func_0x000107c61180();
  if (lVar8 == 0) {
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar7);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef128);
    (*pcVar1)();
  }
  puVar9 = PTR_PTR_1126c6830;
  func_0x000107c610f8();
  func_0x000107c48d58();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  lVar2 = lVar11;
  func_0x000107c44a3c();
  if ((int)lVar2 != 0) {
    lVar2 = lVar11;
    func_0x000107c4ebe0();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef12c);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c45230();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef130);
      (*pcVar1)();
    }
    func_0x000107c4ebe0();
    func_0x000107c61180();
    if (lVar11 == 0) {
      func_0x000107c61170(lVar3);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef13c);
      (*pcVar1)();
    }
    lVar2 = lVar11;
    func_0x000107c3ac2c();
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    if (lVar2 == 0) {
      func_0x000107c61170(lVar3);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027ef148);
      (*pcVar1)();
    }
    puVar10 = PTR_PTR_1126c67b8;
    func_0x000107c610f8(PTR_PTR_1126c67b8);
    func_0x000107c46e38();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c57620(puVar9,param_3,puVar10);
    func_0x000107c61170(puVar10);
  }
  *param_1 = puVar9;
  return;
}



/* Entry: 1027ef148; end: 1027ef23b;  */

void FUN_1027ef148(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "valdiContextParams(for:conversationParticipants:)";
  func_0x0001000c10c0("valdiContextParams(for:conversationParticipants:)");
  func_0x000107c61180();
  puVar2 = &UNK_110550740;
  func_0x000107c613fc(&UNK_110550740,0x30,7);
  *(undefined4 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  pcStack_50 = FUN_1027f0a1c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110550758;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1027ef23c; end: 1027ef2e7;  */

void FUN_1027ef23c(int param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  if (param_1 == 1) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    FUN_1027ef2e8(param_3,param_4);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    FUN_1027f0a2c(param_3,param_4);
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1027ef2e8; end: 1027ef78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027ef2e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long lVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined8 auStack_100 [7];
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_c0 + -extraout_x8;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  lStack_a8 = lVar8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar19 - extraout_x12_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar2 + -8);
  lVar17 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar12 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  lStack_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_01;
  func_0x000107c5edd0(lVar12,param_1,param_2);
  lVar1 = lVar12;
  (**(code **)(lVar16 + 0x30))(lVar12,1,lVar2);
  if ((int)lVar1 == 1) {
    func_0x0001000293e4(lVar12);
  }
  else {
    pcVar15 = *(code **)(lVar16 + 0x20);
    (*pcVar15)(lVar9,lVar12,lVar2);
    lVar12 = *(long *)(unaff_x20 + _DAT_112ec2428);
    lVar1 = lVar12;
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c61170();
      func_0x000107c4ffe8(lVar12);
      func_0x000107c61180();
      func_0x000107c615e8();
    }
    pcVar13 = *(code **)(lVar16 + 0x10);
    lStack_b8 = lVar12;
    (*pcVar13)(lVar19,lVar9,lVar2);
    pcVar11 = *(code **)(lVar16 + 0x38);
    (*pcVar11)(lVar19,0,1,lVar2);
    (*pcVar11)(lVar8,1,1,lVar2);
    lVar1 = 0;
    func_0x0001046305a8();
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar18,1,1,lVar1);
    *(undefined1 *)(lVar9 + -8) = 0;
    *(undefined8 *)(lVar9 + -0x10) = 0;
    *(undefined8 *)(lVar9 + -0x18) = 0;
    *(undefined8 *)(lVar9 + -0x20) = 0;
    *(undefined8 *)(lVar9 + -0x28) = 0;
    *(undefined8 *)(lVar9 + -0x30) = 0;
    *(undefined8 *)(lVar9 + -0x38) = 0;
    *(undefined1 **)(lVar9 + -0x40) = puVar18;
    lVar1 = lStack_a8;
    func_0x000104638e24(lStack_a8,1,lVar19,0,lVar8,0,0,0,0);
    uVar3 = 0;
    func_0x000104652fec(0);
    func_0x000107c610f8();
    func_0x000104651d90(lVar1,uVar3);
    puVar4 = PTR_PTR_1126ae560;
    lStack_b0 = lVar1;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar5 = puVar4;
    func_0x000107c43bf4();
    func_0x000107c61180();
    lVar1 = lStack_a0;
    lStack_a8 = lVar9;
    (*pcVar13)(lStack_a0,lVar9,lVar2);
    uVar10 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar14 = uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff);
    puVar6 = &UNK_110550790;
    func_0x000107c613fc(&UNK_110550790,uVar14 + lVar17,uVar10 | 7);
    (*pcVar15)(puVar6 + uVar14,lVar1,lVar2);
    pcStack_70 = FUN_1027f0c14;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100e38b5c;
    puStack_78 = &UNK_1105507a8;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_68);
    func_0x000107c5dc64(puVar5);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar5);
    lVar1 = _DAT_112ec2410;
    func_0x000107c61428(unaff_x20 + _DAT_112ec2410,&puStack_90,0,0);
    lVar1 = unaff_x20 + lVar1;
    func_0x000107c61618();
    if (lVar1 == 0) {
      (**(code **)(lVar16 + 8))(lStack_a8,lVar2);
      func_0x000107c61170(lStack_b0);
      func_0x000107c61170(puVar4);
    }
    else {
      uVar3 = 0;
      func_0x0001000956f0(0);
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar8 = lStack_b0;
      lVar9 = lStack_b0;
      func_0x000103c5d254(lStack_b0,puVar4,lVar1,unaff_x20,0,0,0,0);
      func_0x000107c61170(uVar3);
      func_0x000107c42c1c(lStack_b8);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(puVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar9);
      (**(code **)(lVar16 + 8))(lStack_a8,lVar2);
    }
  }
  return;
}


