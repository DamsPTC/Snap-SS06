/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1024853cc; end: 1024853f3;  */

void FUN_1024853cc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1024853f4; end: 1024853fb;  */

undefined8 FUN_1024853f4(void)

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



/* Entry: 1024853fc; end: 102485437;  */

void FUN_1024853fc(undefined8 *param_1,undefined8 param_2)

{
  FUN_102485438();
  func_0x0001000a7f38("SCSendToPublicProfileOnboardingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102485438; end: 102485623;  */

void FUN_102485438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074daf0;
  ppuVar4 = &PTR_DAT_113066eb0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_1);
  uVar2 = 0x112e9d3f0;
  func_0x0001000285a8(0x112e9d3f0,&UNK_10daac160);
  func_0x0001000a6ee8(&UNK_11050f528,
                      "SCSendToBusinessProfileEntryPointWrapperScopeInitializationPluginKey",0x44,2,
                      FUN_102485698,param_1,uVar2,&UNK_11050f528,&PTR_DAT_112e9d2f8);
  func_0x000107c61574(param_1);
  puVar3 = &UNK_11050f578;
  func_0x000107c613fc(&UNK_11050f578,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11050f348,
                      "SCSendToPublicProfileOnboardingScopedServicesScopeInitializationPluginKey",
                      0x49,2,FUN_102485748,puVar3,uVar2,&UNK_11050f348,&PTR_DAT_112e9d278);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_11050f5a0;
  func_0x000107c613fc(&UNK_11050f5a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11050f7c8,
                      "SendToPublicProfileOnboardingScopeGraphBridgeScopeInitializationPluginKey",
                      0x49,2,FUN_102485750,puVar3,uVar2,&UNK_11050f7c8,&PTR_DAT_112e9d488);
  func_0x000107c61574(puVar3);
  uVar2 = 0x112e9d3f8;
  func_0x0001000285a8(0x112e9d3f8,&UNK_10daac168);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  return;
}



/* Entry: 102485624; end: 102485697;  */

