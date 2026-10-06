/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b2cbe4; end: 101b2cc8f; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101b2cbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b2c9e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b2cc90; end: 101b2cd0f; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2cc90(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e02168,0);
  func_0x000107c61614(param_1 + _DAT_112e02170,0);
  *(undefined8 *)(param_1 + _DAT_112e02178) = 0;
  *(undefined8 *)(param_1 + _DAT_112e02180) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2cd10; end: 101b2cd43;  */

void FUN_101b2cd10(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b2cd44; end: 101b2cd9b; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b2cd80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2cd84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2cd44(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e02168);
  func_0x000107c61610(param_1 + _DAT_112e02170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02178));
  return;
}



/* Entry: 101b2cd9c; end: 101b2cdbb;  */

void FUN_101b2cd9c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7dd8);
  return;
}



/* Entry: 101b2cdbc; end: 101b2cdc7; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2cdbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e021b0;
  func_0x000107c61428(param_1 + _DAT_112e021b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2cdc8; end: 101b2cdd3; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2cdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e021b0;
  func_0x000107c61428(param_1 + _DAT_112e021b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2cdd4; end: 101b2cddf; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint bitmojiEditAvatarBuilderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2cdd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e021b8;
  func_0x000107c61428(param_1 + _DAT_112e021b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2cde0; end: 101b2ce23;  */

