/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103abd9a8; end: 103abd9db; -[SCSCStoriesSnapInfoCollectingServicesSaberServiceProvider provide] */

void FUN_103abd9a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103abd794();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103abd9dc; end: 103abda0f; -[SCSCStoriesSnapInfoCollectingServicesSaberServiceProvider __safeProvide] */

void FUN_103abd9dc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103abd8c0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103abda10; end: 103abda53; -[SCSCStoriesSnapInfoCollectingServicesSaberServiceProvider end] */

void FUN_103abda10(undefined8 param_1)

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



/* Entry: 103abda54; end: 103abdbeb;  */

void FUN_103abda54(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e66610)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrActiveUserSessionScopeGraphBridge/SCSCStoriesSnapInfoCollectingServicesSaberServiceProvider.swift"
                            ,100,2,0x50,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103abdbec);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103abdbec; end: 103abdc97; -[SCSCStoriesSnapInfoCollectingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103abdbec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103abda54(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103abdc98; end: 103abdd0b; -[SCSCStoriesSnapInfoCollectingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abdc98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe64f0,0);
  func_0x000107c61614(param_1 + _DAT_112fe64f8,0);
  *(undefined8 *)(param_1 + _DAT_112fe6500) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103abdd0c; end: 103abdd3f;  */

void FUN_103abdd0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103abdd40; end: 103abdd87; -[SCSCStoriesSnapInfoCollectingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abdd40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe64f0);
  func_0x000107c61610(param_1 + _DAT_112fe64f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe6500));
  return;
}



/* Entry: 103abdd88; end: 103abdda7;  */

void FUN_103abdd88(void)

{
  func_0x000107c61168(&PTR_PTR_112fe6548);
  return;
}



/* Entry: 103abdda8; end: 103abddb3; -[SCSCStoryDraftingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abdda8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe65b0;
  func_0x000107c61428(param_1 + _DAT_112fe65b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103abddb4; end: 103abddbf; -[SCSCStoryDraftingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abddb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe65b0;
  func_0x000107c61428(param_1 + _DAT_112fe65b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103abddc0; end: 103abddcb; -[SCSCStoryDraftingServicesSaberServiceProvider strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abddc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe65b8;
  func_0x000107c61428(param_1 + _DAT_112fe65b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103abddcc; end: 103abde0f;  */

void FUN_103abddcc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103abde10; end: 103abde1b; -[SCSCStoryDraftingServicesSaberServiceProvider setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abde10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe65b8;
  func_0x000107c61428(param_1 + _DAT_112fe65b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103abde1c; end: 103abde6f;  */

void FUN_103abde1c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103abde70; end: 103abe083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103abde70(void)

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
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103ab5f18();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fe54d8);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fe65c0);
      *(long *)(unaff_x20 + _DAT_112fe65c0) = lVar4;
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
                      "StrActiveUserSessionScopeGraphBridge/SCSCStoryDraftingServicesSaberServiceProvider.swift"
                      ,0x58,2,0x3b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abdf9c);
  (*pcVar1)();
}



/* Entry: 103abe084; end: 103abe0b7; -[SCSCStoryDraftingServicesSaberServiceProvider provide] */

