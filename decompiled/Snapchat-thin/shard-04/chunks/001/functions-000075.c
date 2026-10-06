/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1030cd2d8; end: 1030cd2f7;  */

void FUN_1030cd2d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4e28);
  return;
}



/* Entry: 1030cd2f8; end: 1030cd3c7;  */

undefined8 FUN_1030cd2f8(void)

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
  
  func_0x000107c61428(0x112f3a5a0,&uStack_40,0x20,0);
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
    FUN_1030cd3c8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1030cd3c8; end: 1030cd3e7;  */

void FUN_1030cd3c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4ef0);
  return;
}



/* Entry: 1030cd3e8; end: 1030cd547;  */

void FUN_1030cd3e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f3a5a8,&UNK_10db86258);
  puVar1 = &UNK_110609d78;
  func_0x000107c613fc(&UNK_110609d78,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1030cd548,puVar1);
  return;
}



/* Entry: 1030cd548; end: 1030cd553;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cd548(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar8 = &lStack_50;
  lVar6 = lVar1;
  FUN_1030cd3c8();
  lVar7 = lVar6;
  func_0x000107c610f8();
  *(long *)(lVar7 + _DAT_112f3a5b0) = lVar1;
  *(undefined8 *)(lVar7 + _DAT_112f3a5b8) = uVar3;
  *(undefined8 *)(lVar7 + _DAT_112f3a5c0) = uVar2;
  *(undefined8 *)(lVar7 + _DAT_112f3a5c8) = uVar4;
  puVar5 = PTR_s_init_1125d9248;
  lStack_50 = lVar7;
  lStack_48 = lVar6;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61154(&lStack_50,puVar5);
  *param_1 = plVar8;
  return;
}



/* Entry: 1030cd554; end: 1030cd5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cd554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3a5b0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a5b8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a5c0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a5c8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030cd5e0; end: 1030cd63f; -[_TtC44AddFriendsRecentlyActionPageScopeGraphBridge52AddFriendsRecentlyActionPageScopeGraphBridgeServices init] */

void FUN_1030cd5e0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AddFriendsRecentlyActionPageScopeGraphBridge.AddFriendsRecentlyActionPageScopeGraphBridgeServices"
                      ,0x61,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030cd60c);
  (*pcVar1)();
}



/* Entry: 1030cd640; end: 1030cd6d7; -[_TtC44AddFriendsRecentlyActionPageScopeGraphBridge52AddFriendsRecentlyActionPageScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030cd65c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030cd67c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030cd660) */
/* WARNING: Removing unreachable block (ram,0x0001030cd680) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cd640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3a5b0));
  return;
}



/* Entry: 1030cd6d8; end: 1030cd6e3;  */

void FUN_1030cd6d8(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1030cd6e4,param_1);
  return;
}



/* Entry: 1030cd6e4; end: 1030cd757;  */

void FUN_1030cd6e4(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1030cd758; end: 1030cd763;  */

void FUN_1030cd758(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030cdb5c,param_1);
  return;
}



/* Entry: 1030cd764; end: 1030cd7a3;  */

void FUN_1030cd764(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1030cdb70,0);
  return;
}



/* Entry: 1030cd7a4; end: 1030cd7af;  */

void FUN_1030cd7a4(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030cdb60,param_1);
  return;
}



/* Entry: 1030cd7b0; end: 1030cd83b;  */

void FUN_1030cd7b0(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x1030cdb74,0);
  return;
}



/* Entry: 1030cd83c; end: 1030cd847;  */

void FUN_1030cd83c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1030cdb64,param_1);
  return;
}



/* Entry: 1030cd848; end: 1030cd89f;  */

void FUN_1030cd848(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 1030cd8a0; end: 1030cd8a7;  */

undefined8 FUN_1030cd8a0(void)

{
  return 0x1b;
}



/* Entry: 1030cd8a8; end: 1030cda1f;  */

void FUN_1030cd8a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110609da0;
  func_0x000107c613fc(&UNK_110609da0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1030cda20,puVar1);
  return;
}



/* Entry: 1030cda20; end: 1030cda27;  */

