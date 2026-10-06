/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102baba10; end: 102baba4b;  */

void FUN_102baba10(void)

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



/* Entry: 102baba4c; end: 102baba53;  */

undefined8 FUN_102baba4c(void)

{
  return 0x1b;
}



/* Entry: 102baba54; end: 102babad7;  */

void FUN_102baba54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102babb98,param_2,FUN_102babb9c,param_2,FUN_102babbc4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102babad8; end: 102babb27;  */

undefined8 FUN_102babad8(void)

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



/* Entry: 102babb28; end: 102babb57;  */

void FUN_102babb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105a9918;
  return;
}



/* Entry: 102babb58; end: 102babb77;  */

void FUN_102babb58(void)

{
  func_0x000107c61168(&PTR_PTR_112efc080);
  return;
}



/* Entry: 102babb78; end: 102babb9b;  */

undefined1  [16] FUN_102babb78(void)

{
  return ZEXT816(0x1105a9958);
}



/* Entry: 102babb9c; end: 102babbc3;  */

void FUN_102babb9c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 102babbc4; end: 102babbcb;  */

undefined8 FUN_102babbc4(void)

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



/* Entry: 102babbcc; end: 102babc07;  */

void FUN_102babbcc(undefined8 *param_1,undefined8 param_2)

{
  FUN_102babc08();
  func_0x0001000a7f38("SCContextPollsDynamicStickerScopeInitializationPluginRegistryServiceProvider"
                      ,0x4c,2);
  *param_1 = param_2;
  return;
}



/* Entry: 102babc08; end: 102babdf3;  */

void FUN_102babc08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d2d0;
  ppuVar4 = &PTR_DAT_1130669d0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1105a99a8;
  func_0x000107c613fc(&UNK_1105a99a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112efc0f8;
  func_0x0001000285a8(0x112efc0f8,&UNK_10db2d100);
  func_0x0001000a6ee8(&UNK_1105a9bb8,
                      "ContextPollsStickerScopeGraphBridgeScopeInitializationPluginKey",0x3f,2,
                      FUN_102babdf4,puVar2,uVar3,&UNK_1105a9bb8,&PTR_DAT_112efc188);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1105a9958,
                      "SCContextPollsDynamicStickerEntryPointWrapperScopeInitializationPluginKey",
                      0x49,2,FUN_102babea8,param_3,uVar3,&UNK_1105a9958,&PTR_DAT_112efc018);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1105a99d0;
  func_0x000107c613fc(&UNK_1105a99d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1105a9778,
                      "SCContextPollsDynamicStickerScopedServicesScopeInitializationPluginKey",0x46,
                      2,FUN_102babf58,puVar2,uVar3,&UNK_1105a9778,&PTR_DAT_112efbf98);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112efc100;
  func_0x0001000285a8(0x112efc100,&UNK_10db2d108);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 102babdf4; end: 102babe33;  */

void FUN_102babdf4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_102bac530(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("ContextPollsStickerScopeGraphBridgeScopeInitializationPluginProvider",0x44,2)
  ;
  *param_1 = uVar1;
  return;
}



/* Entry: 102babe34; end: 102babea7;  */