void FUN_102485624(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1024857c4;
  func_0x0001000823a8(0x1024857c4,param_3);
  func_0x000100082720("SCSendToBusinessProfileEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102485698; end: 10248569f;  */

void FUN_102485698(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1024857c4;
  func_0x0001000823a8();
  func_0x000100082720("SCSendToBusinessProfileEntryPointWrapperScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1024856a0; end: 102485747;  */

void FUN_1024856a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050f5c8;
  func_0x000107c613fc(&UNK_11050f5c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1024857bc;
  func_0x0001000823a8(FUN_1024857bc,puVar1);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102485748; end: 10248574f;  */

void FUN_102485748(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11050f5c8;
  func_0x000107c613fc(&UNK_11050f5c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1024857bc;
  func_0x0001000823a8(FUN_1024857bc,puVar3);
  func_0x000100082720("SCSendToPublicProfileOnboardingScopedServicesScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102485750; end: 10248578f;  */

void FUN_102485750(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102485f50(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("SendToPublicProfileOnboardingScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102485790; end: 1024857bb;  */

void FUN_102485790(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1024857bc; end: 1024857cb;  */

void FUN_1024857bc(undefined8 *param_1)

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
  puVar1 = &UNK_11050f3d0;
  func_0x000107c613fc(&UNK_11050f3d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024843f0;
  func_0x00010058fa64(FUN_1024843f0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024857cc; end: 1024858a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1024857cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_102485be0();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e9d400) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e9d408) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024858a8);
  (*pcVar1)();
}



/* Entry: 1024858a8; end: 102485907; -[_TtC45SendToPublicProfileOnboardingScopeGraphBridge60SendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint init] */

void FUN_1024858a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToPublicProfileOnboardingScopeGraphBridge.SendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1024858d4);
  (*pcVar1)();
}



/* Entry: 102485908; end: 10248593f; -[_TtC45SendToPublicProfileOnboardingScopeGraphBridge60SendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102485924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102485928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102485908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d400));
  return;
}



/* Entry: 102485940; end: 102485967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102485940(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e9d408),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e9d400));
  return;
}



/* Entry: 102485968; end: 102485987;  */

void FUN_102485968(void)

{
  func_0x000107c61168(&PTR_PTR_112844800);
  return;
}



/* Entry: 102485988; end: 102485a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102485988(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9d438) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e9d440);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102485a10);
  (*pcVar2)();
}



/* Entry: 102485a10; end: 102485af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102485a10(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9d438);
  *(undefined **)(unaff_x20 + _DAT_112e9d438) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e9d440);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e9d440))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11050f6e8;
  func_0x000107c613fc(&UNK_11050f6e8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102485afc,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102485af8; end: 102485b03;  */

void FUN_102485af8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102485b04; end: 102485b63; -[_TtC45SendToPublicProfileOnboardingScopeGraphBridge60SCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint init] */

void FUN_102485b04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToPublicProfileOnboardingScopeGraphBridge.SCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102485b30);
  (*pcVar1)();
}



/* Entry: 102485b64; end: 102485b9b; -[_TtC45SendToPublicProfileOnboardingScopeGraphBridge60SCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102485b64(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e9d440));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d438));
  return;
}



/* Entry: 102485b9c; end: 102485b9f;  */

void FUN_102485b9c(void)

{
  return;
}



/* Entry: 102485ba0; end: 102485bbf;  */

void FUN_102485ba0(void)

{
  FUN_102485a10();
  return;
}



/* Entry: 102485bc0; end: 102485bdf;  */

void FUN_102485bc0(void)

{
  func_0x000107c61168(&PTR_PTR_1128448c8);
  return;
}



/* Entry: 102485be0; end: 102485caf;  */

undefined8 FUN_102485be0(void)

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
  
  func_0x000107c61428(0x112e9d470,&uStack_40,0x20,0);
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
    FUN_102485cb0();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102485cb0; end: 102485ccf;  */

void FUN_102485cb0(void)

{
  func_0x000107c61168(&PTR_PTR_112844990);
  return;
}



/* Entry: 102485cd0; end: 102485ceb;  */

void FUN_102485cd0(undefined8 param_1)

{
  func_0x0001000285a8(0x112e9d478,&UNK_10daac248);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102485d58,param_1);
  return;
}



/* Entry: 102485cec; end: 102485d57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102485cec(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_102485cb0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e9d480) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102485d58; end: 102485d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102485d58(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_102485cb0();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e9d480) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 102485d60; end: 102485dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102485d60(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9d480) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102485dac; end: 102485e0b; -[_TtC45SendToPublicProfileOnboardingScopeGraphBridge53SendToPublicProfileOnboardingScopeGraphBridgeServices init] */

void FUN_102485dac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToPublicProfileOnboardingScopeGraphBridge.SendToPublicProfileOnboardingScopeGraphBridgeServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102485dd8);
  (*pcVar1)();
}



/* Entry: 102485e0c; end: 102485e1b; -[_TtC45SendToPublicProfileOnboardingScopeGraphBridge53SendToPublicProfileOnboardingScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102485e0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9d480));
  return;
}



/* Entry: 102485e1c; end: 102485ea7;  */

void FUN_102485e1c(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x102485e5c,0);
  return;
}



/* Entry: 102485ea8; end: 102485ec3;  */

void FUN_102485ea8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102485f14,param_1);
  return;
}



/* Entry: 102485ec4; end: 102485f13;  */

void FUN_102485ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 102485f14; end: 102485f47;  */

void FUN_102485f14(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 102485f48; end: 102485f4f;  */

undefined8 FUN_102485f48(void)

{
  return 0x1b;
}



/* Entry: 102485f50; end: 1024860c7;  */

void FUN_102485f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11050f730;
  func_0x000107c613fc(&UNK_11050f730,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1024860c8,puVar1);
  return;
}



/* Entry: 1024860c8; end: 1024860cf;  */

