/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fc8b58; end: 101fc8b63; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint setSCCameraUIScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8b58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c658;
  func_0x000107c61428(param_1 + _DAT_112e4c658,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc8b64; end: 101fc8bab; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint addToStoryCameraScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8b64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c660;
  func_0x000107c61428(param_1 + _DAT_112e4c660,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc8bac; end: 101fc8bb7; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint setAddToStoryCameraScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8bac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c660;
  func_0x000107c61428(param_1 + _DAT_112e4c660,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc8bb8; end: 101fc8c17;  */

void FUN_101fc8bb8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101fc8c18; end: 101fc8dd3;  */

/* WARNING: Possible PIC construction at 0x000101fc8d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc8d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc8d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc8da8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc8d68) */
/* WARNING: Removing unreachable block (ram,0x000101fc8d58) */
/* WARNING: Removing unreachable block (ram,0x000101fc8d34) */
/* WARNING: Removing unreachable block (ram,0x000101fc8dac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc8c18(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = unaff_x20;
  func_0x000107c50b40();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3d908();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_101fc7fec();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_101fc841c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc8dd4);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e4c538) = lVar5;
      *(long *)(lVar3 + _DAT_112e4c540) = unaff_x20;
      lStack_80 = lVar3;
      lStack_78 = lVar4;
      func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101fc8dd4; end: 101fc8dfb; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101fc8dd4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc8c18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc8dfc; end: 101fc8e3f; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint end] */

void FUN_101fc8dfc(undefined8 param_1)

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



/* Entry: 101fc8e40; end: 101fc9043;  */

void FUN_101fc8e40(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef0faf8f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010f050710,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0faeea0)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f051160,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AddToStoryCameraScopeGraphBridge/SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x58,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc9044);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c524c4();
        goto LAB_101fc8ecc;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c580e8();
  }
LAB_101fc8ecc:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc9044; end: 101fc90ef; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc9044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc8e40(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc90f0; end: 101fc9167; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc90f0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c650,0);
  *(undefined8 *)(param_1 + _DAT_112e4c658) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4c660) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4c668) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc9168; end: 101fc919b;  */

void FUN_101fc9168(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc919c; end: 101fc91f3; -[SCAddToStoryCameraScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc91c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc91cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc919c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c650);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c658));
  return;
}



/* Entry: 101fc91f4; end: 101fc9213;  */

void FUN_101fc91f4(void)

{
  func_0x000107c61168(&PTR_PTR_112812e50);
  return;
}



/* Entry: 101fc9214; end: 101fc921f; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9214(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c698;
  func_0x000107c61428(param_1 + _DAT_112e4c698,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc9220; end: 101fc922b; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9220(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c698;
  func_0x000107c61428(param_1 + _DAT_112e4c698,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc922c; end: 101fc9237; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint addToStoryCameraScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc922c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c6a0;
  func_0x000107c61428(param_1 + _DAT_112e4c6a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc9238; end: 101fc927b;  */

