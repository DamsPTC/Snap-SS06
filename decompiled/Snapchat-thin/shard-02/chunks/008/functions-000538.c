/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021e1a1c; end: 1021e1aa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1021e1a1c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62dd8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e62de0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021e1aa4);
  (*pcVar2)();
}



/* Entry: 1021e1aa4; end: 1021e1b8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021e1aa4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e62dd8);
  *(undefined **)(unaff_x20 + _DAT_112e62dd8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e62de0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e62de0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104df558;
  func_0x000107c613fc(&UNK_1104df558,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1021e1b90,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1021e1b8c; end: 1021e1b97;  */

void FUN_1021e1b8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021e1b98; end: 1021e1bf7; -[_TtC34LensStudioSettingsScopeGraphBridge49SCLensStudioSettingsScopedServicesSaberEntryPoint init] */

void FUN_1021e1b98(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensStudioSettingsScopeGraphBridge.SCLensStudioSettingsScopedServicesSaberEntryPoint"
                      ,0x54,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e1bc4);
  (*pcVar1)();
}



/* Entry: 1021e1bf8; end: 1021e1c2f; -[_TtC34LensStudioSettingsScopeGraphBridge49SCLensStudioSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e1bf8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e62de0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62dd8));
  return;
}



/* Entry: 1021e1c30; end: 1021e1c33;  */

void FUN_1021e1c30(void)

{
  return;
}



/* Entry: 1021e1c34; end: 1021e1c53;  */

void FUN_1021e1c34(void)

{
  FUN_1021e1aa4();
  return;
}



/* Entry: 1021e1c54; end: 1021e1c73;  */

void FUN_1021e1c54(void)

{
  func_0x000107c61168(&PTR_PTR_112827e98);
  return;
}



/* Entry: 1021e1c74; end: 1021e1d43;  */

undefined8 FUN_1021e1c74(void)

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
  
  func_0x000107c61428(0x112e62e10,&uStack_40,0x20,0);
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
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1021e1d44();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1021e1d44; end: 1021e1d63;  */

void FUN_1021e1d44(void)

{
  func_0x000107c61168(&PTR_PTR_112827f60);
  return;
}



/* Entry: 1021e1d64; end: 1021e1dcf;  */

void FUN_1021e1d64(void)

{
  func_0x0001000285a8(0x112e62e18,&UNK_10da6bba8);
  func_0x0001000823a8(0x1021e1da4,0);
  return;
}



/* Entry: 1021e1dd0; end: 1021e1e0b; -[_TtC34LensStudioSettingsScopeGraphBridge42LensStudioSettingsScopeGraphBridgeServices init] */

void FUN_1021e1dd0(undefined8 param_1)

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



/* Entry: 1021e1e0c; end: 1021e1e3f;  */

void FUN_1021e1e0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e1e40; end: 1021e1e47;  */

undefined8 FUN_1021e1e40(void)

{
  return 0x1b;
}



/* Entry: 1021e1e48; end: 1021e1fbf;  */

void FUN_1021e1e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104df5a0;
  func_0x000107c613fc(&UNK_1104df5a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021e1fc0,puVar1);
  return;
}



/* Entry: 1021e1fc0; end: 1021e1fc7;  */

void FUN_1021e1fc0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e62e10,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e62e10,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104df638;
  func_0x000107c613fc(&UNK_1104df638,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1021e2074;
  func_0x00010058fa64(0x1021e2074,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1021e1fc8; end: 1021e2023;  */

void FUN_1021e1fc8(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e62e10,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e62e10,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1021e2024; end: 1021e207b;  */

undefined ** FUN_1021e2024(void)

{
  return &PTR_DAT_112e62ef8;
}



/* Entry: 1021e207c; end: 1021e20c3; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e207c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62e70;
  func_0x000107c61428(param_1 + _DAT_112e62e70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021e20c4; end: 1021e211b; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e20c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62e70;
  func_0x000107c61428(param_1 + _DAT_112e62e70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021e211c; end: 1021e2163; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint lensStudioSettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e211c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62e78;
  func_0x000107c61428(param_1 + _DAT_112e62e78,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1021e2164; end: 1021e21c7; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint setLensStudioSettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62e78;
  func_0x000107c61428(param_1 + _DAT_112e62e78,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1021e21c8; end: 1021e22fb;  */

/* WARNING: Possible PIC construction at 0x0001021e2280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e229c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e22b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e2284) */
/* WARNING: Removing unreachable block (ram,0x0001021e22a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e21c8(void)

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
  func_0x000107c4b468();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1021e19fc();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1021e1c74();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e22fc);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e62da0) = lVar5;
    *(long *)(lVar4 + _DAT_112e62da8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1021e22fc; end: 1021e2323; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1021e22fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021e21c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021e2324; end: 1021e2367; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1021e2324(undefined8 param_1)

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



/* Entry: 1021e2368; end: 1021e24ff;  */

void FUN_1021e2368(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0f911d0)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f06ee30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensStudioSettingsScopeGraphBridge/SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5c,2,0x30,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e2500);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55e8c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1021e2500; end: 1021e25ab; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1021e2500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021e2368(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021e25ac; end: 1021e2617; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e25ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e62e70,0);
  *(undefined8 *)(param_1 + _DAT_112e62e78) = 0;
  *(undefined8 *)(param_1 + _DAT_112e62e80) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e2618; end: 1021e264b;  */

void FUN_1021e2618(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e264c; end: 1021e2693; -[SCLensStudioSettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021e2678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e267c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e264c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e62e70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62e78));
  return;
}



/* Entry: 1021e2694; end: 1021e26b3;  */

void FUN_1021e2694(void)

{
  func_0x000107c61168(&PTR_PTR_112828010);
  return;
}



/* Entry: 1021e26b4; end: 1021e26fb; -[SCSCLensStudioSettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e26b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e62eb0;
  func_0x000107c61428(param_1 + _DAT_112e62eb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021e26fc; end: 1021e2753; -[SCSCLensStudioSettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e26fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e62eb0;
  func_0x000107c61428(param_1 + _DAT_112e62eb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1021e2754; end: 1021e282b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2754(undefined8 param_1,long param_2)

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
    FUN_1021e1c54();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e62dd8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021e282c);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e62de0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e62eb8);
    *(long **)(unaff_x20 + _DAT_112e62eb8) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1021e282c; end: 1021e2853; -[SCSCLensStudioSettingsScopedServicesSaberEntryPoint begin] */

void FUN_1021e282c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1021e2754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021e2854; end: 1021e29cb;  */

/* WARNING: Possible PIC construction at 0x0001021e28bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e2954: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e28c0) */
/* WARNING: Removing unreachable block (ram,0x0001021e2958) */
/* WARNING: Removing unreachable block (ram,0x0001021e2970) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2854(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e62eb8);
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



/* Entry: 1021e29cc; end: 1021e29d3;  */

void FUN_1021e29cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1021e29d4; end: 1021e2a07; -[SCSCLensStudioSettingsScopedServicesSaberEntryPoint end] */

void FUN_1021e29d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021e2854();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021e2a08; end: 1021e2b27;  */

void FUN_1021e2a08(long param_1,long param_2,long param_3)

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
                        "LensStudioSettingsScopeGraphBridge/SCSCLensStudioSettingsScopedServicesSaberEntryPoint.swift"
                        ,0x5c,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e2b28);
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



