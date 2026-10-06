/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b29d34; end: 101b29d53;  */

void FUN_101b29d34(void)

{
  func_0x000107c61168(&PTR_PTR_112e01d68);
  return;
}



/* Entry: 101b29d54; end: 101b29d87;  */

undefined1  [16] FUN_101b29d54(void)

{
  return ZEXT816(0x110446008);
}



/* Entry: 101b29d88; end: 101b29daf;  */

void FUN_101b29d88(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b29db0; end: 101b29db7;  */

undefined8 FUN_101b29db0(void)

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



/* Entry: 101b29db8; end: 101b2a4bf;  */

void FUN_101b29db8(long *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  FUN_101b2a68c();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_70;
  *(undefined8 *)(param_2 + 0x28) = uStack_78;
  *(undefined8 *)(param_2 + 0x30) = uStack_80;
  *(undefined8 *)(param_2 + 0x38) = uStack_88;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126a8a40;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar7;
  func_0x000107c61174();
  uVar8 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar9 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010effce20);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef85500);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef130d0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef228c0);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(uVar6);
  func_0x000107c61174(puVar7);
  uVar9 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef85520);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar9);
  func_0x000107c61174(puVar7);
  func_0x000107c61174();
  uVar9 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010effce60);
  func_0x000107c5a49c(puVar7);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c3e740(puVar7);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined **)(param_2 + 0x40) = puVar2;
    *param_1 = param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2a168);
  (*pcVar1)();
}



/* Entry: 101b2a4c0; end: 101b2a52b;  */

void FUN_101b2a4c0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101b2a52c; end: 101b2a57f;  */

void FUN_101b2a52c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b2a580; end: 101b2a587;  */

undefined8 FUN_101b2a580(void)

{
  return 0x1b;
}



/* Entry: 101b2a588; end: 101b2a60b;  */