void FUN_101fc9238(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101fc927c; end: 101fc9287; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint setAddToStoryCameraScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc927c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c6a0;
  func_0x000107c61428(param_1 + _DAT_112e4c6a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc9288; end: 101fc92db;  */

void FUN_101fc9288(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc92dc; end: 101fc9323; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint sCAddToStoryCameraScopedCameraFeatureServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc92dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c6a8;
  func_0x000107c61428(param_1 + _DAT_112e4c6a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fc9324; end: 101fc9387; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint setSCAddToStoryCameraScopedCameraFeatureServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9324(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c6a8;
  func_0x000107c61428(param_1 + _DAT_112e4c6a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fc9388; end: 101fc950b;  */

/* WARNING: Possible PIC construction at 0x000101fc9488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc9498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc94b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc948c) */
/* WARNING: Removing unreachable block (ram,0x000101fc949c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9388(void)

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
    func_0x000107c3d904();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50a28();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101fc81a4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e4c5f0);
        *(undefined8 *)(lVar2 + _DAT_112e4c570) = uVar6;
        *(long *)(lVar2 + _DAT_112e4c578) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e4c578);
        func_0x000100083b20(&lStack_78);
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



/* Entry: 101fc950c; end: 101fc9533; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint begin] */

void FUN_101fc950c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc9388();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc9534; end: 101fc9577; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint end] */

void FUN_101fc9534(undefined8 param_1)

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



/* Entry: 101fc9578; end: 101fc977b;  */

void FUN_101fc9578(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0faee10)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000028,0x800000010f0511f0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffcc) || (param_3 != -0x7ffffffef0faede0)) &&
           (func_0x000107c605b8(0xd000000000000034,0x800000010f051220,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "AddToStoryCameraScopeGraphBridge/SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint.swift"
                              ,0x65,2,0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc977c);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c57fd0();
        goto LAB_101fc9604;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c524c0();
  }
LAB_101fc9604:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101fc977c; end: 101fc9827; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc977c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc9578(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc9828; end: 101fc98a7; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9828(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c698,0);
  func_0x000107c61614(param_1 + _DAT_112e4c6a0,0);
  *(undefined8 *)(param_1 + _DAT_112e4c6a8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e4c6b0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc98a8; end: 101fc98db;  */

void FUN_101fc98a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc98dc; end: 101fc9933; -[SCSCAddToStoryCameraScopedCameraFeatureServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fc9918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc991c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc98dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c698);
  func_0x000107c61610(param_1 + _DAT_112e4c6a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c6a8));
  return;
}



/* Entry: 101fc9934; end: 101fc9953;  */

void FUN_101fc9934(void)

{
  func_0x000107c61168(&PTR_PTR_112812f20);
  return;
}



/* Entry: 101fc9954; end: 101fc999b; -[SCSCAddToStoryCameraScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9954(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4c6e0;
  func_0x000107c61428(param_1 + _DAT_112e4c6e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fc999c; end: 101fc99f3; -[SCSCAddToStoryCameraScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc999c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4c6e0;
  func_0x000107c61428(param_1 + _DAT_112e4c6e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fc99f4; end: 101fc9acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc99f4(undefined8 param_1,long param_2)

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
    FUN_101fc83fc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e4c5a8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fc9acc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e4c5b0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e4c6e8);
    *(long **)(unaff_x20 + _DAT_112e4c6e8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101fc9acc; end: 101fc9af3; -[SCSCAddToStoryCameraScopedServicesSaberEntryPoint begin] */

void FUN_101fc9acc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fc99f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fc9af4; end: 101fc9c6b;  */

/* WARNING: Possible PIC construction at 0x000101fc9b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fc9bf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fc9b60) */
/* WARNING: Removing unreachable block (ram,0x000101fc9bf8) */
/* WARNING: Removing unreachable block (ram,0x000101fc9c10) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9af4(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e4c6e8);
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



/* Entry: 101fc9c6c; end: 101fc9c73;  */

void FUN_101fc9c6c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fc9c74; end: 101fc9ca7; -[SCSCAddToStoryCameraScopedServicesSaberEntryPoint end] */

void FUN_101fc9c74(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101fc9af4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101fc9ca8; end: 101fc9dc7;  */

void FUN_101fc9ca8(long param_1,long param_2,long param_3)

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
                        "AddToStoryCameraScopeGraphBridge/SCSCAddToStoryCameraScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x2d,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101fc9dc8);
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



/* Entry: 101fc9dc8; end: 101fc9e73; -[SCSCAddToStoryCameraScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fc9dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fc9ca8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fc9e74; end: 101fc9ed3; -[SCSCAddToStoryCameraScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9e74(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4c6e0,0);
  *(undefined8 *)(param_1 + _DAT_112e4c6e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fc9ed4; end: 101fc9f07;  */

void FUN_101fc9ed4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fc9f08; end: 101fc9f3f; -[SCSCAddToStoryCameraScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9f08(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4c6e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4c6e8));
  return;
}



/* Entry: 101fc9f40; end: 101fc9f5f;  */

void FUN_101fc9f40(void)

{
  func_0x000107c61168(&PTR_PTR_112812ff0);
  return;
}



/* Entry: 101fc9f60; end: 101fc9faf;  */

void FUN_101fc9f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 101fc9fb0; end: 101fc9fbf;  */

void FUN_101fc9fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Entry: 101fc9fc0; end: 101fca97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fc9fc0(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined **ppuVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined **ppuVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  long unaff_x20;
  long lVar36;
  undefined8 uVar37;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 auStack_80 [2];
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *param_1;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000024;
  func_0x0001000a9a18(0xd000000000000024,0x800000010f051330);
  func_0x000107c61170(uVar3);
  auStack_80[0] = 0xffffffffffffffff;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c501d0();
  func_0x000107c61180();
  puVar5 = &UNK_1104b4590;
  func_0x000107c613fc(&UNK_1104b4590,0x18,7);
  *(undefined8 **)(puVar5 + 0x10) = auStack_80;
  puVar6 = &UNK_1104b45b8;
  func_0x000107c613fc(&UNK_1104b45b8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_101fcaa04;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x101fcaa28;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_1019dec28;
  puStack_98 = &UNK_1104b45d0;
  ppuVar7 = &puStack_b0;
  puStack_88 = puVar6;
  func_0x000107c60bc4();
  puVar8 = puStack_88;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_1104b4608;
  func_0x000107c613fc(&UNK_1104b4608,0x18,7);
  *(undefined8 **)(puVar8 + 0x10) = auStack_80;
  puVar9 = &UNK_1104b4630;
  func_0x000107c613fc(&UNK_1104b4630,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = 0x101fcab24;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  uStack_90 = 0x101fcab58;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1019e04c0;
  puStack_98 = &UNK_1104b4648;
  ppuVar10 = &puStack_b0;
  puStack_88 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar11 = puStack_88;
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar11);
  puVar11 = &UNK_1104b4680;
  func_0x000107c613fc(&UNK_1104b4680,0x18,7);
  *(undefined8 **)(puVar11 + 0x10) = auStack_80;
  puVar12 = &UNK_1104b46a8;
  func_0x000107c613fc(&UNK_1104b46a8,0x20,7);
  *(undefined8 *)(puVar12 + 0x10) = 0x101fcab14;
  *(undefined **)(puVar12 + 0x18) = puVar11;
  uStack_90 = 0x101fcab48;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1019e04c8;
  puStack_98 = &UNK_1104b46c0;
  ppuVar13 = &puStack_b0;
  puStack_88 = puVar12;
  func_0x000107c60bc4();
  puVar14 = puStack_88;
  func_0x000107c6157c(puVar12);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_1104b46f8;
  func_0x000107c613fc(&UNK_1104b46f8,0x18,7);
  *(undefined8 **)(puVar14 + 0x10) = auStack_80;
  puVar15 = &UNK_1104b4720;
  func_0x000107c613fc(&UNK_1104b4720,0x20,7);
  *(undefined8 *)(puVar15 + 0x10) = 0x101fcab18;
  *(undefined **)(puVar15 + 0x18) = puVar14;
  uStack_90 = 0x101fcab4c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1019e04cc;
  puStack_98 = &UNK_1104b4738;
  ppuVar16 = &puStack_b0;
  puStack_88 = puVar15;
  func_0x000107c60bc4();
  puVar17 = puStack_88;
  func_0x000107c6157c(puVar15);
  func_0x000107c61574(puVar17);
  puVar17 = &UNK_1104b4770;
  func_0x000107c613fc(&UNK_1104b4770,0x18,7);
  *(undefined8 **)(puVar17 + 0x10) = auStack_80;
  puVar18 = &UNK_1104b4798;
  func_0x000107c613fc(&UNK_1104b4798,0x20,7);
  *(undefined8 *)(puVar18 + 0x10) = 0x101fcab1c;
  *(undefined **)(puVar18 + 0x18) = puVar17;
  uStack_90 = 0x101fcab50;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1019e04d0;
  puStack_98 = &UNK_1104b47b0;
  ppuVar19 = &puStack_b0;
  puStack_88 = puVar18;
  func_0x000107c60bc4();
  puVar20 = puStack_88;
  func_0x000107c6157c(puVar18);
  func_0x000107c61574(puVar20);
  puVar20 = &UNK_1104b47e8;
  func_0x000107c613fc(&UNK_1104b47e8,0x18,7);
  *(undefined8 **)(puVar20 + 0x10) = auStack_80;
  puVar21 = &UNK_1104b4810;
  func_0x000107c613fc(&UNK_1104b4810,0x20,7);
  *(undefined8 *)(puVar21 + 0x10) = 0x101fcab20;
  *(undefined **)(puVar21 + 0x18) = puVar20;
  uStack_90 = 0x101fcab54;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1019e04d4;
  puStack_98 = &UNK_1104b4828;
  ppuVar22 = &puStack_b0;
  puStack_88 = puVar21;
  func_0x000107c60bc4();
  puVar23 = puStack_88;
  func_0x000107c6157c(puVar21);
  func_0x000107c61574(puVar23);
  puVar23 = &UNK_1104b4860;
  func_0x000107c613fc(&UNK_1104b4860,0x18,7);
  *(undefined8 **)(puVar23 + 0x10) = auStack_80;
  puVar24 = &UNK_1104b4888;
  func_0x000107c613fc(&UNK_1104b4888,0x20,7);
  *(code **)(puVar24 + 0x10) = FUN_101fcaa64;
  *(undefined **)(puVar24 + 0x18) = puVar23;
  uStack_90 = 0x101fcaa88;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1019e04d8;
  puStack_98 = &UNK_1104b48a0;
  ppuVar25 = &puStack_b0;
  puStack_88 = puVar24;
  func_0x000107c60bc4();
  puVar26 = puStack_88;
  func_0x000107c6157c(puVar24);
  func_0x000107c61574(puVar26);
  puVar26 = &UNK_1104b48d8;
  func_0x000107c613fc(&UNK_1104b48d8,0x18,7);
  *(undefined8 **)(puVar26 + 0x10) = auStack_80;
  puVar27 = &UNK_1104b4900;
  func_0x000107c613fc(&UNK_1104b4900,0x20,7);
  *(undefined8 *)(puVar27 + 0x10) = 0x101fcab28;
  *(undefined **)(puVar27 + 0x18) = puVar26;
  uStack_90 = 0x101fcab5c;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  pcStack_a0 = (code *)0x1019e04dc;
  puStack_98 = &UNK_1104b4918;
  ppuVar28 = &puStack_b0;
  puStack_88 = puVar27;
  func_0x000107c60bc4();
  puVar1 = puStack_88;
  func_0x000107c6157c(puVar27);
  func_0x000107c61574(puVar1);
  func_0x000107c4c590(uVar3);
  func_0x000107c60bd0(ppuVar28);
  func_0x000107c60bd0(ppuVar25);
  func_0x000107c60bd0(ppuVar22);
  func_0x000107c60bd0(ppuVar19);
  func_0x000107c60bd0(ppuVar16);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar3);
  uVar3 = auStack_80[0];
  func_0x000107c61574(puVar5);
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x66,0x3e,0xd,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca938);
    (*pcVar2)();
  }
  puVar5 = puVar9;
  func_0x000107c61544(puVar9,"",0x66,0x42,0x2d,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca93c);
    (*pcVar2)();
  }
  puVar5 = puVar12;
  func_0x000107c61544(puVar12,"",0x66,0x46,0x27,1);
  func_0x000107c61574(puVar12);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca940);
    (*pcVar2)();
  }
  puVar5 = puVar15;
  func_0x000107c61544(puVar15,"",0x66,0x4a,0x26,1);
  func_0x000107c61574(puVar15);
  func_0x000107c61574(puVar17);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca944);
    (*pcVar2)();
  }
  puVar5 = puVar18;
  func_0x000107c61544(puVar18,"",0x66,0x4d,0x27,1);
  func_0x000107c61574(puVar18);
  func_0x000107c61574(puVar20);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca948);
    (*pcVar2)();
  }
  puVar5 = puVar21;
  func_0x000107c61544(puVar21,"",0x66,0x50,0x2e,1);
  func_0x000107c61574(puVar21);
  func_0x000107c61574(puVar23);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca94c);
    (*pcVar2)();
  }
  puVar5 = puVar24;
  func_0x000107c61544(puVar24,"",0x66,0x53,0x2d,1);
  func_0x000107c61574(puVar24);
  func_0x000107c61574(puVar26);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca950);
    (*pcVar2)();
  }
  puVar5 = puVar27;
  func_0x000107c61544(puVar27,"",0x66,0x56,0x35,1);
  func_0x000107c61574(puVar27);
  if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca954);
    (*pcVar2)();
  }
  lVar35 = *(long *)(unaff_x20 + 0x10);
  lVar36 = lVar35;
  func_0x000107c4f848(lVar35);
  func_0x000107c61180();
  func_0x000107c4f84c();
  func_0x000107c61180();
  lVar33 = lVar36;
  lVar29 = lVar35;
  func_0x00010450a0b8(uVar3,lVar36);
  func_0x000107c61170(lVar36);
  func_0x000107c61170(lVar35);
  lVar36 = lVar33;
  func_0x000107c614f0(lVar33);
  (**(code **)(lVar29 + 0x18))();
  func_0x000100083b20(&puStack_b0);
  func_0x000107c61574(lVar36);
  puVar5 = puStack_b0;
  lVar36 = *(long *)(puStack_b0 + _DAT_113082650);
  func_0x000107c61434(lVar36);
  func_0x000107c61170(puVar5);
  if (*(long *)(lVar36 + 0x10) != 0) {
    lVar29 = 0x112e4c718;
    uVar34 = 0;
    func_0x0001000285a8(0x112e4c718);
    func_0x0001000a7158();
    if ((uVar34 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar36 + 0x38) + lVar29 * 0x20,&puStack_b0);
      goto LAB_101fca834;
    }
  }
  uStack_a8 = 0;
  puStack_b0 = (undefined *)0x0;
  puStack_98 = (undefined *)0x0;
  pcStack_a0 = (code *)0x0;