void FUN_101b2cde0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101b2ce24; end: 101b2ce2f; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint setBitmojiEditAvatarBuilderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2ce24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e021b8;
  func_0x000107c61428(param_1 + _DAT_112e021b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2ce30; end: 101b2ce83;  */

void FUN_101b2ce30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2ce84; end: 101b2cecb; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint sCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2ce84(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e021c0;
  func_0x000107c61428(param_1 + _DAT_112e021c0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b2cecc; end: 101b2cf2f; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint setSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2cecc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e021c0;
  func_0x000107c61428(param_1 + _DAT_112e021c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b2cf30; end: 101b2d0b3;  */

/* WARNING: Possible PIC construction at 0x000101b2d030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2d040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2d05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2d034) */
/* WARNING: Removing unreachable block (ram,0x000101b2d044) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2cf30(void)

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
    func_0x000107c3e9a0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c50aa8();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101b2b1e8();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e020b8);
        *(undefined8 *)(lVar2 + _DAT_112e01f50) = uVar6;
        *(long *)(lVar2 + _DAT_112e01f58) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e01f58);
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



/* Entry: 101b2d0b4; end: 101b2d0db; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint begin] */

void FUN_101b2d0b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b2cf30();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2d0dc; end: 101b2d11f; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint end] */

void FUN_101b2d0dc(undefined8 param_1)

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



/* Entry: 101b2d120; end: 101b2d323;  */

void FUN_101b2d120(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef10029b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010effd650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000004b;
        if (((param_2 != -0x2fffffffffffffb5) || (param_3 != -0x7ffffffef10028d0)) &&
           (func_0x000107c605b8(0xd00000000000004b,0x800000010effd730,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BitmojiEditAvatarBuilderScopeGraphBridge/SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint.swift"
                              ,0x84,2,0x38,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2d324);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58050();
        goto LAB_101b2d1ac;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52cdc();
  }
LAB_101b2d1ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b2d324; end: 101b2d3cf; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101b2d324(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b2d120(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b2d3d0; end: 101b2d44f; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2d3d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e021b0,0);
  func_0x000107c61614(param_1 + _DAT_112e021b8,0);
  *(undefined8 *)(param_1 + _DAT_112e021c0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e021c8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2d450; end: 101b2d483;  */

void FUN_101b2d450(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b2d484; end: 101b2d4db; -[SCSCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b2d4c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2d4c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2d484(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e021b0);
  func_0x000107c61610(param_1 + _DAT_112e021b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e021c0));
  return;
}



/* Entry: 101b2d4dc; end: 101b2d4fb;  */

void FUN_101b2d4dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7ea8);
  return;
}



/* Entry: 101b2d4fc; end: 101b2d507; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2d4fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e021f8;
  func_0x000107c61428(param_1 + _DAT_112e021f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2d508; end: 101b2d513; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2d508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e021f8;
  func_0x000107c61428(param_1 + _DAT_112e021f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2d514; end: 101b2d51f; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider bitmojiEditAvatarBuilderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2d514(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02200;
  func_0x000107c61428(param_1 + _DAT_112e02200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2d520; end: 101b2d563;  */

void FUN_101b2d520(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101b2d564; end: 101b2d56f; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider setBitmojiEditAvatarBuilderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2d564(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02200;
  func_0x000107c61428(param_1 + _DAT_112e02200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2d570; end: 101b2d5c3;  */

void FUN_101b2d570(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2d5c4; end: 101b2d7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101b2d5c4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3e9a0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000101b2b298();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112e020b0);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e02208);
      *(long *)(unaff_x20 + _DAT_112e02208) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "BitmojiEditAvatarBuilderScopeGraphBridge/SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider.swift"
                      ,0x76,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2d6f0);
  (*pcVar1)();
}



/* Entry: 101b2d7d8; end: 101b2d80b; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider provide] */

void FUN_101b2d7d8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b2d5c4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b2d80c; end: 101b2d83f; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider __safeProvide] */

void FUN_101b2d80c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101b2d6f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b2d840; end: 101b2d883; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider end] */

void FUN_101b2d840(undefined8 param_1)

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



/* Entry: 101b2d884; end: 101b2da1b;  */

void FUN_101b2d884(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd0) || (param_3 != -0x7ffffffef10029b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000030,0x800000010effd650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BitmojiEditAvatarBuilderScopeGraphBridge/SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider.swift"
                            ,0x76,2,0x3a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2da1c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52cdc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b2da1c; end: 101b2dac7; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_101b2da1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b2d884(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b2dac8; end: 101b2db3b; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2dac8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e021f8,0);
  func_0x000107c61614(param_1 + _DAT_112e02200,0);
  *(undefined8 *)(param_1 + _DAT_112e02208) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2db3c; end: 101b2db6f;  */

void FUN_101b2db3c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b2db70; end: 101b2dbb7; -[SCSCBitmojiCameraAdaptorPreviewViewProviderServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2db70(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e021f8);
  func_0x000107c61610(param_1 + _DAT_112e02200);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e02208));
  return;
}



/* Entry: 101b2dbb8; end: 101b2dbd7;  */

void FUN_101b2dbb8(void)

{
  func_0x000107c61168(&PTR_PTR_112e02250);
  return;
}



/* Entry: 101b2dbd8; end: 101b2dc1f; -[SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2dbd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e022b8;
  func_0x000107c61428(param_1 + _DAT_112e022b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2dc20; end: 101b2dc77; -[SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2dc20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e022b8;
  func_0x000107c61428(param_1 + _DAT_112e022b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2dc78; end: 101b2dd4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2dc78(undefined8 param_1,long param_2)

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
    FUN_101b2b56c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e02058) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101b2dd50);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e02060);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e022c0);
    *(long **)(unaff_x20 + _DAT_112e022c0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101b2dd50; end: 101b2dd77; -[SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint begin] */

void FUN_101b2dd50(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b2dc78();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2dd78; end: 101b2deef;  */

/* WARNING: Possible PIC construction at 0x000101b2dde0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2de78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2dde4) */
/* WARNING: Removing unreachable block (ram,0x000101b2de7c) */
/* WARNING: Removing unreachable block (ram,0x000101b2de94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2dd78(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e022c0);
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



/* Entry: 101b2def0; end: 101b2def7;  */

void FUN_101b2def0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b2def8; end: 101b2df2b; -[SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint end] */

void FUN_101b2def8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101b2dd78();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101b2df2c; end: 101b2e04b;  */

void FUN_101b2df2c(long param_1,long param_2,long param_3)

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
                        "BitmojiEditAvatarBuilderScopeGraphBridge/SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint.swift"
                        ,0x68,2,0x30,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2e04c);
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



/* Entry: 101b2e04c; end: 101b2e0f7; -[SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101b2e04c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b2df2c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b2e0f8; end: 101b2e157; -[SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e0f8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e022b8,0);
  *(undefined8 *)(param_1 + _DAT_112e022c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2e158; end: 101b2e18b;  */

void FUN_101b2e158(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b2e18c; end: 101b2e1c3; -[SCSCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e18c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e022b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e022c0));
  return;
}



/* Entry: 101b2e1c4; end: 101b2e1e3;  */

void FUN_101b2e1c4(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7fc0);
  return;
}



/* Entry: 101b2e1e4; end: 101b2e2af;  */