void FUN_101b2a588(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b2a6dc,param_2,FUN_101b2a6e0,param_2,FUN_101b2a708,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b2a60c; end: 101b2a65b;  */

undefined8 FUN_101b2a60c(void)

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



/* Entry: 101b2a65c; end: 101b2a68b;  */

undefined ** FUN_101b2a65c(void)

{
  return &PTR_DAT_1130667f0;
}



/* Entry: 101b2a68c; end: 101b2a6ab;  */

void FUN_101b2a68c(void)

{
  func_0x000107c61168(&PTR_PTR_112e01e40);
  return;
}



/* Entry: 101b2a6ac; end: 101b2a6df;  */

undefined1  [16] FUN_101b2a6ac(void)

{
  return ZEXT816(0x1104460a8);
}



/* Entry: 101b2a6e0; end: 101b2a707;  */

void FUN_101b2a6e0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b2a708; end: 101b2a70f;  */

undefined8 FUN_101b2a708(void)

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



/* Entry: 101b2a710; end: 101b2aa27;  */

void FUN_101b2a710(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cfb0;
  ppuVar4 = &PTR_DAT_1130667f0;
  uVar5 = param_4;
  func_0x0001000a3aa4();
  func_0x000107c6157c(param_2);
  uVar2 = 0x112e01ed0;
  func_0x0001000285a8(0x112e01ed0,&UNK_10d9d3920);
  func_0x0001000a6ee8(&UNK_110445f08,
                      "BitmojiEditAvatarBuilderMetricsServicesEntryPointWrapperScopeInitializationPluginKey"
                      ,0x54,2,FUN_101b2aa28,param_2,uVar2,&UNK_110445f08,&PTR_DAT_112e01a70);
  func_0x000107c61574(param_2);
  puVar3 = &UNK_110446118;
  func_0x000107c613fc(&UNK_110446118,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_110446428,
                      "BitmojiEditAvatarBuilderScopeGraphBridgeScopeInitializationPluginKey",0x44,2,
                      FUN_101b2aa54,puVar3,uVar2,&UNK_110446428,&PTR_DAT_112e020c8);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_5);
  func_0x0001000a6ee8(&UNK_110445f88,
                      "SCBitmojiEditAvatarBuilderEntryPointWrapperScopeInitializationPluginKey",0x47
                      ,2,FUN_101b2aa94,param_5,uVar2,&UNK_110445f88,&PTR_DAT_112e01b68);
  func_0x000107c61574(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000a6ee8(&UNK_110446028,
                      "SCBitmojiEditAvatarBuilderPreviewViewProviderServiceProviderWrapperScopeInitializationPluginKey"
                      ,0x5f,2,0x101b2aac0,param_6,uVar2,&UNK_110446028,&PTR_DAT_112e01d00);
  func_0x000107c61574(param_6);
  puVar3 = &UNK_110446140;
  func_0x000107c613fc(&UNK_110446140,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_7);
  func_0x0001000a6ee8(&UNK_110445c90,
                      "SCBitmojiEditAvatarBuilderScopedServicesScopeInitializationPluginKey",0x44,2,
                      FUN_101b2ab94,puVar3,uVar2,&UNK_110445c90,&PTR_DAT_112e019c0);
  func_0x000107c61574(puVar3);
  func_0x000107c6157c(param_8);
  func_0x0001000a6ee8(&UNK_1104460c8,
                      "SCCameraDeviceSettingsResolverServiceBitmojiEditLiveMirrorEntryPointWrapperScopeInitializationPluginKey"
                      ,0x67,2,FUN_101b2ac20,param_8,uVar2,&UNK_1104460c8,&PTR_DAT_112e01dd8);
  func_0x000107c61574(param_8);
  uVar2 = 0x112e01ed8;
  func_0x0001000285a8(0x112e01ed8,&UNK_10d9d3928);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar2);
  func_0x0001000a7f38("SCBitmojiEditAvatarBuilderScopeInitializationPluginRegistryServiceProvider",
                      0x4a,2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101b2aa28; end: 101b2aa53;  */

void FUN_101b2aa28(void)

{
  FUN_101b2ab9c();
  return;
}



/* Entry: 101b2aa54; end: 101b2aa93;  */

void FUN_101b2aa54(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b2bb00(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiEditAvatarBuilderScopeGraphBridgeScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b2aa94; end: 101b2aaeb;  */

void FUN_101b2aa94(void)

{
  FUN_101b2ab9c();
  return;
}



/* Entry: 101b2aaec; end: 101b2ab93;  */

void FUN_101b2aaec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110446168;
  func_0x000107c613fc(&UNK_110446168,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101b2ac80;
  func_0x0001000823a8(FUN_101b2ac80,puVar1);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101b2ab94; end: 101b2ab9b;  */

void FUN_101b2ab94(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110446168;
  func_0x000107c613fc(&UNK_110446168,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101b2ac80;
  func_0x0001000823a8(FUN_101b2ac80,puVar3);
  func_0x000100082720("SCBitmojiEditAvatarBuilderScopedServicesScopeInitializationPluginProvider",
                      0x49,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101b2ab9c; end: 101b2ac1f;  */

void FUN_101b2ab9c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(param_4,param_3);
  func_0x000100082720(param_5,param_6,2);
  *param_1 = param_4;
  return;
}



/* Entry: 101b2ac20; end: 101b2ac4b;  */

void FUN_101b2ac20(void)

{
  FUN_101b2ab9c();
  return;
}



/* Entry: 101b2ac4c; end: 101b2ac53;  */

void FUN_101b2ac4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580();
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b2a6dc);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b2ac54; end: 101b2ac7f;  */

void FUN_101b2ac54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b2ac80; end: 101b2ac9f;  */

void FUN_101b2ac80(undefined8 *param_1)

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
  puVar1 = &UNK_110445d18;
  func_0x000107c613fc(&UNK_110445d18,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b26a60;
  func_0x00010058fa64(FUN_101b26a60,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b2aca0; end: 101b2adb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101b2aca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  lVar3 = unaff_x20;
  FUN_101b2b58c();
  if (lVar3 != 0) {
    func_0x000100083b20(&uStack_58);
    uVar1 = uStack_58;
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uVar1);
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_3;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e01ee0) = lVar3;
    *(undefined8 *)(unaff_x20 + _DAT_112e01ee8) = param_4;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b2adb8);
  (*pcVar2)();
}



/* Entry: 101b2adb8; end: 101b2ae17; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge55BitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint init] */

void FUN_101b2adb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiEditAvatarBuilderScopeGraphBridge.BitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2ade4);
  (*pcVar1)();
}



/* Entry: 101b2ae18; end: 101b2ae4f; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge55BitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b2ae34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2ae38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2ae18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e01ee0));
  return;
}



/* Entry: 101b2ae50; end: 101b2ae77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2ae50(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e01ee8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e01ee0));
  return;
}



/* Entry: 101b2ae78; end: 101b2ae97;  */

void FUN_101b2ae78(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7900);
  return;
}



/* Entry: 101b2ae98; end: 101b2af33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b2ae98(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e020a8);
  *(undefined8 *)(unaff_x20 + _DAT_112e01f18) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e01f20) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101b2af34; end: 101b2af93; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge52SCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint init] */

void FUN_101b2af34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiEditAvatarBuilderScopeGraphBridge.SCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2af60);
  (*pcVar1)();
}



