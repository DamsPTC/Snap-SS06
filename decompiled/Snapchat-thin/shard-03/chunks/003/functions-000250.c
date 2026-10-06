/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027c33c4; end: 1027c33cb;  */

void FUN_1027c33c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11054e7f0;
  func_0x000107c613fc(&UNK_11054e7f0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1027c33f8;
  func_0x0001000823a8(FUN_1027c33f8,puVar3);
  func_0x000100082720("ChatReactionMenuScopedServicesScopeInitializationPluginProvider",0x3f,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1027c33cc; end: 1027c33f7;  */

void FUN_1027c33cc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027c33f8; end: 1027c3407;  */

void FUN_1027c33f8(undefined8 *param_1)

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
  puVar1 = &UNK_11054e5f8;
  func_0x000107c613fc(&UNK_11054e5f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1027c2358;
  func_0x00010058fa64(FUN_1027c2358,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027c3408; end: 1027c34e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027c3408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_1027c381c();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112ebff98) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ebffa0) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c34e4);
  (*pcVar1)();
}



/* Entry: 1027c34e4; end: 1027c3543; -[_TtC32ChatReactionMenuScopeGraphBridge47ChatReactionMenuScopeGraphBridgeSaberEntryPoint init] */

void FUN_1027c34e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReactionMenuScopeGraphBridge.ChatReactionMenuScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c3510);
  (*pcVar1)();
}



/* Entry: 1027c3544; end: 1027c357b; -[_TtC32ChatReactionMenuScopeGraphBridge47ChatReactionMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027c3560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c3564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3544(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebff98));
  return;
}



/* Entry: 1027c357c; end: 1027c35a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c357c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ebffa0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ebff98));
  return;
}



/* Entry: 1027c35a4; end: 1027c35c3;  */

void FUN_1027c35a4(void)

{
  func_0x000107c61168(&PTR_PTR_112862eb8);
  return;
}



/* Entry: 1027c35c4; end: 1027c364b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027c35c4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebffd0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ebffd8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c364c);
  (*pcVar2)();
}



/* Entry: 1027c364c; end: 1027c3733;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1027c364c(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebffd0);
  *(undefined **)(unaff_x20 + _DAT_112ebffd0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ebffd8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ebffd8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11054e910;
  func_0x000107c613fc(&UNK_11054e910,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1027c3738,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1027c3734; end: 1027c373f;  */

void FUN_1027c3734(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027c3740; end: 1027c379f; -[_TtC32ChatReactionMenuScopeGraphBridge45ChatReactionMenuScopedServicesSaberEntryPoint init] */

void FUN_1027c3740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReactionMenuScopeGraphBridge.ChatReactionMenuScopedServicesSaberEntryPoint"
                      ,0x4e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c376c);
  (*pcVar1)();
}



/* Entry: 1027c37a0; end: 1027c37d7; -[_TtC32ChatReactionMenuScopeGraphBridge45ChatReactionMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c37a0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ebffd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ebffd0));
  return;
}



/* Entry: 1027c37d8; end: 1027c37db;  */

void FUN_1027c37d8(void)

{
  return;
}



/* Entry: 1027c37dc; end: 1027c37fb;  */

void FUN_1027c37dc(void)

{
  FUN_1027c364c();
  return;
}



/* Entry: 1027c37fc; end: 1027c381b;  */

void FUN_1027c37fc(void)

{
  func_0x000107c61168(&PTR_PTR_112862f80);
  return;
}



/* Entry: 1027c381c; end: 1027c38eb;  */

undefined8 FUN_1027c381c(void)

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
  
  func_0x000107c61428(0x112ec0008,&uStack_40,0x20,0);
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
    FUN_1027c38ec();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1027c38ec; end: 1027c390b;  */

void FUN_1027c38ec(void)

{
  func_0x000107c61168(&PTR_PTR_112863048);
  return;
}



/* Entry: 1027c390c; end: 1027c3927;  */

void FUN_1027c390c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ec0010,&UNK_10dadd8c8);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027c3994,param_1);
  return;
}



/* Entry: 1027c3928; end: 1027c3993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3928(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_1027c38ec();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ec0018) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 1027c3994; end: 1027c399b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3994(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_1027c38ec();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ec0018) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 1027c399c; end: 1027c39e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c399c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ec0018) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027c39e8; end: 1027c3a47; -[_TtC32ChatReactionMenuScopeGraphBridge40ChatReactionMenuScopeGraphBridgeServices init] */

void FUN_1027c39e8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReactionMenuScopeGraphBridge.ChatReactionMenuScopeGraphBridgeServices",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c3a14);
  (*pcVar1)();
}



/* Entry: 1027c3a48; end: 1027c3a57; -[_TtC32ChatReactionMenuScopeGraphBridge40ChatReactionMenuScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3a48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ec0018));
  return;
}



/* Entry: 1027c3a58; end: 1027c3ae3;  */

void FUN_1027c3a58(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1027c3a98,0);
  return;
}



/* Entry: 1027c3ae4; end: 1027c3aff;  */

void FUN_1027c3ae4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1027c3b50,param_1);
  return;
}



/* Entry: 1027c3b00; end: 1027c3b4f;  */

void FUN_1027c3b00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 1027c3b50; end: 1027c3b83;  */

void FUN_1027c3b50(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1027c3b84; end: 1027c3b8b;  */

undefined8 FUN_1027c3b84(void)

{
  return 0x1b;
}



/* Entry: 1027c3b8c; end: 1027c3d03;  */

void FUN_1027c3b8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11054e958;
  func_0x000107c613fc(&UNK_11054e958,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1027c3d04,puVar1);
  return;
}



/* Entry: 1027c3d04; end: 1027c3d0b;  */

