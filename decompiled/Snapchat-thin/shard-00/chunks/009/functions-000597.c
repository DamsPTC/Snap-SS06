/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b7cfcc; end: 100b7cfe3;  */

void FUN_100b7cfcc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7cfe4; end: 100b7d057; -[SCLensInfoCardActionHandlingServices initWithLensInfoCardActionHandlerProvider:] */

undefined1 * FUN_100b7cfe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f5590;
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



/* Entry: 100b7d058; end: 100b7d05b;  */

void FUN_100b7d058(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7d05c; end: 100b7d087;  */

void FUN_100b7d05c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7d088; end: 100b7d0fb; -[SCSCCameraLensesViewControllerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d088(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee02a8,0);
  func_0x000107c61614(param_1 + _DAT_112ee02b0,0);
  *(undefined8 *)(param_1 + _DAT_112ee02b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b7d0fc; end: 100b7d1a7; -[SCSCCameraLensesViewControllerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b7d0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b7d1a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b7d1a8; end: 100b7d33f;  */

void FUN_100b7d1a8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0f1ea20)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000020,0x800000010f0e15e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraUIScopeGraphBridge/SCSCCameraLensesViewControllerServicesSaberServiceProvider.swift"
                            ,0x59,2,0x100,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7d340);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c530f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b7d340; end: 100b7d34b; -[SCSCCameraLensesViewControllerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d340(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee02a8;
  func_0x000107c61428(param_1 + _DAT_112ee02a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7d34c; end: 100b7d39f;  */

void FUN_100b7d34c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7d3a0; end: 100b7d3ab; -[SCSCCameraLensesViewControllerServicesSaberServiceProvider setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d3a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee02b0;
  func_0x000107c61428(param_1 + _DAT_112ee02b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7d3ac; end: 100b7d3df; -[SCSCCameraLensesViewControllerServicesSaberServiceProvider __safeProvide] */

void FUN_100b7d3ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b7d3e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b7d3e0; end: 100b7d4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d3e0(void)

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
    func_0x000107c3f288();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b7d524();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112edece8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee02b8);
      *(long *)(unaff_x20 + _DAT_112ee02b8) = lVar3;
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



/* Entry: 100b7d4c8; end: 100b7d4d3; -[SCSCCameraLensesViewControllerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d4c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee02a8;
  func_0x000107c61428(param_1 + _DAT_112ee02a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7d4d4; end: 100b7d517;  */

void FUN_100b7d4d4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b7d518; end: 100b7d523; -[SCSCCameraLensesViewControllerServicesSaberServiceProvider cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d518(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee02b0;
  func_0x000107c61428(param_1 + _DAT_112ee02b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7d524; end: 100b7d59f;  */

void FUN_100b7d524(undefined8 param_1)

{
  if (lRam0000000112edcaa0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70a668);
  return;
}



/* Entry: 100b7d5a0; end: 100b7d613; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d5a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eea608,0);
  func_0x000107c61614(param_1 + _DAT_112eea610,0);
  *(undefined8 *)(param_1 + _DAT_112eea618) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b7d614; end: 100b7d6bf; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b7d614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b7d6c0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b7d6c0; end: 100b7d857;  */

void FUN_100b7d6c0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0f185a0)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f0e7a60,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraFeatureScopeGraphBridge/SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider.swift"
                            ,0x5e,2,0x7c,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7d858);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53008();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b7d858; end: 100b7d863; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d858(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea608;
  func_0x000107c61428(param_1 + _DAT_112eea608,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7d864; end: 100b7d8b7;  */

void FUN_100b7d864(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7d8b8; end: 100b7d8c3; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider setCameraFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea610;
  func_0x000107c61428(param_1 + _DAT_112eea610,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7d8c4; end: 100b7d8f7; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider __safeProvide] */

void FUN_100b7d8c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b7d8f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b7d8f8; end: 100b7d9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d8f8(void)

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
    func_0x000107c3f0d4();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b7da3c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112eea328);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112eea618);
      *(long *)(unaff_x20 + _DAT_112eea618) = lVar3;
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



/* Entry: 100b7d9e0; end: 100b7d9eb; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7d9e0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea608;
  func_0x000107c61428(param_1 + _DAT_112eea608,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7d9ec; end: 100b7da2f;  */

void FUN_100b7d9ec(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b7da30; end: 100b7da3b; -[SCSCLensInfoCardsOnCameraScopeServicesSaberServiceProvider cameraFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7da30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea610;
  func_0x000107c61428(param_1 + _DAT_112eea610,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7da3c; end: 100b7dab7;  */

void FUN_100b7da3c(undefined8 param_1)

{
  if (lRam0000000112eea150 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7123b0);
  return;
}



/* Entry: 100b7dab8; end: 100b7dbcf; -[SCLensDataConfigProvider lastValidDataTimestampForNamespaceName:] */

long FUN_100b7dab8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x000107c61174(param_3);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c4d408();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4d9e8();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c4aad0();
  if (lVar1 == 0) {
    lVar1 = lVar3;
    func_0x000107c415c8(lVar3);
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4aad0(lVar2);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  return lVar1;
}



/* Entry: 100b7dbd0; end: 100b7de5f;  */

/* WARNING: Possible PIC construction at 0x000100b7dd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7dd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7dd80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7dd90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7dda0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7ddb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7ddc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7ddd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7dde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7ddf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7de00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7de10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7de20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7de30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7de24) */
/* WARNING: Removing unreachable block (ram,0x000100b7de14) */
/* WARNING: Removing unreachable block (ram,0x000100b7de04) */
/* WARNING: Removing unreachable block (ram,0x000100b7ddf4) */
/* WARNING: Removing unreachable block (ram,0x000100b7dde4) */
/* WARNING: Removing unreachable block (ram,0x000100b7ddd4) */
/* WARNING: Removing unreachable block (ram,0x000100b7ddc4) */
/* WARNING: Removing unreachable block (ram,0x000100b7ddb4) */
/* WARNING: Removing unreachable block (ram,0x000100b7dda4) */
/* WARNING: Removing unreachable block (ram,0x000100b7dd94) */
/* WARNING: Removing unreachable block (ram,0x000100b7dd84) */
/* WARNING: Removing unreachable block (ram,0x000100b7dd74) */
/* WARNING: Removing unreachable block (ram,0x000100b7dd64) */
/* WARNING: Removing unreachable block (ram,0x000100b7de34) */

void FUN_100b7dbd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110597970;
  func_0x000107c613fc(&UNK_110597970,0xf8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_16;
  *(undefined8 *)(puVar1 + 0x88) = param_17;
  *(undefined8 *)(puVar1 + 0x90) = param_18;
  *(undefined8 *)(puVar1 + 0x98) = param_19;
  *(undefined8 *)(puVar1 + 0xa0) = param_20;
  *(undefined8 *)(puVar1 + 0xa8) = param_21;
  *(undefined8 *)(puVar1 + 0xb0) = param_22;
  *(undefined8 *)(puVar1 + 0xb8) = param_23;
  *(undefined8 *)(puVar1 + 0xc0) = param_24;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_26;
  *(undefined8 *)(puVar1 + 0xd8) = param_27;
  *(undefined8 *)(puVar1 + 0xe0) = param_28;
  *(undefined8 *)(puVar1 + 0xe8) = param_29;
  *(undefined8 *)(puVar1 + 0xf0) = param_30;
  uVar2 = 0x112eec608;
  FUN_1000285a8(0x112eec608,&UNK_10db1a3b8);
  func_0x000107c613fc();
  puVar3 = &UNK_102ae78f8;
  FUN_1000841f8(&UNK_102ae78f8,puVar1,uVar2);
  FUN_100084214(&UNK_10db1a380,0x33,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100b7de60; end: 100b7de63;  */

void FUN_100b7de60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7de64; end: 100b7debf;  */

void FUN_100b7de64(void)

{
  long unaff_x20;
  
  FUN_100b7dbd0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                *(undefined8 *)(unaff_x20 + 0xe0),*(undefined8 *)(unaff_x20 + 0xe8),
                *(undefined8 *)(unaff_x20 + 0xf0));
  return;
}



/* Entry: 100b7dec0; end: 100b7ded3;  */

void FUN_100b7dec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be703b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bc050,PTR_s__parseMixerReloadConfigsWithConf_112579a88,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 100b7ded4; end: 100b7e15f; +[SCLensDataConfigProvider _parseMixerReloadConfigsWithConfigProvider:] */

void FUN_100b7ded4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar1 = param_3;
  func_0x000107c4f558();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_3);
  if (lVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126bc070;
    func_0x000107c610f4();
    func_0x000107c4636c();
    func_0x000107c61174(0);
    if (puVar3 == (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c41988(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
      func_0x000107c61180();
      puVar5 = puVar3;
      func_0x000107c4d40c();
      func_0x000107c61180();
      puVar9 = puVar5;
      func_0x000107c4080c();
      lVar1 = lRam0000000000000000;
      while (puVar9 != (undefined *)0x0) {
        puVar8 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            func_0x000107c61128(puVar5);
          }
          uVar10 = *(undefined8 *)((long)puVar8 * 8);
          puVar6 = PTR_PTR_1126bc078;
          func_0x000107c610f4(PTR_PTR_1126bc078);
          func_0x000107c5d854(uVar10);
          func_0x000107c4c8a4(uVar10);
          func_0x000107c4aacc(uVar10);
          func_0x000107c46eec(puVar6);
          func_0x000107c4d424(uVar10);
          func_0x000107c61180();
          func_0x000107c56bd8(puVar4);
          func_0x000107c61170(uVar10);
          func_0x000107c61170(puVar6);
          puVar8 = puVar8 + 1;
        } while (puVar9 != puVar8);
        puVar9 = puVar5;
        func_0x000107c4080c();
      }
      func_0x000107c61170(puVar5);
      puVar9 = PTR_PTR_1126bc080;
      func_0x000107c610f4(PTR_PTR_1126bc080);
      func_0x000107c415c4(puVar3);
      func_0x000107c47910(puVar9);
      func_0x000107c61170(puVar4);
    }
    param_3 = 0;
    func_0x000107c61170(puVar3);
    func_0x000107c61170(0);
  }
  func_0x000107c61170(lVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x10));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x18));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x20));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x28));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x30));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x38));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x40));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x48));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x50));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x58));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x60));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x68));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x70));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x78));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x80));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x88));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x90));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0x98));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(param_3 + 200));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(param_3 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(param_3,0xf8,7);
  return;
}



