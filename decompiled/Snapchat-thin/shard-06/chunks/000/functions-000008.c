/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1043951ac; end: 1043951f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043951ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073720) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043951f8; end: 10439533f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1043951f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = param_1;
  FUN_10439541c();
  lVar5 = lVar4;
  _objc_allocWithZone();
  lVar3 = _DAT_113073710;
  _swift_unknownObjectWeakInit(lVar5 + _DAT_113073710,0);
  *(undefined8 *)(lVar5 + _DAT_1130736f0) = param_3;
  *(long *)(lVar5 + _DAT_1130736f8) = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_113073700);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(lVar5 + _DAT_113073708) = param_2;
  _swift_beginAccess(lVar5 + lVar3,auStack_78,1,0);
  _swift_unknownObjectWeakAssign(lVar5 + lVar3,param_4);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  _swift_bridgeObjectRetain(param_6);
  _objc_retain(param_2);
  plVar6 = &lStack_88;
  _objc_msgSendSuper2(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  _swift_release(uStack_90);
  _swift_unknownObjectRelease(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 104395340; end: 10439541b; -[SCChatReplyComposeScopeServices buildWithMessageId:conversationData:uiContainer:delegate:currentUserId:] */

void FUN_104395340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_7);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _swift_unknownObjectRetain(param_5);
  _swift_unknownObjectRetain(param_6);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_1043951f8(param_3,param_4,param_5,param_6,param_7,param_2);
  _objc_release(param_3);
  _objc_release(param_4);
  _swift_unknownObjectRelease(param_5);
  _swift_unknownObjectRelease(param_6);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10439541c; end: 10439543b;  */

void FUN_10439541c(void)

{
  _objc_opt_self(&PTR_PTR_1129a7110);
  return;
}



/* Entry: 10439543c; end: 10439549b; -[SCChatReplyComposeScopeServices init] */

void FUN_10439543c(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("ChatReplyComposeScope.SCChatReplyComposeScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104395468);
  (*pcVar1)();
}



/* Entry: 10439549c; end: 1043954bb; -[SCChatReplyComposeScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439549c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073720));
  return;
}



/* Entry: 1043954bc; end: 1043954db;  */

void FUN_1043954bc(void)

{
  _objc_opt_self(&PTR_PTR_1129a71f0);
  return;
}



/* Entry: 1043954dc; end: 1043954df;  */

void FUN_1043954dc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1043954e0; end: 1043954ef; -[SCChatReplyActiveConversationData conversationParticipants] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043954e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073778));
  return;
}



/* Entry: 1043954f0; end: 1043954ff; -[SCChatReplyActiveConversationData currentUserSnapchatter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043954f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073780));
  return;
}



/* Entry: 104395500; end: 10439557b; -[SCChatReplyActiveConversationData snapchatters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395500(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113073788);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10439589c(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10439557c; end: 1043955e7; -[SCChatReplyActiveConversationData messages] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439557c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113073790);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    FUN_10439589c(0,0x112dbe420,&PTR_PTR_1126b2d28);
    lVar2 = lVar1;
    _swift_bridgeObjectRetain(lVar1);
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1043955e8; end: 1043955eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043955e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073778) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073780) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113073788) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113073790) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043955ec; end: 104395787; -[SCChatReplyActiveConversationData initWithConversationParticipants:currentUserSnapchatter:snapchatters:messages:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043955ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_5 != 0) {
    uVar3 = 0;
    FUN_10439589c(0,0x112d4ed88,&PTR_PTR_1126b15c8);
    __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
              (param_5,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  }
  if (param_6 == 0) {
    param_6 = 0;
  }
  else {
    uVar3 = 0;
    FUN_10439589c(0,0x112dbe420,&PTR_PTR_1126b2d28);
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar3);
  }
  *(undefined8 *)(param_1 + _DAT_113073778) = param_3;
  *(undefined8 *)(param_1 + _DAT_113073780) = param_4;
  *(long *)(param_1 + _DAT_113073788) = param_5;
  *(long *)(param_1 + _DAT_113073790) = param_6;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_msgSendSuper2(&lStack_50,puVar1);
  return;
}



/* Entry: 104395788; end: 10439578b; -[SCChatReplyActiveConversationData copyWithZone:] */