/* Entry: 1021e2b28; end: 1021e2bd3; -[SCSCLensStudioSettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1021e2b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1021e2a08(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1021e2bd4; end: 1021e2c33; -[SCSCLensStudioSettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2bd4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e62eb0,0);
  *(undefined8 *)(param_1 + _DAT_112e62eb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e2c34; end: 1021e2c67;  */

void FUN_1021e2c34(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e2c68; end: 1021e2c9f; -[SCSCLensStudioSettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2c68(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e62eb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62eb8));
  return;
}



/* Entry: 1021e2ca0; end: 1021e2cbf;  */

void FUN_1021e2ca0(void)

{
  func_0x000107c61168(&PTR_PTR_1128280d8);
  return;
}



/* Entry: 1021e2cc0; end: 1021e2d0b;  */

void FUN_1021e2cc0(undefined8 param_1)

{
  func_0x0001000285a8(0x112e62ee8,&UNK_10da6bd60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021e2d0c,param_1);
  return;
}



/* Entry: 1021e2d0c; end: 1021e2d73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2d0c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1021e2ef4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e62ef0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1021e2d74; end: 1021e2dbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2d74(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e62ef0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e2dc0; end: 1021e2e8f; -[_TtC30SCLensStudioSettingsScopeProxy33SCLensStudioSettingsScopeServices buildWithUiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126aa148;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174();
  func_0x000107c49018(puVar1,param_2,param_3,param_4);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_58[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1021e2e90; end: 1021e2ec3;  */

void FUN_1021e2e90(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e2ec4; end: 1021e2ef3; -[_TtC30SCLensStudioSettingsScopeProxy33SCLensStudioSettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e2ec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e62ef0));
  return;
}



/* Entry: 1021e2ef4; end: 1021e2f13;  */

void FUN_1021e2ef4(void)

{
  func_0x000107c61168(&PTR_PTR_112828198);
  return;
}



/* Entry: 1021e2f14; end: 1021e303b;  */

void FUN_1021e2f14(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104df8a8;
  if (lRam0000000112e62f38 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e62f38 = param_1;
  }
  return;
}



/* Entry: 1021e303c; end: 1021e307f;  */

void FUN_1021e303c(long param_1,long *param_2,long param_3)

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



/* Entry: 1021e3080; end: 1021e30ab; -[_TtC24SCSettingsImplementation30SCSettingsRowProviderContainer init] */

void FUN_1021e3080(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsRowProviderContainer",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e30ac);
  (*pcVar1)();
}



/* Entry: 1021e30ac; end: 1021e30bb; -[_TtC24SCSettingsImplementation30SCSettingsRowProviderContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e30ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e62f88));
  return;
}



/* Entry: 1021e30bc; end: 1021e30db;  */

void FUN_1021e30bc(void)

{
  func_0x000107c61168(&PTR_PTR_112828258);
  return;
}



/* Entry: 1021e30dc; end: 1021e3323;  */

/* WARNING: Possible PIC construction at 0x0001021e31a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e31b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e32cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021e32fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e31b4) */
/* WARNING: Removing unreachable block (ram,0x0001021e3300) */
/* WARNING: Removing unreachable block (ram,0x0001021e31b8) */
/* WARNING: Removing unreachable block (ram,0x0001021e31a4) */
/* WARNING: Removing unreachable block (ram,0x0001021e32d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e30dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112e62fd8);
  if (lVar3 != 0) {
    puVar1 = (undefined *)(unaff_x20 + _DAT_112e62fc0);
    func_0x000107c61618();
    if (puVar1 != (undefined *)0x0) {
      func_0x000107c61174(lVar3);
      puVar2 = puVar1;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (puVar2 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        func_0x000107c610f8(PTR_PTR_1126aa168);
        func_0x000107c479a4();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar1);
      return;
    }
  }
  return;
}



/* Entry: 1021e3324; end: 1021e358b;  */