/* Entry: 101b2af94; end: 101b2b027; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge52SCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2af94(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e01f18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e01f20));
  return;
}



/* Entry: 101b2b028; end: 101b2b02f;  */

undefined8 FUN_101b2b028(void)

{
  return 0;
}



/* Entry: 101b2b030; end: 101b2b04f;  */

void FUN_101b2b030(void)

{
  func_0x000107c61168(&PTR_PTR_1127f79c8);
  return;
}



/* Entry: 101b2b050; end: 101b2b0eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b2b050(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112e020b8);
  *(undefined8 *)(unaff_x20 + _DAT_112e01f50) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112e01f58) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 101b2b0ec; end: 101b2b14b; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge83SCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint init] */

void FUN_101b2b0ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiEditAvatarBuilderScopeGraphBridge.SCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint"
                      ,0x7c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2b118);
  (*pcVar1)();
}



/* Entry: 101b2b14c; end: 101b2b1df; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge83SCBitmojiEditAvatarBuilderScopedCameraDeviceSettingsResolverServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2b14c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e01f50));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e01f58));
  return;
}



/* Entry: 101b2b1e0; end: 101b2b1e7;  */

undefined8 FUN_101b2b1e0(void)

{
  return 0;
}



/* Entry: 101b2b1e8; end: 101b2b207;  */

void FUN_101b2b1e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7a90);
  return;
}



/* Entry: 101b2b208; end: 101b2b26b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b2b208(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112e020b0);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 101b2b26c; end: 101b2b273;  */

void FUN_101b2b26c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101b2b274; end: 101b2b313;  */

void FUN_101b2b274(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b2b314; end: 101b2b333;  */

void FUN_101b2b314(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 101b2b334; end: 101b2b3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b2b334(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e02058) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e02060);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b2b3bc);
  (*pcVar2)();
}



/* Entry: 101b2b3bc; end: 101b2b4a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b2b3bc(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e02058);
  *(undefined **)(unaff_x20 + _DAT_112e02058) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e02060);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e02060))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104462e0;
  func_0x000107c613fc(&UNK_1104462e0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101b2b4a8,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101b2b4a4; end: 101b2b4af;  */

void FUN_101b2b4a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b2b4b0; end: 101b2b50f; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge55SCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint init] */

void FUN_101b2b4b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiEditAvatarBuilderScopeGraphBridge.SCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint"
                      ,0x60,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2b4dc);
  (*pcVar1)();
}



/* Entry: 101b2b510; end: 101b2b547; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge55SCBitmojiEditAvatarBuilderScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2b510(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e02060));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02058));
  return;
}



/* Entry: 101b2b548; end: 101b2b54b;  */