void FUN_1030cda20(undefined8 *param_1)

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
  func_0x000107c61428(0x112f3a5a0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112f3a5a0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110609f38;
  func_0x000107c613fc(&UNK_110609f38,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1030cdb54;
  func_0x00010058fa64(0x1030cdb54,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1030cda28; end: 1030cda83;  */

void FUN_1030cda28(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112f3a5a0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112f3a5a0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1030cda84; end: 1030cdb77;  */

undefined ** FUN_1030cda84(void)

{
  return &PTR_DAT_112f3a6c8;
}



/* Entry: 1030cdb78; end: 1030cdbbf; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdb78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a620;
  func_0x000107c61428(param_1 + _DAT_112f3a620,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030cdbc0; end: 1030cdc17; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdbc0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a620;
  func_0x000107c61428(param_1 + _DAT_112f3a620,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030cdc18; end: 1030cdc5f; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint sCChatCameraScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdc18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a628;
  func_0x000107c61428(param_1 + _DAT_112f3a628,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030cdc60; end: 1030cdc6b; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint setSCChatCameraScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdc60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a628;
  func_0x000107c61428(param_1 + _DAT_112f3a628,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030cdc6c; end: 1030cdcb3; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint sCChatScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdc6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a630;
  func_0x000107c61428(param_1 + _DAT_112f3a630,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030cdcb4; end: 1030cdcbf; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint setSCChatScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdcb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a630;
  func_0x000107c61428(param_1 + _DAT_112f3a630,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030cdcc0; end: 1030cdd07; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint sCFriendActionSheetScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdcc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a638;
  func_0x000107c61428(param_1 + _DAT_112f3a638,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030cdd08; end: 1030cdd13; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint setSCFriendActionSheetScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdd08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a638;
  func_0x000107c61428(param_1 + _DAT_112f3a638,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030cdd14; end: 1030cdd5b; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint sCFriendProfileScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdd14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a640;
  func_0x000107c61428(param_1 + _DAT_112f3a640,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030cdd5c; end: 1030cdd67; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint setSCFriendProfileScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdd5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a640;
  func_0x000107c61428(param_1 + _DAT_112f3a640,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030cdd68; end: 1030cddaf; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint addFriendsRecentlyActionPageScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cdd68(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a648;
  func_0x000107c61428(param_1 + _DAT_112f3a648,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1030cddb0; end: 1030cddbb; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint setAddFriendsRecentlyActionPageScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cddb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a648;
  func_0x000107c61428(param_1 + _DAT_112f3a648,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1030cddbc; end: 1030cde1b;  */

void FUN_1030cddbc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

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



/* Entry: 1030cde1c; end: 1030ce17b;  */

/* WARNING: Possible PIC construction at 0x0001030ce048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce100: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce0f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ce104) */
/* WARNING: Removing unreachable block (ram,0x0001030ce124) */
/* WARNING: Removing unreachable block (ram,0x0001030ce154) */
/* WARNING: Removing unreachable block (ram,0x0001030ce144) */
/* WARNING: Removing unreachable block (ram,0x0001030ce0a8) */
/* WARNING: Removing unreachable block (ram,0x0001030ce098) */
/* WARNING: Removing unreachable block (ram,0x0001030ce088) */
/* WARNING: Removing unreachable block (ram,0x0001030ce06c) */
/* WARNING: Removing unreachable block (ram,0x0001030ce05c) */
/* WARNING: Removing unreachable block (ram,0x0001030ce04c) */
/* WARNING: Removing unreachable block (ram,0x0001030ce0f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cde1c(void)

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
  func_0x000107c50b6c();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c50ba4();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar5 = unaff_x20;
      func_0x000107c50d80();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar5 = unaff_x20;
        func_0x000107c50d84();
        func_0x000107c61180();
        if (lVar5 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          func_0x000107c3d6dc();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar6 = 0;
            FUN_1030cd080();
            lVar4 = lVar6;
            func_0x000107c610f8();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174();
            lVar5 = lVar3;
            FUN_1030cd2f8();
            if (lVar5 == 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1030ce17c);
              (*pcVar2)();
            }
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            uVar1 = uStack_68;
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uVar1);
            func_0x000100083b20(&uStack_68);
            func_0x000100087c34(auStack_70);
            func_0x000107c61574(uStack_68);
            *(long *)(lVar4 + _DAT_112f3a530) = lVar5;
            *(long *)(lVar4 + _DAT_112f3a538) = unaff_x20;
            lStack_80 = lVar4;
            lStack_78 = lVar6;
            func_0x000107c61154(&lStack_80,PTR_s_init_1125d9248);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1030ce17c; end: 1030ce1a3; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1030ce17c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030cde1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030ce1a4; end: 1030ce1e7; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint end] */

void FUN_1030ce1a4(undefined8 param_1)

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



/* Entry: 1030ce1e8; end: 1030ce52f;  */

void FUN_1030ce1e8(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0fad6c0)) ||
       (func_0x000107c605b8(0xd000000000000018,0x800000010f052940,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58114();
    }
    else {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef0fad6a0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010f052960,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0xd00000000000001f;
          if (((param_2 == -0x2fffffffffffffe1) && (param_3 == -0x7ffffffef0fad680)) ||
             (func_0x000107c605b8(0xd00000000000001f,0x800000010f052980,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58328();
          }
          else {
            uVar2 = 0xd00000000000001b;
            if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef0fac020)) ||
               (func_0x000107c605b8(0xd00000000000001b,0x800000010f053fe0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5832c();
            }
            else {
              uVar2 = 0xd00000000000003b;
              if (((param_2 != -0x2fffffffffffffc5) || (param_3 != -0x7ffffffef0ee0b10)) &&
                 (func_0x000107c605b8(0xd00000000000003b,0x800000010f11f4f0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "AddFriendsRecentlyActionPageScopeGraphBridge/SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint.swift"
                                    ,0x70,2,0x43,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1030ce530);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5248c();
            }
          }
          goto LAB_1030ce274;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c5814c();
    }
  }
LAB_1030ce274:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1030ce530; end: 1030ce5db; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1030ce530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030ce1e8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030ce5dc; end: 1030ce677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ce5dc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f3a620,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f3a628) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a630) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a638) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a640) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a648) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f3a650) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030ce678; end: 1030ce697; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint init] */

