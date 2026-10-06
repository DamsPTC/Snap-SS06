/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d7b1d8; end: 102d7b283;  */

void FUN_102d7b1d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d7b284; end: 102d7b2bb;  */

void FUN_102d7b284(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 102d7b2bc; end: 102d7b30b;  */

void FUN_102d7b2bc(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112f14b48 != 0) {
    return;
  }
  puVar1 = &UNK_1105cd0e0;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112f14b48 = param_1;
  return;
}



/* Entry: 102d7b30c; end: 102d7b323;  */

bool FUN_102d7b30c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d7b324; end: 102d7b363;  */

void FUN_102d7b324(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14b50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db49db0;
  func_0x000107c61520(&UNK_10db49db0,&UNK_1105cd158);
  puRam0000000112f14b50 = puVar1;
  return;
}



/* Entry: 102d7b364; end: 102d7b40f;  */

void FUN_102d7b364(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102d7b410; end: 102d7b447;  */

void FUN_102d7b410(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 2) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 1 < uVar2;
  return;
}



/* Entry: 102d7b448; end: 102d7b7af;  */

long FUN_102d7b448(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102d7b7b0; end: 102d7b7bf; -[_TtC32MessageActionMenuItemPluginScope32MessageActionMenuItemPluginScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14b58));
  return;
}



/* Entry: 102d7b7c0; end: 102d7b857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b7c0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14b58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7b858; end: 102d7b8af; -[_TtC32MessageActionMenuItemPluginScope32MessageActionMenuItemPluginScope initWithPlugInRegistry:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b858(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f14b58) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 102d7b8b0; end: 102d7b90f; -[_TtC32MessageActionMenuItemPluginScope32MessageActionMenuItemPluginScope init] */

void FUN_102d7b8b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MessageActionMenuItemPluginScope.MessageActionMenuItemPluginScope",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7b8dc);
  (*pcVar1)();
}



/* Entry: 102d7b910; end: 102d7b91f; -[_TtC32MessageActionMenuItemPluginScope32MessageActionMenuItemPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b910(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f14b58));
  return;
}



/* Entry: 102d7b920; end: 102d7b93f;  */

void FUN_102d7b920(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4280);
  return;
}



/* Entry: 102d7b940; end: 102d7b94f; -[SCMessageActionMenuContext conversationParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14b88));
  return;
}



/* Entry: 102d7b950; end: 102d7b95f; -[SCMessageActionMenuContext hasSummarizedUserListsEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d7b950(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f14b90);
}



/* Entry: 102d7b960; end: 102d7b96f; -[SCMessageActionMenuContext focusedMessageContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14b98));
  return;
}



/* Entry: 102d7b970; end: 102d7b97f; -[SCMessageActionMenuContext conversationSubtype] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102d7b970(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f14ba0);
}



/* Entry: 102d7b980; end: 102d7b98f; -[SCMessageActionMenuContext canUserSendMessage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d7b980(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112f14ba8);
}



/* Entry: 102d7b990; end: 102d7bac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7b990(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14b88) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f14b90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f14b98) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14ba0) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_112f14ba8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7bac8; end: 102d7bb77; -[SCMessageActionMenuContext initWithConversationParticipants:hasSummarizedUserListsEnabled:focusedMessageContent:conversationSubtype:canUserSendMessage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bac8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f14b88) = param_3;
  *(undefined1 *)(param_1 + _DAT_112f14b90) = param_4;
  *(undefined8 *)(param_1 + _DAT_112f14b98) = param_5;
  *(undefined8 *)(param_1 + _DAT_112f14ba0) = param_6;
  *(undefined1 *)(param_1 + _DAT_112f14ba8) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_50,puVar1);
  return;
}



/* Entry: 102d7bb78; end: 102d7bc03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bb78(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14b88) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_112f14b90) = *(undefined1 *)(param_1 + 1);
  uVar1 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_112f14b98) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_112f14ba0) = uVar1;
  *(undefined1 *)(unaff_x20 + _DAT_112f14ba8) = *(undefined1 *)(param_1 + 4);
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7bc04; end: 102d7bc07; -[SCMessageActionMenuContext copyWithZone:] */

void FUN_102d7bc04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d7bc08; end: 102d7bc23; -[SCMessageActionMenuContext description] */