/* Entry: 100b7e160; end: 100b7e163;  */

void FUN_100b7e160(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7e164; end: 100b7e267;  */

void FUN_100b7e164(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b7e268; end: 100b7e2ef; -[SCAttributedBlockOperationProvider blockOperationWithCaller:block:] */

void FUN_100b7e268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar3;
  undefined8 uVar2;
  
  uVar2 = param_4;
  func_0x000107c61174();
  iVar1 = (int)uVar2;
  FUN_100b7e2f0();
  if (iVar1 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSBlockOperation_1126df8d8;
    func_0x000107c3eaf0(PTR__OBJC_CLASS___NSBlockOperation_1126df8d8,param_2,param_4);
    func_0x000107c61180();
  }
  else {
    puVar3 = PTR_PTR_1126df8d0;
    func_0x000107c3eaf4(PTR_PTR_1126df8d0,param_2,param_3,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10),param_4);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100b7e2f0; end: 100b7e357;  */

undefined1 FUN_100b7e2f0(void)

{
  if (lRam00000001137fc108 != -1) {
    FUN_10002a2fc(0x1137fc108,&PTR___NSConcreteGlobalBlock_110d66598);
  }
  return uRam00000001137fc00c;
}



/* Entry: 100b7e358; end: 100b7e64b; -[SCLensCameraFeatureServicesEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100b7e4c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e4d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e4e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e4f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e504: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e514: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e5ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7e5e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7e5b0) */
/* WARNING: Removing unreachable block (ram,0x000100b7e5a0) */
/* WARNING: Removing unreachable block (ram,0x000100b7e590) */
/* WARNING: Removing unreachable block (ram,0x000100b7e528) */
/* WARNING: Removing unreachable block (ram,0x000100b7e518) */
/* WARNING: Removing unreachable block (ram,0x000100b7e508) */
/* WARNING: Removing unreachable block (ram,0x000100b7e4f8) */
/* WARNING: Removing unreachable block (ram,0x000100b7e4e8) */
/* WARNING: Removing unreachable block (ram,0x000100b7e4d8) */
/* WARNING: Removing unreachable block (ram,0x000100b7e4c8) */
/* WARNING: Removing unreachable block (ram,0x000100b7e5ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7e358(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  puVar1 = PTR_PTR_1126c8360;
  func_0x000107c610f4();
  if (param_1 == 0) {
    func_0x000107c61174(0);
    lVar7 = 0;
    uVar5 = 0;
    lVar8 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11273fe84);
    func_0x000107c61174(uVar5);
    lVar7 = param_1 + _DAT_11273fe80;
    func_0x000107c61148(lVar7);
    lVar8 = param_1 + _DAT_11273fe78;
    func_0x000107c61148();
  }
  lVar2 = param_1;
  FUN_100b7e64c();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    lVar6 = 0;
  }
  else {
    uStack_70 = param_1 + _DAT_11273fe74;
    func_0x000107c61148();
    uStack_78 = param_1 + _DAT_11273fe70;
    func_0x000107c61148();
    lVar6 = param_1 + _DAT_11273fe6c;
    func_0x000107c61148();
  }
  lVar3 = param_1;
  lVar9 = lVar6;
  FUN_100b7e6d8();
  func_0x000107c61180();
  func_0x000107c4aeb0();
  func_0x000107c61180();
  func_0x000107c4aeb4();
  func_0x000107c61180();
  lVar4 = param_1;
  FUN_100b7e6d8();
  func_0x000107c61180();
  func_0x000107c4aeb0();
  func_0x000107c61180();
  func_0x000107c46e74(puVar1,param_2,uVar5,lVar7,lVar8,lVar2,uStack_70,uStack_78,lVar6,lVar3,lVar4,
                      lVar9,lVar8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11273fe58);
  *(undefined **)(param_1 + _DAT_11273fe58) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 100b7e64c; end: 100b7e66f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7e64c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273fe68);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7e670; end: 100b7e6d7; +[SCNamespacesConfigsProto descriptor] */

void FUN_100b7e670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51120,
                        &PTR____CFConstantStringClassReference_110df0ad8,&PTR_DAT_1130edc38,
                        &PTR_DAT_1130edc50,6,0x28,0x1c);
    puRam00000001136bd2e8 = puVar1;
  }
  return;
}



