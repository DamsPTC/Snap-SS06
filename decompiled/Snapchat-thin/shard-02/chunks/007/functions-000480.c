/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020bc968; end: 1020bc98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bc968(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e568f8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e568f0));
  return;
}



/* Entry: 1020bc990; end: 1020bc9af;  */

void FUN_1020bc990(void)

{
  func_0x000107c61168(&PTR_PTR_11281d5e8);
  return;
}



/* Entry: 1020bc9b0; end: 1020bca37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020bc9b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e56928) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e56930);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020bca38);
  (*pcVar2)();
}



/* Entry: 1020bca38; end: 1020bcb1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020bca38(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e56928);
  *(undefined **)(unaff_x20 + _DAT_112e56928) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e56930);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e56930))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104c7b58;
  func_0x000107c613fc(&UNK_1104c7b58,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1020bcb24,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1020bcb20; end: 1020bcb2b;  */

void FUN_1020bcb20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1020bcb2c; end: 1020bcb8b; -[_TtC46FriendsFeedGamesPresenceButtonScopeGraphBridge59FriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint init] */

void FUN_1020bcb2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedGamesPresenceButtonScopeGraphBridge.FriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint"
                      ,0x6a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bcb58);
  (*pcVar1)();
}



/* Entry: 1020bcb8c; end: 1020bcbc3; -[_TtC46FriendsFeedGamesPresenceButtonScopeGraphBridge59FriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bcb8c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e56930));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56928));
  return;
}



/* Entry: 1020bcbc4; end: 1020bcbc7;  */

void FUN_1020bcbc4(void)

{
  return;
}



/* Entry: 1020bcbc8; end: 1020bcbe7;  */

void FUN_1020bcbc8(void)

{
  FUN_1020bca38();
  return;
}



/* Entry: 1020bcbe8; end: 1020bcc07;  */

void FUN_1020bcbe8(void)

{
  func_0x000107c61168(&PTR_PTR_11281d6b0);
  return;
}



/* Entry: 1020bcc08; end: 1020bccd7;  */

undefined8 FUN_1020bcc08(void)

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
  
  func_0x000107c61428(0x112e56960,&uStack_40,0x20,0);
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
    FUN_1020bccd8();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1020bccd8; end: 1020bccf7;  */

void FUN_1020bccd8(void)

{
  func_0x000107c61168(&PTR_PTR_11281d778);
  return;
}



/* Entry: 1020bccf8; end: 1020bcd63;  */

void FUN_1020bccf8(void)

{
  func_0x0001000285a8(0x112e56968,&UNK_10da59bf8);
  func_0x0001000823a8(0x1020bcd38,0);
  return;
}



/* Entry: 1020bcd64; end: 1020bcd9f; -[_TtC46FriendsFeedGamesPresenceButtonScopeGraphBridge54FriendsFeedGamesPresenceButtonScopeGraphBridgeServices init] */

void FUN_1020bcd64(undefined8 param_1)

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



/* Entry: 1020bcda0; end: 1020bcdd3;  */

void FUN_1020bcda0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020bcdd4; end: 1020bcddb;  */

undefined8 FUN_1020bcdd4(void)

{
  return 0x1b;
}



/* Entry: 1020bcddc; end: 1020bcf53;  */

void FUN_1020bcddc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104c7ba0;
  func_0x000107c613fc(&UNK_1104c7ba0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1020bcf54,puVar1);
  return;
}



/* Entry: 1020bcf54; end: 1020bcf5b;  */