/* WARNING: Possible PIC construction at 0x000101b2e250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e254) */
/* WARNING: Removing unreachable block (ram,0x000101b2e28c) */
/* WARNING: Removing unreachable block (ram,0x000101b2e27c) */
/* WARNING: Removing unreachable block (ram,0x000101b2e290) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e1e4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c52cbc(uVar2,param_2,7);
  func_0x000107c52140(uVar2);
  func_0x000107c59558(uVar2);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e02318);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_2 + _DAT_112e02318))[1]);
  func_0x000107c52cb4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101b2e2b0; end: 101b2e2bb; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementation19AvatarBuilderLogger reportAvatarEditOpen] */

/* WARNING: Possible PIC construction at 0x000101b2e404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e2b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e022f0);
  puVar1 = PTR_PTR_1126b83a8;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puStack_38 = puVar1;
  FUN_101b2e1e4(&puStack_38,param_1);
  func_0x000107c4bfb0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2e2bc; end: 101b2e387;  */

/* WARNING: Possible PIC construction at 0x000101b2e328: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e32c) */
/* WARNING: Removing unreachable block (ram,0x000101b2e364) */
/* WARNING: Removing unreachable block (ram,0x000101b2e354) */
/* WARNING: Removing unreachable block (ram,0x000101b2e368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e2bc(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c52cbc(uVar2,param_2,7);
  func_0x000107c52140(uVar2);
  func_0x000107c59558(uVar2);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e02318);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_2 + _DAT_112e02318))[1]);
  func_0x000107c52cb4(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101b2e388; end: 101b2e393; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementation19AvatarBuilderLogger reportOutfitEditOpen] */

/* WARNING: Possible PIC construction at 0x000101b2e404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e388(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e022f0);
  puVar1 = PTR_PTR_1126b83a8;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puStack_38 = puVar1;
  FUN_101b2e2bc(&puStack_38,param_1);
  func_0x000107c4bfb0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2e394; end: 101b2e41f;  */

/* WARNING: Possible PIC construction at 0x000101b2e404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e408) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e394(long param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112e022f0);
  puVar1 = PTR_PTR_1126b83a8;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puStack_38 = puVar1;
  (*param_3)(&puStack_38,param_1);
  func_0x000107c4bfb0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2e420; end: 101b2e537;  */

/* WARNING: Possible PIC construction at 0x000101b2e4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2e4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e4b0) */
/* WARNING: Removing unreachable block (ram,0x000101b2e4e0) */
/* WARNING: Removing unreachable block (ram,0x000101b2e500) */
/* WARNING: Removing unreachable block (ram,0x000101b2e50c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e420(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b83d8;
  func_0x000107c610f8(PTR_PTR_1126b83d8);
  func_0x000107c453e4();
  func_0x000107c59558();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e02318);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112e02318))[1]);
  func_0x000107c52cb4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b2e538; end: 101b2e5c3; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementation19AvatarBuilderLogger reportFashionDropActionWithActionType:dropId:dropType:tokenPrice:tokenBalance:] */

void FUN_101b2e538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_101b2e420(param_3,param_4,param_2,param_5,param_6,param_7);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101b2e5c4; end: 101b2e703;  */

/* WARNING: Possible PIC construction at 0x000101b2e65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e5c4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126e1dd0;
  func_0x000107c610f8(PTR_PTR_1126e1dd0);
  func_0x000107c453e4();
  func_0x000107c59558();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e02318);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112e02318))[1]);
  func_0x000107c52cb4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101b2e704; end: 101b2e78b; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementation19AvatarBuilderLogger reportFashionShoppableActionWithActionType:tokenPrice:tokenBalance:optionId:withSmartTryOn:avatarBuilderTraitCategory:avatarBuilderCategoryTabType:gender:] */

void FUN_101b2e704(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  func_0x000107c61174();
  FUN_101b2e5c4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2e78c; end: 101b2e7e7; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementation19AvatarBuilderLogger init] */

void FUN_101b2e78c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBitmojiAvatarBuilderMetricsServicesImplementation.AvatarBuilderLogger",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2e7b8);
  (*pcVar1)();
}



/* Entry: 101b2e7e8; end: 101b2e85b; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementation19AvatarBuilderLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b2e828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2e82c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2e7e8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e022f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e022f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e02310 + 8))
  ;
  return;
}



/* Entry: 101b2e85c; end: 101b2e87b;  */