void FUN_1030ce678(void)

{
  FUN_1030ce5dc();
  return;
}



/* Entry: 1030ce698; end: 1030ce6cb;  */

void FUN_1030ce698(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ce6cc; end: 1030ce753; -[SCAddFriendsRecentlyActionPageScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030ce6f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030ce738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ce71c) */
/* WARNING: Removing unreachable block (ram,0x0001030ce6fc) */
/* WARNING: Removing unreachable block (ram,0x0001030ce73c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ce6cc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3a620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a628));
  return;
}



/* Entry: 1030ce754; end: 1030ce773;  */

void FUN_1030ce754(void)

{
  func_0x000107c61168(&PTR_PTR_1128b4fc8);
  return;
}



/* Entry: 1030ce774; end: 1030ce7bb; -[SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ce774(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a680;
  func_0x000107c61428(param_1 + _DAT_112f3a680,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030ce7bc; end: 1030ce813; -[SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ce7bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a680;
  func_0x000107c61428(param_1 + _DAT_112f3a680,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030ce814; end: 1030ce8eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ce814(undefined8 param_1,long param_2)

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
    FUN_1030cd2d8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112f3a568) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1030ce8ec);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112f3a570);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f3a688);
    *(long **)(unaff_x20 + _DAT_112f3a688) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1030ce8ec; end: 1030ce913; -[SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint begin] */

void FUN_1030ce8ec(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1030ce814();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1030ce914; end: 1030cea8b;  */

/* WARNING: Possible PIC construction at 0x0001030ce97c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030cea14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030ce980) */
/* WARNING: Removing unreachable block (ram,0x0001030cea18) */
/* WARNING: Removing unreachable block (ram,0x0001030cea30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ce914(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f3a688);
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



/* Entry: 1030cea8c; end: 1030cea93;  */

void FUN_1030cea8c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1030cea94; end: 1030ceac7; -[SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint end] */

void FUN_1030cea94(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1030ce914();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1030ceac8; end: 1030cebe7;  */

void FUN_1030ceac8(long param_1,long param_2,long param_3)

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
                        "AddFriendsRecentlyActionPageScopeGraphBridge/SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint.swift"
                        ,0x70,2,0x2f,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1030cebe8);
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



/* Entry: 1030cebe8; end: 1030cec93; -[SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1030cebe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1030ceac8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1030cec94; end: 1030cecf3; -[SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cec94(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f3a680,0);
  *(undefined8 *)(param_1 + _DAT_112f3a688) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030cecf4; end: 1030ced27;  */

void FUN_1030cecf4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030ced28; end: 1030ced5f; -[SCSCAddFriendsRecentlyActionPageScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ced28(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f3a680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f3a688));
  return;
}



/* Entry: 1030ced60; end: 1030ced7f;  */

void FUN_1030ced60(void)

{
  func_0x000107c61168(&PTR_PTR_1128b50b0);
  return;
}



/* Entry: 1030ced80; end: 1030cede7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030ced80(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001003877f0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f3a6c0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1030cede8; end: 1030cee33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cede8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f3a6c0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030cee34; end: 1030cef1f; -[_TtC40SCAddFriendsRecentlyActionPageScopeProxy43SCAddFriendsRecentlyActionPageScopeServices buildWithDelegate:pageContext:uiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cee34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *apuStack_58 [2];
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126acc00;
  func_0x000107c610f8();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174();
  func_0x000107c464c8(puVar1,param_2,param_3,param_4,param_5);
  apuStack_58[0] = puVar1;
  func_0x00010008a7c8(&uStack_48,apuStack_58);
  func_0x000100083b20(apuStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(apuStack_58[0]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1030cef20; end: 1030cef53;  */

void FUN_1030cef20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1030cef54; end: 1030cef83; -[_TtC40SCAddFriendsRecentlyActionPageScopeProxy43SCAddFriendsRecentlyActionPageScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cef54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3a6c0));
  return;
}



