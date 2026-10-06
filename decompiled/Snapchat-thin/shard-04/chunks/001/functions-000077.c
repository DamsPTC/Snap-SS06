/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030d3318; end: 1030d3503;  */

void FUN_1030d3318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cf38;
  ppuVar4 = &PTR_DAT_1130667a8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11060a920;
  func_0x000107c613fc(&UNK_11060a920,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f3ab50;
  func_0x0001000285a8(0x112f3ab50,&UNK_10db86f80);
  func_0x0001000a6ee8(&UNK_11060ab30,"BirthdaySettingsScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_1030d3504,puVar2,uVar3,&UNK_11060ab30,&PTR_DAT_112f3abe0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11060a948;
  func_0x000107c613fc(&UNK_11060a948,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11060a6f0,"SCBirthdaySettingsScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_1030d35ec,puVar2,uVar3,&UNK_11060a6f0,&PTR_DAT_112f3a9e8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11060a8d0,
                      "SCLegacyBirthdaySettingsEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_1030d3668,param_4,uVar3,&UNK_11060a8d0,&PTR_DAT_112f3aa68);
  func_0x000107c61574(param_4);
  uVar3 = 0x112f3ab58;
  func_0x0001000285a8(0x112f3ab58,&UNK_10db86f88);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1030d3504; end: 1030d3543;  */

void FUN_1030d3504(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030d3c40(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BirthdaySettingsScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030d3544; end: 1030d35eb;  */

void FUN_1030d3544(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060a970;
  func_0x000107c613fc(&UNK_11060a970,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1030d36a4;
  func_0x0001000823a8(FUN_1030d36a4,puVar1);
  func_0x000100082720("SCBirthdaySettingsScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1030d35ec; end: 1030d35f3;  */

void FUN_1030d35ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11060a970;
  func_0x000107c613fc(&UNK_11060a970,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1030d36a4;
  func_0x0001000823a8(FUN_1030d36a4,puVar3);
  func_0x000100082720("SCBirthdaySettingsScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1030d35f4; end: 1030d3667;  */

void FUN_1030d35f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1030d3670;
  func_0x0001000823a8(0x1030d3670,param_3);
  func_0x000100082720("SCLegacyBirthdaySettingsEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030d3668; end: 1030d3677;  */

void FUN_1030d3668(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1030d3670;
  func_0x0001000823a8();
  func_0x000100082720("SCLegacyBirthdaySettingsEntryPointWrapperScopeInitializationPluginProvider",
                      0x4a,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030d3678; end: 1030d36a3;  */

void FUN_1030d3678(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030d36a4; end: 1030d36ab;  */

void FUN_1030d36a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11060a778;
  func_0x000107c613fc(&UNK_11060a778,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030d2680;
  func_0x00010058fa64(FUN_1030d2680,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030d36ac; end: 1030d3733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030d36ac(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1030d3a6c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112f3ab60) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f3ab68) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d3734);
  (*pcVar1)();
}



/* Entry: 1030d3734; end: 1030d3793; -[_TtC32BirthdaySettingsScopeGraphBridge47BirthdaySettingsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030d3734(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BirthdaySettingsScopeGraphBridge.BirthdaySettingsScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d3760);
  (*pcVar1)();
}



/* Entry: 1030d3794; end: 1030d37cb; -[_TtC32BirthdaySettingsScopeGraphBridge47BirthdaySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030d37b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d37b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d3794(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3ab60));
  return;
}



/* Entry: 1030d37cc; end: 1030d37f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d37cc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f3ab68),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f3ab60));
  return;
}



/* Entry: 1030d37f4; end: 1030d3813;  */

void FUN_1030d37f4(void)

{
  func_0x000107c61168(&PTR_PTR_1128b59f0);
  return;
}



/* Entry: 1030d3814; end: 1030d389b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030d3814(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3ab98) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f3aba0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030d389c);
  (*pcVar2)();
}



/* Entry: 1030d389c; end: 1030d3983;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030d389c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3ab98);
  *(undefined **)(unaff_x20 + _DAT_112f3ab98) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3aba0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f3aba0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11060aa90;
  func_0x000107c613fc(&UNK_11060aa90,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1030d3988,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1030d3984; end: 1030d398f;  */

void FUN_1030d3984(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030d3990; end: 1030d39ef; -[_TtC32BirthdaySettingsScopeGraphBridge47SCBirthdaySettingsScopedServicesSaberEntryPoint init] */

void FUN_1030d3990(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BirthdaySettingsScopeGraphBridge.SCBirthdaySettingsScopedServicesSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d39bc);
  (*pcVar1)();
}



/* Entry: 1030d39f0; end: 1030d3a27; -[_TtC32BirthdaySettingsScopeGraphBridge47SCBirthdaySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d39f0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3aba0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3ab98));
  return;
}



/* Entry: 1030d3a28; end: 1030d3a2b;  */

void FUN_1030d3a28(void)

{
  return;
}



/* Entry: 1030d3a2c; end: 1030d3a4b;  */

void FUN_1030d3a2c(void)

{
  FUN_1030d389c();
  return;
}



/* Entry: 1030d3a4c; end: 1030d3a6b;  */

void FUN_1030d3a4c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5ab8);
  return;
}



/* Entry: 1030d3a6c; end: 1030d3b3b;  */

undefined8 FUN_1030d3a6c(void)

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
  
  func_0x000107c61428(0x112f3abd0,&uStack_40,0x20,0);
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
    FUN_1030d3b3c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030d3b3c; end: 1030d3b5b;  */

void FUN_1030d3b3c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5b80);
  return;
}



/* Entry: 1030d3b5c; end: 1030d3bc7;  */

void FUN_1030d3b5c(void)

{
  func_0x0001000285a8(0x112f3abd8,&UNK_10db87048);
  func_0x0001000823a8(0x1030d3b9c,0);
  return;
}



/* Entry: 1030d3bc8; end: 1030d3c03; -[_TtC32BirthdaySettingsScopeGraphBridge40BirthdaySettingsScopeGraphBridgeServices init] */

void FUN_1030d3bc8(undefined8 param_1)

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



/* Entry: 1030d3c04; end: 1030d3c37;  */

void FUN_1030d3c04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030d3c38; end: 1030d3c3f;  */

undefined8 FUN_1030d3c38(void)

{
  return 0x1b;
}



/* Entry: 1030d3c40; end: 1030d3db7;  */

void FUN_1030d3c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060aad8;
  func_0x000107c613fc(&UNK_11060aad8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030d3db8,puVar1);
  return;
}



/* Entry: 1030d3db8; end: 1030d3dbf;  */

void FUN_1030d3db8(undefined8 *param_1)

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
  func_0x000107c61428(0x112f3abd0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f3abd0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11060ab70;
  func_0x000107c613fc(&UNK_11060ab70,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030d3e6c;
  func_0x00010058fa64(0x1030d3e6c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030d3dc0; end: 1030d3e1b;  */

void FUN_1030d3dc0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f3abd0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f3abd0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1030d3e1c; end: 1030d3e73;  */

undefined ** FUN_1030d3e1c(void)

{
  return &PTR_DAT_1130667a8;
}



/* Entry: 1030d3e74; end: 1030d3ebb; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d3e74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3ac30;
  func_0x000107c61428(param_1 + _DAT_112f3ac30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030d3ebc; end: 1030d3f13; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d3ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3ac30;
  func_0x000107c61428(param_1 + _DAT_112f3ac30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030d3f14; end: 1030d3f5b; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint birthdaySettingsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d3f14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3ac38;
  func_0x000107c61428(param_1 + _DAT_112f3ac38,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030d3f5c; end: 1030d3fbf; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint setBirthdaySettingsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d3f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3ac38;
  func_0x000107c61428(param_1 + _DAT_112f3ac38,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030d3fc0; end: 1030d40f3;  */

/* WARNING: Possible PIC construction at 0x0001030d4078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d4094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d40b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d407c) */
/* WARNING: Removing unreachable block (ram,0x0001030d4098) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d3fc0(void)

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
  func_0x000107c3e948();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1030d37f4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1030d3a6c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d40f4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112f3ab60) = lVar5;
    *(long *)(lVar4 + _DAT_112f3ab68) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1030d40f4; end: 1030d411b; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1030d40f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030d3fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030d411c; end: 1030d415f; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1030d411c(undefined8 param_1)

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



/* Entry: 1030d4160; end: 1030d42f7;  */

void FUN_1030d4160(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0ee0280)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f11fd80,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "BirthdaySettingsScopeGraphBridge/SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x58,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d42f8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c88();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030d42f8; end: 1030d43a3; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1030d42f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030d4160(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030d43a4; end: 1030d440f; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d43a4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3ac30,0);
  *(undefined8 *)(param_1 + _DAT_112f3ac38) = 0;
  *(undefined8 *)(param_1 + _DAT_112f3ac40) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d4410; end: 1030d4443;  */

void FUN_1030d4410(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030d4444; end: 1030d448b; -[SCBirthdaySettingsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030d4470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d4474) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d4444(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3ac30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3ac38));
  return;
}



/* Entry: 1030d448c; end: 1030d44ab;  */

void FUN_1030d448c(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5c30);
  return;
}



/* Entry: 1030d44ac; end: 1030d44f3; -[SCSCBirthdaySettingsScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d44ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3ac70;
  func_0x000107c61428(param_1 + _DAT_112f3ac70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030d44f4; end: 1030d454b; -[SCSCBirthdaySettingsScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d44f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3ac70;
  func_0x000107c61428(param_1 + _DAT_112f3ac70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030d454c; end: 1030d4623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d454c(undefined8 param_1,long param_2)

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
    FUN_1030d3a4c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f3ab98) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030d4624);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f3aba0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f3ac78);
    *(long **)(unaff_x20 + _DAT_112f3ac78) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1030d4624; end: 1030d464b; -[SCSCBirthdaySettingsScopedServicesSaberEntryPoint begin] */

void FUN_1030d4624(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030d454c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030d464c; end: 1030d47c3;  */

/* WARNING: Possible PIC construction at 0x0001030d46b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d474c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d46b8) */
/* WARNING: Removing unreachable block (ram,0x0001030d4750) */
/* WARNING: Removing unreachable block (ram,0x0001030d4768) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d464c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f3ac78);
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



/* Entry: 1030d47c4; end: 1030d47cb;  */

void FUN_1030d47c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030d47cc; end: 1030d47ff; -[SCSCBirthdaySettingsScopedServicesSaberEntryPoint end] */

void FUN_1030d47cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030d464c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030d4800; end: 1030d491f;  */

void FUN_1030d4800(long param_1,long param_2,long param_3)

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
                        "BirthdaySettingsScopeGraphBridge/SCSCBirthdaySettingsScopedServicesSaberEntryPoint.swift"
                        ,0x58,2,0x30,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d4920);
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



/* Entry: 1030d4920; end: 1030d49cb; -[SCSCBirthdaySettingsScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030d4920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030d4800(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030d49cc; end: 1030d4a2b; -[SCSCBirthdaySettingsScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d49cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3ac70,0);
  *(undefined8 *)(param_1 + _DAT_112f3ac78) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d4a2c; end: 1030d4a5f;  */

void FUN_1030d4a2c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030d4a60; end: 1030d4a97; -[SCSCBirthdaySettingsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d4a60(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3ac70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3ac78));
  return;
}



/* Entry: 1030d4a98; end: 1030d4ab7;  */

void FUN_1030d4a98(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5cf8);
  return;
}



/* Entry: 1030d4ab8; end: 1030d4b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d4ab8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1030d4eac();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f3acb0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1030d4b24; end: 1030d4b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d4b24(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3acb0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d4b90; end: 1030d4bef; -[_TtC40CallFeedbackScopedFactoryServiceProvider26CallFeedbackScopedServices init] */

void FUN_1030d4b90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallFeedbackScopedFactoryServiceProvider.CallFeedbackScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d4bbc);
  (*pcVar1)();
}



/* Entry: 1030d4bf0; end: 1030d4bff; -[_TtC40CallFeedbackScopedFactoryServiceProvider26CallFeedbackScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d4bf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3acb0));
  return;
}



/* Entry: 1030d4c00; end: 1030d4c6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d4c00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11060ad88;
  func_0x000107c613fc(&UNK_11060ad88,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1030d4f44,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1030d4c6c; end: 1030d4d07;  */

void FUN_1030d4c6c(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11060ac98;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11060ac98;
  return;
}



/* Entry: 1030d4d08; end: 1030d4d3f;  */

void FUN_1030d4d08(long *param_1)

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



/* Entry: 1030d4d40; end: 1030d4d47;  */

undefined8 FUN_1030d4d40(void)

{
  return 0x1b;
}



/* Entry: 1030d4d48; end: 1030d4e7b;  */

void FUN_1030d4d48(undefined8 *param_1)

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
  puVar1 = &UNK_11060adb0;
  func_0x000107c613fc(&UNK_11060adb0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030d4f1c;
  func_0x00010058fa64(FUN_1030d4f1c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030d4e7c; end: 1030d4eab;  */

undefined ** FUN_1030d4e7c(void)

{
  return &PTR_DAT_113066508;
}



/* Entry: 1030d4eac; end: 1030d4ecb;  */

void FUN_1030d4eac(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5db8);
  return;
}



/* Entry: 1030d4ecc; end: 1030d4f1b;  */

undefined1  [16] FUN_1030d4ecc(void)

{
  return ZEXT816(0x11060ace8);
}



/* Entry: 1030d4f1c; end: 1030d4f43;  */

void FUN_1030d4f1c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1030d4f44; end: 1030d4f57;  */

void FUN_1030d4f44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1030d4f58; end: 1030d52e7;  */

void FUN_1030d4f58(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f3ad28,&UNK_10db87448);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1030d61b8();
  func_0x000100082720("SCShakeToReportScopeExposerSubjectServiceProvider",0x31,2);
  puVar3 = puVar2;
  FUN_1030d6244();
  func_0x000100082720("SCShakeToReportScopeExposerObservableServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1030d4d08;
  func_0x0001000823a8(FUN_1030d4d08,0);
  func_0x000100082720("CallFeedbackScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f3ad30,&UNK_10db87460);
  puVar5 = &UNK_11060ae60;
  func_0x000107c613fc(&UNK_11060ae60,0x40,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 *)(puVar5 + 0x30) = param_6;
  *(undefined8 **)(puVar5 + 0x38) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x1030d52f4;
  func_0x0001000823a8(0x1030d52f4,puVar5);
  func_0x000100082720("CallFeedbackEntryPointWrapperServiceProvider",0x2c,2);
  puVar6 = puVar2;
  FUN_1030d606c();
  func_0x000100082720("CallFeedbackScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f3ad38,&UNK_10db87450);
  puVar5 = &UNK_11060ae88;
  func_0x000107c613fc(&UNK_11060ae88,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar6;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x1030d5304;
  func_0x0001000823a8(0x1030d5304,puVar5);
  func_0x000100082720("CallFeedbackScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f3acb8,&UNK_10db87210);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1030d5310;
  func_0x0001000823a8(0x1030d5310,uVar7);
  func_0x000100082720("CallFeedbackScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f3aca8,&UNK_10db87200);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1030d5318;
  func_0x0001000823a8(0x1030d5318,uVar8);
  func_0x000100082720("CallFeedbackScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11060aeb0;
  func_0x000107c613fc(&UNK_11060aeb0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1030d5320;
  func_0x0001000823a8(0x1030d5320,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("CallFeedbackScopeEntryPointProvider",0x23,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 1030d52e8; end: 1030d5327;  */

void FUN_1030d52e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar11 = *param_2;
  func_0x0001000285a8(0x112f3ad28,&UNK_10db87448);
  puVar1 = &uStack_68;
  uStack_68 = uVar11;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1030d61b8();
  func_0x000100082720("SCShakeToReportScopeExposerSubjectServiceProvider",0x31,2);
  puVar3 = puVar2;
  FUN_1030d6244();
  func_0x000100082720("SCShakeToReportScopeExposerObservableServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1030d4d08;
  func_0x0001000823a8(FUN_1030d4d08,0);
  func_0x000100082720("CallFeedbackScopedServicesCleanupRelayServiceProvider",0x35,2);
  func_0x0001000285a8(0x112f3ad30,&UNK_10db87460);
  puVar5 = &UNK_11060ae60;
  func_0x000107c613fc(&UNK_11060ae60,0x40,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar9;
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  *(undefined8 *)(puVar5 + 0x30) = uVar10;
  *(undefined8 **)(puVar5 + 0x38) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar3);
  uVar6 = 0x1030d52f4;
  func_0x0001000823a8(0x1030d52f4,puVar5);
  func_0x000100082720("CallFeedbackEntryPointWrapperServiceProvider",0x2c,2);
  puVar7 = puVar2;
  FUN_1030d606c();
  func_0x000100082720("CallFeedbackScopeGraphBridgeServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112f3ad38,&UNK_10db87450);
  puVar5 = &UNK_11060ae88;
  func_0x000107c613fc(&UNK_11060ae88,0x30,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar6;
  *(undefined8 **)(puVar5 + 0x18) = puVar1;
  *(undefined8 **)(puVar5 + 0x20) = puVar7;
  *(code **)(puVar5 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar7);
  func_0x000107c6157c(pcVar4);
  uVar8 = 0x1030d5304;
  func_0x0001000823a8(0x1030d5304,puVar5);
  func_0x000100082720("CallFeedbackScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112f3acb8,&UNK_10db87210);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1030d5310;
  func_0x0001000823a8(0x1030d5310,uVar8);
  func_0x000100082720("CallFeedbackScopeInitializationServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112f3aca8,&UNK_10db87200);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1030d5318;
  func_0x0001000823a8(0x1030d5318,uVar9);
  func_0x000100082720("CallFeedbackScopedServicesServiceProvider",0x29,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11060aeb0;
  func_0x000107c613fc(&UNK_11060aeb0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x1030d5320;
  func_0x0001000823a8(0x1030d5320,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("CallFeedbackScopeEntryPointProvider",0x23,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1030d5328; end: 1030d55f7;  */

void FUN_1030d5328(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  FUN_1030d5700();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  func_0x0001000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c6157c(uStack_90);
  func_0x00010017da58();
  puVar6 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar5);
  *(undefined **)(param_2 + 0x18) = puVar6;
  FUN_1030d7ff8(0);
  func_0x000107c610f8();
  func_0x000107c61174(puVar6);
  uVar5 = uStack_68;
  FUN_1030d7360(uStack_68,uVar1,uVar2,uVar3,uVar4,puVar6);
  func_0x000107c61574(uStack_90);
  *(undefined8 *)(param_2 + 0x10) = uVar5;
  *param_1 = param_2;
  return;
}



/* Entry: 1030d55f8; end: 1030d5643;  */

void FUN_1030d55f8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1030d5644; end: 1030d564b;  */

undefined8 FUN_1030d5644(void)

{
  return 0x1b;
}



/* Entry: 1030d564c; end: 1030d56cf;  */

void FUN_1030d564c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1030d5740,param_2,FUN_1030d5744,param_2,0x1030d576c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1030d56d0; end: 1030d56ff;  */

undefined ** FUN_1030d56d0(void)

{
  return &PTR_DAT_113066508;
}



/* Entry: 1030d5700; end: 1030d571f;  */

void FUN_1030d5700(void)

{
  func_0x000107c61168(&PTR_PTR_112f3ada8);
  return;
}



/* Entry: 1030d5720; end: 1030d5743;  */

undefined1  [16] FUN_1030d5720(void)

{
  return ZEXT816(0x11060af08);
}



/* Entry: 1030d5744; end: 1030d5797;  */

void FUN_1030d5744(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1030d5798; end: 1030d57d3;  */

void FUN_1030d5798(undefined8 *param_1,undefined8 param_2)

{
  FUN_1030d57d4();
  func_0x0001000a7f38("CallFeedbackScopeInitializationPluginRegistryServiceProvider",0x3c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1030d57d4; end: 1030d59bf;  */

void FUN_1030d57d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cad8;
  ppuVar4 = &PTR_DAT_113066508;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112f3ae30;
  func_0x0001000285a8(0x112f3ae30,&UNK_10db87590);
  func_0x0001000a6ee8(&UNK_11060af08,"CallFeedbackEntryPointWrapperScopeInitializationPluginKey",
                      0x39,2,FUN_1030d5a34,param_1,uVar2,&UNK_11060af08,&PTR_DAT_112f3ad40);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11060af58;
  func_0x000107c613fc(&UNK_11060af58,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11060b1a8,"CallFeedbackScopeGraphBridgeScopeInitializationPluginKey",0x38
                      ,2,FUN_1030d5a3c,puVar3,uVar2,&UNK_11060b1a8,&PTR_DAT_112f3aec8);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11060af80;
  func_0x000107c613fc(&UNK_11060af80,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11060ad28,"CallFeedbackScopedServicesScopeInitializationPluginKey",0x36,2
                      ,FUN_1030d5b24,puVar3,uVar2,&UNK_11060ad28,&PTR_DAT_112f3acc0);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112f3ae38;
  func_0x0001000285a8(0x112f3ae38,&UNK_10db87598);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 1030d59c0; end: 1030d5a33;  */

void FUN_1030d59c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1030d5b60;
  func_0x0001000823a8(0x1030d5b60,param_3);
  func_0x000100082720("CallFeedbackEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030d5a34; end: 1030d5a3b;  */

void FUN_1030d5a34(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1030d5b60;
  func_0x0001000823a8();
  func_0x000100082720("CallFeedbackEntryPointWrapperScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030d5a3c; end: 1030d5a7b;  */

void FUN_1030d5a3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1030d62ec(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("CallFeedbackScopeGraphBridgeScopeInitializationPluginProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1030d5a7c; end: 1030d5b23;  */

void FUN_1030d5a7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11060afa8;
  func_0x000107c613fc(&UNK_11060afa8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1030d5b58;
  func_0x0001000823a8(FUN_1030d5b58,puVar1);
  func_0x000100082720("CallFeedbackScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1030d5b24; end: 1030d5b2b;  */

void FUN_1030d5b24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11060afa8;
  func_0x000107c613fc(&UNK_11060afa8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1030d5b58;
  func_0x0001000823a8(FUN_1030d5b58,puVar3);
  func_0x000100082720("CallFeedbackScopedServicesScopeInitializationPluginProvider",0x3b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1030d5b2c; end: 1030d5b57;  */

void FUN_1030d5b2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1030d5b58; end: 1030d5b67;  */

void FUN_1030d5b58(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11060adb0;
  func_0x000107c613fc(&UNK_11060adb0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1030d4f1c;
  func_0x00010058fa64(FUN_1030d4f1c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030d5b68; end: 1030d5c43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030d5b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1030d5f7c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112f3ae40) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112f3ae48) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d5c44);
  (*pcVar1)();
}



/* Entry: 1030d5c44; end: 1030d5ca3; -[_TtC28CallFeedbackScopeGraphBridge43CallFeedbackScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030d5c44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallFeedbackScopeGraphBridge.CallFeedbackScopeGraphBridgeSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d5c70);
  (*pcVar1)();
}



/* Entry: 1030d5ca4; end: 1030d5cdb; -[_TtC28CallFeedbackScopeGraphBridge43CallFeedbackScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030d5cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d5cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d5ca4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3ae40));
  return;
}



/* Entry: 1030d5cdc; end: 1030d5d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d5cdc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112f3ae48),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112f3ae40));
  return;
}



/* Entry: 1030d5d04; end: 1030d5d23;  */

void FUN_1030d5d04(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5e78);
  return;
}



/* Entry: 1030d5d24; end: 1030d5dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030d5d24(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3ae78) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f3ae80);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1030d5dac);
  (*pcVar2)();
}



/* Entry: 1030d5dac; end: 1030d5e93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1030d5dac(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3ae78);
  *(undefined **)(unaff_x20 + _DAT_112f3ae78) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f3ae80);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f3ae80))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11060b0c8;
  func_0x000107c613fc(&UNK_11060b0c8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1030d5e98,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1030d5e94; end: 1030d5e9f;  */

void FUN_1030d5e94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030d5ea0; end: 1030d5eff; -[_TtC28CallFeedbackScopeGraphBridge41CallFeedbackScopedServicesSaberEntryPoint init] */

void FUN_1030d5ea0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CallFeedbackScopeGraphBridge.CallFeedbackScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d5ecc);
  (*pcVar1)();
}



/* Entry: 1030d5f00; end: 1030d5f37; -[_TtC28CallFeedbackScopeGraphBridge41CallFeedbackScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d5f00(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f3ae80));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3ae78));
  return;
}