LAB_101fca834:
  func_0x000107c6142c(lVar36);
  if (puStack_98 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_b0);
  }
  else {
    uVar30 = 0x112e4c718;
    func_0x0001000285a8(0x112e4c718,&UNK_10da46050);
    puVar31 = auStack_80;
    func_0x000107c6147c(puVar31,&puStack_b0,PTR___sypN_11034f1a8 + 8,uVar30,6);
    uVar30 = auStack_80[0];
    if (((ulong)puVar31 & 1) != 0) {
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + 0x28));
      uVar37 = *(undefined8 *)(unaff_x20 + 0x20);
      func_0x000103f61dd8(0);
      func_0x000107c610f8();
      uVar32 = uVar30;
      func_0x000107c6157c(uVar30);
      func_0x000103f61af0();
      func_0x000107c42c20(uVar37);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(lVar33);
      func_0x000107c61574(uVar30);
      func_0x000107c61170(uVar32);
      func_0x000107c61428(param_1,&puStack_b0,0,0);
      uVar3 = *param_1;
      func_0x000107c61174(uVar3);
      func_0x0001000aa0a8(uVar4);
      func_0x000107c61170(uVar3);
      return;
    }
  }
  func_0x0001048d9980(0xd00000000000003e,0x800000010f051360);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fca980);
  (*pcVar2)();
}



/* Entry: 101fca980; end: 101fca9bb;  */

void FUN_101fca980(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fca9bc; end: 101fca9db;  */

void FUN_101fca9bc(void)

{
  FUN_101fc9fc0();
  return;
}



/* Entry: 101fca9dc; end: 101fca9e3;  */

undefined8 FUN_101fca9dc(void)

{
  return 0;
}



/* Entry: 101fca9e4; end: 101fcaa03;  */

void FUN_101fca9e4(void)

{
  func_0x000107c61168(&PTR_PTR_112e4c760);
  return;
}



/* Entry: 101fcaa04; end: 101fcaa47;  */

void FUN_101fcaa04(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c4d534();
  *puVar1 = param_1;
  return;
}



/* Entry: 101fcaa48; end: 101fcaa63;  */

void FUN_101fcaa48(long param_1,long param_2)

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



/* Entry: 101fcaa64; end: 101fcaaa7;  */

void FUN_101fcaa64(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c4d534();
  *puVar1 = param_1;
  return;
}



/* Entry: 101fcaaa8; end: 101fcaaf7;  */

void FUN_101fcaaa8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112e4c7d8 != 0) {
    return;
  }
  puVar1 = &UNK_1104b4950;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112e4c7d8 = param_1;
  return;
}



/* Entry: 101fcaaf8; end: 101fcab5f;  */

void FUN_101fcaaf8(long param_1,long param_2)

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



/* Entry: 101fcab60; end: 101fcac7b;  */

void FUN_101fcab60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  puVar1 = &UNK_1104b4a20;
  func_0x000107c613fc(&UNK_1104b4a20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fcabe0,puVar1);
  return;
}



/* Entry: 101fcac7c; end: 101fcac8b;  */

undefined1  [16] FUN_101fcac7c(void)

{
  return ZEXT816(0x1104b4a48);
}



/* Entry: 101fcac8c; end: 101fcad2f;  */

void FUN_101fcac8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b4b10;
  func_0x000107c613fc(&UNK_1104b4b10,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_101fcad30,puVar1);
  return;
}



/* Entry: 101fcad30; end: 101fcaecf;  */

void FUN_101fcad30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&puStack_80);
  puVar8 = puStack_80;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(puStack_80);
  if (puVar8 != (undefined *)0x0) {
    FUN_1021a9d5c(0);
    puVar5 = puVar8;
    func_0x0001021a9b28();
    func_0x000107c615e8(puVar8);
    puVar8 = (undefined *)0x0;
    if (((ulong)puVar5 & 1) != 0) {
      puVar5 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar8 = &UNK_1104b4b58;
      uVar7 = 0x28;
      func_0x000107c613fc(&UNK_1104b4b58,0x28,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar2;
      *(undefined8 *)(puVar8 + 0x18) = uVar1;
      *(undefined8 *)(puVar8 + 0x20) = uVar3;
      pcStack_60 = FUN_101fcaee0;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_101443eec;
      puStack_68 = &UNK_1104b4b70;
      puStack_58 = puVar8;
      func_0x000107c60bc4(&puStack_80);
      puVar8 = puStack_58;
      func_0x000107c6157c(uVar2);
      func_0x000107c6157c(uVar1);
      func_0x000107c6157c(uVar3);
      func_0x000107c61574(puVar8);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      func_0x0001000a0a8c(0);
      ppuVar6 = &PTR____CFConstantStringClassReference_110e68758;
      func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e68758);
      puVar8 = puVar5;
      func_0x000100a0dc54(puVar5,ppuVar6,uVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c6142c(uVar7);
    }
    *param_1 = puVar8;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x101fcaed0);
  (*pcVar4)();
}