void FUN_101b2b548(void)

{
  return;
}



/* Entry: 101b2b54c; end: 101b2b56b;  */

void FUN_101b2b54c(void)

{
  FUN_101b2b3bc();
  return;
}



/* Entry: 101b2b56c; end: 101b2b58b;  */

void FUN_101b2b56c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7b58);
  return;
}



/* Entry: 101b2b58c; end: 101b2b65b;  */

undefined8 FUN_101b2b58c(void)

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
  
  func_0x000107c61428(0x112e02090,&uStack_40,0x20,0);
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
    FUN_101b2b65c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101b2b65c; end: 101b2b67b;  */

void FUN_101b2b65c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7c20);
  return;
}



/* Entry: 101b2b67c; end: 101b2b813;  */

void FUN_101b2b67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e02098,&UNK_10d9d3b18);
  puVar1 = &UNK_110446328;
  func_0x000107c613fc(&UNK_110446328,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_101b2b814,puVar1);
  return;
}



/* Entry: 101b2b814; end: 101b2b823;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2b814(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar8 = &lStack_60;
  lVar6 = lVar1;
  FUN_101b2b65c();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112e020a0) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112e020a8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112e020b0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112e020b8) = uVar4;
  *(undefined8 *)(lVar7 + _DAT_112e020c0) = uVar9;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar7;
  lStack_58 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar9);
  func_0x000107c61154(&lStack_60,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 101b2b824; end: 101b2b8bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2b824(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e020a0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e020a8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e020b0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e020b8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e020c0) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2b8c0; end: 101b2b91f; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge48BitmojiEditAvatarBuilderScopeGraphBridgeServices init] */

void FUN_101b2b8c0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiEditAvatarBuilderScopeGraphBridge.BitmojiEditAvatarBuilderScopeGraphBridgeServices"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2b8ec);
  (*pcVar1)();
}



/* Entry: 101b2b920; end: 101b2b9c7; -[_TtC40BitmojiEditAvatarBuilderScopeGraphBridge48BitmojiEditAvatarBuilderScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b2b93c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2b95c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2b940) */
/* WARNING: Removing unreachable block (ram,0x000101b2b960) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2b920(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e020a8));
  return;
}



/* Entry: 101b2b9c8; end: 101b2b9d3;  */

void FUN_101b2b9c8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101b2bd74,param_1);
  return;
}



/* Entry: 101b2b9d4; end: 101b2ba5f;  */

void FUN_101b2b9d4(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101b2bd7c,0);
  return;
}



/* Entry: 101b2ba60; end: 101b2ba6b;  */

void FUN_101b2ba60(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101b2bac4,param_1);
  return;
}



/* Entry: 101b2ba6c; end: 101b2bac3;  */

void FUN_101b2ba6c(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 101b2bac4; end: 101b2baf7;  */

void FUN_101b2bac4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101b2baf8; end: 101b2baff;  */

undefined8 FUN_101b2baf8(void)

{
  return 0x1b;
}



/* Entry: 101b2bb00; end: 101b2bc77;  */

void FUN_101b2bb00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110446350;
  func_0x000107c613fc(&UNK_110446350,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101b2bc78,puVar1);
  return;
}



/* Entry: 101b2bc78; end: 101b2bc7f;  */