void FUN_1027c3d04(undefined8 *param_1)

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
  func_0x000107c61428(0x112ec0008,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ec0008,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11054ea30;
  func_0x000107c613fc(&UNK_11054ea30,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1027c3dd8;
  func_0x00010058fa64(0x1027c3dd8,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1027c3d0c; end: 1027c3d67;  */

void FUN_1027c3d0c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ec0008,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ec0008,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1027c3d68; end: 1027c3ddf;  */

undefined ** FUN_1027c3d68(void)

{
  return &PTR_DAT_1130665b0;
}



/* Entry: 1027c3de0; end: 1027c3e27; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3de0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec0070;
  func_0x000107c61428(param_1 + _DAT_112ec0070,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027c3e28; end: 1027c3e7f; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec0070;
  func_0x000107c61428(param_1 + _DAT_112ec0070,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027c3e80; end: 1027c3ec7; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3e80(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec0078;
  func_0x000107c61428(param_1 + _DAT_112ec0078,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027c3ec8; end: 1027c3ed3; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3ec8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec0078;
  func_0x000107c61428(param_1 + _DAT_112ec0078,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027c3ed4; end: 1027c3f1b; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint chatReactionMenuScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3ed4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec0080;
  func_0x000107c61428(param_1 + _DAT_112ec0080,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1027c3f1c; end: 1027c3f27; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint setChatReactionMenuScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec0080;
  func_0x000107c61428(param_1 + _DAT_112ec0080,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027c3f28; end: 1027c3f87;  */

void FUN_1027c3f28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1027c3f88; end: 1027c4143;  */

/* WARNING: Possible PIC construction at 0x0001027c40a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c40c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c40d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c4118: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c40d8) */
/* WARNING: Removing unreachable block (ram,0x0001027c40c8) */
/* WARNING: Removing unreachable block (ram,0x0001027c40a4) */
/* WARNING: Removing unreachable block (ram,0x0001027c411c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c3f88(void)

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
  func_0x000107c4eaa8();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3f8f4();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      lVar4 = 0;
      FUN_1027c35a4();
      lVar3 = lVar4;
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar5 = lVar2;
      FUN_1027c381c();
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c4144);
        (*pcVar1)();
      }
      func_0x000100083b20(&uStack_68);
      func_0x000100087c34(auStack_70);
      func_0x000107c61574(uStack_68);
      *(long *)(lVar3 + _DAT_112ebff98) = lVar5;
      *(long *)(lVar3 + _DAT_112ebffa0) = unaff_x20;
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



/* Entry: 1027c4144; end: 1027c416b; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1027c4144(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027c3f88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027c416c; end: 1027c41af; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint end] */

void FUN_1027c416c(undefined8 param_1)

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



/* Entry: 1027c41b0; end: 1027c43b3;  */

void FUN_1027c41b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10dfbf0)) {
      uVar2 = 0xd000000000000019;
      func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd00000000000002f;
        if (((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0f42050)) &&
           (func_0x000107c605b8(0xd00000000000002f,0x800000010f0bdfb0,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "ChatReactionMenuScopeGraphBridge/SCChatReactionMenuScopeGraphBridgeSaberEntryPoint.swift"
                              ,0x58,2,0x34,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c43b4);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c533a8();
        goto LAB_1027c423c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c57598();
  }
LAB_1027c423c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1027c43b4; end: 1027c445f; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1027c43b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027c41b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027c4460; end: 1027c44d7; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c4460(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec0070,0);
  *(undefined8 *)(param_1 + _DAT_112ec0078) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec0080) = 0;
  *(undefined8 *)(param_1 + _DAT_112ec0088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027c44d8; end: 1027c450b;  */

void FUN_1027c44d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027c450c; end: 1027c4563; -[SCChatReactionMenuScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027c4538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c453c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c450c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec0070);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec0078));
  return;
}



/* Entry: 1027c4564; end: 1027c4583;  */

void FUN_1027c4564(void)

{
  func_0x000107c61168(&PTR_PTR_112863108);
  return;
}



/* Entry: 1027c4584; end: 1027c45cb; -[SCChatReactionMenuScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c4584(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ec00b8;
  func_0x000107c61428(param_1 + _DAT_112ec00b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1027c45cc; end: 1027c4623; -[SCChatReactionMenuScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c45cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ec00b8;
  func_0x000107c61428(param_1 + _DAT_112ec00b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1027c4624; end: 1027c46fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c4624(undefined8 param_1,long param_2)

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
    FUN_1027c37fc();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112ebffd0) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c46fc);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112ebffd8);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ec00c0);
    *(long **)(unaff_x20 + _DAT_112ec00c0) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1027c46fc; end: 1027c4723; -[SCChatReactionMenuScopedServicesSaberEntryPoint begin] */

void FUN_1027c46fc(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027c4624();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027c4724; end: 1027c489b;  */

/* WARNING: Possible PIC construction at 0x0001027c478c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c4824: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c4790) */
/* WARNING: Removing unreachable block (ram,0x0001027c4828) */
/* WARNING: Removing unreachable block (ram,0x0001027c4840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c4724(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ec00c0);
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



/* Entry: 1027c489c; end: 1027c48a3;  */

void FUN_1027c489c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1027c48a4; end: 1027c48d7; -[SCChatReactionMenuScopedServicesSaberEntryPoint end] */

void FUN_1027c48a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1027c4724();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1027c48d8; end: 1027c49f7;  */

void FUN_1027c48d8(long param_1,long param_2,long param_3)

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
                        "ChatReactionMenuScopeGraphBridge/SCChatReactionMenuScopedServicesSaberEntryPoint.swift"
                        ,0x56,2,0x2c,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c49f8);
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



/* Entry: 1027c49f8; end: 1027c4aa3; -[SCChatReactionMenuScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1027c49f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1027c48d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1027c4aa4; end: 1027c4b03; -[SCChatReactionMenuScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c4aa4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112ec00b8,0);
  *(undefined8 *)(param_1 + _DAT_112ec00c0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1027c4b04; end: 1027c4b37;  */

void FUN_1027c4b04(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1027c4b38; end: 1027c4b6f; -[SCChatReactionMenuScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c4b38(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ec00b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec00c0));
  return;
}