/* Entry: 100b7e6d8; end: 100b7e6fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7e6d8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11273fe7c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7e6fc; end: 100b7e92b; -[SCLensCameraInfoCardPresenterManager initWithInfoCardsScopeExposer:infoCardsScopeServices:infoCardLifecycleResolutionServices:cameraFeatureServices:cameraLensesViewControlerManagerServices:lensInfoCardActionHandlingServices:lensCreatorProfilePresentationServices:lensCarouselManager:lensCarouselManagementServices:] */

undefined8 *
FUN_100b7e6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_68 = PTR_PTR_1126efd18;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 7,param_3);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 3,param_6);
    func_0x000107c611a0(puVar1 + 6,param_7);
    func_0x000107c611a0(puVar1 + 5,param_8);
    func_0x000107c611a0(puVar1 + 4,param_9);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    func_0x000107c61170(uVar2);
    puVar3 = puVar1;
    func_0x000107c3b288();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    uVar2 = param_5;
    func_0x000107c4b224(param_5);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c50610();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b7e92c; end: 100b7e9e3; -[SCLensCameraInfoCardPresenterManager _createLazyInfoCardPresenter] */

void FUN_100b7e92c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b7e9e4; end: 100b7e9eb; -[SCLensInfoCardLifecycleResolutionServices lensInfoCardLifecycleResolver] */