void FUN_103abe084(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103abde70();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103abe0b8; end: 103abe0eb; -[SCSCStoryDraftingServicesSaberServiceProvider __safeProvide] */

void FUN_103abe0b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103abdf9c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103abe0ec; end: 103abe12f; -[SCSCStoryDraftingServicesSaberServiceProvider end] */

void FUN_103abe0ec(undefined8 param_1)

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



/* Entry: 103abe130; end: 103abe2c7;  */

void FUN_103abe130(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e66610)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f1999f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "StrActiveUserSessionScopeGraphBridge/SCSCStoryDraftingServicesSaberServiceProvider.swift"
                            ,0x58,2,0x50,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103abe2c8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103abe2c8; end: 103abe373; -[SCSCStoryDraftingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103abe2c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103abe130(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103abe374; end: 103abe3e7; -[SCSCStoryDraftingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe374(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe65b0,0);
  func_0x000107c61614(param_1 + _DAT_112fe65b8,0);
  *(undefined8 *)(param_1 + _DAT_112fe65c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103abe3e8; end: 103abe41b;  */

void FUN_103abe3e8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103abe41c; end: 103abe463; -[SCSCStoryDraftingServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe41c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fe65b0);
  func_0x000107c61610(param_1 + _DAT_112fe65b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe65c0));
  return;
}



/* Entry: 103abe464; end: 103abe483;  */

void FUN_103abe464(void)

{
  func_0x000107c61168(&PTR_PTR_112fe6608);
  return;
}



/* Entry: 103abe484; end: 103abe4c3;  */

void FUN_103abe484(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "SCSpotlightBadgeNotifications.shouldDisplayBadge";
  func_0x000107c60124("SCSpotlightBadgeNotifications.shouldDisplayBadge",0x30,2);
  pcRam000000011380ccc0 = pcVar1;
  return;
}



/* Entry: 103abe4c4; end: 103abe4df; +[_TtC24SCStoriesBadgingServices29SCSpotlightBadgeNotifications shouldDisplayBadge] */

void FUN_103abe4c4(void)

{
  if (lRam0000000112fe6678 != -1) {
    func_0x000107c61568(0x112fe6678,FUN_103abe484);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380ccc0);
  return;
}



/* Entry: 103abe4e0; end: 103abe51f;  */

void FUN_103abe4e0(void)

{
  char *pcVar1;
  
  func_0x0001000e2834(0);
  pcVar1 = "SCSpotlightBadgeNotifications.badgeCount";
  func_0x000107c60124("SCSpotlightBadgeNotifications.badgeCount",0x28,2);
  pcRam000000011380ccc8 = pcVar1;
  return;
}



/* Entry: 103abe520; end: 103abe53b; +[_TtC24SCStoriesBadgingServices29SCSpotlightBadgeNotifications badgeCount] */

void FUN_103abe520(void)

{
  if (lRam0000000112fe6680 != -1) {
    func_0x000107c61568(0x112fe6680,FUN_103abe4e0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380ccc8);
  return;
}



/* Entry: 103abe53c; end: 103abe577; -[_TtC24SCStoriesBadgingServices29SCSpotlightBadgeNotifications init] */

void FUN_103abe53c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103abe578; end: 103abe5ab;  */

void FUN_103abe578(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103abe5ac; end: 103abe5af; -[_TtC24SCStoriesBadgingServices29SCSpotlightBadgeNotifications .cxx_destruct] */

void FUN_103abe5ac(void)

{
  return;
}



/* Entry: 103abe5b0; end: 103abe5cf;  */

void FUN_103abe5b0(void)

{
  func_0x000107c61168(&PTR_PTR_112923998);
  return;
}



/* Entry: 103abe5d0; end: 103abe61b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe5d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe66b0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103abe61c; end: 103abe67b; -[_TtC24SCStoriesBadgingServices24SCStoriesBadgingServices init] */

void FUN_103abe61c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesBadgingServices.SCStoriesBadgingServices",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abe648);
  (*pcVar1)();
}



/* Entry: 103abe67c; end: 103abe68b; -[_TtC24SCStoriesBadgingServices24SCStoriesBadgingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe67c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fe66b0));
  return;
}



/* Entry: 103abe68c; end: 103abe69b; -[_TtC36SCDiscoverFeedBadgeLifecycleServices36SCDiscoverFeedBadgeLifecycleServices discoverFeedBadgeLifecycleListener] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe68c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe66e0));
  return;
}



/* Entry: 103abe69c; end: 103abe6e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe69c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe66e0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103abe6e8; end: 103abe747; -[_TtC36SCDiscoverFeedBadgeLifecycleServices36SCDiscoverFeedBadgeLifecycleServices init] */

void FUN_103abe6e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCDiscoverFeedBadgeLifecycleServices.SCDiscoverFeedBadgeLifecycleServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abe714);
  (*pcVar1)();
}



/* Entry: 103abe748; end: 103abe757; -[_TtC36SCDiscoverFeedBadgeLifecycleServices36SCDiscoverFeedBadgeLifecycleServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe748(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe66e0));
  return;
}



/* Entry: 103abe758; end: 103abe82f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe6710) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6718);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103abe830; end: 103abe863;  */

void FUN_103abe830(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103abe864; end: 103abe89f; -[_TtC27ContentSDNPublishingService22ContentSDNPrefetchInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abe864(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6710));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe6718 + 8));
  return;
}