/* Entry: 1027c4b70; end: 1027c4b8f;  */

void FUN_1027c4b70(void)

{
  func_0x000107c61168(&PTR_PTR_1128631d8);
  return;
}



/* Entry: 1027c4b90; end: 1027c5d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1027c4b90(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long *plVar25;
  long unaff_x20;
  code *pcVar26;
  code *pcVar27;
  undefined8 uVar28;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [4];
  
  func_0x000107c613fc();
  *(long *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  lVar4 = param_6;
  func_0x000107c406f8();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1027c546c);
    (*pcVar3)();
  }
  func_0x0001000285a8(0x112d65b38,&UNK_10d92a770);
  lVar5 = lVar4;
  func_0x0001000bda74(lVar4);
  func_0x000107c61170(lVar4);
  func_0x0001000d224c(auStack_80);
  func_0x000107c61574(lVar5);
  func_0x0001000285a8(0x112ec00f0,&UNK_10daddae8);
  lVar4 = _DAT_113073658;
  uVar6 = *(undefined8 *)(param_1 + _DAT_113073658);
  func_0x000107c61174(uVar6);
  uVar7 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  puVar8 = &UNK_11054eb38;
  func_0x000107c613fc(&UNK_11054eb38,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = auStack_80[0];
  func_0x000107c615f0(auStack_80[0]);
  pcVar3 = FUN_1027c5e88;
  puVar21 = puVar8;
  func_0x000100775358(FUN_1027c5e88,puVar8,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(puVar8);
  uVar6 = *(undefined8 *)(param_1 + lVar4);
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x0001000b637c();
  func_0x000107c61170(uVar6);
  uVar9 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar6 = uVar9;
  func_0x000107c5faec();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112ec00f8,&UNK_10daddaf0);
  uVar9 = param_3;
  func_0x000107c3ff84();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112ec0100,&UNK_10daddaf8);
  uVar9 = param_3;
  func_0x000107c3f8fc();
  func_0x000107c61180();
  uVar11 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112ec0108,&UNK_10daddb00);
  uVar9 = param_4;
  func_0x000107c5dec8();
  func_0x000107c61180();
  uVar12 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  func_0x0001000285a8(0x112d3b7c0,&UNK_10d904cb0);
  uVar9 = param_5;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  uVar13 = uVar9;
  func_0x0001000bda74();
  func_0x000107c61170(uVar9);
  lVar4 = param_6;
  func_0x000107c406f8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar14 = lVar4;
    func_0x0001000bda74();
    func_0x000107c61170(lVar4);
    func_0x0001000285a8(0x112ec0110,&UNK_10daddb10);
    uVar9 = param_7;
    func_0x000107c4f948();
    func_0x000107c61180();
    uVar15 = uVar9;
    func_0x0001000bda74();
    func_0x000107c61170(uVar9);
    func_0x0001000285a8(0x112d64528,&UNK_10d929a70);
    uVar9 = param_8;
    func_0x000107c3e980();
    func_0x000107c61180();
    uVar16 = uVar9;
    func_0x0001000bda74();
    func_0x000107c61170(uVar9);
    lVar4 = _DAT_113073670;
    uVar28 = *(undefined8 *)(param_1 + _DAT_113073668);
    func_0x000107c61428(param_1 + _DAT_113073670,auStack_80,0,0);
    lVar4 = param_1 + lVar4;
    func_0x000107c61618();
    uVar1 = *(undefined4 *)(param_1 + _DAT_113073678);
    uVar23 = *(undefined8 *)(param_1 + _DAT_113073680);
    uVar24 = *(undefined8 *)(param_1 + _DAT_113073688);
    lVar17 = 0;
    FUN_1027c7fc8();
    lVar18 = lVar17;
    func_0x000107c610f8();
    lVar5 = _DAT_112ec01e0;
    uStack_88 = 0;
    func_0x0001000285a8(0x112ec0118,&UNK_10daddb20);
    func_0x000107c613fc();
    func_0x000107c615f0(uVar28);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(pcVar3);
    puVar19 = &uStack_88;
    func_0x00010006c248();
    *(undefined8 **)(lVar18 + lVar5) = puVar19;
    lVar5 = _DAT_112ec0230;
    func_0x000107c61614(lVar18 + _DAT_112ec0230,0);
    lVar2 = _DAT_112ec0268;
    uVar9 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar18 + lVar2) = uVar9;
    *(undefined8 *)(lVar18 + _DAT_112ec0270) = 0;
    *(undefined8 *)(lVar18 + _DAT_112ec0278) = 0;
    *(undefined8 *)(lVar18 + _DAT_112ec0280) = 0;
    *(undefined1 *)(lVar18 + _DAT_112ec0288) = 0;
    *(undefined8 *)(lVar18 + _DAT_112ec01d8) = uVar7;
    puVar19 = (undefined8 *)(lVar18 + _DAT_112ec01e8);
    *puVar19 = uVar6;
    puVar19[1] = puVar21;
    *(undefined8 *)(lVar18 + _DAT_112ec01f0) = uVar10;
    *(undefined8 *)(lVar18 + _DAT_112ec01f8) = uVar11;
    *(undefined8 *)(lVar18 + _DAT_112ec0200) = uVar12;
    *(undefined8 *)(lVar18 + _DAT_112ec0208) = uVar13;
    *(long *)(lVar18 + _DAT_112ec0210) = lVar14;
    *(undefined8 *)(lVar18 + _DAT_112ec0218) = uVar15;
    *(undefined8 *)(lVar18 + _DAT_112ec0220) = uVar16;
    *(undefined8 *)(lVar18 + _DAT_112ec0228) = uVar28;
    func_0x000107c61604(lVar18 + lVar5,lVar4);
    *(undefined4 *)(lVar18 + _DAT_112ec0238) = uVar1;
    *(undefined8 *)(lVar18 + _DAT_112ec0240) = uVar23;
    *(undefined8 *)(lVar18 + _DAT_112ec0248) = uVar24;
    *(undefined8 *)(lVar18 + _DAT_112ec0250) = param_9;
    *(undefined8 *)(lVar18 + _DAT_112ec0258) = param_11;
    *(undefined8 *)(lVar18 + _DAT_112ec0260) = param_10;
    puVar8 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_98 = lVar18;
    lStack_90 = lVar17;
    func_0x000107c615f0(uVar28);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(uVar11);
    func_0x000107c6157c(uVar12);
    func_0x000107c6157c(uVar13);
    func_0x000107c6157c(lVar14);
    func_0x000107c6157c(uVar15);
    func_0x000107c6157c(uVar16);
    plVar20 = &lStack_98;
    func_0x000107c61154(plVar20,puVar8,0,0);
    puVar8 = &UNK_11054eb60;
    puVar21 = puVar8;
    func_0x000107c613fc(&UNK_11054eb60,0x18,7);
    func_0x000107c61614(puVar21 + 0x10,plVar20);
    pcVar27 = *(code **)(*(long *)pcVar3 + 0x60);
    func_0x000107c61174();
    func_0x000107c61174();
    pcVar26 = FUN_1027c5f8c;
    puVar22 = puVar21;
    (*pcVar27)(FUN_1027c5f8c);
    func_0x000107c61574(puVar21);
    func_0x000107c614f0(pcVar26);
    lVar5 = _DAT_112ec0268;
    uVar6 = *(undefined8 *)((long)plVar20 + _DAT_112ec0268);
    pcVar27 = *(code **)(puVar22 + 0x10);
    func_0x000107c6157c(uVar6);
    (*pcVar27)();
    func_0x000107c615e8(pcVar26);
    func_0x000107c61574(uVar6);
    plVar25 = *(long **)((long)plVar20 + _DAT_112ec01d8);
    func_0x000107c613fc(&UNK_11054eb60,0x18,7);
    func_0x000107c61614(puVar8 + 0x10,plVar20);
    func_0x000107c6157c(plVar25);
    func_0x000107c61170(plVar20);
    uVar6 = 0x1027c5f94;
    puVar21 = puVar8;
    (**(code **)(*plVar25 + 0x60))();
    func_0x000107c61574(plVar25);
    func_0x000107c61574(puVar8);
    func_0x000107c614f0(uVar6);
    uVar9 = *(undefined8 *)((long)plVar20 + lVar5);
    pcVar26 = *(code **)(puVar21 + 0x10);
    func_0x000107c6157c(uVar9);
    (*pcVar26)();
    func_0x000107c61170(plVar20);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(uVar11);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(lVar14);
    func_0x000107c61574(uVar15);
    func_0x000107c61574(uVar16);
    func_0x000107c615e8(uVar28);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_10);
    func_0x000107c61574(pcVar3);
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(uVar9);
    func_0x000107c3e2c0(*(undefined8 *)(param_1 + _DAT_113073660));
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c615e8(auStack_80[0]);
    func_0x000107c61574(pcVar3);
    func_0x000107c61170(plVar20);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1027c5470);
  (*pcVar3)();
}



/* Entry: 1027c5d54; end: 1027c5e87;  */