void FUN_1024860c8(undefined8 *param_1)

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
  func_0x000107c61428(0x112e9d470,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e9d470,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11050f808;
  func_0x000107c613fc(&UNK_11050f808,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10248619c;
  func_0x00010058fa64(0x10248619c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1024860d0; end: 10248612b;  */

void FUN_1024860d0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e9d470,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e9d470,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10248612c; end: 1024861a3;  */

undefined ** FUN_10248612c(void)

{
  return &PTR_DAT_113066eb0;
}



/* Entry: 1024861a4; end: 1024861eb; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024861a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d4d8;
  func_0x000107c61428(param_1 + _DAT_112e9d4d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1024861ec; end: 102486243; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024861ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d4d8;
  func_0x000107c61428(param_1 + _DAT_112e9d4d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102486244; end: 10248628b; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486244(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d4e0;
  func_0x000107c61428(param_1 + _DAT_112e9d4e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10248628c; end: 102486297; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248628c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d4e0;
  func_0x000107c61428(param_1 + _DAT_112e9d4e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102486298; end: 1024862df; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint sendToPublicProfileOnboardingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486298(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d4e8;
  func_0x000107c61428(param_1 + _DAT_112e9d4e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1024862e0; end: 1024862eb; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint setSendToPublicProfileOnboardingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024862e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d4e8;
  func_0x000107c61428(param_1 + _DAT_112e9d4e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1024862ec; end: 10248634b;  */

void FUN_1024862ec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 10248634c; end: 102486507;  */

/* WARNING: Possible PIC construction at 0x000102486464: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102486488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102486498: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001024864dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010248649c) */
/* WARNING: Removing unreachable block (ram,0x00010248648c) */
/* WARNING: Removing unreachable block (ram,0x000102486468) */
/* WARNING: Removing unreachable block (ram,0x0001024864e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248634c(void)

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
  func_0x000107c5e1d0();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c51e94();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_102485968();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_102485be0();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102486508);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112e9d400) = lVar5;
      *(long *)(lVar3 + _DAT_112e9d408) = unaff_x20;
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



/* Entry: 102486508; end: 10248652f; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102486508(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10248634c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102486530; end: 102486573; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint end] */

void FUN_102486530(undefined8 param_1)

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



/* Entry: 102486574; end: 102486777;  */

void FUN_102486574(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) {
      uVar2 = 0xd000000000000017;
      func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffc4) || (param_3 != -0x7ffffffef0f5ee30)) &&
           (func_0x000107c605b8(0xd00000000000003c,0x800000010f0a11d0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SendToPublicProfileOnboardingScopeGraphBridge/SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x72,2,0x3a,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102486778);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58ee0();
        goto LAB_102486600;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5a68c();
  }
LAB_102486600:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102486778; end: 102486823; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102486778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102486574(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102486824; end: 10248689b; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486824(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9d4d8,0);
  *(undefined8 *)(param_1 + _DAT_112e9d4e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9d4e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e9d4f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10248689c; end: 1024868cf;  */

void FUN_10248689c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1024868d0; end: 102486927; -[SCSendToPublicProfileOnboardingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001024868fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102486900) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024868d0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9d4d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d4e0));
  return;
}



/* Entry: 102486928; end: 102486947;  */

void FUN_102486928(void)

{
  func_0x000107c61168(&PTR_PTR_112844a50);
  return;
}



/* Entry: 102486948; end: 10248698f; -[SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486948(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e9d520;
  func_0x000107c61428(param_1 + _DAT_112e9d520,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102486990; end: 1024869e7; -[SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486990(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e9d520;
  func_0x000107c61428(param_1 + _DAT_112e9d520,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1024869e8; end: 102486abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1024869e8(undefined8 param_1,long param_2)

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
    FUN_102485bc0();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e9d438) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102486ac0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e9d440);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e9d528);
    *(long **)(unaff_x20 + _DAT_112e9d528) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102486ac0; end: 102486ae7; -[SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint begin] */

void FUN_102486ac0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1024869e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102486ae8; end: 102486c5f;  */

/* WARNING: Possible PIC construction at 0x000102486b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102486be8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102486b54) */
/* WARNING: Removing unreachable block (ram,0x000102486bec) */
/* WARNING: Removing unreachable block (ram,0x000102486c04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486ae8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e9d528);
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



/* Entry: 102486c60; end: 102486c67;  */

void FUN_102486c60(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102486c68; end: 102486c9b; -[SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint end] */

void FUN_102486c68(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102486ae8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102486c9c; end: 102486dbb;  */

void FUN_102486c9c(long param_1,long param_2,long param_3)

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
                        "SendToPublicProfileOnboardingScopeGraphBridge/SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint.swift"
                        ,0x72,2,0x32,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102486dbc);
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



/* Entry: 102486dbc; end: 102486e67; -[SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102486dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102486c9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102486e68; end: 102486ec7; -[SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486e68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e9d520,0);
  *(undefined8 *)(param_1 + _DAT_112e9d528) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102486ec8; end: 102486efb;  */

void FUN_102486ec8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102486efc; end: 102486f33; -[SCSCSendToPublicProfileOnboardingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486efc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e9d520);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e9d528));
  return;
}