void FUN_1020bcf54(undefined8 *param_1)

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
  func_0x000107c61428(0x112e56960,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e56960,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104c7c38;
  func_0x000107c613fc(&UNK_1104c7c38,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1020bd008;
  func_0x00010058fa64(0x1020bd008,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1020bcf5c; end: 1020bcfb7;  */

void FUN_1020bcf5c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e56960,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e56960,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1020bcfb8; end: 1020bd00f;  */

undefined ** FUN_1020bcfb8(void)

{
  return &PTR_DAT_113066610;
}



/* Entry: 1020bd010; end: 1020bd057; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd010(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e569c0;
  func_0x000107c61428(param_1 + _DAT_112e569c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020bd058; end: 1020bd0af; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd058(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e569c0;
  func_0x000107c61428(param_1 + _DAT_112e569c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020bd0b0; end: 1020bd0f7; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint friendsFeedGamesPresenceButtonScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd0b0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e569c8;
  func_0x000107c61428(param_1 + _DAT_112e569c8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1020bd0f8; end: 1020bd15b; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint setFriendsFeedGamesPresenceButtonScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd0f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e569c8;
  func_0x000107c61428(param_1 + _DAT_112e569c8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1020bd15c; end: 1020bd28f;  */

/* WARNING: Possible PIC construction at 0x0001020bd214: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bd230: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bd24c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bd218) */
/* WARNING: Removing unreachable block (ram,0x0001020bd234) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd15c(void)

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
  func_0x000107c43a8c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1020bc990();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1020bcc08();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bd290);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e568f0) = lVar5;
    *(long *)(lVar4 + _DAT_112e568f8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1020bd290; end: 1020bd2b7; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1020bd290(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020bd15c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020bd2b8; end: 1020bd2fb; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint end] */

void FUN_1020bd2b8(undefined8 param_1)

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



/* Entry: 1020bd2fc; end: 1020bd493;  */

void FUN_1020bd2fc(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffc3) || (param_3 != -0x7ffffffef0f9e690)) {
      uVar2 = 0xd00000000000003d;
      func_0x000107c605b8(0xd00000000000003d,0x800000010f061970,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FriendsFeedGamesPresenceButtonScopeGraphBridge/SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x74,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bd494);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c54c78();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1020bd494; end: 1020bd53f; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint setValue:forIvarName:] */

void FUN_1020bd494(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1020bd2fc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1020bd540; end: 1020bd5ab; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd540(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e569c0,0);
  *(undefined8 *)(param_1 + _DAT_112e569c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112e569d0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020bd5ac; end: 1020bd5df;  */

void FUN_1020bd5ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020bd5e0; end: 1020bd627; -[SCFriendsFeedGamesPresenceButtonScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020bd60c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bd610) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd5e0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e569c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e569c8));
  return;
}



/* Entry: 1020bd628; end: 1020bd647;  */

void FUN_1020bd628(void)

{
  func_0x000107c61168(&PTR_PTR_11281d828);
  return;
}



/* Entry: 1020bd648; end: 1020bd68f; -[SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd648(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e56a00;
  func_0x000107c61428(param_1 + _DAT_112e56a00,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1020bd690; end: 1020bd6e7; -[SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd690(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e56a00;
  func_0x000107c61428(param_1 + _DAT_112e56a00,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1020bd6e8; end: 1020bd7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd6e8(undefined8 param_1,long param_2)

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
    FUN_1020bcbe8();
    lVar5 = lVar4;
    func_0x000107c610f8();
    *(undefined8 *)(lVar5 + _DAT_112e56928) = 0;
    func_0x000107c61174();
    lVar6 = lVar3;
    func_0x000100a3dbac();
    func_0x000107c61170(lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020bd7c0);
      (*pcVar2)();
    }
    plVar1 = (long *)(lVar5 + _DAT_112e56930);
    *plVar1 = lVar6;
    plVar1[1] = param_2;
    lStack_50 = lVar5;
    lStack_48 = lVar4;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    func_0x000107c61170(lVar3);
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112e56a08);
    *(long **)(unaff_x20 + _DAT_112e56a08) = plVar7;
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 1020bd7c0; end: 1020bd7e7; -[SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint begin] */

void FUN_1020bd7c0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1020bd6e8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1020bd7e8; end: 1020bd95f;  */

/* WARNING: Possible PIC construction at 0x0001020bd850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bd8e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bd854) */
/* WARNING: Removing unreachable block (ram,0x0001020bd8ec) */
/* WARNING: Removing unreachable block (ram,0x0001020bd904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bd7e8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112e56a08);
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



/* Entry: 1020bd960; end: 1020bd967;  */

void FUN_1020bd960(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(unaff_x20 + 0x10),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1020bd968; end: 1020bd99b; -[SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint end] */

void FUN_1020bd968(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1020bd7e8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1020bd99c; end: 1020bdabb;  */

void FUN_1020bd99c(long param_1,long param_2,long param_3)

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
                        "FriendsFeedGamesPresenceButtonScopeGraphBridge/SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint.swift"
                        ,0x72,2,0x2b,0);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bdabc);
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



/* Entry: 1020bdabc; end: 1020bdb67; -[SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_1020bdabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1020bd99c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1020bdb68; end: 1020bdbc7; -[SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bdb68(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e56a00,0);
  *(undefined8 *)(param_1 + _DAT_112e56a08) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1020bdbc8; end: 1020bdbfb;  */

void FUN_1020bdbc8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1020bdbfc; end: 1020bdc33; -[SCFriendsFeedGamesPresenceButtonScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bdbfc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e56a00);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56a08));
  return;
}



/* Entry: 1020bdc34; end: 1020bdc53;  */

void FUN_1020bdc34(void)

{
  func_0x000107c61168(&PTR_PTR_11281d8f0);
  return;
}



