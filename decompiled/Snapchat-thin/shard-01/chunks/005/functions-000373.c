/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1011c57b4; end: 1011c580f;  */

void FUN_1011c57b4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1011c5810(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1011c5810; end: 1011c5997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c5810(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar1 = _DAT_112d650f0;
  func_0x000107c61428(unaff_x20 + _DAT_112d650f0,auStack_68,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c5d184();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = param_1;
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar5 = *(long *)(unaff_x20 + _DAT_112d650f8);
      lVar3 = lVar5;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000104392b2c();
        lVar4 = lVar1;
        func_0x00010439292c(lVar1,lVar3);
        uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d65100);
        func_0x000107c40674();
        func_0x000107c61180();
        if (param_1 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar3);
        }
        func_0x000107c3ed48(uVar6);
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c42c1c(lVar5);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(uVar6);
        return;
      }
      func_0x000107c61170();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1011c5998; end: 1011c5b63; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011c5998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001000b637c(param_3);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_11038fb60;
  func_0x000107c613fc(&UNK_11038fb60,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  uVar4 = 0;
  FUN_1011c5e8c(0,0x112d3bed0,&PTR_PTR_1126a5e70);
  func_0x000107c61174(param_1);
  uVar1 = 0x1011c5f48;
  func_0x0001000d5158(0x1011c5f48,puVar3,uVar4);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1011c5b64; end: 1011c5bc3; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin init] */

void FUN_1011c5b64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SetWallpaperChatActionMenuPlugin.SetWallpaperChatActionMenuPlugin",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c5b90);
  (*pcVar1)();
}



/* Entry: 1011c5bc4; end: 1011c5c1b; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011c5bc4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d650f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d65100));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d65108));
  param_1 = param_1 + _DAT_112d650f0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011c5c1c; end: 1011c5c9f; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001011c5c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c5c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c5c5c) */
/* WARNING: Removing unreachable block (ram,0x0001011c5c78) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c5c1c(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1011c5ca0; end: 1011c5ca3; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin willDisplayChatCustomizationHubScope:] */

void FUN_1011c5ca0(void)

{
  return;
}



/* Entry: 1011c5ca4; end: 1011c5d27; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin didDismissChatCustomizationHubScope:] */

/* WARNING: Possible PIC construction at 0x0001011c5ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c5cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c5ce4) */
/* WARNING: Removing unreachable block (ram,0x0001011c5d00) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c5ca4(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1011c5d28; end: 1011c5d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c5d28(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_1130733f8),PTR_s_detachUI__1125b96b8
             ,0);
  return;
}



/* Entry: 1011c5d60; end: 1011c5e63; -[_TtC32SetWallpaperChatActionMenuPlugin32SetWallpaperChatActionMenuPlugin didRequestDismissal:] */

void FUN_1011c5d60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  pcVar1 = "didRequestDismissal(_:)";
  func_0x0001000c10c0("didRequestDismissal(_:)");
  func_0x000107c61180();
  puVar2 = &UNK_11038fb10;
  func_0x000107c613fc(&UNK_11038fb10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  uStack_50 = 0x1011c5f5c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038fb28;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1011c5e64; end: 1011c5e83;  */

void FUN_1011c5e64(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6a08);
  return;
}



/* Entry: 1011c5e84; end: 1011c5e8b;  */