/* Entry: 102486f34; end: 102486f53;  */

void FUN_102486f34(void)

{
  func_0x000107c61168(&PTR_PTR_112844b20);
  return;
}



/* Entry: 102486f54; end: 102486fbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486f54(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102487348();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e9d560) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102486fc0; end: 10248702b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102486fc0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e9d560) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10248702c; end: 10248708b; -[_TtC52SendToSpotlightEducationScopedFactoryServiceProvider40SCSendToSpotlightEducationScopedServices init] */

void FUN_10248702c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToSpotlightEducationScopedFactoryServiceProvider.SCSendToSpotlightEducationScopedServices"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102487058);
  (*pcVar1)();
}



/* Entry: 10248708c; end: 10248709b; -[_TtC52SendToSpotlightEducationScopedFactoryServiceProvider40SCSendToSpotlightEducationScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248708c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e9d560));
  return;
}



/* Entry: 10248709c; end: 102487107;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10248709c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11050fa20;
  func_0x000107c613fc(&UNK_11050fa20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1024873e0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102487108; end: 1024871a3;  */

void FUN_102487108(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11050f930;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11050f930;
  return;
}



/* Entry: 1024871a4; end: 1024871db;  */

void FUN_1024871a4(long *param_1)

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



/* Entry: 1024871dc; end: 1024871e3;  */

undefined8 FUN_1024871dc(void)

{
  return 0x1b;
}



/* Entry: 1024871e4; end: 102487317;  */