/* Entry: 1030cef84; end: 1030cefc7;  */

long FUN_1030cef84(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1030cefc8; end: 1030cf037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1030cefc8(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar1 = auStack_40;
  func_0x000107c610f8();
  FUN_1030cef84(param_1,unaff_x20 + _DAT_112f3a708);
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  func_0x0001000834e4(param_1);
  return puVar1;
}



/* Entry: 1030cf038; end: 1030cf097; -[FriendSuggestionDataRepositoryServices init] */

void FUN_1030cf038(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendSuggestionDataRepositoryServices.FriendSuggestionDataRepositoryServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030cf064);
  (*pcVar1)();
}



/* Entry: 1030cf098; end: 1030cf0a7; -[FriendSuggestionDataRepositoryServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf098(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112f3a708))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f3a708));
  return;
}



/* Entry: 1030cf0a8; end: 1030cf0c7;  */

void FUN_1030cf0a8(void)

{
  func_0x000107c61168(&PTR_PTR_1128b5230);
  return;
}



/* Entry: 1030cf0c8; end: 1030cf603;  */

long FUN_1030cf0c8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1030cf604; end: 1030cf60f; -[SCFriendSuggestion userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf604(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a738);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f3a738))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf610; end: 1030cf61b; -[SCFriendSuggestion userName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf610(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a740);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112f3a740))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf61c; end: 1030cf663;  */

void FUN_1030cf61c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf664; end: 1030cf66f; -[SCFriendSuggestion displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf664(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a748))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a748);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf670; end: 1030cf67f; -[SCFriendSuggestion isOfficial] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1030cf670(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f3a750);
}



/* Entry: 1030cf680; end: 1030cf68b; -[SCFriendSuggestion bitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf680(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a758))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a758);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf68c; end: 1030cf697; -[SCFriendSuggestion bitmojiSelfieId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf68c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a760))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a760);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf698; end: 1030cf6a3; -[SCFriendSuggestion bitmojiSceneId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf698(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a768))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a768);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf6a4; end: 1030cf6af; -[SCFriendSuggestion bitmojiBackgroundId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf6a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a770))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a770);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf6b0; end: 1030cf6bb; -[SCFriendSuggestion bitmojiBackgroundUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf6b0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a778))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a778);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf6bc; end: 1030cf6c7; -[SCFriendSuggestion snapProId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf6bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a780))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a780);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf6c8; end: 1030cf6d3; -[SCFriendSuggestion profileLogo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf6c8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a788))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a788);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf6d4; end: 1030cf6df; -[SCFriendSuggestion subtext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf6d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a790))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a790);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf6e0; end: 1030cf6eb; -[SCFriendSuggestion suggestionToken] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf6e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f3a798))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f3a798);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf6ec; end: 1030cf743;  */

void FUN_1030cf6ec(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1030cf744; end: 1030cf753; -[SCFriendSuggestion shouldBeBadged] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1030cf744(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f3a7a0);
}