void FUN_101b2e85c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8080);
  return;
}



/* Entry: 101b2e87c; end: 101b2e8a3;  */

void FUN_101b2e87c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110446550;
  if (lRam0000000112e02358 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e02358 = param_1;
  }
  return;
}



/* Entry: 101b2e8a4; end: 101b2e8e7;  */

void FUN_101b2e8a4(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 101b2e8e8; end: 101b2e8eb; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementationP33_433B413C35122032B24D5A92F6E1447412NoOpBlizzard logUserTrackedEvent:] */

void FUN_101b2e8e8(void)

{
  return;
}



/* Entry: 101b2e8ec; end: 101b2e8f3; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementationP33_433B413C35122032B24D5A92F6E1447412NoOpBlizzard willLogEventsOfType:] */

undefined8 FUN_101b2e8ec(void)

{
  return 0;
}



/* Entry: 101b2e8f4; end: 101b2e8f7; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementationP33_433B413C35122032B24D5A92F6E1447412NoOpBlizzard startFeatureSession:] */

void FUN_101b2e8f4(void)

{
  return;
}



/* Entry: 101b2e8f8; end: 101b2e8fb; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementationP33_433B413C35122032B24D5A92F6E1447412NoOpBlizzard endFeatureSession:] */

void FUN_101b2e8f8(void)

{
  return;
}



/* Entry: 101b2e8fc; end: 101b2e937; -[_TtC51SCBitmojiAvatarBuilderMetricsServicesImplementationP33_433B413C35122032B24D5A92F6E1447412NoOpBlizzard init] */

void FUN_101b2e8fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2e938; end: 101b2e96b;  */