/* Entry: 1020bdc54; end: 1020bdc9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020bdc54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x000107c614f0(param_1);
  puVar4 = auStack_40;
  func_0x000107c614f0(unaff_x20,unaff_x20,uVar1);
  lVar2 = unaff_x20 + _DAT_112e56a38;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(lVar2 + 8) = param_2;
  func_0x000107c61604();
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e56a40) = puVar3;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112e56a48) = puVar3;
  func_0x000107c61154(0,0,0,0,auStack_40,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1020bdca0();
  func_0x000107c61170(puVar4);
  func_0x000107c615e8(param_1);
  return puVar4;
}



/* Entry: 1020bdca0; end: 1020be183;  */

/* WARNING: Possible PIC construction at 0x0001020bdd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bde00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bde48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bde74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bdea0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bdf50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bdfa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bdfec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be0c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be154: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020be118) */
/* WARNING: Removing unreachable block (ram,0x0001020be0c4) */
/* WARNING: Removing unreachable block (ram,0x0001020be070) */
/* WARNING: Removing unreachable block (ram,0x0001020be024) */
/* WARNING: Removing unreachable block (ram,0x0001020bdff0) */
/* WARNING: Removing unreachable block (ram,0x0001020bdfa8) */
/* WARNING: Removing unreachable block (ram,0x0001020bdf54) */
/* WARNING: Removing unreachable block (ram,0x0001020bdea4) */
/* WARNING: Removing unreachable block (ram,0x0001020bde78) */
/* WARNING: Removing unreachable block (ram,0x0001020bde4c) */
/* WARNING: Removing unreachable block (ram,0x0001020bde04) */
/* WARNING: Removing unreachable block (ram,0x0001020bdd64) */
/* WARNING: Removing unreachable block (ram,0x0001020bdd88) */
/* WARNING: Removing unreachable block (ram,0x0001020bde0c) */
/* WARNING: Removing unreachable block (ram,0x0001020bddcc) */
/* WARNING: Removing unreachable block (ram,0x0001020be158) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bdca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  func_0x000107c5472c();
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c57e28();
  func_0x000107c3d6fc();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112e56a40);
  func_0x000107c53840(uVar2,param_2,1);
  func_0x000107c5a050(uVar2,param_2,0);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e10(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020be184; end: 1020be1f3; -[_TtC24FriendsFeedGamesPresence34FriendsFeedGamesPresenceButtonView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020be184(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112e56a38;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "FriendsFeedGamesPresence/FriendsFeedGamesPresenceButtonView.swift",0x41,2,
                      0x2b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020be1f4);
  (*pcVar1)();
}



/* Entry: 1020be1f4; end: 1020be283; -[_TtC24FriendsFeedGamesPresence34FriendsFeedGamesPresenceButtonView handleTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020be1f4(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar2 = param_1 + _DAT_112e56a38;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    pcVar3 = *(code **)(lVar2 + 8);
    func_0x000107c61174(param_1);
    (*pcVar3)();
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1020be284; end: 1020be2e3; -[_TtC24FriendsFeedGamesPresence34FriendsFeedGamesPresenceButtonView initWithFrame:] */

void FUN_1020be284(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedGamesPresence.FriendsFeedGamesPresenceButtonView",0x3b,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020be2b0);
  (*pcVar1)();
}



/* Entry: 1020be2e4; end: 1020be32b; -[_TtC24FriendsFeedGamesPresence34FriendsFeedGamesPresenceButtonView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020be310: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020be314) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020be2e4(long param_1)

{
  FUN_1020be430(param_1 + _DAT_112e56a38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56a40));
  return;
}



/* Entry: 1020be32c; end: 1020be40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020be32c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar1 = param_2;
  func_0x000107c614f0();
  lVar2 = param_2 + _DAT_112e56a38;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined8 *)(lVar2 + 8) = param_4;
  func_0x000107c61604();
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + _DAT_112e56a40) = puVar3;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + _DAT_112e56a48) = puVar3;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(0,0,0,0,&lStack_40,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1020bdca0();
  func_0x000107c61170(plVar4);
  func_0x000107c615e8(param_1);
  return (undefined1 *)plVar4;
}



/* Entry: 1020be410; end: 1020be42f;  */

void FUN_1020be410(void)

{
  func_0x000107c61168(&PTR_PTR_11281d9b0);
  return;
}



/* Entry: 1020be430; end: 1020be453;  */