/* Entry: 103abe8a0; end: 103abe8bf;  */

void FUN_103abe8a0(void)

{
  func_0x000107c61168(&PTR_PTR_112923bc8);
  return;
}



/* Entry: 103abe8c0; end: 103abe9b3;  */

void FUN_103abe8c0(undefined8 *param_1,int param_2)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  ppuVar2 = &puStack_50;
  func_0x000106f195e0();
  if (param_2 != 0) {
    uStack_30 = 0x103abe96c;
    uStack_28 = 0;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0x42000000;
    puStack_40 = &UNK_1000f6b44;
    puStack_38 = &UNK_1106cace0;
    func_0x000107c60bc4(&puStack_50);
    func_0x000100162d98(&UNK_10dc4d550,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
  }
  puVar3 = PTR_PTR_1126b3130;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    *param_1 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abe96c);
  (*pcVar1)();
}



/* Entry: 103abe9b4; end: 103abea0f;  */

void FUN_103abe9b4(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126ad850;
  func_0x000107c610f8();
  func_0x000107c474f4();
  func_0x000107c61170(param_2);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abea10);
  (*pcVar1)();
}



/* Entry: 103abea10; end: 103abea17;  */

void FUN_103abea10(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar2 = PTR_PTR_1126ad850;
  func_0x000107c610f8();
  func_0x000107c474f4();
  func_0x000107c61170(unaff_x20);
  if (puVar2 != (undefined *)0x0) {
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abea10);
  (*pcVar1)();
}



/* Entry: 103abea18; end: 103abea83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abea18(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  func_0x0001002b3410();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112fe6768) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 103abea84; end: 103abea8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abea84(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  func_0x0001002b3410();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112fe6768) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 103abea8c; end: 103abead7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abea8c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fe6768) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103abead8; end: 103abeb37; -[_TtC36SCStoriesDebuggingServicesEntryPoint33SCStoriesDebuggingServicesWrapper init] */

void FUN_103abead8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesDebuggingServicesEntryPoint.SCStoriesDebuggingServicesWrapper",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abeb04);
  (*pcVar1)();
}



/* Entry: 103abeb38; end: 103abeb77;  */

undefined1  [16] FUN_103abeb38(void)

{
  return ZEXT816(0x1106cac70);
}



/* Entry: 103abeb78; end: 103abeba3; -[_TtC36SCStoriesDebuggingServicesEntryPoint33SCStoriesDebuggingServicesWrapper .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abeb78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fe6768));
  return;
}



/* Entry: 103abeba4; end: 103abebe7;  */

void FUN_103abeba4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 103abebe8; end: 103abec1b;  */

void FUN_103abebe8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103abec1c; end: 103abec83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abec1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(*unaff_x20 + 0x18) + _DAT_112fe6768);
  func_0x000107c6157c(uVar2);
  func_0x000100083b20(&uStack_28);
  func_0x000107c61574(uVar2);
  func_0x000107c42c20(uVar1,param_2,uStack_28);
  func_0x000107c61170(uStack_28);
  return;
}



/* Entry: 103abec84; end: 103abec8b;  */

undefined8 FUN_103abec84(void)

{
  return 0;
}



/* Entry: 103abec8c; end: 103abece3;  */

void FUN_103abec8c(void)

{
  func_0x000107c61168(&PTR_PTR_112fe67d8);
  return;
}



/* Entry: 103abece4; end: 103abee57;  */

