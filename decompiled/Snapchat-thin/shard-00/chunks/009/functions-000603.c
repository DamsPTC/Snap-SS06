/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b93934; end: 100b939d3;  */

/* WARNING: Possible PIC construction at 0x000100b939a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b939b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b939a4) */
/* WARNING: Removing unreachable block (ram,0x000100b939b4) */

void FUN_100b93934(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  FUN_100b92a4c();
  func_0x000107c61180();
  func_0x000107c4b2e4();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4fc70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b939d4; end: 100b939db; -[SCLensCTARegisteringServices lensOrganicCTARegistry] */

undefined8 FUN_100b939d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100b939dc; end: 100b939f7;  */

void FUN_100b939dc(void)

{
  func_0x000107c610fc(PTR_PTR_1126c8330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b939f8; end: 100b93a27; -[SCLensOrganicCTAHandlingWrapper registerOrganicCTAHandlers:] */

void FUN_100b939f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b93a28; end: 100b93a87; -[SCSCViewfinderScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b93a28(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8e78,0);
  *(undefined8 *)(param_1 + _DAT_112ef8e80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b93a88; end: 100b93c53; -[SCSCViewfinderScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b93a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100b93b34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b93c54; end: 100b93cab; -[SCSCViewfinderScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b93c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8e78;
  func_0x000107c61428(param_1 + _DAT_112ef8e78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b93cac; end: 100b93cd3; -[SCSCViewfinderScopedServicesSaberEntryPoint begin] */

void FUN_100b93cac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b93cd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b93cd4; end: 100b93dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b93cd4(undefined8 param_1,long param_2)

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
    FUN_100b93df4();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ef85e8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    FUN_100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b93dac);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ef85f0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef8e80);
    *(long **)(unaff_x20 + _DAT_112ef8e80) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 100b93dac; end: 100b93df3; -[SCSCViewfinderScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b93dac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8e78;
  func_0x000107c61428(param_1 + _DAT_112ef8e78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b93df4; end: 100b93e13;  */

void FUN_100b93df4(void)

{
  func_0x000107c61168(&PTR_PTR_11288ed50);
  return;
}



/* Entry: 100b93e14; end: 100b93ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b93e14(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112ef8718,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef8720) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8728) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8730) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8738) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8748) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ef8758) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b93ec8; end: 100b93ee7; -[SCViewfinderScopeGraphBridgeSaberEntryPoint init] */

void FUN_100b93ec8(void)

{
  FUN_100b93e14();
  return;
}



/* Entry: 100b93ee8; end: 100b93f93; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100b93ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b93f94(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b93f94; end: 100b943a7;  */

void FUN_100b93f94(long param_1,long param_2,long param_3)

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
    goto LAB_100b94020;
  }
  if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104eae0)) {
    uVar2 = 0xd000000000000023;
    func_0x000107c605b8(0xd000000000000023,0x800000010efb1520,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef104eab0)) {
        uVar2 = 0xd000000000000023;
        func_0x000107c605b8(0xd000000000000023,0x800000010efb1550,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0f0aac0)) {
            uVar2 = 0xd000000000000023;
            func_0x000107c605b8(0xd000000000000023,0x800000010f0f5540,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd00000000000002f;
              if (((param_2 == -0x2fffffffffffffd1) && (param_3 == -0x7ffffffef0f0aa90)) ||
                 (func_0x000107c605b8(0xd00000000000002f,0x800000010f0f5570,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c584b0();
              }
              else {
                if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f0aa60)) {
                  uVar2 = 0xd00000000000002f;
                  func_0x000107c605b8(0xd00000000000002f,0x800000010f0f55a0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd000000000000025;
                    if (((param_2 == -0x2fffffffffffffdb) && (param_3 == -0x7ffffffef104e870)) ||
                       (func_0x000107c605b8(0xd000000000000025,0x800000010efb1790,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c584d4();
                    }
                    else {
                      uVar2 = 0xd000000000000029;
                      if (((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0f0aa30)) &&
                         (func_0x000107c605b8(0xd000000000000029,0x800000010f0f55d0,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "ViewfinderScopeGraphBridge/SCViewfinderScopeGraphBridgeSaberEntryPoint.swift"
                                            ,0x4c,2,0x54,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b943a8);
                        (*pcVar1)();
                      }
                      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c5a5b4();
                    }
                    goto LAB_100b94020;
                  }
                }
                FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c584c8();
              }
              goto LAB_100b94020;
            }
          }
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c584d0();
          goto LAB_100b94020;
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c584c4();
      goto LAB_100b94020;
    }
  }
  FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c584ac();
LAB_100b94020:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b943a8; end: 100b943ff; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b943a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8718;
  func_0x000107c61428(param_1 + _DAT_112ef8718,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b94400; end: 100b9440b; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setViewfinderScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94400(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8750;
  func_0x000107c61428(param_1 + _DAT_112ef8750,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b9440c; end: 100b9446b;  */

void FUN_100b9440c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 100b9446c; end: 100b94477; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setSCLensProcessingBitmojiScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9446c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8720;
  func_0x000107c61428(param_1 + _DAT_112ef8720,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b94478; end: 100b94483; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setSCLensProcessingPluginsScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8728;
  func_0x000107c61428(param_1 + _DAT_112ef8728,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b94484; end: 100b9448f; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setSCLensProcessingTouchesScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94484(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8730;
  func_0x000107c61428(param_1 + _DAT_112ef8730,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b94490; end: 100b9449b; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setSCLensProcessingExternalImagePluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94490(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8738;
  func_0x000107c61428(param_1 + _DAT_112ef8738,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b9449c; end: 100b944a7; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setSCLensProcessingReverseCameraPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9449c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8740;
  func_0x000107c61428(param_1 + _DAT_112ef8740,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b944a8; end: 100b944b3; -[SCViewfinderScopeGraphBridgeSaberEntryPoint setSCLensProcessingURIPluginScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b944a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8748;
  func_0x000107c61428(param_1 + _DAT_112ef8748,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b944b4; end: 100b944db; -[SCViewfinderScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100b944b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b944dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b944dc; end: 100b94973;  */

/* WARNING: Possible PIC construction at 0x000100b947b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b947c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b947d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b947e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94824: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b948f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b948c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b948d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b948a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b948b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b94898: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b948bc) */
/* WARNING: Removing unreachable block (ram,0x000100b948ac) */
/* WARNING: Removing unreachable block (ram,0x000100b948dc) */
/* WARNING: Removing unreachable block (ram,0x000100b948cc) */
/* WARNING: Removing unreachable block (ram,0x000100b9490c) */
/* WARNING: Removing unreachable block (ram,0x000100b948fc) */
/* WARNING: Removing unreachable block (ram,0x000100b9494c) */
/* WARNING: Removing unreachable block (ram,0x000100b9493c) */
/* WARNING: Removing unreachable block (ram,0x000100b9492c) */
/* WARNING: Removing unreachable block (ram,0x000100b94838) */
/* WARNING: Removing unreachable block (ram,0x000100b94828) */
/* WARNING: Removing unreachable block (ram,0x000100b94818) */
/* WARNING: Removing unreachable block (ram,0x000100b94808) */
/* WARNING: Removing unreachable block (ram,0x000100b947e4) */
/* WARNING: Removing unreachable block (ram,0x000100b947d4) */
/* WARNING: Removing unreachable block (ram,0x000100b947c4) */
/* WARNING: Removing unreachable block (ram,0x000100b947b4) */
/* WARNING: Removing unreachable block (ram,0x000100b9489c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b944dc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50f04();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50f1c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      lVar5 = unaff_x20;
      func_0x000107c50f28();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c50f08();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar5 = unaff_x20;
          func_0x000107c50f20();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar5 = unaff_x20;
            func_0x000107c50f2c();
            func_0x000107c61180();
            if (lVar5 == 0) {
              func_0x000107c61170(lVar3);
              lVar3 = lVar4;
            }
            else {
              func_0x000107c5df7c();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar3);
                lVar3 = lVar4;
              }
              else {
                lVar6 = 0;
                FUN_100b94bb4();
                lVar4 = lVar6;
                func_0x000107c610f8();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174();
                lVar5 = lVar3;
                FUN_100b94bd4();
                if (lVar5 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b94974);
                  (*pcVar2)();
                }
                FUN_100083b20(&uStack_68);
                uVar1 = uStack_68;
                FUN_100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                FUN_100083b20(&uStack_68);
                uVar1 = uStack_68;
                FUN_100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                FUN_100083b20(&uStack_68);
                uVar1 = uStack_68;
                FUN_100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                FUN_100083b20(&uStack_68);
                uVar1 = uStack_68;
                FUN_100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                FUN_100083b20(&uStack_68);
                uVar1 = uStack_68;
                FUN_100087c34(auStack_70);
                func_0x000107c61574(uVar1);
                FUN_100083b20(&uStack_68);
                FUN_100087c34(auStack_70);
                func_0x000107c61574(uStack_68);
                *(long *)(lVar4 + _DAT_112ef7eb0) = lVar5;
                *(long *)(lVar4 + _DAT_112ef7eb8) = unaff_x20;
                lStack_80 = lVar4;
                lStack_78 = lVar6;
                func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100b94974; end: 100b949bb; -[SCViewfinderScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94974(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8718;
  func_0x000107c61428(param_1 + _DAT_112ef8718,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b949bc; end: 100b94a03; -[SCViewfinderScopeGraphBridgeSaberEntryPoint sCLensProcessingBitmojiScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b949bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8720;
  func_0x000107c61428(param_1 + _DAT_112ef8720,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b94a04; end: 100b94a4b; -[SCViewfinderScopeGraphBridgeSaberEntryPoint sCLensProcessingPluginsScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94a04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8728;
  func_0x000107c61428(param_1 + _DAT_112ef8728,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b94a4c; end: 100b94a93; -[SCViewfinderScopeGraphBridgeSaberEntryPoint sCLensProcessingTouchesScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94a4c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8730;
  func_0x000107c61428(param_1 + _DAT_112ef8730,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b94a94; end: 100b94adb; -[SCViewfinderScopeGraphBridgeSaberEntryPoint sCLensProcessingExternalImagePluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94a94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8738;
  func_0x000107c61428(param_1 + _DAT_112ef8738,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b94adc; end: 100b94b23; -[SCViewfinderScopeGraphBridgeSaberEntryPoint sCLensProcessingReverseCameraPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94adc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8740;
  func_0x000107c61428(param_1 + _DAT_112ef8740,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b94b24; end: 100b94b6b; -[SCViewfinderScopeGraphBridgeSaberEntryPoint sCLensProcessingURIPluginScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94b24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8748;
  func_0x000107c61428(param_1 + _DAT_112ef8748,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b94b6c; end: 100b94bb3; -[SCViewfinderScopeGraphBridgeSaberEntryPoint viewfinderScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94b6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8750;
  func_0x000107c61428(param_1 + _DAT_112ef8750,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b94bb4; end: 100b94bd3;  */

void FUN_100b94bb4(void)

{
  func_0x000107c61168(&PTR_PTR_11288e7d8);
  return;
}



/* Entry: 100b94bd4; end: 100b94ca3;  */

undefined8 FUN_100b94bd4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112ef8620,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_10006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_10069ff30();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100b94ca4; end: 100b94d23; -[SCLensProcessingUsageServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94ca4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8788,0);
  func_0x000107c61614(param_1 + _DAT_112ef8790,0);
  *(undefined8 *)(param_1 + _DAT_112ef8798) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef87a0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b94d24; end: 100b94dcf; -[SCLensProcessingUsageServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b94d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b94dd0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b94dd0; end: 100b94fd3;  */

void FUN_100b94dd0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0c030)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000022,0x800000010f0f3fd0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "ViewfinderScopeGraphBridge/SCLensProcessingUsageServicesSaberEntryPoint.swift"
                                ,0x4d,2,0x40,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100b94fd4);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55e38();
        goto LAB_100b94e5c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
LAB_100b94e5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b94fd4; end: 100b94fdf; -[SCLensProcessingUsageServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b94fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8788;
  func_0x000107c61428(param_1 + _DAT_112ef8788,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b94fe0; end: 100b95033;  */

void FUN_100b94fe0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b95034; end: 100b9503f; -[SCLensProcessingUsageServicesSaberEntryPoint setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95034(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8790;
  func_0x000107c61428(param_1 + _DAT_112ef8790,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b95040; end: 100b950a3; -[SCLensProcessingUsageServicesSaberEntryPoint setLensProcessingUsageServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95040(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8798;
  func_0x000107c61428(param_1 + _DAT_112ef8798,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b950a4; end: 100b950cb; -[SCLensProcessingUsageServicesSaberEntryPoint begin] */

void FUN_100b950a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b950cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b950cc; end: 100b9524f;  */

/* WARNING: Possible PIC construction at 0x000100b951cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b951dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b951f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b951d0) */
/* WARNING: Removing unreachable block (ram,0x000100b951e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b950cc(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4b390();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b952f4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef8630);
        *(undefined8 *)(lVar2 + _DAT_112ef7ee8) = uVar6;
        *(long *)(lVar2 + _DAT_112ef7ef0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef7ef0);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b95250; end: 100b9525b; -[SCLensProcessingUsageServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95250(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8788;
  func_0x000107c61428(param_1 + _DAT_112ef8788,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9525c; end: 100b9529f;  */

void FUN_100b9525c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b952a0; end: 100b952ab; -[SCLensProcessingUsageServicesSaberEntryPoint viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b952a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8790;
  func_0x000107c61428(param_1 + _DAT_112ef8790,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b952ac; end: 100b952f3; -[SCLensProcessingUsageServicesSaberEntryPoint lensProcessingUsageServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b952ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8798;
  func_0x000107c61428(param_1 + _DAT_112ef8798,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b952f4; end: 100b95313;  */

void FUN_100b952f4(void)

{
  func_0x000107c61168(&PTR_PTR_11288e8a0);
  return;
}



/* Entry: 100b95314; end: 100b9531b;  */

void FUN_100b95314(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b9531c; end: 100b9536f;  */

void FUN_100b9531c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xc0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b95370; end: 100b953ef; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95370(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef87d0,0);
  func_0x000107c61614(param_1 + _DAT_112ef87d8,0);
  *(undefined8 *)(param_1 + _DAT_112ef87e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112ef87e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b953f0; end: 100b9549b; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b953f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b9549c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b9549c; end: 100b9569f;  */

void FUN_100b9549c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0f0a930)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f0f56d0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ViewfinderScopeGraphBridge/SCSCCameraCaptureLensProvidingServicesSaberEntryPoint.swift"
                              ,0x56,2,0x40,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b956a0);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c580c8();
        goto LAB_100b95528;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
LAB_100b95528:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b956a0; end: 100b956ab; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b956a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef87d0;
  func_0x000107c61428(param_1 + _DAT_112ef87d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b956ac; end: 100b956ff;  */

void FUN_100b956ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b95700; end: 100b9570b; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95700(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef87d8;
  func_0x000107c61428(param_1 + _DAT_112ef87d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b9570c; end: 100b9576f; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint setSCCameraCaptureLensProvidingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9570c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef87e0;
  func_0x000107c61428(param_1 + _DAT_112ef87e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b95770; end: 100b95797; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint begin] */

void FUN_100b95770(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b95798();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b95798; end: 100b9591b;  */

/* WARNING: Possible PIC construction at 0x000100b95898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b958a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b958c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b9589c) */
/* WARNING: Removing unreachable block (ram,0x000100b958ac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95798(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50b20();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b959c0();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112ef8648);
        *(undefined8 *)(lVar2 + _DAT_112ef7f20) = uVar6;
        *(long *)(lVar2 + _DAT_112ef7f28) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112ef7f28);
        FUN_100083b20(&lStack_78);
        func_0x000107c42c20(uVar6);
        lVar2 = lStack_78;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 100b9591c; end: 100b95927; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9591c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef87d0;
  func_0x000107c61428(param_1 + _DAT_112ef87d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b95928; end: 100b9596b;  */

void FUN_100b95928(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9596c; end: 100b95977; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9596c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef87d8;
  func_0x000107c61428(param_1 + _DAT_112ef87d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b95978; end: 100b959bf; -[SCSCCameraCaptureLensProvidingServicesSaberEntryPoint sCCameraCaptureLensProvidingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95978(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef87e0;
  func_0x000107c61428(param_1 + _DAT_112ef87e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b959c0; end: 100b959df;  */

void FUN_100b959c0(void)

{
  func_0x000107c61168(&PTR_PTR_11288e968);
  return;
}



/* Entry: 100b959e0; end: 100b95a7b; -[SCLensStoryLensProcessingEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b959e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d78cf8,0);
  func_0x000107c61614(param_1 + _DAT_112d78d00,0);
  func_0x000107c61614(param_1 + _DAT_112d78d08,0);
  func_0x000107c61614(param_1 + _DAT_112d78d10,0);
  *(undefined8 *)(param_1 + _DAT_112d78d18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b95a7c; end: 100b95b27; -[SCLensStoryLensProcessingEntryPoint setValue:forIvarName:] */

void FUN_100b95a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b95b28(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b95b28; end: 100b95d8f;  */

void FUN_100b95b28(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10ef650) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
  else {
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10c5740)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef3a8c0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000017;
        if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10c5720)) ||
           (func_0x000107c605b8(0xd000000000000017,0x800000010ef3a8e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55dd0();
        }
        else {
          uVar2 = 0xd00000000000001b;
          if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10c5700)) &&
             (func_0x000107c605b8(0xd00000000000001b,0x800000010ef3a900,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "LensStoryLensProcessing/SCLensStoryLensProcessingEntryPoint.swift",
                                0x41,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100b95d90);
            (*pcVar1)();
          }
          FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55e84();
        }
        goto LAB_100b95bb8;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a3a4();
  }
LAB_100b95bb8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b95d90; end: 100b95d9b; -[SCLensStoryLensProcessingEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95d90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78cf8;
  func_0x000107c61428(param_1 + _DAT_112d78cf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b95d9c; end: 100b95def;  */

void FUN_100b95d9c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b95df0; end: 100b95dfb; -[SCLensStoryLensProcessingEntryPoint setUserNavigationScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95df0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78d00;
  func_0x000107c61428(param_1 + _DAT_112d78d00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b95dfc; end: 100b95e6f; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b95dfc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ef8c38,0);
  func_0x000107c61614(param_1 + _DAT_112ef8c40,0);
  *(undefined8 *)(param_1 + _DAT_112ef8c48) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b95e70; end: 100b95f1b; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b95e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b95f1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b95f1c; end: 100b960b3;  */

void FUN_100b95f1c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0f0a9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f0f5650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ViewfinderScopeGraphBridge/SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x42,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b960b4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a5b0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b960b4; end: 100b960bf; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b960b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8c38;
  func_0x000107c61428(param_1 + _DAT_112ef8c38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b960c0; end: 100b96113;  */

void FUN_100b960c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b96114; end: 100b9611f; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider setViewfinderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ef8c40;
  func_0x000107c61428(param_1 + _DAT_112ef8c40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b96120; end: 100b96153; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider __safeProvide] */

void FUN_100b96120(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b96154();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b96154; end: 100b9623b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96154(void)

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
    func_0x000107c5df78();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b96298();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112ef8670);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ef8c48);
      *(long *)(unaff_x20 + _DAT_112ef8c48) = lVar3;
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



/* Entry: 100b9623c; end: 100b96247; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9623c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8c38;
  func_0x000107c61428(param_1 + _DAT_112ef8c38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b96248; end: 100b9628b;  */

void FUN_100b96248(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b9628c; end: 100b96297; -[SCSCLensProcessingLensModeFactoryServicesSaberServiceProvider viewfinderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b9628c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ef8c40;
  func_0x000107c61428(param_1 + _DAT_112ef8c40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b96298; end: 100b96313;  */

void FUN_100b96298(undefined8 param_1)

{
  if (lRam0000000112ef83a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e71abd0);
  return;
}



/* Entry: 100b96314; end: 100b9631f; -[SCLensStoryLensProcessingEntryPoint setLensModeFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96314(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d78d08;
  func_0x000107c61428(param_1 + _DAT_112d78d08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b96320; end: 100b96393; -[SCSCLensStoryLensProcessingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96320(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f96fb8,0);
  func_0x000107c61614(param_1 + _DAT_112f96fc0,0);
  *(undefined8 *)(param_1 + _DAT_112f96fc8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b96394; end: 100b9643f; -[SCSCLensStoryLensProcessingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b96394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b96440(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b96440; end: 100b965d7;  */

void FUN_100b96440(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e96730)) {
      uVar2 = 0xd00000000000002b;
      func_0x000107c605b8(0xd00000000000002b,0x800000010f1698d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameoUserNavigationScopeGraphBridge/SCSCLensStoryLensProcessingServicesSaberServiceProvider.swift"
                            ,0x61,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b965d8);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52f90();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b965d8; end: 100b965e3; -[SCSCLensStoryLensProcessingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b965d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f96fb8;
  func_0x000107c61428(param_1 + _DAT_112f96fb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b965e4; end: 100b96637;  */

void FUN_100b965e4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b96638; end: 100b96643; -[SCSCLensStoryLensProcessingServicesSaberServiceProvider setCameoUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96638(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f96fc0;
  func_0x000107c61428(param_1 + _DAT_112f96fc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b96644; end: 100b96677; -[SCSCLensStoryLensProcessingServicesSaberServiceProvider __safeProvide] */

void FUN_100b96644(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b96678();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b96678; end: 100b9675f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96678(void)

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
    func_0x000107c3f028();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b967bc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112f96ce0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f96fc8);
      *(long *)(unaff_x20 + _DAT_112f96fc8) = lVar3;
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



/* Entry: 100b96760; end: 100b9676b; -[SCSCLensStoryLensProcessingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b96760(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f96fb8;
  func_0x000107c61428(param_1 + _DAT_112f96fb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b9676c; end: 100b967af;  */

void FUN_100b9676c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b967b0; end: 100b967bb; -[SCSCLensStoryLensProcessingServicesSaberServiceProvider cameoUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b967b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f96fc0;
  func_0x000107c61428(param_1 + _DAT_112f96fc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b967bc; end: 100b96837;  */

void FUN_100b967bc(undefined8 param_1)

{
  if (lRam0000000112f96c10 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77ea50);
  return;
}



/* Entry: 100b96838; end: 100b9683f;  */

void FUN_100b96838(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b96840; end: 100b96893;  */

void FUN_100b96840(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b96894; end: 100b9689f;  */

void FUN_100b96894(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_58,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_60);
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_10033dc60();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x20) = uStack_60;
  *(undefined8 *)(lVar1 + 0x28) = uStack_68;
  FUN_1000285a8(0x112dbeec0,&UNK_10db88e60);
  func_0x000107c610f8();
  uVar2 = uStack_60;
  func_0x000107c61174(uStack_60);
  uVar3 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar4 = uStack_70;
  func_0x000107c6157c(uStack_70);
  FUN_10017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(lVar1 + 0x18) = puVar5;
  FUN_100b96a48(0);
  func_0x000107c613fc();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar4 = uStack_58;
  func_0x000107c61174();
  uVar6 = uVar4;
  FUN_100b96ac8();
  *(undefined8 *)(lVar1 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_100b96b04();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_70);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}