void FUN_101b2bc78(undefined8 *param_1)

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
  func_0x000107c61428(0x112e02090,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e02090,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110446468;
  func_0x000107c613fc(&UNK_110446468,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101b2bd6c;
  func_0x00010058fa64(0x101b2bd6c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b2bc80; end: 101b2bcdb;  */

void FUN_101b2bc80(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e02090,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e02090,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101b2bcdc; end: 101b2bd7f;  */

undefined ** FUN_101b2bcdc(void)

{
  return &PTR_DAT_1130667f0;
}



/* Entry: 101b2bd80; end: 101b2bdc7; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2bd80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02118;
  func_0x000107c61428(param_1 + _DAT_112e02118,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2bdc8; end: 101b2be1f; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2bdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02118;
  func_0x000107c61428(param_1 + _DAT_112e02118,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2be20; end: 101b2be67; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint sCBitmojiAvatarBuilderLensScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2be20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02120;
  func_0x000107c61428(param_1 + _DAT_112e02120,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b2be68; end: 101b2be73; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint setSCBitmojiAvatarBuilderLensScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2be68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02120;
  func_0x000107c61428(param_1 + _DAT_112e02120,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b2be74; end: 101b2bebb; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint sCGenerativeContentReportScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2be74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02128;
  func_0x000107c61428(param_1 + _DAT_112e02128,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b2bebc; end: 101b2bec7; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint setSCGenerativeContentReportScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2bebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02128;
  func_0x000107c61428(param_1 + _DAT_112e02128,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b2bec8; end: 101b2bf0f; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint bitmojiEditAvatarBuilderScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2bec8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02130;
  func_0x000107c61428(param_1 + _DAT_112e02130,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b2bf10; end: 101b2bf1b; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint setBitmojiEditAvatarBuilderScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2bf10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02130;
  func_0x000107c61428(param_1 + _DAT_112e02130,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b2bf1c; end: 101b2bf7b;  */

void FUN_101b2bf1c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 101b2bf7c; end: 101b2c1b3;  */

/* WARNING: Possible PIC construction at 0x000101b2c0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2c128) */
/* WARNING: Removing unreachable block (ram,0x000101b2c118) */
/* WARNING: Removing unreachable block (ram,0x000101b2c0fc) */
/* WARNING: Removing unreachable block (ram,0x000101b2c0ec) */
/* WARNING: Removing unreachable block (ram,0x000101b2c18c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2bf7c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c50a8c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50dd0();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
    }
    else {
      func_0x000107c3e9a4();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar3);
        lVar3 = lVar4;
      }
      else {
        lVar6 = 0;
        FUN_101b2ae78();
        lVar4 = lVar6;
        func_0x000107c610f8();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar5 = lVar3;
        FUN_101b2b58c();
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101b2c1b4);
          (*pcVar2)();
        }
        func_0x000100083b20(&uStack_68);
        uVar1 = uStack_68;
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uVar1);
        func_0x000100083b20(&uStack_68);
        func_0x000100087c34(auStack_70);
        func_0x000107c61574(uStack_68);
        *(long *)(lVar4 + _DAT_112e01ee0) = lVar5;
        *(long *)(lVar4 + _DAT_112e01ee8) = unaff_x20;
        lStack_80 = lVar4;
        lStack_78 = lVar6;
        func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 101b2c1b4; end: 101b2c1db; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101b2c1b4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b2bf7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2c1dc; end: 101b2c21f; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint end] */

void FUN_101b2c1dc(undefined8 param_1)

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



/* Entry: 101b2c220; end: 101b2c48f;  */

void FUN_101b2c220(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffda) && (param_3 == -0x7ffffffef104eb30)) ||
       (func_0x000107c605b8(0xd000000000000026,0x800000010efb14d0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58034();
    }
    else {
      if ((param_2 != -0x2fffffffffffffdb) || (param_3 != -0x7ffffffef1002a90)) {
        uVar2 = 0xd000000000000025;
        func_0x000107c605b8(0xd000000000000025,0x800000010effd570,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd000000000000037;
          if (((param_2 != -0x2fffffffffffffc9) || (param_3 != -0x7ffffffef1002a60)) &&
             (func_0x000107c605b8(0xd000000000000037,0x800000010effd5a0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "BitmojiEditAvatarBuilderScopeGraphBridge/SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint.swift"
                                ,0x68,2,0x3c,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2c490);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52ce0();
          goto LAB_101b2c2ac;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58378();
    }
  }
LAB_101b2c2ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101b2c490; end: 101b2c53b; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_101b2c490(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101b2c220(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101b2c53c; end: 101b2c5bf; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c53c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e02118,0);
  *(undefined8 *)(param_1 + _DAT_112e02120) = 0;
  *(undefined8 *)(param_1 + _DAT_112e02128) = 0;
  *(undefined8 *)(param_1 + _DAT_112e02130) = 0;
  *(undefined8 *)(param_1 + _DAT_112e02138) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b2c5c0; end: 101b2c5f3;  */

void FUN_101b2c5c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b2c5f4; end: 101b2c65b; -[SCBitmojiEditAvatarBuilderScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b2c620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c640: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2c624) */
/* WARNING: Removing unreachable block (ram,0x000101b2c644) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c5f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e02118);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e02120));
  return;
}



/* Entry: 101b2c65c; end: 101b2c67b;  */

void FUN_101b2c65c(void)

{
  func_0x000107c61168(&PTR_PTR_1127f7d00);
  return;
}



/* Entry: 101b2c67c; end: 101b2c687; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c67c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02168;
  func_0x000107c61428(param_1 + _DAT_112e02168,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2c688; end: 101b2c693; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c688(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02168;
  func_0x000107c61428(param_1 + _DAT_112e02168,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2c694; end: 101b2c69f; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint bitmojiEditAvatarBuilderScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c694(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02170;
  func_0x000107c61428(param_1 + _DAT_112e02170,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b2c6a0; end: 101b2c6e3;  */

void FUN_101b2c6a0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101b2c6e4; end: 101b2c6ef; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint setBitmojiEditAvatarBuilderScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c6e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02170;
  func_0x000107c61428(param_1 + _DAT_112e02170,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2c6f0; end: 101b2c743;  */

void FUN_101b2c6f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b2c744; end: 101b2c78b; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint sCBitmojiAvatarBuilderMetricsServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c744(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e02178;
  func_0x000107c61428(param_1 + _DAT_112e02178,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b2c78c; end: 101b2c7ef; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint setSCBitmojiAvatarBuilderMetricsServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e02178;
  func_0x000107c61428(param_1 + _DAT_112e02178,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b2c7f0; end: 101b2c973;  */

/* WARNING: Possible PIC construction at 0x000101b2c8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c900: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b2c91c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b2c8f4) */
/* WARNING: Removing unreachable block (ram,0x000101b2c904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b2c7f0(void)

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
      func_0x000107c50a90();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
      }
      else {
        lVar4 = 0;
        FUN_101b2b030();
        lVar2 = lVar4;
        func_0x000107c610f8();
        uVar6 = *(undefined8 *)(lVar3 + _DAT_112e020a8);
        *(undefined8 *)(lVar2 + _DAT_112e01f18) = uVar6;
        *(long *)(lVar2 + _DAT_112e01f20) = unaff_x20;
        puVar1 = PTR_s_init_1125d9248;
        lStack_70 = lVar2;
        lStack_68 = lVar4;
        func_0x000107c61174(unaff_x20);
        func_0x000107c6157c(uVar6);
        plVar5 = &lStack_70;
        func_0x000107c61154(plVar5,puVar1);
        uVar6 = *(undefined8 *)((long)plVar5 + _DAT_112e01f20);
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



/* Entry: 101b2c974; end: 101b2c99b; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint begin] */

void FUN_101b2c974(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b2c7f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b2c99c; end: 101b2c9df; -[SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint end] */

void FUN_101b2c99c(undefined8 param_1)

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



/* Entry: 101b2c9e0; end: 101b2cbe3;  */

void FUN_101b2c9e0(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10029b0)) ||
       (func_0x000107c605b8(0xd000000000000030,0x800000010effd650,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52cdc();
    }
    else {
      if ((param_2 != -0x2fffffffffffffd4) || (param_3 != -0x7ffffffef1002970)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd00000000000002c,0x800000010effd690,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "BitmojiEditAvatarBuilderScopeGraphBridge/SCSCBitmojiAvatarBuilderMetricsServicesSaberEntryPoint.swift"
                              ,0x65,2,0x38,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x101b2cbe4);
          (*pcVar1)();
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58038();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


