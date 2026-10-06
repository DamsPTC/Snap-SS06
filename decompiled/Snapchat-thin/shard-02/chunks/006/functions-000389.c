/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101f23ad0; end: 101f23ad7;  */

undefined8 FUN_101f23ad0(void)

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



/* Entry: 101f23ad8; end: 101f23b13;  */

void FUN_101f23ad8(undefined8 *param_1,undefined8 param_2)

{
  FUN_101f23b14();
  func_0x0001000a7f38("SCProgressOverlayScopeInitializationPluginRegistryServiceProvider",0x41,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101f23b14; end: 101f23cff;  */

void FUN_101f23b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074da78;
  ppuVar4 = &PTR_DAT_113066e68;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104a0338;
  func_0x000107c613fc(&UNK_1104a0338,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e40d60;
  func_0x0001000285a8(0x112e40d60,&UNK_10da2f4f8);
  func_0x0001000a6ee8(&UNK_1104a0548,"ProgressOverlayScopeGraphBridgeScopeInitializationPluginKey",
                      0x3b,2,FUN_101f23d00,puVar2,uVar3,&UNK_1104a0548,&PTR_DAT_112e40df0);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104a02e8,
                      "SCProgressOverlayEntryPointWrapperScopeInitializationPluginKey",0x3e,2,
                      FUN_101f23db4,param_3,uVar3,&UNK_1104a02e8,&PTR_DAT_112e40c98);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104a0360;
  func_0x000107c613fc(&UNK_1104a0360,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104a0180,"SCProgressOverlayScopedServicesScopeInitializationPluginKey",
                      0x3b,2,FUN_101f23e64,puVar2,uVar3,&UNK_1104a0180,&PTR_DAT_112e40c18);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e40d68;
  func_0x0001000285a8(0x112e40d68,&UNK_10da2f500);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101f23d00; end: 101f23d3f;  */

void FUN_101f23d00(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101f2443c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ProgressOverlayScopeGraphBridgeScopeInitializationPluginProvider",0x40,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f23d40; end: 101f23db3;  */

void FUN_101f23d40(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101f23ea0;
  func_0x0001000823a8(0x101f23ea0,param_3);
  func_0x000100082720("SCProgressOverlayEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f23db4; end: 101f23dbb;  */

void FUN_101f23db4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101f23ea0;
  func_0x0001000823a8();
  func_0x000100082720("SCProgressOverlayEntryPointWrapperScopeInitializationPluginProvider",0x43,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101f23dbc; end: 101f23e63;  */

void FUN_101f23dbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a0388;
  func_0x000107c613fc(&UNK_1104a0388,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101f23e98;
  func_0x0001000823a8(FUN_101f23e98,puVar1);
  func_0x000100082720("SCProgressOverlayScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101f23e64; end: 101f23e6b;  */

void FUN_101f23e64(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104a0388;
  func_0x000107c613fc(&UNK_1104a0388,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101f23e98;
  func_0x0001000823a8(FUN_101f23e98,puVar3);
  func_0x000100082720("SCProgressOverlayScopedServicesScopeInitializationPluginProvider",0x40,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101f23e6c; end: 101f23e97;  */

void FUN_101f23e6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101f23e98; end: 101f23ea7;  */

void FUN_101f23e98(undefined8 *param_1)

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
  puVar1 = &UNK_1104a0208;
  func_0x000107c613fc(&UNK_1104a0208,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101f233f4;
  func_0x00010058fa64(FUN_101f233f4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f23ea8; end: 101f23f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f23ea8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101f24268();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e40d70) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e40d78) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f23f30);
  (*pcVar1)();
}



/* Entry: 101f23f30; end: 101f23f8f; -[_TtC31ProgressOverlayScopeGraphBridge46ProgressOverlayScopeGraphBridgeSaberEntryPoint init] */

void FUN_101f23f30(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProgressOverlayScopeGraphBridge.ProgressOverlayScopeGraphBridgeSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f23f5c);
  (*pcVar1)();
}



/* Entry: 101f23f90; end: 101f23fc7; -[_TtC31ProgressOverlayScopeGraphBridge46ProgressOverlayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f23fac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f23fb0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f23f90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40d70));
  return;
}



/* Entry: 101f23fc8; end: 101f23fef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f23fc8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e40d78),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e40d70));
  return;
}



/* Entry: 101f23ff0; end: 101f2400f;  */

void FUN_101f23ff0(void)

{
  func_0x000107c61168(&PTR_PTR_112809f40);
  return;
}



/* Entry: 101f24010; end: 101f24097;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101f24010(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e40da8) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e40db0);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101f24098);
  (*pcVar2)();
}



/* Entry: 101f24098; end: 101f2417f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101f24098(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e40da8);
  *(undefined **)(unaff_x20 + _DAT_112e40da8) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e40db0);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e40db0))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104a04a8;
  func_0x000107c613fc(&UNK_1104a04a8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101f24184,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101f24180; end: 101f2418b;  */

void FUN_101f24180(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f2418c; end: 101f241eb; -[_TtC31ProgressOverlayScopeGraphBridge46SCProgressOverlayScopedServicesSaberEntryPoint init] */

void FUN_101f2418c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ProgressOverlayScopeGraphBridge.SCProgressOverlayScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101f241b8);
  (*pcVar1)();
}



/* Entry: 101f241ec; end: 101f24223; -[_TtC31ProgressOverlayScopeGraphBridge46SCProgressOverlayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f241ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e40db0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40da8));
  return;
}



/* Entry: 101f24224; end: 101f24227;  */

void FUN_101f24224(void)

{
  return;
}



/* Entry: 101f24228; end: 101f24247;  */

void FUN_101f24228(void)

{
  FUN_101f24098();
  return;
}



/* Entry: 101f24248; end: 101f24267;  */

void FUN_101f24248(void)

{
  func_0x000107c61168(&PTR_PTR_11280a008);
  return;
}



/* Entry: 101f24268; end: 101f24337;  */

undefined8 FUN_101f24268(void)

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
  
  func_0x000107c61428(0x112e40de0,&uStack_40,0x20,0);
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
    FUN_101f24338();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101f24338; end: 101f24357;  */

void FUN_101f24338(void)

{
  func_0x000107c61168(&PTR_PTR_11280a0d0);
  return;
}



/* Entry: 101f24358; end: 101f243c3;  */

void FUN_101f24358(void)

{
  func_0x0001000285a8(0x112e40de8,&UNK_10da2f5b8);
  func_0x0001000823a8(0x101f24398,0);
  return;
}



/* Entry: 101f243c4; end: 101f243ff; -[_TtC31ProgressOverlayScopeGraphBridge39ProgressOverlayScopeGraphBridgeServices init] */

void FUN_101f243c4(undefined8 param_1)

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



/* Entry: 101f24400; end: 101f24433;  */

void FUN_101f24400(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f24434; end: 101f2443b;  */

undefined8 FUN_101f24434(void)

{
  return 0x1b;
}



/* Entry: 101f2443c; end: 101f245b3;  */

void FUN_101f2443c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104a04f0;
  func_0x000107c613fc(&UNK_1104a04f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101f245b4,puVar1);
  return;
}



/* Entry: 101f245b4; end: 101f245bb;  */

void FUN_101f245b4(undefined8 *param_1)

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
  func_0x000107c61428(0x112e40de0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e40de0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104a0588;
  func_0x000107c613fc(&UNK_1104a0588,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101f24668;
  func_0x00010058fa64(0x101f24668,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101f245bc; end: 101f24617;  */

void FUN_101f245bc(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e40de0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e40de0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101f24618; end: 101f2466f;  */

undefined ** FUN_101f24618(void)

{
  return &PTR_DAT_113066e68;
}



/* Entry: 101f24670; end: 101f246b7; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24670(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e40e40;
  func_0x000107c61428(param_1 + _DAT_112e40e40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f246b8; end: 101f2470f; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f246b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e40e40;
  func_0x000107c61428(param_1 + _DAT_112e40e40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f24710; end: 101f24757; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint progressOverlayScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24710(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e40e48;
  func_0x000107c61428(param_1 + _DAT_112e40e48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101f24758; end: 101f247bb; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint setProgressOverlayScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24758(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e40e48;
  func_0x000107c61428(param_1 + _DAT_112e40e48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101f247bc; end: 101f248ef;  */

/* WARNING: Possible PIC construction at 0x000101f24874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f24890: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f248ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f24878) */
/* WARNING: Removing unreachable block (ram,0x000101f24894) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f247bc(void)

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
  func_0x000107c4f3fc();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101f23ff0();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101f24268();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101f248f0);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e40d70) = lVar5;
    *(long *)(lVar4 + _DAT_112e40d78) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101f248f0; end: 101f24917; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101f248f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f247bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f24918; end: 101f2495b; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint end] */

void FUN_101f24918(undefined8 param_1)

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



/* Entry: 101f2495c; end: 101f24af3;  */

void FUN_101f2495c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0fe40f0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f01bf10,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ProgressOverlayScopeGraphBridge/SCProgressOverlayScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x56,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101f24af4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57928();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101f24af4; end: 101f24b9f; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101f24af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f2495c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f24ba0; end: 101f24c0b; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24ba0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e40e40,0);
  *(undefined8 *)(param_1 + _DAT_112e40e48) = 0;
  *(undefined8 *)(param_1 + _DAT_112e40e50) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f24c0c; end: 101f24c3f;  */

void FUN_101f24c0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f24c40; end: 101f24c87; -[SCProgressOverlayScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101f24c6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f24c70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24c40(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e40e40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40e48));
  return;
}



/* Entry: 101f24c88; end: 101f24ca7;  */

void FUN_101f24c88(void)

{
  func_0x000107c61168(&PTR_PTR_11280a180);
  return;
}



/* Entry: 101f24ca8; end: 101f24cef; -[SCSCProgressOverlayScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24ca8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e40e80;
  func_0x000107c61428(param_1 + _DAT_112e40e80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101f24cf0; end: 101f24d47; -[SCSCProgressOverlayScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24cf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e40e80;
  func_0x000107c61428(param_1 + _DAT_112e40e80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101f24d48; end: 101f24e1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24d48(undefined8 param_1,long param_2)

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
    FUN_101f24248();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e40da8) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101f24e20);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e40db0);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e40e88);
    *(long **)(unaff_x20 + _DAT_112e40e88) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101f24e20; end: 101f24e47; -[SCSCProgressOverlayScopedServicesSaberEntryPoint begin] */

void FUN_101f24e20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101f24d48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101f24e48; end: 101f24fbf;  */

/* WARNING: Possible PIC construction at 0x000101f24eb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101f24f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101f24eb4) */
/* WARNING: Removing unreachable block (ram,0x000101f24f4c) */
/* WARNING: Removing unreachable block (ram,0x000101f24f64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f24e48(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e40e88);
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



/* Entry: 101f24fc0; end: 101f24fc7;  */

void FUN_101f24fc0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101f24fc8; end: 101f24ffb; -[SCSCProgressOverlayScopedServicesSaberEntryPoint end] */

void FUN_101f24fc8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101f24e48();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101f24ffc; end: 101f2511b;  */

void FUN_101f24ffc(long param_1,long param_2,long param_3)

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
                        "ProgressOverlayScopeGraphBridge/SCSCProgressOverlayScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101f2511c);
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



/* Entry: 101f2511c; end: 101f251c7; -[SCSCProgressOverlayScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101f2511c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101f24ffc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101f251c8; end: 101f25227; -[SCSCProgressOverlayScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f251c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e40e80,0);
  *(undefined8 *)(param_1 + _DAT_112e40e88) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101f25228; end: 101f2525b;  */

void FUN_101f25228(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101f2525c; end: 101f25293; -[SCSCProgressOverlayScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101f2525c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e40e80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e40e88));
  return;
}



/* Entry: 101f25294; end: 101f252b3;  */

void FUN_101f25294(void)

{
  func_0x000107c61168(&PTR_PTR_11280a248);
  return;
}



/* Entry: 101f252b4; end: 101f252d3;  */

undefined1  [16] FUN_101f252b4(void)

{
  return ZEXT816(0x1104a06e8);
}



/* Entry: 101f252d4; end: 101f25353;  */

void FUN_101f252d4(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e40ee0,&UNK_10da2f840);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_101f25444;
  func_0x0001008f0b08(FUN_101f25444,param_2);
  func_0x0001008f0b74("DevelopmentApplicationPluginRegistryServiceProvider",0x33,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101f25354; end: 101f25443;  */

void FUN_101f25354(undefined8 *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  bVar1 = *param_2;
  if (bVar1 < 0xb) {
    if (3 < bVar1 || bVar1 < 2) goto LAB_101f25434;
    if (bVar1 == 2) {
      func_0x0001030535bc();
      pcVar2 = "DeckNavigationTestbedDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x3f;
    }
    else {
      FUN_101f29cd0();
      pcVar2 = "MapDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x2d;
    }
  }
  else {
    if (0xd < bVar1) goto LAB_101f25434;
    if (bVar1 == 0xb) {
      func_0x000102938e34();
      pcVar2 = "CreatorSubscriptionsPaywallDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x45;
    }
    else if (bVar1 == 0xc) {
      func_0x0001025525b8();
      pcVar2 = "WidgetOnboardingWorkflowDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x42;
    }
    else {
      func_0x000102926b18();
      pcVar2 = "CreatorSubscriptionOnboardingDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x47;
    }
  }
  func_0x000100082720(pcVar2,uVar3,2);
  uVar3 = param_3;
LAB_101f25434:
  *param_1 = uVar3;
  return;
}



/* Entry: 101f25444; end: 101f2544b;  */

void FUN_101f25444(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  uVar3 = 0;
  bVar1 = *param_2;
  if (bVar1 < 0xb) {
    if (3 < bVar1 || bVar1 < 2) goto LAB_101f25434;
    if (bVar1 == 2) {
      func_0x0001030535bc();
      pcVar2 = "DeckNavigationTestbedDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x3f;
    }
    else {
      FUN_101f29cd0();
      pcVar2 = "MapDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x2d;
    }
  }
  else {
    if (0xd < bVar1) goto LAB_101f25434;
    if (bVar1 == 0xb) {
      func_0x000102938e34();
      pcVar2 = "CreatorSubscriptionsPaywallDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x45;
    }
    else if (bVar1 == 0xc) {
      func_0x0001025525b8();
      pcVar2 = "WidgetOnboardingWorkflowDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x42;
    }
    else {
      func_0x000102926b18();
      pcVar2 = "CreatorSubscriptionOnboardingDevelopmentApplicationPluginPluginProvider";
      uVar3 = 0x47;
    }
  }
  func_0x000100082720(pcVar2,uVar3,2);
  uVar3 = unaff_x20;
LAB_101f25434:
  *param_1 = uVar3;
  return;
}



/* Entry: 101f2544c; end: 101f254cb;  */

void FUN_101f2544c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e40ee8,&UNK_10da2f848);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_101f254cc;
  func_0x0001008f0b08(FUN_101f254cc,param_2);
  func_0x0001008f0b74("DevelopmentApplicationToolbarItemPluginRegistryServiceProvider",0x3e,2);
  *param_1 = pcVar1;
  return;
}



/* Entry: 101f254cc; end: 101f2550b;  */

void FUN_101f254cc(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_101f481e4();
  func_0x000100082720("ScopeGraphLauncherDevelopmentApplicationToolbarItemPluginPluginProvider",0x47
                      ,2);
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101f2550c; end: 101f25583;  */

void FUN_101f2550c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112e40f00;
  func_0x0001000285a8(0x112e40f00,&UNK_10da2f860);
  func_0x0001000838ec();
  uVar2 = uVar1;
  FUN_101f2a144();
  func_0x000107c61574(uVar1);
  func_0x000100082720("MapNavigationPluginPluginProvider",0x21,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101f25584; end: 101f2559b;  */

void FUN_101f25584(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112e40f00;
  func_0x0001000285a8(0x112e40f00,&UNK_10da2f860);
  func_0x0001000838ec();
  uVar2 = uVar1;
  FUN_101f2a144();
  func_0x000107c61574(uVar1);
  func_0x000100082720("MapNavigationPluginPluginProvider",0x21,2);
  *param_1 = uVar2;
  return;
}



/* Entry: 101f2559c; end: 101f255df;  */

void FUN_101f2559c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 101f255e0; end: 101f25697;  */

undefined1 * FUN_101f255e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_80 [8];
  
  puVar2 = auStack_80;
  func_0x000100083b20(auStack_80);
  uVar1 = auStack_80[0];
  func_0x000100083b20(auStack_80);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar3);
  func_0x000100b64c10(param_1,param_2);
  FUN_101f29664(auStack_80,uVar1,auStack_80[0],uVar3,param_1,param_2);
  FUN_101f256c4();
  func_0x0001030744e4(auStack_80,&UNK_1104a0888,uVar1);
  FUN_101f25704(auStack_80);
  return (undefined1 *)puVar2;
}



/* Entry: 101f25698; end: 101f256a3;  */

void FUN_101f25698(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001008f14e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101f256a4; end: 101f256c3;  */

void FUN_101f256a4(void)

{
  FUN_101f255e0();
  return;
}



/* Entry: 101f256c4; end: 101f25703;  */

void FUN_101f256c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e40f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da2fa04;
  func_0x000107c61520(&UNK_10da2fa04,&UNK_1104a0888);
  puRam0000000112e40f18 = puVar1;
  return;
}



/* Entry: 101f25704; end: 101f25737;  */

undefined8 FUN_101f25704(undefined8 param_1)

{
  (*(code *)(undefined *)0x101f25d14)();
  return param_1;
}



/* Entry: 101f25738; end: 101f25763;  */

undefined1  [16] FUN_101f25738(void)

{
  return ZEXT816(0x1104a0808);
}



/* Entry: 101f25764; end: 101f2592f;  */

void FUN_101f25764(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long alStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar11 = *(long *)(param_3 + -8);
  alStack_a0[0] = param_2;
  alStack_a0[1] = param_4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar4 = (long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_101f25c2c();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = (undefined8 *)(lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  iVar1 = *(int *)(lVar2 + 0x14);
  lVar3 = 0;
  func_0x000107c5f4bc();
  (**(code **)(*(long *)(lVar3 + -8) + 0x10))((long)puVar7 + (long)iVar1,param_1,lVar3);
  (**(code **)(lVar11 + 0x10))(lVar4,alStack_a0[0],param_3);
  func_0x000107c5f76c(lVar4,param_3,alStack_a0[1]);
  *puVar7 = uVar8;
  *(long *)((long)puVar7 + (long)*(int *)(lVar2 + 0x18)) = lVar4;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0x21,0);
  uVar9 = *(ulong *)(unaff_x20 + 0x10);
  uVar5 = uVar9;
  func_0x000107c61558();
  *(ulong *)(unaff_x20 + 0x10) = uVar9;
  uVar6 = uVar9;
  if ((uVar5 & 1) == 0) {
    uVar6 = 0;
    FUN_101f28340(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
    *(ulong *)(unaff_x20 + 0x10) = uVar6;
  }
  uVar5 = *(ulong *)(uVar6 + 0x10);
  uVar9 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_101f28340(uVar9,uVar5 + 1,1,uVar6);
  }
  *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
  FUN_101f29620(puVar7,uVar9 + ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar10 + 0x48) * uVar5);
  *(ulong *)(unaff_x20 + 0x10) = uVar9;
  func_0x000107c614a8(auStack_90);
  return;
}



/* Entry: 101f25930; end: 101f25973;  */

void FUN_101f25930(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101f25974; end: 101f25c13;  */

long * FUN_101f25974(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    iVar2 = *(int *)(param_3 + 0x14);
    lVar3 = 0;
    func_0x000107c5f4bc();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar3);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101f25c14; end: 101f25c2b;  */

void FUN_101f25c14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101f25c2c; end: 101f25c63;  */

void FUN_101f25c2c(undefined8 param_1)

{
  if (lRam0000000112e410c8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e69cfbc);
  return;
}



/* Entry: 101f25c64; end: 101f25d63;  */

void FUN_101f25c64(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_38 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar1 = 0x13f;
  func_0x000107c5f4bc();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBoWV_11034d678 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&puStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 101f25d64; end: 101f25e03;  */

undefined8 * FUN_101f25d64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar3;
  param_1[3] = uVar2;
  lVar4 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000107c6157c(uVar2);
  if (lVar4 == 0) {
    lVar4 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar4;
  }
  else {
    uVar3 = param_2[5];
    param_1[4] = lVar4;
    param_1[5] = uVar3;
    func_0x000107c6157c();
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 101f25e04; end: 101f25fc7;  */

undefined8 * FUN_101f25e04(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c6157c();
  func_0x000107c61574(uVar2);
  lVar1 = param_2[4];
  if (param_1[4] == 0) {
    if (lVar1 != 0) {
      uVar2 = param_2[5];
      param_1[4] = lVar1;
      param_1[5] = uVar2;
      func_0x000107c6157c();
      goto LAB_101f25ed4;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = param_2[5];
      uVar3 = param_1[5];
      param_1[4] = lVar1;
      param_1[5] = uVar2;
      func_0x000107c6157c();
      func_0x000107c61574(uVar3);
      goto LAB_101f25ed4;
    }
    func_0x000107c61574(param_1[5]);
  }
  lVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar1;
LAB_101f25ed4:
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6157c();
  func_0x000107c61574(uVar2);
  return param_1;
}



/* Entry: 101f25fc8; end: 101f2607b;  */

int FUN_101f25fc8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101f2607c; end: 101f2609b;  */

void FUN_101f2607c(void)

{
  FUN_101f25764();
  return;
}



/* Entry: 101f2609c; end: 101f260ab;  */

void FUN_101f2609c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc028c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getOpaqueTypeConformance_11034f3b8)(param_1,&UNK_10e69d024,1);
  return;
}



/* Entry: 101f260ac; end: 101f2688f;  */

void FUN_101f260ac(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined4 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar14;
  long extraout_x12;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long alStack_1e0 [5];
  undefined8 auStack_1b8 [2];
  long alStack_1a8 [3];
  long alStack_190 [5];
  ulong uStack_168;
  long alStack_160 [10];
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
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
  
  lVar3 = 0x112e41158;
  alStack_190[0] = param_2;
  alStack_160[6] = param_1;
  func_0x0001000285a8(0x112e41158,&UNK_10da2fa98);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar16 = (long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12;
  lVar4 = 0x112e41190;
  func_0x0001000285a8(0x112e41190,&UNK_10da2fab0);
  alStack_190[4] = *(long *)(lVar4 + -8);
  alStack_190[1] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_190[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar15 - extraout_x8_00;
  lVar4 = 0x112e41150;
  func_0x0001000285a8(0x112e41150,&UNK_10da2fa90);
  alStack_190[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar18 - extraout_x8_01;
  lVar4 = 0x112e41138;
  func_0x0001000285a8(0x112e41138,&UNK_10da2fa88);
  uStack_168 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar17 - extraout_x8_02;
  lVar4 = 0x112e41130;
  func_0x0001000285a8(0x112e41130,&UNK_10da2fa80);
  alStack_160[1] = *(long *)(lVar4 + -8);
  alStack_160[0] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_160[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar20 - extraout_x8_03;
  lVar4 = 0x112e41120;
  func_0x0001000285a8(0x112e41120,&UNK_10da2fa70);
  alStack_160[3] = *(long *)(lVar4 + -8);
  alStack_160[2] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_160[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e41110;
  alStack_190[2] = lVar19 - extraout_x8_04;
  func_0x0001000285a8(0x112e41110,&UNK_10da2fa60);
  alStack_160[5] = *(long *)(lVar4 + -8);
  alStack_160[4] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_160[5] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (lVar19 - extraout_x8_04) - extraout_x8_05;
  alStack_160[7] = lVar14;
  lStack_d0 = param_2;
  func_0x000107c5f564();
  uVar5 = 0x112e41198;
  func_0x0001000285a8(0x112e41198,&UNK_10da2fab8);
  uVar6 = uVar5;
  FUN_101f27d58();
  uVar10 = 1;
  func_0x000107c5f28c(lVar16,lVar4,1,FUN_101f27d50,&uStack_e0,uVar5,uVar6);
  func_0x000107c5f7ac();
  *(long *)(lVar14 + -0x10) = lVar4;
  *(undefined8 *)(lVar14 + -8) = uVar10;
  *(undefined1 *)(lVar14 + -0x18) = 0;
  *(undefined8 *)(lVar14 + -0x20) = 0x7ff0000000000000;
  *(undefined1 *)(lVar14 + -0x28) = 1;
  *(undefined8 *)(lVar14 + -0x30) = 0;
  uVar5 = 0;
  func_0x000107c5f388(&uStack_e0,0,1,0,1,0x7ff0000000000000,0,0,1);
  puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar3 + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = uStack_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = uStack_80;
  lVar4 = lStack_d0;
  puVar1[1] = uStack_d8;
  *puVar1 = uStack_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = lVar4;
  puVar1[5] = uStack_b8;
  puVar1[4] = uStack_c0;
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  func_0x000101f27cb8();
  func_0x00010306b764(lVar15,0x4071800000000000,0x4075400000000000,lVar3,uVar5);
  func_0x000101f280c0(lVar16,0x112e41158,&UNK_10da2fa98);
  func_0x000103074844(lVar18,lVar3,uVar5);
  func_0x000101f280c0(lVar15,0x112e41158,&UNK_10da2fa98);
  plVar8 = alStack_160 + 8;
  alStack_160[8] = lVar3;
  alStack_160[9] = uVar5;
  func_0x000107c614f4(plVar8,&DAT_10e7426c4,1);
  lVar3 = alStack_190[1];
  func_0x0001030748bc(lVar17,alStack_190[1],plVar8);
  (**(code **)(alStack_190[4] + 8))(lVar18,lVar3);
  func_0x000101f27c10();
  func_0x000107c5f674(lVar20,0xd000000000000013,0x800000010f01c320,alStack_190[3],lVar18);
  uVar12 = 0;
  func_0x000101f280c0(lVar17,0x112e41150,&UNK_10da2fa90);
  uVar6 = 0x6d706f6c65766544;
  uVar10 = 0xeb00000000746e65;
  func_0x000107c5f414(0x6d706f6c65766544,0xeb00000000746e65);
  uVar5 = uVar6;
  func_0x000101f27b80();
  uVar2 = uStack_168;
  func_0x000107c5f634(lVar19,uVar6,uVar10,uVar12 & 1,lVar18,uStack_168,uVar5);
  func_0x000107c6142c(lVar18);
  func_0x000107c6142c(uVar10);
  func_0x000101f280c0(lVar20,0x112e41138,&UNK_10da2fa88);
  alStack_160[8] = uVar2;
  plVar8 = alStack_160 + 8;
  alStack_160[9] = uVar5;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE15navigationTitleyQrAA18LocalizedStringKeyVFQOMQ_110349508
                      ,1);
  lVar3 = alStack_160[0];
  lVar18 = alStack_190[2];
  func_0x00010306b5d8(alStack_190[2],alStack_160[0],plVar8);
  (**(code **)(alStack_160[1] + 8))(lVar19,lVar3);
  lVar4 = alStack_190[0];
  plStack_110 = (long *)alStack_190[0];
  uVar5 = 0x112e41128;
  func_0x0001000285a8(0x112e41128,&UNK_10da2fa78);
  lStack_100 = lVar3;
  plVar7 = &lStack_100;
  plStack_f8 = plVar8;
  func_0x000107c614f4(plVar7,
                      PTR___s7SwiftUI4ViewPAAE29navigationBarTitleDisplayModeyQrAA010NavigationE4ItemV0fgH0OFQOMQ_1103495f8
                      ,1);
  lVar3 = 0x112e41178;
  func_0x00010002969c(0x112e41178,&UNK_10da2faa8);
  uVar6 = 0x112e41180;
  FUN_101f29b0c(0x112e41180,0x112e41178,&UNK_10da2faa8,
                PTR___s7SwiftUI19TupleToolbarContentVyxGAA0dE0AAMc_110348e30);
  plVar8 = &lStack_100;
  lStack_100 = lVar3;
  plStack_f8 = (long *)uVar6;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI21ToolbarContentBuilderV10buildBlockyQrxAA0cD0RzlFZQOMQ_110348fc8
                      ,1);
  lVar3 = alStack_160[2];
  lVar15 = alStack_160[2];
  uVar10 = uVar5;
  func_0x000107c5f6a4(alStack_160[7],FUN_101f27df0,alStack_160 + 8,alStack_160[2],uVar5,plVar7,
                      plVar8);
  uVar13 = (undefined4)lVar15;
  (**(code **)(alStack_160[3] + 8))(lVar18,lVar3);
  uVar6 = 0x3f74756f20676f4c;
  uVar11 = 0xe800000000000000;
  func_0x000107c5f414();
  alStack_160[0] = CONCAT44(alStack_160[0]._4_4_,uVar13);
  plStack_f8 = *(long **)(lVar4 + 0x38);
  lStack_100 = *(long *)(lVar4 + 0x30);
  alStack_160[1] = uVar11;
  alStack_160[3] = uVar6;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f734(alStack_160 + 8);
  lVar16 = alStack_160[9];
  lVar15 = alStack_160[8];
  uStack_168 = CONCAT44(uStack_168._4_4_,(uint)(byte)plStack_110);
  lStack_f0 = lVar4;
  uVar6 = 0x112e41118;
  func_0x0001000285a8(0x112e41118,&UNK_10da2fa68);
  alStack_160[8] = lVar3;
  plVar9 = alStack_160 + 8;
  alStack_160[9] = uVar5;
  plStack_110 = plVar7;
  plStack_108 = plVar8;
  func_0x000107c614f4(plVar9,
                      PTR___s7SwiftUI4ViewPAAE7toolbar7contentQrqd__yXE_tAA14ToolbarContentRd__lFQOMQ_110349658
                      ,1);
  uVar5 = 0x112e41188;
  FUN_101f29b0c(0x112e41188,0x112e41118,&UNK_10da2fa68,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  *(undefined8 *)(lVar14 + -0x10) = uVar5;
  *(undefined **)(lVar14 + -8) = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  *(undefined **)(lVar14 + -0x20) = PTR___s7SwiftUI4TextVN_1103493f8;
  *(long **)(lVar14 + -0x18) = plVar9;
  *(undefined8 *)(lVar14 + -0x28) = uVar6;
  lVar4 = alStack_160[4];
  *(undefined8 *)(lVar14 + -0x38) = 0;
  *(long *)(lVar14 + -0x30) = lVar4;
  *(long **)(lVar14 + -0x48) = &lStack_100;
  *(undefined8 *)(lVar14 + -0x40) = 0x101f27714;
  *(undefined8 *)(lVar14 + -0x50) = 0x101f27df8;
  lVar18 = alStack_160[7];
  lVar3 = alStack_160[1];
  func_0x000107c5f648(alStack_160[6],alStack_160[3],alStack_160[1],(uint)alStack_160[0] & 1,uVar10,
                      lVar15,lVar16,uStack_168 & 0xffffffff,1);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(lVar3);
  func_0x000107c61574(lVar16);
  func_0x000107c61574(lVar15);
  (**(code **)(alStack_160[5] + 8))(lVar18,lVar4);
  return;
}



/* Entry: 101f26890; end: 101f2693f;  */

void FUN_101f26890(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = param_6;
  func_0x000107c5f43c();
  *param_1 = uVar4;
  param_1[1] = 0x4020000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  lVar3 = 0x112e41228;
  func_0x0001000285a8(0x112e41228,&UNK_10da2fb20);
  FUN_101f26940((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  uVar2 = (undefined1)param_6;
  func_0x000107c5f56c();
  uVar4 = 0x4030000000000000;
  func_0x000107c5f280();
  lVar3 = 0x112e41198;
  func_0x0001000285a8(0x112e41198,&UNK_10da2fab8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = uVar2;
  *(undefined8 *)(puVar1 + 8) = uVar4;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Entry: 101f26940; end: 101f26f23;  */

void FUN_101f26940(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_1e0 [96];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_7f;
  
  lVar1 = 0x112e41230;
  func_0x0001000285a8(0x112e41230,&UNK_10da2fb28);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = auStack_1e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar4 - extraout_x12;
  uStack_120 = 0x746163696c707041;
  uStack_118 = 0xec000000736e6f69;
  uStack_d8 = 1;
  func_0x00010306bef8(&uStack_180,&uStack_120);
  uVar2 = 0x112e41238;
  uStack_c0 = param_2;
  func_0x0001000285a8(0x112e41238,&UNK_10da2fb30);
  uVar3 = 0x112e41240;
  FUN_101f29b0c(0x112e41240,0x112e41238,&UNK_10da2fb30,
                PTR___s7SwiftUI6VStackVyxGAA4ViewAAMc_1103498f0);
  func_0x000103060aa4(lVar5,0,FUN_101f28068,&uStack_d0,uVar2,uVar3);
  func_0x000100cd6dfc(lVar5,puVar4);
  uStack_a8 = uStack_158;
  uStack_b0 = uStack_160;
  uStack_98 = uStack_148;
  uStack_a0 = uStack_150;
  uStack_90 = uStack_140;
  uStack_7f = uStack_12f;
  uStack_c8 = uStack_178;
  uStack_d0 = uStack_180;
  uStack_b8 = uStack_168;
  uStack_c0 = uStack_170;
  param_1[5] = uStack_158;
  param_1[4] = uStack_160;
  param_1[7] = uStack_148;
  param_1[6] = uStack_150;
  param_1[9] = CONCAT71(uStack_137,uStack_138);
  param_1[8] = uStack_140;
  *(undefined8 *)((long)param_1 + 0x51) = uStack_12f;
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_130,uStack_137);
  param_1[1] = uStack_178;
  *param_1 = uStack_180;
  param_1[3] = uStack_168;
  param_1[2] = uStack_170;
  lVar1 = 0x112e41248;
  func_0x0001000285a8(0x112e41248,&UNK_10da2fb38);
  func_0x000100cd6dfc(puVar4,(long)param_1 + (long)*(int *)(lVar1 + 0x30));
  FUN_101f28070(&uStack_d0,auStack_1e0);
  func_0x000101f280c0(lVar5,0x112e41230,&UNK_10da2fb28);
  func_0x000101f280c0(puVar4,0x112e41230,&UNK_10da2fb28);
  FUN_101f29598(&uStack_180,0x112e41250,&UNK_10da2fb40);
  return;
}



/* Entry: 101f26f24; end: 101f26f27;  */

void FUN_101f26f24(void)

{
  return;
}



/* Entry: 101f26f28; end: 101f26fd7;  */

void FUN_101f26f28(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&uStack_68);
  uVar1 = uStack_68;
  func_0x000107c614f0(uStack_68);
  lVar2 = lStack_60;
  (**(code **)(lStack_60 + 8))();
  func_0x000107c615e8(uStack_68);
  func_0x000100083b20(&uStack_68);
  func_0x0001000a8868(&uStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(uVar1,lVar2,uStack_50,lStack_48);
  func_0x000107c615e8(uVar1);
  func_0x0001000834e4(&uStack_68);
  return;
}



/* Entry: 101f26fd8; end: 101f270a3;  */

void FUN_101f26fd8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0x112e41178;
  func_0x0001000285a8(0x112e41178,&UNK_10da2faa8);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  FUN_101f270a4(puVar3);
  uVar2 = 0x112e41180;
  FUN_101f29b0c(0x112e41180,0x112e41178,&UNK_10da2faa8,
                PTR___s7SwiftUI19TupleToolbarContentVyxGAA0dE0AAMc_110348e30);
  func_0x000107c5f4d0(param_1,puVar3,lVar1,uVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 101f270a4; end: 101f2770f;  */

void FUN_101f270a4(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_80 [32];
  
  lVar3 = 0x112e411c8;
  func_0x0001000285a8(0x112e411c8,&UNK_10da2fae8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&lStack_c0 - extraout_x8;
  lVar4 = 0x112e411d0;
  func_0x0001000285a8(0x112e411d0,&UNK_10da2faf0);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0x112e411d8;
  lStack_b8 = lVar9 - extraout_x8_00;
  func_0x0001000285a8(0x112e411d8,&UNK_10da2faf8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar20 = (lVar9 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar20 - extraout_x12;
  lVar5 = 0;
  func_0x000107c5f4bc();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar19 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar19 - extraout_x12_00;
  lVar17 = 0x112e411e0;
  func_0x0001000285a8(0x112e411e0,&UNK_10da2fb00);
  lVar13 = *(long *)(lVar17 + -8);
  lStack_c0 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar12 - extraout_x8_03;
  lVar17 = *(long *)(unaff_x20 + 0x10);
  bVar1 = *(long *)(lVar17 + 0x10) == 0;
  if (!bVar1) {
    lVar6 = 0;
    FUN_101f25c2c();
    uVar11 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
    (**(code **)(lVar16 + 0x10))
              (lVar14,lVar17 + *(int *)(lVar6 + 0x14) +
                      (uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff)),lVar5);
  }
  (**(code **)(lVar16 + 0x38))(lVar14,bVar1,1,lVar5);
  func_0x000101f27e5c(lVar14,lVar20);
  pcVar15 = *(code **)(lVar16 + 0x30);
  lVar17 = lVar20;
  (*pcVar15)(lVar20,1,lVar5);
  if ((int)lVar17 == 1) {
    func_0x000107c5f4b4(lVar12);
    lVar17 = lVar20;
    (*pcVar15)(lVar20,1,lVar5);
    if ((int)lVar17 != 1) {
      FUN_101f29598(lVar20,0x112e411d8,&UNK_10da2faf8);
    }
  }
  else {
    (**(code **)(lVar16 + 0x20))(lVar12,lVar20,lVar5);
  }
  uVar7 = 0x112e411e8;
  func_0x0001000285a8(0x112e411e8,&UNK_10da2fb08);
  uVar8 = uVar7;
  FUN_101f27eb4();
  func_0x000107c5f384(lVar18,lVar12,FUN_101f27eac,auStack_80,uVar7,uVar8);
  func_0x000107c5f4b0(lVar19);
  uVar7 = 0x112e411f8;
  func_0x0001000285a8(0x112e411f8,&UNK_10da2fb10);
  uVar8 = uVar7;
  FUN_101f27f24();
  lVar5 = lStack_b8;
  func_0x000107c5f2b8(lStack_b8,lVar19,FUN_101f27f1c,auStack_80,uVar7,uVar8);
  lVar17 = lStack_c0;
  iVar2 = *(int *)(lVar3 + 0x30);
  (**(code **)(lVar13 + 0x10))(lVar9,lVar18,lStack_c0);
  (**(code **)(lVar10 + 0x10))(lVar9 + iVar2,lVar5,lVar4);
  func_0x000107c5f440(param_1,lVar9,lVar3);
  (**(code **)(lVar10 + 8))(lVar5,lVar4);
  (**(code **)(lVar13 + 8))(lVar18,lVar17);
  return;
}



/* Entry: 101f27710; end: 101f27743;  */

void FUN_101f27710(void)

{
  return;
}



/* Entry: 101f27744; end: 101f27813;  */

void FUN_101f27744(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  uVar1 = 0x112e41210;
  func_0x0001000285a8(0x112e41210,&UNK_10da2fb18);
  uVar2 = 0x112e41218;
  FUN_101f29b0c(0x112e41218,0x112e41210,&UNK_10da2fb18,PTR___sSayxGSksMc_11034dd18);
  uVar3 = 0x112e41220;
  func_0x000101f28028(0x112e41220,FUN_101f25c2c,&UNK_10da2f9bc);
  func_0x000107c5f78c(param_1,&uStack_38,FUN_101f27814,0,uVar1,PTR___sSiN_11034deb0,
                      PTR___s7SwiftUI7AnyViewVN_110349928,uVar2,
                      PTR___s7SwiftUI7AnyViewVAA0D0AAWP_110349918,uVar3);
  return;
}



/* Entry: 101f27814; end: 101f27847;  */

void FUN_101f27814(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_101f25c2c();
  *param_1 = *(undefined8 *)(param_2 + *(int *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101f27848; end: 101f2794b;  */

void FUN_101f27848(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_128 [64];
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
  undefined1 uStack_38;
  
  if (param_2[4] == 0) {
    uStack_88 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
  }
  else {
    uStack_80 = 0x74754f20676f4c;
    uStack_78 = 0xe700000000000000;
    uStack_38 = 1;
    puVar1 = &UNK_1104a08f8;
    func_0x000107c613fc(&UNK_1104a08f8,0x50,7);
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    *(undefined8 *)(puVar1 + 0x18) = param_2[1];
    *(undefined8 *)(puVar1 + 0x10) = uVar2;
    *(undefined8 *)(puVar1 + 0x28) = uVar4;
    *(undefined8 *)(puVar1 + 0x20) = uVar3;
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    *(undefined8 *)(puVar1 + 0x38) = param_2[5];
    *(undefined8 *)(puVar1 + 0x30) = uVar2;
    *(undefined8 *)(puVar1 + 0x48) = uVar4;
    *(undefined8 *)(puVar1 + 0x40) = uVar3;
    func_0x00010307738c(&uStack_e8,&uStack_80,FUN_101f27fd4,puVar1);
    func_0x000101f27e28(param_2,auStack_128);
  }
  param_1[1] = uStack_e0;
  *param_1 = uStack_e8;
  param_1[3] = uStack_d0;
  param_1[2] = uStack_d8;
  param_1[5] = uStack_c0;
  param_1[4] = uStack_c8;
  param_1[7] = uStack_b0;
  param_1[6] = uStack_b8;
  param_1[9] = uStack_a0;
  param_1[8] = uStack_a8;
  param_1[0xb] = uStack_90;
  param_1[10] = uStack_98;
  param_1[0xc] = uStack_88;
  return;
}



/* Entry: 101f2794c; end: 101f27957;  */

void FUN_101f2794c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb6854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s7SwiftUI4ViewPAAE05_makeC04view6inputsAA01_C7OutputsVAA11_GraphValueVyxG_AA01_C6InputsVtFZ_110349438
  )();
  return;
}



/* Entry: 101f27958; end: 101f27b77;  */

void FUN_101f27958(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x20;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 *puStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  puStack_c0 = &uStack_b0;
  uVar1 = 0x112e41108;
  func_0x0001000285a8(0x112e41108,&UNK_10da2fa58);
  uVar2 = 0x112e41110;
  func_0x00010002969c(0x112e41110,&UNK_10da2fa60);
  uVar3 = 0x112e41118;
  func_0x00010002969c(0x112e41118,&UNK_10da2fa68);
  uVar4 = 0x112e41120;
  func_0x00010002969c(0x112e41120,&UNK_10da2fa70);
  uVar5 = 0x112e41128;
  func_0x00010002969c(0x112e41128,&UNK_10da2fa78);
  uVar6 = 0x112e41130;
  func_0x00010002969c(0x112e41130,&UNK_10da2fa80);
  uVar7 = 0x112e41138;
  func_0x00010002969c(0x112e41138,&UNK_10da2fa88);
  uVar8 = uVar7;
  FUN_101f27b80();
  puVar9 = &uStack_100;
  uStack_100 = uVar7;
  puStack_f8 = (undefined8 *)uVar8;
  func_0x000107c614f4(puVar9,
                      PTR___s7SwiftUI4ViewPAAE15navigationTitleyQrAA18LocalizedStringKeyVFQOMQ_110349508
                      ,1);
  puVar10 = &uStack_100;
  uStack_100 = uVar6;
  puStack_f8 = puVar9;
  func_0x000107c614f4(puVar10,
                      PTR___s7SwiftUI4ViewPAAE29navigationBarTitleDisplayModeyQrAA010NavigationE4ItemV0fgH0OFQOMQ_1103495f8
                      ,1);
  uVar6 = 0x112e41178;
  func_0x00010002969c(0x112e41178,&UNK_10da2faa8);
  uVar7 = 0x112e41180;
  FUN_101f29b0c(0x112e41180,0x112e41178,&UNK_10da2faa8,
                PTR___s7SwiftUI19TupleToolbarContentVyxGAA0dE0AAMc_110348e30);
  puVar9 = &uStack_100;
  uStack_100 = uVar6;
  puStack_f8 = (undefined8 *)uVar7;
  func_0x000107c614f4(puVar9,
                      PTR___s7SwiftUI21ToolbarContentBuilderV10buildBlockyQrxAA0cD0RzlFZQOMQ_110348fc8
                      ,1);
  puVar11 = &uStack_100;
  uStack_100 = uVar4;
  puStack_f8 = (undefined8 *)uVar5;
  puStack_f0 = puVar10;
  puStack_e8 = puVar9;
  func_0x000107c614f4(puVar11,
                      PTR___s7SwiftUI4ViewPAAE7toolbar7contentQrqd__yXE_tAA14ToolbarContentRd__lFQOMQ_110349658
                      ,1);
  uVar4 = 0x112e41188;
  FUN_101f29b0c(0x112e41188,0x112e41118,&UNK_10da2fa68,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  puStack_f0 = (undefined8 *)PTR___s7SwiftUI4TextVN_1103493f8;
  puStack_d8 = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  puVar9 = &uStack_100;
  uStack_100 = uVar2;
  puStack_f8 = (undefined8 *)uVar3;
  puStack_e8 = puVar11;
  uStack_e0 = uVar4;
  func_0x000107c614f4(puVar9,
                      PTR___s7SwiftUI4ViewPAAE18confirmationDialog_11isPresented15titleVisibility7actions7messageQrAA18LocalizedStringKeyV_AA7BindingVySbGAA0I0Oqd__yXEqd_0_yXEtAaBRd__AaBRd_0_r0_lFQOMQ_110349548
                      ,1);
  func_0x00010306b210(param_1,FUN_101f27b78,auStack_d0,uVar1,puVar9);
  return;
}



/* Entry: 101f27b78; end: 101f27b7f;  */

void FUN_101f27b78(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined4 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar15;
  long extraout_x12;
  long lVar16;
  long lVar17;
  long unaff_x20;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long alStack_1e0 [5];
  undefined8 auStack_1b8 [2];
  long alStack_1a8 [3];
  long alStack_190 [5];
  ulong uStack_168;
  long alStack_160 [10];
  long *plStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_d0;
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
  
  lVar10 = *(long *)(unaff_x20 + 0x10);
  lVar3 = 0x112e41158;
  alStack_190[0] = lVar10;
  alStack_160[6] = param_1;
  func_0x0001000285a8(0x112e41158,&UNK_10da2fa98);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar17 = (long)alStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar17 - extraout_x12;
  lVar4 = 0x112e41190;
  func_0x0001000285a8(0x112e41190,&UNK_10da2fab0);
  alStack_190[4] = *(long *)(lVar4 + -8);
  alStack_190[1] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_190[4] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar16 - extraout_x8_00;
  lVar4 = 0x112e41150;
  func_0x0001000285a8(0x112e41150,&UNK_10da2fa90);
  alStack_190[3] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = lVar19 - extraout_x8_01;
  lVar4 = 0x112e41138;
  func_0x0001000285a8(0x112e41138,&UNK_10da2fa88);
  uStack_168 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar21 = lVar18 - extraout_x8_02;
  lVar4 = 0x112e41130;
  func_0x0001000285a8(0x112e41130,&UNK_10da2fa80);
  alStack_160[1] = *(long *)(lVar4 + -8);
  alStack_160[0] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_160[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar21 - extraout_x8_03;
  lVar4 = 0x112e41120;
  func_0x0001000285a8(0x112e41120,&UNK_10da2fa70);
  alStack_160[3] = *(long *)(lVar4 + -8);
  alStack_160[2] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_160[3] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112e41110;
  alStack_190[2] = lVar20 - extraout_x8_04;
  func_0x0001000285a8(0x112e41110,&UNK_10da2fa60);
  alStack_160[5] = *(long *)(lVar4 + -8);
  alStack_160[4] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(alStack_160[5] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (lVar20 - extraout_x8_04) - extraout_x8_05;
  alStack_160[7] = lVar15;
  lStack_d0 = lVar10;
  func_0x000107c5f564();
  uVar5 = 0x112e41198;
  func_0x0001000285a8(0x112e41198,&UNK_10da2fab8);
  uVar6 = uVar5;
  FUN_101f27d58();
  uVar11 = 1;
  func_0x000107c5f28c(lVar17,lVar4,1,FUN_101f27d50,&uStack_e0,uVar5,uVar6);
  func_0x000107c5f7ac();
  *(long *)(lVar15 + -0x10) = lVar4;
  *(undefined8 *)(lVar15 + -8) = uVar11;
  *(undefined1 *)(lVar15 + -0x18) = 0;
  *(undefined8 *)(lVar15 + -0x20) = 0x7ff0000000000000;
  *(undefined1 *)(lVar15 + -0x28) = 1;
  *(undefined8 *)(lVar15 + -0x30) = 0;
  uVar5 = 0;
  func_0x000107c5f388(&uStack_e0,0,1,0,1,0x7ff0000000000000,0,0,1);
  puVar1 = (undefined8 *)(lVar17 + *(int *)(lVar3 + 0x24));
  puVar1[9] = uStack_98;
  puVar1[8] = uStack_a0;
  puVar1[0xb] = uStack_88;
  puVar1[10] = uStack_90;
  puVar1[0xd] = uStack_78;
  puVar1[0xc] = uStack_80;
  lVar4 = lStack_d0;
  puVar1[1] = uStack_d8;
  *puVar1 = uStack_e0;
  puVar1[3] = uStack_c8;
  puVar1[2] = lVar4;
  puVar1[5] = uStack_b8;
  puVar1[4] = uStack_c0;
  puVar1[7] = uStack_a8;
  puVar1[6] = uStack_b0;
  func_0x000101f27cb8();
  func_0x00010306b764(lVar16,0x4071800000000000,0x4075400000000000,lVar3,uVar5);
  func_0x000101f280c0(lVar17,0x112e41158,&UNK_10da2fa98);
  func_0x000103074844(lVar19,lVar3,uVar5);
  func_0x000101f280c0(lVar16,0x112e41158,&UNK_10da2fa98);
  plVar8 = alStack_160 + 8;
  alStack_160[8] = lVar3;
  alStack_160[9] = uVar5;
  func_0x000107c614f4(plVar8,&DAT_10e7426c4,1);
  lVar3 = alStack_190[1];
  func_0x0001030748bc(lVar18,alStack_190[1],plVar8);
  (**(code **)(alStack_190[4] + 8))(lVar19,lVar3);
  func_0x000101f27c10();
  func_0x000107c5f674(lVar21,0xd000000000000013,0x800000010f01c320,alStack_190[3],lVar19);
  uVar13 = 0;
  func_0x000101f280c0(lVar18,0x112e41150,&UNK_10da2fa90);
  uVar6 = 0x6d706f6c65766544;
  uVar11 = 0xeb00000000746e65;
  func_0x000107c5f414(0x6d706f6c65766544,0xeb00000000746e65);
  uVar5 = uVar6;
  func_0x000101f27b80();
  uVar2 = uStack_168;
  func_0x000107c5f634(lVar20,uVar6,uVar11,uVar13 & 1,lVar19,uStack_168,uVar5);
  func_0x000107c6142c(lVar19);
  func_0x000107c6142c(uVar11);
  func_0x000101f280c0(lVar21,0x112e41138,&UNK_10da2fa88);
  alStack_160[8] = uVar2;
  plVar8 = alStack_160 + 8;
  alStack_160[9] = uVar5;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI4ViewPAAE15navigationTitleyQrAA18LocalizedStringKeyVFQOMQ_110349508
                      ,1);
  lVar3 = alStack_160[0];
  lVar19 = alStack_190[2];
  func_0x00010306b5d8(alStack_190[2],alStack_160[0],plVar8);
  (**(code **)(alStack_160[1] + 8))(lVar20,lVar3);
  lVar4 = alStack_190[0];
  plStack_110 = (long *)alStack_190[0];
  uVar5 = 0x112e41128;
  func_0x0001000285a8(0x112e41128,&UNK_10da2fa78);
  lStack_100 = lVar3;
  plVar7 = &lStack_100;
  plStack_f8 = plVar8;
  func_0x000107c614f4(plVar7,
                      PTR___s7SwiftUI4ViewPAAE29navigationBarTitleDisplayModeyQrAA010NavigationE4ItemV0fgH0OFQOMQ_1103495f8
                      ,1);
  lVar3 = 0x112e41178;
  func_0x00010002969c(0x112e41178,&UNK_10da2faa8);
  uVar6 = 0x112e41180;
  FUN_101f29b0c(0x112e41180,0x112e41178,&UNK_10da2faa8,
                PTR___s7SwiftUI19TupleToolbarContentVyxGAA0dE0AAMc_110348e30);
  plVar8 = &lStack_100;
  lStack_100 = lVar3;
  plStack_f8 = (long *)uVar6;
  func_0x000107c614f4(plVar8,
                      PTR___s7SwiftUI21ToolbarContentBuilderV10buildBlockyQrxAA0cD0RzlFZQOMQ_110348fc8
                      ,1);
  lVar3 = alStack_160[2];
  lVar10 = alStack_160[2];
  uVar11 = uVar5;
  func_0x000107c5f6a4(alStack_160[7],FUN_101f27df0,alStack_160 + 8,alStack_160[2],uVar5,plVar7,
                      plVar8);
  uVar14 = (undefined4)lVar10;
  (**(code **)(alStack_160[3] + 8))(lVar19,lVar3);
  uVar6 = 0x3f74756f20676f4c;
  uVar12 = 0xe800000000000000;
  func_0x000107c5f414();
  alStack_160[0] = CONCAT44(alStack_160[0]._4_4_,uVar14);
  plStack_f8 = *(long **)(lVar4 + 0x38);
  lStack_100 = *(long *)(lVar4 + 0x30);
  alStack_160[1] = uVar12;
  alStack_160[3] = uVar6;
  func_0x0001000285a8(0x112d4f580,&UNK_10d915430);
  func_0x000107c5f734(alStack_160 + 8);
  lVar16 = alStack_160[9];
  lVar10 = alStack_160[8];
  uStack_168 = CONCAT44(uStack_168._4_4_,(uint)(byte)plStack_110);
  lStack_f0 = lVar4;
  uVar6 = 0x112e41118;
  func_0x0001000285a8(0x112e41118,&UNK_10da2fa68);
  alStack_160[8] = lVar3;
  plVar9 = alStack_160 + 8;
  alStack_160[9] = uVar5;
  plStack_110 = plVar7;
  plStack_108 = plVar8;
  func_0x000107c614f4(plVar9,
                      PTR___s7SwiftUI4ViewPAAE7toolbar7contentQrqd__yXE_tAA14ToolbarContentRd__lFQOMQ_110349658
                      ,1);
  uVar5 = 0x112e41188;
  FUN_101f29b0c(0x112e41188,0x112e41118,&UNK_10da2fa68,
                PTR___s7SwiftUI9TupleViewVyxGAA0D0AAMc_110349aa8);
  *(undefined8 *)(lVar15 + -0x10) = uVar5;
  *(undefined **)(lVar15 + -8) = PTR___s7SwiftUI4TextVAA4ViewAAWP_1103493e8;
  *(undefined **)(lVar15 + -0x20) = PTR___s7SwiftUI4TextVN_1103493f8;
  *(long **)(lVar15 + -0x18) = plVar9;
  *(undefined8 *)(lVar15 + -0x28) = uVar6;
  lVar4 = alStack_160[4];
  *(undefined8 *)(lVar15 + -0x38) = 0;
  *(long *)(lVar15 + -0x30) = lVar4;
  *(long **)(lVar15 + -0x48) = &lStack_100;
  *(undefined8 *)(lVar15 + -0x40) = 0x101f27714;
  *(undefined8 *)(lVar15 + -0x50) = 0x101f27df8;
  lVar19 = alStack_160[7];
  lVar3 = alStack_160[1];
  func_0x000107c5f648(alStack_160[6],alStack_160[3],alStack_160[1],(uint)alStack_160[0] & 1,uVar11,
                      lVar10,lVar16,uStack_168 & 0xffffffff,1);
  func_0x000107c6142c(uVar11);
  func_0x000107c6142c(lVar3);
  func_0x000107c61574(lVar16);
  func_0x000107c61574(lVar10);
  (**(code **)(alStack_160[5] + 8))(lVar19,lVar4);
  return;
}



/* Entry: 101f27b80; end: 101f27d4f;  */

void FUN_101f27b80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (puRam0000000112e41140 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e41138;
  func_0x00010002969c(0x112e41138,&UNK_10da2fa88);
  uVar2 = uVar1;
  func_0x000101f27c10();
  uVar3 = 0x112d500b8;
  func_0x000101f28028(0x112d500b8,PTR___s7SwiftUI31AccessibilityAttachmentModifierVMa_110349210,
                      PTR___s7SwiftUI31AccessibilityAttachmentModifierVAA04ViewE0AAMc_110349208);
  puVar4 = PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88;
  uStack_30 = uVar2;
  uStack_28 = uVar3;
  func_0x000107c61520(PTR___s7SwiftUI15ModifiedContentVyxq_GAA4ViewA2aERzAA0E8ModifierR_rlMc_110348a88
                      ,uVar1,&uStack_30);
  puRam0000000112e41140 = puVar4;
  return;
}