long * FUN_103abece4(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar1;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    lVar3 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar3;
    lVar7 = param_2[6];
    lVar6 = param_2[7];
    param_1[6] = lVar7;
    param_1[7] = lVar6;
    lVar11 = param_2[8];
    param_1[8] = lVar11;
    lVar12 = (long)*(int *)(param_3 + 0x24);
    lVar6 = 0;
    func_0x000107c5eea4();
    lVar8 = *(long *)(lVar6 + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    func_0x000107c61434(lVar1);
    func_0x000107c61434(lVar2);
    func_0x000107c61434(lVar3);
    func_0x000107c61174(lVar7);
    func_0x000107c61434(lVar11);
    lVar7 = (long)param_2 + lVar12;
    (*pcVar9)(lVar7,1,lVar6);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,lVar6);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar12,0,1,lVar6);
    }
    else {
      lVar7 = 0x112d373d8;
      func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
      func_0x000107c610b4((long)param_1 + lVar12,(long)param_2 + lVar12,
                          *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x2c);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar7 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103abee58; end: 103abeeef;  */

void FUN_103abee58(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x40));
  iVar1 = *(int *)(param_2 + 0x24);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103abeeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,lVar2);
  return;
}



/* Entry: 103abeef0; end: 103abf033;  */

undefined8 * FUN_103abeef0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar4 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar4;
  uVar1 = param_2[6];
  uVar10 = param_2[7];
  param_1[6] = uVar1;
  param_1[7] = uVar10;
  uVar10 = param_2[8];
  param_1[8] = uVar10;
  lVar11 = (long)*(int *)(param_3 + 0x24);
  lVar6 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar6 + -8);
  pcVar8 = *(code **)(lVar9 + 0x30);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar10);
  lVar7 = (long)param_2 + lVar11;
  (*pcVar8)(lVar7,1,lVar6);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,lVar6);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,lVar6);
  }
  else {
    lVar7 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar11,(long)param_2 + lVar11,
                        *(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  }
  iVar5 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar5) = *(undefined1 *)((long)param_2 + (long)iVar5);
  return param_1;
}



/* Entry: 103abf034; end: 103abf1eb;  */