void FUN_1027c5d54(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined1 uStack_31;
  
  if (param_2 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_31 = 0;
    func_0x000100854cb0(&uStack_31);
  }
  else {
    lVar3 = *param_1;
    lVar2 = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c40674();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar2);
    }
    lVar2 = param_2;
    func_0x000107c42fb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c5e88);
      (*pcVar1)();
    }
    func_0x0001000285a8(0x112ec01d0,&UNK_10daddbc0);
    lVar3 = lVar2;
    func_0x0001000b637c(lVar2);
    func_0x000107c61170(lVar2);
    pcVar1 = FUN_1027c5e90;
    func_0x0001000bfde0(FUN_1027c5e90,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar3);
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c615e8(param_2);
    func_0x000107c61574(pcVar1);
  }
  return;
}



/* Entry: 1027c5e88; end: 1027c5e8f;  */

void FUN_1027c5e88(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 uStack_31;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_31 = 0;
    func_0x000100854cb0(&uStack_31);
  }
  else {
    lVar4 = *param_1;
    lVar2 = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000107c40674();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar2);
    }
    lVar2 = lVar3;
    func_0x000107c42fb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c5e88);
      (*pcVar1)();
    }
    func_0x0001000285a8(0x112ec01d0,&UNK_10daddbc0);
    lVar4 = lVar2;
    func_0x0001000b637c(lVar2);
    func_0x000107c61170(lVar2);
    pcVar1 = FUN_1027c5e90;
    func_0x0001000bfde0(FUN_1027c5e90,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar4);
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(pcVar1);
  }
  return;
}



/* Entry: 1027c5e90; end: 1027c5eff;  */

void FUN_1027c5e90(undefined1 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 uVar4;
  
  lVar1 = *param_2;
  func_0x000107c4065c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c49b6c();
    lVar3 = lVar1;
    func_0x000107c406dc(lVar1);
    func_0x0001070b0708(lVar2,lVar3);
    uVar4 = (undefined1)lVar2;
    func_0x000107c61170(lVar1);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1027c5f00; end: 1027c5f53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027c5f00(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113073660),param_2,0);
  return 0;
}



/* Entry: 1027c5f54; end: 1027c5f57;  */

void FUN_1027c5f54(void)

{
  return;
}



/* Entry: 1027c5f58; end: 1027c5f8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027c5f58(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  func_0x000107c41864(*(undefined8 *)(*(long *)(*unaff_x20 + 0x10) + _DAT_113073660),param_2,0);
  return 0;
}



/* Entry: 1027c5f8c; end: 1027c5f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c5f8c(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112ec0288) = uVar1;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ec0278);
    if (lVar3 != 0) {
      func_0x000107c61174(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c55628(lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1027c5f9c; end: 1027c5fbb;  */

void FUN_1027c5f9c(void)

{
  func_0x000107c61168(&PTR_PTR_112ec0160);
  return;
}



