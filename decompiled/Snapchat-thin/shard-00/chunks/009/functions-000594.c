/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100b71638; end: 100b716e3; -[SCSCLensCollectionTabBarServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b71638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b716e4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b716e4; end: 100b7187b;  */

void FUN_100b716e4(long param_1,long param_2,long param_3)

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
                            "CameraUIScopeGraphBridge/SCSCLensCollectionTabBarServicesSaberServiceProvider.swift"
                            ,0x53,2,0x100,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b7187c);
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



/* Entry: 100b7187c; end: 100b71887; -[SCSCLensCollectionTabBarServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7187c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee1928;
  func_0x000107c61428(param_1 + _DAT_112ee1928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71888; end: 100b718db;  */

void FUN_100b71888(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b718dc; end: 100b718e7; -[SCSCLensCollectionTabBarServicesSaberServiceProvider setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b718dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee1930;
  func_0x000107c61428(param_1 + _DAT_112ee1930,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b718e8; end: 100b7191b; -[SCSCLensCollectionTabBarServicesSaberServiceProvider __safeProvide] */

void FUN_100b718e8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b7191c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b7191c; end: 100b71a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7191c(void)

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
      FUN_100b71a60();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112edee50);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee1938);
      *(long *)(unaff_x20 + _DAT_112ee1938) = lVar3;
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



/* Entry: 100b71a04; end: 100b71a0f; -[SCSCLensCollectionTabBarServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71a04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee1928;
  func_0x000107c61428(param_1 + _DAT_112ee1928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b71a10; end: 100b71a53;  */

void FUN_100b71a10(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b71a54; end: 100b71a5f; -[SCSCLensCollectionTabBarServicesSaberServiceProvider cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71a54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee1930;
  func_0x000107c61428(param_1 + _DAT_112ee1930,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b71a60; end: 100b71adb;  */

void FUN_100b71a60(undefined8 param_1)

{
  if (lRam0000000112ede300 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70b220);
  return;
}



/* Entry: 100b71adc; end: 100b71ae7; -[SCARBarActivationEntryPoint setLensCollectionTabBarServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3410;
  func_0x000107c61428(param_1 + _DAT_112fa3410,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71ae8; end: 100b71b5b; -[SCSCLensConfigurationServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71ae8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc85a8,0);
  func_0x000107c61614(param_1 + _DAT_112fc85b0,0);
  *(undefined8 *)(param_1 + _DAT_112fc85b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b71b5c; end: 100b71c07; -[SCSCLensConfigurationServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b71b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b71c08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b71c08; end: 100b71d9f;  */

void FUN_100b71c08(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0e78950)) {
      uVar2 = 0xd00000000000002d;
      func_0x000107c605b8(0xd00000000000002d,0x800000010f1876b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensActiveUserSessionScopeGraphBridge/SCSCLensConfigurationServicesSaberServiceProvider.swift"
                            ,0x5d,2,0x3f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b71da0);
        (*pcVar1)();
      }
    }
    FUN_1006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55bd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100b71da0; end: 100b71dab; -[SCSCLensConfigurationServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc85a8;
  func_0x000107c61428(param_1 + _DAT_112fc85a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71dac; end: 100b71dff;  */

void FUN_100b71dac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71e00; end: 100b71e0b; -[SCSCLensConfigurationServicesSaberServiceProvider setLensActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc85b0;
  func_0x000107c61428(param_1 + _DAT_112fc85b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b71e0c; end: 100b71e3f; -[SCSCLensConfigurationServicesSaberServiceProvider __safeProvide] */

void FUN_100b71e0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b71e40();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b71e40; end: 100b71f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71e40(void)

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
    func_0x000107c4addc();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100b71f84();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112fc7e98);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112fc85b8);
      *(long *)(unaff_x20 + _DAT_112fc85b8) = lVar3;
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



/* Entry: 100b71f28; end: 100b71f33; -[SCSCLensConfigurationServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71f28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc85a8;
  func_0x000107c61428(param_1 + _DAT_112fc85a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b71f34; end: 100b71f77;  */

void FUN_100b71f34(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b71f78; end: 100b71f83; -[SCSCLensConfigurationServicesSaberServiceProvider lensActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b71f78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc85b0;
  func_0x000107c61428(param_1 + _DAT_112fc85b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b71f84; end: 100b71fff;  */

void FUN_100b71f84(undefined8 param_1)

{
  if (lRam0000000112fc7990 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e79a048);
  return;
}



/* Entry: 100b72000; end: 100b7200b; -[SCARBarActivationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72000(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3418;
  func_0x000107c61428(param_1 + _DAT_112fa3418,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b7200c; end: 100b72017; -[SCARBarActivationEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b7200c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3420;
  func_0x000107c61428(param_1 + _DAT_112fa3420,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b72018; end: 100b7207b; -[SCARBarActivationEntryPoint setArBarDeepLinkActivationConfigurationUpdatesServiceExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3428;
  func_0x000107c61428(param_1 + _DAT_112fa3428,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100b7207c; end: 100b720a3; -[SCARBarActivationEntryPoint begin] */

void FUN_100b7207c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100b720a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b720a4; end: 100b72ac7;  */

/* WARNING: Possible PIC construction at 0x000100b72284: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b722c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b722dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72414: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b725a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b725b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b725c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b725d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b725e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b725f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b728b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b729a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b729b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b729c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b729e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72a00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72aa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72ab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b727c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b727d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b727e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b727f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b727a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b727b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b726f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b726b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b726c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b726d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b726a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72610: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b72624) */
/* WARNING: Removing unreachable block (ram,0x000100b72644) */
/* WARNING: Removing unreachable block (ram,0x000100b72674) */
/* WARNING: Removing unreachable block (ram,0x000100b72664) */
/* WARNING: Removing unreachable block (ram,0x000100b726a4) */
/* WARNING: Removing unreachable block (ram,0x000100b72694) */
/* WARNING: Removing unreachable block (ram,0x000100b72684) */
/* WARNING: Removing unreachable block (ram,0x000100b726d4) */
/* WARNING: Removing unreachable block (ram,0x000100b726c4) */
/* WARNING: Removing unreachable block (ram,0x000100b726b4) */
/* WARNING: Removing unreachable block (ram,0x000100b72714) */
/* WARNING: Removing unreachable block (ram,0x000100b72704) */
/* WARNING: Removing unreachable block (ram,0x000100b726f4) */
/* WARNING: Removing unreachable block (ram,0x000100b72764) */
/* WARNING: Removing unreachable block (ram,0x000100b72754) */
/* WARNING: Removing unreachable block (ram,0x000100b72744) */
/* WARNING: Removing unreachable block (ram,0x000100b72734) */
/* WARNING: Removing unreachable block (ram,0x000100b727b4) */
/* WARNING: Removing unreachable block (ram,0x000100b727a4) */
/* WARNING: Removing unreachable block (ram,0x000100b72794) */
/* WARNING: Removing unreachable block (ram,0x000100b72784) */
/* WARNING: Removing unreachable block (ram,0x000100b72774) */
/* WARNING: Removing unreachable block (ram,0x000100b72804) */
/* WARNING: Removing unreachable block (ram,0x000100b727f4) */
/* WARNING: Removing unreachable block (ram,0x000100b727e4) */
/* WARNING: Removing unreachable block (ram,0x000100b727d4) */
/* WARNING: Removing unreachable block (ram,0x000100b727c4) */
/* WARNING: Removing unreachable block (ram,0x000100b72abc) */
/* WARNING: Removing unreachable block (ram,0x000100b72aa4) */
/* WARNING: Removing unreachable block (ram,0x000100b72a94) */
/* WARNING: Removing unreachable block (ram,0x000100b72a84) */
/* WARNING: Removing unreachable block (ram,0x000100b72a74) */
/* WARNING: Removing unreachable block (ram,0x000100b72a64) */
/* WARNING: Removing unreachable block (ram,0x000100b72a54) */
/* WARNING: Removing unreachable block (ram,0x000100b72a04) */
/* WARNING: Removing unreachable block (ram,0x000100b729ec) */
/* WARNING: Removing unreachable block (ram,0x000100b729cc) */
/* WARNING: Removing unreachable block (ram,0x000100b729bc) */
/* WARNING: Removing unreachable block (ram,0x000100b729ac) */
/* WARNING: Removing unreachable block (ram,0x000100b7299c) */
/* WARNING: Removing unreachable block (ram,0x000100b7298c) */
/* WARNING: Removing unreachable block (ram,0x000100b7297c) */
/* WARNING: Removing unreachable block (ram,0x000100b728b4) */
/* WARNING: Removing unreachable block (ram,0x000100b7289c) */
/* WARNING: Removing unreachable block (ram,0x000100b725fc) */
/* WARNING: Removing unreachable block (ram,0x000100b72a10) */
/* WARNING: Removing unreachable block (ram,0x000100b72a14) */
/* WARNING: Removing unreachable block (ram,0x000100b725ec) */
/* WARNING: Removing unreachable block (ram,0x000100b725dc) */
/* WARNING: Removing unreachable block (ram,0x000100b725cc) */
/* WARNING: Removing unreachable block (ram,0x000100b725bc) */
/* WARNING: Removing unreachable block (ram,0x000100b725ac) */
/* WARNING: Removing unreachable block (ram,0x000100b72594) */
/* WARNING: Removing unreachable block (ram,0x000100b72418) */
/* WARNING: Removing unreachable block (ram,0x000100b72830) */
/* WARNING: Removing unreachable block (ram,0x000100b72a4c) */
/* WARNING: Removing unreachable block (ram,0x000100b72858) */
/* WARNING: Removing unreachable block (ram,0x000100b72574) */
/* WARNING: Removing unreachable block (ram,0x000100b72398) */
/* WARNING: Removing unreachable block (ram,0x000100b7235c) */
/* WARNING: Removing unreachable block (ram,0x000100b7231c) */
/* WARNING: Removing unreachable block (ram,0x000100b722e0) */
/* WARNING: Removing unreachable block (ram,0x000100b722cc) */
/* WARNING: Removing unreachable block (ram,0x000100b72288) */
/* WARNING: Removing unreachable block (ram,0x000100b72614) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b720a4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c4c144();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f2a4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4c150();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c3e0b0();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c4af4c();
          func_0x000107c61180();
          if (lVar3 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar3 = unaff_x20;
            func_0x000107c3f084();
            func_0x000107c61180();
            if (lVar3 != 0) {
              lVar3 = unaff_x20;
              func_0x000107c5c790();
              func_0x000107c61180();
              if (lVar3 != 0) {
                lVar3 = unaff_x20;
                func_0x000107c4af8c();
                func_0x000107c61180();
                if (lVar3 == 0) {
                  func_0x000107c61170(lVar1);
                  lVar1 = lVar2;
                }
                else {
                  lVar3 = unaff_x20;
                  func_0x000107c4afbc();
                  func_0x000107c61180();
                  if (lVar3 == 0) {
                    func_0x000107c61170(lVar1);
                    lVar1 = lVar2;
                  }
                  else {
                    lVar2 = unaff_x20;
                    func_0x000107c4b2f4();
                    func_0x000107c61180();
                    if (lVar2 != 0) {
                      func_0x000107c3e080();
                      func_0x000107c61180();
                      if (unaff_x20 != 0) {
                        FUN_100b72c28();
                        func_0x000107c613fc();
                        uVar4 = *(undefined8 *)(lVar3 + _DAT_1130813f0);
                        func_0x000100b72c48();
                        func_0x000107c610f8();
                        func_0x000107c6157c(uVar4);
                        func_0x000107c453e4();
                        FUN_1000285a8(0x112d5a5f8,&UNK_10d921380);
                        func_0x000107c4b2ec();
                        func_0x000107c61180();
                        FUN_1000bda74();
                        lVar1 = lVar2;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100b72ac8; end: 100b72b17;  */

void FUN_100b72ac8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100b72b18; end: 100b72b23; -[SCARBarActivationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72b18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa33d0;
  func_0x000107c61428(param_1 + _DAT_112fa33d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72b24; end: 100b72b67;  */

void FUN_100b72b24(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b72b68; end: 100b72b73; -[SCARBarActivationEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72b68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa33d8;
  func_0x000107c61428(param_1 + _DAT_112fa33d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72b74; end: 100b72b7f; -[SCARBarActivationEntryPoint cameraUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72b74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa33e0;
  func_0x000107c61428(param_1 + _DAT_112fa33e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72b80; end: 100b72b8b; -[SCARBarActivationEntryPoint mainCameraScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72b80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa33e8;
  func_0x000107c61428(param_1 + _DAT_112fa33e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72b8c; end: 100b72b97; -[SCARBarActivationEntryPoint arBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72b8c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa33f0;
  func_0x000107c61428(param_1 + _DAT_112fa33f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72b98; end: 100b72ba3; -[SCARBarActivationEntryPoint lensCarouselStudySettingsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72b98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa33f8;
  func_0x000107c61428(param_1 + _DAT_112fa33f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72ba4; end: 100b72baf; -[SCARBarActivationEntryPoint cameraConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72ba4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3400;
  func_0x000107c61428(param_1 + _DAT_112fa3400,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72bb0; end: 100b72bbb; -[SCARBarActivationEntryPoint taskManagmentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72bb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3408;
  func_0x000107c61428(param_1 + _DAT_112fa3408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72bbc; end: 100b72bc7; -[SCARBarActivationEntryPoint lensCollectionTabBarServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72bbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3410;
  func_0x000107c61428(param_1 + _DAT_112fa3410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72bc8; end: 100b72bd3; -[SCARBarActivationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72bc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3418;
  func_0x000107c61428(param_1 + _DAT_112fa3418,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72bd4; end: 100b72bdf; -[SCARBarActivationEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72bd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3420;
  func_0x000107c61428(param_1 + _DAT_112fa3420,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72be0; end: 100b72c27; -[SCARBarActivationEntryPoint arBarDeepLinkActivationConfigurationUpdatesServiceExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72be0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3428;
  func_0x000107c61428(param_1 + _DAT_112fa3428,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100b72c28; end: 100b72c67;  */

void FUN_100b72c28(void)

{
  func_0x000107c61168(&PTR_PTR_112fa0088);
  return;
}



/* Entry: 100b72c68; end: 100b72ce7; -[_TtC16ARBarIntegration43ARBarDeepLinkActivationConfigurationAdapter init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72c68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f9f678;
  FUN_1000285a8(0x112f62110,&UNK_10dc14a10);
  func_0x000107c613fc();
  uVar3 = 1;
  FUN_10008747c();
  *(undefined8 *)(param_1 + lVar1) = uVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b72ce8; end: 100b72db3;  */

/* WARNING: Possible PIC construction at 0x000100b72d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b72d98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b72d88) */
/* WARNING: Removing unreachable block (ram,0x000100b72d78) */
/* WARNING: Removing unreachable block (ram,0x000100b72d9c) */

void FUN_100b72ce8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2438;
  func_0x000107c61174();
  func_0x000107c5b2b4(puVar1);
  func_0x000107c61180();
  func_0x000107c4d960(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c5c1d4();
  func_0x000107c61180();
  func_0x000107c5e508(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100b72db4; end: 100b72ddf; +[SCGrapheneMemoriesMetric snapFeedNumEligibleItems] */

void FUN_100b72db4(void)

{
  func_0x000107c610f4(PTR_PTR_1126b2438);
  func_0x000107c46d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b72de0; end: 100b72de7; -[SCMainCameraScopedLensCarouselManagementServices lensCarouselManagementServices] */

undefined8 FUN_100b72de0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b72de8; end: 100b72def; -[SCLensCarouselManagementServices lensCarouselManager] */

undefined8 FUN_100b72de8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100b72df0; end: 100b72e0f;  */

void FUN_100b72df0(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2c90);
  return;
}



/* Entry: 100b72e10; end: 100b72e97;  */

undefined8 FUN_100b72e10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  FUN_1000d224c(&uStack_38);
  uVar1 = 0xd00000000000003f;
  func_0x000107c5fadc(0xd00000000000003f,0x800000010f00b8e0);
  uVar2 = uStack_38;
  func_0x000107c3ebd4(uStack_38);
  func_0x000107c615e8(uStack_38);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100b72e98; end: 100b72ebb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b72e98(void)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_11309b460) = 0;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b72ebc; end: 100b72ef3; -[SCScopeLifecycle hasPendingDeferredEntryPointForServicesContainer:] */

bool FUN_100b72ebc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x000107c42980(lVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  return lVar1 != 0;
}



/* Entry: 100b72ef4; end: 100b72f9b; -[SCScopeLifecycleDeferredEntryPoints entryPointFor:] */

void FUN_100b72ef4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  lVar1 = param_1;
  func_0x000107c3bbe8(param_1,param_2,param_3);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000107c4d9e8(uVar2,param_2,lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b72f9c; end: 100b7305b; -[SCScopeLifecycleDeferredEntryPoints requirementsFor:] */

void FUN_100b72f9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  lVar1 = param_1;
  func_0x000107c3bbe4(param_1,param_2,param_3);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c4d9e8(uVar2,param_2,lVar1);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40794();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100b7305c; end: 100b73103; -[SCScopeLifecycleDeferredEntryPoints entryPointBeganCallbacksFor:] */

void FUN_100b7305c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  lVar1 = param_1;
  func_0x000107c3bbe4(param_1,param_2,param_3);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4d9e8(uVar2,param_2,lVar1);
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100b73104; end: 100b732ff; -[SCScopeLifecycle _addDeferredEntryPoint:whenBegan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73104(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  func_0x000107c3c56c(param_1,param_2,param_3);
  func_0x000107c3d58c(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  func_0x000107c4fef4(*(undefined8 *)(param_1 + 0x18),param_2,param_3);
  puVar1 = &UNK_10f72786a;
  FUN_1000ba800();
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  func_0x000107c61174(param_4);
  lVar2 = param_4;
  func_0x000107c4080c(param_4,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar2 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          func_0x000107c61128(param_4);
        }
        (**(code **)(*(long *)(lStack_118 + lVar11 * 8) + 0x10))();
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = param_4;
      func_0x000107c4080c(param_4,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_4);
  func_0x0001000e2a84(puVar1);
  func_0x000107c3ad50(param_1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  lVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c60bd8();
  lVar10 = lVar2 + _DAT_112715cd0;
  func_0x000107c61148();
  lVar11 = lVar10;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  lVar3 = lVar11;
  func_0x000107c4b158();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  lVar10 = lVar2 + _DAT_112715cd4;
  func_0x000107c61148();
  lVar11 = lVar10;
  func_0x000107c4b0b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  lVar10 = lVar2 + _DAT_112715cd8;
  func_0x000107c61148();
  lVar4 = lVar10;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3f238();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar10);
  lVar10 = lVar2 + _DAT_112715cdc;
  func_0x000107c61148();
  lVar4 = lVar10;
  func_0x000107c3e060();
  func_0x000107c61180();
  func_0x000107c61170(lVar10);
  lVar10 = lVar2 + _DAT_112715ce0;
  func_0x000107c61148();
  lVar6 = lVar10;
  func_0x000107c4c15c();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c4d060();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar10);
  puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0xc2000000;
  puStack_1b8 = &UNK_104eb300c;
  puStack_1b0 = &UNK_110857538;
  puVar1 = PTR_PTR_1126ae720;
  lStack_1a8 = lVar3;
  lStack_1a0 = lVar11;
  lStack_198 = lVar4;
  lStack_190 = lVar8;
  lStack_188 = lVar5;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_1c8);
  func_0x000107c61180();
  puVar9 = PTR_PTR_1126b1b68;
  func_0x000107c610f4(PTR_PTR_1126b1b68);
  func_0x000107c4729c();
  func_0x000107c42c20(*(undefined8 *)(lVar2 + _DAT_112715ce4),param_2,puVar9);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100b73300; end: 100b73527; -[SCLensExplorerOnCameraPresentationServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73300(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = param_1 + _DAT_112715cd0;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4b158();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715cd4;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4b0b4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715cd8;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c3f238();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715cdc;
  func_0x000107c61148();
  lVar4 = lVar1;
  func_0x000107c3e060();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715ce0;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c4c15c();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar8 = lVar7;
  func_0x000107c4d060();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar1);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  puStack_98 = &UNK_104eb300c;
  puStack_90 = &UNK_110857538;
  puVar9 = PTR_PTR_1126ae720;
  lStack_88 = lVar3;
  lStack_80 = lVar2;
  lStack_78 = lVar4;
  lStack_70 = lVar8;
  lStack_68 = lVar5;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_a8);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126b1b68;
  func_0x000107c610f4(PTR_PTR_1126b1b68);
  func_0x000107c4729c();
  func_0x000107c42c20(*(undefined8 *)(param_1 + _DAT_112715ce4),param_2,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100b73528; end: 100b73537; -[_TtC15LensExplorerAPI44SCLensExplorerConfigurableNavigationServices lensExplorerConfigurableNavigation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130712e8));
  return;
}



/* Entry: 100b73538; end: 100b7353f; -[SCMainCameraScreenRouterImpl modalUIContainer] */

undefined8 FUN_100b73538(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 100b73540; end: 100b73597; -[_TtC15LensExplorerAPI42SCLensExplorerOnCameraPresentationServices initWithLensExplorerOnCameraPresentation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73540(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_1130713a0) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 100b73598; end: 100b7377f; -[SCScopeLifecycleDeferredEntryPoints removeDeferredEntryPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73598(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c611a4(param_1);
  lVar1 = param_1;
  func_0x000107c3bbe4(param_1);
  func_0x000107c61180();
  func_0x000107c4ff88(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c4ff88(*(undefined8 *)(param_1 + 0x20));
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x000107c4d9e8();
  func_0x000107c61180();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107c61174();
  lVar3 = lVar2;
  func_0x000107c4080c();
  if (lVar3 != 0) {
    lVar5 = *plStack_120;
    do {
      lVar6 = 0;
      do {
        if (*plStack_120 != lVar5) {
          func_0x000107c61128(lVar2);
        }
        lVar4 = param_1;
        func_0x000107c3bbe8(param_1);
        func_0x000107c61180();
        func_0x000107c4ff88(*(undefined8 *)(param_1 + 8));
        func_0x000107c61170(lVar4);
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x000107c4080c();
    } while (lVar3 != 0);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c4ff88(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c611a8(param_1);
  func_0x000107c61170(param_1);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(param_1);
  lVar1 = param_3;
  func_0x000107c60bd8();
  pcStack_138 = FUN_100b73780;
  lVar3 = lVar1;
  lStack_150 = param_3;
  lStack_148 = param_1;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c614f0();
  func_0x000107c61614(lVar1 + _DAT_113028028,0);
  func_0x000107c61614(lVar1 + _DAT_113028030,0);
  *(undefined8 *)(lVar1 + _DAT_113028038) = 0;
  lStack_160 = lVar1;
  lStack_158 = lVar3;
  func_0x000107c61154(&lStack_160,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b73780; end: 100b737f3; -[SCSCLensExplorerBadgeServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73780(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113028028,0);
  func_0x000107c61614(param_1 + _DAT_113028030,0);
  *(undefined8 *)(param_1 + _DAT_113028038) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b737f4; end: 100b7389f; -[SCSCLensExplorerBadgeServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b737f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b738a0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b738a0; end: 100b73a37;  */

void FUN_100b738a0(long param_1,long param_2,long param_3)

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
                            "LensUserSessionScopeGraphBridge/SCSCLensExplorerBadgeServicesSaberServiceProvider.swift"
                            ,0x57,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b73a38);
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



/* Entry: 100b73a38; end: 100b73a43; -[SCSCLensExplorerBadgeServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73a38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113028028;
  func_0x000107c61428(param_1 + _DAT_113028028,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b73a44; end: 100b73a97;  */

void FUN_100b73a44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b73a98; end: 100b73aa3; -[SCSCLensExplorerBadgeServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113028030;
  func_0x000107c61428(param_1 + _DAT_113028030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b73aa4; end: 100b73ad7; -[SCSCLensExplorerBadgeServicesSaberServiceProvider __safeProvide] */

void FUN_100b73aa4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b73ad8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b73ad8; end: 100b73bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73ad8(void)

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
      FUN_100b73c1c();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_1130266a8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113028038);
      *(long *)(unaff_x20 + _DAT_113028038) = lVar3;
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



/* Entry: 100b73bc0; end: 100b73bcb; -[SCSCLensExplorerBadgeServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73bc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113028028;
  func_0x000107c61428(param_1 + _DAT_113028028,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b73bcc; end: 100b73c0f;  */

void FUN_100b73bcc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b73c10; end: 100b73c1b; -[SCSCLensExplorerBadgeServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73c10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113028030;
  func_0x000107c61428(param_1 + _DAT_113028030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b73c1c; end: 100b73c97;  */

void FUN_100b73c1c(undefined8 param_1)

{
  if (lRam0000000113024080 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cf494);
  return;
}



/* Entry: 100b73c98; end: 100b73d0b; -[SCSCLensesFeatureServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73c98(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ee1e68,0);
  func_0x000107c61614(param_1 + _DAT_112ee1e70,0);
  *(undefined8 *)(param_1 + _DAT_112ee1e78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100b73d0c; end: 100b73db7; -[SCSCLensesFeatureServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100b73d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100b73db8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100183ab8(auStack_50);
  return;
}



/* Entry: 100b73db8; end: 100b73f4f;  */

void FUN_100b73db8(long param_1,long param_2,long param_3)

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
                            "CameraUIScopeGraphBridge/SCSCLensesFeatureServicesSaberServiceProvider.swift"
                            ,0x4c,2,0x100,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b73f50);
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



/* Entry: 100b73f50; end: 100b73f5b; -[SCSCLensesFeatureServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73f50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee1e68;
  func_0x000107c61428(param_1 + _DAT_112ee1e68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b73f5c; end: 100b73faf;  */

void FUN_100b73f5c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b73fb0; end: 100b73fbb; -[SCSCLensesFeatureServicesSaberServiceProvider setCameraUIScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ee1e70;
  func_0x000107c61428(param_1 + _DAT_112ee1e70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100b73fbc; end: 100b73fef; -[SCSCLensesFeatureServicesSaberServiceProvider __safeProvide] */

void FUN_100b73fbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100b73ff0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100b73ff0; end: 100b740d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b73ff0(void)

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
      FUN_100b74134();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_112edeea8);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ee1e78);
      *(long *)(unaff_x20 + _DAT_112ee1e78) = lVar3;
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



/* Entry: 100b740d8; end: 100b740e3; -[SCSCLensesFeatureServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b740d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee1e68;
  func_0x000107c61428(param_1 + _DAT_112ee1e68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b740e4; end: 100b74127;  */

void FUN_100b740e4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100b74128; end: 100b74133; -[SCSCLensesFeatureServicesSaberServiceProvider cameraUIScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b74128(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ee1e70;
  func_0x000107c61428(param_1 + _DAT_112ee1e70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100b74134; end: 100b741af;  */

void FUN_100b74134(undefined8 param_1)

{
  if (lRam0000000112ede8b0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e70b4dc);
  return;
}



/* Entry: 100b741b0; end: 100b746eb; -[SCLensExplorerAboveMiniCarouselButtonEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b741b0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lVar23 = (long)_DAT_112715ba0;
  lVar1 = param_1 + lVar23;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c3f238();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar23;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c5dd3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x100b74744;
  puStack_88 = &UNK_110857408;
  puVar5 = PTR_PTR_1126ae720;
  lStack_80 = lVar4;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  lVar1 = param_1 + _DAT_112715ba4;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c3f290();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715ba8;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar7 = lVar6;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715bac;
  func_0x000107c61148();
  lVar6 = lVar1;
  func_0x000107c4b0dc();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + lVar23;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c4008c();
  func_0x000107c61180();
  lVar9 = lVar8;
  func_0x000107c4cf78();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715bb0;
  func_0x000107c61148();
  lVar8 = lVar1;
  func_0x000107c4b0a4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715bb4;
  func_0x000107c61148(lVar1);
  lVar10 = lVar1;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715bb8;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c4c15c();
  func_0x000107c61180();
  lVar12 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar13 = lVar12;
  func_0x000107c4b098();
  func_0x000107c61180();
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_112715bbc;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c4af88();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar14 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112715bc0);
  *(undefined **)(param_1 + _DAT_112715bc0) = puVar14;
  func_0x000107c61170(uVar22);
  uVar15 = param_1 + lVar23;
  func_0x000107c61148();
  uVar16 = uVar15;
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar17 = uVar16;
  func_0x000107c4cf78();
  func_0x000107c61180();
  uVar18 = uVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar19 = uVar18;
  func_0x000107c4ac6c();
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  if ((uVar19 & 1) == 0) {
    func_0x000107c40aa4(puVar5);
    func_0x000107c611b0();
  }
  puVar14 = PTR_PTR_1126b1b48;
  func_0x000107c610f4();
  func_0x000107c45c78();
  uVar22 = *(undefined8 *)(param_1 + _DAT_112715bc4);
  *(undefined **)(param_1 + _DAT_112715bc4) = puVar14;
  func_0x000107c61170(uVar22);
  puVar14 = PTR_PTR_1126af680;
  func_0x000107c5a9f0();
  func_0x000107c61180();
  puVar20 = puVar14;
  func_0x000107c49a44();
  func_0x000107c61170(puVar14);
  if (((int)uVar19 == 0) || (((ulong)puVar20 & 1) != 0)) {
    func_0x000107c3aef0(param_1);
  }
  else {
    func_0x000107c61144(auStack_a8,param_1);
    param_1 = param_1 + _DAT_112715bcc;
    func_0x000107c61148(param_1);
    lVar1 = param_1;
    func_0x000107c3dfac();
    func_0x000107c61180();
    lVar12 = lVar1;
    func_0x000107c5bc9c();
    func_0x000107c61180();
    lVar23 = lVar12;
    func_0x000107c5c6c0();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b0,auStack_a8);
    lVar21 = lVar23;
    func_0x000107c5c320(lVar23);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar21);
    func_0x000107c61170(lVar23);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(param_1);
    func_0x000107c61120(auStack_b0);
    func_0x000107c61120(auStack_a8);
  }
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 100b746ec; end: 100b746fb; -[_TtC15LensExplorerAPI42SCLensExplorerOnCameraPresentationServices lensExplorerOnCameraPresentation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b746ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130713a0));
  return;
}



/* Entry: 100b746fc; end: 100b74703; -[SCMainCameraScreenRouterImpl lensExploreButtonContainer] */

undefined8 FUN_100b746fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100b74704; end: 100b747a3; -[SCCameraMiniCarouselConfigurationImpl lazyLensExplorerButtonAboveCarouselEnabled] */

undefined8 FUN_100b74704(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5ac68();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100b747a4; end: 100b7481f; -[SCLensExplorerAboveMiniCarouselButtonImpl initWithIconStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100b747a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e4c70;
  uStack_30 = param_1;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_30,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_112715be0) = param_3;
    func_0x000107c3c63c(puVar1);
    func_0x000107c550d8(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 100b74820; end: 100b74cd3; -[SCLensExplorerAboveMiniCarouselButtonImpl _setupButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b74820(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
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
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  
  lVar21 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c61160();
  lVar22 = param_1;
  func_0x000107c3bc80(param_1);
  func_0x000107c61180();
  func_0x000107c55258(puVar1);
  func_0x000107c61170(lVar22);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c59e10(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c53840(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x4034000000000000);
  func_0x000107c61170(puVar2);
  func_0x000107c520f4(puVar1);
  func_0x000107c55528(puVar1);
  func_0x000107c5a050(puVar1);
  lVar22 = param_1;
  if (*(long *)(param_1 + _DAT_112715be0) == 0) {
    func_0x000107c3c634();
    func_0x000107c61180();
  }
  else {
    func_0x000107c3c620();
    func_0x000107c61180();
    puVar2 = PTR_PTR_1126b08d8;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
    FUN_100b74f58(0x4020000000000000,0x3fe4cccccccccccd,*(undefined8 *)PTR__CGSizeZero_110347620,
                  *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2,param_1,puVar3);
    func_0x000107c61170(puVar3);
  }
  uVar23 = *(undefined8 *)(param_1 + _DAT_112715be4);
  *(long *)(param_1 + _DAT_112715be4) = lVar22;
  func_0x000107c61174(lVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c3d89c(lVar22);
  func_0x000107c3c664(param_1);
  func_0x000107c3d89c(param_1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar4 = lVar22;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar5 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  lVar6 = lVar22;
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar7 = puVar1;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar8 = lVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  lVar9 = param_1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar10 = lVar22;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar11 = lVar9;
  func_0x000107c40280();
  func_0x000107c61180();
  lVar12 = param_1;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar13 = lVar22;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar14 = lVar12;
  func_0x000107c40280();
  func_0x000107c61180();
  lVar15 = param_1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar16 = lVar22;
  func_0x000107c5cbe4(lVar22);
  func_0x000107c61180();
  lVar17 = lVar15;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar18 = lVar22;
  func_0x000107c3ec1c(lVar22);
  func_0x000107c61180();
  lVar19 = param_1;
  func_0x000107c40280();
  func_0x000107c61180();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(puVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(lVar4);
  puVar2 = puVar1;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar21) {
    return;
  }
  func_0x000107c60e78();
  puVar3 = PTR_PTR_1126b0c40;
  lVar22 = *(long *)(puVar2 + _DAT_112715be0);
  puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar22 == 2) {
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
  }
  else {
    if (lVar22 != 1) {
      puVar3 = puVar1;
      if (lVar22 == 0) {
        func_0x000107c2ab64();
        func_0x000107c61180();
        puVar3 = puVar2;
      }
      goto LAB_100b74d9c;
    }
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c61180();
  }
  func_0x000107c45098(0x4038000000000000,0x4038000000000000,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
LAB_100b74d9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100b74cd4; end: 100b74dab; -[SCLensExplorerAboveMiniCarouselButtonImpl _lensExplorerIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b74cd4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *unaff_x19;
  
  puVar2 = PTR_PTR_1126b0c40;
  lVar4 = *(long *)(param_1 + _DAT_112715be0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (lVar4 == 2) {
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    func_0x000107c61180();
    uVar3 = 0x105;
  }
  else {
    if (lVar4 != 1) {
      puVar2 = unaff_x19;
      if (lVar4 == 0) {
        func_0x000107c2ab64();
        func_0x000107c61180();
        puVar2 = param_1;
      }
      goto LAB_100b74d9c;
    }
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    func_0x000107c61180();
    uVar3 = 0x104;
  }
  func_0x000107c45098(0x4038000000000000,0x4038000000000000,puVar2,param_2,uVar3,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
LAB_100b74d9c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100b74dac; end: 100b74f57; -[SCLensExplorerAboveMiniCarouselButtonImpl _setupBackgroundView] */

/* WARNING: Possible PIC construction at 0x000100b74e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74ef4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74f14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7504c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b75050) */
/* WARNING: Removing unreachable block (ram,0x000100b75028) */
/* WARNING: Removing unreachable block (ram,0x000100b75004) */
/* WARNING: Removing unreachable block (ram,0x000100b74fec) */
/* WARNING: Removing unreachable block (ram,0x000100b74fc8) */
/* WARNING: Removing unreachable block (ram,0x000100b74f18) */
/* WARNING: Removing unreachable block (ram,0x000100b74f54) */
/* WARNING: Removing unreachable block (ram,0x000100b74f30) */
/* WARNING: Removing unreachable block (ram,0x000107c61110) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf288) */
/* WARNING: Removing unreachable block (ram,0x000100b74f08) */
/* WARNING: Removing unreachable block (ram,0x000100b74ef8) */
/* WARNING: Removing unreachable block (ram,0x000100b74e5c) */
/* WARNING: Removing unreachable block (ram,0x000100b74e2c) */
/* WARNING: Removing unreachable block (ram,0x000100b7506c) */

void FUN_100b74dac(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIView_1126aec20);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5a050();
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100b74f58; end: 100b75097;  */

/* WARNING: Possible PIC construction at 0x000100b74fc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b74fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b7504c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100b75068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b75050) */
/* WARNING: Removing unreachable block (ram,0x000100b75028) */
/* WARNING: Removing unreachable block (ram,0x000100b75004) */
/* WARNING: Removing unreachable block (ram,0x000100b74fec) */
/* WARNING: Removing unreachable block (ram,0x000100b74fc8) */
/* WARNING: Removing unreachable block (ram,0x000100b7506c) */

void FUN_100b74f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61168(param_1);
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c59040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100b75098; end: 100b750f3; -[SCLensExplorerAboveMiniCarouselButtonImpl _setupGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b75098(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
  func_0x000107c610f4(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
  func_0x000107c48c2c();
  func_0x000107c56704(0);
  func_0x000107c3d6fc(*(undefined8 *)(param_1 + _DAT_112715be4),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100b750f4; end: 100b752bb; -[SCLensExplorerAboveMiniCarouselButtonWorkflow initWithCameraUIScopeViewContainer:lensCarouselManager:lensExplorerPresentation:miniCarouselConfig:lensExplorerBadgeUsageTracking:lensPerformerProvider:aboveMiniCarouselButton:cameraSwitcherConfig:lensExplorerButtonContainer:lensCollectionTabBarObserver:] */

undefined8 *
FUN_100b750f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
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
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126e4c80;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0(puVar1 + 1,param_3);
    func_0x000107c611a0(puVar1 + 5,param_4);
    func_0x000107c611a0(puVar1 + 2,param_5);
    func_0x000107c611a0(puVar1 + 3,param_6);
    func_0x000107c611a0(puVar1 + 4,param_7);
    func_0x000107c611a0(puVar1 + 6,param_8);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 10,param_10);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0(puVar1 + 7,param_11);
    func_0x000107c611a0(puVar1 + 0xb,param_12);
  }
  func_0x000107c61170(param_12);
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



/* Entry: 100b752bc; end: 100b75327; -[SCLensExplorerAboveMiniCarouselButtonEntryPoint _beginWorkflow] */

/* WARNING: Possible PIC construction at 0x000100b75310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100b75314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100b752bc(long param_1)

{
  func_0x000107c3e740(*(undefined8 *)(param_1 + _DAT_112715bc4));
  FUN_100b7617c(param_1);
  func_0x000107c61180();
  func_0x000107c5d198();
  func_0x000107c61180();
  func_0x000107c4fc08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100b75328; end: 100b756a7; -[SCLensExplorerAboveMiniCarouselButtonWorkflow begin] */

ulong FUN_100b75328(double param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar12 = param_2;
  func_0x000107c3ba84();
  if ((uVar12 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010be35530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__hideButton__11256aee8,1);
      return param_2;
    }
  }
  else {
    func_0x000107c3c6c0(param_2);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c61170(uVar2);
    uVar3 = param_2 + 8;
    func_0x000107c61148();
    uVar4 = uVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar12 = uVar4;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    uVar3 = uVar12;
    func_0x000107c44dd8();
    func_0x000107c61180();
    uVar4 = uVar12;
    func_0x000107c3f250();
    func_0x000107c61180();
    lVar5 = param_2 + 0x50;
    func_0x000107c61148();
    lVar6 = lVar5;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar7 = lVar6;
    func_0x000107c49cd8();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    if ((int)lVar7 == 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c3d89c(uVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c4abfc(uVar4);
      func_0x000107c3ebfc(uVar4);
      func_0x000107c609b0();
      lVar7 = *(long *)(param_2 + 0x40);
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar6 = lVar7;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar8 = uVar4;
      func_0x000107c3f764(uVar4);
      func_0x000107c61180();
      lVar5 = lVar6;
      func_0x000107c40284(param_1 * -0.5);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar7);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar9 = *(long *)(param_2 + 0x40);
      func_0x000107c5c734();
      func_0x000107c61180();
      lVar6 = lVar9;
      func_0x000107c50890();
      func_0x000107c61180();
      uVar8 = uVar3;
      func_0x000107c50890(uVar3);
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c40284(0xc020000000000000);
      func_0x000107c61180();
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
      func_0x000107c61180();
      func_0x000107c3d048(puVar1);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(lVar7);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar6);
    }
    else {
      lVar5 = param_2 + 0x38;
      func_0x000107c61148();
      lVar9 = lVar5;
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar2 = *(undefined8 *)(param_2 + 0x40);
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c3e2c8(lVar9);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(lVar9);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
      return uVar12;
    }
  }
  func_0x000107c60e78();
  lVar11 = uVar12 + 0x18;
  func_0x000107c61148();
  lVar5 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c426e0();
  if ((int)lVar6 == 0) {
    uVar12 = 0;
  }
  else {
    lVar6 = uVar12 + 0x18;
    func_0x000107c61148(lVar6);
    lVar7 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar9 = lVar7;
    func_0x000107c4b10c();
    uVar12 = (ulong)((uint)lVar9 ^ 1);
    func_0x000107c61170(lVar7);
    func_0x000107c61170(lVar6);
  }
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar11);
  return uVar12;
}



/* Entry: 100b756a8; end: 100b75747; -[SCLensExplorerAboveMiniCarouselButtonWorkflow _isAboveMiniCarouselLEButtonEnabled] */

uint FUN_100b756a8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  
  lVar1 = param_1 + 0x18;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c426e0();
  if ((int)lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
    func_0x000107c61148(param_1);
    lVar3 = param_1;
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c4b10c();
    uVar5 = (uint)lVar4 ^ 1;
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  return uVar5;
}