undefined8 * FUN_103abf034(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  param_1[7] = param_2[7];
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  lVar5 = (long)*(int *)(param_3 + 0x24);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar2 = (long)param_1 + lVar5;
  (*pcVar7)(lVar2,1,lVar1);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,lVar1);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x18))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
      goto LAB_103abf1a0;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,lVar1);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,lVar1);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,lVar1);
    goto LAB_103abf1a0;
  }
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4((long)param_1 + lVar5,(long)param_2 + lVar5,
                      *(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
LAB_103abf1a0:
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  return param_1;
}



/* Entry: 103abf1ec; end: 103abf2db;  */

undefined8 * FUN_103abf1ec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar6;
  param_1[6] = param_2[6];
  uVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x24);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar2 + -8);
  lVar3 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar2);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,lVar2);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,lVar2);
  }
  else {
    lVar3 = 0x112d373d8;
    func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
    func_0x000107c610b4((long)param_1 + lVar4,(long)param_2 + lVar4,
                        *(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 103abf2dc; end: 103abf447;  */

undefined8 * FUN_103abf2dc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar3 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  func_0x000107c6142c(uVar2);
  uVar3 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61170(uVar3);
  uVar3 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  func_0x000107c6142c(uVar2);
  lVar7 = (long)*(int *)(param_3 + 0x24);
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar4 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar5 = (long)param_1 + lVar7;
  (*pcVar9)(lVar5,1,lVar4);
  lVar6 = (long)param_2 + lVar7;
  (*pcVar9)(lVar6,1,lVar4);
  if ((int)lVar5 == 0) {
    if ((int)lVar6 == 0) {
      (**(code **)(lVar8 + 0x28))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
      goto LAB_103abf400;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,lVar4);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,lVar4);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,lVar4);
    goto LAB_103abf400;
  }
  lVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  func_0x000107c610b4((long)param_1 + lVar7,(long)param_2 + lVar7,
                      *(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
LAB_103abf400:
  iVar1 = *(int *)(param_3 + 0x2c);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar1) = *(undefined1 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Entry: 103abf448; end: 103abf45f;  */

void FUN_103abf448(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103abf460; end: 103abf53b;  */

void FUN_103abf460(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10dc4d6d0;
  puStack_58 = &UNK_10dc4d6d0;
  puStack_50 = &UNK_10dc4d6d0;
  puStack_48 = &UNK_10dc4d6e8;
  puStack_40 = &UNK_10dc4d6d0;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc4d700;
    puStack_28 = &UNK_10dc4d700;
    func_0x000107c6153c(param_1,0x100,8,&puStack_60,param_1 + 0x10);
  }
  return;
}



/* Entry: 103abf53c; end: 103abf597; -[_TtC23SCStoryDraftingServices23SCStoryDraftingServices init] */

void FUN_103abf53c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoryDraftingServices.SCStoryDraftingServices",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abf568);
  (*pcVar1)();
}



/* Entry: 103abf598; end: 103abf5a7; -[_TtC23SCStoryDraftingServices23SCStoryDraftingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abf598(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fe68f0));
  return;
}



/* Entry: 103abf5a8; end: 103abf5b3; -[SCStoryDraftingSnapProSnap clientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abf5a8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fe6920))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fe6920);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103abf5b4; end: 103abf5bf; -[SCStoryDraftingSnapProSnap snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abf5b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fe6928))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fe6928);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103abf5c0; end: 103abf5cb; -[SCStoryDraftingSnapProSnap businessId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abf5c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fe6930))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fe6930);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103abf5cc; end: 103abf5db; -[SCStoryDraftingSnapProSnap thumbnailImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abf5cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fe6938));
  return;
}



/* Entry: 103abf5dc; end: 103abf5e7; -[SCStoryDraftingSnapProSnap captionText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abf5dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fe6940))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fe6940);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103abf5e8; end: 103abf63f;  */

void FUN_103abf5e8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103abf640; end: 103abf707; -[SCStoryDraftingSnapProSnap goLiveTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103abf640(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_11380ccd0,puVar4);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 103abf708; end: 103abf717; -[SCStoryDraftingSnapProSnap isFailed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103abf708(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11380ccd8);
}



/* Entry: 103abf718; end: 103abf727; -[SCStoryDraftingSnapProSnap isUpdating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103abf718(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11380cce0);
}



/* Entry: 103abf728; end: 103abf96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103abf728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6920);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6928);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6930);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112fe6938) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6940);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  func_0x0001009f0578(param_10,unaff_x20 + _DAT_11380ccd0);
  *(undefined1 *)(unaff_x20 + _DAT_11380ccd8) = (undefined1)param_11;
  *(undefined1 *)(unaff_x20 + _DAT_11380cce0) = param_11._1_1_;
  puVar2 = auStack_70;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_10);
  return puVar2;
}



/* Entry: 103abf970; end: 103abfb2f; -[SCStoryDraftingSnapProSnap initWithClientId:snapId:businessId:thumbnailImage:captionText:goLiveTimestamp:isFailed:isUpdating:] */

void FUN_103abf970(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,undefined4 param_9)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 auStack_b0 [2];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0x112d373d8;
  puVar5 = &UNK_10d9014c0;
  uStack_68 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar4 = auStack_90 + lVar1;
  if (param_3 == 0) {
    puStack_78 = (undefined *)0x0;
    lStack_70 = 0;
  }
  else {
    func_0x000107c5faec();
    puStack_78 = puVar5;
    lStack_70 = param_3;
  }
  if (param_4 == 0) {
    puStack_88 = (undefined *)0x0;
    lStack_80 = 0;
  }
  else {
    func_0x000107c5faec();
    puStack_88 = puVar5;
    lStack_80 = param_4;
  }
  if (param_5 == 0) {
    param_5 = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_5);
    puVar6 = puVar5;
  }
  func_0x000107c61174(param_6);
  lVar3 = param_7;
  func_0x000107c61174();
  lVar2 = param_8;
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_7 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_7);
    func_0x000107c61170(lVar3);
  }
  if (lVar2 == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
  }
  else {
    func_0x000107c5ee94(puVar4,param_8);
    func_0x000107c61170(lVar2);
    lVar3 = 0;
    func_0x000107c5eea4();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(puVar4,lVar2 == 0,1);
  auStack_a0[lVar1 + 1] = param_9._1_1_;
  auStack_a0[lVar1] = (undefined1)param_9;
  *(undefined **)((long)auStack_b0 + lVar1) = puVar5;
  *(undefined1 **)((long)auStack_b0 + lVar1 + 8) = puVar4;
  func_0x000103abf848(lStack_70,puStack_78,lStack_80,puStack_88,param_5,puVar6,param_6,param_7);
  return;
}