void FUN_1021e3324(undefined8 *param_1,long *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = *param_2;
  puVar7 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar1 = param_4;
    FUN_1021e4ccc();
    if ((uVar1 & 0xff00000000) != 0x100000000) {
      func_0x000107c4dfe8();
      func_0x000107c61180();
      if (lVar8 != 0) {
        lVar2 = lVar8;
        func_0x000107c5cacc();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar7);
        }
        puVar3 = &UNK_1104dfa10;
        func_0x000107c613fc(&UNK_1104dfa10,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_3);
        puVar4 = &UNK_1104dfa60;
        func_0x000107c613fc(&UNK_1104dfa60,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,param_4);
        puVar5 = &UNK_1104dfa88;
        func_0x000107c613fc(&UNK_1104dfa88,0x20,7);
        *(undefined **)(puVar5 + 0x10) = puVar3;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        puVar9 = PTR_PTR_1126aa160;
        func_0x000107c610f8();
        pcStack_88 = FUN_1021e5524;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1104dfaa0;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c6157c(puVar3);
        func_0x000107c6157c(puVar4);
        func_0x000107c48414();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar2);
        puVar5 = puStack_80;
        func_0x000107c61574(puVar3);
        func_0x000107c61574(puVar4);
        func_0x000107c61574(puVar5);
        lVar2 = lVar8;
        func_0x000107c4187c(lVar8);
        func_0x000107c61180();
        func_0x000107c59a8c(puVar9);
        func_0x000107c61170(lVar2);
        func_0x000107c3f73c(lVar8);
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c59a2c(puVar9);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(param_3);
        goto LAB_1021e3568;
      }
    }
    func_0x000107c61170(param_3);
  }
  puVar9 = (undefined *)0x0;
LAB_1021e3568:
  *param_1 = puVar9;
  return;
}



/* Entry: 1021e358c; end: 1021e37cf;  */

void FUN_1021e358c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "getRowForProvider(_:)";
  func_0x0001000c10c0("getRowForProvider(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_1104dfad8;
  func_0x000107c613fc(&UNK_1104dfad8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_50 = FUN_1021e5580;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104dfaf0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1021e37d0; end: 1021e3887;  */

void FUN_1021e37d0(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 100) {
    if (param_1 == 0) {
      uVar1 = 0;
      uVar2 = 0x1e;
      goto LAB_1021e3870;
    }
    if (param_1 == 1) {
      uVar1 = 0;
      uVar2 = 0x5a;
      goto LAB_1021e3870;
    }
    if (param_1 == 99) {
      uVar1 = 0;
      uVar2 = 0x5e;
      goto LAB_1021e3870;
    }
  }
  else if (param_1 < 0x66) {
    if (param_1 == 100) {
      uVar1 = 0;
      uVar2 = 0x5c;
      goto LAB_1021e3870;
    }
    if (param_1 == 0x65) {
      uVar1 = 0;
      uVar2 = 0x5f;
      goto LAB_1021e3870;
    }
  }
  else {
    if (param_1 == 0x66) {
      uVar1 = 0;
      uVar2 = 0x5d;
      goto LAB_1021e3870;
    }
    if (param_1 == 0x67) {
      uVar1 = 0;
      uVar2 = 0x5b;
      goto LAB_1021e3870;
    }
  }
  uVar2 = 0;
  uVar1 = 1;
LAB_1021e3870:
  *param_2 = uVar2;
  *(undefined1 *)(param_2 + 1) = uVar1;
  return;
}



/* Entry: 1021e3888; end: 1021e3d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e3888(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  
  lVar2 = _DAT_112e62f88;
  lVar13 = *param_1;
  uVar12 = *(ulong *)(lVar13 + _DAT_112e62f88);
  if (uVar12 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar4 = uVar12;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x0001000285a8(0x112e63028,&UNK_10da6c310);
    func_0x000104886440();
  }
  else {
    uVar12 = *(ulong *)(lVar13 + lVar2);
    if (uVar12 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar12 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar12) {
        uVar4 = uVar12;
      }
      func_0x000107c60480();
    }
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar4 != 0) {
      func_0x0001021e4260(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
      lVar2 = _DAT_112e62fd0;
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e3bb8);
        (*pcVar3)();
      }
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      uVar14 = 0;
      uVar15 = *(undefined8 *)(param_2 + lVar2);
      do {
        if ((uVar12 & 0xc000000000000001) == 0) {
          uVar16 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
          func_0x000107c615f0(uVar16);
        }
        else {
          uVar16 = uVar14;
          FUN_1021e48c8();
        }
        uVar5 = uVar16;
        func_0x000107c5093c(uVar16);
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x0001000b637c();
        func_0x000107c61170(uVar5);
        uVar7 = uVar15;
        func_0x000100471e0c(uVar15,0);
        func_0x000107c61574(uVar6);
        uVar8 = 0x112d38358;
        func_0x0001000285a8(0x112d38358,&UNK_10d902090);
        uVar9 = 0x1021e387c;
        func_0x0001000bfde0(0x1021e387c,0,uVar8);
        func_0x000107c61574(uVar7);
        FUN_1021e4a6c();
        func_0x0001000c2068();
        func_0x000107c61574(uVar9);
        puVar10 = &UNK_1104dfa10;
        func_0x000107c613fc(&UNK_1104dfa10,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,param_2);
        puVar11 = &UNK_1104dfa38;
        func_0x000107c613fc(&UNK_1104dfa38,0x20,7);
        *(undefined **)(puVar11 + 0x10) = puVar10;
        *(ulong *)(puVar11 + 0x18) = uVar16;
        func_0x000107c615f0(uVar16);
        uVar8 = 0x112e63018;
        func_0x0001000285a8(0x112e63018,&UNK_10da6c300);
        pcVar3 = FUN_1021e4abc;
        func_0x0001000bfde0(FUN_1021e4abc,puVar11,uVar8);
        func_0x000107c615e8(uVar16);
        func_0x000107c61574(uVar7);
        func_0x000107c61574(puVar11);
        uVar16 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar16) {
          func_0x0001021e4260(1 < *(ulong *)(puVar1 + 0x18),uVar16 + 1,1);
        }
        uVar14 = uVar14 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar16 + 1;
        *(code **)(puVar1 + uVar16 * 8 + 0x20) = pcVar3;
      } while (uVar4 != uVar14);
    }
    func_0x0001000285a8(0x112e63020,&UNK_10da6c308);
    puVar10 = puVar1;
    func_0x000100b658a4(puVar1);
    func_0x000107c6142c(puVar1);
    uVar15 = 0;
    func_0x0001021e570c(0,0x112e63008,&PTR_PTR_1126aa158);
    func_0x0001000bfde0(0x1021e3bb8,0,uVar15);
    func_0x000107c61574(puVar10);
  }
  return;
}



/* Entry: 1021e3d2c; end: 1021e3e23; -[_TtC24SCSettingsImplementation27SCSettingsNativeRowsFetcher getRows] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e3d2c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112e62fd0);
  func_0x000107c61174();
  func_0x000100471e0c(uVar5,0);
  puVar1 = &UNK_1104df9e8;
  func_0x000107c613fc(&UNK_1104df9e8,0x18,7);
  *(long *)(puVar1 + 0x10) = param_1;
  uVar2 = 0;
  func_0x0001021e570c(0,0x112e63008,&PTR_PTR_1126aa158);
  func_0x000107c61174(param_1);
  pcVar3 = FUN_1021e4170;
  func_0x000100775358(FUN_1021e4170,puVar1,uVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar1);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar3);
  puVar4 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1021e3e24; end: 1021e3e27;  */

void FUN_1021e3e24(void)

{
  return;
}



/* Entry: 1021e3e28; end: 1021e3e77;  */

void FUN_1021e3e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1021e3e78; end: 1021e3fef;  */

/* WARNING: Possible PIC construction at 0x0001021e3f34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e3f38) */
/* WARNING: Removing unreachable block (ram,0x0001021e3f90) */
/* WARNING: Removing unreachable block (ram,0x0001021e3f3c) */
/* WARNING: Removing unreachable block (ram,0x0001021e3f50) */
/* WARNING: Removing unreachable block (ram,0x0001021e3f6c) */

void FUN_1021e3e78(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  func_0x000107c61174(param_1);
  if (uVar2 != 0) {
    if ((param_4 & 0xc000000000000001) == 0) {
      if (*(long *)((param_4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e3fcc);
        (*pcVar1)();
      }
      param_1 = *(long *)(param_4 + 0x20);
      func_0x000107c615f0(param_1);
    }
    else {
      param_1 = 0;
      FUN_1021e48c8(0,param_4);
    }
    func_0x0001021e570c(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c51b94(param_1);
    func_0x000107c61180();
    func_0x000107c60118();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021e3ff0; end: 1021e4083;  */

void FUN_1021e3ff0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  uVar2 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 1021e4084; end: 1021e40af; -[_TtC24SCSettingsImplementation27SCSettingsNativeRowsFetcher init] */

void FUN_1021e4084(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSettingsImplementation.SCSettingsNativeRowsFetcher",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e40b0);
  (*pcVar1)();
}



/* Entry: 1021e40b0; end: 1021e40b3;  */

void FUN_1021e40b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e40b4; end: 1021e40e7;  */

void FUN_1021e40b4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021e40e8; end: 1021e414f; -[_TtC24SCSettingsImplementation27SCSettingsNativeRowsFetcher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021e4134: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e4138) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e40e8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e62fb8));
  func_0x000107c61610(param_1 + _DAT_112e62fc0);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e62fc8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e62fd0));
  return;
}