/* Entry: 101fcaed0; end: 101fcaedf;  */

undefined1  [16] FUN_101fcaed0(void)

{
  return ZEXT816(0x1104b4b38);
}



/* Entry: 101fcaee0; end: 101fcaf7b;  */

undefined * FUN_101fcaee0(void)

{
  undefined *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x000100083b20(&uStack_48);
  puVar1 = PTR_PTR_1126cff10;
  func_0x000107c610f8(PTR_PTR_1126cff10);
  func_0x000107c48c58();
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_40);
  func_0x000107c61170(uStack_38);
  return puVar1;
}



/* Entry: 101fcaf7c; end: 101fcaf97;  */

void FUN_101fcaf7c(long param_1,long param_2)

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



/* Entry: 101fcaf98; end: 101fcb3cf;  */

void FUN_101fcaf98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b4c50;
  func_0x000107c613fc(&UNK_1104b4c50,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(0x101fcb084,puVar1);
  return;
}



/* Entry: 101fcb3d0; end: 101fcb3df;  */

undefined1  [16] FUN_101fcb3d0(void)

{
  return ZEXT816(0x1104b4c78);
}



/* Entry: 101fcb3e0; end: 101fcb89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fcb3e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x48);
  func_0x000100083b20(&puStack_90);
  puVar1 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar17 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar2 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar10 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  puVar4 = puVar1;
  func_0x000107c4e660();
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
  }
  else {
    puVar5 = puVar1;
    func_0x000107c4d094();
    func_0x000107c61180();
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
    }
    else {
      puVar6 = puVar1;
      func_0x000107c4d5e8();
      func_0x000107c61180();
      if (puVar6 != (undefined *)0x0) {
        puVar7 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar8 = &UNK_1104b4ce8;
        func_0x000107c613fc(&UNK_1104b4ce8,0x18,7);
        *(undefined **)(puVar8 + 0x10) = puVar10;
        pcStack_70 = FUN_101fcb8bc;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_100619acc;
        puStack_78 = &UNK_1104b4d00;
        ppuVar9 = &puStack_90;
        puStack_68 = puVar8;
        func_0x000107c60bc4(ppuVar9);
        puVar8 = puStack_68;
        func_0x000107c61174();
        func_0x000107c61574(puVar8);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar9);
        lVar15 = _DAT_113083868;
        uVar11 = *(undefined8 *)(puVar17 + _DAT_113083868);
        func_0x000107c61174(uVar11);
        func_0x000107c61174(puVar5);
        func_0x000107c61174(puVar4);
        puVar8 = puVar2;
        func_0x000107c3e980(puVar2);
        func_0x000107c61180();
        func_0x000107c3fe30();
        func_0x000107c61180();
        puVar13 = PTR_PTR_1126d2248;
        func_0x000107c610f8(PTR_PTR_1126d2248);
        func_0x000107c48508();
        func_0x000107c61170(uVar12);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar4);
        puVar8 = puVar3;
        func_0x000107c444a4();
        func_0x000107c61180();
        puVar14 = puVar8;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(puVar8);
        if (puVar14 == (undefined *)0x0) {
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar2);
          func_0x000107c61170(puVar1);
        }
        else {
          lVar15 = *(long *)(puVar17 + lVar15);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar15 != 0) {
            puVar8 = PTR_PTR_1126b0308;
            func_0x000107c610f8(PTR_PTR_1126b0308);
            func_0x000107c488b8();
            puVar16 = PTR_PTR_1126a9d00;
            func_0x000107c610f8(PTR_PTR_1126a9d00);
            func_0x000107c463b0();
            func_0x000107c61170(puVar4);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(puVar6);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar14);
            func_0x000107c615e8(lVar15);
            func_0x000107c61170(puVar13);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar3);
            func_0x000107c61170(puVar2);
            func_0x000107c61170(puVar1);
            func_0x000107c61170(puVar17);
            return puVar16;
          }
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar3);
          func_0x000107c61170(puVar2);
          func_0x000107c61170(puVar1);
          func_0x000107c61170(puVar17);
          puVar17 = puVar14;
        }
        goto LAB_101fcb7d0;
      }
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      func_0x000107c61170(puVar17);
      puVar17 = puVar5;
    }
    func_0x000107c61170(puVar17);
    puVar17 = puVar4;
  }
LAB_101fcb7d0:
  func_0x000107c61170(puVar17);
  return (undefined *)0x0;
}



/* Entry: 101fcb8a0; end: 101fcb8bb;  */

void FUN_101fcb8a0(long param_1,long param_2)

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



/* Entry: 101fcb8bc; end: 101fcb923;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fcb8bc(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130806d0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4e714();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
                    /* WARNING: Could not recover jumptable at 0x00010c059510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 101fcb924; end: 101fcb92b;  */

void FUN_101fcb924(long param_1,long param_2)

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



/* Entry: 101fcb92c; end: 101fcb997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fcb92c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fcbd20();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4c7f0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101fcb998; end: 101fcba03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fcb998(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4c7f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fcba04; end: 101fcba63; -[_TtC45StoriesEverywhereScopedFactoryServiceProvider33SCStoriesEverywhereScopedServices init] */

void FUN_101fcba04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("StoriesEverywhereScopedFactoryServiceProvider.SCStoriesEverywhereScopedServices"
                      ,0x4f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fcba30);
  (*pcVar1)();
}



/* Entry: 101fcba64; end: 101fcba73; -[_TtC45StoriesEverywhereScopedFactoryServiceProvider33SCStoriesEverywhereScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fcba64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4c7f0));
  return;
}



/* Entry: 101fcba74; end: 101fcbadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fcba74(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b4ef0;
  func_0x000107c613fc(&UNK_1104b4ef0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101fcbdb8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fcbae0; end: 101fcbb7b;  */

void FUN_101fcbae0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b4e00;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b4e00;
  return;
}



/* Entry: 101fcbb7c; end: 101fcbbb3;  */

void FUN_101fcbb7c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101fcbbb4; end: 101fcbbbb;  */

undefined8 FUN_101fcbbb4(void)

{
  return 0x1b;
}



/* Entry: 101fcbbbc; end: 101fcbcef;  */