undefined8 FUN_1020be430(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1020be454; end: 1020be5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1020be454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar3 = auStack_60;
  func_0x000107c610f8();
  lVar1 = _DAT_112e56a78;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e56a80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56a88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e56a90) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e56a98) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e56aa0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e56aa8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112e56ab0) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(auStack_60,puVar2);
  func_0x000107c61180();
  FUN_1020be5b0();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c61574(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return puVar3;
}



/* Entry: 1020be5b0; end: 1020be76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020be5b0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e56a90) + _DAT_1130710a0);
  puVar1 = &UNK_1104c7da8;
  func_0x000107c613fc(&UNK_1104c7da8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_40 = FUN_1020bf394;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_1020be940;
  puStack_48 = &UNK_1104c7dc0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar1);
  uVar3 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e924(uVar3);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1020be76c; end: 1020be93f;  */

/* WARNING: Possible PIC construction at 0x0001020be7b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be7c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be80c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be854: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be870: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be8d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020be910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020be874) */
/* WARNING: Removing unreachable block (ram,0x0001020be888) */
/* WARNING: Removing unreachable block (ram,0x0001020be890) */
/* WARNING: Removing unreachable block (ram,0x0001020be858) */
/* WARNING: Removing unreachable block (ram,0x0001020be85c) */
/* WARNING: Removing unreachable block (ram,0x0001020be810) */
/* WARNING: Removing unreachable block (ram,0x0001020be824) */
/* WARNING: Removing unreachable block (ram,0x0001020be82c) */
/* WARNING: Removing unreachable block (ram,0x0001020be7cc) */
/* WARNING: Removing unreachable block (ram,0x0001020be7e0) */
/* WARNING: Removing unreachable block (ram,0x0001020be914) */
/* WARNING: Removing unreachable block (ram,0x0001020be7e8) */
/* WARNING: Removing unreachable block (ram,0x0001020be7b4) */
/* WARNING: Removing unreachable block (ram,0x0001020be8d4) */
/* WARNING: Removing unreachable block (ram,0x0001020be8f4) */
/* WARNING: Removing unreachable block (ram,0x0001020be90c) */