/* Entry: 1030cf754; end: 1030cfb4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cf754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined1 param_26)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a738);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a740);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a748);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112f3a750) = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a758);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a760);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a768);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a770);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a778);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a780);
  *puVar1 = param_18;
  puVar1[1] = param_19;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a788);
  *puVar1 = param_20;
  puVar1[1] = param_21;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a790);
  *puVar1 = param_22;
  puVar1[1] = param_23;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a798);
  *puVar1 = param_24;
  puVar1[1] = param_25;
  *(undefined1 *)(unaff_x20 + _DAT_112f3a7a0) = param_26;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030cfb50; end: 1030cfde3; -[SCFriendSuggestion initWithUserId:userName:displayName:isOfficial:bitmojiAvatarId:bitmojiSelfieId:bitmojiSceneId:bitmojiBackgroundId:bitmojiBackgroundUrl:snapProId:profileLogo:subtext:suggestionToken:shouldBeBadged:] */

void FUN_1030cfb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11,long param_12,long param_13,long param_14,
                  long param_15,undefined1 param_16)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  
  func_0x000107c5faec();
  uVar8 = param_2;
  func_0x000107c5faec();
  if (param_5 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar9 = uVar8;
  }
  else {
    uStack_c0 = uVar8;
    func_0x000107c5faec();
    uVar9 = uStack_c0;
    uStack_b8 = param_5;
  }
  if (param_7 == 0) {
    uStack_d0 = 0;
    uStack_c8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_d0 = uVar9;
    uStack_c8 = param_7;
  }
  if (param_8 == 0) {
    uStack_d8 = 0;
    uStack_e0 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_e0 = uVar9;
    uStack_d8 = param_8;
  }
  lVar1 = param_9;
  func_0x000107c61174();
  lVar2 = param_10;
  func_0x000107c61174();
  lVar3 = param_11;
  func_0x000107c61174();
  lVar4 = param_12;
  func_0x000107c61174();
  lVar5 = param_13;
  func_0x000107c61174();
  lVar6 = param_14;
  func_0x000107c61174();
  lVar7 = param_15;
  func_0x000107c61174();
  if (lVar1 == 0) {
    uStack_f0 = 0;
    uStack_e8 = 0;
    uVar10 = uVar9;
    uVar9 = uStack_f0;
  }
  else {
    func_0x000107c5faec();
    uVar10 = uVar9;
    func_0x000107c61170(lVar1);
    uStack_e8 = param_9;
  }
  if (lVar2 == 0) {
    uStack_108 = 0;
    uStack_100 = 0;
    param_10 = uStack_100;
  }
  else {
    func_0x000107c5faec();
    uVar15 = uVar10;
    func_0x000107c61170(lVar2);
    uStack_108 = uVar10;
    uVar10 = uVar15;
  }
  if (lVar3 == 0) {
    uStack_118 = 0;
    uStack_110 = 0;
    uVar15 = uVar10;
    uVar10 = uStack_118;
  }
  else {
    func_0x000107c5faec();
    uVar15 = uVar10;
    func_0x000107c61170(lVar3);
    uStack_110 = param_11;
  }
  if (lVar4 == 0) {
    param_12 = 0;
    uVar14 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar11 = uVar15;
    func_0x000107c61170(lVar4);
    uVar14 = uVar15;
    uVar15 = uVar11;
  }
  if (lVar5 == 0) {
    param_13 = 0;
    uVar11 = 0;
    uVar12 = uVar15;
  }
  else {
    func_0x000107c5faec();
    uVar12 = uVar15;
    func_0x000107c61170(lVar5);
    uVar11 = uVar15;
  }
  if (lVar6 == 0) {
    param_14 = 0;
    uVar13 = 0;
    uVar15 = uVar12;
  }
  else {
    func_0x000107c5faec();
    uVar15 = uVar12;
    func_0x000107c61170(lVar6);
    uVar13 = uVar12;
  }
  if (lVar7 == 0) {
    param_15 = 0;
    uVar15 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  func_0x0001030cf954(param_3,param_2,param_4,uVar8,uStack_b8,uStack_c0,param_6,uStack_c8,uStack_d0,
                      uStack_d8,uStack_e0,uStack_e8,uVar9,param_10,uStack_108,uStack_110,uVar10,
                      param_12,uVar14,param_13,uVar11,param_14,uVar13,param_15,uVar15,param_16);
  return;
}



/* Entry: 1030cfde4; end: 1030cfe13;  */

void FUN_1030cfde4(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_1030cfe14(param_1);
  return;
}



