/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b75748; end: 100b75797; -[SCCameraMiniCarouselConfigurationImpl lensExplorerTabBarItemEnabled] */

long FUN_100b75748(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4b10c(lVar1);
  }
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 100b75798; end: 100b75b27; -[SCLensExplorerAboveMiniCarouselButtonWorkflow _setupSubscriptions] */

void FUN_100b75798(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  lVar2 = param_1 + 0x30;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4c18c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  lVar2 = param_1 + 0x18;
  func_0x000107c61148();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c4b0b0();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  if ((int)lVar5 == 0) {
    lVar2 = param_1 + 0x50;
    func_0x000107c61148();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    lVar2 = param_1 + 0x50;
    func_0x000107c61148();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar6 = lVar3;
    func_0x000107c5aeb0();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    lVar2 = param_1 + 0x28;
    func_0x000107c61148();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar7 = lVar3;
    func_0x000107c3d14c();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c421ac();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc0000000;
    pcStack_98 = FUN_100b75bfc;
    puStack_90 = &UNK_1108574c8;
    uStack_87 = (undefined1)lVar6;
    ppuVar9 = &puStack_a8;
    uStack_88 = (char)lVar5;
    func_0x000107c61184(ppuVar9);
    param_1 = param_1 + 0x58;
    func_0x000107c61148(param_1);
    lVar2 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4af90();
    func_0x000107c61180();
    lVar6 = lVar3;
    func_0x000107c5bc40();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(param_1);
    puStack_d0 = puVar1;
    uStack_c8 = 0xc0000000;
    pcStack_c0 = FUN_100b75c98;
    puStack_b8 = &UNK_1108574e8;
    ppuVar10 = &puStack_d0;
    uStack_b0 = (char)lVar5;
    func_0x000107c61184(ppuVar10);
    lVar2 = lVar8;
    func_0x000107c4c280(lVar8);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c3fe00();
    func_0x000107c61180();
    lVar5 = lVar3;
    func_0x000107c4da8c();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_d8,auStack_80);
    lVar7 = lVar5;
    func_0x000107c5c320(lVar5);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61120(auStack_d8);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(lVar8);
  }
  else {
    func_0x000107c3b96c(param_1);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 100b75b28; end: 100b75b67; -[SCCameraMiniCarouselConfigurationImpl lensExplorerButtonAlwaysVisible] */

undefined8 FUN_100b75b28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3f69c();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100b75b68; end: 100b75b73; -[SCCameraSwitcherConfigurationImpl showMiniCarouselActionBarInSwitcherBar] */

void FUN_100b75b68(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c071810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isEnabled_1125fa010);
  return;
}



/* Entry: 100b75b74; end: 100b75b8f;  */

void FUN_100b75b74(void)

