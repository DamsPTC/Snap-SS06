/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f5cc1c; end: 101f5ccc7; -[SCSpectaclesDeviceFeatureScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f5cc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f5ca84(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f5ccc8; end: 101f5cd33; -[SCSpectaclesDeviceFeatureScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ccc8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45320,0);
  *(undefined8 *)(param_1 + _DAT_112e45328) = 0;
  *(undefined8 *)(param_1 + _DAT_112e45330) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f5cd34; end: 101f5cd67;  */

void FUN_101f5cd34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f5cd68; end: 101f5cdaf; -[SCSpectaclesDeviceFeatureScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f5cd94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5cd98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5cd68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45320);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45328));
  return;
}



/* Entry: 101f5cdb0; end: 101f5cdcf;  */

void FUN_101f5cdb0(void)

{
  func_0x000107c61168(&PTR_PTR_11280bdd8);
  return;
}



/* Entry: 101f5cdd0; end: 101f5cddb; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5cdd0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45360;
  func_0x000107c61428(param_1 + _DAT_112e45360,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5cddc; end: 101f5cde7; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5cddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45360;
  func_0x000107c61428(param_1 + _DAT_112e45360,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5cde8; end: 101f5cdf3; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint spectaclesDeviceFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5cde8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45368;
  func_0x000107c61428(param_1 + _DAT_112e45368,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5cdf4; end: 101f5ce37;  */

void FUN_101f5cdf4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f5ce38; end: 101f5ce43; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint setSpectaclesDeviceFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ce38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45368;
  func_0x000107c61428(param_1 + _DAT_112e45368,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5ce44; end: 101f5ce97;  */

void FUN_101f5ce44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5ce98; end: 101f5cedf; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint sCSpectaclesAudioSettingsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ce98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45370;
  func_0x000107c61428(param_1 + _DAT_112e45370,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f5cee0; end: 101f5cf43; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint setSCSpectaclesAudioSettingsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5cee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45370;
  func_0x000107c61428(param_1 + _DAT_112e45370,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f5cf44; end: 101f5d0c7;  */

/* WARNING: Possible PIC construction at 0x000101f5d044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5d054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5d070: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5d048) */
/* WARNING: Removing unreachable block (ram,0x000101f5d058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5cf44(void)

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
    func_0x000107c5b6f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51328();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101f59d34();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e45240);
        *(undefined8 *)(lVar2 + _DAT_112e44e08) = uVar6;
        *(long *)(lVar2 + _DAT_112e44e10) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e44e10);
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



/* Entry: 101f5d0c8; end: 101f5d0ef; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint begin] */

void FUN_101f5d0c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f5cf44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f5d0f0; end: 101f5d133; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint end] */

void FUN_101f5d0f0(undefined8 param_1)

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



/* Entry: 101f5d134; end: 101f5d337;  */

void FUN_101f5d134(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0fdfaa0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f020560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0fdfa70)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000028,0x800000010f020590,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesDeviceFeatureScopeGraphBridge/SCSCSpectaclesAudioSettingsServicesSaberEntryPoint.swift"
                                ,0x60,2,0x58,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101f5d338);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588d0();
        goto LAB_101f5d1c0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595d8();
  }
LAB_101f5d1c0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f5d338; end: 101f5d3e3; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f5d338(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f5d134(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f5d3e4; end: 101f5d463; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d3e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45360,0);
  func_0x000107c61614(param_1 + _DAT_112e45368,0);
  *(undefined8 *)(param_1 + _DAT_112e45370) = 0;
  *(undefined8 *)(param_1 + _DAT_112e45378) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f5d464; end: 101f5d497;  */

void FUN_101f5d464(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f5d498; end: 101f5d4ef; -[SCSCSpectaclesAudioSettingsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f5d4d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5d4d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d498(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45360);
  func_0x000107c61610(param_1 + _DAT_112e45368);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45370));
  return;
}



/* Entry: 101f5d4f0; end: 101f5d50f;  */

void FUN_101f5d4f0(void)

{
  func_0x000107c61168(&PTR_PTR_11280bea0);
  return;
}



/* Entry: 101f5d510; end: 101f5d51b; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d510(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e453a8;
  func_0x000107c61428(param_1 + _DAT_112e453a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5d51c; end: 101f5d527; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d51c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e453a8;
  func_0x000107c61428(param_1 + _DAT_112e453a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5d528; end: 101f5d533; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint spectaclesDeviceFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d528(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e453b0;
  func_0x000107c61428(param_1 + _DAT_112e453b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5d534; end: 101f5d577;  */