/* Entry: 1030cfe14; end: 1030d0013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030cfe14(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_100 [16];
  undefined8 uStack_f0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a738);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a740);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a748);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  *(undefined1 *)(unaff_x20 + _DAT_112f3a750) = *(undefined1 *)(param_1 + 6);
  uStack_68 = param_1[8];
  uStack_70 = param_1[7];
  uVar2 = param_1[7];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a758);
  puVar1[1] = param_1[8];
  *puVar1 = uVar2;
  uStack_78 = param_1[10];
  uStack_80 = param_1[9];
  uVar2 = param_1[9];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a760);
  puVar1[1] = param_1[10];
  *puVar1 = uVar2;
  uStack_88 = param_1[0xc];
  uStack_90 = param_1[0xb];
  uVar2 = param_1[0xb];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a768);
  puVar1[1] = param_1[0xc];
  *puVar1 = uVar2;
  uVar2 = param_1[0xd];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a770);
  puVar1[1] = param_1[0xe];
  *puVar1 = uVar2;
  uStack_98 = param_1[0xe];
  uStack_a0 = param_1[0xd];
  uStack_a8 = param_1[0x10];
  uStack_b0 = param_1[0xf];
  uVar2 = param_1[0xf];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a778);
  puVar1[1] = param_1[0x10];
  *puVar1 = uVar2;
  uStack_b8 = param_1[0x12];
  uStack_c0 = param_1[0x11];
  uVar2 = param_1[0x11];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a780);
  puVar1[1] = param_1[0x12];
  *puVar1 = uVar2;
  uStack_c8 = param_1[0x14];
  uStack_d0 = param_1[0x13];
  uVar2 = param_1[0x13];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a788);
  puVar1[1] = param_1[0x14];
  *puVar1 = uVar2;
  uStack_d8 = param_1[0x16];
  uStack_e0 = param_1[0x15];
  uVar2 = param_1[0x15];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a790);
  puVar1[1] = param_1[0x16];
  *puVar1 = uVar2;
  uStack_e8 = param_1[0x18];
  uStack_f0 = param_1[0x17];
  uVar2 = param_1[0x17];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f3a798);
  puVar1[1] = param_1[0x18];
  *puVar1 = uVar2;
  func_0x000100402194(&uStack_40,auStack_100);
  func_0x000100402194(&uStack_50,auStack_100);
  func_0x000101223174(&uStack_60,auStack_100);
  func_0x000101223174(&uStack_70,auStack_100);
  func_0x000101223174(&uStack_80,auStack_100);
  func_0x000101223174(&uStack_90,auStack_100);
  func_0x000101223174(&uStack_a0,auStack_100);
  func_0x000101223174(&uStack_b0,auStack_100);
  func_0x000101223174(&uStack_c0,auStack_100);
  func_0x000101223174(&uStack_d0,auStack_100);
  func_0x000101223174(&uStack_e0,auStack_100);
  func_0x000101223174(&uStack_f0,auStack_100);
  FUN_1030d0014(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112f3a7a0) = *(undefined1 *)(param_1 + 0x19);
  func_0x000107c61154(&stack0xfffffffffffffef0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1030d0014; end: 1030d0047;  */

undefined8 FUN_1030d0014(undefined8 param_1)

{
  (*(code *)(undefined *)0x1030cf0f4)();
  return param_1;
}



/* Entry: 1030d0048; end: 1030d004b; -[SCFriendSuggestion copyWithZone:] */