void FUN_1020be76c(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61174();
    func_0x000107c4adb4();
    func_0x000107c61180();
    func_0x000107c4b1dc();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1020be940; end: 1020be98b;  */

void FUN_1020be940(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1020be98c; end: 1020beb5b;  */

/* WARNING: Possible PIC construction at 0x0001020bea00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bea34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bea98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020beadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020beb2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020beae0) */
/* WARNING: Removing unreachable block (ram,0x0001020bea9c) */
/* WARNING: Removing unreachable block (ram,0x0001020beab4) */
/* WARNING: Removing unreachable block (ram,0x0001020beacc) */
/* WARNING: Removing unreachable block (ram,0x0001020bea38) */
/* WARNING: Removing unreachable block (ram,0x0001020bea70) */
/* WARNING: Removing unreachable block (ram,0x0001020bea88) */
/* WARNING: Removing unreachable block (ram,0x0001020bea04) */
/* WARNING: Removing unreachable block (ram,0x0001020bea08) */
/* WARNING: Removing unreachable block (ram,0x0001020bea24) */
/* WARNING: Removing unreachable block (ram,0x0001020beb30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020be98c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e56ab0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c610f8(PTR_PTR_1126d15f0);
    func_0x000107c453e4();
    func_0x000107c4adb4(param_1);
    func_0x000107c61180();
    func_0x000107c4b1dc();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1020beb5c; end: 1020beb5f;  */

void FUN_1020beb5c(void)

{
  return;
}



/* Entry: 1020beb60; end: 1020bed0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020beb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar1 = puStack_90;
  if (puStack_90 != (undefined *)0x0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112e56aa8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c49824();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c4045c(param_3);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c4b1c0(puVar1);
      func_0x000107c61180();
      puVar4 = &UNK_1104c7d58;
      func_0x000107c613fc(&UNK_1104c7d58,0x28,7);
      *(undefined8 *)(puVar4 + 0x10) = param_4;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      pcStack_70 = FUN_1020bf338;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_10134a1dc;
      puStack_78 = &UNK_1104c7d70;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c61174(param_4);
      func_0x000107c61574(puVar4);
      func_0x000107c5dc64(puVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(puVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_3);
      goto LAB_1020bece4;
    }
    func_0x000107c615e8(puVar1);
  }
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c453e4();
  func_0x000107c3fefc(param_4);
LAB_1020bece4:
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1020bed0c; end: 1020bee03;  */

/* WARNING: Possible PIC construction at 0x0001020bed74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bedc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bed78) */
/* WARNING: Removing unreachable block (ram,0x0001020bed9c) */
/* WARNING: Removing unreachable block (ram,0x0001020bedb0) */
/* WARNING: Removing unreachable block (ram,0x0001020bedc4) */

void FUN_1020bed0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
    func_0x000107c3fefc(param_3,param_2,puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61174(param_1);
    func_0x000107c4c194(puVar1);
    func_0x000107c61180();
    func_0x000107c51820();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020bee04; end: 1020bee63; -[_TtC24FriendsFeedGamesPresence34FriendsFeedGamesPresenceController init] */

void FUN_1020bee04(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FriendsFeedGamesPresence.FriendsFeedGamesPresenceController",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bee30);
  (*pcVar1)();
}



/* Entry: 1020bee64; end: 1020beefb; -[_TtC24FriendsFeedGamesPresence34FriendsFeedGamesPresenceController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001020bee80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020beeb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020beed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020beeb4) */
/* WARNING: Removing unreachable block (ram,0x0001020bee84) */
/* WARNING: Removing unreachable block (ram,0x0001020beed4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bee64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e56a90));
  return;
}



/* Entry: 1020beefc; end: 1020bef03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020beefc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  lVar1 = _DAT_1130710a8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112e56a80);
  if (lVar6 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112e56a90);
    func_0x000107c61428(lVar5 + _DAT_1130710a8,auStack_a0,0,0);
    lVar5 = lVar5 + lVar1;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c61174(lVar6);
      FUN_1020be98c();
      lVar1 = lVar6;
      func_0x000107c4adb4(lVar6);
      func_0x000107c61180();
      FUN_1020bf0e8(auStack_88,lVar6);
      func_0x0001000d224c(auStack_c8);
      uVar4 = uStack_b0;
      func_0x0001000a8868(auStack_c8,uStack_b0);
      lVar2 = lVar6;
      func_0x000107c52060(lVar6);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      (**(code **)(lStack_a8 + 8))
                (lVar5,lVar1,auStack_88,lVar3,uVar4,1,FUN_1020beb5c,0,uStack_b0,lStack_a8);
      func_0x000107c6142c(uVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar6);
      FUN_1020bf360(auStack_88);
      func_0x0001000834e4(auStack_c8);
    }
  }
  return;
}



/* Entry: 1020bef04; end: 1020befeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1020bef04(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar1 = param_2;
  func_0x000107c614f0();
  lVar2 = param_2 + _DAT_112e56a38;
  *(undefined8 *)(lVar2 + 8) = 0;
  func_0x000107c61614(lVar2,0);
  *(undefined ***)(lVar2 + 8) = &PTR_DAT_1104c7d30;
  func_0x000107c61604();
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + _DAT_112e56a40) = puVar3;
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + _DAT_112e56a48) = puVar3;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(0,0,0,0,&lStack_40,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1020bdca0();
  func_0x000107c61170(plVar4);
  func_0x000107c61170(param_1);
  return (undefined1 *)plVar4;
}



/* Entry: 1020befec; end: 1020bf0e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020befec(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112e56a80);
  if (uVar1 != 0) {
    func_0x000107c4adb4();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
      func_0x000107c6142c(param_4);
      uVar2 = uVar3 & 0xffffffffffff;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar2 = param_4 >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        func_0x000107c61170(uVar1);
      }
      else {
        puVar4 = PTR_PTR_1126ae560;
        func_0x000107c610f8(PTR_PTR_1126ae560);
        func_0x000107c453e4();
        FUN_1020beb60(param_1,param_2,uVar1,puVar4);
        func_0x000107c43bf4(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(uVar1);
        func_0x000107c61170(puVar4);
      }
    }
  }
  return;
}



/* Entry: 1020bf0e8; end: 1020bf1a7;  */

void FUN_1020bf0e8(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = param_2;
  func_0x000107c49ea0();
  uVar1 = param_2;
  func_0x000107c40674();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  uVar5 = param_3;
  func_0x000107c61170(uVar1);
  if ((uVar4 & 1) == 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (param_2 == 0) {
      uVar4 = 0;
      uVar3 = 1;
      uVar5 = 0xe000000000000000;
    }
    else {
      uVar4 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      uVar3 = 1;
    }
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = param_3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined1 *)(param_1 + 4) = uVar3;
  return;
}



/* Entry: 1020bf1a8; end: 1020bf317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bf1a8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  lVar1 = _DAT_1130710a8;
  lVar6 = *(long *)(unaff_x20 + _DAT_112e56a80);
  if (lVar6 != 0) {
    lVar5 = *(long *)(unaff_x20 + _DAT_112e56a90);
    func_0x000107c61428(lVar5 + _DAT_1130710a8,auStack_a0,0,0);
    lVar5 = lVar5 + lVar1;
    func_0x000107c61618();
    if (lVar5 != 0) {
      func_0x000107c61174(lVar6);
      FUN_1020be98c();
      lVar1 = lVar6;
      func_0x000107c4adb4(lVar6);
      func_0x000107c61180();
      FUN_1020bf0e8(auStack_88,lVar6);
      func_0x0001000d224c(auStack_c8);
      uVar4 = uStack_b0;
      func_0x0001000a8868(auStack_c8,uStack_b0);
      lVar2 = lVar6;
      func_0x000107c52060(lVar6);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      (**(code **)(lStack_a8 + 8))
                (lVar5,lVar1,auStack_88,lVar3,uVar4,1,FUN_1020beb5c,0,uStack_b0,lStack_a8);
      func_0x000107c6142c(uVar4);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar6);
      FUN_1020bf360(auStack_88);
      func_0x0001000834e4(auStack_c8);
    }
  }
  return;
}



/* Entry: 1020bf318; end: 1020bf337;  */

void FUN_1020bf318(void)

{
  func_0x000107c61168(&PTR_PTR_11281da80);
  return;
}



/* Entry: 1020bf338; end: 1020bf35f;  */

/* WARNING: Possible PIC construction at 0x0001020bed74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020bedc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020bed78) */
/* WARNING: Removing unreachable block (ram,0x0001020bed9c) */
/* WARNING: Removing unreachable block (ram,0x0001020bedb0) */
/* WARNING: Removing unreachable block (ram,0x0001020bedc4) */

void FUN_1020bf338(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
    func_0x000107c3fefc(uVar2,param_2,puVar1);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61174(param_1);
    func_0x000107c4c194(puVar1);
    func_0x000107c61180();
    func_0x000107c51820();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1020bf360; end: 1020bf393;  */

undefined8 FUN_1020bf360(undefined8 param_1)

{
  (*(code *)&DAT_104347ef4)();
  return param_1;
}



/* Entry: 1020bf394; end: 1020bf3a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bf394(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112e56a80;
  if (lVar2 == 0) {
    return;
  }
  uVar3 = *(ulong *)(lVar2 + _DAT_112e56a80);
  lVar4 = 0;
  if (uVar3 != 0) {
    func_0x000107c49cec();
    if ((uVar3 & 1) != 0) goto LAB_1020be750;
    lVar4 = *(long *)(lVar2 + lVar1);
    if ((lVar4 != 0) && (*(long *)(lVar2 + _DAT_112e56a88) != 0)) {
      func_0x000107c4ff34(*(long *)(lVar2 + _DAT_112e56a88));
      lVar4 = *(long *)(lVar2 + lVar1);
    }
  }
  *(undefined8 *)(lVar2 + lVar1) = param_1;
  func_0x000107c61170(lVar4);
  func_0x000107c61174(param_1);
  FUN_1020be76c(param_1);
LAB_1020be750:
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1020bf3a4; end: 1020bf3fb;  */

void FUN_1020bf3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 1020bf3fc; end: 1020bf40f;  */

void FUN_1020bf3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 1020bf410; end: 1020bf5fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1020bf410(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  func_0x0001000285a8(0x112d3b7c8,&UNK_10da59ea0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c4b1cc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000bda74();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_113070048);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6157c(uVar8);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x30) + _DAT_113083868);
  lVar4 = 0;
  FUN_1020bf318();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = _DAT_112e56a78;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar1) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112e56a80) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e56a88) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e56a90) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112e56a98) = uVar8;
  *(undefined8 *)(lVar5 + _DAT_112e56aa0) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112e56aa8) = uVar9;
  *(undefined8 *)(lVar5 + _DAT_112e56ab0) = uVar10;
  puVar6 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c6157c(uVar8);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61174(uVar9);
  func_0x000107c61154(&lStack_70,puVar6);
  func_0x000107c61180();
  FUN_1020be5b0();
  func_0x000107c61170(plVar7);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long **)(unaff_x20 + 0x38) = plVar7;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1020bf5fc; end: 1020bf647;  */