void FUN_102d7bc08(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7bc24; end: 102d7bc9f; -[SCMessageActionMenuContext init] */

void FUN_102d7bc24(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MessageActionMenuItemPluginScope/MessageActionMenuContextWrapper.swift",0x46,
                      2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7bc6c);
  (*pcVar1)();
}



/* Entry: 102d7bca0; end: 102d7bcd7; -[SCMessageActionMenuContext .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d7bcbc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d7bcc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bca0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f14b88));
  return;
}



/* Entry: 102d7bcd8; end: 102d7bcf7;  */

void FUN_102d7bcd8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4340);
  return;
}



/* Entry: 102d7bcf8; end: 102d7bd07; -[SCMessageActionMenuFocusedMessageContext focusedMessageViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bcf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f14bd8));
  return;
}



/* Entry: 102d7bd08; end: 102d7bd27; -[SCMessageActionMenuFocusedMessageContext focusedMessageCell] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bd08(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f14be0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7bd28; end: 102d7bd2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bd28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14bd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14be0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7bd30; end: 102d7be6f; -[SCMessageActionMenuFocusedMessageContext initWithFocusedMessageViewModel:focusedMessageCell:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bd30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112f14bd8) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f14be0) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 102d7be70; end: 102d7be73; -[SCMessageActionMenuFocusedMessageContext copyWithZone:] */

void FUN_102d7be70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102d7be74; end: 102d7be8f; -[SCMessageActionMenuFocusedMessageContext description] */

void FUN_102d7be74(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d7be90; end: 102d7bf0b; -[SCMessageActionMenuFocusedMessageContext init] */

void FUN_102d7be90(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "MessageActionMenuItemPluginScope/MessageActionMenuFocusedMessageContextWrapper.swift"
                      ,0x54,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d7bed8);
  (*pcVar1)();
}



/* Entry: 102d7bf0c; end: 102d7bf43; -[SCMessageActionMenuFocusedMessageContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bf0c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f14bd8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f14be0));
  return;
}



/* Entry: 102d7bf44; end: 102d7bf63;  */

void FUN_102d7bf44(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4428);
  return;
}



/* Entry: 102d7bf64; end: 102d7bf67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7bf64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f14bd8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f14be0) = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d7bf68; end: 102d7c043;  */