void FUN_101f5d534(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f5d578; end: 101f5d583; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint setSpectaclesDeviceFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d578(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e453b0;
  func_0x000107c61428(param_1 + _DAT_112e453b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5d584; end: 101f5d5d7;  */

void FUN_101f5d584(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5d5d8; end: 101f5d61f; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint sCSpectaclesBrightnessSettingsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d5d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e453b8;
  func_0x000107c61428(param_1 + _DAT_112e453b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f5d620; end: 101f5d683; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint setSCSpectaclesBrightnessSettingsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e453b8;
  func_0x000107c61428(param_1 + _DAT_112e453b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f5d684; end: 101f5d807;  */

/* WARNING: Possible PIC construction at 0x000101f5d784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5d794: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5d7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5d788) */
/* WARNING: Removing unreachable block (ram,0x000101f5d798) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5d684(void)

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
    func_0x000107c5b6f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51338();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101f59eec();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e45248);
        *(undefined8 *)(lVar2 + _DAT_112e44e40) = uVar6;
        *(long *)(lVar2 + _DAT_112e44e48) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e44e48);
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



/* Entry: 101f5d808; end: 101f5d82f; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint begin] */

void FUN_101f5d808(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f5d684();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f5d830; end: 101f5d873; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint end] */

void FUN_101f5d830(undefined8 param_1)

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



/* Entry: 101f5d874; end: 101f5da77;  */

void FUN_101f5d874(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0fdfaa0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f020560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd3) || (param_3 != -0x7ffffffef0fdf9d0)) {
          uVar2 = 0xd00000000000002d;
          func_0x000107c605b8(0xd00000000000002d,0x800000010f020630,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesDeviceFeatureScopeGraphBridge/SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint.swift"
                                ,0x65,2,0x58,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101f5da78);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588e0();
        goto LAB_101f5d900;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595d8();
  }
LAB_101f5d900:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f5da78; end: 101f5db23; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f5da78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f5d874(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f5db24; end: 101f5dba3; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5db24(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e453a8,0);
  func_0x000107c61614(param_1 + _DAT_112e453b0,0);
  *(undefined8 *)(param_1 + _DAT_112e453b8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e453c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f5dba4; end: 101f5dbd7;  */

void FUN_101f5dba4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f5dbd8; end: 101f5dc2f; -[SCSCSpectaclesBrightnessSettingsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f5dc14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5dc18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5dbd8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e453a8);
  func_0x000107c61610(param_1 + _DAT_112e453b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e453b8));
  return;
}



/* Entry: 101f5dc30; end: 101f5dc4f;  */

void FUN_101f5dc30(void)

{
  func_0x000107c61168(&PTR_PTR_11280bf70);
  return;
}



/* Entry: 101f5dc50; end: 101f5dc5b; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5dc50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e453f0;
  func_0x000107c61428(param_1 + _DAT_112e453f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5dc5c; end: 101f5dc67; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5dc5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e453f0;
  func_0x000107c61428(param_1 + _DAT_112e453f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5dc68; end: 101f5dc73; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint spectaclesDeviceFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5dc68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e453f8;
  func_0x000107c61428(param_1 + _DAT_112e453f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5dc74; end: 101f5dcb7;  */

void FUN_101f5dc74(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f5dcb8; end: 101f5dcc3; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint setSpectaclesDeviceFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5dcb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e453f8;
  func_0x000107c61428(param_1 + _DAT_112e453f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5dcc4; end: 101f5dd17;  */

void FUN_101f5dcc4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5dd18; end: 101f5dd5f; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint sCSpectaclesDeveloperModeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5dd18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45400;
  func_0x000107c61428(param_1 + _DAT_112e45400,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f5dd60; end: 101f5ddc3; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint setSCSpectaclesDeveloperModeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5dd60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45400;
  func_0x000107c61428(param_1 + _DAT_112e45400,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f5ddc4; end: 101f5df47;  */

/* WARNING: Possible PIC construction at 0x000101f5dec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5ded4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5def0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5dec8) */
/* WARNING: Removing unreachable block (ram,0x000101f5ded8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ddc4(void)

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
    func_0x000107c5b6f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51350();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101f5a0a4();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e45250);
        *(undefined8 *)(lVar2 + _DAT_112e44e78) = uVar6;
        *(long *)(lVar2 + _DAT_112e44e80) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e44e80);
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



/* Entry: 101f5df48; end: 101f5df6f; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint begin] */

void FUN_101f5df48(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f5ddc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f5df70; end: 101f5dfb3; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint end] */

void FUN_101f5df70(undefined8 param_1)

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



/* Entry: 101f5dfb4; end: 101f5e1b7;  */

void FUN_101f5dfb4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0fdfaa0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f020560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd8) || (param_3 != -0x7ffffffef0fdf930)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000028,0x800000010f0206d0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesDeviceFeatureScopeGraphBridge/SCSCSpectaclesDeveloperModeServicesSaberEntryPoint.swift"
                                ,0x60,2,0x58,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101f5e1b8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c588f8();
        goto LAB_101f5e040;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595d8();
  }
LAB_101f5e040:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f5e1b8; end: 101f5e263; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f5e1b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f5dfb4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f5e264; end: 101f5e2e3; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e264(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e453f0,0);
  func_0x000107c61614(param_1 + _DAT_112e453f8,0);
  *(undefined8 *)(param_1 + _DAT_112e45400) = 0;
  *(undefined8 *)(param_1 + _DAT_112e45408) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f5e2e4; end: 101f5e317;  */

void FUN_101f5e2e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f5e318; end: 101f5e36f; -[SCSCSpectaclesDeveloperModeServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f5e354: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5e358) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e318(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e453f0);
  func_0x000107c61610(param_1 + _DAT_112e453f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45400));
  return;
}



/* Entry: 101f5e370; end: 101f5e38f;  */

void FUN_101f5e370(void)

{
  func_0x000107c61168(&PTR_PTR_11280c040);
  return;
}



/* Entry: 101f5e390; end: 101f5e39b; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e390(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45438;
  func_0x000107c61428(param_1 + _DAT_112e45438,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5e39c; end: 101f5e3a7; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45438;
  func_0x000107c61428(param_1 + _DAT_112e45438,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5e3a8; end: 101f5e3b3; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint spectaclesDeviceFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e3a8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45440;
  func_0x000107c61428(param_1 + _DAT_112e45440,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5e3b4; end: 101f5e3f7;  */

void FUN_101f5e3b4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f5e3f8; end: 101f5e403; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint setSpectaclesDeviceFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e3f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45440;
  func_0x000107c61428(param_1 + _DAT_112e45440,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5e404; end: 101f5e457;  */

void FUN_101f5e404(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5e458; end: 101f5e49f; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint sCSpectaclesDeviceReportIssueServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45448;
  func_0x000107c61428(param_1 + _DAT_112e45448,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f5e4a0; end: 101f5e503; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint setSCSpectaclesDeviceReportIssueServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e4a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45448;
  func_0x000107c61428(param_1 + _DAT_112e45448,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f5e504; end: 101f5e687;  */

/* WARNING: Possible PIC construction at 0x000101f5e604: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5e614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5e630: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5e608) */
/* WARNING: Removing unreachable block (ram,0x000101f5e618) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e504(void)

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
    func_0x000107c5b6f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5135c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101f5a25c();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e45258);
        *(undefined8 *)(lVar2 + _DAT_112e44eb0) = uVar6;
        *(long *)(lVar2 + _DAT_112e44eb8) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e44eb8);
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



/* Entry: 101f5e688; end: 101f5e6af; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint begin] */

void FUN_101f5e688(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f5e504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f5e6b0; end: 101f5e6f3; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint end] */

void FUN_101f5e6b0(undefined8 param_1)

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



/* Entry: 101f5e6f4; end: 101f5e8f7;  */

void FUN_101f5e6f4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0fdfaa0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f020560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef0fdf890)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd00000000000002c,0x800000010f020770,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesDeviceFeatureScopeGraphBridge/SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint.swift"
                                ,100,2,0x58,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101f5e8f8);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58904();
        goto LAB_101f5e780;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595d8();
  }
LAB_101f5e780:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f5e8f8; end: 101f5e9a3; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f5e8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f5e6f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f5e9a4; end: 101f5ea23; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5e9a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45438,0);
  func_0x000107c61614(param_1 + _DAT_112e45440,0);
  *(undefined8 *)(param_1 + _DAT_112e45448) = 0;
  *(undefined8 *)(param_1 + _DAT_112e45450) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f5ea24; end: 101f5ea57;  */

void FUN_101f5ea24(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f5ea58; end: 101f5eaaf; -[SCSCSpectaclesDeviceReportIssueServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f5ea94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5ea98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ea58(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45438);
  func_0x000107c61610(param_1 + _DAT_112e45440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45448));
  return;
}



/* Entry: 101f5eab0; end: 101f5eacf;  */

void FUN_101f5eab0(void)

{
  func_0x000107c61168(&PTR_PTR_11280c110);
  return;
}



/* Entry: 101f5ead0; end: 101f5eadb; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ead0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45480;
  func_0x000107c61428(param_1 + _DAT_112e45480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5eadc; end: 101f5eae7; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5eadc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45480;
  func_0x000107c61428(param_1 + _DAT_112e45480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5eae8; end: 101f5eaf3; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint spectaclesDeviceFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5eae8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45488;
  func_0x000107c61428(param_1 + _DAT_112e45488,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5eaf4; end: 101f5eb37;  */

void FUN_101f5eaf4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f5eb38; end: 101f5eb43; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint setSpectaclesDeviceFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5eb38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45488;
  func_0x000107c61428(param_1 + _DAT_112e45488,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5eb44; end: 101f5eb97;  */

void FUN_101f5eb44(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5eb98; end: 101f5ebdf; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint sCSpectaclesDeviceSecurityServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5eb98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e45490;
  func_0x000107c61428(param_1 + _DAT_112e45490,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f5ebe0; end: 101f5ec43; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint setSCSpectaclesDeviceSecurityServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ebe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e45490;
  func_0x000107c61428(param_1 + _DAT_112e45490,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f5ec44; end: 101f5edc7;  */

/* WARNING: Possible PIC construction at 0x000101f5ed44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5ed54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5ed70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5ed48) */
/* WARNING: Removing unreachable block (ram,0x000101f5ed58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5ec44(void)

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
    func_0x000107c5b6f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51360();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101f5a414();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e45260);
        *(undefined8 *)(lVar2 + _DAT_112e44ee8) = uVar6;
        *(long *)(lVar2 + _DAT_112e44ef0) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e44ef0);
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



/* Entry: 101f5edc8; end: 101f5edef; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint begin] */

void FUN_101f5edc8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f5ec44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f5edf0; end: 101f5ee33; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint end] */

void FUN_101f5edf0(undefined8 param_1)

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



/* Entry: 101f5ee34; end: 101f5f037;  */

void FUN_101f5ee34(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0fdfaa0)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f020560,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2fffffffffffffd7) || (param_3 != -0x7ffffffef0fdf7f0)) {
          uVar2 = 0xd000000000000029;
          func_0x000107c605b8(0xd000000000000029,0x800000010f020810,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SpectaclesDeviceFeatureScopeGraphBridge/SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint.swift"
                                ,0x61,2,0x58,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101f5f038);
            (*pcVar1)();
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58908();
        goto LAB_101f5eec0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c595d8();
  }
LAB_101f5eec0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f5f038; end: 101f5f0e3; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f5f038(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f5ee34(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f5f0e4; end: 101f5f163; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f0e4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e45480,0);
  func_0x000107c61614(param_1 + _DAT_112e45488,0);
  *(undefined8 *)(param_1 + _DAT_112e45490) = 0;
  *(undefined8 *)(param_1 + _DAT_112e45498) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f5f164; end: 101f5f197;  */

void FUN_101f5f164(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f5f198; end: 101f5f1ef; -[SCSCSpectaclesDeviceSecurityServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f5f1d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5f1d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f198(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e45480);
  func_0x000107c61610(param_1 + _DAT_112e45488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e45490));
  return;
}



/* Entry: 101f5f1f0; end: 101f5f20f;  */

void FUN_101f5f1f0(void)

{
  func_0x000107c61168(&PTR_PTR_11280c1e0);
  return;
}



/* Entry: 101f5f210; end: 101f5f21b; -[SCSCSpectaclesDeviceSettingsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f210(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e454c8;
  func_0x000107c61428(param_1 + _DAT_112e454c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5f21c; end: 101f5f227; -[SCSCSpectaclesDeviceSettingsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f21c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e454c8;
  func_0x000107c61428(param_1 + _DAT_112e454c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5f228; end: 101f5f233; -[SCSCSpectaclesDeviceSettingsServicesSaberEntryPoint spectaclesDeviceFeatureScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f228(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e454d0;
  func_0x000107c61428(param_1 + _DAT_112e454d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f5f234; end: 101f5f277;  */

void FUN_101f5f234(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101f5f278; end: 101f5f283; -[SCSCSpectaclesDeviceSettingsServicesSaberEntryPoint setSpectaclesDeviceFeatureScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f278(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e454d0;
  func_0x000107c61428(param_1 + _DAT_112e454d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5f284; end: 101f5f2d7;  */

void FUN_101f5f284(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f5f2d8; end: 101f5f31f; -[SCSCSpectaclesDeviceSettingsServicesSaberEntryPoint sCSpectaclesDeviceSettingsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f2d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e454d8;
  func_0x000107c61428(param_1 + _DAT_112e454d8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f5f320; end: 101f5f383; -[SCSCSpectaclesDeviceSettingsServicesSaberEntryPoint setSCSpectaclesDeviceSettingsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e454d8;
  func_0x000107c61428(param_1 + _DAT_112e454d8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f5f384; end: 101f5f507;  */

/* WARNING: Possible PIC construction at 0x000101f5f484: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5f494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f5f4b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f5f488) */
/* WARNING: Removing unreachable block (ram,0x000101f5f498) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f5f384(void)

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
    func_0x000107c5b6f8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c51368();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101f5a5cc();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e45268);
        *(undefined8 *)(lVar2 + _DAT_112e44f20) = uVar6;
        *(long *)(lVar2 + _DAT_112e44f28) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e44f28);
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



/* Entry: 101f5f508; end: 101f5f52f; -[SCSCSpectaclesDeviceSettingsServicesSaberEntryPoint begin] */

void FUN_101f5f508(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f5f384();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