void FUN_1011c5e84(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1011c5810(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1011c5e8c; end: 1011c5ecb;  */

void FUN_1011c5e8c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1011c5ecc; end: 1011c5ed3;  */

void FUN_1011c5ecc(undefined **param_1,undefined **param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long unaff_x20;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  pbVar2 = *(byte **)(unaff_x20 + 0x18);
  ppuVar4 = param_1;
  func_0x000107c5fadc();
  ppuVar5 = ppuVar4;
  FUN_100bec1f0();
  func_0x000107c61170(ppuVar4);
  *puVar1 = param_3;
  ppuVar4 = &PTR____CFConstantStringClassReference_110e12b38;
  func_0x000107c5faec();
  if (param_1 == ppuVar4 && param_2 == ppuVar5) {
    bVar3 = 1;
  }
  else {
    func_0x000107c605b8(param_1,param_2,ppuVar4,ppuVar5,0);
    bVar3 = (byte)param_1;
  }
  func_0x000107c6142c(ppuVar5);
  *pbVar2 = bVar3 & 1;
  return;
}



/* Entry: 1011c5ed4; end: 1011c5f37;  */

void FUN_1011c5ed4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1011c5f38; end: 1011c5f5f;  */

void FUN_1011c5f38(long param_1,long param_2)

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



/* Entry: 1011c5f60; end: 1011c6093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011c5f60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_4;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_1011c5e64();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112d650f0,0);
  *(undefined8 *)(lVar3 + _DAT_112d650f8) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112d65100) = param_3;
  *(undefined8 *)(lVar3 + _DAT_112d65108) = uVar1;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar4);
  return unaff_x20;
}



/* Entry: 1011c6094; end: 1011c60af;  */

void FUN_1011c6094(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011c60b0; end: 1011c60cf;  */

void FUN_1011c60b0(void)

{
  func_0x000107c61168(&PTR_PTR_112d65178);
  return;
}



/* Entry: 1011c60d0; end: 1011c60db; -[SCSetWallpaperChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c60d0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d651d0;
  func_0x000107c61428(param_1 + _DAT_112d651d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c60dc; end: 1011c60e7; -[SCSetWallpaperChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c60dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d651d0;
  func_0x000107c61428(param_1 + _DAT_112d651d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c60e8; end: 1011c60f3; -[SCSetWallpaperChatActionMenuPluginEntryPoint chatCustomizationHubScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c60e8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d651d8;
  func_0x000107c61428(param_1 + _DAT_112d651d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c60f4; end: 1011c60ff; -[SCSetWallpaperChatActionMenuPluginEntryPoint setChatCustomizationHubScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c60f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d651d8;
  func_0x000107c61428(param_1 + _DAT_112d651d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c6100; end: 1011c610b; -[SCSetWallpaperChatActionMenuPluginEntryPoint messagingExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6100(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d651e0;
  func_0x000107c61428(param_1 + _DAT_112d651e0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c610c; end: 1011c614f;  */

void FUN_1011c610c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011c6150; end: 1011c615b; -[SCSetWallpaperChatActionMenuPluginEntryPoint setMessagingExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6150(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d651e0;
  func_0x000107c61428(param_1 + _DAT_112d651e0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c615c; end: 1011c61af;  */

void FUN_1011c615c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c61b0; end: 1011c61f7; -[SCSetWallpaperChatActionMenuPluginEntryPoint chatCustomizationHubScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c61b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d651e8;
  func_0x000107c61428(param_1 + _DAT_112d651e8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011c61f8; end: 1011c625b; -[SCSetWallpaperChatActionMenuPluginEntryPoint setChatCustomizationHubScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c61f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d651e8;
  func_0x000107c61428(param_1 + _DAT_112d651e8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011c625c; end: 1011c6447;  */

/* WARNING: Possible PIC construction at 0x0001011c63a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c63b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c63c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c6418: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c6408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c641c) */
/* WARNING: Removing unreachable block (ram,0x0001011c63c8) */
/* WARNING: Removing unreachable block (ram,0x0001011c63b8) */
/* WARNING: Removing unreachable block (ram,0x0001011c63a8) */
/* WARNING: Removing unreachable block (ram,0x0001011c640c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c625c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f85c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f868();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c4cdfc();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1011c60b0(0);
        func_0x000107c613fc();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c4cdb8();
        func_0x000107c61180();
        lVar4 = 0;
        FUN_1011c5e64();
        lVar5 = lVar4;
        func_0x000107c610f8();
        func_0x000107c61614(lVar5 + _DAT_112d650f0,0);
        *(long *)(lVar5 + _DAT_112d650f8) = lVar2;
        *(long *)(lVar5 + _DAT_112d65100) = lVar3;
        *(long *)(lVar5 + _DAT_112d65108) = unaff_x20;
        lStack_70 = lVar5;
        lStack_68 = lVar4;
        func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
        func_0x000107c4fba8(*(undefined8 *)(lVar1 + _DAT_112f14b58));
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1011c6448; end: 1011c646f; -[SCSetWallpaperChatActionMenuPluginEntryPoint begin] */

void FUN_1011c6448(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011c625c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011c6470; end: 1011c64b3; -[SCSetWallpaperChatActionMenuPluginEntryPoint end] */

void FUN_1011c6470(undefined8 param_1)

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



/* Entry: 1011c64b4; end: 1011c6723;  */

void FUN_1011c64b4(long param_1,long param_2,long param_3)

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
    uVar2 = 0xd000000000000021;
    if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef10d4300)) ||
       (func_0x000107c605b8(0xd000000000000021,0x800000010ef2bd00,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53368();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d6a90)) {
        uVar2 = 0xd00000000000001b;
        func_0x000107c605b8(0xd00000000000001b,0x800000010ef29570,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10d42d0)) &&
             (func_0x000107c605b8(0xd000000000000020,0x800000010ef2bd30,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "SetWallpaperChatActionMenuPlugin/SCSetWallpaperChatActionMenuPluginEntryPoint.swift"
                                ,0x53,2,0x2f,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c6724);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c5335c();
          goto LAB_1011c6540;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5666c();
    }
  }
LAB_1011c6540:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011c6724; end: 1011c67cf; -[SCSetWallpaperChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011c6724(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011c64b4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011c67d0; end: 1011c6863; -[SCSetWallpaperChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c67d0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d651d0,0);
  func_0x000107c61614(param_1 + _DAT_112d651d8,0);
  func_0x000107c61614(param_1 + _DAT_112d651e0,0);
  *(undefined8 *)(param_1 + _DAT_112d651e8) = 0;
  *(undefined8 *)(param_1 + _DAT_112d651f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c6864; end: 1011c6897;  */

void FUN_1011c6864(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011c6898; end: 1011c68ff; -[SCSetWallpaperChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6898(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d651d0);
  func_0x000107c61610(param_1 + _DAT_112d651d8);
  func_0x000107c61610(param_1 + _DAT_112d651e0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d651e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d651f0));
  return;
}



/* Entry: 1011c6900; end: 1011c691f;  */

void FUN_1011c6900(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6ae0);
  return;
}



/* Entry: 1011c6920; end: 1011c692b; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin presentationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6920(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65220;
  func_0x000107c61428(param_1 + _DAT_112d65220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c692c; end: 1011c6937; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin setPresentationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c692c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65220;
  func_0x000107c61428(param_1 + _DAT_112d65220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c6938; end: 1011c6943; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6938(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65228;
  func_0x000107c61428(param_1 + _DAT_112d65228,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c6944; end: 1011c694f; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6944(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65228;
  func_0x000107c61428(param_1 + _DAT_112d65228,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c6950; end: 1011c695b; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin renderingContextProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6950(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65230;
  func_0x000107c61428(param_1 + _DAT_112d65230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c695c; end: 1011c699f;  */

void FUN_1011c695c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1011c69a0; end: 1011c69ab; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin setRenderingContextProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c69a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65230;
  func_0x000107c61428(param_1 + _DAT_112d65230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c69ac; end: 1011c6a93;  */

void FUN_1011c69ac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c6a94; end: 1011c6a9b; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin itemType] */

undefined8 FUN_1011c6a94(void)

{
  return 0x10;
}



/* Entry: 1011c6a9c; end: 1011c6aa3; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin lockedConversationPolicy] */

undefined8 FUN_1011c6a9c(void)

{
  return 0;
}



/* Entry: 1011c6aa4; end: 1011c6b67; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin isActionApplicableTo:actionMenuContext:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3f44c();
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011c6b68; end: 1011c6d17;  */

undefined * FUN_1011c6b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011c75d8();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038fe08;
  func_0x000107c613fc(&UNK_11038fe08,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_11038fe30;
  func_0x000107c613fc(&UNK_11038fe30,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_1011c7424;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038fe48;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 1011c6d18; end: 1011c6e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6d18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  func_0x000107c61428(param_1 + 0x10,puVar3,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x000107c40674(param_2);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c5faec();
    puVar4 = puVar3;
    func_0x000107c61170(uVar1);
    func_0x000107c40258(param_2);
    func_0x000107c61180();
    uVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    FUN_1011c6e0c(uVar2,puVar3,uVar1,puVar4,*(undefined8 *)(param_3 + _DAT_112f14b98));
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar3);
    func_0x000107c6142c(puVar4);
  }
  return;
}



/* Entry: 1011c6e0c; end: 1011c7027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c6e0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = _DAT_112d65230;
  func_0x000107c61428(unaff_x20 + _DAT_112d65230,auStack_78,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = lVar1;
    func_0x000107c44088();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = _DAT_112d65228;
  func_0x000107c61428(unaff_x20 + _DAT_112d65228,auStack_90,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  lVar2 = _DAT_112d65220;
  if (lVar1 != 0) {
    func_0x000107c61428(unaff_x20 + _DAT_112d65220,auStack_a8,0,0);
    lVar2 = unaff_x20 + lVar2;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      if (lVar4 == 0) {
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar2);
        return;
      }
      uVar5 = *(undefined8 *)(lVar4 + _DAT_112f14be0);
      uVar3 = *(undefined8 *)(lVar4 + _DAT_112f14bd8);
      FUN_1011fbdb8();
      func_0x000107c610f8();
      func_0x000107c61174();
      func_0x000107c61434(param_2);
      func_0x000107c61434(param_4);
      func_0x000107c615f0(uVar5);
      func_0x000107c61174(uVar3);
      func_0x000107c61174(lVar1);
      func_0x000107c61174();
      func_0x000107c61174(param_5);
      FUN_1011fb9c4(param_1,param_2,param_3,param_4,uVar5,uVar3,param_5,lVar1);
      func_0x000107c5bb70(lVar2);
      func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d65238));
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar4);
      lVar4 = param_1;
    }
  }
  func_0x000107c61170(lVar4);
  return;
}



/* Entry: 1011c7028; end: 1011c71ab; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin messageActionMenuItemViewModelFor:actionMenuContext:] */

void FUN_1011c7028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  func_0x0001000285a8(0x112d3bec8,&UNK_10d905040);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001000b637c(param_3);
  func_0x0001000285a8(0x112d63e98,&UNK_10d9296d8);
  uVar2 = param_4;
  func_0x0001000b637c(param_4);
  uVar5 = uVar2;
  func_0x0001006c733c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(uVar2);
  uVar2 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar5);
  puVar3 = &UNK_11038fdb8;
  func_0x000107c613fc(&UNK_11038fdb8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11038fde0;
  func_0x000107c613fc(&UNK_11038fde0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1011c744c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uVar5 = 0;
  FUN_1011a4d50(0);
  func_0x000107c61174(param_1);
  uVar1 = 0x1011c7450;
  func_0x0001000d5158(0x1011c7450,puVar4,uVar5);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar4);
  func_0x0001004575f0();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1011c71ac; end: 1011c720b; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin init] */

void FUN_1011c71ac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapReplyChatActionMenuPlugin.SnapReplyChatActionMenuPlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c71d8);
  (*pcVar1)();
}



/* Entry: 1011c720c; end: 1011c7263; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1011c720c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d65238));
  FUN_100ca6b30(param_1 + _DAT_112d65220);
  func_0x000107c61610(param_1 + _DAT_112d65228);
  param_1 = param_1 + _DAT_112d65230;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1011c7264; end: 1011c72e7; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin dismissPresentedView] */

/* WARNING: Possible PIC construction at 0x0001011c72a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c72bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c72a4) */
/* WARNING: Removing unreachable block (ram,0x0001011c72c0) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c7264(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1011c72e8; end: 1011c7333; -[_TtC29SnapReplyChatActionMenuPlugin29SnapReplyChatActionMenuPlugin didDismissSnapReplyWithScope:] */

/* WARNING: Possible PIC construction at 0x0001011c731c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c7320) */

void FUN_1011c72e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1011c7340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1011c7334; end: 1011c733f;  */

undefined * FUN_1011c7334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126a5e70;
  uVar5 = param_2;
  func_0x000107c610f8(PTR_PTR_1126a5e70);
  func_0x000107c453e4();
  puVar2 = puVar1;
  FUN_1011c75d8();
  uVar6 = uVar5;
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar5);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR_PTR_1126c2cb0;
  func_0x000107c61168();
  func_0x000107c44f9c();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c592b0(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c59a2c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = &UNK_11038fe08;
  func_0x000107c613fc(&UNK_11038fe08,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,uVar7);
  puVar3 = &UNK_11038fe30;
  func_0x000107c613fc(&UNK_11038fe30,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  pcStack_50 = FUN_1011c7424;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11038fe48;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c56ea0(puVar1);
  func_0x000107c60bd0(ppuVar4);
  return puVar1;
}



/* Entry: 1011c7340; end: 1011c73d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c7340(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d65238);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar1 = _DAT_112d65220;
  func_0x000107c61428(unaff_x20 + _DAT_112d65220,auStack_38,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42860();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1011c73d4; end: 1011c73f3;  */

void FUN_1011c73d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6bb8);
  return;
}



/* Entry: 1011c73f4; end: 1011c7423;  */

void FUN_1011c73f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Entry: 1011c7424; end: 1011c7453;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c7424(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  puVar5 = auStack_68;
  func_0x000107c61428(lVar1 + 0x10,puVar5,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = uVar4;
    func_0x000107c40674(uVar4);
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    puVar6 = puVar5;
    func_0x000107c61170(uVar2);
    func_0x000107c40258(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    FUN_1011c6e0c(uVar3,puVar5,uVar2,puVar6,*(undefined8 *)(lVar7 + _DAT_112f14b98));
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar6);
  }
  return;
}



/* Entry: 1011c7454; end: 1011c74b3;  */

undefined8 FUN_1011c7454(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1011c74d0(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1011c74b4; end: 1011c74cf;  */

void FUN_1011c74b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011c74d0; end: 1011c75b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c74d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar2 = 0;
  FUN_1011c73d4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112d65220,0);
  func_0x000107c61614(lVar3 + _DAT_112d65228,0);
  func_0x000107c61614(lVar3 + _DAT_112d65230,0);
  *(undefined8 *)(lVar3 + _DAT_112d65238) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar1);
  func_0x000107c4fba8(*(undefined8 *)(param_1 + _DAT_112f14b58));
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 1011c75b8; end: 1011c75d7;  */

void FUN_1011c75b8(void)

{
  func_0x000107c61168(&PTR_PTR_112d652a8);
  return;
}



/* Entry: 1011c75d8; end: 1011c76a3;  */

undefined1  [16] FUN_1011c75d8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffea;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef2be00);
  uVar3 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010ef2be20);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c76a4);
  (*pcVar1)();
}



/* Entry: 1011c76a4; end: 1011c76eb; -[SCSnapReplyChatActionMenuPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c76a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65300;
  func_0x000107c61428(param_1 + _DAT_112d65300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c76ec; end: 1011c7743; -[SCSnapReplyChatActionMenuPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c76ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65300;
  func_0x000107c61428(param_1 + _DAT_112d65300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c7744; end: 1011c778b; -[SCSnapReplyChatActionMenuPluginEntryPoint chatSnapReplyCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c7744(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65308;
  func_0x000107c61428(param_1 + _DAT_112d65308,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1011c778c; end: 1011c77ef; -[SCSnapReplyChatActionMenuPluginEntryPoint setChatSnapReplyCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c778c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65308;
  func_0x000107c61428(param_1 + _DAT_112d65308,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1011c77f0; end: 1011c78b3; -[SCSnapReplyChatActionMenuPluginEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x0001011c7860: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c7880: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c7864) */
/* WARNING: Removing unreachable block (ram,0x0001011c7884) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1011c77f0(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x000107c3f948();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      FUN_1011c75b8(0);
      func_0x000107c613fc();
      FUN_1011c74d0(lVar1,lVar2);
      param_1 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011c78b4; end: 1011c78f7; -[SCSnapReplyChatActionMenuPluginEntryPoint end] */

void FUN_1011c78b4(undefined8 param_1)

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



/* Entry: 1011c78f8; end: 1011c7a8f;  */

void FUN_1011c78f8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef10d41b0)) {
      uVar2 = 0xd00000000000001f;
      func_0x000107c605b8(0xd00000000000001f,0x800000010ef2be50,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SnapReplyChatActionMenuPlugin/SCSnapReplyChatActionMenuPluginEntryPoint.swift"
                            ,0x4d,2,0x26,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c7a90);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c533d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1011c7a90; end: 1011c7b3b; -[SCSnapReplyChatActionMenuPluginEntryPoint setValue:forIvarName:] */

void FUN_1011c7a90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011c78f8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1011c7b3c; end: 1011c7ba7; -[SCSnapReplyChatActionMenuPluginEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c7b3c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d65300,0);
  *(undefined8 *)(param_1 + _DAT_112d65308) = 0;
  *(undefined8 *)(param_1 + _DAT_112d65310) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1011c7ba8; end: 1011c7bdb;  */

void FUN_1011c7ba8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011c7bdc; end: 1011c7c23; -[SCSnapReplyChatActionMenuPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c7bdc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d65300);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d65308));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d65310));
  return;
}