/* Entry: 103abfb30; end: 103abfb5f;  */

void FUN_103abfb30(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103abfb60(param_1);
  return;
}



/* Entry: 103abfb60; end: 103abfca3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103abfb60(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar4 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  uVar5 = *param_1;
  uVar10 = param_1[3];
  uVar8 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6920);
  puVar1[1] = param_1[1];
  *puVar1 = uVar5;
  uVar5 = param_1[1];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6928);
  puVar1[1] = uVar10;
  *puVar1 = uVar8;
  uVar6 = param_1[3];
  uVar8 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6930);
  puVar1[1] = param_1[5];
  *puVar1 = uVar8;
  uVar8 = param_1[5];
  uVar10 = param_1[6];
  *(undefined8 *)(unaff_x20 + _DAT_112fe6938) = uVar10;
  uVar7 = param_1[8];
  uVar9 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6940);
  puVar1[1] = param_1[8];
  *puVar1 = uVar9;
  lVar3 = 0;
  func_0x000103abecac();
  func_0x0001009f0578((long)param_1 + (long)*(int *)(lVar3 + 0x24),unaff_x20 + _DAT_11380ccd0);
  *(undefined1 *)(unaff_x20 + _DAT_11380ccd8) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  *(undefined1 *)(unaff_x20 + _DAT_11380cce0) =
       *(undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar6);
  func_0x000107c61434(uVar8);
  func_0x000107c61174(uVar10);
  func_0x000107c61434(uVar7);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar2);
  FUN_103abfca4(param_1);
  return puVar4;
}



/* Entry: 103abfca4; end: 103abfcdf;  */

undefined8 FUN_103abfca4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000103abecac();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103abfce0; end: 103abfce3; -[SCStoryDraftingSnapProSnap copyWithZone:] */

void FUN_103abfce0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103abfce4; end: 103abfd2b; -[SCStoryDraftingSnapProSnap description] */

void FUN_103abfce4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  FUN_103abfd2c();
  func_0x000107c61170(param_1);
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103abfd2c; end: 103abfe7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103abfd2c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = 0;
  func_0x000103abecac();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6920);
  uVar7 = puVar1[1];
  uVar9 = *puVar1;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112fe6928);
  uVar8 = puVar2[1];
  uVar11 = puVar2[1];
  uVar10 = *puVar2;
  *(undefined8 *)(&stack0xffffffffffffffb8 + lVar3) = puVar1[1];
  *puVar6 = uVar9;
  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar3) = uVar11;
  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar3) = uVar10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6930);
  uVar9 = puVar1[1];
  uVar10 = *puVar1;
  *(undefined8 *)(&stack0xffffffffffffffd8 + lVar3) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffd0 + lVar3) = uVar10;
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112fe6938);
  *(undefined8 *)(&stack0xffffffffffffffe0 + lVar3) = uVar10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fe6940);
  uVar11 = puVar1[1];
  uVar12 = *puVar1;
  *(undefined8 *)(&stack0xfffffffffffffff0 + lVar3) = puVar1[1];
  *(undefined8 *)(&stack0xffffffffffffffe8 + lVar3) = uVar12;
  func_0x0001009f0578(unaff_x20 + _DAT_11380ccd0,
                      (undefined1 *)((long)puVar6 + (long)*(int *)(lVar5 + 0x24)));
  *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x28)) =
       *(undefined1 *)(unaff_x20 + _DAT_11380ccd8);
  *(undefined1 *)((long)puVar6 + (long)*(int *)(lVar4 + 0x2c)) =
       *(undefined1 *)(unaff_x20 + _DAT_11380cce0);
  func_0x000107c61434(uVar11);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  func_0x000107c61174(uVar10);
  FUN_103abfca4(puVar6);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Entry: 103abfe7c; end: 103abfef7; -[SCStoryDraftingSnapProSnap init] */