/* Entry: 1021e4150; end: 1021e416f;  */

void FUN_1021e4150(void)

{
  func_0x000107c61168(&PTR_PTR_112828318);
  return;
}



/* Entry: 1021e4170; end: 1021e418b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e4170(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long unaff_x20;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  lVar2 = _DAT_112e62f88;
  lVar12 = *(long *)(unaff_x20 + 0x10);
  lVar14 = *param_1;
  uVar13 = *(ulong *)(lVar14 + _DAT_112e62f88);
  if (uVar13 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar13 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar13) {
      uVar4 = uVar13;
    }
    func_0x000107c60480();
  }
  if (uVar4 == 0) {
    func_0x0001000285a8(0x112e63028,&UNK_10da6c310);
    func_0x000104886440();
  }
  else {
    uVar13 = *(ulong *)(lVar14 + lVar2);
    if (uVar13 >> 0x3e == 0) {
      uVar4 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar4 = uVar13 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar13) {
        uVar4 = uVar13;
      }
      func_0x000107c60480();
    }
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar4 != 0) {
      func_0x0001021e4260(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
      lVar2 = _DAT_112e62fd0;
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e3bb8);
        (*pcVar3)();
      }
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      uVar15 = 0;
      uVar16 = *(undefined8 *)(lVar12 + lVar2);
      do {
        if ((uVar13 & 0xc000000000000001) == 0) {
          uVar17 = *(ulong *)(uVar13 + uVar15 * 8 + 0x20);
          func_0x000107c615f0(uVar17);
        }
        else {
          uVar17 = uVar15;
          FUN_1021e48c8();
        }
        uVar5 = uVar17;
        func_0x000107c5093c(uVar17);
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x0001000b637c();
        func_0x000107c61170(uVar5);
        uVar7 = uVar16;
        func_0x000100471e0c(uVar16,0);
        func_0x000107c61574(uVar6);
        uVar8 = 0x112d38358;
        func_0x0001000285a8(0x112d38358,&UNK_10d902090);
        uVar9 = 0x1021e387c;
        func_0x0001000bfde0(0x1021e387c,0,uVar8);
        func_0x000107c61574(uVar7);
        FUN_1021e4a6c();
        func_0x0001000c2068();
        func_0x000107c61574(uVar9);
        puVar10 = &UNK_1104dfa10;
        func_0x000107c613fc(&UNK_1104dfa10,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,lVar12);
        puVar11 = &UNK_1104dfa38;
        func_0x000107c613fc(&UNK_1104dfa38,0x20,7);
        *(undefined **)(puVar11 + 0x10) = puVar10;
        *(ulong *)(puVar11 + 0x18) = uVar17;
        func_0x000107c615f0(uVar17);
        uVar8 = 0x112e63018;
        func_0x0001000285a8(0x112e63018,&UNK_10da6c300);
        pcVar3 = FUN_1021e4abc;
        func_0x0001000bfde0(FUN_1021e4abc,puVar11,uVar8);
        func_0x000107c615e8(uVar17);
        func_0x000107c61574(uVar7);
        func_0x000107c61574(puVar11);
        uVar17 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar17) {
          func_0x0001021e4260(1 < *(ulong *)(puVar1 + 0x18),uVar17 + 1,1);
        }
        uVar15 = uVar15 + 1;
        *(ulong *)(puVar1 + 0x10) = uVar17 + 1;
        *(code **)(puVar1 + uVar17 * 8 + 0x20) = pcVar3;
      } while (uVar4 != uVar15);
    }
    func_0x0001000285a8(0x112e63020,&UNK_10da6c308);
    puVar10 = puVar1;
    func_0x000100b658a4(puVar1);
    func_0x000107c6142c(puVar1);
    uVar16 = 0;
    func_0x0001021e570c(0,0x112e63008,&PTR_PTR_1126aa158);
    func_0x0001000bfde0(0x1021e3bb8,0,uVar16);
    func_0x000107c61574(puVar10);
  }
  return;
}



/* Entry: 1021e418c; end: 1021e427b;  */

