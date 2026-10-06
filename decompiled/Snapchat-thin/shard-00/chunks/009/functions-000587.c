/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b55a44; end: 100b55a97;  */

void FUN_100b55a44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b55a98; end: 100b55aa3; -[SCSCLensesOnCameraServicesSaberEntryPoint setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf5d8;
  func_0x000107c61428(param_1 + _DAT_112edf5d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b55aa4; end: 100b55b07; -[SCSCLensesOnCameraServicesSaberEntryPoint setSCLensesOnCameraServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55aa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf5e0;
  func_0x000107c61428(param_1 + _DAT_112edf5e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b55b08; end: 100b55b2f; -[SCSCLensesOnCameraServicesSaberEntryPoint begin] */

void FUN_100b55b08(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b55b30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b55b30; end: 100b55cb3;  */

/* WARNING: Possible PIC construction at 0x000100b55c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b55c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b55c5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b55c34) */
/* WARNING: Removing unreachable block (ram,0x000100b55c44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55b30(void)

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
    func_0x000107c3f288();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50f80();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b55d58();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112edeeb0);
        *(undefined8 *)(lVar2 + _DAT_112edbcd0) = uVar6;
        *(long *)(lVar2 + _DAT_112edbcd8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112edbcd8);
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



/* Entry: 100b55cb4; end: 100b55cbf; -[SCSCLensesOnCameraServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55cb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf5d0;
  func_0x000107c61428(param_1 + _DAT_112edf5d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b55cc0; end: 100b55d03;  */

void FUN_100b55cc0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b55d04; end: 100b55d0f; -[SCSCLensesOnCameraServicesSaberEntryPoint cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55d04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf5d8;
  func_0x000107c61428(param_1 + _DAT_112edf5d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b55d10; end: 100b55d57; -[SCSCLensesOnCameraServicesSaberEntryPoint sCLensesOnCameraServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55d10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf5e0;
  func_0x000107c61428(param_1 + _DAT_112edf5e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b55d58; end: 100b55d77;  */

void FUN_100b55d58(void)

{
  func_0x000107c61168(&PTR_PTR_11287e1c8);
  return;
}



/* Entry: 100b55d78; end: 100b55df7; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b55d78(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112edf618,0);
  func_0x000107c61614(param_1 + _DAT_112edf620,0);
  *(undefined8 *)(param_1 + _DAT_112edf628) = 0;
  *(undefined8 *)(param_1 + _DAT_112edf630) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b55df8; end: 100b55ea3; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b55df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b55ea4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b55ea4; end: 100b560a7;  */

void FUN_100b55ea4(long param_1,long param_2,long param_3)

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
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0f1def0)) &&
           (func_0x000107c605b8(0xd000000000000024,0x800000010f0e2110,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CameraUIScopeGraphBridge/SCSCRealTimeScanLoggingServicesSaberEntryPoint.swift"
                              ,0x4d,2,0xfe,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b560a8);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c587b4();
        goto LAB_100b55f30;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c530f0();
  }
LAB_100b55f30:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b560a8; end: 100b560b3; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b560a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf618;
  func_0x000107c61428(param_1 + _DAT_112edf618,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b560b4; end: 100b56107;  */

void FUN_100b560b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b56108; end: 100b56113; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56108(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf620;
  func_0x000107c61428(param_1 + _DAT_112edf620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b56114; end: 100b56177; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint setSCRealTimeScanLoggingServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf628;
  func_0x000107c61428(param_1 + _DAT_112edf628,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b56178; end: 100b5619f; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint begin] */

void FUN_100b56178(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b561a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b561a0; end: 100b56323;  */

/* WARNING: Possible PIC construction at 0x000100b562a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b562b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b562cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b562a4) */
/* WARNING: Removing unreachable block (ram,0x000100b562b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b561a0(void)

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
    func_0x000107c3f288();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5120c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b563c8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112edeee0);
        *(undefined8 *)(lVar2 + _DAT_112edbd08) = uVar6;
        *(long *)(lVar2 + _DAT_112edbd10) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112edbd10);
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



/* Entry: 100b56324; end: 100b5632f; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56324(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf618;
  func_0x000107c61428(param_1 + _DAT_112edf618,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b56330; end: 100b56373;  */

void FUN_100b56330(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b56374; end: 100b5637f; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56374(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf620;
  func_0x000107c61428(param_1 + _DAT_112edf620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b56380; end: 100b563c7; -[SCSCRealTimeScanLoggingServicesSaberEntryPoint sCRealTimeScanLoggingServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56380(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf628;
  func_0x000107c61428(param_1 + _DAT_112edf628,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b563c8; end: 100b563e7;  */

void FUN_100b563c8(void)

{
  func_0x000107c61168(&PTR_PTR_11287e290);
  return;
}



/* Entry: 100b563e8; end: 100b56467; -[SCWidgetEventServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b563e8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112edf660,0);
  func_0x000107c61614(param_1 + _DAT_112edf668,0);
  *(undefined8 *)(param_1 + _DAT_112edf670) = 0;
  *(undefined8 *)(param_1 + _DAT_112edf678) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b56468; end: 100b56513; -[SCWidgetEventServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100b56468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b56514(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b56514; end: 100b56717;  */

void FUN_100b56514(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef0f1ea20)) ||
       (func_0x000107c605b8(0xd000000000000020,0x800000010f0e15e0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c530f0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef0f1de70)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001a,0x800000010f0e2190,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CameraUIScopeGraphBridge/SCWidgetEventServicesSaberEntryPoint.swift",
                              0x43,2,0xfe,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100b56718);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5a708();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b56718; end: 100b56723; -[SCWidgetEventServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56718(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf660;
  func_0x000107c61428(param_1 + _DAT_112edf660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b56724; end: 100b56777;  */

void FUN_100b56724(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b56778; end: 100b56783; -[SCWidgetEventServicesSaberEntryPoint setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56778(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf668;
  func_0x000107c61428(param_1 + _DAT_112edf668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b56784; end: 100b567e7; -[SCWidgetEventServicesSaberEntryPoint setWidgetEventServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56784(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112edf670;
  func_0x000107c61428(param_1 + _DAT_112edf670,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b567e8; end: 100b5680f; -[SCWidgetEventServicesSaberEntryPoint begin] */

void FUN_100b567e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b56810();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b56810; end: 100b56993;  */

/* WARNING: Possible PIC construction at 0x000100b56910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b56920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b5693c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b56914) */
/* WARNING: Removing unreachable block (ram,0x000100b56924) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56810(void)

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
    func_0x000107c3f288();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5e2d4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100b56a38();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112edef10);
        *(undefined8 *)(lVar2 + _DAT_112edbd40) = uVar6;
        *(long *)(lVar2 + _DAT_112edbd48) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112edbd48);
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



/* Entry: 100b56994; end: 100b5699f; -[SCWidgetEventServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56994(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf660;
  func_0x000107c61428(param_1 + _DAT_112edf660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b569a0; end: 100b569e3;  */

void FUN_100b569a0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b569e4; end: 100b569ef; -[SCWidgetEventServicesSaberEntryPoint cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b569e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf668;
  func_0x000107c61428(param_1 + _DAT_112edf668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b569f0; end: 100b56a37; -[SCWidgetEventServicesSaberEntryPoint widgetEventServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b569f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112edf670;
  func_0x000107c61428(param_1 + _DAT_112edf670,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b56a38; end: 100b56a57;  */

void FUN_100b56a38(void)

{
  func_0x000107c61168(&PTR_PTR_11287e358);
  return;
}



/* Entry: 100b56a58; end: 100b56a67;  */

void FUN_100b56a58(void)

{
  return;
}



/* Entry: 100b56a68; end: 100b56ac7;  */

void FUN_100b56a68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_100b56a58();
    func_0x000100b56b04();
    FUN_100b56b38();
    func_0x000100b56b4c();
  }
  uStack_38 = 1;
  FUN_100b56b6c(&uStack_40);
  return;
}



/* Entry: 100b56ac8; end: 100b56adf;  */

void FUN_100b56ac8(undefined8 param_1,long param_2)

{
  if (-1 < param_2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 1);
    return;
  }
  func_0x000104bd35f4();
  FUN_100b56ac8();
  return;
}



/* Entry: 100b56ae0; end: 100b56b37;  */

void FUN_100b56ae0(void)

{
  FUN_100b56ac8();
  return;
}



/* Entry: 100b56b38; end: 100b56b6b;  */

void FUN_100b56b38(void)

{
  return;
}



/* Entry: 100b56b6c; end: 100b56b97;  */

long FUN_100b56b6c(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x00010730b088(param_1);
  }
  return param_1;
}



/* Entry: 100b56b98; end: 100b56ba7;  */

void FUN_100b56b98(void)

{
  return;
}



/* Entry: 100b56ba8; end: 100b56bdb; -[SCScopeLifecycle hasAncestorProvidingExposureName:] */

bool FUN_100b56ba8(long param_1)

{
  func_0x000107c3ad5c();
  func_0x000107c61180();
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100b56bdc; end: 100b56d23; -[SCScopeLifecycle _ancestorLifecycleProvidingServicesContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56bdc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c4e350();
  func_0x000107c61180();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    do {
      unaff_x22 = *(long *)(param_1 + 0x108);
      func_0x000107c4d9e8();
      func_0x000107c61180();
      if (unaff_x22 != 0) {
        puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
        lStack_48 = param_1;
        lStack_40 = unaff_x22;
        func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x22);
        func_0x000107c61170(param_1);
        break;
      }
      lVar1 = param_1;
      func_0x000107c4e350();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      puVar3 = (undefined *)0x0;
      param_1 = lVar1;
    } while (lVar1 != 0);
  }
  lVar1 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    func_0x000107c60e78();
    func_0x000107c61170(unaff_x22);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_3);
    func_0x000107c60bd8();
    pcStack_58 = FUN_100b56d24;
    lVar2 = lVar1;
    lStack_70 = param_1;
    lStack_68 = param_3;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x000107c614f0();
    func_0x000107c61614(lVar1 + _DAT_112eea388,0);
    *(undefined8 *)(lVar1 + _DAT_112eea390) = 0;
    *(undefined8 *)(lVar1 + _DAT_112eea398) = 0;
    lStack_80 = lVar1;
    lStack_78 = lVar2;
    func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100b56d24; end: 100b56d8f; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56d24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112eea388,0);
  *(undefined8 *)(param_1 + _DAT_112eea390) = 0;
  *(undefined8 *)(param_1 + _DAT_112eea398) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b56d90; end: 100b56e3b; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_100b56d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b56e3c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b56e3c; end: 100b56fd3;  */

void FUN_100b56e3c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0f18690)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002c,0x800000010f0e7970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CameraFeatureScopeGraphBridge/SCCameraFeatureScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x52,2,0x76,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b56fd4);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5300c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b56fd4; end: 100b5702b; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b56fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea388;
  func_0x000107c61428(param_1 + _DAT_112eea388,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b5702c; end: 100b5708f; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint setCameraFeatureScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5702c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112eea390;
  func_0x000107c61428(param_1 + _DAT_112eea390,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b57090; end: 100b570b7; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint begin] */

void FUN_100b57090(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b570b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b570b8; end: 100b571eb;  */

/* WARNING: Possible PIC construction at 0x000100b57170: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b5718c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b571a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b57174) */
/* WARNING: Removing unreachable block (ram,0x000100b57190) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b570b8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3f0d8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_100b5727c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_100b5729c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b571ec);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ee9e80) = lVar5;
    *(long *)(lVar4 + _DAT_112ee9e88) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 100b571ec; end: 100b57233; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b571ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea388;
  func_0x000107c61428(param_1 + _DAT_112eea388,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b57234; end: 100b5727b; -[SCCameraFeatureScopeGraphBridgeSaberEntryPoint cameraFeatureScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57234(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112eea390;
  func_0x000107c61428(param_1 + _DAT_112eea390,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b5727c; end: 100b5729b;  */

void FUN_100b5727c(void)

{
  func_0x000107c61168(&PTR_PTR_1128854c8);
  return;
}



/* Entry: 100b5729c; end: 100b5736b;  */

undefined8 FUN_100b5729c(void)

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
  
  func_0x000107c61428(0x112eea300,&uStack_40,0x20,0);
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
    FUN_1007d4fac();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 100b5736c; end: 100b573df; -[SCSCLensCTARegisteringServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5736c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee16e8,0);
  func_0x000107c61614(param_1 + _DAT_112ee16f0,0);
  *(undefined8 *)(param_1 + _DAT_112ee16f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b573e0; end: 100b5748b; -[SCSCLensCTARegisteringServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b573e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b5748c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b5748c; end: 100b57623;  */

void FUN_100b5748c(long param_1,long param_2,long param_3)

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
                            "CameraUIScopeGraphBridge/SCSCLensCTARegisteringServicesSaberServiceProvider.swift"
                            ,0x51,2,0x100,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b57624);
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



/* Entry: 100b57624; end: 100b5762f; -[SCSCLensCTARegisteringServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee16e8;
  func_0x000107c61428(param_1 + _DAT_112ee16e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b57630; end: 100b57683;  */

void FUN_100b57630(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b57684; end: 100b5768f; -[SCSCLensCTARegisteringServicesSaberServiceProvider setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57684(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee16f0;
  func_0x000107c61428(param_1 + _DAT_112ee16f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b57690; end: 100b576c3; -[SCSCLensCTARegisteringServicesSaberServiceProvider __safeProvide] */

void FUN_100b57690(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b576c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b576c4; end: 100b577ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b576c4(void)

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
      FUN_100b57808();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112edee08);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee16f8);
      *(long *)(unaff_x20 + _DAT_112ee16f8) = lVar3;
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



/* Entry: 100b577ac; end: 100b577b7; -[SCSCLensCTARegisteringServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b577ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee16e8;
  func_0x000107c61428(param_1 + _DAT_112ee16e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b577b8; end: 100b577fb;  */

void FUN_100b577b8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b577fc; end: 100b57807; -[SCSCLensCTARegisteringServicesSaberServiceProvider cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b577fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee16f0;
  func_0x000107c61428(param_1 + _DAT_112ee16f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b57808; end: 100b57883;  */

void FUN_100b57808(undefined8 param_1)

{
  if (lRam0000000112ede090 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70b0f4);
  return;
}



/* Entry: 100b57884; end: 100b5788b;  */

void FUN_100b57884(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b5788c; end: 100b578df;  */

void FUN_100b5788c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b578e0; end: 100b57a0b; -[SCLensCTAHandlingPlugInScopeImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b578e0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  func_0x000107c61144(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273fe18);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_100b929ac;
  puStack_68 = &UNK_11086a720;
  func_0x000107c6111c(auStack_60,auStack_58);
  func_0x000107c42c14(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273fe1c);
  func_0x000107c6111c(auStack_88,auStack_58);
  func_0x000107c42c14(uVar1);
  func_0x000107c61120(auStack_88);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  return;
}



/* Entry: 100b57a0c; end: 100b57a57;  */

void FUN_100b57a0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8350;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c47f70();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100b57a58; end: 100b57b17; -[SCLensCTAHandlingPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_100b57a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a800;
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



/* Entry: 100b57b18; end: 100b57b8b; -[SCLensOrganicCTAHandlingPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_100b57b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_11270a818;
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



/* Entry: 100b57b8c; end: 100b57bff; -[SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57b8c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f9e898,0);
  func_0x000107c61614(param_1 + _DAT_112f9e8a0,0);
  *(undefined8 *)(param_1 + _DAT_112f9e8a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b57c00; end: 100b57cab; -[SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b57c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b57cac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b57cac; end: 100b57e43;  */

void FUN_100b57cac(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0e91f30)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f16e0d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserNavigationScopeGraphBridge/SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider.swift"
                            ,0x6c,2,0x40,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b57e44);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ee4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b57e44; end: 100b57e4f; -[SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57e44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9e898;
  func_0x000107c61428(param_1 + _DAT_112f9e898,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b57e50; end: 100b57ea3;  */

void FUN_100b57e50(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b57ea4; end: 100b57eaf; -[SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider setLensUserNavigationScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57ea4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f9e8a0;
  func_0x000107c61428(param_1 + _DAT_112f9e8a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b57eb0; end: 100b57ee3; -[SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider __safeProvide] */

void FUN_100b57eb0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b57ee4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b57ee4; end: 100b57fcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57ee4(void)

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
    func_0x000107c4b510();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b58028();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112f9e3e8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f9e8a8);
      *(long *)(unaff_x20 + _DAT_112f9e8a8) = lVar3;
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



/* Entry: 100b57fcc; end: 100b57fd7; -[SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b57fcc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9e898;
  func_0x000107c61428(param_1 + _DAT_112f9e898,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b57fd8; end: 100b5801b;  */

void FUN_100b57fd8(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b5801c; end: 100b58027; -[SCSCFeatureScopeLensCollectionsCarouselServicesSaberServiceProvider lensUserNavigationScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b5801c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f9e8a0;
  func_0x000107c61428(param_1 + _DAT_112f9e8a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b58028; end: 100b580a3;  */

void FUN_100b58028(undefined8 param_1)

{
  if (lRam0000000112f9da18 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e781e08);
  return;
}



/* Entry: 100b580a4; end: 100b580ab;  */

void FUN_100b580a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b580ac; end: 100b580ff;  */

void FUN_100b580ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100b58100; end: 100b58107;  */

void FUN_100b58100(undefined8 *param_1)

{
  undefined8 unaff_x20;
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100331b44();
  func_0x000107c613fc();
  func_0x000100b58168(uStack_38);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100b58108; end: 100b5822f;  */

void FUN_100b58108(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_38;
  
  FUN_100083b20(&uStack_38);
  FUN_100331b44();
  func_0x000107c613fc();
  func_0x000100b58168(uStack_38);
  *param_1 = param_2;
  return;
}



/* Entry: 100b58230; end: 100b5827f; -[SCSharedFeatureLensCollectionsCarouselServiceProvider provide] */

void FUN_100b58230(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126dda60;
  func_0x000107c61160(PTR_PTR_1126dda60);
  puVar2 = PTR_PTR_1126dda68;
  func_0x000107c610f4(PTR_PTR_1126dda68);
  func_0x000107c468a4();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b58280; end: 100b582e3; -[SCSharedFeatureLensCollectionsCarouselProvider init] */

undefined1 * FUN_100b58280(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112700d70;
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



/* Entry: 100b582e4; end: 100b58387; -[SCFeatureScopeLensCollectionsCarouselServices initWithFeatureStream:featureMutableStream:] */

undefined1 *
FUN_100b582e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701ae8;
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



/* Entry: 100b58388; end: 100b584e3; -[SCLensCameraFeatureEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b58388(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127431a4;
    func_0x000107c61148();
  }
  lVar1 = lVar6;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puVar2 = PTR_PTR_1126c8398;
  func_0x000107c610f4(PTR_PTR_1126c8398);
  func_0x000107c45bc0();
  puVar3 = PTR_PTR_1126ae720;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  puStack_58 = &UNK_106207198;
  puStack_50 = &UNK_110915e38;
  lStack_48 = lVar1;
  func_0x000107c61174(lVar1);
  func_0x000107c3e4fc(puVar3,param_2,&puStack_68);
  func_0x000107c61180();
  lVar6 = param_1;
  FUN_100b58558(param_1);
  func_0x000107c61180();
  lVar4 = lVar6;
  func_0x000107c4afa0();
  func_0x000107c61180();
  func_0x000107c5d4ec();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar6);
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_1127431b0);
  }
  func_0x000107c42c20(uVar5,param_2,puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lStack_48);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 100b584e4; end: 100b58557; -[SCLensCameraFeatureServices initWithCameraFeatureCatalog:] */

undefined1 * FUN_100b584e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701af0;
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



/* Entry: 100b58558; end: 100b5857b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b58558(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_1127431ac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b5857c; end: 100b58583; -[SCFeatureScopeLensCollectionsCarouselServices lensCollectionsCarouselFeatureMutableStream] */

undefined8 FUN_100b5857c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100b58584; end: 100b5858b; -[SCSharedFeatureLensCollectionsCarouselProvider updateLensCollectionsCarouselFeature:] */

void FUN_100b58584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}