void FUN_1020bf5fc(void)

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



/* Entry: 1020bf648; end: 1020bf667;  */

void FUN_1020bf648(void)

{
  FUN_1020bf410();
  return;
}



/* Entry: 1020bf668; end: 1020bf66f;  */

undefined8 FUN_1020bf668(void)

{
  return 0;
}



/* Entry: 1020bf670; end: 1020bf68f;  */

void FUN_1020bf670(void)

{
  func_0x000107c61168(&PTR_PTR_112e56b20);
  return;
}



/* Entry: 1020bf690; end: 1020bf75b;  */

undefined1  [16] FUN_1020bf690(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffef;
  func_0x000107c5fadc(0xd000000000000011,0x800000010f061b80);
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f061ba0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020bf75c);
  (*pcVar1)();
}



/* Entry: 1020bf75c; end: 1020bfb93;  */

void FUN_1020bf75c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e56ba8,&UNK_10da59f20);
  puVar1 = &UNK_1104c7ec8;
  func_0x000107c613fc(&UNK_1104c7ec8,0xd0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_20;
  *(undefined8 *)(puVar1 + 0x18) = param_21;
  *(undefined8 *)(puVar1 + 0x20) = param_22;
  *(undefined8 *)(puVar1 + 0x28) = param_23;
  *(undefined8 *)(puVar1 + 0x30) = param_24;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_1;
  *(undefined8 *)(puVar1 + 0x48) = param_16;
  *(undefined8 *)(puVar1 + 0x50) = param_15;
  *(undefined8 *)(puVar1 + 0x58) = param_6;
  *(undefined8 *)(puVar1 + 0x60) = param_7;
  *(undefined8 *)(puVar1 + 0x68) = param_18;
  *(undefined8 *)(puVar1 + 0x70) = param_10;
  *(undefined8 *)(puVar1 + 0x78) = param_3;
  *(undefined8 *)(puVar1 + 0x80) = param_19;
  *(undefined8 *)(puVar1 + 0x88) = param_9;
  *(undefined8 *)(puVar1 + 0x90) = param_8;
  *(undefined8 *)(puVar1 + 0x98) = param_11;
  *(undefined8 *)(puVar1 + 0xa0) = param_2;
  *(undefined8 *)(puVar1 + 0xa8) = param_12;
  *(undefined8 *)(puVar1 + 0xb0) = param_13;
  *(undefined8 *)(puVar1 + 0xb8) = param_14;
  *(undefined8 *)(puVar1 + 0xc0) = param_4;
  *(undefined8 *)(puVar1 + 200) = param_17;
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_17);
  func_0x0001000823a8(0x1020bf988,puVar1);
  return;
}