/* WARNING: Possible PIC construction at 0x0001021e41bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021e41c0) */
/* WARNING: Removing unreachable block (ram,0x0001021e41c4) */

void FUN_1021e418c(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  iVar2 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar2 == 0) {
    puVar3 = (ulong *)0x112e63040;
    plVar5 = (long *)&UNK_10da6c328;
  }
  else {
    puVar3 = (ulong *)0x112e63020;
    plVar5 = (long *)&UNK_10da6c308;
    unaff_x30 = 0x1021e41c0;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
    unaff_x29 = puVar1;
  }
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if (*puVar3 == 0 || (*puVar3 & 1) != 0) {
    puVar4 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar4,*plVar5 >> 0x20,0,0);
    *puVar3 = (ulong)puVar4;
  }
  return;
}



/* Entry: 1021e427c; end: 1021e43ab;  */

undefined * FUN_1021e427c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1021e43ac);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1021e418c();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112e63020;
    func_0x0001000285a8(0x112e63020,&UNK_10da6c308);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1021e43ac; end: 1021e442b;  */

undefined * FUN_1021e43ac(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1021e442c; end: 1021e47a3;  */

ulong FUN_1021e442c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e455c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1021e43ac(uVar2,uVar4,0x1021e41f4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021e4558);
      (*pcVar1)();
    }
    func_0x0001021e468c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1021e47a4; end: 1021e48c7;  */

long FUN_1021e47a4(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e48c4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e48c8);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112e63048;
        func_0x0001000285a8(0x112e63048,&UNK_10da6c330);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112e63048;
      func_0x0001000285a8(0x112e63048,&UNK_10da6c330);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e48c0);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1021e48c8; end: 1021e4a6b;  */

ulong FUN_1021e48c8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021e49a0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1021e49a4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000015,0x800000010f06efc0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1021e4a6c);
  (*pcVar2)();
}



/* Entry: 1021e4a6c; end: 1021e4abb;  */

void FUN_1021e4a6c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e63010 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d38358;
  func_0x00010002969c(0x112d38358,&UNK_10d902090);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112e63010 = puVar2;
  return;
}



/* Entry: 1021e4abc; end: 1021e4ac3;  */

void FUN_1021e4abc(undefined8 *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  lVar10 = *param_2;
  puVar9 = auStack_78;
  func_0x000107c61428(lVar2 + 0x10,puVar9,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = uVar1;
    FUN_1021e4ccc();
    if ((uVar3 & 0xff00000000) != 0x100000000) {
      func_0x000107c4dfe8();
      func_0x000107c61180();
      if (lVar10 != 0) {
        lVar4 = lVar10;
        func_0x000107c5cacc();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(puVar9);
        }
        puVar5 = &UNK_1104dfa10;
        func_0x000107c613fc(&UNK_1104dfa10,0x18,7);
        func_0x000107c61614(puVar5 + 0x10,lVar2);
        puVar6 = &UNK_1104dfa60;
        func_0x000107c613fc(&UNK_1104dfa60,0x18,7);
        func_0x000107c61614(puVar6 + 0x10,uVar1);
        puVar7 = &UNK_1104dfa88;
        func_0x000107c613fc(&UNK_1104dfa88,0x20,7);
        *(undefined **)(puVar7 + 0x10) = puVar5;
        *(undefined **)(puVar7 + 0x18) = puVar6;
        puVar11 = PTR_PTR_1126aa160;
        func_0x000107c610f8();
        pcStack_88 = FUN_1021e5524;
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_1104dfaa0;
        ppuVar8 = &puStack_a8;
        puStack_80 = puVar7;
        func_0x000107c60bc4(ppuVar8);
        func_0x000107c6157c(puVar5);
        func_0x000107c6157c(puVar6);
        func_0x000107c48414();
        func_0x000107c60bd0(ppuVar8);
        func_0x000107c61170(lVar4);
        puVar7 = puStack_80;
        func_0x000107c61574(puVar5);
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar7);
        lVar4 = lVar10;
        func_0x000107c4187c(lVar10);
        func_0x000107c61180();
        func_0x000107c59a8c(puVar11);
        func_0x000107c61170(lVar4);
        func_0x000107c3f73c(lVar10);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c46ecc();
        func_0x000107c59a2c(puVar11);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar2);
        goto LAB_1021e3568;
      }
    }
    func_0x000107c61170(lVar2);
  }
  puVar11 = (undefined *)0x0;
