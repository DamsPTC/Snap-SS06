/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100bd778c; end: 100bd7793; -[SCFriendsFeedBadgeProvider navigationItemType] */

undefined8 FUN_100bd778c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bd7794; end: 100bd792f; -[SCActiveUserNGSNavigationRouter _bindBadgePlugIn:navigationItem:] */

void FUN_100bd7794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_3;
  func_0x000107c4d51c();
  func_0x000107c61144(auStack_58,param_1);
  uVar2 = param_3;
  func_0x000107c3e620(param_3);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  uVar4 = uVar2;
  func_0x000107c4da80(uVar2);
  func_0x000107c61180();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c6111c(auStack_68,auStack_58);
  uVar5 = uVar4;
  uStack_60 = uVar1;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100bd7930; end: 100bd7937; -[SCFriendsFeedBadgeProvider badgeCount] */

undefined8 FUN_100bd7930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bd7938; end: 100bd793f; -[SCDiscoverFeedBadgeProvider shouldHideBadgeCount] */

undefined8 FUN_100bd7938(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 100bd7940; end: 100bd7947; -[SCDiscoverFeedBadgeProvider badgeCount] */

undefined8 FUN_100bd7940(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100bd7948; end: 100bd79bb; -[SCBitmojiValdiImageLoadersEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd7948(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4b648,0);
  func_0x000107c61614(param_1 + _DAT_112d4b650,0);
  *(undefined8 *)(param_1 + _DAT_112d4b658) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bd79bc; end: 100bd7a67; -[SCBitmojiValdiImageLoadersEntryPoint setValue:forIvarName:] */

void FUN_100bd79bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bd7a68(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bd7a68; end: 100bd7bff;  */

void FUN_100bd7a68(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e6050)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef19fb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BitmojiValdiImageLoaders/SCBitmojiValdiImageLoadersEntryPoint.swift",
                            0x43,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd7c00);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c08();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bd7c00; end: 100bd7c0b; -[SCBitmojiValdiImageLoadersEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd7c00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b648;
  func_0x000107c61428(param_1 + _DAT_112d4b648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd7c0c; end: 100bd7c5f;  */

void FUN_100bd7c0c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd7c60; end: 100bd7cd3; -[SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd7c60(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130143b8,0);
  func_0x000107c61614(param_1 + _DAT_1130143c0,0);
  *(undefined8 *)(param_1 + _DAT_1130143c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bd7cd4; end: 100bd7d7f; -[SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bd7cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bd7d80(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bd7d80; end: 100bd7f17;  */

void FUN_100bd7d80(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e42160)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BmUserSessionScopeGraphBridge/SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider.swift"
                            ,0x5f,2,0x40,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd7f18);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52dc4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bd7f18; end: 100bd7f23; -[SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd7f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130143b8;
  func_0x000107c61428(param_1 + _DAT_1130143b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd7f24; end: 100bd7f77;  */

void FUN_100bd7f24(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd7f78; end: 100bd7f83; -[SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd7f78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130143c0;
  func_0x000107c61428(param_1 + _DAT_1130143c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd7f84; end: 100bd7fb7; -[SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider __safeProvide] */

void FUN_100bd7f84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bd7fb8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bd7fb8; end: 100bd809f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd7fb8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bd80fc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113013c38);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130143c8);
      *(long *)(unaff_x20 + _DAT_1130143c8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bd80a0; end: 100bd80ab; -[SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd80a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130143b8;
  func_0x000107c61428(param_1 + _DAT_1130143b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd80ac; end: 100bd80ef;  */

void FUN_100bd80ac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bd80f0; end: 100bd80fb; -[SCSCBitmojiFlatlandBatchContentServicesSaberServiceProvider bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd80f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130143c0;
  func_0x000107c61428(param_1 + _DAT_1130143c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd80fc; end: 100bd8177;  */

void FUN_100bd80fc(undefined8 param_1)

{
  if (lRam0000000113013800 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c75a8);
  return;
}



/* Entry: 100bd8178; end: 100bd8183; -[SCBitmojiValdiImageLoadersEntryPoint setBatchContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd8178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b650;
  func_0x000107c61428(param_1 + _DAT_112d4b650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd8184; end: 100bd81ab; -[SCBitmojiValdiImageLoadersEntryPoint begin] */

void FUN_100bd8184(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100bd81ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bd81ac; end: 100bd8293;  */

/* WARNING: Possible PIC construction at 0x000100bd8238: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd823c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_100bd81ac(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c3e6e0();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = 0;
    FUN_100bd82f0();
    func_0x000107c613fc();
    *(long *)(lVar2 + 0x18) = unaff_x20;
    *(undefined8 *)(lVar2 + 0x20) = 0;
    *(long *)(lVar2 + 0x10) = lVar1;
    func_0x000107c61174(lVar1);
    func_0x000107c61174(unaff_x20);
    FUN_100bd831c();
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bd8294; end: 100bd829f; -[SCBitmojiValdiImageLoadersEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd8294(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b648;
  func_0x000107c61428(param_1 + _DAT_112d4b648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd82a0; end: 100bd82e3;  */

void FUN_100bd82a0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bd82e4; end: 100bd82ef; -[SCBitmojiValdiImageLoadersEntryPoint batchContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd82e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b650;
  func_0x000107c61428(param_1 + _DAT_112d4b650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd82f0; end: 100bd830f;  */

void FUN_100bd82f0(void)

{
  func_0x000107c61168(&PTR_PTR_112d4b530);
  return;
}



/* Entry: 100bd8310; end: 100bd831b;  */

void FUN_100bd8310(void)

{
  return;
}



/* Entry: 100bd831c; end: 100bd83bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd831c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c411b4();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_100bd83bc();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d4b5b8) = uVar1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4e9e4(uVar1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(long **)(unaff_x20 + 0x20) = plVar4;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100bd83bc; end: 100bd83db;  */

void FUN_100bd83bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127a08c8);
  return;
}



/* Entry: 100bd83dc; end: 100bd83e3; -[SCComposerActiveUserSessionImageLoadersRegistryScope plugInRegistry] */

undefined8 FUN_100bd83dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100bd83e4; end: 100bd8457; -[SCSCStoriesPlaybackServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd83e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fe6430,0);
  func_0x000107c61614(param_1 + _DAT_112fe6438,0);
  *(undefined8 *)(param_1 + _DAT_112fe6440) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bd8458; end: 100bd8503; -[SCSCStoriesPlaybackServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bd8458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bd8504(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bd8504; end: 100bd869b;  */

void FUN_100bd8504(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
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
                            "StrActiveUserSessionScopeGraphBridge/SCSCStoriesPlaybackServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x50,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd869c);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c599bc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bd869c; end: 100bd86a7; -[SCSCStoriesPlaybackServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd869c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe6430;
  func_0x000107c61428(param_1 + _DAT_112fe6430,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd86a8; end: 100bd86fb;  */

void FUN_100bd86a8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd86fc; end: 100bd8707; -[SCSCStoriesPlaybackServicesSaberServiceProvider setStrActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd86fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fe6438;
  func_0x000107c61428(param_1 + _DAT_112fe6438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd8708; end: 100bd873b; -[SCSCStoriesPlaybackServicesSaberServiceProvider __safeProvide] */

void FUN_100bd8708(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bd873c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bd873c; end: 100bd8823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd873c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c5c098();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bd8880();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fe54a8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fe6440);
      *(long *)(unaff_x20 + _DAT_112fe6440) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bd8824; end: 100bd882f; -[SCSCStoriesPlaybackServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd8824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe6430;
  func_0x000107c61428(param_1 + _DAT_112fe6430,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd8830; end: 100bd8873;  */

void FUN_100bd8830(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bd8874; end: 100bd887f; -[SCSCStoriesPlaybackServicesSaberServiceProvider strActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd8874(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fe6438;
  func_0x000107c61428(param_1 + _DAT_112fe6438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd8880; end: 100bd88fb;  */

void FUN_100bd8880(undefined8 param_1)

{
  if (lRam0000000112fe5190 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7a8e40);
  return;
}



/* Entry: 100bd88fc; end: 100bd8a33; -[SCCommunitiesStorySnapThumbnailComposerLoaderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100bd89b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd89c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd89d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8a08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd89d4) */
/* WARNING: Removing unreachable block (ram,0x000100bd89c4) */
/* WARNING: Removing unreachable block (ram,0x000100bd89b4) */
/* WARNING: Removing unreachable block (ram,0x000100bd8a0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd88fc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b4d70;
  func_0x000107c610f4(PTR_PTR_1126b4d70);
  lVar2 = param_1 + _DAT_11271c640;
  func_0x000107c61148(lVar2);
  func_0x000107c4d39c();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_11271c644;
  func_0x000107c61148(lVar3);
  func_0x000107c5bf98();
  func_0x000107c61180();
  param_1 = param_1 + _DAT_11271c648;
  func_0x000107c61148(param_1);
  func_0x000107c439e4();
  func_0x000107c61180();
  func_0x000107c47894(puVar1,param_2,lVar2,lVar3,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100bd8a34; end: 100bd8ae3; -[SCUserSnapContactsPrivacy isEqual:] */

long FUN_100bd8a34(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100bd8ac8;
    uVar1 = param_1;
    func_0x000107c61158(param_1);
    uVar2 = param_3;
    func_0x000107c6115c(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_100bd8ac8;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x000107c49cec();
      goto LAB_100bd8ac8;
    }
  }
  lVar3 = 1;
LAB_100bd8ac8:
  func_0x000107c61170(param_3);
  return lVar3;
}



/* Entry: 100bd8ae4; end: 100bd8af3; -[_TtC25SCStoriesPlaybackServices25SCStoriesPlaybackServices friendStoriesPlaybackDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd8ae4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11307edb0));
  return;
}



/* Entry: 100bd8af4; end: 100bd8bbf; -[SCCommunitiesStorySnapThumbnailComposerLoader initWithMyStoriesDataCoordinator:storiesThumbnailCoordinator:storiesPlaybackDataProvider:] */

undefined1 *
FUN_100bd8af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126e62e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bd8bc0; end: 100bd8bcb; -[SCUserSnapContactsPrivacy .cxx_destruct] */

void FUN_100bd8bc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100bd8bcc; end: 100bd921f; -[SCFriendsFeedDataCoordinator _updateFriendsFeedItemsWithFeedItems:consumableConversationIdsList:consumableFeedItemsList:feedIdsList:quickAddSnapchatter:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:friendsFeedUpdate:] */

/* WARNING: Possible PIC construction at 0x000100bd8c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8e60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8e98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8ee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8fec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd900c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd901c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd908c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd90b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd90d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd90f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9110: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd918c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd919c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd91ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd91bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8cf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8d50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd91e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8d0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd8cb0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd8d10) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d6c) */
/* WARNING: Removing unreachable block (ram,0x000100bd8dc8) */
/* WARNING: Removing unreachable block (ram,0x000100bd91ec) */
/* WARNING: Removing unreachable block (ram,0x000100bd9218) */
/* WARNING: Removing unreachable block (ram,0x000100bd921c) */
/* WARNING: Removing unreachable block (ram,0x000100bd8e14) */
/* WARNING: Removing unreachable block (ram,0x000100bd8e24) */
/* WARNING: Removing unreachable block (ram,0x000100bd91f4) */
/* WARNING: Removing unreachable block (ram,0x000100bd8db0) */
/* WARNING: Removing unreachable block (ram,0x000100bd8dd0) */
/* WARNING: Removing unreachable block (ram,0x000100bd91e4) */
/* WARNING: Removing unreachable block (ram,0x000100bd8df0) */
/* WARNING: Removing unreachable block (ram,0x000100bd8df8) */
/* WARNING: Removing unreachable block (ram,0x000100bd8dbc) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d54) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d74) */
/* WARNING: Removing unreachable block (ram,0x000100bd8dc0) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d90) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d98) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d60) */
/* WARNING: Removing unreachable block (ram,0x000100bd8cf8) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d18) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d64) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d34) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d3c) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d04) */
/* WARNING: Removing unreachable block (ram,0x000100bd91c0) */
/* WARNING: Removing unreachable block (ram,0x000100bd91b0) */
/* WARNING: Removing unreachable block (ram,0x000100bd91a0) */
/* WARNING: Removing unreachable block (ram,0x000100bd9190) */
/* WARNING: Removing unreachable block (ram,0x000100bd9178) */
/* WARNING: Removing unreachable block (ram,0x000100bd9180) */
/* WARNING: Removing unreachable block (ram,0x000100bd9154) */
/* WARNING: Removing unreachable block (ram,0x000100bd9138) */
/* WARNING: Removing unreachable block (ram,0x000100bd9114) */
/* WARNING: Removing unreachable block (ram,0x000100bd90f8) */
/* WARNING: Removing unreachable block (ram,0x000100bd90d4) */
/* WARNING: Removing unreachable block (ram,0x000100bd90b8) */
/* WARNING: Removing unreachable block (ram,0x000100bd9078) */
/* WARNING: Removing unreachable block (ram,0x000100bd9020) */
/* WARNING: Removing unreachable block (ram,0x000100bd9090) */
/* WARNING: Removing unreachable block (ram,0x000100bd9034) */
/* WARNING: Removing unreachable block (ram,0x000100bd9010) */
/* WARNING: Removing unreachable block (ram,0x000100bd9000) */
/* WARNING: Removing unreachable block (ram,0x000100bd8ff0) */
/* WARNING: Removing unreachable block (ram,0x000100bd8f24) */
/* WARNING: Removing unreachable block (ram,0x000100bd8ee4) */
/* WARNING: Removing unreachable block (ram,0x000100bd8ee8) */
/* WARNING: Removing unreachable block (ram,0x000100bd8eb4) */
/* WARNING: Removing unreachable block (ram,0x000100bd8f2c) */
/* WARNING: Removing unreachable block (ram,0x000100bd8ec0) */
/* WARNING: Removing unreachable block (ram,0x000100bd8e9c) */
/* WARNING: Removing unreachable block (ram,0x000100bd8e80) */
/* WARNING: Removing unreachable block (ram,0x000100bd8e64) */
/* WARNING: Removing unreachable block (ram,0x000100bd8e4c) */
/* WARNING: Removing unreachable block (ram,0x000100bd8c9c) */
/* WARNING: Removing unreachable block (ram,0x000100bd8ca8) */
/* WARNING: Removing unreachable block (ram,0x000100bd8cb4) */
/* WARNING: Removing unreachable block (ram,0x000100bd8cbc) */
/* WARNING: Removing unreachable block (ram,0x000100bd8d08) */
/* WARNING: Removing unreachable block (ram,0x000100bd8cd8) */
/* WARNING: Removing unreachable block (ram,0x000100bd8ce0) */

void FUN_100bd8bcc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  lVar1 = *(long *)(param_1 + 8);
  func_0x000107c61174(param_3);
  func_0x000107c61174(lVar1);
  if (param_3 != lVar1) {
    if (lVar1 == 0) {
      func_0x000107c61170(param_3);
      func_0x000107c40794();
      lVar1 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = param_7;
    }
    else {
      func_0x000107c49cec(param_3,param_2,lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100bd9220; end: 100bd9293; -[SCSCBitmojiFlatlandContentServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd9220(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113014478,0);
  func_0x000107c61614(param_1 + _DAT_113014480,0);
  *(undefined8 *)(param_1 + _DAT_113014488) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bd9294; end: 100bd933f; -[SCSCBitmojiFlatlandContentServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bd9294(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bd9340(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bd9340; end: 100bd94d7;  */

void FUN_100bd9340(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e42160)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BmUserSessionScopeGraphBridge/SCSCBitmojiFlatlandContentServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x40,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd94d8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52dc4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bd94d8; end: 100bd94e3; -[SCSCBitmojiFlatlandContentServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd94d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113014478;
  func_0x000107c61428(param_1 + _DAT_113014478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd94e4; end: 100bd9537;  */

void FUN_100bd94e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd9538; end: 100bd953f; -[SCFriendsFeedUpdate trackingIdentifier] */

undefined8 FUN_100bd9538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100bd9540; end: 100bd96d7; -[SCFriendsFeedItemStream initWithFriendsFeedItems:quickAddSnapchatters:incomingSnapchatters:contactSnapchatters:contactNonSnapchatters:fetchContexts:trackingIdentifier:] */

undefined1 *
FUN_100bd9540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_112703998;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100bd96d8; end: 100bd9743; -[SCFriendsFeedItemStream .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100bd96f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9708: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100bd9720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd970c) */
/* WARNING: Removing unreachable block (ram,0x000100bd96f4) */
/* WARNING: Removing unreachable block (ram,0x000100bd9724) */

void FUN_100bd96d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 100bd9744; end: 100bd974b; -[SCFriendsFeedUpdate isSuccessfulSync] */

undefined1 FUN_100bd9744(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 100bd974c; end: 100bd977b;  */

void FUN_100bd974c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c40808(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 100bd977c; end: 100bd9787; -[SCSCBitmojiFlatlandContentServicesSaberServiceProvider setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd977c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113014480;
  func_0x000107c61428(param_1 + _DAT_113014480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd9788; end: 100bd97bb; -[SCSCBitmojiFlatlandContentServicesSaberServiceProvider __safeProvide] */

void FUN_100bd9788(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bd97bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bd97bc; end: 100bd98a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd97bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bd9900();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113013c40);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113014488);
      *(long *)(unaff_x20 + _DAT_113014488) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bd98a4; end: 100bd98af; -[SCSCBitmojiFlatlandContentServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd98a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113014478;
  func_0x000107c61428(param_1 + _DAT_113014478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd98b0; end: 100bd98f3;  */

void FUN_100bd98b0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bd98f4; end: 100bd98ff; -[SCSCBitmojiFlatlandContentServicesSaberServiceProvider bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd98f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113014480;
  func_0x000107c61428(param_1 + _DAT_113014480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bd9900; end: 100bd9937;  */

void FUN_100bd9900(undefined8 param_1)

{
  if (lRam00000001130138d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c760c);
  return;
}



/* Entry: 100bd9938; end: 100bd999b;  */

void FUN_100bd9938(long param_1)

{
  func_0x000107c61120(param_1 + 0x50);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x48),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x40),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x38),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x30),8);
  func_0x000107c60bcc(*(undefined8 *)(param_1 + 0x28),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100bd999c; end: 100bd99a3;  */

void FUN_100bd999c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100bd99a4; end: 100bd99df; -[SCFriendsFeedUpdate .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100bd99bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100bd99c0) */

void FUN_100bd99a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x20,0);
  return;
}



/* Entry: 100bd99e0; end: 100bd9a23;  */

void FUN_100bd99e0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0x100,1,&puStack_18,param_1 + 0x70);
  return;
}



/* Entry: 100bd9a24; end: 100bd9aab; -[SCBitmoji3DPreviewServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd9a24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4b850,0);
  func_0x000107c61614(param_1 + _DAT_112d4b858,0);
  func_0x000107c61614(param_1 + _DAT_112d4b860,0);
  *(undefined8 *)(param_1 + _DAT_112d4b868) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bd9aac; end: 100bd9b57; -[SCBitmoji3DPreviewServiceProvider setValue:forIvarName:] */

void FUN_100bd9aac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bd9b58(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bd9b58; end: 100bd9d5b;  */

void FUN_100bd9b58(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e6230)) {
    uVar2 = 0xd000000000000017;
    func_0x000107c605b8(0xd000000000000017,0x800000010ef19dd0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10e5dd0)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef1a230,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd00000000000001d;
          if (((param_2 != -0x2fffffffffffffe3) || (param_3 != -0x7ffffffef10e5db0)) &&
             (func_0x000107c605b8(0xd00000000000001d,0x800000010ef1a250,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SCBitmoji3DPreviewServicesImplementation/SCBitmoji3DPreviewServiceProvider.swift"
                                ,0x50,2,0x32,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100bd9d5c);
            (*pcVar1)();
          }
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52d4c();
          goto LAB_100bd9bec;
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c54a74();
      goto LAB_100bd9bec;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53808();
LAB_100bd9bec:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bd9d5c; end: 100bd9d67; -[SCBitmoji3DPreviewServiceProvider setContentDeliveryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd9d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b850;
  func_0x000107c61428(param_1 + _DAT_112d4b850,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd9d68; end: 100bd9dbb;  */

void FUN_100bd9d68(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd9dbc; end: 100bd9dc7; -[SCBitmoji3DPreviewServiceProvider setFlatlandContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd9dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b858;
  func_0x000107c61428(param_1 + _DAT_112d4b858,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bd9dc8; end: 100bd9e3b; -[SCBitmojiStyleProvidingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bd9dc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113013f38,0);
  func_0x000107c61614(param_1 + _DAT_113013f40,0);
  *(undefined8 *)(param_1 + _DAT_113013f48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100bd9e3c; end: 100bd9ee7; -[SCBitmojiStyleProvidingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100bd9e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100bd9ee8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100bd9ee8; end: 100bda07f;  */

void FUN_100bd9ee8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e42160)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f1bdea0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BmUserSessionScopeGraphBridge/SCBitmojiStyleProvidingServicesSaberServiceProvider.swift"
                            ,0x57,2,0x40,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100bda080);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52dc4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100bda080; end: 100bda08b; -[SCBitmojiStyleProvidingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda080(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013f38;
  func_0x000107c61428(param_1 + _DAT_113013f38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bda08c; end: 100bda0df;  */

void FUN_100bda08c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bda0e0; end: 100bda0eb; -[SCBitmojiStyleProvidingServicesSaberServiceProvider setBmUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda0e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113013f40;
  func_0x000107c61428(param_1 + _DAT_113013f40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bda0ec; end: 100bda11f; -[SCBitmojiStyleProvidingServicesSaberServiceProvider __safeProvide] */

void FUN_100bda0ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bda120();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bda120; end: 100bda207;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda120(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3eb78();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100bda264();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113013c00);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113013f48);
      *(long *)(unaff_x20 + _DAT_113013f48) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      FUN_100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100bda208; end: 100bda213; -[SCBitmojiStyleProvidingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda208(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013f38;
  func_0x000107c61428(param_1 + _DAT_113013f38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bda214; end: 100bda257;  */

void FUN_100bda214(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bda258; end: 100bda263; -[SCBitmojiStyleProvidingServicesSaberServiceProvider bmUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda258(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113013f40;
  func_0x000107c61428(param_1 + _DAT_113013f40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bda264; end: 100bda2df;  */

void FUN_100bda264(undefined8 param_1)

{
  if (lRam0000000113013320 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7c7350);
  return;
}



/* Entry: 100bda2e0; end: 100bda2eb; -[SCBitmoji3DPreviewServiceProvider setBitmojiStyleProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4b860;
  func_0x000107c61428(param_1 + _DAT_112d4b860,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100bda2ec; end: 100bda31f; -[SCBitmoji3DPreviewServiceProvider __safeProvide] */

void FUN_100bda2ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100bda320();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100bda320; end: 100bda537;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda320(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  ppuVar7 = &puStack_80;
  lVar1 = unaff_x20;
  func_0x000107c40434();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c436b0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c3ea5c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = 0;
        FUN_100bda5a8();
        func_0x000107c613fc();
        puVar5 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar6 = &UNK_110369230;
        func_0x000107c613fc(&UNK_110369230,0x28,7);
        *(long *)(puVar6 + 0x10) = lVar1;
        *(long *)(puVar6 + 0x18) = lVar2;
        *(long *)(puVar6 + 0x20) = lVar3;
        puStack_60 = &UNK_100f195ec;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_100f19134;
        puStack_68 = &UNK_110369248;
        puStack_58 = puVar6;
        func_0x000107c60bc4(&puStack_80);
        puVar6 = puStack_58;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar3);
        func_0x000107c61574(puVar6);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c60bd0(ppuVar7);
        *(undefined **)(lVar4 + 0x10) = puVar5;
        uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d4b868);
        *(long *)(unaff_x20 + _DAT_112d4b868) = lVar4;
        func_0x000107c6157c(lVar4);
        func_0x000107c61574(uVar8);
        func_0x000107c610f8(PTR_PTR_1126a5f20);
        func_0x000107c45984();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61574(lVar4);
        return;
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100bda538; end: 100bda53f;  */

void FUN_100bda538(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100bda540; end: 100bda54b; -[SCBitmoji3DPreviewServiceProvider contentDeliveryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda540(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b850;
  func_0x000107c61428(param_1 + _DAT_112d4b850,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bda54c; end: 100bda58f;  */

void FUN_100bda54c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100bda590; end: 100bda59b; -[SCBitmoji3DPreviewServiceProvider flatlandContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda590(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b858;
  func_0x000107c61428(param_1 + _DAT_112d4b858,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bda59c; end: 100bda5a7; -[SCBitmoji3DPreviewServiceProvider bitmojiStyleProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100bda59c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4b860;
  func_0x000107c61428(param_1 + _DAT_112d4b860,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100bda5a8; end: 100bda623;  */

void FUN_100bda5a8(undefined8 param_1)

{
  if (lRam0000000112d4b7a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6198f8);
  return;
}



/* Entry: 100bda624; end: 100bda633;  */

void FUN_100bda624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e809e40);
  return;
}