void FUN_101fcbbbc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1104b4f18;
  func_0x000107c613fc(&UNK_1104b4f18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fcbd90;
  func_0x00010058fa64(FUN_101fcbd90,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fcbcf0; end: 101fcbd1f;  */

undefined ** FUN_101fcbcf0(void)

{
  return &PTR_DAT_112e77678;
}



/* Entry: 101fcbd20; end: 101fcbd3f;  */

void FUN_101fcbd20(void)

{
  func_0x000107c61168(&PTR_PTR_1128130b0);
  return;
}



/* Entry: 101fcbd40; end: 101fcbd8f;  */

undefined1  [16] FUN_101fcbd40(void)

{
  return ZEXT816(0x1104b4e50);
}



/* Entry: 101fcbd90; end: 101fcbdb7;  */

void FUN_101fcbd90(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101fcbdb8; end: 101fcbdbb;  */

void FUN_101fcbdb8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101fcbdbc; end: 101fcc21b;  */

/* WARNING: Possible PIC construction at 0x000101fcc054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc0f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc174: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc1a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc1c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc1d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc1e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fcc1f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fcc1e8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc1d8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc1c8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc1b8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc1a8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc198) */
/* WARNING: Removing unreachable block (ram,0x000101fcc188) */
/* WARNING: Removing unreachable block (ram,0x000101fcc178) */
/* WARNING: Removing unreachable block (ram,0x000101fcc168) */
/* WARNING: Removing unreachable block (ram,0x000101fcc158) */
/* WARNING: Removing unreachable block (ram,0x000101fcc148) */
/* WARNING: Removing unreachable block (ram,0x000101fcc138) */
/* WARNING: Removing unreachable block (ram,0x000101fcc128) */
/* WARNING: Removing unreachable block (ram,0x000101fcc118) */
/* WARNING: Removing unreachable block (ram,0x000101fcc108) */
/* WARNING: Removing unreachable block (ram,0x000101fcc0f8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc0e8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc0d8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc0c8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc0b8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc0a8) */
/* WARNING: Removing unreachable block (ram,0x000101fcc098) */
/* WARNING: Removing unreachable block (ram,0x000101fcc088) */
/* WARNING: Removing unreachable block (ram,0x000101fcc078) */
/* WARNING: Removing unreachable block (ram,0x000101fcc068) */
/* WARNING: Removing unreachable block (ram,0x000101fcc058) */
/* WARNING: Removing unreachable block (ram,0x000101fcc1f8) */

void FUN_101fcbdbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_1104b4fa0;
  func_0x000107c613fc(&UNK_1104b4fa0,0x1c0,7);
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
  *(undefined8 *)(puVar1 + 0xf8) = param_31;
  *(undefined8 *)(puVar1 + 0x100) = param_32;
  *(undefined8 *)(puVar1 + 0x108) = param_33;
  *(undefined8 *)(puVar1 + 0x110) = param_34;
  *(undefined8 *)(puVar1 + 0x118) = param_35;
  *(undefined8 *)(puVar1 + 0x120) = param_36;
  *(undefined8 *)(puVar1 + 0x128) = param_37;
  *(undefined8 *)(puVar1 + 0x130) = param_38;
  *(undefined8 *)(puVar1 + 0x138) = param_39;
  *(undefined8 *)(puVar1 + 0x140) = param_40;
  *(undefined8 *)(puVar1 + 0x148) = param_41;
  *(undefined8 *)(puVar1 + 0x150) = param_42;
  *(undefined8 *)(puVar1 + 0x158) = param_43;
  *(undefined8 *)(puVar1 + 0x160) = param_44;
  *(undefined8 *)(puVar1 + 0x168) = param_45;
  *(undefined8 *)(puVar1 + 0x170) = param_46;
  *(undefined8 *)(puVar1 + 0x178) = param_47;
  *(undefined8 *)(puVar1 + 0x180) = param_48;
  *(undefined8 *)(puVar1 + 0x188) = param_49;
  *(undefined8 *)(puVar1 + 400) = param_50;
  *(undefined8 *)(puVar1 + 0x198) = param_51;
  *(undefined8 *)(puVar1 + 0x1a0) = param_52;
  *(undefined8 *)(puVar1 + 0x1a8) = param_53;
  *(undefined8 *)(puVar1 + 0x1b0) = param_54;
  *(undefined8 *)(puVar1 + 0x1b8) = param_55;
  uVar2 = 0x112e4c860;
  func_0x0001000285a8(0x112e4c860,&UNK_10da46410);
  func_0x000107c613fc();
  pcVar3 = FUN_101fccd14;
  func_0x0001000841fc(FUN_101fccd14,puVar1,uVar2);
  func_0x000100084214(&UNK_10da463e0,0x2f,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fcc21c; end: 101fcc2af;  */

void FUN_101fcc21c(void)

{
  long unaff_x20;
  
  FUN_101fcbdbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8));
  return;
}



/* Entry: 101fcc2b0; end: 101fcc2bf;  */

undefined1  [16] FUN_101fcc2b0(void)

{
  return ZEXT816(0x1104b4f80);
}



/* Entry: 101fcc2c0; end: 101fccb47;  */

void FUN_101fcc2c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 auStack_70 [2];
  
  uVar16 = *param_2;
  func_0x0001000285a8(0x112e4c868,&UNK_10da46418);
  puVar1 = auStack_70;
  auStack_70[0] = uVar16;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000101fd21f0();
  pcVar3 = "SCContentProductPlaybackScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContentProductPlaybackScopeExposerSubjectServiceProvider",0x3a,2);
  FUN_101fd223c();
  pcVar4 = "SCContextPostStoryScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCContextPostStoryScopeExposerSubjectServiceProvider",0x34,2);
  FUN_101fd2288();
  pcVar5 = "SCDiscoverFeedUpNextV2PlaybackSessionScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopeExposerSubjectServiceProvider",0x47
                      ,2);
  FUN_101fd22d4();
  func_0x000100082720("SCOperaSessionScopeExposerSubjectServiceProvider",0x30,2);
  puVar6 = puVar2;
  FUN_101fd2230();
  func_0x000100082720("SCContentProductPlaybackScopeExposerObservableServiceProvider",0x3d,2);
  pcVar7 = pcVar3;
  FUN_101fd227c();
  func_0x000100082720("SCContextPostStoryScopeExposerObservableServiceProvider",0x37,2);
  pcVar8 = pcVar4;
  FUN_101fd22c8();
  func_0x000100082720("SCDiscoverFeedUpNextV2PlaybackSessionScopeExposerObservableServiceProvider",
                      0x4a,2);
  pcVar9 = pcVar5;
  FUN_101fd2360();
  func_0x000100082720("SCOperaSessionScopeExposerObservableServiceProvider",0x33,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar10 = FUN_101fcbb7c;
  func_0x0001000823a8(FUN_101fcbb7c,0);
  func_0x000100082720("SCStoriesEverywhereScopedServicesCleanupRelayServiceProvider",0x3c,2);
  puVar11 = puVar2;
  FUN_101fd1f40(puVar2,pcVar3,pcVar4,pcVar5);
  func_0x000100082720("StoriesEverywhereScopeGraphBridgeServicesServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e4c870,&UNK_10da46430);
  puVar13 = &UNK_1104b4fc8;
  func_0x000107c613fc(&UNK_1104b4fc8,0x1e8,7);
  *(undefined8 **)(puVar13 + 0x10) = puVar1;
  *(undefined8 *)(puVar13 + 0x18) = param_3;
  *(undefined8 *)(puVar13 + 0x20) = param_4;
  *(undefined8 *)(puVar13 + 0x28) = param_5;
  *(undefined8 *)(puVar13 + 0x30) = param_6;
  *(undefined8 *)(puVar13 + 0x38) = param_7;
  *(undefined8 *)(puVar13 + 0x40) = param_8;
  *(undefined8 *)(puVar13 + 0x48) = param_9;
  *(undefined8 *)(puVar13 + 0x50) = param_10;
  *(undefined8 *)(puVar13 + 0x58) = param_11;
  *(undefined8 *)(puVar13 + 0x60) = param_12;
  *(undefined8 *)(puVar13 + 0x68) = param_13;
  *(undefined8 *)(puVar13 + 0x70) = param_14;
  *(undefined8 *)(puVar13 + 0x78) = param_15;
  *(undefined8 *)(puVar13 + 0x80) = param_16;
  *(undefined8 *)(puVar13 + 0x88) = param_17;
  *(undefined8 *)(puVar13 + 0x90) = param_18;
  *(undefined8 *)(puVar13 + 0x98) = param_19;
  *(undefined8 *)(puVar13 + 0xa0) = param_20;
  *(undefined8 *)(puVar13 + 0xa8) = param_21;
  *(undefined8 *)(puVar13 + 0xb0) = param_22;
  *(undefined8 *)(puVar13 + 0xb8) = param_23;
  *(undefined8 *)(puVar13 + 0xc0) = param_24;
  *(undefined8 *)(puVar13 + 200) = param_25;
  *(undefined8 *)(puVar13 + 0xd0) = param_26;
  *(undefined8 *)(puVar13 + 0xd8) = param_27;
  *(undefined8 *)(puVar13 + 0xe0) = param_28;
  *(undefined8 *)(puVar13 + 0xe8) = param_29;
  *(undefined8 *)(puVar13 + 0xf0) = param_30;
  *(undefined8 *)(puVar13 + 0xf8) = param_31;
  *(undefined8 *)(puVar13 + 0x100) = param_32;
  *(undefined8 *)(puVar13 + 0x108) = param_33;
  *(undefined8 *)(puVar13 + 0x110) = param_34;
  *(undefined8 *)(puVar13 + 0x118) = param_35;
  *(undefined8 *)(puVar13 + 0x120) = param_36;
  *(undefined8 *)(puVar13 + 0x128) = param_37;
  *(undefined8 *)(puVar13 + 0x130) = param_38;
  *(undefined8 *)(puVar13 + 0x138) = param_39;
  *(undefined8 *)(puVar13 + 0x140) = param_40;
  *(undefined8 *)(puVar13 + 0x148) = param_41;
  *(undefined8 *)(puVar13 + 0x150) = param_42;
  *(undefined8 *)(puVar13 + 0x158) = param_43;
  *(undefined8 *)(puVar13 + 0x160) = param_44;
  *(undefined8 *)(puVar13 + 0x168) = param_45;
  *(undefined8 *)(puVar13 + 0x170) = param_46;
  *(undefined8 *)(puVar13 + 0x178) = param_47;
  *(undefined8 *)(puVar13 + 0x180) = param_48;
  *(undefined8 *)(puVar13 + 0x188) = param_49;
  *(undefined8 *)(puVar13 + 400) = param_50;
  *(undefined8 *)(puVar13 + 0x198) = param_51;
  *(undefined8 *)(puVar13 + 0x1a0) = param_52;
  *(undefined8 *)(puVar13 + 0x1a8) = param_53;
  *(undefined8 *)(puVar13 + 0x1b0) = param_54;
  *(undefined8 *)(puVar13 + 0x1b8) = param_55;
  *(undefined8 *)(puVar13 + 0x1c0) = param_56;
  *(char **)(puVar13 + 0x1c8) = pcVar9;
  *(undefined8 **)(puVar13 + 0x1d0) = puVar6;
  *(char **)(puVar13 + 0x1d8) = pcVar8;
  *(char **)(puVar13 + 0x1e0) = pcVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(pcVar9);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(pcVar7);
  pcVar12 = FUN_101fcce08;
  func_0x0001000823a8(FUN_101fcce08,puVar13);
  func_0x000100082720("SCStoriesEverywhereScopeEntryPointWrapperServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e4c878,&UNK_10da46420);
  puVar13 = &UNK_1104b4ff0;
  func_0x000107c613fc(&UNK_1104b4ff0,0x30,7);
  *(code **)(puVar13 + 0x10) = pcVar12;
  *(undefined8 **)(puVar13 + 0x18) = puVar1;
  *(code **)(puVar13 + 0x20) = pcVar10;
  *(undefined8 **)(puVar13 + 0x28) = puVar11;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar12);
  func_0x000107c6157c(pcVar10);
  func_0x000107c6157c(puVar11);
  pcVar14 = FUN_101fcceb4;
  func_0x0001000823a8(FUN_101fcceb4,puVar13);
  func_0x000100082720("SCStoriesEverywhereScopeInitializationPluginRegistryServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e4c7f8,&UNK_10da461b0);
  func_0x000107c6157c(pcVar14);
  uVar16 = 0x101fccec0;
  func_0x0001000823a8(0x101fccec0,pcVar14);
  func_0x000100082720("SCStoriesEverywhereScopeInitializationServiceProvider",0x35,2);
  func_0x0001000285a8(0x112e4c7e8,&UNK_10da461a0);
  func_0x000107c6157c(uVar16);
  uVar15 = 0x101fccec8;
  func_0x0001000823a8(0x101fccec8,uVar16);
  func_0x000100082720("SCStoriesEverywhereScopedServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar13 = &UNK_1104b5018;
  func_0x000107c613fc(&UNK_1104b5018,0x20,7);
  *(undefined8 *)(puVar13 + 0x10) = uVar15;
  *(code **)(puVar13 + 0x18) = pcVar10;
  func_0x000107c6157c(pcVar10);
  uVar15 = 0x101fcced0;
  func_0x0001000823a8(0x101fcced0,puVar13);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(pcVar9);
  func_0x000107c61574(pcVar10);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(pcVar12);
  func_0x000107c61574(pcVar14);
  func_0x000107c61574(uVar16);
  func_0x000100082720("SCStoriesEverywhereScopeEntryPointProvider",0x2a,2);
  *param_1 = uVar15;
  return;
}



/* Entry: 101fccb48; end: 101fccd13;  */

void FUN_101fccb48(void)

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
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fccd14; end: 101fcce07;  */

void FUN_101fccd14(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101fcc2c0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8));
  return;
}



/* Entry: 101fcce08; end: 101fcceb3;  */

void FUN_101fcce08(void)

{
  long unaff_x20;
  
  FUN_101fcced8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xf0),*(undefined8 *)(unaff_x20 + 0xf8),
                *(undefined8 *)(unaff_x20 + 0x100),*(undefined8 *)(unaff_x20 + 0x108),
                *(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                *(undefined8 *)(unaff_x20 + 0x130),*(undefined8 *)(unaff_x20 + 0x138),
                *(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                *(undefined8 *)(unaff_x20 + 400),*(undefined8 *)(unaff_x20 + 0x198),
                *(undefined8 *)(unaff_x20 + 0x1a0),*(undefined8 *)(unaff_x20 + 0x1a8),
                *(undefined8 *)(unaff_x20 + 0x1b0),*(undefined8 *)(unaff_x20 + 0x1b8),
                *(undefined8 *)(unaff_x20 + 0x1c0),*(undefined8 *)(unaff_x20 + 0x1c8),
                *(undefined8 *)(unaff_x20 + 0x1d0),*(undefined8 *)(unaff_x20 + 0x1d8),
                *(undefined8 *)(unaff_x20 + 0x1e0));
  return;
}



/* Entry: 101fcceb4; end: 101fcced7;  */

void FUN_101fcceb4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fd15ec(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCStoriesEverywhereScopeInitializationPluginRegistryServiceProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fcced8; end: 101fd1223;  */

void FUN_101fcced8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  func_0x000100083b20(&uStack_f0);
  func_0x000100083b20(&uStack_f8);
  func_0x000100083b20(&uStack_100);
  func_0x000100083b20(&uStack_108);
  func_0x000100083b20(&uStack_110);
  func_0x000100083b20(&uStack_118);
  func_0x000100083b20(&uStack_120);
  func_0x000100083b20(&uStack_128);
  func_0x000100083b20(&uStack_130);
  func_0x000100083b20(&uStack_138);
  func_0x000100083b20(&uStack_140);
  func_0x000100083b20(&uStack_148);
  func_0x000100083b20(&uStack_150);
  func_0x000100083b20(&uStack_158);
  func_0x000100083b20(&uStack_160);
  func_0x000100083b20(&uStack_168);
  func_0x000100083b20(&uStack_170);
  func_0x000100083b20(&uStack_178);
  func_0x000100083b20(&uStack_180);
  func_0x000100083b20(&uStack_188);
  func_0x000100083b20(&uStack_190);
  func_0x000100083b20(&uStack_198);
  func_0x000100083b20(&uStack_1a0);
  func_0x000100083b20(&uStack_1a8);
  func_0x000100083b20(&uStack_1b0);
  func_0x000100083b20(&uStack_1b8);
  func_0x000100083b20(&uStack_1c0);
  func_0x000100083b20(&uStack_1c8);
  func_0x000100083b20(&uStack_1d0);
  func_0x000100083b20(&uStack_1d8);
  func_0x000100083b20(&uStack_1e0);
  func_0x000100083b20(&uStack_1e8);
  func_0x000100083b20(&uStack_1f0);
  func_0x000100083b20(&uStack_1f8);
  func_0x000100083b20(&uStack_200);
  func_0x000100083b20(&uStack_208);
  func_0x000100083b20(&uStack_210);
  func_0x000100083b20(&uStack_218);
  func_0x000100083b20(&uStack_220);
  func_0x000100083b20(&uStack_228);
  func_0x000100083b20(&uStack_230);
  func_0x000100083b20(&uStack_238);
  func_0x000100083b20(&uStack_240);
  FUN_101fd153c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x38) = uStack_78;
  *(undefined8 *)(param_2 + 0x40) = uStack_80;
  *(undefined8 *)(param_2 + 0x48) = uStack_88;
  *(undefined8 *)(param_2 + 0x50) = uStack_90;
  *(undefined8 *)(param_2 + 0x58) = uStack_98;
  *(undefined8 *)(param_2 + 0x60) = uStack_a0;
  *(undefined8 *)(param_2 + 0x68) = uStack_a8;
  *(undefined8 *)(param_2 + 0x70) = uStack_b0;
  *(undefined8 *)(param_2 + 0x78) = uStack_b8;
  *(undefined8 *)(param_2 + 0x80) = uStack_c0;
  *(undefined8 *)(param_2 + 0x88) = uStack_c8;
  *(undefined8 *)(param_2 + 0x90) = uStack_d0;
  *(undefined8 *)(param_2 + 0x98) = uStack_d8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_e0;
  *(undefined8 *)(param_2 + 0xa8) = uStack_e8;
  *(undefined8 *)(param_2 + 0xb0) = uStack_f0;
  *(undefined8 *)(param_2 + 0xb8) = uStack_f8;
  *(undefined8 *)(param_2 + 0xc0) = uStack_100;
  *(undefined8 *)(param_2 + 200) = uStack_108;
  *(undefined8 *)(param_2 + 0xd0) = uStack_110;
  *(undefined8 *)(param_2 + 0xd8) = uStack_118;
  *(undefined8 *)(param_2 + 0xe0) = uStack_120;
  *(undefined8 *)(param_2 + 0xe8) = uStack_128;
  *(undefined8 *)(param_2 + 0xf0) = uStack_130;
  *(undefined8 *)(param_2 + 0xf8) = uStack_138;
  *(undefined8 *)(param_2 + 0x100) = uStack_140;
  *(undefined8 *)(param_2 + 0x108) = uStack_148;
  *(undefined8 *)(param_2 + 0x110) = uStack_150;
  *(undefined8 *)(param_2 + 0x118) = uStack_158;
  *(undefined8 *)(param_2 + 0x120) = uStack_160;
  *(undefined8 *)(param_2 + 0x128) = uStack_168;
  *(undefined8 *)(param_2 + 0x130) = uStack_170;
  *(undefined8 *)(param_2 + 0x138) = uStack_178;
  *(undefined8 *)(param_2 + 0x140) = uStack_180;
  *(undefined8 *)(param_2 + 0x148) = uStack_188;
  *(undefined8 *)(param_2 + 0x150) = uStack_190;
  *(undefined8 *)(param_2 + 0x158) = uStack_198;
  *(undefined8 *)(param_2 + 0x160) = uStack_1a0;
  *(undefined8 *)(param_2 + 0x168) = uStack_1a8;
  *(undefined8 *)(param_2 + 0x170) = uStack_1b0;
  *(undefined8 *)(param_2 + 0x178) = uStack_1b8;
  *(undefined8 *)(param_2 + 0x180) = uStack_1c0;
  *(undefined8 *)(param_2 + 0x188) = uStack_1c8;
  *(undefined8 *)(param_2 + 400) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x198) = uStack_1d8;
  *(undefined8 *)(param_2 + 0x1a0) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x1a8) = uStack_1e8;
  *(undefined8 *)(param_2 + 0x1b0) = uStack_1f0;
  *(undefined8 *)(param_2 + 0x1b8) = uStack_1f8;
  *(undefined8 *)(param_2 + 0x1c0) = uStack_200;
  *(undefined8 *)(param_2 + 0x1c8) = uStack_208;
  *(undefined8 *)(param_2 + 0x1d0) = uStack_210;
  *(undefined8 *)(param_2 + 0x1d8) = uStack_218;
  *(undefined8 *)(param_2 + 0x1e0) = uStack_220;
  func_0x0001000285a8(0x112e4a000,&UNK_10da41b80);
  func_0x000107c610f8();
  uVar24 = uStack_78;
  func_0x000107c61174();
  uVar25 = uStack_80;
  func_0x000107c61174();
  uVar26 = uStack_88;
  func_0x000107c61174();
  uVar27 = uStack_90;
  func_0x000107c61174();
  uVar1 = uStack_98;
  func_0x000107c61174();
  uVar2 = uStack_a0;
  func_0x000107c61174();
  uVar3 = uStack_a8;
  func_0x000107c61174();
  uVar4 = uStack_b0;
  func_0x000107c61174();
  uVar5 = uStack_b8;
  func_0x000107c61174();
  uVar6 = uStack_c0;
  func_0x000107c61174();
  uVar7 = uStack_c8;
  func_0x000107c61174();
  uVar8 = uStack_d0;
  func_0x000107c61174();
  uVar9 = uStack_d8;
  func_0x000107c61174();
  uVar10 = uStack_e0;
  func_0x000107c61174();
  uVar11 = uStack_e8;
  func_0x000107c61174();
  uVar12 = uStack_f0;
  func_0x000107c61174();
  uVar13 = uStack_f8;
  func_0x000107c61174();
  uVar14 = uStack_100;
  func_0x000107c61174();
  uVar15 = uStack_108;
  func_0x000107c61174();
  uVar16 = uStack_110;
  func_0x000107c61174();
  uVar17 = uStack_118;
  func_0x000107c61174();
  uVar18 = uStack_120;
  func_0x000107c61174();
  uVar19 = uStack_128;
  func_0x000107c61174();
  uVar20 = uStack_130;
  func_0x000107c61174();
  uVar21 = uStack_138;
  func_0x000107c61174();
  uVar28 = uStack_140;
  func_0x000107c61174();
  uVar29 = uStack_148;
  func_0x000107c61174();
  uVar30 = uStack_150;
  func_0x000107c61174();
  uVar31 = uStack_158;
  func_0x000107c61174();
  uVar32 = uStack_160;
  func_0x000107c61174();
  uVar33 = uStack_168;
  func_0x000107c61174();
  uVar34 = uStack_170;
  func_0x000107c61174();
  uVar35 = uStack_178;
  func_0x000107c61174();
  uVar36 = uStack_180;
  func_0x000107c61174();
  uVar37 = uStack_188;
  func_0x000107c61174();
  uVar38 = uStack_190;
  func_0x000107c61174();
  uVar39 = uStack_198;
  func_0x000107c61174();
  uVar40 = uStack_1a0;
  func_0x000107c61174();
  uVar41 = uStack_1a8;
  func_0x000107c61174();
  uVar42 = uStack_1b0;
  func_0x000107c61174();
  uVar43 = uStack_1b8;
  func_0x000107c61174();
  uVar44 = uStack_1c0;
  func_0x000107c61174();
  uVar45 = uStack_1c8;
  func_0x000107c61174();
  uVar46 = uStack_1d0;
  func_0x000107c61174();
  uVar47 = uStack_1d8;
  func_0x000107c61174();
  uVar48 = uStack_1e0;
  func_0x000107c61174();
  uVar49 = uStack_1e8;
  func_0x000107c61174();
  uVar50 = uStack_1f0;
  func_0x000107c61174();
  uVar51 = uStack_1f8;
  func_0x000107c61174();
  uVar52 = uStack_200;
  func_0x000107c61174();
  uVar53 = uStack_208;
  func_0x000107c61174();
  uVar54 = uStack_210;
  func_0x000107c61174();
  uVar55 = uStack_218;
  func_0x000107c61174();
  uVar56 = uStack_220;
  func_0x000107c61174();
  uVar58 = uStack_228;
  func_0x000107c6157c();
  func_0x00010017da58();
  puVar22 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar58);
  *(undefined **)(param_2 + 0x18) = puVar22;
  func_0x0001000285a8(0x112e4c880,&UNK_10da46440);
  func_0x000107c610f8();
  uVar58 = uStack_230;
  func_0x000107c6157c(uStack_230);
  func_0x00010017da58();
  puVar22 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar58);
  *(undefined **)(param_2 + 0x20) = puVar22;
  func_0x0001000285a8(0x112e4c888,&UNK_10da47820);
  func_0x000107c610f8();
  uVar58 = uStack_238;
  func_0x000107c6157c(uStack_238);
  func_0x00010017da58();
  puVar22 = PTR_PTR_1126a7640;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar58);
  *(undefined **)(param_2 + 0x28) = puVar22;
  func_0x0001000285a8(0x112e4c890,&UNK_10da46450);
  func_0x000107c610f8();
  uVar58 = uStack_240;
  func_0x000107c6157c(uStack_240);
  func_0x00010017da58();
  puVar22 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar58);
  *(undefined **)(param_2 + 0x30) = puVar22;
  puVar22 = PTR_PTR_1126a9d08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar22;
  func_0x000107c61174();
  uVar23 = auStack_70[0];
  func_0x000107c61174();
  uVar62 = 0xd000000000000016;
  uVar58 = uVar62;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0515e0);
  func_0x000107c5a49c(puVar22);
  func_0x000107c61170(puVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar59 = 0xd000000000000010;
  uVar58 = uVar59;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21b90);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar61 = 0xd000000000000013;
  uVar58 = uVar61;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f051600);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00ad40);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f007170);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f051620);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f051640);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = uVar61;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1c990);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f051670);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f01a8d0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar60 = 0xd000000000000014;
  uVar58 = uVar60;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010effcda0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar59);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0x6769666e6f436461;
  func_0x000107c5fadc(0x6769666e6f436461,0xef65636976726553);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = uVar60;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef3bff0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar59 = 0xd000000000000015;
  uVar58 = uVar59;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef2fd80);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f051690);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f007150);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar58 = uVar59;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef21bb0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0x53736569726f7473;
  func_0x000107c5fadc(0x53736569726f7473,0xef73656369767265);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar58 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f00ad10);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f00aef0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = uVar61;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = uVar59;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f01a7f0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = uVar60;
  func_0x000107c5fadc(0xd000000000000014,0x800000010efc46f0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef129b0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f01aa20);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef21a40);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef29570);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f01ac50);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = uVar60;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar57 = 0x655373706f6f6c62;
  func_0x000107c5fadc(0x655373706f6f6c62,0xee00736563697672);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar57);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar60);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f0516b0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar58 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010efc3350);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar58 = uVar62;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef122e0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f017eb0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efe1e20);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef19d20);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar59);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef132f0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef35740);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0516d0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar61);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar58);
  uVar57 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar57);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar58 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef32790);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = uVar62;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f0516f0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f051710);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar58);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar58 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f051740);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000016,0x800000010f051770);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar56);
  func_0x000107c61170(uVar62);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  uVar57 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174(uVar57);
  uVar59 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f03f140);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar59);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  uVar57 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c61174(uVar58);
  func_0x000107c61174(uVar57);
  uVar59 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f051790);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar59);
  uVar57 = *(undefined8 *)(param_2 + 0x10);
  uVar59 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c61174(uVar57);
  func_0x000107c61174(uVar59);
  uVar58 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f0517b0);
  func_0x000107c5a49c(uVar57);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar59);
  func_0x000107c61170(uVar58);
  uVar58 = *(undefined8 *)(param_2 + 0x10);
  uVar57 = *(undefined8 *)(param_2 + 0x30);
  func_0x000107c61174(uVar58);
  func_0x000107c61174(uVar57);
  uVar59 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f0517d0);
  func_0x000107c5a49c(uVar58);
  func_0x000107c61170(uVar58);
  func_0x000107c61170(uVar57);
  func_0x000107c61170(uVar59);
  func_0x000107c3e740(*(undefined8 *)(param_2 + 0x10));
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar30);
  func_0x000107c61170(uVar31);
  func_0x000107c61170(uVar32);
  func_0x000107c61170(uVar33);
  func_0x000107c61170(uVar34);
  func_0x000107c61170(uVar35);
  func_0x000107c61170(uVar36);
  func_0x000107c61170(uVar37);
  func_0x000107c61170(uVar38);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(uVar40);
  func_0x000107c61170(uVar41);
  func_0x000107c61170(uVar42);
  func_0x000107c61170(uVar43);
  func_0x000107c61170(uVar44);
  func_0x000107c61170(uVar45);
  func_0x000107c61170(uVar46);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar48);
  func_0x000107c61170(uVar49);
  func_0x000107c61170(uVar50);
  func_0x000107c61170(uVar51);
  func_0x000107c61170(uVar52);
  func_0x000107c61170(uVar53);
  func_0x000107c61170(uVar54);
  func_0x000107c61170(uVar55);
  func_0x000107c61170(uVar56);
  func_0x000107c61574(uStack_228);
  func_0x000107c61574(uStack_230);
  func_0x000107c61574(uStack_238);
  func_0x000107c61574(uStack_240);
  *param_1 = param_2;
  return;
}



/* Entry: 101fd1224; end: 101fd142f;  */

void FUN_101fd1224(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x1e0));
  return;
}



/* Entry: 101fd1430; end: 101fd1437;  */

undefined8 FUN_101fd1430(void)

{
  return 0x1b;
}



/* Entry: 101fd1438; end: 101fd14bb;  */

void FUN_101fd1438(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fd157c,param_2,FUN_101fd1580,param_2,FUN_101fd15a8,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fd14bc; end: 101fd150b;  */

undefined8 FUN_101fd14bc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101fd150c; end: 101fd153b;  */

undefined ** FUN_101fd150c(void)

{
  return &PTR_DAT_112e77678;
}



/* Entry: 101fd153c; end: 101fd155b;  */

void FUN_101fd153c(void)

{
  func_0x000107c61168(&PTR_PTR_112e4c900);
  return;
}



/* Entry: 101fd155c; end: 101fd157f;  */

undefined1  [16] FUN_101fd155c(void)

{
  return ZEXT816(0x1104b5070);
}



/* Entry: 101fd1580; end: 101fd15a7;  */

void FUN_101fd1580(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fd15a8; end: 101fd15af;  */

undefined8 FUN_101fd15a8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}