void FUN_1030d0048(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 1030d004c; end: 1030d007f; -[SCFriendSuggestion description] */

void FUN_1030d004c(void)

{
  undefined1 auStack_e0 [208];
  
  FUN_1030d0204(auStack_e0);
  FUN_1030d0014(auStack_e0);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030d0080; end: 1030d00fb; -[SCFriendSuggestion init] */

void FUN_1030d0080(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "FriendSuggestionDataRepositoryServices/SCFriendSuggestionWrapper.swift",0x46,
                      2,100,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1030d00c8);
  (*pcVar1)();
}



/* Entry: 1030d00fc; end: 1030d0203; -[SCFriendSuggestion .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001030d011c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d0144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d016c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d0194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d01bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d01e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d01c0) */
/* WARNING: Removing unreachable block (ram,0x0001030d0198) */
/* WARNING: Removing unreachable block (ram,0x0001030d0170) */
/* WARNING: Removing unreachable block (ram,0x0001030d0148) */
/* WARNING: Removing unreachable block (ram,0x0001030d0120) */
/* WARNING: Removing unreachable block (ram,0x0001030d01e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d00fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f3a738 + 8))
  ;
  return;
}



/* Entry: 1030d0204; end: 1030d03db;  */

/* WARNING: Possible PIC construction at 0x0001030d0364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d0374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d0384: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d0394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d03a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001030d03b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001030d03a8) */
/* WARNING: Removing unreachable block (ram,0x0001030d0398) */
/* WARNING: Removing unreachable block (ram,0x0001030d0388) */
/* WARNING: Removing unreachable block (ram,0x0001030d0378) */
/* WARNING: Removing unreachable block (ram,0x0001030d0368) */
/* WARNING: Removing unreachable block (ram,0x0001030d03b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d0204(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  
  uVar11 = ((undefined8 *)(param_2 + _DAT_112f3a738))[1];
  uVar15 = *(undefined8 *)(param_2 + _DAT_112f3a740);
  uVar12 = ((undefined8 *)(param_2 + _DAT_112f3a740))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_112f3a748);
  uVar13 = *(undefined1 *)(param_2 + _DAT_112f3a750);
  puVar2 = (undefined8 *)(param_2 + _DAT_112f3a758);
  puVar3 = (undefined8 *)(param_2 + _DAT_112f3a760);
  puVar4 = (undefined8 *)(param_2 + _DAT_112f3a768);
  puVar5 = (undefined8 *)(param_2 + _DAT_112f3a770);
  puVar6 = (undefined8 *)(param_2 + _DAT_112f3a778);
  puVar7 = (undefined8 *)(param_2 + _DAT_112f3a780);
  puVar8 = (undefined8 *)(param_2 + _DAT_112f3a788);
  puVar9 = (undefined8 *)(param_2 + _DAT_112f3a790);
  puVar10 = (undefined8 *)(param_2 + _DAT_112f3a798);
  uVar14 = *(undefined1 *)(param_2 + _DAT_112f3a7a0);
  *param_1 = *(undefined8 *)(param_2 + _DAT_112f3a738);
  param_1[1] = uVar11;
  param_1[2] = uVar15;
  param_1[3] = uVar12;
  uVar15 = *puVar1;
  param_1[5] = puVar1[1];
  param_1[4] = uVar15;
  *(undefined1 *)(param_1 + 6) = uVar13;
  uVar15 = *puVar2;
  param_1[8] = puVar2[1];
  param_1[7] = uVar15;
  uVar15 = *puVar3;
  param_1[10] = puVar3[1];
  param_1[9] = uVar15;
  uVar15 = *puVar4;
  param_1[0xc] = puVar4[1];
  param_1[0xb] = uVar15;
  uVar15 = *puVar5;
  param_1[0xe] = puVar5[1];
  param_1[0xd] = uVar15;
  uVar15 = *puVar6;
  param_1[0x10] = puVar6[1];
  param_1[0xf] = uVar15;
  uVar15 = *puVar7;
  param_1[0x12] = puVar7[1];
  param_1[0x11] = uVar15;
  uVar15 = *puVar8;
  param_1[0x14] = puVar8[1];
  param_1[0x13] = uVar15;
  uVar15 = *puVar9;
  param_1[0x16] = puVar9[1];
  param_1[0x15] = uVar15;
  uVar15 = *puVar10;
  param_1[0x18] = puVar10[1];
  param_1[0x17] = uVar15;
  *(undefined1 *)(param_1 + 0x19) = uVar14;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 1030d03dc; end: 1030d03fb;  */

void FUN_1030d03dc(void)

{
  func_0x000107c61168(&PTR_PTR_1128b52f0);
  return;
}



/* Entry: 1030d03fc; end: 1030d0407; -[SCChatCameraPageLaunchPayload presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d03fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f3a7d0;
  func_0x000107c61428(param_1 + _DAT_112f3a7d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1030d0408; end: 1030d0413; -[SCChatCameraPageLaunchPayload setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d0408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f3a7d0;
  func_0x000107c61428(param_1 + _DAT_112f3a7d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1030d0414; end: 1030d0423; -[SCChatCameraPageLaunchPayload replyConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d0414(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f3a7d8));
  return;
}



/* Entry: 1030d0424; end: 1030d0433; -[SCChatCameraPageLaunchPayload cameraViewType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1030d0424(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f3a7e0);
}



/* Entry: 1030d0434; end: 1030d0453; -[SCChatCameraPageLaunchPayload captionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1030d0434(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f3a7e8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