/* Entry: 1027c5fbc; end: 1027c5fe3;  */

void FUN_1027c5fbc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11054ebc8;
  if (lRam0000000112ec01c0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112ec01c0 = param_1;
  }
  return;
}



/* Entry: 1027c5fe4; end: 1027c6027;  */

void FUN_1027c5fe4(long param_1,long *param_2,long param_3)

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



/* Entry: 1027c6028; end: 1027c6033;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c6028(undefined1 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112ec0288) = uVar1;
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ec0278);
    if (lVar3 != 0) {
      func_0x000107c61174(lVar3);
      func_0x000107c61170(lVar2);
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c55628(lVar3);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1027c6034; end: 1027c61ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c6034(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + _DAT_112ec0288) = uVar1;
    func_0x000107c61170();
  }
  func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112ec0278);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(param_2);
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c55628(lVar2);
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1027c61ac; end: 1027c61d3; -[_TtC30ChatReactionMenuImplementation30ChatReactionMenuViewController initWithCoder:] */

void FUN_1027c61ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1027c857c();
  return;
}



/* Entry: 1027c61d4; end: 1027c671b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c61d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar7 = &puStack_a0;
  ppuVar8 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  puVar2 = PTR_PTR_1126ab018;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c59a2c();
  func_0x0001000d224c(&puStack_a0);
  puVar3 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
LAB_1027c627c:
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puStack_a0;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar14 == (undefined *)0x0) goto LAB_1027c627c;
    func_0x000107c5fb14(puVar14);
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c52ae0(puVar2);
  func_0x000107c61170(puVar14);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55628(puVar2);
  func_0x000107c61170(puVar3);
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ec0278);
  *(undefined **)(unaff_x20 + _DAT_112ec0278) = puVar2;
  func_0x000107c61174(puVar2);
  func_0x000107c61174();
  func_0x000107c61170(uVar15);
  func_0x0001000d224c(&puStack_a0);
  puVar3 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    func_0x000107c5a568();
  }
  else {
    puVar4 = puStack_a0;
    func_0x000107c509b4();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61170(puVar2);
      puVar14 = PTR__OBJC_CLASS___UIView_1126aec20;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
      func_0x000107c453e4();
      func_0x000107c5a568();
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(puVar3);
      goto LAB_1027c66f0;
    }
    puVar5 = PTR_PTR_1126ab020;
    func_0x000107c610f8(PTR_PTR_1126ab020);
    func_0x000107c453e4();
    func_0x0001000d224c(&puStack_a0);
    puVar14 = puStack_a0;
    func_0x000107c52704(puVar5);
    func_0x000107c615e8(puVar14);
    FUN_1027c671c();
    func_0x000107c58e08(puVar5);
    func_0x000107c61170(puVar14);
    func_0x0001000d224c(&puStack_a0);
    func_0x000107c57b50(puVar5);
    func_0x000107c615e8(puStack_a0);
    puVar14 = &UNK_11054ec10;
    puVar6 = puVar14;
    func_0x000107c613fc(&UNK_11054ec10,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1027c806c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_11054ec28;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c56d58(puVar5);
    func_0x000107c60bd0(ppuVar7);
    puVar6 = puVar14;
    func_0x000107c613fc(&UNK_11054ec10,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    pcStack_80 = FUN_1027c8090;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x10252755c;
    puStack_88 = &UNK_11054ec50;
    puStack_78 = puVar6;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c56e20(puVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c613fc(&UNK_11054ec10,0x18,7);
    func_0x000107c61614(puVar14 + 0x10);
    pcStack_80 = (code *)0x1027c80ac;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = (undefined *)0x10252755c;
    puStack_88 = &UNK_11054ec78;
    puStack_78 = puVar14;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    func_0x000107c56e1c(puVar5);
    func_0x000107c60bd0(ppuVar9);
    lVar10 = *(long *)(unaff_x20 + _DAT_112ec0250);
    func_0x000107c5c360();
    func_0x000107c61180();
    lVar11 = lVar10;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar10);
    if (lVar11 != 0) {
      func_0x0001000285a8(0x112ea3e48,&UNK_10daddbf0);
      lVar10 = lVar11;
      func_0x000107c5d6fc(lVar11);
      func_0x000107c61180();
      lVar12 = lVar10;
      func_0x0001000b637c();
      func_0x000107c61170(lVar10);
      uVar13 = 0;
      FUN_1027c8514(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      uVar15 = 0x1027c873c;
      func_0x0001000bfde0(0x1027c873c,0,uVar13);
      func_0x000107c61574(lVar12);
      func_0x0001004575f0();
      func_0x000107c61574(uVar15);
      lVar10 = lVar12;
      func_0x000107c5cb24(lVar12);
      func_0x000107c61180();
      func_0x000107c61170(lVar12);
      func_0x000107c594b0(puVar5);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(lVar10);
    }
    puVar14 = PTR_PTR_1126ab028;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(puVar2);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112ec0270);
    *(undefined **)(unaff_x20 + _DAT_112ec0270) = puVar14;
    func_0x000107c61174(puVar14);
    func_0x000107c61170(uVar15);
    func_0x000107c5a568();
    func_0x000107c61170(puVar2);
    func_0x000107c615e8(puVar3);
    func_0x000107c615e8(puVar4);
    puVar2 = puVar5;
  }
  func_0x000107c61170(puVar2);
LAB_1027c66f0:
  func_0x000107c61170(puVar14);
  return;
}



/* Entry: 1027c671c; end: 1027c691b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1027c671c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_48;
  
  func_0x0001000d224c(&puStack_48);
  puVar1 = puStack_48;
  if (puStack_48 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x112ec02b8;
    func_0x0001027c81c0(0x112ec02b8,0x112ec02c0,&PTR_PTR_1126cb350);
    func_0x0001000c2068();
    puVar2 = &UNK_11054eda0;
    func_0x000107c613fc(&UNK_11054eda0,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puStack_48;
    uVar3 = 0;
    FUN_1027c8514(0,0x112ec02c8,&PTR_PTR_1126cba68);
    func_0x000107c615f0(puStack_48);
    pcVar4 = FUN_1027c8128;
    func_0x000100775358(FUN_1027c8128,puVar2,uVar3);
    func_0x000107c61574(uVar6);
    func_0x000107c61574(puVar2);
    puVar2 = &UNK_11054ec10;
    func_0x000107c613fc(&UNK_11054ec10,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    uVar6 = 0x112ec02d0;
    func_0x0001000285a8(0x112ec02d0,&UNK_10daddbf8);
    uVar3 = 0x1027c8130;
    func_0x0001000bfde0(0x1027c8130,puVar2,uVar6);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(puVar2);
    puStack_48 = PTR___swiftEmptyArrayStorage_11034f1c8;
    ppuVar5 = &puStack_48;
    func_0x0001006c71a4(ppuVar5);
    func_0x000107c61574(uVar3);
    func_0x0001027c8138();
    func_0x0001000c2068();
    func_0x000107c61574(ppuVar5);
    uVar6 = 0;
    FUN_1027c8514(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    pcVar4 = FUN_1027c7c28;
    func_0x0001000bfde0(FUN_1027c7c28,0,uVar6);
    func_0x000107c61574(uVar3);
    func_0x0001004575f0();
    func_0x000107c61574(pcVar4);
    uVar6 = uVar3;
    func_0x000107c5cb24(uVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(puVar1);
  }
  return uVar6;
}



/* Entry: 1027c691c; end: 1027c69d3;  */