/* Entry: 1020bfb94; end: 1020bfba3;  */

undefined1  [16] FUN_1020bfb94(void)

{
  return ZEXT816(0x1104c7ef0);
}



/* Entry: 1020bfba4; end: 1020bfc7f;  */

void FUN_1020bfba4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1020bfc80; end: 1020c00ab;  */

void FUN_1020bfc80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  long unaff_x20;
  undefined8 uVar27;
  undefined8 auStack_70 [2];
  
  uVar17 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar20 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar21 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar24 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar26 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0xc0);
  uVar15 = *(undefined8 *)(unaff_x20 + 200);
  uVar27 = *param_2;
  func_0x0001000285a8(0x112e56bb8,&UNK_10da59f98);
  puVar16 = auStack_70;
  auStack_70[0] = uVar27;
  func_0x0001000838ec();
  func_0x0001020ca8c8();
  func_0x000100082720("ChatCameraExposerServiceProvider",0x20,2);
  FUN_1020ca8fc(uVar18);
  func_0x000100082720("ChatScopeExposerServiceProvider",0x1f,2);
  FUN_1020ca930(uVar19);
  func_0x000100082720("FriendProfileScopeExposerServiceProvider",0x28,2);
  FUN_1020ca964(uVar20);
  func_0x000100082720("FullMapScopeExposerServiceProvider",0x22,2);
  FUN_1020ca998(uVar21);
  func_0x000100082720("MapSnapshotScopeExposerServiceProvider",0x26,2);
  FUN_1020c452c(uVar22,uVar23,uVar7);
  func_0x000100082720("NearMeImageFetcherServiceProvider",0x21,2);
  uVar23 = uVar22;
  FUN_1020c0864(uVar22,uVar21,uVar24,puVar16);
  func_0x000100082720("NearMeActionMenuPresenterServiceProvider",0x28,2);
  uVar24 = uVar23;
  FUN_1020c7298(uVar23,uVar17,uVar8,uVar18,uVar26,uVar9,uVar19,uVar20,uVar1,uVar10,puVar16,uVar2);
  func_0x000100082720("NearMeRouterServiceProvider",0x1b,2);
  puVar25 = puVar16;
  FUN_1020cb6c0(puVar16,uVar11,uVar3,uVar12,uVar4,uVar13,uVar5,uVar14,uVar6,uVar15,uVar24);
  func_0x0001002acff8("NearMeViewModelServiceProvider",0x1e,2);
  uVar26 = uVar22;
  FUN_1020c1440(uVar22,puVar25,puVar16);
  func_0x000107c61574(puVar25);
  func_0x000107c61574(uVar24);
  func_0x000107c61574(uVar23);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(uVar21);
  func_0x000107c61574(uVar20);
  func_0x000107c61574(uVar19);
  func_0x000107c61574(uVar18);
  func_0x000107c61574(uVar17);
  func_0x000107c61574(puVar16);
  func_0x000100082720("FriendsFeedNearMePresenterEntryPointProvider",0x2c,2);
  *param_1 = uVar26;
  return;
}