void FUN_101b2e938(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b2e96c; end: 101b2ec3f;  */

undefined8
FUN_101b2e96c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_110446590;
  func_0x000107c613fc(&UNK_110446590,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  pcStack_60 = FUN_101b2eed4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101b2eee0;
  puStack_68 = &UNK_1104465a8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = PTR_PTR_1126a8a48;
  func_0x000107c610f8(PTR_PTR_1126a8a48);
  func_0x000107c458bc();
  func_0x000107c61170(puVar1);
  func_0x000107c42c20(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar2);
  return unaff_x20;
}



/* Entry: 101b2ec40; end: 101b2eed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101b2ec40(long param_1,undefined *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_1 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    FUN_101b2ef84();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar7 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puVar8 = puVar7;
  func_0x000107c3e53c();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  if (puVar8 == (undefined *)0x0) {
    puVar8 = PTR_PTR_1126a7e38;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  uVar15 = *(undefined8 *)(param_3 + _DAT_11306d690);
  lVar13 = *(long *)(param_3 + _DAT_11306d680);
  uVar12 = *(long *)(lVar13 + _DAT_11306d708) - 1;
  lStack_78 = 0;
  if (uVar12 < 3) {
    lStack_78 = uVar12 * 2 + 1;
  }
  lVar11 = param_3 + _DAT_1138133c8;
  (**(code **)(lVar16 + 0x10))(lVar14,lVar11,lVar5);
  lVar13 = *(long *)(lVar13 + _DAT_11306d730);
  uVar3 = 1;
  if (lVar13 != 1) {
    uVar3 = 0xffffffffffffffff;
  }
  uVar2 = 0;
  if (lVar13 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + _DAT_1138133d0);
  uVar4 = ((undefined8 *)(param_3 + _DAT_1138133d0))[1];
  lVar9 = 0;
  FUN_101b2e85c();
  lVar13 = lVar9;
  func_0x000107c610f8();
  *(long *)(lVar13 + _DAT_112e022f0) = lVar6;
  *(undefined8 *)(lVar13 + _DAT_112e02300) = uVar15;
  *(undefined **)(lVar13 + _DAT_112e022f8) = puVar8;
  lStack_80 = lVar5;
  func_0x000107c61434(uVar4);
  func_0x000107c615f0(lVar6);
  func_0x000107c61174();
  puVar7 = puVar8;
  func_0x000107c5eeac();
  puVar1 = (undefined8 *)(lVar13 + _DAT_112e02318);
  *puVar1 = puVar7;
  puVar1[1] = lVar11;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112e02310);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar13 + _DAT_112e02308) = lStack_78;
  *(undefined8 *)(lVar13 + _DAT_112e02320) = uVar2;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112e02328);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  plVar10 = &lStack_70;
  lStack_70 = lVar13;
  lStack_68 = lVar9;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(puVar8);
  (**(code **)(lVar16 + 8))(lVar14,lStack_80);
  return plVar10;
}



/* Entry: 101b2eed4; end: 101b2eedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_101b2eed4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lVar16;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar7 = *(undefined **)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  lVar5 = 0;
  func_0x000107c5eec8();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar6 + _DAT_113083868);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar6 == 0) {
    FUN_101b2ef84();
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c444a4();
  func_0x000107c61180();
  puVar8 = puVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  puVar7 = puVar8;
  func_0x000107c3e53c();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar7 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126a7e38;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  uVar15 = *(undefined8 *)(lVar11 + _DAT_11306d690);
  lVar13 = *(long *)(lVar11 + _DAT_11306d680);
  uVar12 = *(long *)(lVar13 + _DAT_11306d708) - 1;
  lStack_78 = 0;
  if (uVar12 < 3) {
    lStack_78 = uVar12 * 2 + 1;
  }
  lVar10 = lVar11 + _DAT_1138133c8;
  (**(code **)(lVar16 + 0x10))(lVar14,lVar10,lVar5);
  lVar13 = *(long *)(lVar13 + _DAT_11306d730);
  uVar3 = 1;
  if (lVar13 != 1) {
    uVar3 = 0xffffffffffffffff;
  }
  uVar2 = 0;
  if (lVar13 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = *(undefined8 *)(lVar11 + _DAT_1138133d0);
  uVar4 = ((undefined8 *)(lVar11 + _DAT_1138133d0))[1];
  lVar13 = 0;
  FUN_101b2e85c();
  lVar11 = lVar13;
  func_0x000107c610f8();
  *(long *)(lVar11 + _DAT_112e022f0) = lVar6;
  *(undefined8 *)(lVar11 + _DAT_112e02300) = uVar15;
  *(undefined **)(lVar11 + _DAT_112e022f8) = puVar7;
  lStack_80 = lVar5;
  func_0x000107c61434(uVar4);
  func_0x000107c615f0(lVar6);
  func_0x000107c61174();
  puVar8 = puVar7;
  func_0x000107c5eeac();
  puVar1 = (undefined8 *)(lVar11 + _DAT_112e02318);
  *puVar1 = puVar8;
  puVar1[1] = lVar10;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112e02310);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(long *)(lVar11 + _DAT_112e02308) = lStack_78;
  *(undefined8 *)(lVar11 + _DAT_112e02320) = uVar2;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112e02328);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  plVar9 = &lStack_70;
  lStack_70 = lVar11;
  lStack_68 = lVar13;
  func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
  func_0x000107c615e8(lVar6);
  func_0x000107c61170(puVar7);
  (**(code **)(lVar16 + 8))(lVar14,lStack_80);
  return plVar9;
}



/* Entry: 101b2eee0; end: 101b2ef17;  */

void FUN_101b2eee0(long param_1)

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



/* Entry: 101b2ef18; end: 101b2ef33;  */

void FUN_101b2ef18(long param_1,long param_2)

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



/* Entry: 101b2ef34; end: 101b2ef67;  */

void FUN_101b2ef34(void)

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



/* Entry: 101b2ef68; end: 101b2ef83;  */

void FUN_101b2ef68(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b2ef84; end: 101b2efc3;  */

void FUN_101b2ef84(void)

{
  func_0x000107c61168(&PTR_PTR_1127f8198);
  return;
}



/* Entry: 101b2efc4; end: 101b2efe3;  */

void FUN_101b2efc4(long param_1,long param_2)

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



/* Entry: 101b2efe4; end: 101b2f08f;  */

void FUN_101b2efe4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101b2f090; end: 101b2f0b7;  */

void FUN_101b2f090(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 101b2f0b8; end: 101b2f13b; -[_TtC30BitmojiAvatarBuilderURIHandler43BitmojiAvatarBuilderIncomingComposerMessage messageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101b2f0b8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02428;
  func_0x000107c61428(param_1 + _DAT_112e02428,auStack_38,0,0);
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 101b2f13c; end: 101b2f1d7; -[_TtC30BitmojiAvatarBuilderURIHandler43BitmojiAvatarBuilderIncomingComposerMessage setMessageType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f13c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02428;
  func_0x000107c61428(param_1 + _DAT_112e02428,auStack_48,1,0);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 101b2f1d8; end: 101b2f217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101b2f1d8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112e02428;
  func_0x000107c61428(unaff_x20 + _DAT_112e02428,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_101b2f218;
  return auVar2;
}



/* Entry: 101b2f218; end: 101b2f21b;  */

void FUN_101b2f218(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 101b2f21c; end: 101b2f2a3; -[_TtC30BitmojiAvatarBuilderURIHandler43BitmojiAvatarBuilderIncomingComposerMessage messageContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f21c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02430;
  func_0x000107c61428(param_1 + _DAT_112e02430,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b2f2a4; end: 101b2f35b; -[_TtC30BitmojiAvatarBuilderURIHandler43BitmojiAvatarBuilderIncomingComposerMessage setMessageContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f2a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02430;
  func_0x000107c61428(param_1 + _DAT_112e02430,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b2f35c; end: 101b2f39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101b2f35c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112e02430;
  func_0x000107c61428(unaff_x20 + _DAT_112e02430,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x101b2f4e0;
  return auVar2;
}



/* Entry: 101b2f39c; end: 101b2f3ff; -[_TtC30BitmojiAvatarBuilderURIHandler43BitmojiAvatarBuilderIncomingComposerMessage initWithMessageType:messageContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f39c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112e02428) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e02430) = param_4;
  lVar2 = param_1;
  func_0x000101b2f45c();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101b2f400; end: 101b2f47b; -[_TtC30BitmojiAvatarBuilderURIHandler43BitmojiAvatarBuilderIncomingComposerMessage init] */

void FUN_101b2f400(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiAvatarBuilderURIHandler.BitmojiAvatarBuilderIncomingComposerMessage",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2f42c);
  (*pcVar1)();
}



/* Entry: 101b2f47c; end: 101b2f48f; -[_TtC30BitmojiAvatarBuilderURIHandler43BitmojiAvatarBuilderIncomingComposerMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f47c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02430));
  return;
}



/* Entry: 101b2f490; end: 101b2f4cf;  */

void FUN_101b2f490(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e02438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9d4030;
  func_0x000107c61520(&UNK_10d9d4030,&UNK_1104466d0);
  puRam0000000112e02438 = puVar1;
  return;
}



/* Entry: 101b2f4d0; end: 101b2f4e3;  */

undefined1  [16] FUN_101b2f4d0(void)

{
  return ZEXT816(0x1104466d0);
}



/* Entry: 101b2f4e4; end: 101b2f4f3; -[_TtC30BitmojiAvatarBuilderURIHandler30BitmojiAvatarBuilderURIHandler incomingComposerMessageObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f4e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e02468));
  return;
}



/* Entry: 101b2f4f4; end: 101b2f55f;  */

void FUN_101b2f4f4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd6d58;
  func_0x000107c5faec();
  ppuRam0000000113803af0 = ppuVar1;
  uRam0000000113803af8 = param_2;
  return;
}



/* Entry: 101b2f560; end: 101b2f607;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f560(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e02468;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112e02478;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e02480) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e02488) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2f608; end: 101b2f6cb; -[_TtC30BitmojiAvatarBuilderURIHandler30BitmojiAvatarBuilderURIHandler initWithAvatarBuilderAvatarConfigObservable:bitmojiGLBFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f608(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112e02468;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c615f0(param_4);
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = _DAT_112e02478;
  puVar3 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  *(undefined8 *)(param_1 + _DAT_112e02480) = param_3;
  *(undefined8 *)(param_1 + _DAT_112e02488) = param_4;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2f6cc; end: 101b2f7e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2f6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112e02478));
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e02480);
  puVar1 = &UNK_110446748;
  func_0x000107c613fc(&UNK_110446748,0x30,7);
  *(long *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  pcStack_60 = FUN_101b2ff88;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_10083fefc;
  puStack_68 = &UNK_110446760;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c5c320(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c3e924(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101b2f7e8; end: 101b2f863; -[_TtC30BitmojiAvatarBuilderURIHandler30BitmojiAvatarBuilderURIHandler handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x000101b2f84c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2f850) */

void FUN_101b2f7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000101b30340(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