void FUN_1027c691c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar2 = "loadView()";
  func_0x0001000c10c0("loadView()");
  func_0x000107c61180();
  pcStack_40 = FUN_1027c80cc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11054ecf0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar2,param_2,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 1027c69d4; end: 1027c6f9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c69d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  plVar11 = &lStack_b0;
  func_0x0001000d224c(&puStack_a0);
  puVar1 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) {
    return;
  }
  puVar2 = PTR_PTR_1126aaa10;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&puStack_a0);
  puVar3 = puStack_a0;
  if (puStack_a0 != (undefined *)0x0) {
    puVar14 = puStack_a0;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    if (puVar14 != (undefined *)0x0) {
      func_0x000107c5fb14(puVar14);
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      goto LAB_1027c6a8c;
    }
  }
  puVar14 = (undefined *)0x0;
LAB_1027c6a8c:
  func_0x000107c52ae0(puVar2);
  func_0x000107c61170(puVar14);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55628(puVar2);
  func_0x000107c61170(puVar3);
  puVar4 = PTR_PTR_1126b0d28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c51c60();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c57698(puVar2);
  func_0x000107c61170(puVar3);
  puVar5 = PTR_PTR_1126aaa18;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&puStack_a0);
  puVar3 = puStack_a0;
  func_0x000107c52704(puVar5);
  func_0x000107c615e8(puVar3);
  FUN_1027c671c();
  func_0x000107c58e08(puVar5);
  func_0x000107c61170(puVar3);
  func_0x0001000d224c(&puStack_a0);
  func_0x000107c57b50(puVar5);
  func_0x000107c615e8(puStack_a0);
  puVar3 = &UNK_11054ec10;
  puVar6 = puVar3;
  func_0x000107c613fc(&UNK_11054ec10,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x1027c80ec;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10252755c;
  puStack_88 = &UNK_11054ed18;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c56e20(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c613fc(&UNK_11054ec10,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_80 = 0x1027c8740;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  puStack_90 = (undefined *)0x10252755c;
  puStack_88 = &UNK_11054ed40;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c56e1c(puVar5);
  func_0x000107c60bd0(ppuVar7);
  lVar8 = *(long *)(unaff_x20 + _DAT_112ec0250);
  func_0x000107c5c360();
  func_0x000107c61180();
  lVar12 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar12 != 0) {
    func_0x0001000285a8(0x112ea3e48,&UNK_10daddbf0);
    lVar8 = lVar12;
    func_0x000107c5d6fc(lVar12);
    func_0x000107c61180();
    lVar9 = lVar8;
    func_0x0001000b637c();
    func_0x000107c61170(lVar8);
    uVar10 = 0;
    FUN_1027c8514(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar13 = 0x1027c8738;
    func_0x0001000bfde0(0x1027c8738,0,uVar10);
    func_0x000107c61574(lVar9);
    func_0x0001004575f0();
    func_0x000107c61574(uVar13);
    lVar8 = lVar9;
    func_0x000107c5cb24(lVar9);
    func_0x000107c61180();
    func_0x000107c61170(lVar9);
    func_0x000107c594b0(puVar5);
    func_0x000107c61170(lVar12);
    func_0x000107c61170(lVar8);
  }
  puVar3 = &UNK_11054ec10;
  func_0x000107c613fc(&UNK_11054ec10,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  uStack_80 = 0x1027c8108;
  puStack_a0 = puVar14;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11054ed68;
  ppuVar7 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_78);
  func_0x000107c56fcc(puVar5);
  func_0x000107c60bd0(ppuVar7);
  func_0x0001000d224c(&puStack_a0);
  puVar3 = puStack_a0;
  func_0x000107c57b54(puVar5);
  func_0x000107c615e8(puVar3);
  lVar8 = 0;
  FUN_1027c8be8();
  lVar12 = lVar8;
  func_0x000107c610f8();
  *(undefined **)(lVar12 + _DAT_112ec0300) = puVar2;
  *(undefined **)(lVar12 + _DAT_112ec0308) = puVar5;
  *(undefined **)(lVar12 + _DAT_112ec0310) = puVar1;
  puVar3 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_b0 = lVar12;
  lStack_a8 = lVar8;
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar5);
  func_0x000107c615f0(puVar1);
  func_0x000107c61154(&lStack_b0,puVar3,0,0);
  puVar3 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e88();
  lVar12 = _DAT_112ec0280;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112ec0280);
  *(undefined **)(unaff_x20 + _DAT_112ec0280) = puVar3;
  func_0x000107c61170(uVar13);
  if (((*(long *)(unaff_x20 + lVar12) != 0) &&
      (func_0x000107c5a070(), *(long *)(unaff_x20 + lVar12) != 0)) &&
     (func_0x000107c52684(), *(long *)(unaff_x20 + lVar12) != 0)) {
    func_0x000107c5921c();
    lVar12 = *(long *)(unaff_x20 + lVar12);
    if (lVar12 != 0) {
      func_0x000107c61174();
      func_0x000107c4ef3c(0x3fe3333333333333);
      func_0x000107c61170(lVar12);
    }
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(plVar11);
  func_0x000107c615e8(puVar1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1027c6f9c; end: 1027c75e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c6f9c(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char **ppcVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = _DAT_112ec01e0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ec01e0);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(&pcStack_90);
  func_0x000107c61574(uVar7);
  pcVar9 = pcStack_90;
  if (pcStack_90 == (char *)0x0) {
    pcVar9 = (char *)0x0;
    lVar8 = 0;
    lVar2 = param_2;
  }
  else {
    pcVar11 = pcStack_90;
    func_0x000107c40674(pcStack_90);
    func_0x000107c61180();
    func_0x000107c61170(pcVar9);
    pcVar9 = pcVar11;
    func_0x000107c5faec(pcVar11);
    lVar2 = param_2;
    func_0x000107c61170(pcVar11);
    lVar8 = param_2;
  }
  uVar7 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x000107c6157c(uVar7);
  func_0x0001000c74f0(&pcStack_90);
  func_0x000107c61574(uVar7);
  pcVar11 = pcStack_90;
  if (pcStack_90 == (char *)0x0) {
    pcVar11 = (char *)0x0;
    lVar10 = 0;
    lVar6 = lVar2;
  }
  else {
    pcVar1 = pcStack_90;
    func_0x000107c4cdc4(pcStack_90);
    func_0x000107c61180();
    func_0x000107c61170(pcVar11);
    pcVar11 = pcVar1;
    func_0x000107c5faec(pcVar1);
    lVar6 = lVar2;
    func_0x000107c61170(pcVar1);
    lVar10 = lVar2;
  }
  func_0x0001000d224c(&pcStack_90);
  pcVar1 = pcStack_90;
  if (lVar8 == 0) {
    func_0x000107c615e8(pcStack_90);
LAB_1027c7148:
    func_0x000107c6142c(lVar10);
  }
  else {
    if (lVar10 == 0) {
      func_0x000107c6142c(lVar8);
    }
    else {
      if (pcStack_90 == (char *)0x0) {
        func_0x000107c6142c(lVar8);
        goto LAB_1027c7148;
      }
      func_0x000107c615f0(pcStack_90);
      lVar2 = param_1;
      func_0x000107c3ea08(param_1);
      func_0x000107c61180();
      func_0x000107c424f8();
      func_0x000107c61180();
      if (param_1 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
        func_0x000107c5fadc(lVar12,lVar6);
        func_0x000107c6142c(lVar6);
      }
      puVar3 = PTR_PTR_1126b6070;
      func_0x000107c610f8(PTR_PTR_1126b6070);
      func_0x000107c46ed8();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar12);
      func_0x000107c5fadc(pcVar9,lVar8);
      func_0x000107c6142c(lVar8);
      func_0x000107c5fadc(pcVar11,lVar10);
      func_0x000107c6142c(lVar10);
      func_0x000107c4f92c(pcStack_90);
      func_0x000107c61170(pcVar9);
      func_0x000107c61170(pcVar11);
      pcVar9 = "handleReactionEvent()";
      func_0x0001000c10c0("handleReactionEvent()");
      func_0x000107c61180();
      puVar4 = &UNK_11054ec10;
      func_0x000107c613fc(&UNK_11054ec10,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uStack_70 = 0x1027c8744;
      pcStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11054ecc8;
      ppcVar5 = &pcStack_90;
      puStack_68 = puVar4;
      func_0x000107c60bc4(ppcVar5);
      func_0x000107c61574(puStack_68);
      func_0x000107c4e524(pcVar9);
      func_0x000107c60bd0(ppcVar5);
      func_0x000107c615ec(pcVar1,2);
      func_0x000107c61170(puVar3);
      pcVar1 = pcVar9;
    }
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1027c75e8; end: 1027c760f; -[_TtC30ChatReactionMenuImplementation30ChatReactionMenuViewController loadView] */

void FUN_1027c75e8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1027c61d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027c7610; end: 1027c767f;  */

void FUN_1027c7610(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1027c6f9c(param_1,param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1027c7680; end: 1027c7773;  */

void FUN_1027c7680(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x0001027c72d0(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1027c7774; end: 1027c7a1b;  */

/* WARNING: Possible PIC construction at 0x0001027c7834: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c7838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c7774(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ec0248);
  uVar2 = 0;
  func_0x00010439c014(0);
  func_0x000107c610f8();
  func_0x00010439b9d8(uVar2,0x17,0,0,uVar3,0,0,0x39,0);
  func_0x000107c3eda8(*(undefined8 *)(unaff_x20 + _DAT_112ec0260));
  func_0x000107c61180();
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ec0258));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1027c7a1c; end: 1027c7b47;  */

void FUN_1027c7a1c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  uVar4 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_3 != 0) {
    puVar1 = &UNK_11054edc8;
    func_0x000107c613fc(&UNK_11054edc8,0x20,7);
    *(undefined8 **)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = param_3;
    puVar2 = &UNK_11054edf0;
    func_0x000107c613fc(&UNK_11054edf0,0x20,7);
    *(code **)(puVar2 + 0x10) = FUN_1027c8554;
    *(undefined **)(puVar2 + 0x18) = puVar1;
    pcStack_68 = FUN_1027c855c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    uStack_78 = 0x1027c7bf0;
    puStack_70 = &UNK_11054ee08;
    ppuVar3 = &puStack_88;
    puStack_60 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_60;
    func_0x000107c61174(param_3);
    func_0x000107c61574(puVar2);
    func_0x000107c4c78c(uVar4);
    func_0x000107c61170(param_3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 1027c7b48; end: 1027c7c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c7b48(undefined *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112ec01e8);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_3 + _DAT_112ec01e8))[1]);
  func_0x000107c4f974();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    uVar1 = 0;
    FUN_1027c8514(0,0x112ec02e8,&PTR_PTR_1126dab98);
    puVar2 = param_1;
    func_0x000107c5fc54(param_1,uVar1);
    func_0x000107c61170(param_1);
  }
  uVar1 = *param_2;
  *param_2 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1027c7c28; end: 1027c7e1b;  */

void FUN_1027c7c28(undefined8 *param_1,ulong *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar8 = *param_2;
  if (uVar8 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar8 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar8) {
      uVar9 = uVar8;
    }
    func_0x000107c60480();
  }
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar9 != 0) {
    FUN_1027c8200(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c7e1c);
      (*pcVar2)();
    }
    uVar10 = 0;
    do {
      if ((uVar8 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar8 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar3);
      }
      else {
        uVar3 = uVar10;
        FUN_1027c8350(uVar10,uVar8);
      }
      puVar4 = PTR_PTR_1126ab030;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar5 = uVar3;
      func_0x000107c4f940(uVar3);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c49834();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c52d28(puVar4);
      func_0x000107c61170(uVar6);
      uVar5 = uVar3;
      func_0x000107c4f940(uVar3);
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c424f8();
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x000107c5446c(puVar4);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar6);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_1027c8200(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      uVar10 = uVar10 + 1;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined **)(puVar1 + uVar3 * 8 + 0x20) = puVar4;
    } while (uVar9 != uVar10);
  }
  uVar7 = 0;
  FUN_1027c8514(0,0x112ec02f0,&PTR_PTR_1126ab030);
  puVar4 = puVar1;
  func_0x000107c5fc48(puVar1,uVar7);
  func_0x000107c6142c(puVar1);
  *param_1 = puVar4;
  return;
}



/* Entry: 1027c7e1c; end: 1027c7e7b; -[_TtC30ChatReactionMenuImplementation30ChatReactionMenuViewController initWithNibName:bundle:] */

void FUN_1027c7e1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ChatReactionMenuImplementation.ChatReactionMenuViewController",0x3d,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c7e48);
  (*pcVar1)();
}