undefined8 FUN_100b7e9e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b7e9ec; end: 100b7ea07;  */

void FUN_100b7e9ec(void)

{
  func_0x000107c61160(PTR_PTR_1126c8370);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7ea08; end: 100b7ea6b; -[SCLensInfoCardLifecycleResolver init] */

undefined1 * FUN_100b7ea08(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efd10;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b7ea6c; end: 100b7eb2f; -[SCLensInfoCardLifecycleResolver resolveWithInfoCardLifecycleObservable:] */

void FUN_100b7ea6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + 8,param_3);
  func_0x000107c61144(auStack_28,param_1);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4db94(param_3);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100b7eb30; end: 100b7eb37; -[SCLensCameraInfoCardPresenterManager lazyInfoCardPresenter] */

undefined8 FUN_100b7eb30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 100b7eb38; end: 100b7eb3f; -[SCLensCameraFeatureServices cameraFeatureCatalog] */

undefined8 FUN_100b7eb38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b7eb40; end: 100b7eb47; -[SCMutablePublicCameraFeatureCatalog lensInfoButton] */

undefined8 FUN_100b7eb40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x100);
}



/* Entry: 100b7eb48; end: 100b7ec1b;  */

byte FUN_100b7eb48(long param_1)

{
  long lVar1;
  byte bVar2;
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x28) ^ 1;
  }
  func_0x000107c61170();
  return bVar2 & 1;
}