void FUN_1024871e4(undefined8 *param_1)

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
  puVar1 = &UNK_11050fa48;
  func_0x000107c613fc(&UNK_11050fa48,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1024873b8;
  func_0x00010058fa64(FUN_1024873b8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102487318; end: 102487347;  */

undefined ** FUN_102487318(void)

{
  return &PTR_DAT_112e9db18;
}



/* Entry: 102487348; end: 102487367;  */

void FUN_102487348(void)

{
  func_0x000107c61168(&PTR_PTR_112844be0);
  return;
}



/* Entry: 102487368; end: 1024873b7;  */

undefined1  [16] FUN_102487368(void)

{
  return ZEXT816(0x11050f980);
}



/* Entry: 1024873b8; end: 1024873df;  */

void FUN_1024873b8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1024873e0; end: 1024873e3;  */

void FUN_1024873e0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1024873e4; end: 1024874a3;  */

/* WARNING: Possible PIC construction at 0x000102487480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102487484) */

void FUN_1024873e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11050fad0;
  func_0x000107c613fc(&UNK_11050fad0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar2 = 0x112e9d5d0;
  func_0x0001000285a8(0x112e9d5d0,&UNK_10daac768);
  func_0x000107c613fc();
  pcVar3 = FUN_102487878;
  func_0x0001000841fc(FUN_102487878,puVar1,uVar2);
  func_0x000100084214(&UNK_10daac730,0x36,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1024874a4; end: 1024874bf;  */

/* WARNING: Possible PIC construction at 0x000102487480: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102487484) */

void FUN_1024874a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar2 = &UNK_11050fad0;
  func_0x000107c613fc(&UNK_11050fad0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  uVar3 = 0x112e9d5d0;
  func_0x0001000285a8(0x112e9d5d0,&UNK_10daac768);
  func_0x000107c613fc();
  pcVar4 = FUN_102487878;
  func_0x0001000841fc(FUN_102487878,puVar2,uVar3);
  func_0x000100084214(&UNK_10daac730,0x36,2);
  *param_1 = pcVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1024874c0; end: 102487843;  */

void FUN_1024874c0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  func_0x0001000285a8(0x112e9d5d8,&UNK_10daac770);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024887d8();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_102488864();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024871a4;
  func_0x0001000823a8(FUN_1024871a4,0);
  func_0x000100082720("SCSendToSpotlightEducationScopedServicesCleanupRelayServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e9d5e0,&UNK_10daac780);
  puVar5 = &UNK_11050faf8;
  func_0x000107c613fc(&UNK_11050faf8,0x38,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(undefined8 *)(puVar5 + 0x20) = param_4;
  *(undefined8 *)(puVar5 + 0x28) = param_5;
  *(undefined8 **)(puVar5 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x102487884;
  func_0x0001000823a8(0x102487884,puVar5);
  func_0x000100082720("SendToSpotlightEducationEntryPointWrapperServiceProvider",0x38,2);
  puVar6 = puVar2;
  FUN_10248868c();
  func_0x000100082720("SendToSpotlightEducationScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9d5e8,&UNK_10daac788);
  puVar5 = &UNK_11050fb20;
  func_0x000107c613fc(&UNK_11050fb20,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(code **)(puVar5 + 0x18) = pcVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar10;
  *(undefined8 **)(puVar5 + 0x28) = puVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(puVar6);
  uVar7 = 0x102487894;
  func_0x0001000823a8(0x102487894,puVar5);
  func_0x000100082720("SCSendToSpotlightEducationScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112e9d568,&UNK_10daac4b0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x1024878a0;
  func_0x0001000823a8(0x1024878a0,uVar7);
  func_0x000100082720("SCSendToSpotlightEducationScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e9d558,&UNK_10daac4a0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1024878a8;
  func_0x0001000823a8(0x1024878a8,uVar8);
  func_0x000100082720("SCSendToSpotlightEducationScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11050fb48;
  func_0x000107c613fc(&UNK_11050fb48,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x1024878b0;
  func_0x0001000823a8(0x1024878b0,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCSendToSpotlightEducationScopeEntryPointProvider",0x31,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 102487844; end: 102487877;  */

void FUN_102487844(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102487878; end: 1024878b7;  */

void FUN_102487878(undefined8 *param_1,undefined8 *param_2)

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
  long unaff_x20;
  undefined8 uStack_68;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e9d5d8,&UNK_10daac770);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1024887d8();
  func_0x000100082720("WebBrowsingScopeExposerSubjectServiceProvider",0x2d,2);
  puVar3 = puVar2;
  FUN_102488864();
  func_0x000100082720("WebBrowsingScopeExposerObservableServiceProvider",0x30,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1024871a4;
  func_0x0001000823a8(FUN_1024871a4,0);
  func_0x000100082720("SCSendToSpotlightEducationScopedServicesCleanupRelayServiceProvider",0x43,2);
  func_0x0001000285a8(0x112e9d5e0,&UNK_10daac780);
  puVar5 = &UNK_11050faf8;
  func_0x000107c613fc(&UNK_11050faf8,0x38,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(undefined8 *)(puVar5 + 0x18) = uVar6;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x28) = uVar9;
  *(undefined8 **)(puVar5 + 0x30) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(puVar3);
  uVar6 = 0x102487884;
  func_0x0001000823a8(0x102487884,puVar5);
  func_0x000100082720("SendToSpotlightEducationEntryPointWrapperServiceProvider",0x38,2);
  puVar7 = puVar2;
  FUN_10248868c();
  func_0x000100082720("SendToSpotlightEducationScopeGraphBridgeServicesServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e9d5e8,&UNK_10daac788);
  puVar5 = &UNK_11050fb20;
  func_0x000107c613fc(&UNK_11050fb20,0x30,7);
  *(undefined8 **)(puVar5 + 0x10) = puVar1;
  *(code **)(puVar5 + 0x18) = pcVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar6;
  *(undefined8 **)(puVar5 + 0x28) = puVar7;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar4);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(puVar7);
  uVar8 = 0x102487894;
  func_0x0001000823a8(0x102487894,puVar5);
  func_0x000100082720("SCSendToSpotlightEducationScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112e9d568,&UNK_10daac4b0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x1024878a0;
  func_0x0001000823a8(0x1024878a0,uVar8);
  func_0x000100082720("SCSendToSpotlightEducationScopeInitializationServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112e9d558,&UNK_10daac4a0);
  func_0x000107c6157c(uVar9);
  uVar10 = 0x1024878a8;
  func_0x0001000823a8(0x1024878a8,uVar9);
  func_0x000100082720("SCSendToSpotlightEducationScopedServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar5 = &UNK_11050fb48;
  func_0x000107c613fc(&UNK_11050fb48,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar10;
  *(code **)(puVar5 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar10 = 0x1024878b0;
  func_0x0001000823a8(0x1024878b0,puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000100082720("SCSendToSpotlightEducationScopeEntryPointProvider",0x31,2);
  *param_1 = uVar10;
  return;
}



/* Entry: 1024878b8; end: 102487a9b;  */

void FUN_1024878b8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
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
  FUN_102487d20();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c6157c(uStack_88);
  func_0x00010017da58();
  puVar5 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x18) = puVar5;
  FUN_102489c98(0);
  func_0x000107c613fc();
  uVar4 = uStack_68;
  FUN_102489968(uStack_68,uVar1,uVar2,uVar3,puVar5);
  *(undefined8 *)(param_2 + 0x10) = uVar4;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar5);
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  func_0x000107c6157c(uVar4);
  func_0x00010248997c();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uStack_88);
  func_0x000107c61574(uVar4);
  *param_1 = param_2;
  return;
}



/* Entry: 102487a9c; end: 102487c1f;  */

long FUN_102487a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  func_0x0001000285a8(0x112e4de20,&UNK_10da49000);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c6157c(param_5);
  func_0x00010017da58();
  puVar2 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar1);
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  FUN_102489c98(0);
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102489968(param_1,param_2,param_3,param_4,puVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar1);
  func_0x00010248997c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c61574(uVar1);
  return unaff_x20;
}



/* Entry: 102487c20; end: 102487c63;  */

void FUN_102487c20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102487c64; end: 102487c6b;  */

undefined8 FUN_102487c64(void)

{
  return 0x1b;
}



/* Entry: 102487c6c; end: 102487cef;  */

void FUN_102487c6c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102487d60,param_2,FUN_102487d64,param_2,0x102487d8c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102487cf0; end: 102487d1f;  */

undefined ** FUN_102487cf0(void)

{
  return &PTR_DAT_112e9db18;
}



/* Entry: 102487d20; end: 102487d3f;  */

void FUN_102487d20(void)

{
  func_0x000107c61168(&PTR_PTR_112e9d658);
  return;
}



/* Entry: 102487d40; end: 102487d63;  */

undefined1  [16] FUN_102487d40(void)

{
  return ZEXT816(0x11050fba0);
}



/* Entry: 102487d64; end: 102487db7;  */

void FUN_102487d64(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102487db8; end: 102487df3;  */

void FUN_102487db8(undefined8 *param_1,undefined8 param_2)

{
  FUN_102487df4();
  func_0x0001000a7f38("SCSendToSpotlightEducationScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102487df4; end: 102488087;  */

void FUN_102487df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_1105100f0;
  ppuVar4 = &PTR_DAT_112e9db18;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11050fbf0;
  func_0x000107c613fc(&UNK_11050fbf0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e9d6d8;
  func_0x0001000285a8(0x112e9d6d8,&UNK_10daac900);
  func_0x0001000a6ee8(&UNK_11050f9c0,
                      "SCSendToSpotlightEducationScopedServicesScopeInitializationPluginKey",0x44,2,
                      FUN_102488088,puVar2,uVar3,&UNK_11050f9c0,&PTR_DAT_112e9d570);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11050fba0,
                      "SendToSpotlightEducationEntryPointWrapperScopeInitializationPluginKey",0x45,2
                      ,FUN_102488104,param_3,uVar3,&UNK_11050fba0,&PTR_DAT_112e9d5f0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11050fc18;
  func_0x000107c613fc(&UNK_11050fc18,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11050fde8,
                      "SendToSpotlightEducationScopeGraphBridgeScopeInitializationPluginKey",0x44,2,
                      FUN_10248810c,puVar2,uVar3,&UNK_11050fde8,&PTR_DAT_112e9d770);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e9d6e0;
  func_0x0001000285a8(0x112e9d6e0,&UNK_10daac908);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}