LAB_1021e3568:
  *param_1 = puVar11;
  return;
}



/* Entry: 1021e4ac4; end: 1021e4ccb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e4ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long **pplVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_78;
  long lStack_70;
  long lStack_68;
  
  uStack_a0 = param_1;
  uStack_98 = param_3;
  func_0x000107c614f0();
  lVar2 = 0;
  func_0x000107c5f804();
  lVar10 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar1 = _DAT_112e62fb8;
  lVar11 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1021e30bc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined **)(lVar4 + _DAT_112e62f88) = PTR___swiftEmptyArrayStorage_11034f1c8;
  plVar5 = &lStack_70;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  plStack_78 = plVar5;
  func_0x0001000285a8(0x112e63058,&UNK_10da6c340);
  func_0x000107c613fc();
  pplVar6 = &plStack_78;
  func_0x00010042e6a0();
  *(long ***)(unaff_x20 + lVar1) = pplVar6;
  lVar1 = _DAT_112e62fc0;
  func_0x000107c61614(unaff_x20 + _DAT_112e62fc0,0);
  lVar3 = _DAT_112e62fd0;
  (**(code **)(lVar10 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___s8Dispatch0A3QoSV0B6SClassO15userInteractiveyA2EmFWC_11034f7e8,lVar2);
  puVar7 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar8 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f06f040);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar8);
  (**(code **)(lVar10 + 8))(lVar11,lVar2);
  *(undefined **)(unaff_x20 + lVar3) = puVar7;
  lVar3 = _DAT_112e62fd8;
  *(undefined8 *)(unaff_x20 + _DAT_112e62fd8) = 0;
  func_0x000107c61604(unaff_x20 + lVar1,uStack_a0);
  uVar8 = uStack_98;
  *(undefined8 *)(unaff_x20 + _DAT_112e62fc8) = param_2;
  uVar9 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = uStack_98;
  func_0x000107c615f0(param_2);
  func_0x000107c61174(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61154(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021e4ccc; end: 1021e5523;  */

ulong FUN_1021e4ccc(undefined8 param_1)