/* Entry: 100b7ec1c; end: 100b7ef2b; -[SCCameraCoreLensInfoButtonEntryPoint _createLensInfoButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7ec1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_a8;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  puVar1 = PTR_PTR_1126c8958;
  func_0x000107c610f4();
  if (param_1 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = param_1 + _DAT_112741e68;
    func_0x000107c61148();
  }
  lVar2 = lVar10;
  func_0x000107c3f0dc();
  func_0x000107c61180();
  if (param_1 == 0) {
    uStack_a8 = 0;
    func_0x000107c3f300();
    uStack_88 = 0;
    uStack_80 = 0;
    lVar11 = 0;
  }
  else {
    uStack_80 = param_1 + _DAT_112741e6c;
    func_0x000107c61148();
    uStack_88 = param_1 + _DAT_112741e64;
    func_0x000107c61148();
    uStack_a8 = uStack_88;
    func_0x000107c3f300();
    lVar11 = param_1 + _DAT_112741e70;
    func_0x000107c61148();
  }
  lVar3 = lVar11;
  func_0x000107c3d28c();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_112741e74;
    func_0x000107c61148();
  }
  lVar4 = lVar12;
  func_0x000107c4b1cc();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_112741e88;
    func_0x000107c61148();
  }
  lVar5 = lVar13;
  func_0x000107c4af44();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112741e78;
    func_0x000107c61148();
  }
  lVar6 = lVar14;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_112741e7c;
    func_0x000107c61148();
  }
  lVar7 = lVar15;
  func_0x000107c4b0a0();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_112741e80;
    func_0x000107c61148();
  }
  lVar8 = lVar16;
  func_0x000107c4b214();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = param_1 + _DAT_112741e84;
    func_0x000107c61148();
  }
  lVar9 = lVar17;
  func_0x000107c4ac68();
  func_0x000107c61180();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112741e8c;
    func_0x000107c61148();
  }
  func_0x000107c45bc4(puVar1,param_2,lVar2,uStack_80,uStack_a8,lVar3,lVar4,lVar5,lVar6,lVar7,lVar8,
                      lVar9,param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(uStack_88);
  func_0x000107c61170(uStack_80);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b7ef2c; end: 100b7ef3b; -[_TtC20SCCameraFeatureScope23SCCameraFeatureServices cameraFeatureScopeInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7ef2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130354a0));
  return;
}



/* Entry: 100b7ef3c; end: 100b7efb7; +[SCNamespacesConfigsProto_NamespaceConfig descriptor] */

undefined * FUN_100b7ef3c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bd2f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x000107c3dbcc(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a51170,
                        &PTR____CFConstantStringClassReference_110df0af8,&PTR_DAT_1130edc38,
                        &PTR_DAT_1130edd10,0xb,0x20,0x1c);
    func_0x000107c5a88c();
    puRam00000001136bd2f0 = puVar1;
  }
  return puRam00000001136bd2f0;
}



/* Entry: 100b7efb8; end: 100b7efc7; -[_TtC15LensExplorerAPI44SCLensExplorerConfigurableNavigationServices lensExplorerARBarNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7efb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113071300));
  return;
}



/* Entry: 100b7efc8; end: 100b7f34b; -[SCFeatureLensInfoButtonImpl initWithCameraFeatureScopeInfo:navigationServices:cameraViewType:adConfigProvider:lensIconRepository:lensCarouselStudySettings:lensPerformerProvider:arBarNavigation:lensInfoButtonVisibility:lensCarouselManager:lensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100b7efc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  puStack_70 = PTR_PTR_1126f0420;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_112742878;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274287c) = param_5;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742880);
    *(undefined **)((long)puVar1 + (long)_DAT_112742880) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742884);
    *(undefined **)((long)puVar1 + (long)_DAT_112742884) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112742888);
    *(undefined **)((long)puVar1 + (long)_DAT_112742888) = puVar3;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_11274288c;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_6;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112742890;
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_10;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112742894;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_7;
    func_0x000107c61170(uVar2);
    lVar5 = (long)_DAT_112742898;
    func_0x000107c611a0((long)puVar1 + lVar5,param_3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274289c) = 1;
    lVar4 = (long)_DAT_1127428a0;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127428a4;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127428a8;
    func_0x000107c61174(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_11;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127428ac;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_12;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_1127428b0;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_80,puVar1);
    lVar5 = (long)puVar1 + lVar5;
    func_0x000107c61148(lVar5);
    func_0x000107c6111c(auStack_88,auStack_80);
    func_0x000107c5dc64(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61120(auStack_88);
    func_0x000107c61120(auStack_80);
  }
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100b7f34c; end: 100b7f39b;  */