/* Entry: 1020c00ac; end: 1020c00c7;  */

void FUN_1020c00ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1020c00c8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1020c00c8; end: 1020c020b;  */

undefined * FUN_1020c00c8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020c020c);
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
    puVar3 = (undefined *)0x112e56c00;
    func_0x0001000285a8(0x112e56c00,&UNK_10da59fe8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e56bf8;
    func_0x0001000285a8(0x112e56bf8,&UNK_10da59fe0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1020c020c; end: 1020c030b;  */

undefined * FUN_1020c020c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e56be8,&UNK_10da59fd0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020c0308);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020c030c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 1020c030c; end: 1020c047f;  */

undefined * FUN_1020c030c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  ulong *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar13 = 0x112e56c08;
  func_0x0001000285a8(0x112e56c08,&UNK_10da59ff0);
  lVar11 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x8);
  puVar10 = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar10 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e56c10,&UNK_10da59ff8);
    puVar6 = puVar10;
    func_0x000107c60498();
    iVar4 = *(int *)(lVar13 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar13 = *(long *)(lVar11 + 0x48);
    func_0x000107c6157c();
    do {
      FUN_1020c0480(param_1,puVar9);
      uVar2 = *puVar9;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x8);
      uVar7 = uVar2;
      uVar8 = uVar3;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020c047c);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar12 = *(long *)(puVar6 + 0x38);
      lVar11 = 0;
      func_0x0001020d1180();
      func_0x0001020c04d0((long)puVar9 + (long)iVar4,
                          lVar12 + *(long *)(*(long *)(lVar11 + -8) + 0x48) * uVar7);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020c0480);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar13;
      puVar10 = puVar10 + -1;
    } while (puVar10 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1020c0480; end: 1020c0513;  */

undefined8 FUN_1020c0480(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112e56c08;
  func_0x0001000285a8(0x112e56c08,&UNK_10da59ff0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1020c0514; end: 1020c0527;  */

void FUN_1020c0514(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104c7fe0;
  if (lRam0000000112e56c18 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112e56c18 = param_1;
  }
  return;
}



/* Entry: 1020c0528; end: 1020c0597;  */

void FUN_1020c0528(long param_1,long *param_2,long param_3)

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



/* Entry: 1020c0598; end: 1020c05ef;  */

/* WARNING: Possible PIC construction at 0x0001020c05cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c05d0) */
/* WARNING: Removing unreachable block (ram,0x000101107198) */
/* WARNING: Removing unreachable block (ram,0x0001011071a4) */
/* WARNING: Removing unreachable block (ram,0x0001011071a0) */

void FUN_1020c0598(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1020c05f0; end: 1020c0603;  */

/* WARNING: Possible PIC construction at 0x0001020c0638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c063c) */
/* WARNING: Removing unreachable block (ram,0x000101107184) */
/* WARNING: Removing unreachable block (ram,0x000101107190) */
/* WARNING: Removing unreachable block (ram,0x00010110718c) */

void FUN_1020c05f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 8),
             *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Entry: 1020c0604; end: 1020c065b;  */

/* WARNING: Possible PIC construction at 0x0001020c0638: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020c063c) */
/* WARNING: Removing unreachable block (ram,0x000101107184) */
/* WARNING: Removing unreachable block (ram,0x000101107190) */
/* WARNING: Removing unreachable block (ram,0x00010110718c) */

void FUN_1020c0604(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1020c065c; end: 1020c072b;  */

undefined8 * FUN_1020c065c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1020c0598(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 1020c072c; end: 1020c0773;  */

undefined8 * FUN_1020c072c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1020c0604(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 1020c0774; end: 1020c0863;  */

int FUN_1020c0774(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7c < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x7d;
  }
  uVar1 = ((uint)(*(byte *)(param_1 + 8) >> 6) | (*(byte *)(param_1 + 8) >> 1 & 0x1f) << 2) ^ 0x7f;
  if (0x7b < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1020c0864; end: 1020c09d3;  */

void FUN_1020c0864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e56c20,&UNK_10da5a060);
  puVar1 = &UNK_1104c80a0;
  func_0x000107c613fc(&UNK_1104c80a0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1020c09d4,puVar1);
  return;
}