void FUN_103abfe7c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCStoryDraftingServices/SCStoryDraftingSnapProSnapWrapper.swift",0x3f,2,0x47,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103abfec4);
  (*pcVar1)();
}



/* Entry: 103abfef8; end: 103abff7f; -[SCStoryDraftingSnapProSnap .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103abfef8(long param_1)

{
  long lVar1;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe6920 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe6928 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe6930 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fe6938));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fe6940 + 8));
  param_1 = param_1 + _DAT_11380ccd0;
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103abff80; end: 103abff87;  */

void FUN_103abff80(void)

{
  if (lRam0000000112fe6970 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7a9810);
  return;
}



/* Entry: 103abff88; end: 103abffbf;  */

void FUN_103abff88(undefined8 param_1)

{
  if (lRam0000000112fe6970 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a9810);
  return;
}



/* Entry: 103abffc0; end: 103ac0053;  */

void FUN_103abffc0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_60 = &UNK_10dc4d760;
  puStack_58 = &UNK_10dc4d760;
  puStack_50 = &UNK_10dc4d760;
  puStack_48 = &UNK_10dc4d778;
  puStack_40 = &UNK_10dc4d760;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc4d790;
    puStack_28 = &UNK_10dc4d790;
    func_0x000107c61630(param_1,0x100,8,&puStack_60,param_1 + 0x50);
  }
  return;
}



/* Entry: 103ac0054; end: 103ac0063;  */

void FUN_103ac0054(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ac0064; end: 103ac0083;  */

void FUN_103ac0064(void)

{
  func_0x000107c61168(&PTR_PTR_112fe69c0);
  return;
}



/* Entry: 103ac0084; end: 103ac0097;  */

bool FUN_103ac0084(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103ac0098; end: 103ac0187;  */

void FUN_103ac0098(void)

{
  byte bVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(*(undefined4 *)(&UNK_10dc4d8b4 + (ulong)bVar1 * 4));
  func_0x000107c606a8();
  return;
}



/* Entry: 103ac0188; end: 103ac01c7;  */

void FUN_103ac0188(undefined4 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined4 *)(&UNK_10dc4d8b4 + (ulong)*unaff_x20 * 4);
  return;
}



/* Entry: 103ac01c8; end: 103ac0207;  */

void FUN_103ac01c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe6a70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc4d800;
  func_0x000107c61520(&UNK_10dc4d800,&UNK_1106caea8);
  puRam0000000112fe6a70 = puVar1;
  return;
}



/* Entry: 103ac0208; end: 103ac036b;  */

int FUN_103ac0208(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ac0284;
        goto LAB_103ac0268;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ac0268:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_103ac0284:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ac036c; end: 103ac040f;  */

void FUN_103ac036c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1106caf20;
  func_0x000107c613fc(&UNK_1106caf20,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103ac0554,puVar1);
  return;
}



/* Entry: 103ac0410; end: 103ac0553;  */

void FUN_103ac0410(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1106caf68;
  func_0x000107c613fc(&UNK_1106caf68,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  pcStack_60 = FUN_103ac0698;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_1106caf80;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000a0a8c(0);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd000000000000029,0x800000010f19ab00);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 103ac0554; end: 103ac056f;  */

void FUN_103ac0554(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar7 = &puStack_80;
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1106caf68;
  func_0x000107c613fc(&UNK_1106caf68,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  pcStack_60 = FUN_103ac0698;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_101443eec;
  puStack_68 = &UNK_1106caf80;
  puStack_58 = puVar6;
  func_0x000107c60bc4(&puStack_80);
  puVar6 = puStack_58;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x0001000a0a8c(0);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,0xd000000000000029,0x800000010f19ab00);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}