/* WARNING: Possible PIC construction at 0x000100b7f388: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7f38c) */

void FUN_100b7f34c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c3c6f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b7f39c; end: 100b7f437; -[SCFeatureLensInfoButtonImpl _setupWithCameraInfo:] */

/* WARNING: Possible PIC construction at 0x000100b7f418: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b7f41c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_100b7f438;
  puStack_30 = &UNK_11084e7d0;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  ppuVar1 = &puStack_48;
  FUN_100b7f438();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127428b4);
  *(undefined ***)(param_1 + _DAT_1127428b4) = ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100b7f438; end: 100b7f513;  */

void FUN_100b7f438(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b7f514; end: 100b7f533; -[SCCameraFeatureScopeInfo publicCameraFeatureCatalog] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f514(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_113035438));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7f534; end: 100b7f547; -[SCFeatureLensInfoButtonImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f534(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127428b8,param_3);
  return;
}



/* Entry: 100b7f548; end: 100b7f587; -[SCFeatureLensInfoButtonImpl setInfoCardPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f548(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127428e0;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100b7f588; end: 100b7f5df; -[_TtC16LensInfoCardsAPI34SCLensInfoCardPresentationServices initWithLensInfoCardPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113071e68) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100b7f5e0; end: 100b7f653; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f5e0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f980b0,0);
  func_0x000107c61614(param_1 + _DAT_112f980b8,0);
  *(undefined8 *)(param_1 + _DAT_112f980c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b7f654; end: 100b7f6ff; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b7f654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b7f700(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b7f700; end: 100b7f897;  */