void FUN_104395788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10439578c; end: 1043957a7; -[SCChatReplyActiveConversationData description] */

void FUN_10439578c(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043957a8; end: 104395823; -[SCChatReplyActiveConversationData init] */

void FUN_1043957a8(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "ChatReplyComposeScope/ChatReplyActiveConversationDataWrapper.swift",0x42,2,0x37,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1043957f0);
  (*pcVar1)();
}



/* Entry: 104395824; end: 10439587b; -[SCChatReplyActiveConversationData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395824(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073778));
  _objc_release(*(undefined8 *)(param_1 + _DAT_113073780));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073788));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113073790));
  return;
}



/* Entry: 10439587c; end: 10439589b;  */

void FUN_10439587c(void)

{
  _objc_opt_self(&PTR_PTR_1129a72b0);
  return;
}



/* Entry: 10439589c; end: 1043958db;  */

void FUN_10439589c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  *param_2 = lVar1;
  return;
}



/* Entry: 1043958dc; end: 1043958df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043958dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073778) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113073780) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113073788) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_113073790) = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1043958e0; end: 104395967; -[KeepSnapsInChatUpsellScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043958e0(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130737c0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_1130737c8 + 8))
  ;
  return;
}



/* Entry: 104395968; end: 1043959cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395968(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104395bfc();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130737e0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1043959d0; end: 104395a1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043959d0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130737e0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104395a1c; end: 104395af7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104395a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_68 [2];
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  FUN_104395b84();
  lVar4 = lVar3;
  _objc_allocWithZone();
  *(long *)(lVar4 + _DAT_1130737c0) = param_1;
  puVar1 = (undefined8 *)(lVar4 + _DAT_1130737c8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(lVar4 + _DAT_1130737d0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_3);
  plVar5 = &lStack_50;
  _objc_msgSendSuper2(plVar5,puVar2);
  aplStack_68[0] = plVar5;
  func_0x00010008a7c8(&uStack_58,aplStack_68);
  func_0x000100083b20(aplStack_68);
  _swift_release(uStack_58);
  _swift_unknownObjectRelease(aplStack_68[0]);
  return plVar5;
}



/* Entry: 104395af8; end: 104395b83; -[KeepSnapsInChatUpsellScopeServices buildWithUiContainer:conversationId:isGroupConversation:] */

void FUN_104395af8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_4);
  _swift_unknownObjectRetain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104395a1c(param_3,param_4,param_2,param_5);
  _swift_unknownObjectRelease(param_3);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104395b84; end: 104395ba3;  */

void FUN_104395b84(void)

{
  _objc_opt_self(&PTR_PTR_1129a7390);
  return;
}



/* Entry: 104395ba4; end: 104395ba7;  */

void FUN_104395ba4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104395ba8; end: 104395bdb;  */

void FUN_104395ba8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104395bdc; end: 104395bfb; -[KeepSnapsInChatUpsellScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130737e0));
  return;
}



/* Entry: 104395bfc; end: 104395c1b;  */

void FUN_104395bfc(void)

{
  _objc_opt_self(&PTR_PTR_1129a7460);
  return;
}



/* Entry: 104395c1c; end: 104395c1f;  */

void FUN_104395c1c(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104395c20; end: 104395c2f; -[_TtC17SCAddToGroupScope17SCAddToGroupScope scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395c20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073838));
  return;
}