{
  uint5 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined **ppuVar30;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  
  uStack_80 = 0;
  uStack_7c = 1;
  func_0x000107c51b94();
  func_0x000107c61180();
  puVar4 = &UNK_1104dfb28;
  func_0x000107c613fc(&UNK_1104dfb28,0x18,7);
  *(undefined4 **)(puVar4 + 0x10) = &uStack_80;
  puVar5 = &UNK_1104dfb50;
  func_0x000107c613fc(&UNK_1104dfb50,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1021e5588;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x1021e57d8;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57b0;
  puStack_98 = &UNK_1104dfb68;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_88;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1104dfba0;
  func_0x000107c613fc(&UNK_1104dfba0,0x18,7);
  *(undefined4 **)(puVar7 + 0x10) = &uStack_80;
  puVar8 = &UNK_1104dfbc8;
  func_0x000107c613fc(&UNK_1104dfbc8,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1021e55b4;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uStack_90 = 0x1021e57d0;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57ac;
  puStack_98 = &UNK_1104dfbe0;
  ppuVar9 = &puStack_b0;
  puStack_88 = puVar8;
  func_0x000107c60bc4();
  puVar10 = puStack_88;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1104dfc18;
  func_0x000107c613fc(&UNK_1104dfc18,0x18,7);
  *(undefined4 **)(puVar10 + 0x10) = &uStack_80;
  puVar11 = &UNK_1104dfc40;
  func_0x000107c613fc(&UNK_1104dfc40,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_1021e55e8;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_90 = 0x1021e57d4;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57b4;
  puStack_98 = &UNK_1104dfc58;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_88;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1104dfc90;
  func_0x000107c613fc(&UNK_1104dfc90,0x18,7);
  *(undefined4 **)(puVar13 + 0x10) = &uStack_80;
  puVar14 = &UNK_1104dfcb8;
  func_0x000107c613fc(&UNK_1104dfcb8,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x1021e5614;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  uStack_90 = 0x1021e5640;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57b8;
  puStack_98 = &UNK_1104dfcd0;
  ppuVar15 = &puStack_b0;
  puStack_88 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar16 = puStack_88;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar16);
  puVar16 = &UNK_1104dfd08;
  func_0x000107c613fc(&UNK_1104dfd08,0x18,7);
  *(undefined4 **)(puVar16 + 0x10) = &uStack_80;
  puVar17 = &UNK_1104dfd30;
  func_0x000107c613fc(&UNK_1104dfd30,0x20,7);
  *(code **)(puVar17 + 0x10) = FUN_1021e5660;
  *(undefined **)(puVar17 + 0x18) = puVar16;
  uStack_90 = 0x1021e57dc;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57bc;
  puStack_98 = &UNK_1104dfd48;
  ppuVar18 = &puStack_b0;
  puStack_88 = puVar17;
  func_0x000107c60bc4();
  puVar19 = puStack_88;
  func_0x000107c6157c(puVar17);
  func_0x000107c61574(puVar19);
  puVar19 = &UNK_1104dfd80;
  func_0x000107c613fc(&UNK_1104dfd80,0x18,7);
  *(undefined4 **)(puVar19 + 0x10) = &uStack_80;
  puVar20 = &UNK_1104dfda8;
  func_0x000107c613fc(&UNK_1104dfda8,0x20,7);
  *(undefined8 *)(puVar20 + 0x10) = 0x1021e57f0;
  *(undefined **)(puVar20 + 0x18) = puVar19;
  uStack_90 = 0x1021e57e0;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57c0;
  puStack_98 = &UNK_1104dfdc0;
  ppuVar21 = &puStack_b0;
  puStack_88 = puVar20;
  func_0x000107c60bc4();
  puVar22 = puStack_88;
  func_0x000107c6157c(puVar20);
  func_0x000107c61574(puVar22);
  puVar22 = &UNK_1104dfdf8;
  func_0x000107c613fc(&UNK_1104dfdf8,0x18,7);
  *(undefined4 **)(puVar22 + 0x10) = &uStack_80;
  puVar23 = &UNK_1104dfe20;
  func_0x000107c613fc(&UNK_1104dfe20,0x20,7);
  *(undefined8 *)(puVar23 + 0x10) = 0x1021e5674;
  *(undefined **)(puVar23 + 0x18) = puVar22;
  uStack_90 = 0x1021e57e4;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57c4;
  puStack_98 = &UNK_1104dfe38;
  ppuVar24 = &puStack_b0;
  puStack_88 = puVar23;
  func_0x000107c60bc4();
  puVar25 = puStack_88;
  func_0x000107c6157c(puVar23);
  func_0x000107c61574(puVar25);
  puVar25 = &UNK_1104dfe70;
  func_0x000107c613fc(&UNK_1104dfe70,0x18,7);
  *(undefined4 **)(puVar25 + 0x10) = &uStack_80;
  puVar26 = &UNK_1104dfe98;
  func_0x000107c613fc(&UNK_1104dfe98,0x20,7);
  *(undefined8 *)(puVar26 + 0x10) = 0x1021e56a8;
  *(undefined **)(puVar26 + 0x18) = puVar25;
  uStack_90 = 0x1021e57e8;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57c8;
  puStack_98 = &UNK_1104dfeb0;
  ppuVar27 = &puStack_b0;
  puStack_88 = puVar26;
  func_0x000107c60bc4();
  puVar28 = puStack_88;
  func_0x000107c6157c(puVar26);
  func_0x000107c61574(puVar28);
  puVar28 = &UNK_1104dfee8;
  func_0x000107c613fc(&UNK_1104dfee8,0x18,7);
  *(undefined4 **)(puVar28 + 0x10) = &uStack_80;
  puVar29 = &UNK_1104dff10;
  func_0x000107c613fc(&UNK_1104dff10,0x20,7);
  *(undefined8 *)(puVar29 + 0x10) = 0x1021e56dc;
  *(undefined **)(puVar29 + 0x18) = puVar28;
  uStack_90 = 0x1021e57ec;
  puStack_b0 = puVar2;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x1021e57cc;
  puStack_98 = &UNK_1104dff28;
  ppuVar30 = &puStack_b0;
  puStack_88 = puVar29;
  func_0x000107c60bc4();
  puVar2 = puStack_88;
  func_0x000107c6157c(puVar29);
  func_0x000107c61574(puVar2);
  func_0x000107c4c574(param_1);
  func_0x000107c60bd0(ppuVar30);
  func_0x000107c60bd0(ppuVar27);
  func_0x000107c60bd0(ppuVar24);
  func_0x000107c60bd0(ppuVar21);
  func_0x000107c60bd0(ppuVar18);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(param_1);
  uVar1 = CONCAT14(uStack_7c,uStack_80);
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",100,0x6b,0xd,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e5504);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",100,0x6c,0x17,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e5508);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",100,0x6d,0x17,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e550c);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",100,0x6e,0x15,1);
  func_0x000107c61574(puVar16);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e5510);
    (*pcVar3)();
  }
  puVar4 = puVar17;
  func_0x000107c61544(puVar17,"",100,0x6f,0x16,1);
  func_0x000107c61574(puVar19);
  func_0x000107c61574(puVar17);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e5514);
    (*pcVar3)();
  }
  puVar4 = puVar20;
  func_0x000107c61544(puVar20,"",100,0x70,0x17,1);
  func_0x000107c61574(puVar22);
  func_0x000107c61574(puVar20);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e5518);
    (*pcVar3)();
  }
  puVar4 = puVar23;
  func_0x000107c61544(puVar23,"",100,0x71,0x21,1);
  func_0x000107c61574(puVar25);
  func_0x000107c61574(puVar23);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e551c);
    (*pcVar3)();
  }
  puVar4 = puVar26;
  func_0x000107c61544(puVar26,"",100,0x72,0x1a,1);
  func_0x000107c61574(puVar28);
  func_0x000107c61574(puVar26);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar29;
    func_0x000107c61544(puVar29,"",100,0x73,0x16,1);
    func_0x000107c61574(puVar29);
    if (((ulong)puVar4 & 1) == 0) {
      return (ulong)uVar1;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e5524);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1021e5520);
  (*pcVar3)();
}



/* Entry: 1021e5524; end: 1021e5547;  */