void FUN_100b7f700(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0e959d0)) {
      uVar2 = 0xd000000000000029;
      func_0x000107c605b8(0xd000000000000029,0x800000010f16a630,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ComUserNavigationScopeGraphBridge/SCSCCommerceImmediateLaunchServicesSaberServiceProvider.swift"
                            ,0x5f,2,0x33,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7f898);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c535ac();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b7f898; end: 100b7f8a3; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f898(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f980b0;
  func_0x000107c61428(param_1 + _DAT_112f980b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7f8a4; end: 100b7f8f7;  */

void FUN_100b7f8a4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7f8f8; end: 100b7f903; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider setComUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f8f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f980b8;
  func_0x000107c61428(param_1 + _DAT_112f980b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7f904; end: 100b7f937; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider __safeProvide] */

void FUN_100b7f904(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b7f938();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b7f938; end: 100b7fa1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7f938(void)

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
    func_0x000107c3fdf8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b7fa7c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112f98000);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f980c0);
      *(long *)(unaff_x20 + _DAT_112f980c0) = lVar3;
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



/* Entry: 100b7fa20; end: 100b7fa2b; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7fa20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f980b0;
  func_0x000107c61428(param_1 + _DAT_112f980b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7fa2c; end: 100b7fa6f;  */

void FUN_100b7fa2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b7fa70; end: 100b7fa7b; -[SCSCCommerceImmediateLaunchServicesSaberServiceProvider comUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7fa70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f980b8;
  func_0x000107c61428(param_1 + _DAT_112f980b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b7fa7c; end: 100b7faf7;  */

void FUN_100b7fa7c(undefined8 param_1)

{
  if (lRam0000000112f97cd8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77f280);
  return;
}



/* Entry: 100b7faf8; end: 100b7faff;  */

void FUN_100b7faf8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b7fb00; end: 100b7fb53;  */

void FUN_100b7fb00(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x68);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b7fb54; end: 100b8039b;  */

void FUN_100b7fb54(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_1003752ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x60) = uStack_70;
  FUN_1000285a8(0x112f12078,&UNK_10db45bf8);
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar7 = uStack_78;
  func_0x000107c6157c(uStack_78);
  FUN_1003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x18) = puVar3;
  FUN_1000285a8(0x112f12080,&UNK_10db45c00);
  func_0x000107c610f8();
  uVar7 = uStack_80;
  func_0x000107c6157c(uStack_80);
  FUN_1003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x20) = puVar3;
  FUN_1000285a8(0x112f12088,&UNK_10db45c08);
  func_0x000107c610f8();
  uVar7 = uStack_88;
  func_0x000107c6157c(uStack_88);
  FUN_10017da58();
  puVar3 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x28) = puVar3;
  FUN_1000285a8(0x112f12090,&UNK_10db45c10);
  func_0x000107c610f8();
  uVar7 = uStack_90;
  func_0x000107c6157c(uStack_90);
  FUN_1003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x30) = puVar3;
  FUN_1000285a8(0x112f12098,&UNK_10db45c18);
  func_0x000107c610f8();
  uVar7 = uStack_98;
  func_0x000107c6157c(uStack_98);
  FUN_1003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x38) = puVar3;
  FUN_1000285a8(0x112f120a0,&UNK_10db45c20);
  func_0x000107c610f8();
  uVar7 = uStack_a0;
  func_0x000107c6157c(uStack_a0);
  FUN_1003b3b80();
  puVar3 = PTR_PTR_1126aa638;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x40) = puVar3;
  FUN_1000285a8(0x112f120a8,&UNK_10db45c28);
  func_0x000107c610f8();
  uVar7 = uStack_a8;
  func_0x000107c6157c(uStack_a8);
  FUN_1003b3b80();
  puVar3 = PTR_PTR_1126a8c98;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar7);
  *(undefined **)(param_2 + 0x48) = puVar3;
  puVar3 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x50) = puVar3;
  puVar4 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x58) = puVar4;
  puVar5 = PTR_PTR_1126ac380;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar5;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef3a8c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10b7f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f10b820);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f10b840);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f03f0f0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1c0a0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar7 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f10b870);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f07e190);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar7 = *(undefined8 *)(param_2 + 0x38);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f10b8a0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef28140);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  uVar7 = *(undefined8 *)(param_2 + 0x48);
  func_0x000107c61174();
  func_0x000107c61174(uVar7);
  uVar9 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f10b8c0);
  func_0x000107c5a49c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  lVar8 = *(long *)(param_2 + 0x50);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b80398);
    (*pcVar1)();
  }
  *(long *)(param_2 + 0x68) = lVar8;
  lVar8 = *(long *)(param_2 + 0x58);
  func_0x000107c52018();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61574(uStack_78);
    func_0x000107c61574(uStack_80);
    func_0x000107c61574(uStack_88);
    func_0x000107c61574(uStack_90);
    func_0x000107c61574(uStack_98);
    func_0x000107c61574(uStack_a0);
    func_0x000107c61574(uStack_a8);
    *(long *)(param_2 + 0x70) = lVar8;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b8039c);
  (*pcVar1)();
}



/* Entry: 100b8039c; end: 100b803cf;  */

void FUN_100b8039c(void)