/* Entry: 104395c30; end: 104395c3f; -[_TtC17SCAddToGroupScope17SCAddToGroupScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_113073838));
  return;
}



/* Entry: 104395c40; end: 104395ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395c40(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033edfc();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073848) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104395ca8; end: 104395cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395ca8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073848) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104395cf4; end: 104395d97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104395cf4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000100334914();
  lVar3 = lVar2;
  _objc_allocWithZone();
  *(long *)(lVar3 + _DAT_113073838) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  _objc_retain(param_1);
  plVar4 = &lStack_40;
  _objc_msgSendSuper2(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  _swift_release(uStack_48);
  _swift_unknownObjectRelease(aplStack_58[0]);
  return plVar4;
}



/* Entry: 104395d98; end: 104395df3; -[_TtC17SCAddToGroupScope25SCAddToGroupScopeServices buildWithScope:] */

void FUN_104395d98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_104395cf4(param_3);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104395df4; end: 104395df7;  */

void FUN_104395df4(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104395df8; end: 104395e2b;  */

void FUN_104395df8(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104395e2c; end: 104395e4f; -[_TtC17SCAddToGroupScope25SCAddToGroupScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395e2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073848));
  return;
}



/* Entry: 104395e50; end: 104395e6f; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395e50(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_1130738a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104395e70; end: 104395ebf; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope sectionIdentifiers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395e70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130738a8);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSh10FoundationE19_bridgeToObjectiveCSo5NSSetCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104395ec0; end: 104395ecb; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope preSelectedItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395ec0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130738b0);
  func_0x0001012db084(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104395ecc; end: 104395ed7; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope disabledItems] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395ecc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_1130738b8);
  func_0x0001012db084(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104395ed8; end: 104395f23;  */