void FUN_1021e5524(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  pcVar3 = "getRowForProvider(_:)";
  func_0x0001000c10c0("getRowForProvider(_:)");
  func_0x000107c61180();
  puVar4 = &UNK_1104dfad8;
  func_0x000107c613fc(&UNK_1104dfad8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  pcStack_50 = FUN_1021e5580;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1104dfaf0;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1021e5548; end: 1021e557f;  */

void FUN_1021e5548(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1021e5580; end: 1021e5587;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e5580(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  puVar2 = (undefined *)(lVar1 + 0x10);
  func_0x000107c61618();
  if (puVar2 == (undefined *)0x0) {
    return;
  }
  func_0x000107c61428(lVar3 + 0x10,auStack_70,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
LAB_1021e3798:
    func_0x000107c61170(puVar2);
  }
  else {
    puVar4 = puVar2 + _DAT_112e62fc0;
    func_0x000107c61618();
    if (puVar4 != (undefined *)0x0) {
      puVar5 = puVar4;
      func_0x000107c4d508();
      func_0x000107c61180();
      if (puVar5 == (undefined *)0x0) {
        func_0x000107c61170(puVar4);
      }
      else {
        puVar6 = PTR_PTR_1126aead8;
        func_0x000107c610f8(PTR_PTR_1126aead8);
        func_0x000107c4807c();
        puVar7 = PTR_PTR_1126aa168;
        func_0x000107c610f8();
        func_0x000107c479a4();
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar5);
        if (puVar7 != (undefined *)0x0) {
          func_0x000107c44678(lVar3);
          func_0x000107c61170(puVar2);
          func_0x000107c615e8(lVar3);
          puVar2 = puVar7;
          goto LAB_1021e3798;
        }
      }
    }
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(lVar3);
  }
  return;
}



/* Entry: 1021e5588; end: 1021e55b3;  */

void FUN_1021e5588(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  long unaff_x20;
  
  uVar2 = (undefined1)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  puVar3 = *(undefined4 **)(unaff_x20 + 0x10);
  func_0x0001021e2fc8();
  *puVar3 = uVar1;
  *(undefined1 *)(puVar3 + 1) = uVar2;
  return;
}



/* Entry: 1021e55b4; end: 1021e55e7;  */

void FUN_1021e55b4(ulong param_1)

{
  uint uVar1;
  uint *puVar2;
  long unaff_x20;
  
  puVar2 = *(uint **)(unaff_x20 + 0x10);
  uVar1 = 0x12;
  if (param_1 != 0) {
    uVar1 = (uint)(param_1 == 1);
  }
  *puVar2 = uVar1;
  *(bool *)(puVar2 + 1) = 1 < param_1;
  return;
}



/* Entry: 1021e55e8; end: 1021e565f;  */

void FUN_1021e55e8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  long unaff_x20;
  
  uVar2 = (undefined1)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  puVar3 = *(undefined4 **)(unaff_x20 + 0x10);
  func_0x0001021e2fe8();
  *puVar3 = uVar1;
  *(undefined1 *)(puVar3 + 1) = uVar2;
  return;
}



/* Entry: 1021e5660; end: 1021e56eb;  */

void FUN_1021e5660(void)

{
  undefined4 *puVar1;
  long unaff_x20;
  
  puVar1 = *(undefined4 **)(unaff_x20 + 0x10);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}



/* Entry: 1021e56ec; end: 1021e574b;  */

void FUN_1021e56ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1021e574c; end: 1021e57f7;  */

void FUN_1021e574c(long param_1,long param_2)

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



/* Entry: 1021e57f8; end: 1021e6473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1021e57f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_4 + _DAT_113097748);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  func_0x000107c61174();
  func_0x000107c615f0(uVar1);
  uVar1 = param_3;
  func_0x000107c4141c();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  *(undefined8 *)(unaff_x20 + 0x50) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_11;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  uVar1 = param_12;
  func_0x000107c5da30();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_14;
  *(undefined8 *)(unaff_x20 + 0x68) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_16;
  *(undefined8 *)(unaff_x20 + 0x78) = param_15;
  *(undefined8 *)(unaff_x20 + 0x88) = param_17;
  *(undefined8 *)(unaff_x20 + 0x90) = param_18;
  return unaff_x20;
}



/* Entry: 1021e6474; end: 1021e650f;  */

void FUN_1021e6474(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  plVar1 = (long *)0x2e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x1021e64c0;
  plVar1[0x58] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021e6688,0,0);
  return;
}



/* Entry: 1021e6510; end: 1021e6577;  */

void FUN_1021e6510(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021e6578,uVar1,uVar2);
  return;
}



/* Entry: 1021e6578; end: 1021e666f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021e6578(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  long *plVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  lVar5 = *(long *)(lVar5 + _DAT_112e632d0);
  if (lVar5 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x38));
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar2 = 0;
    FUN_1021e30bc();
    lVar3 = lVar2;
    func_0x000107c610f8();
    *(undefined8 *)(lVar3 + _DAT_112e62f88) = uVar4;
    plVar6 = (long *)(unaff_x22 + 0x10);
    *plVar6 = lVar3;
    *(long *)(unaff_x22 + 0x18) = lVar2;
    puVar1 = PTR_s_init_1125d9248;
    func_0x000107c61174(lVar5);
    func_0x000107c61434(uVar4);
    func_0x000107c61154(plVar6,puVar1);
    *(long **)(unaff_x22 + 0x20) = plVar6;
    func_0x0001007d6d78();
    func_0x000107c61170(plVar6);
    FUN_1021e30dc(uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(lVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x0001021e666c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1021e6670; end: 1021e6687;  */

void FUN_1021e6670(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2c0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021e6688,0,0);
  return;
}



/* Entry: 1021e6688; end: 1021e671f;  */

void FUN_1021e6688(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x2c0);
  uVar1 = 0x112e63180;
  func_0x0001000285a8(0x112e63180,&UNK_10da6c450);
  pcVar2 = FUN_1021e71fc;
  func_0x00010488bc98(FUN_1021e71fc,uVar4,uVar1);
  *(code **)(unaff_x22 + 0x2c8) = pcVar2;
  lVar3 = unaff_x22 + 0x10;
  func_0x000107c61418(lVar3,0,uVar1,&UNK_10da6c460,pcVar2,unaff_x22 + 0x2b8);
  func_0x0001029adb8c();
  *(long *)(unaff_x22 + 0x2d0) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x10,unaff_x22 + 0x2b8,FUN_1021e6720,unaff_x22 + 0x290);
  return;
}



/* Entry: 1021e6720; end: 1021e6733;  */

void FUN_1021e6720(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021e6734,0,0);
  return;
}



/* Entry: 1021e6734; end: 1021e6793;  */

void FUN_1021e6734(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2b8);
  func_0x000107c61434();
  FUN_1021e6e18(uVar2);
  *(undefined8 *)(unaff_x22 + 0x2d8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x10,unaff_x22 + 0x2b8,FUN_1021e6794,unaff_x22 + 0x290);
  return;
}



/* Entry: 1021e6794; end: 1021e67a7;  */

void FUN_1021e6794(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1021e67a8,0,0);
  return;
}