{
  func_0x000107c61160(PTR_PTR_1126c8988);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b75b90; end: 100b75bf3; -[SCLensCollectionsTabBarObserver init] */

undefined1 * FUN_100b75b90(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f02a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b75bf4; end: 100b75bfb; -[SCLensCollectionsTabBarObserver lensCollectionTabBarVisibleObservable] */

void FUN_100b75bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 100b75bfc; end: 100b75c97;  */

void FUN_100b75bfc(long param_1,long param_2)

{
  undefined *puVar1;
  
  func_0x000107c4dfe8();
  func_0x000107c61180();
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x20) == '\x01') {
      func_0x000107c49f7c();
    }
    else {
      func_0x000107c4a144();
    }
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b75c98; end: 100b75d63;  */

void FUN_100b75c98(long param_1,undefined *param_2,int param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_2);
  func_0x000107c3ebcc();
  puVar1 = param_2;
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x20) & 1) != 0)) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  func_0x000107c61174(puVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b75d64; end: 100b75d9f; -[SCLensExplorerAboveMiniCarouselButtonWorkflow _hideButton:] */

void FUN_100b75d64(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c44e04();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b75da0; end: 100b75e87; -[SCLensExplorerAboveMiniCarouselButtonImpl hideButton:] */

void FUN_100b75da0(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  undefined1 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  ulong uStack_30;
  undefined1 uStack_28;
  
  if ((param_3 == 0) || (uVar1 = param_1, func_0x000107c49eac(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x000107c49eac();
    if ((int)uVar1 != 0) {
      func_0x000107c526c0(0,param_1);
      func_0x000107c550d8(param_1,param_2,0);
    }
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_100b75e88;
    puStack_38 = &UNK_110845ce0;
    uStack_58 = (undefined1)param_3;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    puStack_70 = &UNK_104eb13e4;
    puStack_68 = &UNK_110857498;
    uStack_60 = param_1;
    uStack_30 = param_1;
    uStack_28 = uStack_58;
    func_0x000107c3dcd8(0x3fd6666660000000,0,0x3feb333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20
                        ,param_2,0x30004,&puStack_50,&puStack_80);
  }
  return;
}



/* Entry: 100b75e88; end: 100b75e9b;  */

void FUN_100b75e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)(*(byte *)(param_1 + 0x28) ^ 1),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 100b75e9c; end: 100b75eaf; -[SCLensExplorerAboveMiniCarouselButtonImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b75e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112715be8,param_3);
  return;
}



/* Entry: 100b75eb0; end: 100b75f53; -[SCGalleryDataObjectLogger initWithUserTrackedLogger:grapheneRegistry:] */

undefined1 *
FUN_100b75eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126fe780;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b75f54; end: 100b76063; -[SCDataObjectContext initWithContextName:userId:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:] */

undefined *
FUN_100b75f54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0498;
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c46130();
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 100b76064; end: 100b7617b; -[SCCoreDataObjectContext initWithContextName:userId:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:] */

undefined8
FUN_100b76064(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b24d8;
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  func_0x000107c41fec(puVar1,param_2,param_3,param_4);
  func_0x000107c61180();
  func_0x000107c4612c(param_1,param_2,param_3,puVar1,param_5,param_6,param_7,param_8,param_9);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100b7617c; end: 100b7619f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7617c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112715bd8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b761a0; end: 100b76213; -[SCSCLensDataConfigServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b761a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113027ba8,0);
  func_0x000107c61614(param_1 + _DAT_113027bb0,0);
  *(undefined8 *)(param_1 + _DAT_113027bb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b76214; end: 100b762bf; -[SCSCLensDataConfigServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b76214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b762c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b762c0; end: 100b76457;  */

void FUN_100b762c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCSCLensDataConfigServicesSaberServiceProvider.swift"
                            ,0x54,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b76458);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b76458; end: 100b76463; -[SCSCLensDataConfigServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b76458(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113027ba8;
  func_0x000107c61428(param_1 + _DAT_113027ba8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b76464; end: 100b764b7;  */

void FUN_100b76464(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b764b8; end: 100b764c3; -[SCSCLensDataConfigServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b764b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113027bb0;
  func_0x000107c61428(param_1 + _DAT_113027bb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b764c4; end: 100b764f7; -[SCSCLensDataConfigServicesSaberServiceProvider __safeProvide] */

void FUN_100b764c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b764f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b764f8; end: 100b765df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b764f8(void)

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
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b7663c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113026678);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113027bb8);
      *(long *)(unaff_x20 + _DAT_113027bb8) = lVar3;
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



/* Entry: 100b765e0; end: 100b765eb; -[SCSCLensDataConfigServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b765e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113027ba8;
  func_0x000107c61428(param_1 + _DAT_113027ba8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b765ec; end: 100b7662f;  */

void FUN_100b765ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b76630; end: 100b7663b; -[SCSCLensDataConfigServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b76630(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113027bb0;
  func_0x000107c61428(param_1 + _DAT_113027bb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7663c; end: 100b766b7;  */

void FUN_100b7663c(undefined8 param_1)

{
  if (lRam0000000113023ba0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cf23c);
  return;
}



/* Entry: 100b766b8; end: 100b7671f; -[SCScopeLifecycle enabledOptionalScopeContainerWithLifecycleProvider:] */

void FUN_100b766b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df8a8;
  func_0x000107c51960();
  func_0x000107c61180();
  func_0x000107c426e8(puVar1,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b76720; end: 100b7677b; +[SCOptionalScopeContainer enabledContainerWithScopeExposer:] */

void FUN_100b76720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c484e0();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100b7677c; end: 100b76813; -[SCOptionalScopeContainer initWithScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100b7677c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_112705780;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278caa8;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b76814; end: 100b7695f; -[SCLensInMainCameraStartupCompletedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b76814(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127827bc;
    func_0x000107c61148();
  }
  lVar1 = lVar5;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c51f40();
  func_0x000107c61180();
  lVar6 = (long)_DAT_11278278c;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(long *)(param_1 + lVar6) = lVar3;
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar5);
  func_0x000107c61144(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  func_0x000107c6111c(auStack_50,auStack_48);
  func_0x000107c4e524(uVar4);
  func_0x000107c3aee4(param_1);
  func_0x000107c3c028(param_1);
  func_0x000107c61120(auStack_50);
  func_0x000107c61120(auStack_48);
  return;
}



/* Entry: 100b76960; end: 100b76b03; -[SCLensInMainCameraStartupCompletedEntryPoint _beginStartupWorkflow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b76960(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127827b4;
    func_0x000107c61148();
  }
  lVar1 = lVar7;
  func_0x000107c3f290();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c403cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_100b76ff4;
  puStack_60 = &UNK_110868d10;
  puVar4 = PTR_PTR_1126ae720;
  lStack_58 = lVar3;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_78);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126dd9e8;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127827b8;
    func_0x000107c61148(lVar7);
  }
  lVar1 = lVar7;
  func_0x000107c4ae98(lVar7);
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4ac14();
  func_0x000107c61180();
  func_0x000107c47da0(puVar5,param_2,puVar4,lVar3,lVar2);
  lVar8 = (long)_DAT_112782790;
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined **)(param_1 + lVar8) = puVar5;
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar7);
  func_0x000107c3e740(*(undefined8 *)(param_1 + lVar8));
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100b76b04; end: 100b76bc7; -[SCLensCarouselStartupWorkflow initWithParentView:featureContainerView:lensCarouselLayoutProvider:] */

undefined1 *
FUN_100b76b04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112700d10;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_4);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b76bc8; end: 100b76c3f; -[SCLensCarouselStartupWorkflow begin] */

/* WARNING: Possible PIC construction at 0x000100b76c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b76c24) */

void FUN_100b76bc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c4abc0();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c3c6a8(param_1,param_2,uVar1);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(long *)(param_1 + 0x20) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b76c40; end: 100b76ff3; -[SCLensCarouselStartupWorkflow _setupPlaceholderViewWithLayout:] */

void FUN_100b76c40(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  double dVar19;
  double dVar20;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_6);
  uVar1 = *(undefined8 *)(param_4 + 8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160();
  lVar3 = param_6;
  func_0x000107c4e0a4();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar4 = param_6;
    func_0x000107c4b5b0();
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4a798();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
  }
  else {
    lVar5 = lVar3;
    func_0x000107c4a798();
    func_0x000107c61180();
  }
  func_0x000107c61170(lVar3);
  func_0x000107c4989c(param_6);
  dVar19 = param_1;
  func_0x000107c4a774(param_6);
  dVar19 = dVar19 * 0.5;
  param_1 = param_1 + dVar19;
  func_0x000107c4a774(param_6);
  dVar20 = dVar19;
  func_0x000107c51ce0(lVar5);
  dVar20 = dVar20 + -1.0;
  dVar19 = dVar20 * dVar19;
  func_0x000107c51a80(param_6);
  func_0x000107c51a80(param_6);
  lVar4 = param_4;
  func_0x000107c3bd1c();
  func_0x000107c61180();
  func_0x000107c3d89c(uVar1);
  func_0x000107c5a050(lVar4);
  lVar6 = lVar4;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar3 = param_4 + 0x10;
  func_0x000107c61148();
  lVar7 = lVar3;
  func_0x000107c3f250();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar9 = lVar6;
  func_0x000107c40284(param_1 + dVar19);
  func_0x000107c61180();
  lVar10 = lVar4;
  func_0x000107c50890();
  func_0x000107c61180();
  uVar11 = uVar1;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar12 = lVar10;
  func_0x000107c40294();
  func_0x000107c61180();
  lVar13 = lVar4;
  func_0x000107c3f764();
  func_0x000107c61180();
  param_4 = param_4 + 0x10;
  func_0x000107c61148(param_4);
  lVar14 = param_4;
  func_0x000107c3f250();
  func_0x000107c61180();
  lVar15 = lVar14;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar16 = lVar13;
  func_0x000107c40284((param_3 - dVar20) * 0.5);
  func_0x000107c61180();
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar2);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(param_4);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar6);
  func_0x000107c3d048(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  func_0x000107c60e78();
                    /* WARNING: Could not recover jumptable at 0x00010bfe12f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_6 + 0x20),PTR_s_hidableViewContainer_1125d5e78);
  return;
}



/* Entry: 100b76ff4; end: 100b76ffb;  */

void FUN_100b76ff4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe12f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_hidableViewContainer_1125d5e78);
  return;
}



/* Entry: 100b76ffc; end: 100b7700b; -[SCLensCarouselLayout originalLensLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b76ffc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130390b0));
  return;
}



/* Entry: 100b7700c; end: 100b7701b; -[SCLensCarouselSectionLayout itemLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7700c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113039158));
  return;
}



/* Entry: 100b7701c; end: 100b7702b; -[SCLensCarouselLayout interitemSpacing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b7701c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113039090);
}



/* Entry: 100b7702c; end: 100b7703b; -[SCLensCarouselLayout itemDimension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b7702c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113039088);
}



/* Entry: 100b7703c; end: 100b7704b; -[SCLensCarouselItemLayout selectionScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b7703c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1130391a0);
}



/* Entry: 100b7704c; end: 100b7709b; -[SCLensCarouselStartupWorkflow _lensesPlaceholderViewWithLayout:] */

void FUN_100b7704c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ddbf8;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c45d38();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b7709c; end: 100b7748f; -[SCLensCarouselPlaceholderView initWithCarouselLayout:itemLayout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100b7709c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,undefined8 param_5
             ,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long unaff_x22;
  double dVar20;
  double dVar21;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_b0 = PTR_PTR_112700d08;
  puVar17 = &uStack_b8;
  uStack_b8 = param_4;
  func_0x000107c61154(puVar17,PTR_s_init_1125d9248);
  if (puVar17 != (undefined8 *)0x0) {
    lVar18 = (long)_DAT_112782fe4;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar18);
    *(long *)((long)puVar17 + lVar18) = param_6;
    func_0x000107c61170(uVar2);
    lVar18 = param_7;
    if (param_7 == 0) {
      unaff_x22 = param_6;
      func_0x000107c4b5b0();
      func_0x000107c61180();
      lVar18 = unaff_x22;
      func_0x000107c4a798();
      func_0x000107c61180();
    }
    lVar19 = (long)_DAT_112782fe8;
    func_0x000107c61174(lVar18);
    uVar2 = *(undefined8 *)((long)puVar17 + lVar19);
    *(long *)((long)puVar17 + lVar19) = lVar18;
    func_0x000107c61170(uVar2);
    if (param_7 == 0) {
      func_0x000107c61170(lVar18);
      func_0x000107c61170(unaff_x22);
    }
    puVar3 = puVar17;
    func_0x000107c3b36c();
    func_0x000107c61180();
    lVar18 = (long)_DAT_112782fec;
    uVar2 = *(undefined8 *)((long)puVar17 + lVar18);
    *(undefined8 **)((long)puVar17 + lVar18) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c3d89c(puVar17);
    func_0x000107c5a378(puVar17);
    func_0x000107c3fd74(param_6);
    dVar21 = param_1;
    func_0x000107c4a774(param_6);
    param_1 = param_1 - dVar21;
    dVar21 = param_1 * 0.5;
    func_0x000107c51a80(param_6);
    func_0x000107c51a80(param_6);
    param_1 = param_1 + param_3;
    dVar20 = param_1 + dVar21 * 2.0;
    func_0x000107c5a050(*(undefined8 *)((long)puVar17 + lVar18));
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    uVar4 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar3 = puVar17;
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_a8 = uVar2;
    uVar5 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x000107c50890();
    func_0x000107c61180();
    puVar6 = puVar17;
    func_0x000107c50890();
    func_0x000107c61180();
    uVar7 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    uStack_a0 = uVar7;
    uVar8 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar9 = puVar17;
    func_0x000107c5cbe4(puVar17);
    func_0x000107c61180();
    func_0x000107c51a80(param_6);
    uVar10 = uVar8;
    func_0x000107c40284(dVar21 + param_1);
    func_0x000107c61180();
    uStack_98 = uVar10;
    uVar11 = *(undefined8 *)((long)puVar17 + lVar18);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar12 = puVar17;
    func_0x000107c3ec1c(puVar17);
    func_0x000107c61180();
    func_0x000107c51a80(param_6);
    dVar21 = -param_3 - dVar21;
    uVar13 = uVar11;
    func_0x000107c40284(dVar21);
    func_0x000107c61180();
    puVar14 = puVar17;
    uStack_90 = uVar13;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c4a774(param_6);
    puVar15 = puVar14;
    func_0x000107c40290(dVar20 + dVar21);
    func_0x000107c61180();
    puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_88 = puVar15;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61180();
    func_0x000107c3d048(puVar1);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar17;
  }
  func_0x000107c60e78();
  puVar17 = *(undefined8 **)(param_6 + _DAT_1130390a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(puVar17);
  return puVar17;
}



/* Entry: 100b77490; end: 100b7749f; -[SCLensCarouselLayout lensesLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b77490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130390a8));
  return;
}



/* Entry: 100b774a0; end: 100b77507; -[SCLensCarouselPlaceholderView _createStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b774a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610fc(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c52b2c();
  func_0x000107c52610(puVar1,param_2,3);
  func_0x000107c54280(puVar1,param_2,3);
  func_0x000107c4989c(*(undefined8 *)(param_1 + _DAT_112782fe4));
  func_0x000107c59594(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b77508; end: 100b77517; -[SCLensCarouselLayout collectionHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100b77508(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113039098);
}



/* Entry: 100b77518; end: 100b77543;  */

void FUN_100b77518(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c3ce20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b77544; end: 100b77787; -[SCLensInMainCameraStartupCompletedEntryPoint _warmupLensDataStores] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b77544(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar6 = param_1;
    func_0x000107c4b064();
    func_0x000107c61180();
    lVar4 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5e0e8();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(0);
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127827ac;
    func_0x000107c61148(lVar6);
    lVar4 = lVar6;
    func_0x000107c4b064();
    func_0x000107c61180();
    lVar1 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5e0e8();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar6);
    lVar6 = param_1 + _DAT_1127827b0;
    func_0x000107c61148();
  }
  lVar4 = lVar6;
  func_0x000107c4af44();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = lVar6;
  func_0x000107c3e6ec();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4c280();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127827c0;
    func_0x000107c61148();
  }
  lVar1 = lVar6;
  func_0x000107c5190c();
  func_0x000107c61180();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_100b78524;
  puStack_50 = &UNK_110adf4a8;
  lStack_48 = lVar2;
  func_0x000107c61174(lVar2);
  lVar3 = lVar1;
  func_0x000107c436a8(lVar1,param_2,&puStack_68);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar6);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112782798);
  *(long *)(param_1 + _DAT_112782798) = lVar3;
  func_0x000107c61174(lVar3);
  func_0x000107c61170(uVar5);
  lVar6 = lVar3;
  func_0x000107c5c734(lVar3);
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c5bc1c(lVar6,param_2,0);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 100b77788; end: 100b777b3; -[SCCameraViewControllerLensDelegateHandler warmupLensDataStore] */

void FUN_100b77788(long param_1)

{
  param_1 = param_1 + 0xb8;
  func_0x000107c61148(param_1);
  func_0x000107c5e0e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b777b4; end: 100b777fb; -[SCLensDataProviderAdapter warmupLensDataStore] */

void FUN_100b777b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5da60(uVar1);
  func_0x000107c61180();
  func_0x000107c4b8f4();
  func_0x000107c611b0();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c2a1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_warmUp_112686130);
  return;
}



/* Entry: 100b777fc; end: 100b778a3; -[SCUserSession locationServicesDataStore] */

void FUN_100b777fc(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c60b18(param_2);
  func_0x000107c61180();
  func_0x000107c4d9d4(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100b778a4; end: 100b77a87; -[SCLocationServicesDataStore init] */

undefined1 * FUN_100b778a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112701188;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar2;
    func_0x000107c61170();
    FUN_1004fa310();
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126d3ec0);
    uVar4 = uVar5;
    func_0x000107c3ced4();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61170();
    FUN_1004fa310();
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126bc3b0);
    uVar4 = uVar5;
    func_0x000107c3ced8();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    func_0x000107c61170(uVar6);
    func_0x000107c61170();
    FUN_1004fa310();
    func_0x000107c61180();
    func_0x000107c61158(PTR_PTR_1126bc3b0);
    uVar4 = uVar5;
    func_0x000107c3ced8();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar5 = uVar4;
    func_0x000107c45010();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar5;
    func_0x000107c61170(uVar6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x000107c45010();
    func_0x000107c61180();
    uVar5 = uVar3;
    func_0x000107c3fa04();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c3ebd4();
    *(char *)((long)puVar1 + 0x39) = (char)uVar6;
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b77a88; end: 100b77af7; -[SCAvailableScope access:] */

void FUN_100b77a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2d30;
  func_0x000107c519a8(PTR_PTR_1126e2d30);
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c3cb6c(param_1,param_2,param_3,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 100b77af8; end: 100b77b23; +[SCScopedAccess scopedAccessWithScopeClass:] */

void FUN_100b77af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f4();
  func_0x000107c484f8(param_1,param_2,0,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b77b24; end: 100b77b33;  */

void FUN_100b77b24(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userLocationPermissionsManager_112682570);
  return;
}



/* Entry: 100b77b34; end: 100b77dcb; -[SCLensInMainCameraStartupCompletedEntryPoint _observeStartupComplete] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b77b34(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_1127827cc);
  }
  func_0x000107c49cd8();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126af680;
    func_0x000107c5a9f0();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c49a44();
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = (undefined *)(param_1 + _DAT_11278279c);
      func_0x000107c61148(puVar3);
      puVar4 = puVar3;
      func_0x000107c3dfac();
      func_0x000107c61180();
      puVar5 = puVar4;
      func_0x000107c5bc9c();
      func_0x000107c61180();
      puStack_88 = puVar6;
      uStack_80 = 0xc2000000;
      puStack_78 = &UNK_100c87068;
      puStack_70 = &UNK_110adf648;
      func_0x000107c61174(puVar2);
      puVar6 = puVar5;
      puStack_68 = puVar2;
      func_0x000107c43494(puVar5);
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5c6c0();
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
      FUN_100078e94();
      func_0x000107c61180();
      puVar6 = puVar7;
      func_0x000107c4da88(puVar7);
      func_0x000107c61180();
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puStack_68);
    }
    else {
      puVar6 = PTR_PTR_1126ae6b8;
      func_0x000107c4a8a4(PTR_PTR_1126ae6b8);
      func_0x000107c61180();
    }
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x000107c5a9bc();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3e750();
    func_0x000107c61170(puVar3);
    func_0x000107c61144(auStack_90,param_1);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127827a0);
    *(undefined **)(param_1 + _DAT_1127827a0) = puVar3;
    func_0x000107c61170(uVar8);
    func_0x000107c6111c(auStack_a0,auStack_90);
    puVar3 = puVar6;
    puStack_98 = puVar4;
    func_0x000107c5c320(puVar6);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(puVar3);
    func_0x000107c61120(auStack_a0);
    func_0x000107c61120(auStack_90);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 100b77dcc; end: 100b77de3; -[SCOptionalScopeContainer isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100b77dcc(long param_1)

{
  return *(long *)(param_1 + _DAT_11278caa8) != 0;
}



/* Entry: 100b77de4; end: 100b77e2f; -[SCScopedAccess .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100b77e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b77e20) */

void FUN_100b77de4(long param_1)

{
  func_0x000107c6119c(param_1 + 0x38,0);
  func_0x000107c6119c(param_1 + 0x30,0);
  func_0x000107c6119c(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 100b77e30; end: 100b77e93; -[SCLocationServicesDataStore _setUserSessionIfValid:] */

/* WARNING: Possible PIC construction at 0x000100b77e60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b77e64) */
/* WARNING: Removing unreachable block (ram,0x000100b77e6c) */

void FUN_100b77e30(long param_1,undefined8 param_2,long param_3)

{
  func_0x000107c61174(param_3);
  if (param_3 != 0) {
    func_0x000107c61148(param_1 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100b77e94; end: 100b77f1b; -[SCLensDataProviderAdapter warmUp] */

void FUN_100b77e94(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c49bc8();
  if (iVar1 != 0) {
    uVar2 = 0x19;
    func_0x000107c60f2c(0x19,0);
    func_0x000107c61180();
    FUN_10007380c();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100b77f1c; end: 100b78033; -[SCLensUnlockLensCollectionCardScopePresenterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b77f1c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126b1b08;
  func_0x000107c610f4(PTR_PTR_1126b1b08);
  func_0x000107c4740c();
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112715a5c);
  }
  func_0x000107c61174(uVar3);
  func_0x000107c42c20(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  return;
}



/* Entry: 100b78034; end: 100b780cf;  */

/* WARNING: Possible PIC construction at 0x000100b78070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b78074) */

void FUN_100b78034(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c40f6c();
  func_0x000107c61180();
  func_0x000107c5e0cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b780d0; end: 100b78123; -[SCLensUnlockableDataProvider warmUp] */

/* WARNING: Possible PIC construction at 0x000100b780f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b780fc) */

void FUN_100b780d0(undefined8 param_1)

{
  func_0x000107c4b038();
  func_0x000107c61180();
  func_0x000107c5e0cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b78124; end: 100b78133; -[SCLensUnlockableDataProvider lensDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127832d0),PTR_s_target_112678178);
  return;
}



/* Entry: 100b78134; end: 100b782ab;  */

void FUN_100b78134(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  uStack_68 = 0;
  uVar6 = uVar5;
  func_0x000107c4092c();
  func_0x000107c61180();
  uVar4 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_100bc0924;
  puStack_78 = &UNK_110ae07a8;
  uStack_70 = uVar6;
  func_0x000107c61174(uVar6);
  func_0x000107c4db94(uVar5,param_2,&puStack_90);
  puVar7 = PTR_PTR_1126ddd40;
  func_0x000107c610f4(PTR_PTR_1126ddd40);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c5c734(uVar8);
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4724c(puVar7,param_2,uVar5,uVar2,uVar6,uVar1,uVar3,uVar8,uVar9,
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 100b782ac; end: 100b782e3;  */

void FUN_100b782ac(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100b782e4; end: 100b782f7;  */

long FUN_100b782e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = uVar9;
  FUN_100b782f8(uVar9,uVar2,*(undefined8 *)(unaff_x20 + 0x20));
  uVar6 = 0;
  FUN_100737100();
  ppuStack_58 = &PTR_DAT_110426248;
  uVar7 = 0;
  auStack_78[0] = uVar2;
  uStack_60 = uVar6;
  FUN_100737218();
  ppuStack_80 = &PTR_DAT_110426de8;
  lVar8 = 0;
  auStack_a0[0] = uVar3;
  uStack_88 = uVar7;
  FUN_100b788ac();
  func_0x000107c613fc();
  FUN_100b78c9c(auStack_78,lVar8 + 0x18);
  *(undefined8 *)(lVar8 + 0x40) = uVar5;
  FUN_100b78c9c(auStack_a0,lVar8 + 0x48);
  *(undefined8 *)(lVar8 + 0x70) = uVar1;
  *(undefined8 *)(lVar8 + 0x78) = uVar10;
  *(undefined8 *)(lVar8 + 0x80) = uVar4;
  FUN_1000285a8(0x112de6710,&UNK_10d9b10a8);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c61434(uVar4);
  FUN_1000bda74();
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  *(undefined8 *)(lVar8 + 0x10) = uVar9;
  return lVar8;
}



/* Entry: 100b782f8; end: 100b78383;  */

void FUN_100b782f8(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1000285a8(0x112de62a0,&UNK_10d9b0dd0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  pcVar1 = FUN_100ba00b0;
  FUN_1000bdd8c(FUN_100ba00b0,uVar3);
  pcVar2 = pcVar1;
  FUN_100b787b0();
  func_0x000107c613fc();
  *(undefined8 *)(pcVar2 + 0x18) = 3;
  *(undefined8 *)(pcVar2 + 0x10) = 1;
  *(code **)(pcVar2 + 0x20) = pcVar1;
  return;
}



/* Entry: 100b78384; end: 100b784af;  */

long FUN_100b78384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 auStack_a0 [3];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  undefined **ppuStack_58;
  
  uVar1 = param_1;
  FUN_100b782f8();
  uVar2 = 0;
  FUN_100737100();
  ppuStack_58 = &PTR_DAT_110426248;
  uVar3 = 0;
  auStack_78[0] = param_2;
  uStack_60 = uVar2;
  FUN_100737218();
  ppuStack_80 = &PTR_DAT_110426de8;
  lVar4 = 0;
  auStack_a0[0] = param_4;
  uStack_88 = uVar3;
  FUN_100b788ac();
  func_0x000107c613fc();
  FUN_100b78c9c(auStack_78,lVar4 + 0x18);
  *(undefined8 *)(lVar4 + 0x40) = uVar1;
  FUN_100b78c9c(auStack_a0,lVar4 + 0x48);
  *(undefined8 *)(lVar4 + 0x70) = param_5;
  *(undefined8 *)(lVar4 + 0x78) = param_7;
  *(undefined8 *)(lVar4 + 0x80) = param_6;
  FUN_1000285a8(0x112de6710,&UNK_10d9b10a8);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c61434(param_6);
  FUN_1000bda74();
  func_0x0001000834e4(auStack_a0);
  func_0x0001000834e4(auStack_78);
  *(undefined8 *)(lVar4 + 0x10) = param_1;
  return lVar4;
}



/* Entry: 100b784b0; end: 100b78523; -[SCLensUnlockLensCollectionCardNavigationServices initWithLensUnlockCardPresenter:] */

undefined1 * FUN_100b784b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e4c30;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b78524; end: 100b7852f;  */

void FUN_100b78524(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15f750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_serviceForLensScheduleNamespaces_1126357f0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100b78530; end: 100b787af; -[SCCoreDataObjectContext initWithContextName:diskFileURL:logger:flipper:crashLogger:circumstanceEngine:backgroundExecutionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100b78530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_112709bf8;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112791754;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112791758;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_11279175c;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112791760;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112791764;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112791768;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11279176c) = 0;
    puVar3 = PTR__OBJC_CLASS___NSManagedObjectContext_1126e04a0;
    func_0x000107c610f4();
    func_0x000107c45f58();
    lVar4 = (long)_DAT_112791770;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c56620(*(undefined8 *)((long)puVar1 + lVar4));
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791774);
    *(undefined **)((long)puVar1 + (long)_DAT_112791774) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c5c214();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791778);
    *(undefined **)((long)puVar1 + (long)_DAT_112791778) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11279177c);
    *(undefined **)((long)puVar1 + (long)_DAT_11279177c) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126e04a8;
    func_0x000107c610f4();
    func_0x000107c461dc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112791780);
    *(undefined **)((long)puVar1 + (long)_DAT_112791780) = puVar3;
    func_0x000107c61170(uVar2);
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



/* Entry: 100b787b0; end: 100b78817;  */

void FUN_100b787b0(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0x112de62a0;
    FUN_1000285a8(0x112de62a0,&UNK_10d9b0dd0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto code_r0x0001000285a8;
    }
  }
  puVar2 = (ulong *)0x112de6d80;
  plVar5 = (long *)&UNK_10d9b19a0;
code_r0x0001000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100b78818; end: 100b788ab; -[SCMainCameraDeepLinkEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78818(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d4d320,0);
  func_0x000107c61614(param_1 + _DAT_112d4d328,0);
  func_0x000107c61614(param_1 + _DAT_112d4d330,0);
  *(undefined8 *)(param_1 + _DAT_112d4d338) = 0;
  *(undefined8 *)(param_1 + _DAT_112d4d340) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b788ac; end: 100b788cb;  */

void FUN_100b788ac(void)

{
  func_0x000107c61168(&PTR_PTR_112de61b0);
  return;
}



/* Entry: 100b788cc; end: 100b78907; -[SCMixerScheduleNamespaceServiceAdapter startUpdatingWithMode:] */

void FUN_100b788cc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5bc1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b78908; end: 100b789b3; -[SCMainCameraDeepLinkEntryPoint setValue:forIvarName:] */

void FUN_100b78908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b789b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b789b4; end: 100b78c2f;  */

void FUN_100b789b4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0x656d61436e69616d;
      if (((param_2 == 0x656d61436e69616d) && (param_3 == -0x109a8f909cac9e8e)) ||
         (func_0x000107c605b8(0x656d61436e69616d,0xef65706f63536172,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c561a0();
      }
      else {
        uVar2 = 0xd00000000000001f;
        if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef10e45e0)) ||
           (func_0x000107c605b8(0xd00000000000001f,0x800000010ef1ba20,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56198();
        }
        else {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe2) || (param_3 != -0x7ffffffef10e45c0)) &&
             (func_0x000107c605b8(0xd00000000000001e,0x800000010ef1ba40,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MainCameraDeepLinkEntryPoint/SCMainCameraDeepLinkEntryPoint.swift",
                                0x41,2,0x31,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100b78c30);
            (*pcVar1)();
          }
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56194();
        }
      }
      goto LAB_100b78a48;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_100b78a48:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b78c30; end: 100b78c3b; -[SCMainCameraDeepLinkEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d320;
  func_0x000107c61428(param_1 + _DAT_112d4d320,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b78c3c; end: 100b78c8f;  */

void FUN_100b78c3c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b78c90; end: 100b78c9b; -[SCMainCameraDeepLinkEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78c90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d328;
  func_0x000107c61428(param_1 + _DAT_112d4d328,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b78c9c; end: 100b78cdf;  */

long FUN_100b78c9c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100b78ce0; end: 100b78d53; -[SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78ce0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef29c0,0);
  func_0x000107c61614(param_1 + _DAT_112ef29c8,0);
  *(undefined8 *)(param_1 + _DAT_112ef29d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b78d54; end: 100b78dff; -[SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b78d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b78e00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b78e00; end: 100b78f97;  */

void FUN_100b78e00(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0fb10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f04f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "MainCameraScopeGraphBridge/SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider.swift"
                            ,0x58,2,0x62,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b78f98);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c561a4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b78f98; end: 100b78fa3; -[SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef29c0;
  func_0x000107c61428(param_1 + _DAT_112ef29c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b78fa4; end: 100b78ff7;  */

void FUN_100b78fa4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b78ff8; end: 100b79003; -[SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider setMainCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b78ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef29c8;
  func_0x000107c61428(param_1 + _DAT_112ef29c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b79004; end: 100b7904f; -[SCMixerNamespaceService startUpdatingWithMode:] */

void FUN_100b79004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8830;
  func_0x000107c610f4(PTR_PTR_1126d8830);
  func_0x000107c49110();
  func_0x000107c5bc20(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100b79050; end: 100b79083; -[SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider __safeProvide] */

void FUN_100b79050(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b79084();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b79084; end: 100b7916b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b79084(void)

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
    func_0x000107c4c148();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b791c8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112ef21b0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef29d0);
      *(long *)(unaff_x20 + _DAT_112ef29d0) = lVar3;
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



/* Entry: 100b7916c; end: 100b79177; -[SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7916c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef29c0;
  func_0x000107c61428(param_1 + _DAT_112ef29c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b79178; end: 100b791bb;  */

void FUN_100b79178(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b791bc; end: 100b791c7; -[SCSCMainCameraDeepLinkScopeServicesSaberServiceProvider mainCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b791bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef29c8;
  func_0x000107c61428(param_1 + _DAT_112ef29c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b791c8; end: 100b79243;  */

void FUN_100b791c8(undefined8 param_1)

{
  if (lRam0000000112ef1008 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e716870);
  return;
}



/* Entry: 100b79244; end: 100b792cb; -[SCMixerUpdateParameters initWithUpdatingMode:contextualInfo:] */

undefined1 *
FUN_100b79244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_11270a408;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100b792cc; end: 100b792d3;  */

void FUN_100b792cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100b792d4; end: 100b79327;  */

void FUN_100b792d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