void FUN_102babe34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x102babf94;
  func_0x0001000823a8(0x102babf94,param_3);
  func_0x000100082720("SCContextPollsDynamicStickerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102babea8; end: 102babeaf;  */

void FUN_102babea8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x102babf94;
  func_0x0001000823a8();
  func_0x000100082720("SCContextPollsDynamicStickerEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102babeb0; end: 102babf57;  */

void FUN_102babeb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a99f8;
  func_0x000107c613fc(&UNK_1105a99f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_102babf8c;
  func_0x0001000823a8(FUN_102babf8c,puVar1);
  func_0x000100082720("SCContextPollsDynamicStickerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 102babf58; end: 102babf5f;  */

void FUN_102babf58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1105a99f8;
  func_0x000107c613fc(&UNK_1105a99f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_102babf8c;
  func_0x0001000823a8(FUN_102babf8c,puVar3);
  func_0x000100082720("SCContextPollsDynamicStickerScopedServicesScopeInitializationPluginProvider",
                      0x4b,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 102babf60; end: 102babf8b;  */

void FUN_102babf60(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102babf8c; end: 102babf9b;  */

void FUN_102babf8c(undefined8 *param_1)

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
  puVar1 = &UNK_1105a9800;
  func_0x000107c613fc(&UNK_1105a9800,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bab158;
  func_0x00010058fa64(FUN_102bab158,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102babf9c; end: 102bac023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102babf9c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_102bac35c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112efc108) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112efc110) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bac024);
  (*pcVar1)();
}



/* Entry: 102bac024; end: 102bac083; -[_TtC35ContextPollsStickerScopeGraphBridge50ContextPollsStickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_102bac024(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPollsStickerScopeGraphBridge.ContextPollsStickerScopeGraphBridgeSaberEntryPoint"
                      ,0x56,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bac050);
  (*pcVar1)();
}



/* Entry: 102bac084; end: 102bac0bb; -[_TtC35ContextPollsStickerScopeGraphBridge50ContextPollsStickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bac0a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bac0a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc108));
  return;
}



/* Entry: 102bac0bc; end: 102bac0e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac0bc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112efc110),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112efc108));
  return;
}



/* Entry: 102bac0e4; end: 102bac103;  */

void FUN_102bac0e4(void)

{
  func_0x000107c61168(&PTR_PTR_112893108);
  return;
}



/* Entry: 102bac104; end: 102bac18b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102bac104(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efc140) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112efc148);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102bac18c);
  (*pcVar2)();
}



/* Entry: 102bac18c; end: 102bac273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102bac18c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efc140);
  *(undefined **)(unaff_x20 + _DAT_112efc140) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112efc148);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112efc148))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105a9b18;
  func_0x000107c613fc(&UNK_1105a9b18,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x102bac278,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 102bac274; end: 102bac27f;  */

void FUN_102bac274(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bac280; end: 102bac2df; -[_TtC35ContextPollsStickerScopeGraphBridge57SCContextPollsDynamicStickerScopedServicesSaberEntryPoint init] */

void FUN_102bac280(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextPollsStickerScopeGraphBridge.SCContextPollsDynamicStickerScopedServicesSaberEntryPoint"
                      ,0x5d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bac2ac);
  (*pcVar1)();
}



/* Entry: 102bac2e0; end: 102bac317; -[_TtC35ContextPollsStickerScopeGraphBridge57SCContextPollsDynamicStickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac2e0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112efc148));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc140));
  return;
}



/* Entry: 102bac318; end: 102bac31b;  */

void FUN_102bac318(void)

{
  return;
}



/* Entry: 102bac31c; end: 102bac33b;  */

void FUN_102bac31c(void)

{
  FUN_102bac18c();
  return;
}



/* Entry: 102bac33c; end: 102bac35b;  */

void FUN_102bac33c(void)

{
  func_0x000107c61168(&PTR_PTR_1128931d0);
  return;
}



/* Entry: 102bac35c; end: 102bac42b;  */

undefined8 FUN_102bac35c(void)

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
  
  func_0x000107c61428(0x112efc178,&uStack_40,0x20,0);
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
    FUN_102bac42c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 102bac42c; end: 102bac44b;  */

void FUN_102bac42c(void)

{
  func_0x000107c61168(&PTR_PTR_112893298);
  return;
}



/* Entry: 102bac44c; end: 102bac4b7;  */

void FUN_102bac44c(void)

{
  func_0x0001000285a8(0x112efc180,&UNK_10db2d1e8);
  func_0x0001000823a8(0x102bac48c,0);
  return;
}



/* Entry: 102bac4b8; end: 102bac4f3; -[_TtC35ContextPollsStickerScopeGraphBridge43ContextPollsStickerScopeGraphBridgeServices init] */

void FUN_102bac4b8(undefined8 param_1)

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



/* Entry: 102bac4f4; end: 102bac527;  */

void FUN_102bac4f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bac528; end: 102bac52f;  */

undefined8 FUN_102bac528(void)

{
  return 0x1b;
}



/* Entry: 102bac530; end: 102bac6a7;  */

void FUN_102bac530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105a9b60;
  func_0x000107c613fc(&UNK_1105a9b60,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_102bac6a8,puVar1);
  return;
}



/* Entry: 102bac6a8; end: 102bac6af;  */

void FUN_102bac6a8(undefined8 *param_1)

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
  func_0x000107c61428(0x112efc178,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112efc178,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1105a9bf8;
  func_0x000107c613fc(&UNK_1105a9bf8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x102bac75c;
  func_0x00010058fa64(0x102bac75c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bac6b0; end: 102bac70b;  */

void FUN_102bac6b0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112efc178,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112efc178,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 102bac70c; end: 102bac763;  */

undefined ** FUN_102bac70c(void)

{
  return &PTR_DAT_1130669d0;
}



/* Entry: 102bac764; end: 102bac7ab; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac764(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc1d8;
  func_0x000107c61428(param_1 + _DAT_112efc1d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bac7ac; end: 102bac803; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac7ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc1d8;
  func_0x000107c61428(param_1 + _DAT_112efc1d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bac804; end: 102bac84b; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint contextPollsStickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac804(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc1e0;
  func_0x000107c61428(param_1 + _DAT_112efc1e0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102bac84c; end: 102bac8af; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint setContextPollsStickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac84c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc1e0;
  func_0x000107c61428(param_1 + _DAT_112efc1e0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102bac8b0; end: 102bac9e3;  */

/* WARNING: Possible PIC construction at 0x000102bac968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bac984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bac9a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bac96c) */
/* WARNING: Removing unreachable block (ram,0x000102bac988) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bac8b0(void)

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
  func_0x000107c405bc();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_102bac0e4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_102bac35c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102bac9e4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112efc108) = lVar5;
    *(long *)(lVar4 + _DAT_112efc110) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102bac9e4; end: 102baca0b; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_102bac9e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bac8b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102baca0c; end: 102baca4f; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_102baca0c(undefined8 param_1)

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



/* Entry: 102baca50; end: 102bacbe7;  */

void FUN_102baca50(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffce) || (param_3 != -0x7ffffffef0f056b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000032,0x800000010f0fa950,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "ContextPollsStickerScopeGraphBridge/SCContextPollsStickerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x5e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102bacbe8);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c538fc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102bacbe8; end: 102bacc93; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_102bacbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102baca50(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bacc94; end: 102baccff; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bacc94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efc1d8,0);
  *(undefined8 *)(param_1 + _DAT_112efc1e0) = 0;
  *(undefined8 *)(param_1 + _DAT_112efc1e8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bacd00; end: 102bacd33;  */

void FUN_102bacd00(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bacd34; end: 102bacd7b; -[SCContextPollsStickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102bacd60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bacd64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bacd34(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efc1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc1e0));
  return;
}



/* Entry: 102bacd7c; end: 102bacd9b;  */

void FUN_102bacd7c(void)

{
  func_0x000107c61168(&PTR_PTR_112893348);
  return;
}



/* Entry: 102bacd9c; end: 102bacde3; -[SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bacd9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112efc218;
  func_0x000107c61428(param_1 + _DAT_112efc218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102bacde4; end: 102bace3b; -[SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bacde4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112efc218;
  func_0x000107c61428(param_1 + _DAT_112efc218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102bace3c; end: 102bacf13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bace3c(undefined8 param_1,long param_2)

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
    FUN_102bac33c();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112efc140) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102bacf14);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112efc148);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112efc220);
    *(long **)(unaff_x20 + _DAT_112efc220) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 102bacf14; end: 102bacf3b; -[SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint begin] */

void FUN_102bacf14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102bace3c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102bacf3c; end: 102bad0b3;  */

/* WARNING: Possible PIC construction at 0x000102bacfa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102bad03c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102bacfa8) */
/* WARNING: Removing unreachable block (ram,0x000102bad040) */
/* WARNING: Removing unreachable block (ram,0x000102bad058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bacf3c(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112efc220);
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



/* Entry: 102bad0b4; end: 102bad0bb;  */

void FUN_102bad0b4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 102bad0bc; end: 102bad0ef; -[SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint end] */

void FUN_102bad0bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102bacf3c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102bad0f0; end: 102bad20f;  */

void FUN_102bad0f0(long param_1,long param_2,long param_3)

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
                        "ContextPollsStickerScopeGraphBridge/SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint.swift"
                        ,0x65,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102bad210);
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



/* Entry: 102bad210; end: 102bad2bb; -[SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_102bad210(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102bad0f0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102bad2bc; end: 102bad31b; -[SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad2bc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112efc218,0);
  *(undefined8 *)(param_1 + _DAT_112efc220) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bad31c; end: 102bad34f;  */

void FUN_102bad31c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102bad350; end: 102bad387; -[SCSCContextPollsDynamicStickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad350(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112efc218);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112efc220));
  return;
}



/* Entry: 102bad388; end: 102bad3a7;  */

void FUN_102bad388(void)

{
  func_0x000107c61168(&PTR_PTR_112893410);
  return;
}



/* Entry: 102bad3a8; end: 102bad427; -[_TtC33SCContextMemoriesCOFConfiguration24MemoriesCOFConfiguration operaHeaderWithActionItemMemoriesEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102bad3a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112efc258);
  func_0x000107c61174();
  uVar1 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f0faaa0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 102bad428; end: 102bad487; -[_TtC33SCContextMemoriesCOFConfiguration24MemoriesCOFConfiguration init] */

void FUN_102bad428(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextMemoriesCOFConfiguration.MemoriesCOFConfiguration",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bad454);
  (*pcVar1)();
}



/* Entry: 102bad488; end: 102bad497; -[_TtC33SCContextMemoriesCOFConfiguration24MemoriesCOFConfiguration .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112efc258));
  return;
}



/* Entry: 102bad498; end: 102bad527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad498(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    FUN_102bad530();
    func_0x000107c610f8();
    *(long *)(lStack_48 + _DAT_112efc258) = lVar2;
    puVar3 = auStack_40;
    func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
    *param_1 = (long)puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bad528);
  (*pcVar1)();
}



/* Entry: 102bad528; end: 102bad52f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad528(long *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    FUN_102bad530();
    func_0x000107c610f8();
    *(long *)(lStack_48 + _DAT_112efc258) = lVar2;
    puVar3 = auStack_40;
    func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
    *param_1 = (long)puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bad528);
  (*pcVar1)();
}



/* Entry: 102bad530; end: 102bad54f;  */

void FUN_102bad530(void)

{
  func_0x000107c61168(&PTR_PTR_1128934d0);
  return;
}



/* Entry: 102bad550; end: 102bad55f;  */

undefined1  [16] FUN_102bad550(void)

{
  return ZEXT816(0x1105a9cd8);
}



/* Entry: 102bad560; end: 102bad5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad560(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_102bad954();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112efc290) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 102bad5cc; end: 102bad637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad5cc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112efc290) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102bad638; end: 102bad697; -[_TtC48ContextRepliesUpsellScopedFactoryServiceProvider45SCContextRepliesSubscribeUpsellScopedServices init] */

void FUN_102bad638(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextRepliesUpsellScopedFactoryServiceProvider.SCContextRepliesSubscribeUpsellScopedServices"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102bad664);
  (*pcVar1)();
}



/* Entry: 102bad698; end: 102bad6a7; -[_TtC48ContextRepliesUpsellScopedFactoryServiceProvider45SCContextRepliesSubscribeUpsellScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad698(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112efc290));
  return;
}



/* Entry: 102bad6a8; end: 102bad713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102bad6a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1105a9eb0;
  func_0x000107c613fc(&UNK_1105a9eb0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_102bad9ec,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 102bad714; end: 102bad7af;  */

void FUN_102bad714(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1105a9dc0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1105a9dc0;
  return;
}



/* Entry: 102bad7b0; end: 102bad7e7;  */

void FUN_102bad7b0(long *param_1)

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



/* Entry: 102bad7e8; end: 102bad7ef;  */

undefined8 FUN_102bad7e8(void)

{
  return 0x1b;
}



/* Entry: 102bad7f0; end: 102bad923;  */

void FUN_102bad7f0(undefined8 *param_1)

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
  puVar1 = &UNK_1105a9ed8;
  func_0x000107c613fc(&UNK_1105a9ed8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_102bad9c4;
  func_0x00010058fa64(FUN_102bad9c4,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 102bad924; end: 102bad953;  */

undefined ** FUN_102bad924(void)

{
  return &PTR_DAT_113066a00;
}



/* Entry: 102bad954; end: 102bad973;  */

void FUN_102bad954(void)

{
  func_0x000107c61168(&PTR_PTR_112893590);
  return;
}



/* Entry: 102bad974; end: 102bad9c3;  */

undefined1  [16] FUN_102bad974(void)

{
  return ZEXT816(0x1105a9e10);
}



/* Entry: 102bad9c4; end: 102bad9eb;  */

void FUN_102bad9c4(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 102bad9ec; end: 102bad9ff;  */

void FUN_102bad9ec(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102bada00; end: 102baddc3;  */

void FUN_102bada00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_68;
  
  uVar12 = *param_2;
  func_0x0001000285a8(0x112efc308,&UNK_10db2d708);
  puVar1 = &uStack_68;
  uStack_68 = uVar12;
  func_0x0001000838ec();
  puVar2 = puVar1;
  func_0x000102baec94();
  pcVar3 = "SCFriendProfileScopeExposerSubjectServiceProvider";
  func_0x000100082720("SCFriendProfileScopeExposerSubjectServiceProvider",0x31,2);
  func_0x000102baed14();
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeExposerSubjectServiceProvider",0x42,2);
  puVar4 = puVar2;
  FUN_102baecd4();
  func_0x000100082720("SCFriendProfileScopeExposerObservableServiceProvider",0x34,2);
  pcVar5 = pcVar3;
  FUN_102baeda0();
  func_0x000100082720("SCUnifiedPublicProfilesPresenterScopeExposerObservableServiceProvider",0x45,2
                     );
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar6 = FUN_102bad7b0;
  func_0x0001000823a8(FUN_102bad7b0,0);
  func_0x000100082720("SCContextRepliesSubscribeUpsellScopedServicesCleanupRelayServiceProvider",
                      0x48,2);
  func_0x0001000285a8(0x112efc310,&UNK_10db2d720);
  puVar7 = &UNK_1105a9f38;
  func_0x000107c613fc(&UNK_1105a9f38,0x28,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar1;
  *(char **)(puVar7 + 0x18) = pcVar5;
  *(undefined8 **)(puVar7 + 0x20) = puVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(puVar4);
  pcVar8 = FUN_102baddc4;
  func_0x0001000823a8(FUN_102baddc4,puVar7);
  func_0x000100082720("ContextRepliesSubscribeUpsellEntryPointWrapperServiceProvider",0x3d,2);
  puVar9 = puVar2;
  FUN_102baeae8(puVar2,pcVar3);
  func_0x000100082720("ContextRepliesUpsellScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112efc318,&UNK_10db2d710);
  puVar7 = &UNK_1105a9f60;
  func_0x000107c613fc(&UNK_1105a9f60,0x30,7);
  *(code **)(puVar7 + 0x10) = pcVar8;
  *(undefined8 **)(puVar7 + 0x18) = puVar1;
  *(undefined8 **)(puVar7 + 0x20) = puVar9;
  *(code **)(puVar7 + 0x28) = pcVar6;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar8);
  func_0x000107c6157c(puVar9);
  func_0x000107c6157c(pcVar6);
  uVar12 = 0x102baddd0;
  func_0x0001000823a8(0x102baddd0,puVar7);
  func_0x000100082720("SCContextRepliesSubscribeUpsellScopeInitializationPluginRegistryServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112efc298,&UNK_10db2d440);
  func_0x000107c6157c(uVar12);
  uVar10 = 0x102badddc;
  func_0x0001000823a8(0x102badddc,uVar12);
  func_0x000100082720("SCContextRepliesSubscribeUpsellScopeInitializationServiceProvider",0x41,2);
  func_0x0001000285a8(0x112efc288,&UNK_10db2d430);
  func_0x000107c6157c(uVar10);
  uVar11 = 0x102badde4;
  func_0x0001000823a8(0x102badde4,uVar10);
  func_0x000100082720("SCContextRepliesSubscribeUpsellScopedServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar7 = &UNK_1105a9f88;
  func_0x000107c613fc(&UNK_1105a9f88,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar11;
  *(code **)(puVar7 + 0x18) = pcVar6;
  func_0x000107c6157c(pcVar6);
  uVar11 = 0x102baddec;
  func_0x0001000823a8(0x102baddec,puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar10);
  func_0x000100082720("SCContextRepliesSubscribeUpsellScopeEntryPointProvider",0x36,2);
  *param_1 = uVar11;
  return;
}



/* Entry: 102baddc4; end: 102baddf3;  */

void FUN_102baddc4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102bae140();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102badfe8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102baddf4; end: 102badea3;  */

void FUN_102baddf4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_102bae140();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_102badfe8(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61574(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 102badea4; end: 102badf13;  */

undefined8 FUN_102badea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102badfe8(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 102badf14; end: 102badf47;  */

void FUN_102badf14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102badf48; end: 102badf4f;  */

undefined8 FUN_102badf48(void)

{
  return 0x1b;
}



/* Entry: 102badf50; end: 102badfd3;  */

void FUN_102badf50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x102bae180,param_2,FUN_102bae184,param_2,0x102bae1ac,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 102badfd4; end: 102badfe7;  */

void FUN_102badfd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1105a9fa0;
  return;
}



/* Entry: 102badfe8; end: 102bae123;  */

void FUN_102badfe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112ebb0b8,&UNK_10dad3a00);
  func_0x000107c610f8();
  func_0x000107c6157c(param_2);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_2);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  func_0x0001000285a8(0x112e4ccf0,&UNK_10daaf8a0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_102bb0610(0);
  func_0x000107c613fc();
  uVar2 = param_1;
  FUN_102bb0028(param_1,uVar3,puVar1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  func_0x000107c61174(puVar1);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar2);
  FUN_102bb0038();
  func_0x000107c61574(uVar2);
  return;
}



/* Entry: 102bae124; end: 102bae13f;  */

undefined ** FUN_102bae124(void)

{
  return &PTR_DAT_113066a00;
}



/* Entry: 102bae140; end: 102bae15f;  */

void FUN_102bae140(void)

{
  func_0x000107c61168(&PTR_PTR_112efc388);
  return;
}



/* Entry: 102bae160; end: 102bae183;  */

undefined1  [16] FUN_102bae160(void)

{
  return ZEXT816(0x1105a9fe0);
}