/* Entry: 1011c7c24; end: 1011c7c43;  */

void FUN_1011c7c24(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6c90);
  return;
}



/* Entry: 1011c7c44; end: 1011c7c9f; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor init] */

void FUN_1011c7c44(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("DWebExplainerTrayDeepLink.DWebExplainerDeepLinkProcessor",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1011c7c70);
  (*pcVar1)();
}



/* Entry: 1011c7ca0; end: 1011c7caf; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c7ca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d65340));
  return;
}



/* Entry: 1011c7cb0; end: 1011c7cff; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor identifier] */

void FUN_1011c7cb0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_28;
  
  func_0x000107c614f0();
  uStack_28 = param_1;
  func_0x000107c614e4();
  puVar1 = &uStack_28;
  func_0x000107c5fb18(puVar1,param_1);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1011c7d00; end: 1011c7d07; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor priority] */

undefined8 FUN_1011c7d00(void)

{
  return 1000;
}



/* Entry: 1011c7d08; end: 1011c7d8f; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_1011c7d08(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f84018;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 1011c7d90; end: 1011c7e17; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor isValidDeepLink:] */

undefined8 FUN_1011c7d90(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  func_0x000107c42e38();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_1;
    func_0x000107c3f418(param_1,param_2,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return uVar2;
}



/* Entry: 1011c7e18; end: 1011c7e1b; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_1011c7e18(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 1011c7e1c; end: 1011c7e63;  */

void FUN_1011c7e1c(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000107c4bb60(param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf94710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_endDeepLinkProcessingScope_1125c2b68);
  return;
}



/* Entry: 1011c7e64; end: 1011c7ecb; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_1011c7e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_1011c7ef8(param_3,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1011c7ecc; end: 1011c7ed3; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_1011c7ecc(void)

{
  return 1;
}



/* Entry: 1011c7ed4; end: 1011c7ed7; -[_TtC25DWebExplainerTrayDeepLink30DWebExplainerDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_1011c7ed4(void)

{
  return;
}



/* Entry: 1011c7ed8; end: 1011c7ef7;  */

void FUN_1011c7ed8(void)

{
  func_0x000107c61168(&PTR_PTR_1127b6d58);
  return;
}



/* Entry: 1011c7ef8; end: 1011c806b;  */

/* WARNING: Possible PIC construction at 0x0001011c7f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c7f94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001011c8024: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001011c7f98) */
/* WARNING: Removing unreachable block (ram,0x0001011c8050) */
/* WARNING: Removing unreachable block (ram,0x0001011c7f9c) */
/* WARNING: Removing unreachable block (ram,0x0001011c7f64) */
/* WARNING: Removing unreachable block (ram,0x0001011c8028) */

void FUN_1011c7ef8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  int unaff_w20;
  
  func_0x000107c4a6bc();
  if (unaff_w20 != 0) {
    puVar1 = PTR_PTR_1126b0ea8;
    func_0x000107c610f8(PTR_PTR_1126b0ea8);
    func_0x000107c453e4();
    puVar2 = PTR_PTR_1126a6508;
    func_0x000107c610f8(PTR_PTR_1126a6508);
    func_0x000107c453e4();
    func_0x000107c5437c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1011c806c; end: 1011c808f;  */

void FUN_1011c806c(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000107c4bb60(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf94710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s_endDeepLinkProcessingScope_1125c2b68);
  return;
}



/* Entry: 1011c8090; end: 1011c8167;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1011c8090(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  func_0x000107c613fc();
  uVar2 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  lVar3 = 0;
  FUN_1011c7ed8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d65340) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_50,puVar1);
  func_0x000107c4fba8(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(plVar5);
  return unaff_x20;
}



/* Entry: 1011c8168; end: 1011c8183;  */

void FUN_1011c8168(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1011c8184; end: 1011c81a3;  */

void FUN_1011c8184(void)

{
  func_0x000107c61168(&PTR_PTR_112d653b0);
  return;
}



/* Entry: 1011c81a4; end: 1011c81af; -[SCDWebExplainerTrayDeepLinkEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c81a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65408;
  func_0x000107c61428(param_1 + _DAT_112d65408,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c81b0; end: 1011c81bb; -[SCDWebExplainerTrayDeepLinkEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c81b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d65408;
  func_0x000107c61428(param_1 + _DAT_112d65408,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011c81bc; end: 1011c81c7; -[SCDWebExplainerTrayDeepLinkEntryPoint pageLauncherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011c81bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d65410;
  func_0x000107c61428(param_1 + _DAT_112d65410,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1011c81c8; end: 1011c820b;  */

void FUN_1011c81c8(long param_1,undefined8 param_2,long *param_3)

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