{
  long unaff_x20;
  
  FUN_100b7fb54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 100b803d0; end: 100b80437;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b803d0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100372f7c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f983b8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 100b80438; end: 100b80443;  */

/* WARNING: Possible PIC construction at 0x000100b804e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b804e4) */

void FUN_100b80438(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_110655da0;
  func_0x000107c613fc(&UNK_110655da0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112f68d48;
  FUN_1000285a8(0x112f68d48,&UNK_10dbc5e38);
  func_0x000107c613fc();
  puVar4 = &UNK_10343a5f8;
  FUN_1000841f8(&UNK_10343a5f8,puVar2,uVar3);
  FUN_100084214(&UNK_10dbc5e00,0x32,2);
  *param_1 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 100b80444; end: 100b80503;  */

/* WARNING: Possible PIC construction at 0x000100b804e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b804e4) */

void FUN_100b80444(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &UNK_110655da0;
  func_0x000107c613fc(&UNK_110655da0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112f68d48;
  FUN_1000285a8(0x112f68d48,&UNK_10dbc5e38);
  func_0x000107c613fc();
  puVar3 = &UNK_10343a5f8;
  FUN_1000841f8(&UNK_10343a5f8,puVar1,uVar2);
  FUN_100084214(&UNK_10dbc5e00,0x32,2);
  *param_1 = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 100b80504; end: 100b80507;  */

void FUN_100b80504(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b80508; end: 100b80563; -[SCLensMixerReloadNamespaceConfig initWithInteractionsOptimizationEnabled:maxTtlOverride:lastValidDataTimestampSec:] */

void FUN_100b80508(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270a238;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 100b80564; end: 100b80567;  */

void FUN_100b80564(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b80568; end: 100b8059b;  */

void FUN_100b80568(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b8059c; end: 100b805ab;  */

void FUN_100b8059c(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 100b805ac; end: 100b80633; -[SCLensMixerReloadConfig initWithNamespaceConfigs:defaultLastValidDataTimestampSec:] */

undefined1 *
FUN_100b805ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e94c0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100b80634; end: 100b8063b; -[SCLensMixerReloadConfig namespaceConfigs] */

undefined8 FUN_100b80634(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b8063c; end: 100b80643; -[SCLensMixerReloadNamespaceConfig lastValidDataTimestampSec] */

undefined8 FUN_100b8063c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100b80644; end: 100b8064b; -[SCLensMixerReloadConfig defaultLastValidDataTimestampSec] */

undefined8 FUN_100b80644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100b8064c; end: 100b80673; -[SCLensScheduleNamespace cacheKey] */

void FUN_100b8064c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b80674; end: 100b80847; -[SCCommerceFeatureLaunchersEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100b807c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b807e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b807f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b80808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b80818: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b8080c) */
/* WARNING: Removing unreachable block (ram,0x000100b807fc) */
/* WARNING: Removing unreachable block (ram,0x000100b807ec) */
/* WARNING: Removing unreachable block (ram,0x000100b807c4) */
/* WARNING: Removing unreachable block (ram,0x000100b8081c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b80674(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c610f4();
  func_0x000107c4786c();
  puVar1 = PTR_PTR_1126b5350;
  func_0x000107c610f4(PTR_PTR_1126b5350);
  func_0x000107c484e0();
  func_0x000107c610f4();
  func_0x000107c4786c();
  func_0x000107c610f4(PTR_PTR_1126c2610);
  func_0x000107c4786c();
  func_0x000107c610f4(PTR_PTR_1126c2610);
  func_0x000107c4786c();
  func_0x000107c610f4(PTR_PTR_1126c2610);
  func_0x000107c4786c();
  func_0x000107c610f4();
  func_0x000107c4786c();
  func_0x000107c610f4(PTR_PTR_1126caae8);
  func_0x000107c45ec0();
  puVar2 = PTR_PTR_1126caaf0;
  func_0x000107c610f4(PTR_PTR_1126caaf0);
  param_1 = param_1 + _DAT_112747e28;
  func_0x000107c61148(param_1);
  func_0x000107c48688(puVar2,param_2,puVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b80848; end: 100b809c3; -[SCCommerceImmediateLaunchServices initWithCommerceBrowserScopeLauncher:shoppingLensScopeLauncher:favoritesCatalogScopeLauncher:screenshopComposerScopeLauncher:topicPageScopeLauncher:chatCameraScopeLauncher:shoppingScopeLauncher:] */

undefined1 *
FUN_100b80848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_58 = PTR_PTR_1126f6a38;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
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



/* Entry: 100b809c4; end: 100b80a67; -[SCCommerceShoppingLensLaunchServices initWithShoppingLensScopeLauncher:shoppingLensLauncherScopeServices:] */

undefined1 *
FUN_100b809c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f6340;
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



/* Entry: 100b80a68; end: 100b80acb;  */

void FUN_100b80a68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b80acc; end: 100b80b3f; -[SCSCLensLoggerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b80acc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130287a8,0);
  func_0x000107c61614(param_1 + _DAT_1130287b0,0);
  *(undefined8 *)(param_1 + _DAT_1130287b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b80b40; end: 100b80beb; -[SCSCLensLoggerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b80b40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b80bec(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b80bec; end: 100b80d83;  */

void FUN_100b80bec(long param_1,long param_2,long param_3)

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
                            "LensUserSessionScopeGraphBridge/SCSCLensLoggerServicesSaberServiceProvider.swift"
                            ,0x50,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b80d84);
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