void FUN_102d7bf68(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_102d7ca9c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Entry: 102d7c044; end: 102d7c04f; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope socialContextTopFriendAvatarUrls] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c044(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14c88;
  func_0x000107c61428(param_1 + _DAT_112f14c88,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d7c050; end: 102d7c05b; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setSocialContextTopFriendAvatarUrls:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c050(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar1 = _DAT_112f14c88;
  func_0x000107c61428(param_1 + _DAT_112f14c88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102d7c05c; end: 102d7c067; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope socialContextTopFriendFirstNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c05c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14c90;
  func_0x000107c61428(param_1 + _DAT_112f14c90,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d7c068; end: 102d7c073; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setSocialContextTopFriendFirstNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c068(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar1 = _DAT_112f14c90;
  func_0x000107c61428(param_1 + _DAT_112f14c90,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102d7c074; end: 102d7c07f; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope socialContextTopFriendAvatarFirstNames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c074(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f14c98;
  func_0x000107c61428(param_1 + _DAT_112f14c98,auStack_38,0,0);
  uVar3 = *(undefined8 *)(param_1 + lVar1);
  uVar2 = uVar3;
  func_0x000107c61434(uVar3);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102d7c080; end: 102d7c0e3;  */

void FUN_102d7c080(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_38 [24];
  
  lVar3 = *param_3;
  func_0x000107c61428(param_1 + lVar3,auStack_38,0,0);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fc48();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d7c0e4; end: 102d7c0ef; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setSocialContextTopFriendAvatarFirstNames:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c0e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar1 = _DAT_112f14c98;
  func_0x000107c61428(param_1 + _DAT_112f14c98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 102d7c0f0; end: 102d7c157;  */

void FUN_102d7c0f0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 102d7c158; end: 102d7c163; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c158(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14ca0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c164; end: 102d7c16f; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteTitle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c164(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14ca0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c170; end: 102d7c17b; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteImageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c170(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14ca8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c17c; end: 102d7c187; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteImageUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c17c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14ca8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c188; end: 102d7c193; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c188(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14cb0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c194; end: 102d7c19f; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c194(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14cb0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c1a0; end: 102d7c1ab; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviterFirstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1a0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14cb8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c1ac; end: 102d7c1b7; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviterFirstName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1ac(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14cb8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c1b8; end: 102d7c1c3; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviterAvatarUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1b8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14cc0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c1c4; end: 102d7c1cf; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviterAvatarUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1c4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14cc0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c1d0; end: 102d7c1db; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteBgColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1d0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14cc8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c1dc; end: 102d7c1e7; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteBgColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1dc(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14cc8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c1e8; end: 102d7c1f3; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteStartTimestamp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1e8(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14cd0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c1f4; end: 102d7c1ff; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteStartTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c1f4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14cd0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c200; end: 102d7c20b; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteHeroImageUrl] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c200(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14cd8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c20c; end: 102d7c217; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteHeroImageUrl:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c20c(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14cd8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c218; end: 102d7c223; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteEventsJson] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c218(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14ce0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c224; end: 102d7c22f; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteEventsJson:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c224(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14ce0);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c230; end: 102d7c23b; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope inviteLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c230(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f14ce8);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c23c; end: 102d7c2af;  */

void FUN_102d7c23c(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + *param_3);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  lVar2 = puVar1[1];
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
    func_0x000107c61434(lVar2);
    func_0x000107c5fadc(uVar3,lVar2);
    func_0x000107c6142c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7c2b0; end: 102d7c2bb; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope setInviteLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c2b0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + _DAT_112f14ce8);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c2bc; end: 102d7c333;  */

void FUN_102d7c2bc(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  plVar1 = (long *)(param_1 + *param_4);
  func_0x000107c61428(plVar1,auStack_48,1,0);
  lVar2 = plVar1[1];
  *plVar1 = param_3;
  plVar1[1] = param_2;
  func_0x000107c6142c(lVar2);
  return;
}



/* Entry: 102d7c334; end: 102d7c62f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d7c334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_90 [8];
  undefined1 auStack_80 [32];
  
  func_0x000107c610f8();
  lVar3 = _DAT_112f14c38;
  func_0x000107c61614(unaff_x20 + _DAT_112f14c38,0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112f14c88) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112f14c90) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f14c98) = puVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ca0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ca8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ce8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c10) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c18);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c20) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c28) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c30);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c40);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c48);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c50);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c58) = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c60);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c68);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_112f14c70) = (undefined1)param_19;
  *(undefined1 *)(unaff_x20 + _DAT_112f14c78) = param_19._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112f14c80) = param_19._2_1_;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_21);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_90;
  func_0x000107c61154(puVar4,puVar2);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_21);
  return puVar4;
}



/* Entry: 102d7c630; end: 102d7c6af;  */

undefined8 FUN_102d7c630(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_stack_00000058;
  
  uVar1 = param_1;
  FUN_102d7cabc();
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(in_stack_00000058);
  return uVar1;
}



/* Entry: 102d7c6b0; end: 102d7c8ab; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope initWithUIContainer:firstName:source:campaignToken:customCampaignToken:socialContextFriendName:socialContextFriendBitmojiUrl:socialContextSecondFriendBitmojiUrl:socialContextFriendsCount:schoolName:schoolColor:showCommunityVariant:showGeneralizedFriendProfileVariant:showGeneralizedMyProfileVariant:delegate:] */

undefined8
FUN_102d7c6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9,
             long param_10,undefined8 param_11,long param_12,long param_13,undefined1 param_14,
             undefined4 param_15,undefined8 param_16)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  if (param_4 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_90 = param_2;
    uStack_88 = param_4;
  }
  if (param_7 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_a0 = param_2;
    uStack_98 = param_7;
  }
  if (param_8 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_b0 = param_2;
    uStack_a8 = param_8;
  }
  func_0x000107c615f0(param_3);
  lVar1 = param_9;
  func_0x000107c61174();
  lVar2 = param_10;
  func_0x000107c61174();
  lVar3 = param_12;
  func_0x000107c61174();
  lVar4 = param_13;
  func_0x000107c61174();
  func_0x000107c615f0(param_16);
  if (lVar1 == 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uVar7 = param_2;
    param_2 = uStack_c0;
  }
  else {
    func_0x000107c5faec();
    uVar7 = param_2;
    func_0x000107c61170(lVar1);
    uStack_b8 = param_9;
  }
  if (lVar2 == 0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uVar5 = uVar7;
  }
  else {
    func_0x000107c5faec();
    uVar5 = uVar7;
    func_0x000107c61170(lVar2);
    uStack_e0 = uVar7;
    uStack_d8 = param_10;
  }
  if (lVar3 == 0) {
    param_12 = 0;
    uVar6 = 0;
    uVar7 = uVar5;
  }
  else {
    func_0x000107c5faec();
    uVar7 = uVar5;
    func_0x000107c61170(lVar3);
    uVar6 = uVar5;
  }
  if (lVar4 == 0) {
    param_13 = 0;
    uVar7 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  uVar5 = param_3;
  FUN_102d7cabc(param_3,uStack_88,uStack_90,param_5,param_6,uStack_98,uStack_a0,uStack_a8,uStack_b0,
                uStack_b8,param_2,uStack_d8,uStack_e0,param_11,param_12,uVar6,param_13,uVar7,
                param_14);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_16);
  return uVar5;
}



/* Entry: 102d7c8ac; end: 102d7c8df;  */

void FUN_102d7c8ac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d7c8e0; end: 102d7ca9b; -[_TtC23SCSaturnUpsellTrayScope23SCSaturnUpsellTrayScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d7c910: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7c948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7c970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7c998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7c9b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7c9dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7ca04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7ca2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7ca54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d7ca7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d7ca58) */
/* WARNING: Removing unreachable block (ram,0x000102d7ca30) */
/* WARNING: Removing unreachable block (ram,0x000102d7ca08) */
/* WARNING: Removing unreachable block (ram,0x000102d7c9e0) */
/* WARNING: Removing unreachable block (ram,0x000102d7c9bc) */
/* WARNING: Removing unreachable block (ram,0x000102d7c99c) */
/* WARNING: Removing unreachable block (ram,0x000102d7c974) */
/* WARNING: Removing unreachable block (ram,0x000102d7c94c) */
/* WARNING: Removing unreachable block (ram,0x000102d7c914) */
/* WARNING: Removing unreachable block (ram,0x000102d7ca80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7c8e0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f14c10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f14c18 + 8))
  ;
  return;
}



/* Entry: 102d7ca9c; end: 102d7cabb;  */

undefined1  [16] FUN_102d7ca9c(ulong param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0;
  if (param_1 < 6) {
    uVar1 = param_1;
  }
  auVar2[8] = 5 < param_1;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}



/* Entry: 102d7cabc; end: 102d7cd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d7cabc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
                  undefined8 param_21)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_80 [32];
  
  func_0x000107c614f0();
  lVar3 = _DAT_112f14c38;
  func_0x000107c61614(unaff_x20 + _DAT_112f14c38,0);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112f14c88) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + _DAT_112f14c90) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f14c98) = puVar2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ca0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ca8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cb0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cb8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cc0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cc8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cd0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14cd8);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ce0);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14ce8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c10) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c18);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c20) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c28) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c30);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c40);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c48);
  *puVar1 = param_10;
  puVar1[1] = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c50);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112f14c58) = param_14;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c60);
  *puVar1 = param_15;
  puVar1[1] = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f14c68);
  *puVar1 = param_17;
  puVar1[1] = param_18;
  *(undefined1 *)(unaff_x20 + _DAT_112f14c70) = (undefined1)param_19;
  *(undefined1 *)(unaff_x20 + _DAT_112f14c78) = param_19._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112f14c80) = param_19._2_1_;
  func_0x000107c61428(unaff_x20 + lVar3,auStack_80,1,0);
  func_0x000107c61604(unaff_x20 + lVar3,param_21);
  puVar2 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  func_0x000107c61154(&stack0xffffffffffffff70,puVar2);
  return;
}



/* Entry: 102d7cd98; end: 102d7cdbb;  */

undefined8 FUN_102d7cd98(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102d7cdbc; end: 102d7cdbf;  */

void FUN_102d7cdbc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db49f50;
  func_0x000107c61520(&UNK_10db49f50,&UNK_1105cd360);
  puRam0000000112f14cf0 = puVar1;
  return;
}



/* Entry: 102d7cdc0; end: 102d7cdff;  */

void FUN_102d7cdc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db49f50;
  func_0x000107c61520(&UNK_10db49f50,&UNK_1105cd360);
  puRam0000000112f14cf0 = puVar1;
  return;
}



/* Entry: 102d7ce00; end: 102d7ce03;  */

void FUN_102d7ce00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db49ff0;
  func_0x000107c61520(&UNK_10db49ff0,&UNK_1105cd380);
  puRam0000000112f14cf8 = puVar1;
  return;
}



/* Entry: 102d7ce04; end: 102d7ce43;  */

void FUN_102d7ce04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f14cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db49ff0;
  func_0x000107c61520(&UNK_10db49ff0,&UNK_1105cd380);
  puRam0000000112f14cf8 = puVar1;
  return;
}



/* Entry: 102d7ce44; end: 102d7ce63;  */

undefined1  [16] FUN_102d7ce44(void)

{
  return ZEXT816(0x1105cd360);
}



/* Entry: 102d7ce64; end: 102d7ce83;  */

void FUN_102d7ce64(void)

{
  func_0x000107c61168(&PTR_PTR_1128a44f8);
  return;
}



/* Entry: 102d7ce84; end: 102d7ceab;  */

bool FUN_102d7ce84(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102d7ceac; end: 102d7d143;  */

void FUN_102d7ceac(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  code *pcVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar2 = 0x112d36580;
  uStack_80 = param_4;
  uStack_78 = param_5;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_90 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar15 = (long)puVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eb9c();
  lVar11 = *(long *)(lVar4 + -8);
  lVar2 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102d7d0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 0x38))(param_1,1,1,lVar3);
    return;
  }
  uStack_88 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  func_0x000107c5eb78(lVar13);
  func_0x000100e8b654();
  lVar5 = lVar13;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c60200(lVar13,PTR___sSSN_11034da80,lVar2);
  (**(code **)(lVar11 + 8))(lVar13,lVar4);
  if (puVar8 != (undefined *)0x0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(99);
    func_0x000107c5fb78(0xd000000000000042,0x800000010f10c6c0);
    func_0x000107c5fb78(lVar5,puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c5fb78(0xd00000000000001d,0x800000010f10c710);
    func_0x000107c5fb78(uStack_80,uStack_78);
    uVar1 = uStack_68;
    func_0x000107c5edd0(puVar12,uStack_70,uStack_68);
    func_0x000107c6142c(uVar1);
    puVar6 = puVar12;
    (**(code **)(lVar14 + 0x30))(puVar12,1,lVar3);
    if ((int)puVar6 != 1) {
      pcVar10 = *(code **)(lVar14 + 0x20);
      (*pcVar10)(lVar15,puVar12,lVar3);
      uVar7 = uStack_88;
      (*pcVar10)(uStack_88,lVar15,lVar3);
      pcVar10 = *(code **)(lVar14 + 0x38);
      uVar9 = 0;
      goto LAB_102d7d118;
    }
    FUN_102d7de2c(puVar12,0x112d36580,&UNK_10d9016d0);
  }
  pcVar10 = *(code **)(lVar14 + 0x38);
  uVar9 = 1;
  uVar7 = uStack_88;
LAB_102d7d118:
  (*pcVar10)(uVar7,uVar9,1,lVar3);
  return;
}



/* Entry: 102d7d144; end: 102d7d2d7; -[SaturnDeepLinkProcessor openSaturnProfileWithUserId:surface:] */

void FUN_102d7d144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  puVar3 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5faec(param_3);
  puVar4 = puVar3;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_102d7ceac(puVar5,param_3,puVar3,param_4,puVar4);
  puVar2 = puVar5;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar3);
    func_0x000107c6142c(puVar4);
    FUN_102d7de2c(puVar5,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar6,puVar5,lVar1);
    FUN_102d7da74(lVar6);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(puVar3);
    func_0x000107c6142c(puVar4);
    (**(code **)(lVar7 + 8))(lVar6,lVar1);
  }
  return;
}



/* Entry: 102d7d2d8; end: 102d7d2db;  */

void FUN_102d7d2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  lVar3 = 0x112e10020;
  func_0x0001000285a8(0x112e10020,&UNK_10d9eb238);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x20) =
       *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x40) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar3 + 0x28) = 1;
  func_0x000107c61174();
  lVar4 = lVar3;
  func_0x000100dfa5c8(lVar3);
  func_0x000107c61588(lVar3);
  FUN_102d7de2c((undefined8 *)(lVar3 + 0x20),0x112d377b8,&UNK_10d9016f0);
  uVar5 = 0;
  func_0x000100dfa6ec(0);
  uVar6 = 0x112d377a8;
  FUN_102d7dea8(0x112d377a8,&UNK_10d901780);
  lVar3 = lVar4;
  func_0x000107c5f9dc(lVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
  func_0x000107c6142c(lVar4);
  puVar7 = &UNK_1105cd4c8;
  func_0x000107c613fc(&UNK_1105cd4c8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_2;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  uStack_a8 = 0x102d7de6c;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ab47f8;
  puStack_b0 = &UNK_1105cd4e0;
  ppuVar8 = &puStack_c8;
  puStack_a0 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_a0;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar7);
  func_0x000107c4de70(puVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102d7d2dc; end: 102d7d4e3; -[SaturnDeepLinkProcessor openSaturnProfileWithUserId:surface:completion:] */

void FUN_102d7d2dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  uStack_68 = param_1;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_70 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar5 = puVar4;
  func_0x000107c5faec(param_4);
  puVar2 = &UNK_1105cd4a0;
  func_0x000107c613fc(&UNK_1105cd4a0,0x18,7);
  *(long *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174();
  func_0x000107c60bc4(param_5);
  FUN_102d7ceac(puVar7,param_3,puVar4,param_4,puVar5);
  puVar3 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,lVar1);
  if ((int)puVar3 == 1) {
    FUN_102d7de2c(puVar7,0x112d36580,&UNK_10d9016d0);
    (**(code **)(param_5 + 0x10))(param_5,0);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(uStack_68);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar5);
    func_0x000107c60bd0(param_5);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,puVar7,lVar1);
    FUN_102d7dc20(lVar6,0x102d7def0,puVar2);
    func_0x000107c61574(puVar2);
    func_0x000107c61170(uStack_68);
    func_0x000107c6142c(puVar4);
    func_0x000107c6142c(puVar5);
    func_0x000107c60bd0(param_5);
    (**(code **)(lVar8 + 8))(lVar6,lVar1);
  }
  return;
}



/* Entry: 102d7d4e4; end: 102d7d603; -[SaturnDeepLinkProcessor saturnProfileURLWithUserId:surface:] */

void FUN_102d7d4e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  puVar4 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  func_0x000107c5faec(param_3);
  puVar5 = puVar4;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_102d7ceac(puVar6,param_3,puVar4,param_4,puVar5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar5);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  puVar2 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ed90(0);
    (**(code **)(lVar7 + 8))(puVar6,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d7d604; end: 102d7d6c7; -[SaturnDeepLinkProcessor copyLinkForDeferredOpenWithDeepLinkURL:] */

void FUN_102d7d604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5edb4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x000107c61168(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  func_0x000107c43d80();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5ed90();
  func_0x000107c5a120(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 102d7d6c8; end: 102d7d89b;  */

void FUN_102d7d6c8(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) == 0) {
    func_0x000107c5edd0(puVar10,0xd00000000000003a,0x800000010f10c730);
    puVar2 = puVar10;
    (**(code **)(lVar11 + 0x30))(puVar10,1,lVar1);
    if ((int)puVar2 == 1) {
      FUN_102d7de2c(puVar10,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar1);
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c5ed90();
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar6 = 0;
      func_0x000100dfa6ec(0);
      uVar7 = 0x112d377a8;
      FUN_102d7dea8(0x112d377a8,&UNK_10d901780);
      puVar8 = puVar5;
      func_0x000107c5f9dc(puVar5,uVar6,PTR___sypN_11034f1a8 + 8,uVar7);
      func_0x000107c6142c(puVar5);
      func_0x000107c4de70(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar8);
      (**(code **)(lVar11 + 8))(lVar9,lVar1);
    }
  }
  return;
}



/* Entry: 102d7d89c; end: 102d7d91f; -[SaturnDeepLinkProcessor processDeepLinkURLWithDeepLinkURL:] */

void FUN_102d7d89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar2,param_3);
  FUN_102d7da74(puVar2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Entry: 102d7d920; end: 102d7da03; -[SaturnDeepLinkProcessor processDeepLinkURLWithDeepLinkURL:completion:] */

void FUN_102d7d920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  func_0x000107c5edb4(puVar3,param_3);
  puVar2 = &UNK_1105cd478;
  func_0x000107c613fc(&UNK_1105cd478,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_102d7dc20(puVar3,FUN_102d7de18,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar2);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
  return;
}



/* Entry: 102d7da04; end: 102d7da3f; -[SaturnDeepLinkProcessor init] */

void FUN_102d7da04(undefined8 param_1)

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



/* Entry: 102d7da40; end: 102d7da73;  */

void FUN_102d7da40(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d7da74; end: 102d7dc1f;  */

void FUN_102d7da74(ulong param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar7 = &puStack_70;
  func_0x000107c5edbc();
  if (param_2 != 0) {
    lVar8 = param_2;
    func_0x000107c5fb1c();
    func_0x000107c6142c(param_2);
    if ((param_1 == 0x757461732e746567) && (lVar8 == -0x109a899693d1918e)) {
      func_0x000107c6142c(0xef6576696c2e6e72);
    }
    else {
      func_0x000107c605b8(param_1,lVar8,0x757461732e746567,0xef6576696c2e6e72,0);
      func_0x000107c6142c(lVar8);
      if ((param_1 & 1) == 0) {
        return;
      }
    }
    puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5ed90();
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar4 = 0;
    func_0x000100dfa6ec(0);
    uVar5 = 0x112d377a8;
    FUN_102d7dea8(0x112d377a8,&UNK_10d901780);
    puVar6 = puVar3;
    func_0x000107c5f9dc(puVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar5);
    func_0x000107c6142c(puVar3);
    pcStack_50 = FUN_102d7d6c8;
    uStack_48 = 0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_100ab47f8;
    puStack_58 = &UNK_1105cd508;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c4de70(puVar1);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 102d7dc20; end: 102d7ddf7;  */

void FUN_102d7dc20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  lVar3 = 0x112e10020;
  func_0x0001000285a8(0x112e10020,&UNK_10d9eb238);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x20) =
       *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x40) = PTR___sSbN_11034dd40;
  *(undefined1 *)(lVar3 + 0x28) = 1;
  func_0x000107c61174();
  lVar4 = lVar3;
  func_0x000100dfa5c8(lVar3);
  func_0x000107c61588(lVar3);
  FUN_102d7de2c((undefined8 *)(lVar3 + 0x20),0x112d377b8,&UNK_10d9016f0);
  uVar5 = 0;
  func_0x000100dfa6ec(0);
  uVar6 = 0x112d377a8;
  FUN_102d7dea8(0x112d377a8,&UNK_10d901780);
  lVar3 = lVar4;
  func_0x000107c5f9dc(lVar4,uVar5,PTR___sypN_11034f1a8 + 8,uVar6);
  func_0x000107c6142c(lVar4);
  puVar7 = &UNK_1105cd4c8;
  func_0x000107c613fc(&UNK_1105cd4c8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = param_2;
  *(undefined8 *)(puVar7 + 0x18) = param_3;
  uStack_a8 = 0x102d7de6c;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0x42000000;
  puStack_b8 = &UNK_100ab47f8;
  puStack_b0 = &UNK_1105cd4e0;
  ppuVar8 = &puStack_c8;
  puStack_a0 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_a0;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar7);
  func_0x000107c4de70(puVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 102d7ddf8; end: 102d7de17;  */

void FUN_102d7ddf8(void)

{
  func_0x000107c61168(&PTR_PTR_1128a4690);
  return;
}



/* Entry: 102d7de18; end: 102d7de2b;  */

void FUN_102d7de18(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d7de28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102d7de2c; end: 102d7de8b;  */

undefined8 FUN_102d7de2c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102d7de8c; end: 102d7dea7;  */

void FUN_102d7de8c(long param_1,long param_2)

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