void FUN_104395ed8(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  func_0x0001012db084(0);
  uVar1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104395f24; end: 104395f3f; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope headerModelGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395f24(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130738c0);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_104395f40;
  puStack_48 = &UNK_110762ec8;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104395f40; end: 104395fa7;  */

void FUN_104395f40(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  func_0x0001012db084(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_2,uVar3);
  _swift_retain(uVar2);
  uVar3 = param_2;
  (*pcVar1)(param_2);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 104395fa8; end: 104395fc3; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope confirmationModelGenerator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104395fa8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130738c8);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_104396040;
  puStack_48 = &UNK_110762ea0;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104395fc4; end: 10439603f;  */

void FUN_104395fc4(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = (undefined8 *)(param_1 + *param_3);
  uVar4 = puVar1[1];
  uStack_38 = puVar1[1];
  uStack_40 = *puVar1;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = param_4;
  uStack_48 = param_5;
  __Block_copy(&puStack_60);
  uVar2 = uStack_38;
  _swift_retain(uVar4);
  _swift_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 104396040; end: 1043960d7;  */

void FUN_104396040(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = 0;
  func_0x0001012db084(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_2,uVar3);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_retain(uVar2);
  uVar4 = param_2;
  (*pcVar1)(param_2,param_3,uVar3);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1043960d8; end: 1043960e3; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043960d8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130738d0;
  _swift_beginAccess(param_1 + _DAT_1130738d0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043960e4; end: 1043960ef; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043960e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130738d0;
  _swift_beginAccess(param_1 + _DAT_1130738d0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043960f0; end: 1043960ff; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope descriptionContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043960f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130738d8));
  return;
}



/* Entry: 104396100; end: 10439610f; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope storyContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396100(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130738e0));
  return;
}



/* Entry: 104396110; end: 10439611b; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope longPressDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396110(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130738e8;
  _swift_beginAccess(param_1 + _DAT_1130738e8,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10439611c; end: 104396127; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope setLongPressDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439611c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130738e8;
  _swift_beginAccess(param_1 + _DAT_1130738e8,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104396128; end: 104396133; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope contactsActionDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396128(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130738f0;
  _swift_beginAccess(param_1 + _DAT_1130738f0,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104396134; end: 104396177;  */

void FUN_104396134(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104396178; end: 104396183; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope setContactsActionDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396178(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130738f0;
  _swift_beginAccess(param_1 + _DAT_1130738f0,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104396184; end: 1043961d7;  */

void FUN_104396184(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  _swift_beginAccess(param_1 + lVar1,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043961d8; end: 1043961e7; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope emojiOnlyTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043961d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1130738f8);
}



/* Entry: 1043961e8; end: 1043961f7; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope includeSelectableContacts] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043961e8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113073900);
}



/* Entry: 1043961f8; end: 1043962c7; -[_TtC22SCRecipientPickerScope22SCRecipientPickerScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010439627c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001043962ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000104396280) */
/* WARNING: Removing unreachable block (ram,0x0001043962b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1043961f8(long param_1)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + _DAT_1130738a0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130738a8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130738b0));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_1130738b8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130738c0 + 8));
  _swift_release(*(undefined8 *)(param_1 + _DAT_1130738c8 + 8));
  param_1 = param_1 + _DAT_1130738d0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1043962c8; end: 10439632f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043962c8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x0001002d3538();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_113073910) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104396330; end: 10439637b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396330(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_113073910) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10439637c; end: 104396827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10439637c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined1 param_10)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *aplStack_d8 [2];
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar6 = param_1;
  func_0x0001002d17e8();
  lVar7 = lVar6;
  _objc_allocWithZone();
  lVar3 = _DAT_1130738d0;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_1130738d0,0);
  lVar4 = _DAT_1130738e8;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_1130738e8,0);
  lVar5 = _DAT_1130738f0;
  _swift_unknownObjectWeakInit(lVar7 + _DAT_1130738f0,0);
  *(long *)(lVar7 + _DAT_1130738a0) = param_1;
  *(undefined8 *)(lVar7 + _DAT_1130738a8) = param_2;
  *(undefined8 *)(lVar7 + _DAT_1130738b0) = param_3;
  *(undefined8 *)(lVar7 + _DAT_1130738b8) = param_4;
  puVar1 = (undefined8 *)(lVar7 + _DAT_1130738c0);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(lVar7 + _DAT_1130738c8);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(lVar7 + _DAT_1130738d8) = 0;
  *(undefined8 *)(lVar7 + _DAT_1130738e0) = 0;
  _swift_beginAccess(lVar7 + lVar4,auStack_80,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar4,0);
  _swift_beginAccess(lVar7 + lVar5,auStack_98,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar5,0);
  _swift_beginAccess(lVar7 + lVar3,auStack_b0,1,0);
  _swift_unknownObjectWeakAssign(lVar7 + lVar3,param_9);
  *(undefined1 *)(lVar7 + _DAT_1130738f8) = param_10;
  *(undefined1 *)(lVar7 + _DAT_113073900) = 0;
  puVar2 = PTR_s_init_1125d9248;
  lStack_c0 = lVar7;
  lStack_b8 = lVar6;
  _swift_unknownObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _swift_retain(param_6);
  _swift_retain(param_8);
  plVar8 = &lStack_c0;
  _objc_msgSendSuper2(plVar8,puVar2);
  aplStack_d8[0] = plVar8;
  func_0x00010008a7c8(&uStack_c8,aplStack_d8);
  func_0x000100083b20(aplStack_d8);
  _swift_release(uStack_c8);
  _swift_unknownObjectRelease(aplStack_d8[0]);
  return plVar8;
}



/* Entry: 104396828; end: 1043969b7; -[_TtC22SCRecipientPickerScope30SCRecipientPickerScopeServices buildWithUIContainer:sectionIdentifiers:preSelectedItems:disabledItems:headerModelGenerator:confirmationModelGenerator:delegate:emojiOnlyTitle:] */

void FUN_104396828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  __Block_copy();
  __Block_copy();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar1 = 0;
  func_0x0001012db084(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar1);
  puVar2 = &UNK_110762e60;
  _swift_allocObject(&UNK_110762e60,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  puVar3 = &UNK_110762e88;
  _swift_allocObject(&UNK_110762e88,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_8;
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_9);
  _objc_retain(param_1);
  uVar1 = param_3;
  FUN_10439637c(param_3,param_4,param_5,param_6,0x104396d70,puVar2,0x104396d68,puVar3,param_9,
                param_10);
  _swift_unknownObjectRelease(param_3);
  _swift_unknownObjectRelease(param_9);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_6);
  _swift_release(puVar2);
  _swift_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1043969b8; end: 104396a17;  */

long FUN_1043969b8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001012db084(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  return param_2;
}



/* Entry: 104396a18; end: 104396aa3;  */

long FUN_104396a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001012db084(0);
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(param_1,uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_2);
  return param_4;
}



/* Entry: 104396aa4; end: 104396ccb; -[_TtC22SCRecipientPickerScope30SCRecipientPickerScopeServices buildWithUIContainer:sectionIdentifiers:preSelectedItems:disabledItems:headerModelGenerator:confirmationModelGenerator:descriptionContext:storyContext:longPressDelegate:contactsActionDelegate:delegate:emojiOnlyTitle:includeSelectableContacts:] */

void FUN_104396aa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  __Block_copy();
  __Block_copy();
  __sSh10FoundationE36_unconditionallyBridgeFromObjectiveCyShyxGSo5NSSetCSgFZ
            (param_4,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar1 = 0;
  func_0x0001012db084(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_5,uVar1);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(param_6,uVar1);
  puVar2 = &UNK_110762e10;
  _swift_allocObject(&UNK_110762e10,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  puVar3 = &UNK_110762e38;
  _swift_allocObject(&UNK_110762e38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_8;
  _swift_unknownObjectRetain(param_3);
  uVar1 = param_9;
  _objc_retain();
  uVar4 = param_10;
  _objc_retain();
  _swift_unknownObjectRetain(param_11);
  _swift_unknownObjectRetain(param_12);
  _swift_unknownObjectRetain(param_13);
  _objc_retain(param_1);
  uVar5 = param_3;
  func_0x0001043965b4(param_3,param_4,param_5,param_6,0x104396d34,puVar2,0x104396d3c,puVar3,param_9,
                      param_10,param_11,param_12,param_13,param_14);
  _swift_unknownObjectRelease(param_3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _swift_unknownObjectRelease(param_11);
  _swift_unknownObjectRelease(param_12);
  _swift_unknownObjectRelease(param_13);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_4);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_6);
  _swift_release(puVar2);
  _swift_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 104396ccc; end: 104396ccf;  */

void FUN_104396ccc(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104396cd0; end: 104396d03;  */

void FUN_104396cd0(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104396d04; end: 104396d73; -[_TtC22SCRecipientPickerScope30SCRecipientPickerScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396d04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_113073910));
  return;
}



/* Entry: 104396d74; end: 104396dbf; -[SCBlockedExceptionAlertScope groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396d74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_113073980);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113073980))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104396dc0; end: 104396e07; -[SCBlockedExceptionAlertScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396dc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073988;
  _swift_beginAccess(param_1 + _DAT_113073988,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104396e08; end: 104396e5f; -[SCBlockedExceptionAlertScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396e08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073988;
  _swift_beginAccess(param_1 + _DAT_113073988,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 104396e60; end: 104396e7f; -[SCBlockedExceptionAlertScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396e60(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + _DAT_113073990));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104396e80; end: 104396eab; -[SCBlockedExceptionAlertScope init] */

void FUN_104396e80(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlockedExceptionAlertScope.SCBlockedExceptionAlertScope",0x39,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104396eac);
  (*pcVar1)();
}



/* Entry: 104396eac; end: 104396f67; -[SCBlockedExceptionAlertScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396eac(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_113073980 + 8));
  func_0x000104396ef8(param_1 + _DAT_113073988);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_113073990));
  return;
}



/* Entry: 104396f68; end: 104396fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396f68(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104397278();
  lVar1 = param_2;
  _objc_allocWithZone();
  *(undefined8 *)(lVar1 + _DAT_1130739a0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  _objc_msgSendSuper2(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 104396fd4; end: 104396fdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396fd4(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_104397278();
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130739a0) = uStack_38;
  puVar1 = auStack_48;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 104396fdc; end: 104397027;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104396fdc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_1130739a0) = param_1;
  _objc_msgSendSuper2(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 104397028; end: 104397137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_104397028(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_90 [2];
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  FUN_1043971d4();
  lVar4 = lVar3;
  _objc_allocWithZone();
  lVar2 = _DAT_113073988;
  _swift_unknownObjectWeakInit(lVar4 + _DAT_113073988,0);
  plVar5 = (long *)(lVar4 + _DAT_113073980);
  *plVar5 = param_1;
  plVar5[1] = param_2;
  _swift_beginAccess(lVar4 + lVar2,auStack_68,1,0);
  _swift_unknownObjectWeakAssign(lVar4 + lVar2,param_3);
  *(undefined8 *)(lVar4 + _DAT_113073990) = param_4;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  _swift_bridgeObjectRetain(param_2);
  _swift_unknownObjectRetain(param_4);
  plVar5 = &lStack_78;
  _objc_msgSendSuper2(plVar5,puVar1);
  aplStack_90[0] = plVar5;
  func_0x00010008a7c8(&uStack_80,aplStack_90);
  func_0x000100083b20(aplStack_90);
  _swift_release(uStack_80);
  _swift_unknownObjectRelease(aplStack_90[0]);
  return plVar5;
}



/* Entry: 104397138; end: 1043971d3; -[SCBlockedExceptionAlertScopeServices buildWithGroupId:delegate:uiContainer:] */

void FUN_104397138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  _swift_unknownObjectRetain(param_4);
  _swift_unknownObjectRetain(param_5);
  _objc_retain(param_1);
  FUN_104397028(param_3,param_2,param_4,param_5);
  _swift_unknownObjectRelease(param_4);
  _swift_unknownObjectRelease(param_5);
  _objc_release(param_1);
  _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1043971d4; end: 1043971f3;  */

void FUN_1043971d4(void)

{
  _objc_opt_self(&PTR_PTR_1129a7880);
  return;
}



/* Entry: 1043971f4; end: 10439721f; -[SCBlockedExceptionAlertScopeServices init] */

void FUN_1043971f4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SCBlockedExceptionAlertScope.SCBlockedExceptionAlertScopeServices",0x41,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104397220);
  (*pcVar1)();
}



/* Entry: 104397220; end: 104397223;  */

void FUN_104397220(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104397224; end: 104397257;  */

void FUN_104397224(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104397258; end: 104397277; -[SCBlockedExceptionAlertScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104397258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_1130739a0));
  return;
}



/* Entry: 104397278; end: 104397297;  */

void FUN_104397278(void)

{
  _objc_opt_self(&PTR_PTR_1129a7950);
  return;
}



/* Entry: 104397298; end: 10439729b;  */

void FUN_104397298(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10439729c; end: 1043972ab; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope recipient] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10439729c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130739f8));
  return;
}



/* Entry: 1043972ac; end: 1043972b7; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043972ac(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073a00;
  _swift_beginAccess(param_1 + _DAT_113073a00,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1043972b8; end: 1043972c3; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043972b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113073a00;
  _swift_beginAccess(param_1 + _DAT_113073a00,auStack_48,1,0);
  _swift_unknownObjectWeakAssign(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1043972c4; end: 1043972d3; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope showRetrySendOption] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1043972c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113073a08);
}



/* Entry: 1043972d4; end: 1043972e3; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope friendActionSheetScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043972d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073a10));
  return;
}



/* Entry: 1043972e4; end: 1043972f3; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope groupActionSheetScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043972e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113073a18));
  return;
}



/* Entry: 1043972f4; end: 1043972ff; -[_TtC28SCCancelMenuActionSheetScope28SCCancelMenuActionSheetScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1043972f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113073a20;
  _swift_beginAccess(param_1 + _DAT_113073a20,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104397300; end: 104397343;  */

void FUN_104397300(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  _swift_beginAccess(param_1 + lVar1,auStack_38,0,0);
  _swift_unknownObjectWeakLoadStrong(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


