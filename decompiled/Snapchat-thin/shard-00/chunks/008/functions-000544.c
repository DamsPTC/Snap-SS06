/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100a6c290; end: 100a6c413;  */

/* WARNING: Possible PIC construction at 0x000100a6c390: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6c3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6c3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a6c394) */
/* WARNING: Removing unreachable block (ram,0x000100a6c3a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c290(void)

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
    func_0x000107c4f1d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c511a0();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a6c4b8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_1130432f0);
        *(undefined8 *)(lVar2 + _DAT_113042a28) = uVar6;
        *(long *)(lVar2 + _DAT_113042a30) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113042a30);
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



/* Entry: 100a6c414; end: 100a6c41f; -[SCSCPreviewCameraSourceOverlayServiceSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c414(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043408;
  func_0x000107c61428(param_1 + _DAT_113043408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6c420; end: 100a6c463;  */

void FUN_100a6c420(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a6c464; end: 100a6c46f; -[SCSCPreviewCameraSourceOverlayServiceSaberEntryPoint previewUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c464(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043410;
  func_0x000107c61428(param_1 + _DAT_113043410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6c470; end: 100a6c4b7; -[SCSCPreviewCameraSourceOverlayServiceSaberEntryPoint sCPreviewCameraSourceOverlayServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c470(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043418;
  func_0x000107c61428(param_1 + _DAT_113043418,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a6c4b8; end: 100a6c4d7;  */

void FUN_100a6c4b8(void)

{
  func_0x000107c61168(&PTR_PTR_1129799a8);
  return;
}



/* Entry: 100a6c4d8; end: 100a6c557; -[SCSCPreviewVideoProviderServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c4d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113043450,0);
  func_0x000107c61614(param_1 + _DAT_113043458,0);
  *(undefined8 *)(param_1 + _DAT_113043460) = 0;
  *(undefined8 *)(param_1 + _DAT_113043468) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a6c558; end: 100a6c603; -[SCSCPreviewVideoProviderServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a6c558(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a6c604(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a6c604; end: 100a6c807;  */

void FUN_100a6c604(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef0e24e00)) ||
       (func_0x000107c605b8(0xd00000000000002a,0x800000010f1db200,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57804();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e24cd0)) {
        uVar2 = 0xd000000000000025;
        func_0x000107c605b8(0xd000000000000025,0x800000010f1db330,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PreviewUserSessionScopeGraphBridge/SCSCPreviewVideoProviderServicesSaberEntryPoint.swift"
                              ,0x58,2,0x3b,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6c808);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58794();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a6c808; end: 100a6c813; -[SCSCPreviewVideoProviderServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c808(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113043450;
  func_0x000107c61428(param_1 + _DAT_113043450,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6c814; end: 100a6c867;  */

void FUN_100a6c814(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6c868; end: 100a6c873; -[SCSCPreviewVideoProviderServicesSaberEntryPoint setPreviewUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c868(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113043458;
  func_0x000107c61428(param_1 + _DAT_113043458,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6c874; end: 100a6c8d7; -[SCSCPreviewVideoProviderServicesSaberEntryPoint setSCPreviewVideoProviderServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c874(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113043460;
  func_0x000107c61428(param_1 + _DAT_113043460,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a6c8d8; end: 100a6c8ff; -[SCSCPreviewVideoProviderServicesSaberEntryPoint begin] */

void FUN_100a6c8d8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a6c900();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a6c900; end: 100a6ca83;  */

/* WARNING: Possible PIC construction at 0x000100a6ca00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6ca10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6ca2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a6ca04) */
/* WARNING: Removing unreachable block (ram,0x000100a6ca14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6c900(void)

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
    func_0x000107c4f1d4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c511ec();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a6cb28();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_1130432f8);
        *(undefined8 *)(lVar2 + _DAT_113042a60) = uVar6;
        *(long *)(lVar2 + _DAT_113042a68) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113042a68);
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



/* Entry: 100a6ca84; end: 100a6ca8f; -[SCSCPreviewVideoProviderServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ca84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043450;
  func_0x000107c61428(param_1 + _DAT_113043450,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6ca90; end: 100a6cad3;  */

void FUN_100a6ca90(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a6cad4; end: 100a6cadf; -[SCSCPreviewVideoProviderServicesSaberEntryPoint previewUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6cad4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043458;
  func_0x000107c61428(param_1 + _DAT_113043458,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6cae0; end: 100a6cb27; -[SCSCPreviewVideoProviderServicesSaberEntryPoint sCPreviewVideoProviderServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6cae0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113043460;
  func_0x000107c61428(param_1 + _DAT_113043460,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a6cb28; end: 100a6cb47;  */

void FUN_100a6cb28(void)

{
  func_0x000107c61168(&PTR_PTR_112979a70);
  return;
}



/* Entry: 100a6cb48; end: 100a6cbc7; -[SCSCSecurityServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6cb48(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113044358,0);
  func_0x000107c61614(param_1 + _DAT_113044360,0);
  *(undefined8 *)(param_1 + _DAT_113044368) = 0;
  *(undefined8 *)(param_1 + _DAT_113044370) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a6cbc8; end: 100a6cc73; -[SCSCSecurityServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a6cbc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a6cc74(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a6cc74; end: 100a6ce77;  */

void FUN_100a6cc74(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffd6) && (param_3 == -0x7ffffffef0e241c0)) ||
       (func_0x000107c605b8(0xd00000000000002a,0x800000010f1dbe40,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5786c();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0e240a0)) {
        uVar2 = 0xd000000000000019;
        func_0x000107c605b8(0xd000000000000019,0x800000010f1dbf60,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "PrivengUserSessionScopeGraphBridge/SCSCSecurityServicesSaberEntryPoint.swift"
                              ,0x4c,2,0x31,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6ce78);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58824();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a6ce78; end: 100a6ce83; -[SCSCSecurityServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ce78(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044358;
  func_0x000107c61428(param_1 + _DAT_113044358,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6ce84; end: 100a6ced7;  */

void FUN_100a6ce84(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6ced8; end: 100a6cee3; -[SCSCSecurityServicesSaberEntryPoint setPrivengUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ced8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044360;
  func_0x000107c61428(param_1 + _DAT_113044360,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6cee4; end: 100a6cf47; -[SCSCSecurityServicesSaberEntryPoint setSCSecurityServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6cee4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113044368;
  func_0x000107c61428(param_1 + _DAT_113044368,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a6cf48; end: 100a6cf6f; -[SCSCSecurityServicesSaberEntryPoint begin] */

void FUN_100a6cf48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a6cf70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a6cf70; end: 100a6d0f3;  */

/* WARNING: Possible PIC construction at 0x000100a6d070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6d080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6d09c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a6d074) */
/* WARNING: Removing unreachable block (ram,0x000100a6d084) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6cf70(void)

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
    func_0x000107c4f28c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5127c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a6d198();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_113044230);
        *(undefined8 *)(lVar2 + _DAT_1130441d8) = uVar6;
        *(long *)(lVar2 + _DAT_1130441e0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_1130441e0);
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



/* Entry: 100a6d0f4; end: 100a6d0ff; -[SCSCSecurityServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d0f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044358;
  func_0x000107c61428(param_1 + _DAT_113044358,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6d100; end: 100a6d143;  */

void FUN_100a6d100(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a6d144; end: 100a6d14f; -[SCSCSecurityServicesSaberEntryPoint privengUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d144(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044360;
  func_0x000107c61428(param_1 + _DAT_113044360,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6d150; end: 100a6d197; -[SCSCSecurityServicesSaberEntryPoint sCSecurityServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d150(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113044368;
  func_0x000107c61428(param_1 + _DAT_113044368,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a6d198; end: 100a6d1b7;  */

void FUN_100a6d198(void)

{
  func_0x000107c61168(&PTR_PTR_11297b400);
  return;
}



/* Entry: 100a6d1b8; end: 100a6d237; -[SCSCSnapProServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d1b8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301ec58,0);
  func_0x000107c61614(param_1 + _DAT_11301ec60,0);
  *(undefined8 *)(param_1 + _DAT_11301ec68) = 0;
  *(undefined8 *)(param_1 + _DAT_11301ec70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a6d238; end: 100a6d2e3; -[SCSCSnapProServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a6d238(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a6d2e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a6d2e4; end: 100a6d4e7;  */

void FUN_100a6d2e4(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd00000000000002b;
    if (((param_2 == -0x2fffffffffffffd5) && (param_3 == -0x7ffffffef0e3b170)) ||
       (func_0x000107c605b8(0xd00000000000002b,0x800000010f1c4e90,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53b50();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe8) || (param_3 != -0x7ffffffef0e3b0a0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000018,0x800000010f1c4f60,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "CreatorsUserSessionScopeGraphBridge/SCSCSnapProServicesSaberEntryPoint.swift"
                              ,0x4c,2,0x30,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6d4e8);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c588a8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a6d4e8; end: 100a6d4f3; -[SCSCSnapProServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d4e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ec58;
  func_0x000107c61428(param_1 + _DAT_11301ec58,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6d4f4; end: 100a6d547;  */

void FUN_100a6d4f4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6d548; end: 100a6d553; -[SCSCSnapProServicesSaberEntryPoint setCreatorsUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d548(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ec60;
  func_0x000107c61428(param_1 + _DAT_11301ec60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6d554; end: 100a6d5b7; -[SCSCSnapProServicesSaberEntryPoint setSCSnapProServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d554(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ec68;
  func_0x000107c61428(param_1 + _DAT_11301ec68,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a6d5b8; end: 100a6d5df; -[SCSCSnapProServicesSaberEntryPoint begin] */

void FUN_100a6d5b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a6d5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a6d5e0; end: 100a6d763;  */

/* WARNING: Possible PIC construction at 0x000100a6d6e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6d6f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6d70c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a6d6e4) */
/* WARNING: Removing unreachable block (ram,0x000100a6d6f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d5e0(void)

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
    func_0x000107c40d64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51300();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a6d808();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11301eb78);
        *(undefined8 *)(lVar2 + _DAT_11301eb28) = uVar6;
        *(long *)(lVar2 + _DAT_11301eb30) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11301eb30);
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



/* Entry: 100a6d764; end: 100a6d76f; -[SCSCSnapProServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d764(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ec58;
  func_0x000107c61428(param_1 + _DAT_11301ec58,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6d770; end: 100a6d7b3;  */

void FUN_100a6d770(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a6d7b4; end: 100a6d7bf; -[SCSCSnapProServicesSaberEntryPoint creatorsUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d7b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ec60;
  func_0x000107c61428(param_1 + _DAT_11301ec60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6d7c0; end: 100a6d807; -[SCSCSnapProServicesSaberEntryPoint sCSnapProServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6d7c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ec68;
  func_0x000107c61428(param_1 + _DAT_11301ec68,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a6d808; end: 100a6d827;  */

void FUN_100a6d808(void)

{
  func_0x000107c61168(&PTR_PTR_112957ce8);
  return;
}



/* Entry: 100a6d828; end: 100a6dd9f;  */

void FUN_100a6d828(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if ((*(ulong *)(param_1 + 0x28) & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(*(long *)(*(long *)(param_1 + 0x30) + ((long)*(ulong *)(param_1 + 0x28) >> 1)) +
                   ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
  }
                    /* WARNING: Could not recover jumptable at 0x000100a6d840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 100a6dda0; end: 100a6de1f; -[SCSCSnapVideoFilterServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6dda0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11303b0f0,0);
  func_0x000107c61614(param_1 + _DAT_11303b0f8,0);
  *(undefined8 *)(param_1 + _DAT_11303b100) = 0;
  *(undefined8 *)(param_1 + _DAT_11303b108) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a6de20; end: 100a6decb; -[SCSCSnapVideoFilterServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a6de20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a6decc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a6decc; end: 100a6e0d3;  */

void FUN_100a6decc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef0e29f20)) {
      uVar2 = 0xd000000000000025;
      func_0x000107c605b8(0xd000000000000025,0x800000010f1d60e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef0e29dd0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000020,0x800000010f1d6230,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "MeUserSessionScopeGraphBridge/SCSCSnapVideoFilterServicesSaberEntryPoint.swift"
                                ,0x4e,2,0x43,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6e0d4);
            (*pcVar1)();
          }
        }
        FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588b8();
        goto LAB_100a6df58;
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c563d4();
  }
LAB_100a6df58:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a6e0d4; end: 100a6e0df; -[SCSCSnapVideoFilterServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e0d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303b0f0;
  func_0x000107c61428(param_1 + _DAT_11303b0f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6e0e0; end: 100a6e133;  */

void FUN_100a6e0e0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6e134; end: 100a6e13f; -[SCSCSnapVideoFilterServicesSaberEntryPoint setMeUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e134(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303b0f8;
  func_0x000107c61428(param_1 + _DAT_11303b0f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6e140; end: 100a6e1a3; -[SCSCSnapVideoFilterServicesSaberEntryPoint setSCSnapVideoFilterServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e140(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11303b100;
  func_0x000107c61428(param_1 + _DAT_11303b100,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a6e1a4; end: 100a6e1cb; -[SCSCSnapVideoFilterServicesSaberEntryPoint begin] */

void FUN_100a6e1a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a6e1cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a6e1cc; end: 100a6e34f;  */

/* WARNING: Possible PIC construction at 0x000100a6e2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6e2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6e2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a6e2d0) */
/* WARNING: Removing unreachable block (ram,0x000100a6e2e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e1cc(void)

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
    func_0x000107c4c920();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51310();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a6e3f4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11303af88);
        *(undefined8 *)(lVar2 + _DAT_113039e90) = uVar6;
        *(long *)(lVar2 + _DAT_113039e98) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_113039e98);
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



/* Entry: 100a6e350; end: 100a6e35b; -[SCSCSnapVideoFilterServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e350(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303b0f0;
  func_0x000107c61428(param_1 + _DAT_11303b0f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6e35c; end: 100a6e39f;  */

void FUN_100a6e35c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a6e3a0; end: 100a6e3ab; -[SCSCSnapVideoFilterServicesSaberEntryPoint meUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e3a0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303b0f8;
  func_0x000107c61428(param_1 + _DAT_11303b0f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6e3ac; end: 100a6e3f3; -[SCSCSnapVideoFilterServicesSaberEntryPoint sCSnapVideoFilterServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e3ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11303b100;
  func_0x000107c61428(param_1 + _DAT_11303b100,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a6e3f4; end: 100a6e413;  */

void FUN_100a6e3f4(void)

{
  func_0x000107c61168(&PTR_PTR_1129734c0);
  return;
}



/* Entry: 100a6e414; end: 100a6e493; -[SCSCSnapchatterServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e414(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113020600,0);
  func_0x000107c61614(param_1 + _DAT_113020608,0);
  *(undefined8 *)(param_1 + _DAT_113020610) = 0;
  *(undefined8 *)(param_1 + _DAT_113020618) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a6e494; end: 100a6e53f; -[SCSCSnapchatterServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a6e494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a6e540(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a6e540; end: 100a6e743;  */

void FUN_100a6e540(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000027;
    if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0e3a2c0)) ||
       (func_0x000107c605b8(0xd000000000000027,0x800000010f1c5d40,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c54cc0();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef0e3a170)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000001c,0x800000010f1c5e90,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "FrndUserSessionScopeGraphBridge/SCSCSnapchatterServicesSaberEntryPoint.swift"
                              ,0x4c,2,0x49,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6e744);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c588bc();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a6e744; end: 100a6e74f; -[SCSCSnapchatterServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e744(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113020600;
  func_0x000107c61428(param_1 + _DAT_113020600,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6e750; end: 100a6e7a3;  */

void FUN_100a6e750(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6e7a4; end: 100a6e7af; -[SCSCSnapchatterServicesSaberEntryPoint setFrndUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e7a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113020608;
  func_0x000107c61428(param_1 + _DAT_113020608,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6e7b0; end: 100a6e813; -[SCSCSnapchatterServicesSaberEntryPoint setSCSnapchatterServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e7b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113020610;
  func_0x000107c61428(param_1 + _DAT_113020610,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a6e814; end: 100a6e83b; -[SCSCSnapchatterServicesSaberEntryPoint begin] */

void FUN_100a6e814(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a6e83c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a6e83c; end: 100a6e9bf;  */

/* WARNING: Possible PIC construction at 0x000100a6e93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6e94c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6e968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a6e940) */
/* WARNING: Removing unreachable block (ram,0x000100a6e950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e83c(void)

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
    func_0x000107c43b18();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51314();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a6ea64();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_1130204c0);
        *(undefined8 *)(lVar2 + _DAT_11301f040) = uVar6;
        *(long *)(lVar2 + _DAT_11301f048) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11301f048);
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



/* Entry: 100a6e9c0; end: 100a6e9cb; -[SCSCSnapchatterServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6e9c0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113020600;
  func_0x000107c61428(param_1 + _DAT_113020600,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6e9cc; end: 100a6ea0f;  */

void FUN_100a6e9cc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a6ea10; end: 100a6ea1b; -[SCSCSnapchatterServicesSaberEntryPoint frndUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ea10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113020608;
  func_0x000107c61428(param_1 + _DAT_113020608,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6ea1c; end: 100a6ea63; -[SCSCSnapchatterServicesSaberEntryPoint sCSnapchatterServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ea1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113020610;
  func_0x000107c61428(param_1 + _DAT_113020610,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a6ea64; end: 100a6ea83;  */

void FUN_100a6ea64(void)

{
  func_0x000107c61168(&PTR_PTR_112958770);
  return;
}



/* Entry: 100a6ea84; end: 100a6ead3;  */

long FUN_100a6ea84(void)

{
  ulong uVar1;
  long unaff_x19;
  
  if (*(long *)(unaff_x19 + 0x80) != 0) {
    uVar1 = *(ulong *)(unaff_x19 + 0x68);
    if (uVar1 < *(ulong *)(unaff_x19 + 0x60)) {
      uVar1 = *(long *)(unaff_x19 + 0x78) + uVar1;
    }
    return *(long *)(unaff_x19 + 0x88) + uVar1 + ~*(ulong *)(unaff_x19 + 0x60);
  }
  return -1;
}



/* Entry: 100a6ead4; end: 100a6eb53; -[SCSCSpectrumServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ead4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_11301ee90,0);
  func_0x000107c61614(param_1 + _DAT_11301ee98,0);
  *(undefined8 *)(param_1 + _DAT_11301eea0) = 0;
  *(undefined8 *)(param_1 + _DAT_11301eea8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a6eb54; end: 100a6ebff; -[SCSCSpectrumServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a6eb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100a6ec00(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a6ec00; end: 100a6ee03;  */

void FUN_100a6ec00(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000027;
    if (((param_2 == -0x2fffffffffffffd9) && (param_3 == -0x7ffffffef0e3ae60)) ||
       (func_0x000107c605b8(0xd000000000000027,0x800000010f1c51a0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53e48();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef0e3ae30)) {
        uVar2 = 0xd000000000000019;
        func_0x000107c605b8(0xd000000000000019,0x800000010f1c51d0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "DatpUserSessionScopeGraphBridge/SCSCSpectrumServicesSaberEntryPoint.swift"
                              ,0x49,2,0x30,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a6ee04);
          (*pcVar1)();
        }
      }
      FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58990();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100a6ee04; end: 100a6ee0f; -[SCSCSpectrumServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ee04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ee90;
  func_0x000107c61428(param_1 + _DAT_11301ee90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6ee10; end: 100a6ee63;  */

void FUN_100a6ee10(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6ee64; end: 100a6ee6f; -[SCSCSpectrumServicesSaberEntryPoint setDatpUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ee64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301ee98;
  func_0x000107c61428(param_1 + _DAT_11301ee98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a6ee70; end: 100a6eed3; -[SCSCSpectrumServicesSaberEntryPoint setSCSpectrumServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6ee70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11301eea0;
  func_0x000107c61428(param_1 + _DAT_11301eea0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100a6eed4; end: 100a6eefb; -[SCSCSpectrumServicesSaberEntryPoint begin] */

void FUN_100a6eed4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100a6eefc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100a6eefc; end: 100a6f07f;  */

/* WARNING: Possible PIC construction at 0x000100a6effc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6f00c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100a6f028: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100a6f000) */
/* WARNING: Removing unreachable block (ram,0x000100a6f010) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6eefc(void)

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
    func_0x000107c41370();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c513e8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_100a6f124();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_11301edf8);
        *(undefined8 *)(lVar2 + _DAT_11301ecd8) = uVar6;
        *(long *)(lVar2 + _DAT_11301ece0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_11301ece0);
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



/* Entry: 100a6f080; end: 100a6f08b; -[SCSCSpectrumServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6f080(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ee90;
  func_0x000107c61428(param_1 + _DAT_11301ee90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6f08c; end: 100a6f0cf;  */

void FUN_100a6f08c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100a6f0d0; end: 100a6f0db; -[SCSCSpectrumServicesSaberEntryPoint datpUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6f0d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301ee98;
  func_0x000107c61428(param_1 + _DAT_11301ee98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100a6f0dc; end: 100a6f123; -[SCSCSpectrumServicesSaberEntryPoint sCSpectrumServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a6f0dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_11301eea0;
  func_0x000107c61428(param_1 + _DAT_11301eea0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100a6f124; end: 100a6f143;  */

void FUN_100a6f124(void)

{
  func_0x000107c61168(&PTR_PTR_1129581a8);
  return;
}



/* Entry: 100a6f144; end: 100a714a3;  */

long * FUN_100a6f144(long *param_1,long *param_2)

{
  long *plVar1;
  long unaff_x19;
  
  if (-1 < (long)param_2) {
    plVar1 = (long *)((param_1[2] - *param_1) * 2);
    if (plVar1 < param_2 || (long)plVar1 - (long)param_2 == 0) {
      plVar1 = param_2;
    }
    if (0x3ffffffffffffffe < (ulong)(param_1[2] - *param_1)) {
      plVar1 = (long *)0x7fffffffffffffff;
    }
    return plVar1;
  }
  func_0x000107c35c94();
  plVar1 = *(long **)(unaff_x19 + 0xf58);
                    /* WARNING: Could not recover jumptable at 0x000100a6f18c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))();
  return plVar1;
}



/* Entry: 100a714a4; end: 100a71503; -[SCSCUserSessionScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a714a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112db38e0,0);
  *(undefined8 *)(param_1 + _DAT_112db38e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100a71504; end: 100a71e9b;  */

void FUN_100a71504(void)

{
  return;
}



/* Entry: 100a71e9c; end: 100a71ebb;  */

void FUN_100a71e9c(long param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 8);
  for (; param_2 != param_3; param_2 = param_2 + 1) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
  }
  *(undefined1 **)(param_1 + 8) = puVar1;
  return;
}



/* Entry: 100a71ebc; end: 100a71ec7;  */

undefined1  [16] FUN_100a71ebc(void)

{
  long unaff_x29;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x29 + -0xd8;
  auVar1._0_8_ = &stack0x000000e0;
  return auVar1;
}



/* Entry: 100a71ec8; end: 100a72093; -[SCSCUserSessionScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_100a71ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000100a71f74(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100a72094; end: 100a720eb; -[SCSCUserSessionScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100a72094(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112db38e0;
  func_0x000107c61428(param_1 + _DAT_112db38e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100a720ec; end: 100a72327;  */

ulong FUN_100a720ec(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 extraout_x8;
  long *extraout_x10;
  ulong unaff_x26;
  long unaff_x29;
  long alStack_128 [3];
  undefined1 auStack_110 [24];
  long *aplStack_f8 [6];
  undefined8 *puStack_c8;
  long lStack_c0;
  long alStack_98 [6];
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_38;
  
  uVar13 = unaff_x29 - 0xa8;
  lVar9 = param_1;
  func_0x0001009ec1f0();
  uVar8 = *(char *)(lVar9 + 0x28) == '\x01';
  uStack_38 = extraout_x8;
  if ((bool)uVar8) {
    func_0x000107c37f48();
    puVar11 = &UNK_10f4ef250;
LAB_100a72174:
    func_0x00010084b6d8(&uStack_68,puVar11,alStack_98);
    func_0x000107c37ef4();
    func_0x000107c60ca0(&uStack_68);
    plVar12 = alStack_98;
  }
  else {
    *(undefined1 *)(param_1 + 0x28) = 1;
    lVar9 = param_1 + 8;
    uVar10 = uVar13;
    func_0x0001009fc90c();
    if ((uVar10 & 1) == 0) {
      func_0x000107c37f48();
      puVar11 = &UNK_10f4ef263;
      goto LAB_100a72174;
    }
    lVar14 = *(long *)(uVar13 + 8);
    lVar3 = *(long *)(uVar13 + 0x10);
    cVar6 = SBORROW8(lVar14,lVar3);
    cVar7 = lVar14 - lVar3 < 0;
    uVar8 = lVar14 == lVar3;
    if ((bool)uVar8) {
      uVar13 = 1;
      goto LAB_100a7219c;
    }
    func_0x000107c37f44();
    lVar14 = *(long *)(uVar13 + 8) - *(long *)(uVar13 + 0x10);
    plVar12 = alStack_98;
    uStack_68 = uVar10;
    lStack_60 = lVar9;
    func_0x0001009fd800();
    func_0x000107c37f40();
    puStack_c8 = plVar12;
    lStack_c0 = lVar14;
    func_0x000107c2f2e0(alStack_128,param_1,0);
    func_0x000107c37f00();
    aplStack_f8[0] = extraout_x10;
    if (cVar7 == cVar6) {
      aplStack_f8[0] = alStack_128;
    }
    func_0x000107c2d0b4(auStack_110,&uStack_68,alStack_98,&puStack_c8,aplStack_f8);
    func_0x000107c37ef4();
    func_0x000107c37f3c();
    plVar12 = alStack_128;
  }
  func_0x000107c60ca0(plVar12);
  uVar13 = 0;
LAB_100a7219c:
  func_0x0001009ed79c(uStack_38,uVar13);
  if (!(bool)uVar8) {
    func_0x000107c60e78();
    iVar4 = *(int *)(alStack_128[0] + 4);
    bVar5 = unaff_x26 < 0x15;
    if (iVar4 < 0x2f) {
      bVar5 = unaff_x26 == 8;
    }
    uVar2 = 1;
    if (iVar4 != 999) {
      uVar2 = (uint)bVar5;
    }
    uVar1 = 1;
    if (iVar4 != 0) {
      uVar1 = uVar2;
    }
    uVar2 = 0;
    if (unaff_x26 < 0x100) {
      uVar2 = uVar1;
    }
    return (ulong)uVar2;
  }
  return uVar13;
}


