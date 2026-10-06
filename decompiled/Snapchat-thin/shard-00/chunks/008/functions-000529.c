/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a34454; end: 100a34657;  */

void FUN_100a34454(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffde) && (param_3 == -0x7ffffffef0e17cf0)) ||
       (func_0x000107c605b8(0xd000000000000022,0x800000010f1e8310,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53e40();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef0e17c50)) {
        uVar2 = 0xd00000000000001f;
        func_0x000107c605b8(0xd00000000000001f,0x800000010f1e83b0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DatpSystemScopeGraphBridge/SCSCLegacyBlizzardServicesSaberEntryPoint.swift"
                              ,0x4a,2,0x33,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a34658);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c583c4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a34658; end: 100a34663; -[SCSCLegacyBlizzardServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34658(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058378;
  func_0x000107c61428(param_1 + _DAT_113058378,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a34664; end: 100a346b7;  */

void FUN_100a34664(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a346b8; end: 100a346c3; -[SCSCLegacyBlizzardServicesSaberEntryPoint setDatpSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a346b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058380;
  func_0x000107c61428(param_1 + _DAT_113058380,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a346c4; end: 100a34727; -[SCSCLegacyBlizzardServicesSaberEntryPoint setSCLegacyBlizzardServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a346c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113058388;
  func_0x000107c61428(param_1 + _DAT_113058388,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a34728; end: 100a3474f; -[SCSCLegacyBlizzardServicesSaberEntryPoint begin] */

void FUN_100a34728(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a34750();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a34750; end: 100a348d3;  */

/* WARNING: Possible PIC construction at 0x000100a34850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a34860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a3487c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a34854) */
/* WARNING: Removing unreachable block (ram,0x000100a34864) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34750(void)

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
    func_0x000107c41368();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e1c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a34978();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113058270);
        *(undefined8 *)(lVar2 + _DAT_113057dd0) = uVar6;
        *(long *)(lVar2 + _DAT_113057dd8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113057dd8);
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



/* Entry: 100a348d4; end: 100a348df; -[SCSCLegacyBlizzardServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a348d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058378;
  func_0x000107c61428(param_1 + _DAT_113058378,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a348e0; end: 100a34923;  */

void FUN_100a348e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a34924; end: 100a3492f; -[SCSCLegacyBlizzardServicesSaberEntryPoint datpSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34924(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058380;
  func_0x000107c61428(param_1 + _DAT_113058380,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a34930; end: 100a34977; -[SCSCLegacyBlizzardServicesSaberEntryPoint sCLegacyBlizzardServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34930(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113058388;
  func_0x000107c61428(param_1 + _DAT_113058388,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a34978; end: 100a34997;  */

void FUN_100a34978(void)

{
  func_0x000107c61168(&PTR_PTR_1129865a0);
  return;
}



/* Entry: 100a34998; end: 100a34a17; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34998(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130540b8,0);
  func_0x000107c61614(param_1 + _DAT_1130540c0,0);
  *(undefined8 *)(param_1 + _DAT_1130540c8) = 0;
  *(undefined8 *)(param_1 + _DAT_1130540d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a34a18; end: 100a34ac3; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a34a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a34ac4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a34ac4; end: 100a34cc7;  */

void FUN_100a34ac4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e1a570)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000024,0x800000010f1e5a90,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0e1a540)) &&
           (func_0x000107c605b8(0xd00000000000002c,0x800000010f1e5ac0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CameraSystemScopeGraphBridge/SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint.swift"
                              ,0x59,2,0x36,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a34cc8);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c583c8();
        goto LAB_100a34b50;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c530c8();
  }
LAB_100a34b50:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a34cc8; end: 100a34cd3; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130540b8;
  func_0x000107c61428(param_1 + _DAT_1130540b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a34cd4; end: 100a34d27;  */

void FUN_100a34cd4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a34d28; end: 100a34d33; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint setCameraSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34d28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130540c0;
  func_0x000107c61428(param_1 + _DAT_1130540c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a34d34; end: 100a34d97; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint setSCLegacyCameraStartupCommandsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34d34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130540c8;
  func_0x000107c61428(param_1 + _DAT_1130540c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a34d98; end: 100a34dbf; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint begin] */

void FUN_100a34d98(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a34dc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a34dc0; end: 100a34f43;  */

/* WARNING: Possible PIC construction at 0x000100a34ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a34ed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a34eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a34ec4) */
/* WARNING: Removing unreachable block (ram,0x000100a34ed4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34dc0(void)

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
    func_0x000107c3f244();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e20();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a34fe8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113054010);
        *(undefined8 *)(lVar2 + _DAT_1130539f0) = uVar6;
        *(long *)(lVar2 + _DAT_1130539f8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130539f8);
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



/* Entry: 100a34f44; end: 100a34f4f; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34f44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130540b8;
  func_0x000107c61428(param_1 + _DAT_1130540b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a34f50; end: 100a34f93;  */

void FUN_100a34f50(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a34f94; end: 100a34f9f; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint cameraSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34f94(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130540c0;
  func_0x000107c61428(param_1 + _DAT_1130540c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a34fa0; end: 100a34fe7; -[SCSCLegacyCameraStartupCommandsServicesSaberEntryPoint sCLegacyCameraStartupCommandsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a34fa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130540c8;
  func_0x000107c61428(param_1 + _DAT_1130540c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a34fe8; end: 100a35007;  */

void FUN_100a34fe8(void)

{
  func_0x000107c61168(&PTR_PTR_112983c00);
  return;
}



/* Entry: 100a35008; end: 100a35087; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35008(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113050e40,0);
  func_0x000107c61614(param_1 + _DAT_113050e48,0);
  *(undefined8 *)(param_1 + _DAT_113050e50) = 0;
  *(undefined8 *)(param_1 + _DAT_113050e58) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a35088; end: 100a35133; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a35088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a35134(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a35134; end: 100a35337;  */

void FUN_100a35134(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdd) || (param_3 != -0x7ffffffef0e1c5d0)) {
      uVar2 = 0xd000000000000023;
      func_0x000107c605b8(0xd000000000000023,0x800000010f1e3a30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0e1c5a0)) &&
           (func_0x000107c605b8(0xd000000000000028,0x800000010f1e3a60,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ActivSystemScopeGraphBridge/SCSCLegacyPermissionRequestServicesSaberEntryPoint.swift"
                              ,0x54,2,0x49,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a35338);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c583ec();
        goto LAB_100a351c0;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c521a8();
  }
LAB_100a351c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a35338; end: 100a35343; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e40;
  func_0x000107c61428(param_1 + _DAT_113050e40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a35344; end: 100a35397;  */

void FUN_100a35344(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a35398; end: 100a353a3; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint setActivSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e48;
  func_0x000107c61428(param_1 + _DAT_113050e48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a353a4; end: 100a35407; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint setSCLegacyPermissionRequestServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a353a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113050e50;
  func_0x000107c61428(param_1 + _DAT_113050e50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a35408; end: 100a3542f; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint begin] */

void FUN_100a35408(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a35430();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a35430; end: 100a355b3;  */

/* WARNING: Possible PIC construction at 0x000100a35530: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a35540: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a3555c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a35534) */
/* WARNING: Removing unreachable block (ram,0x000100a35544) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35430(void)

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
    func_0x000107c3d020();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e44();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a35658();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113050d48);
        *(undefined8 *)(lVar2 + _DAT_11304f808) = uVar6;
        *(long *)(lVar2 + _DAT_11304f810) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11304f810);
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



/* Entry: 100a355b4; end: 100a355bf; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a355b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e40;
  func_0x000107c61428(param_1 + _DAT_113050e40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a355c0; end: 100a35603;  */

void FUN_100a355c0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a35604; end: 100a3560f; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint activSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35604(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e48;
  func_0x000107c61428(param_1 + _DAT_113050e48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a35610; end: 100a35657; -[SCSCLegacyPermissionRequestServicesSaberEntryPoint sCLegacyPermissionRequestServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35610(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113050e50;
  func_0x000107c61428(param_1 + _DAT_113050e50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a35658; end: 100a35677;  */

void FUN_100a35658(void)

{
  func_0x000107c61168(&PTR_PTR_112980ca0);
  return;
}



/* Entry: 100a35678; end: 100a356f7; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35678(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113056ed8,0);
  func_0x000107c61614(param_1 + _DAT_113056ee0,0);
  *(undefined8 *)(param_1 + _DAT_113056ee8) = 0;
  *(undefined8 *)(param_1 + _DAT_113056ef0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a356f8; end: 100a357a3; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a356f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a357a4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a357a4; end: 100a359a7;  */

void FUN_100a357a4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e18ae0)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f1e7520,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffda) || (param_3 != -0x7ffffffef0e18990)) &&
           (func_0x000107c605b8(0xd000000000000026,0x800000010f1e7670,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CofSystemScopeGraphBridge/SCSCLegacyPropertyHandlerServicesSaberEntryPoint.swift"
                              ,0x50,2,0x39,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a359a8);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c583f0();
        goto LAB_100a35830;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53550();
  }
LAB_100a35830:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a359a8; end: 100a359b3; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a359a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056ed8;
  func_0x000107c61428(param_1 + _DAT_113056ed8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a359b4; end: 100a35a07;  */

void FUN_100a359b4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a35a08; end: 100a35a13; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint setCofSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056ee0;
  func_0x000107c61428(param_1 + _DAT_113056ee0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a35a14; end: 100a35a77; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint setSCLegacyPropertyHandlerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35a14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113056ee8;
  func_0x000107c61428(param_1 + _DAT_113056ee8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a35a78; end: 100a35a9f; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint begin] */

void FUN_100a35a78(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a35aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a35aa0; end: 100a35c23;  */

/* WARNING: Possible PIC construction at 0x000100a35ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a35bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a35bcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a35ba4) */
/* WARNING: Removing unreachable block (ram,0x000100a35bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35aa0(void)

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
    func_0x000107c3fd28();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50e48();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a35cc8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113056da8);
        *(undefined8 *)(lVar2 + _DAT_113056698) = uVar6;
        *(long *)(lVar2 + _DAT_1130566a0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130566a0);
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



/* Entry: 100a35c24; end: 100a35c2f; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35c24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056ed8;
  func_0x000107c61428(param_1 + _DAT_113056ed8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a35c30; end: 100a35c73;  */

void FUN_100a35c30(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a35c74; end: 100a35c7f; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint cofSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35c74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056ee0;
  func_0x000107c61428(param_1 + _DAT_113056ee0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a35c80; end: 100a35cc7; -[SCSCLegacyPropertyHandlerServicesSaberEntryPoint sCLegacyPropertyHandlerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35c80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113056ee8;
  func_0x000107c61428(param_1 + _DAT_113056ee8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a35cc8; end: 100a35ce7;  */

void FUN_100a35cc8(void)

{
  func_0x000107c61168(&PTR_PTR_112985630);
  return;
}



/* Entry: 100a35ce8; end: 100a35cef;  */

void FUN_100a35ce8(undefined8 *param_1)

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



/* Entry: 100a35cf0; end: 100a35d43;  */

void FUN_100a35cf0(undefined8 *param_1)

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



/* Entry: 100a35d44; end: 100a35dc3; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a35d44(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113055fa8,0);
  func_0x000107c61614(param_1 + _DAT_113055fb0,0);
  *(undefined8 *)(param_1 + _DAT_113055fb8) = 0;
  *(undefined8 *)(param_1 + _DAT_113055fc0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a35dc4; end: 100a35e6f; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a35dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a35e70(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a35e70; end: 100a36073;  */

void FUN_100a35e70(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdf) || (param_3 != -0x7ffffffef0e19310)) {
      uVar2 = 0xd000000000000021;
      func_0x000107c605b8(0xd000000000000021,0x800000010f1e6cf0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002b;
        if (((param_2 != -0x2fffffffffffffd5) || (param_3 != -0x7ffffffef0e192e0)) &&
           (func_0x000107c605b8(0xd00000000000002b,0x800000010f1e6d20,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CntSystemScopeGraphBridge/SCSCNetworkConnectivityMonitorServicesSaberEntryPoint.swift"
                              ,0x55,2,0x37,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a36074);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c586b0();
        goto LAB_100a35efc;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53514();
  }
LAB_100a35efc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a36074; end: 100a3607f; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a36074(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113055fa8;
  func_0x000107c61428(param_1 + _DAT_113055fa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a36080; end: 100a360d3;  */

void FUN_100a36080(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a360d4; end: 100a360df; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint setCntSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a360d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113055fb0;
  func_0x000107c61428(param_1 + _DAT_113055fb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a360e0; end: 100a36143; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint setSCNetworkConnectivityMonitorServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a360e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113055fb8;
  func_0x000107c61428(param_1 + _DAT_113055fb8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a36144; end: 100a3616b; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint begin] */

void FUN_100a36144(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a3616c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a3616c; end: 100a362ef;  */

/* WARNING: Possible PIC construction at 0x000100a3626c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a3627c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a36298: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a36270) */
/* WARNING: Removing unreachable block (ram,0x000100a36280) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3616c(void)

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
    func_0x000107c3fca0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51108();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a36394();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113055ef8);
        *(undefined8 *)(lVar2 + _DAT_113055808) = uVar6;
        *(long *)(lVar2 + _DAT_113055810) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113055810);
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



/* Entry: 100a362f0; end: 100a362fb; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a362f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113055fa8;
  func_0x000107c61428(param_1 + _DAT_113055fa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a362fc; end: 100a3633f;  */

void FUN_100a362fc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a36340; end: 100a3634b; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint cntSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a36340(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113055fb0;
  func_0x000107c61428(param_1 + _DAT_113055fb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a3634c; end: 100a36393; -[SCSCNetworkConnectivityMonitorServicesSaberEntryPoint sCNetworkConnectivityMonitorServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a3634c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113055fb8;
  func_0x000107c61428(param_1 + _DAT_113055fb8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a36394; end: 100a363b3;  */

void FUN_100a36394(void)

{
  func_0x000107c61168(&PTR_PTR_112984e38);
  return;
}



/* Entry: 100a363b4; end: 100a36457;  */

undefined8 * FUN_100a363b4(undefined2 *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)0x280;
  func_0x000107c610a0();
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1004d2c58(0x10,0,0x41,&UNK_10f6d017d,0xc6);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *puVar3 = 0x278;
    puVar4 = puVar3 + 1;
    *puVar4 = *param_3;
    uVar2 = *param_1;
    uVar1 = *param_2;
    func_0x000107c60ee4(puVar3 + 2,600);
    *(undefined2 *)((long)puVar3 + 0x274) = 0;
    *(undefined2 *)((long)puVar3 + 0x276) = uVar2;
    *(undefined1 *)(puVar3 + 0x4f) = uVar1;
    *(undefined1 *)((long)puVar3 + 0x279) = 0;
    puVar3[0x4d] = 0;
    *(undefined4 *)(puVar3 + 0x4e) = 0;
  }
  return puVar4;
}



/* Entry: 100a36458; end: 100a36743;  */

undefined1 * FUN_100a36458(void)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  func_0x000100896e48();
  return (undefined1 *)&stack0x00000008;
}



/* Entry: 100a36744; end: 100a3676b;  */

undefined4 FUN_100a36744(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x24) - 1;
  if (uVar1 < 4) {
    return *(undefined4 *)(&UNK_10e52add0 + (ulong)uVar1 * 4);
  }
  return 0;
}



/* Entry: 100a3676c; end: 100a36783;  */

code * FUN_100a3676c(undefined8 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar1;
  long lVar2;
  
  FUN_100a36744();
  if (param_2 != 0) {
    ppuVar1 = &PTR_DAT_110c7c3c0;
    lVar2 = 0x12;
    do {
      if (*(int *)(ppuVar1 + -1) == param_2) {
        UNRECOVERED_JUMPTABLE = (code *)*ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x000100a367b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      ppuVar1 = ppuVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return (code *)0x0;
}



/* Entry: 100a36784; end: 100a367bb;  */

code * FUN_100a36784(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined **ppuVar1;
  long lVar2;
  
  if (param_1 != 0) {
    ppuVar1 = &PTR_DAT_110c7c3c0;
    lVar2 = 0x12;
    do {
      if (*(int *)(ppuVar1 + -1) == param_1) {
        UNRECOVERED_JUMPTABLE = (code *)*ppuVar1;
                    /* WARNING: Could not recover jumptable at 0x000100a367b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
      ppuVar1 = ppuVar1 + 4;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return (code *)0x0;
}



/* Entry: 100a367bc; end: 100a376d7;  */

void FUN_100a367bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100a367d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 0x50) + 0x78))(&stack0x00000010);
  return;
}



/* Entry: 100a376d8; end: 100a37757; -[SCSCNotificationDisplayServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a376d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305b680,0);
  func_0x000107c61614(param_1 + _DAT_11305b688,0);
  *(undefined8 *)(param_1 + _DAT_11305b690) = 0;
  *(undefined8 *)(param_1 + _DAT_11305b698) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a37758; end: 100a37803; -[SCSCNotificationDisplayServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a37758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a37804(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a37804; end: 100a37a07;  */

void FUN_100a37804(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e155b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f1eaa50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffdc) || (param_3 != -0x7ffffffef0e15580)) &&
           (func_0x000107c605b8(0xd000000000000024,0x800000010f1eaa80,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PushSystemScopeGraphBridge/SCSCNotificationDisplayServicesSaberEntryPoint.swift"
                              ,0x4f,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a37a08);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c586c4();
        goto LAB_100a37890;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a50();
  }
LAB_100a37890:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a37a08; end: 100a37a13; -[SCSCNotificationDisplayServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a37a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b680;
  func_0x000107c61428(param_1 + _DAT_11305b680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a37a14; end: 100a37a67;  */

void FUN_100a37a14(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a37a68; end: 100a37a73; -[SCSCNotificationDisplayServicesSaberEntryPoint setPushSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a37a68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b688;
  func_0x000107c61428(param_1 + _DAT_11305b688,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a37a74; end: 100a37ad7; -[SCSCNotificationDisplayServicesSaberEntryPoint setSCNotificationDisplayServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a37a74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b690;
  func_0x000107c61428(param_1 + _DAT_11305b690,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a37ad8; end: 100a37aff; -[SCSCNotificationDisplayServicesSaberEntryPoint begin] */

void FUN_100a37ad8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a37b00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a37b00; end: 100a37c83;  */

/* WARNING: Possible PIC construction at 0x000100a37c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a37c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a37c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a37c04) */
/* WARNING: Removing unreachable block (ram,0x000100a37c14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a37b00(void)

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
    func_0x000107c4f6d0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5111c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a37d28();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11305b5c8);
        *(undefined8 *)(lVar2 + _DAT_11305b298) = uVar6;
        *(long *)(lVar2 + _DAT_11305b2a0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11305b2a0);
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



/* Entry: 100a37c84; end: 100a37c8f; -[SCSCNotificationDisplayServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a37c84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b680;
  func_0x000107c61428(param_1 + _DAT_11305b680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a37c90; end: 100a37cd3;  */

void FUN_100a37c90(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a37cd4; end: 100a37cdf; -[SCSCNotificationDisplayServicesSaberEntryPoint pushSystemScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a37cd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b688;
  func_0x000107c61428(param_1 + _DAT_11305b688,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a37ce0; end: 100a37d27; -[SCSCNotificationDisplayServicesSaberEntryPoint sCNotificationDisplayServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a37ce0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11305b690;
  func_0x000107c61428(param_1 + _DAT_11305b690,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a37d28; end: 100a37d47;  */

void FUN_100a37d28(void)

{
  func_0x000107c61168(&PTR_PTR_112989b60);
  return;
}



/* Entry: 100a37d48; end: 100a37dbf;  */

undefined8 FUN_100a37d48(long param_1,undefined8 *param_2,char *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  
  lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x88);
  if (lVar4 != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x90);
    puVar1 = puVar3 + lVar4 * 4;
    do {
      if (param_4 == puVar3[1]) {
        if (param_4 == 0) {
LAB_100a37db0:
          uVar2 = puVar3[3];
          *param_2 = puVar3[2];
          param_2[1] = uVar2;
          return 1;
        }
        pcVar5 = (char *)*puVar3;
        pcVar6 = param_3;
        lVar4 = param_4;
        while( true ) {
          lVar4 = lVar4 + -1;
          if (*pcVar6 != *pcVar5) break;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
          if (lVar4 == 0) goto LAB_100a37db0;
        }
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
  }
  return 0;
}



/* Entry: 100a37dc0; end: 100a38373;  */

void FUN_100a37dc0(void)

{
  func_0x000100a2b4dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 100a38374; end: 100a383f3; -[SCSCNotificationPermissionServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a38374(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11305b6c8,0);
  func_0x000107c61614(param_1 + _DAT_11305b6d0,0);
  *(undefined8 *)(param_1 + _DAT_11305b6d8) = 0;
  *(undefined8 *)(param_1 + _DAT_11305b6e0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a383f4; end: 100a3849f; -[SCSCNotificationPermissionServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a383f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a384a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a384a0; end: 100a386a3;  */

void FUN_100a384a0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef0e155b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000022,0x800000010f1eaa50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000027;
        if (((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e15500)) &&
           (func_0x000107c605b8(0xd000000000000027,0x800000010f1eab00,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PushSystemScopeGraphBridge/SCSCNotificationPermissionServicesSaberEntryPoint.swift"
                              ,0x52,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a386a4);
          (*pcVar1)();
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c586c8();
        goto LAB_100a3852c;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57a50();
  }
LAB_100a3852c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a386a4; end: 100a386af; -[SCSCNotificationPermissionServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a386a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b6c8;
  func_0x000107c61428(param_1 + _DAT_11305b6c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a386b0; end: 100a38703;  */

void FUN_100a386b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a38704; end: 100a3870f; -[SCSCNotificationPermissionServicesSaberEntryPoint setPushSystemScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a38704(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b6d0;
  func_0x000107c61428(param_1 + _DAT_11305b6d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a38710; end: 100a38773; -[SCSCNotificationPermissionServicesSaberEntryPoint setSCNotificationPermissionServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a38710(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11305b6d8;
  func_0x000107c61428(param_1 + _DAT_11305b6d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a38774; end: 100a3879b; -[SCSCNotificationPermissionServicesSaberEntryPoint begin] */

void FUN_100a38774(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a3879c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