/* Entry: 1027c7e7c; end: 1027c7fc7; -[_TtC30ChatReactionMenuImplementation30ChatReactionMenuViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027c7f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c7f7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c7f9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c7f80) */
/* WARNING: Removing unreachable block (ram,0x0001027c7f60) */
/* WARNING: Removing unreachable block (ram,0x0001027c7fa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c7e7c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec01d8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec01e0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec01e8 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec01f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec01f8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec0200));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec0208));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec0210));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec0218));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec0220));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ec0228));
  FUN_1027c8688(param_1 + _DAT_112ec0230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec0250));
  return;
}



/* Entry: 1027c7fc8; end: 1027c7fe7;  */

void FUN_1027c7fc8(void)

{
  func_0x000107c61168(&PTR_PTR_112863298);
  return;
}



/* Entry: 1027c7fe8; end: 1027c806b; -[_TtC30ChatReactionMenuImplementation30ChatReactionMenuViewController plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001027c8024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001027c8040: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027c8028) */
/* WARNING: Removing unreachable block (ram,0x0001027c8044) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c7fe8(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1027c806c; end: 1027c808f;  */

void FUN_1027c806c(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar2 = &puStack_60;
  pcVar1 = "loadView()";
  func_0x0001000c10c0("loadView()");
  func_0x000107c61180();
  pcStack_40 = FUN_1027c80cc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11054ecf0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(pcVar1,param_2,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1027c8090; end: 1027c80c3;  */

void FUN_1027c8090(void)

{
  FUN_1027c7610();
  return;
}



/* Entry: 1027c80c4; end: 1027c80cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027c80c4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112ec0280);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c42018(lVar2);
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112ec0230;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c41c6c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 1027c80cc; end: 1027c8127;  */

void FUN_1027c80cc(void)

{
  func_0x0001027c771c();
  return;
}



/* Entry: 1027c8128; end: 1027c8137;  */

long FUN_1027c8128(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *param_1;
  lVar2 = lVar6;
  lVar3 = lVar5;
  func_0x000107c4cdc4();
  func_0x000107c61180();
  lVar4 = lVar3;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    lVar4 = lVar3;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c40674();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c42fb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar6);
  if (lVar5 != 0) {
    func_0x0001000285a8(0x112ec02f8,&UNK_10daddc00);
    lVar2 = lVar5;
    func_0x0001000b637c(lVar5);
    func_0x000107c61170(lVar5);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027c7a1c);
  (*pcVar1)();
}



/* Entry: 1027c8138; end: 1027c81ff;  */

void FUN_1027c8138(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112ec02d8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec02d0;
  func_0x00010002969c(0x112ec02d0,&UNK_10daddbf8);
  uVar2 = 0x112ec02e0;
  func_0x0001027c81c0(0x112ec02e0,0x112ec02e8,&PTR_PTR_1126dab98);
  puVar3 = PTR___sSayxGSQsSQRzlMc_11034dd00;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSQsSQRzlMc_11034dd00,uVar1,&uStack_28);
  puRam0000000112ec02d8 = puVar3;
  return;
}



/* Entry: 1027c8200; end: 1027c821b;  */

void FUN_1027c8200(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1027c821c();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1027c821c; end: 1027c834f;  */

undefined * FUN_1027c821c(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027c8350);
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
    FUN_1027c8c08();
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
    uVar5 = 0;
    FUN_1027c8514(0,0x112ec02f0,&PTR_PTR_1126ab030);
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


