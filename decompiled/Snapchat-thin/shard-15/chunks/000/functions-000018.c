/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b76c938; end: 10b76c9cf; +[SOJUChatConversationDeltaQuery registerMessageFields:] */

void FUN_10b76c938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_lastKnownMsgSeqs_112545078;
  _objc_retain(param_3);
  FUN_10b76c9d0(param_3,param_2,puVar1);
  func_0x00010c19a460(param_3,param_2,0xf56473a6080ab5);
  FUN_10b76c9d0(param_3,param_2,PTR_s_lastKnownUpdateSeqs_112545080);
  func_0x00010c19a460(param_3,param_2,0xbce3083be40ed8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76c9d0; end: 10b76c9e7;  */

void FUN_10b76c9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,7,0,0);
  return;
}



/* Entry: 10b76c9e8; end: 10b76ca0b; -[SOJUChatConversationMessageUpdates initWithMessageUpdatesDeprecated:stateMessages:preservationMessages:hasMore:eraseMessages:] */

void FUN_10b76c9e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76ca0c; end: 10b76caf7; +[SOJUChatConversationMessageUpdates registerMessageFields:] */

void FUN_10b76ca0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a18;
  puVar1 = PTR_s_messageUpdatesDeprecated_112545090;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110f7d2b8,2,7,
                      puVar2,0,0,1);
  _objc_opt_class(PTR_PTR_1126e0a20);
  FUN_10b76caf8();
  _objc_opt_class(PTR_PTR_1126e0a28);
  FUN_10b76caf8();
  func_0x00010bf06b60(param_3,param_2,PTR_s_hasMore_1125d3e48,0,1,0,0,0,0,0);
  _objc_opt_class(PTR_PTR_1126e0a30);
  FUN_10b76caf8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76caf8; end: 10b76cb1b;  */

void FUN_10b76caf8(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76cb1c; end: 10b76cb3b; -[SOJUChatConversationMessages initWithMessagingAuth:messages:messageIterToken:] */

void FUN_10b76cb1c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76cb3c; end: 10b76cc07; +[SOJUChatConversationMessages registerMessageFields:] */

void FUN_10b76cb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 in_x7;
  
  puVar2 = PTR_PTR_1126e0a38;
  puVar1 = PTR_s_messagingAuth_1125450b8;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  FUN_10b76cc08(param_3,param_2,puVar1,0,1,7,puVar2,in_x7,0,0);
  puVar1 = PTR_s_messages_1126108e0;
  puVar2 = PTR_PTR_1126e0a40;
  _objc_opt_class(PTR_PTR_1126e0a40);
  FUN_10b76cc08(param_3,param_2,puVar1,0,0,7,puVar2,in_x7,0,1);
  FUN_10b76cc08(param_3,param_2,PTR_s_messageIterToken_1125450c0,0,1,6,0,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76cc08; end: 10b76cc0f;  */

void FUN_10b76cc08(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76cc10; end: 10b76cc13; -[SOJUChatConversationSnapDeltaQuery initWithLastKnownSnapSeqs:] */

void FUN_10b76cc10(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b76cc14; end: 10b76cc8b; +[SOJUChatConversationSnapDeltaQuery registerMessageFields:] */

void FUN_10b76cc14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_lastKnownSnapSeqs_1125450d0;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,0,0,0,2);
  func_0x00010c19a460(param_3,param_2,0x5a545b1e6b2f61);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76cc8c; end: 10b76cc8f; -[SOJUChatConversationSnapUpdates initWithSnapStateMessages:] */

void FUN_10b76cc8c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b76cc90; end: 10b76cd07; +[SOJUChatConversationSnapUpdates registerMessageFields:] */

void FUN_10b76cc90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a48;
  puVar1 = PTR_s_snapStateMessages_1125450e0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,puVar2,0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76cd08; end: 10b76cd4b; -[SOJUChatFeedRequest initWithChecksumsDict:featuresMap:pullToRefresh:friendsRequest:groupDeltaRequests:excludeFriends:messagesTier:conversationDeltaQueryMap:conversationSnapDeltaQueryMap:feedIterToken:messageIterToken:groupPaginationType:fetchReason:feedDeltaSyncToken:] */

void FUN_10b76cd08(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76cd4c; end: 10b76cf1f; +[SOJUChatFeedRequest registerMessageFields:] */

void FUN_10b76cd4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_checksumsDict_1125450f0;
  _objc_retain(param_3);
  func_0x00010b76cf54(param_3,param_2,puVar1,0,1,6);
  func_0x00010b76cf3c();
  func_0x00010b76cf74();
  func_0x00010b76cf60();
  func_0x00010b76cf54();
  _objc_opt_class(PTR_PTR_1126e0a50);
  func_0x00010b76cf20();
  _objc_opt_class(PTR_PTR_1126e0a58);
  func_0x00010b76cf20();
  func_0x00010b76cf60();
  func_0x00010b76cf54();
  func_0x00010b76cf3c();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0a60);
  func_0x00010b76cf20();
  _objc_opt_class(PTR_PTR_1126e0a68);
  func_0x00010b76cf20();
  func_0x00010b76cf3c();
  func_0x00010b76cf74();
  func_0x00010b76cf3c();
  func_0x00010b76cf74();
  func_0x00010b76cf3c();
  func_0x00010bf06b60();
  func_0x00010b76cf3c();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0a70);
  func_0x00010b76cf20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76cf20; end: 10b76cf7b;  */

void FUN_10b76cf20(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76cf7c; end: 10b76cff7;  */

undefined8 FUN_10b76cf7c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3e78;
  func_0x00010b76d048();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xfd81;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d2d8;
    func_0x00010b76d048();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffd349bfba;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7d2f8;
      func_0x00010b76d048();
      uVar2 = 0xffffffff85fba549;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76cff8; end: 10b76d04f;  */

undefined ** FUN_10b76cff8(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x2cb64046) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7d2d8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110ea3e78;
  if (param_1 != 0xfd81) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7d2f8;
  if (param_1 != -0x7a045ab7) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76d050; end: 10b76d093; -[SOJUChatMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:body:chatMessageId:savedState:preservations:lastReleasedSeqNum:] */

void FUN_10b76d050(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76d094; end: 10b76d2a3; +[SOJUChatMessage registerMessageFields:] */

void FUN_10b76d094(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0a78;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  func_0x00010b76d2c0();
  func_0x00010b76d2e4();
  func_0x00010b76d2a4();
  func_0x00010b76d2b0();
  func_0x00010b76d2a4();
  func_0x00010b76d2f0();
  func_0x00010b76d2b0();
  func_0x00010b76d2a4();
  func_0x00010b76d2b0();
  func_0x00010b76d2a4();
  func_0x00010b76d2e4();
  func_0x00010b76d2a4();
  func_0x00010b76d2e4();
  func_0x00010bf06b60();
  func_0x00010b76d2a4(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b76d2b0();
  func_0x00010b76d2a4();
  _objc_opt_class(PTR_PTR_1126e0a80);
  func_0x00010b76d2c0();
  func_0x00010b76d2b0();
  func_0x00010b76d2a4();
  func_0x00010b76d2b0();
  func_0x00010b76d2a4();
  func_0x00010b76d2f0();
  func_0x00010b76d2e4();
  func_0x00010b76d2a4();
  func_0x00010b76d2f0();
  func_0x00010b76d2b0();
  func_0x00010b76d2a4();
  func_0x00010b76d2f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76d2a4; end: 10b76d2f7;  */

void FUN_10b76d2a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76d2f8; end: 10b76d327; -[SOJUChatMessageBodyAttribute initWithType:iosHref:itunesId:affiliateToken:campaignTracker:androidHref:href:formatType:] */

void FUN_10b76d2f8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76d328; end: 10b76d417; +[SOJUChatMessageBodyAttribute registerMessageFields:] */

void FUN_10b76d328(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_type_11267d188;
  _objc_retain(param_3);
  func_0x00010b76d438(param_3,param_2,puVar1,0,0);
  func_0x00010b76d418();
  func_0x00010b76d418();
  func_0x00010b76d418();
  func_0x00010b76d418();
  func_0x00010b76d418();
  func_0x00010bf06b60(param_3,param_2,PTR_s_href_1125451b8,0,0,6,0,0,0,0);
  func_0x00010b76d438(param_3,param_2,PTR_s_formatType_1125451c0,0,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76d418; end: 10b76d443;  */

void FUN_10b76d418(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76d444; end: 10b76d4c3;  */

undefined8 FUN_10b76d444(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc0178;
  func_0x00010b76d514();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x2e3a85;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc0258;
    func_0x00010b76d514();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffffb9bd3a30;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e03818;
      func_0x00010b76d514();
      uVar2 = 0xffffffffc2c9c6cc;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76d4c4; end: 10b76d51b;  */

undefined ** FUN_10b76d4c4(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x4642c5d0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc0258;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e03818;
  if (param_1 != -0x3d363934) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dc0178;
  if (param_1 != 0x2e3a85) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76d51c; end: 10b76d587;  */

undefined8 FUN_10b76d51c(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e51178;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e51178,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x32affa;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f22bf8;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f22bf8,param_2,param_1);
    uVar2 = 0xffffffffb45ff7f7;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76d588; end: 10b76d5bf;  */

undefined ** FUN_10b76d588(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f22bf8;
  if (param_1 != -0x4ba00809) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e51178;
  if (param_1 != 0x32affa) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76d5c0; end: 10b76d5e3; -[SOJUChatOrSnapMessage initWithSnap:chatMessage:cashTransaction:iterToken:] */

void FUN_10b76d5c0(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76d5e4; end: 10b76d6a7; +[SOJUChatOrSnapMessage registerMessageFields:] */

void FUN_10b76d5e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e09c8;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b76d6a8();
  func_0x00010b76d6c0();
  _objc_opt_class(PTR_PTR_1126e0a88);
  FUN_10b76d6a8();
  func_0x00010b76d6c0();
  _objc_opt_class(PTR_PTR_1126e09e0);
  FUN_10b76d6a8();
  func_0x00010b76d6c0();
  func_0x00010bf06b60(param_3,param_2,PTR_s_iterToken_112544ff8,0,1,6,0,0,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76d6a8; end: 10b76d6cb;  */

void FUN_10b76d6a8(void)

{
  return;
}



/* Entry: 10b76d6cc; end: 10b76d6f7; -[SOJUChatTypingRequest initWithTimestamp:reqToken:username:snapchatUserId:recipientUsernames:conversationId:seqNums:] */

void FUN_10b76d6cc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76d6f8; end: 10b76d807; +[SOJUChatTypingRequest registerMessageFields:] */

void FUN_10b76d6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_timestamp_112679c98;
  _objc_retain(param_3);
  FUN_10b76d808(param_3,param_2,puVar1,0,0);
  func_0x00010b76d824();
  FUN_10b76d808();
  FUN_10b76d808(param_3,param_2,PTR_s_username_112682b30,0,0);
  func_0x00010b76d824();
  FUN_10b76d808();
  func_0x00010b76d824();
  func_0x00010b76d818();
  func_0x00010c19a460(param_3,param_2,0x101f3ea46839b7);
  func_0x00010b76d824();
  FUN_10b76d808();
  func_0x00010b76d824();
  func_0x00010b76d818();
  func_0x00010c19a460(param_3,param_2,0xe2775815818b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76d808; end: 10b76d833;  */

void FUN_10b76d808(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76d834; end: 10b76d83f; +[SOJUChatTypingRequestBuilder messageClass] */

void FUN_10b76d834(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0a90);
  return;
}



/* Entry: 10b76d840; end: 10b76d843; +[SOJUChatTypingRequestBuilder withJUChatTypingRequest:] */

void FUN_10b76d840(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b76d844; end: 10b76d87b; -[SOJUChatv3ReleaseMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:] */

void FUN_10b76d844(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76d87c; end: 10b76d9fb; +[SOJUChatv3ReleaseMessage registerMessageFields:] */

void FUN_10b76d87c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a78;
  puVar1 = PTR_s_header_1125d5598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b76da08();
  func_0x00010b76d9fc();
  func_0x00010b76d9fc(param_3,param_2,PTR_s_knownChatSequenceNumbers_112545160,0,1,7);
  func_0x00010c19a460(param_3,param_2,0xb729ceb2d853c2);
  func_0x00010b76da08();
  func_0x00010b76d9fc();
  func_0x00010b76da08();
  func_0x00010b76d9fc();
  func_0x00010b76da08();
  func_0x00010b76d9fc();
  func_0x00010bf06b60(param_3,param_2,PTR_s_type_11267d188,0,0,6,0,FUN_10b78c450,FUN_10b78c768,0);
  func_0x00010b76d9fc(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b76da08();
  func_0x00010b76d9fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76d9fc; end: 10b76da17;  */

void FUN_10b76d9fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76da18; end: 10b76da67; -[SOJUChatv3SnapStateMessage initWithHeader:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:type:idValue:appEngineTarget:chatMessageId:state:screenshotCount:senderChatMediaId:openTimestamp:screenCaptureShotCount:screenCaptureRecordingCount:chatMessageSeqNum:] */

void FUN_10b76da18(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76da68; end: 10b76dc47; +[SOJUChatv3SnapStateMessage registerMessageFields:] */

void FUN_10b76da68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126e0a78;
  puVar1 = PTR_s_header_1125d5598;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,0,7,puVar2,0,0,0);
  func_0x00010b76dc88();
  func_0x00010b76dc7c();
  func_0x00010b76dc88();
  func_0x00010b76dc7c();
  func_0x00010c19a460(param_3,param_2,0xb729ceb2d853c2);
  func_0x00010b76dc48();
  func_0x00010b76dc48();
  func_0x00010b76dc88();
  func_0x00010b76dc7c();
  func_0x00010b76dc88();
  func_0x00010b76dc94();
  func_0x00010b76dc7c(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b76dc68();
  func_0x00010b76dc7c();
  func_0x00010b76dc68();
  func_0x00010b76dc7c();
  func_0x00010b76dc88();
  func_0x00010b76dc94();
  func_0x00010b76dc48();
  func_0x00010b76dc68();
  func_0x00010b76dc7c();
  func_0x00010b76dc48();
  func_0x00010b76dc48();
  func_0x00010b76dc48();
  func_0x00010b76dc48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76dc48; end: 10b76dca3;  */

void FUN_10b76dc48(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76dca4; end: 10b76dd0f;  */

undefined8 FUN_10b76dca4(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110e71978;
  func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110e71978,param_2,param_1);
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x2832a5;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d318;
    func_0x00010bf32ee0(&PTR____CFConstantStringClassReference_110f7d318,param_2,param_1);
    uVar2 = 0xffffffff8fdf3be7;
    if (ppuVar1 != (undefined **)0x0) {
      uVar2 = 0;
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76dd10; end: 10b76dd47;  */

undefined ** FUN_10b76dd10(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d318;
  if (param_1 != -0x7020c419) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110de39b8;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110e71978;
  if (param_1 != 0x2832a5) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76dd48; end: 10b76dd6f; -[SOJUCognacAttachmentBody initWithAppId:appDisplayName:appLoadingPageImageUrl:appIconImageUrl:appLogoUrl:appContentUrl:] */

void FUN_10b76dd48(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76dd70; end: 10b76de07; +[SOJUCognacAttachmentBody registerMessageFields:] */

void FUN_10b76dd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_appId_11259ee68;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,6,0,0,0,0);
  FUN_10b76de08();
  FUN_10b76de08();
  FUN_10b76de08();
  FUN_10b76de08();
  FUN_10b76de08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76de08; end: 10b76de27;  */

void FUN_10b76de08(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76de28; end: 10b76de5f; -[SOJUCollabStoryLogbook initWithStoryNotes:friendStoryNotes:otherStoryNotes:story:storyExtras:friendStoryExtras:otherStoryExtras:engagementPercentage:intendedPostTime:collaborator:] */

void FUN_10b76de28(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76de60; end: 10b76dfab; +[SOJUCollabStoryLogbook registerMessageFields:] */

void FUN_10b76de60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e0a98;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b76dfac();
  _objc_opt_class(PTR_PTR_1126e0a98);
  FUN_10b76dfac();
  _objc_opt_class(PTR_PTR_1126e0a98);
  FUN_10b76dfac();
  _objc_opt_class(PTR_PTR_1126cf0d0);
  func_0x00010b76dfc8();
  func_0x00010b76dfe0();
  func_0x00010b76dff8();
  FUN_10b76dfac();
  func_0x00010b76dff8();
  FUN_10b76dfac();
  func_0x00010b76dff8();
  FUN_10b76dfac();
  func_0x00010b76e000();
  func_0x00010b76dfec();
  func_0x00010b76e000();
  func_0x00010b76dfec();
  _objc_opt_class(PTR_PTR_1126e0aa8);
  func_0x00010b76dfc8();
  func_0x00010b76dfe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76dfac; end: 10b76e013;  */

void FUN_10b76dfac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76e014; end: 10b76e83b;  */

undefined8 FUN_10b76e014(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d338;
  func_0x00010b76f044();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x7c195448;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d358;
    func_0x00010b76f044();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x3ef29f1a;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7d378;
      func_0x00010b76f044();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0xbb56fc1;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7d398;
        func_0x00010b76f044();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffffc4737015;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7d3b8;
          func_0x00010b76f044();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0xffffffffd1ca2688;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7d3d8;
            func_0x00010b76f044();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xffffffffde654267;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7d3f8;
              func_0x00010b76f044();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x30ad202a;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7d418;
                func_0x00010b76f044();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x48870387;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d438;
                  func_0x00010b76f044();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x2210b525;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d458;
                    func_0x00010b76f044();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x62d193ff;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7d478;
                      func_0x00010b76f044();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0xfffffffff2904ab5;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110f7d498;
                        func_0x00010b76f044();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0xffffffffb70c5472;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7d4b8;
                          func_0x00010b76f044();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x25bf4981;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110f7d4d8;
                            func_0x00010b76f044();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x3a38d685;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110f7d4f8;
                              func_0x00010b76f044();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0xffffffff8fe6f222;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110f7d518;
                                func_0x00010b76f044();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x6effffc7;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110f7d538;
                                  func_0x00010b76f044();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0xcebb83b;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110f7d558;
                                    func_0x00010b76f044();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x371c6d50;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110f7d578;
                                      func_0x00010b76f044();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0xb8083a4;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110f7d598;
                                        func_0x00010b76f044();
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x2e9f2ec0;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110f7d5b8
                                          ;
                                          func_0x00010b76f044();
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x337669a9;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d5d8;
                                            func_0x00010b76f044();
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0xffffffffffb6abd9;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f3a4b8;
                                              func_0x00010b76f044();
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0xffffffffe30e31e6;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec46d8;
                                                func_0x00010b76f044();
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0xffffffffbdeb4342;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110df4b38;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3cfe1ed6;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d5f8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x17244956;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d618;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x32f38a02;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d638;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffd84bee2b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d658;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2c5cd5cf;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d678;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffd45dbdf2;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d698;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x517bfb7f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d6b8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x31fab012;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d6d8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x14603fdb;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d6f8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffbb9dbc9f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d718;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x11d11f0d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d738;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6b1e6717;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d758;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffa3b20e9d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d778;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffff9ff02abe;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dd08b8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x69dc2d93;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d798;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4402c2dd;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d7b8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4ca97755;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d7d8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x4c7de3c3;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d7f8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffa57f557a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d818;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x5fd2d5cd;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d838;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffed04e534;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d858;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x32311ee6;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d878;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffabc2969f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d898;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2557c7de;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d8b8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffff80163bef;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d8d8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x690d9606;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d8f8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x6545cd73;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d918;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffe12a9d61;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d938;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xfffffffff6b7e27b;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d958;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x7693c0aa;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d978;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffe2a02047;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d998;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x23ea8fb0;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d9b8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x771b1daa;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d9d8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffd5f4e9ea;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7d9f8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffff935ed097;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7da18;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffe98e83d2;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7da38;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffd96172c5;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7da58;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xfffffffff0c3d4c2;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7da78;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffb91929d9;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7da98;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffd29b9c42;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7dab8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffd5a4fd7d;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7dad8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x68968ad8;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7daf8;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x24ea9621;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7db18;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x3e42e5f7;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7db38;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffff8e9bb3db;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7db58;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x2b87e077;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7db78;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xfffffffff3754a29;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7db98;
                                                  func_0x00010b76f044();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xffffffffe1807510;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110f7dbb8;
                                                  func_0x00010b76f044();
                                                  uVar2 = 0x541ef584;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76e83c; end: 10b76f04b;  */

undefined ** FUN_10b76e83c(long param_1)

{
  if (param_1 == -0x7fe9c411) {
    return &PTR____CFConstantStringClassReference_110f7d8b8;
  }
  if (param_1 == -0x71644c25) {
    return &PTR____CFConstantStringClassReference_110f7db38;
  }
  if (param_1 == -0x70190dde) {
    return &PTR____CFConstantStringClassReference_110f7d4f8;
  }
  if (param_1 == -0x6ca12f69) {
    return &PTR____CFConstantStringClassReference_110f7d9f8;
  }
  if (param_1 == -0x600fd542) {
    return &PTR____CFConstantStringClassReference_110f7d778;
  }
  if (param_1 == -0x5c4df163) {
    return &PTR____CFConstantStringClassReference_110f7d758;
  }
  if (param_1 == -0x5a80aa86) {
    return &PTR____CFConstantStringClassReference_110f7d7f8;
  }
  if (param_1 == -0x543d6961) {
    return &PTR____CFConstantStringClassReference_110f7d878;
  }
  if (param_1 == -0x48f3ab8e) {
    return &PTR____CFConstantStringClassReference_110f7d498;
  }
  if (param_1 == -0x46e6d627) {
    return &PTR____CFConstantStringClassReference_110f7da78;
  }
  if (param_1 == -0x44624361) {
    return &PTR____CFConstantStringClassReference_110f7d6f8;
  }
  if (param_1 == -0x4214bcbe) {
    return &PTR____CFConstantStringClassReference_110ec46d8;
  }
  if (param_1 == -0x3b8c8feb) {
    return &PTR____CFConstantStringClassReference_110f7d398;
  }
  if (param_1 == -0x2e35d978) {
    return &PTR____CFConstantStringClassReference_110f7d3b8;
  }
  if (param_1 == -0x2d6463be) {
    return &PTR____CFConstantStringClassReference_110f7da98;
  }
  if (param_1 == -0x2ba2420e) {
    return &PTR____CFConstantStringClassReference_110f7d678;
  }
  if (param_1 == -0x2a5b0283) {
    return &PTR____CFConstantStringClassReference_110f7dab8;
  }
  if (param_1 == -0x2a0b1616) {
    return &PTR____CFConstantStringClassReference_110f7d9d8;
  }
  if (param_1 == -0x27b411d5) {
    return &PTR____CFConstantStringClassReference_110f7d638;
  }
  if (param_1 == -0x269e8d3b) {
    return &PTR____CFConstantStringClassReference_110f7da38;
  }
  if (param_1 == -0x219abd99) {
    return &PTR____CFConstantStringClassReference_110f7d3d8;
  }
  if (param_1 == -0x1ed5629f) {
    return &PTR____CFConstantStringClassReference_110f7d918;
  }
  if (param_1 == -0x1e7f8af0) {
    return &PTR____CFConstantStringClassReference_110f7db98;
  }
  if (param_1 == -0x1d5fdfb9) {
    return &PTR____CFConstantStringClassReference_110f7d978;
  }
  if (param_1 == -0x1cf1ce1a) {
    return &PTR____CFConstantStringClassReference_110f3a4b8;
  }
  if (param_1 == -0x16717c2e) {
    return &PTR____CFConstantStringClassReference_110f7da18;
  }
  if (param_1 == -0x12fb1acc) {
    return &PTR____CFConstantStringClassReference_110f7d838;
  }
  if (param_1 == -0xf3c2b3e) {
    return &PTR____CFConstantStringClassReference_110f7da58;
  }
  if (param_1 == -0xd6fb54b) {
    return &PTR____CFConstantStringClassReference_110f7d478;
  }
  if (param_1 == -0xc8ab5d7) {
    return &PTR____CFConstantStringClassReference_110f7db78;
  }
  if (param_1 == -0x9481d85) {
    return &PTR____CFConstantStringClassReference_110f7d938;
  }
  if (param_1 == -0x495427) {
    return &PTR____CFConstantStringClassReference_110f7d5d8;
  }
  if (param_1 == 0xb8083a4) {
    return &PTR____CFConstantStringClassReference_110f7d578;
  }
  if (param_1 == 0xbb56fc1) {
    return &PTR____CFConstantStringClassReference_110f7d378;
  }
  if (param_1 == 0xcebb83b) {
    return &PTR____CFConstantStringClassReference_110f7d538;
  }
  if (param_1 == 0x11d11f0d) {
    return &PTR____CFConstantStringClassReference_110f7d718;
  }
  if (param_1 == 0x14603fdb) {
    return &PTR____CFConstantStringClassReference_110f7d6d8;
  }
  if (param_1 == 0x17244956) {
    return &PTR____CFConstantStringClassReference_110f7d5f8;
  }
  if (param_1 == 0x2210b525) {
    return &PTR____CFConstantStringClassReference_110f7d438;
  }
  if (param_1 == 0x23ea8fb0) {
    return &PTR____CFConstantStringClassReference_110f7d998;
  }
  if (param_1 == 0x24ea9621) {
    return &PTR____CFConstantStringClassReference_110f7daf8;
  }
  if (param_1 == 0x2557c7de) {
    return &PTR____CFConstantStringClassReference_110f7d898;
  }
  if (param_1 == 0x25bf4981) {
    return &PTR____CFConstantStringClassReference_110f7d4b8;
  }
  if (param_1 == 0x2b87e077) {
    return &PTR____CFConstantStringClassReference_110f7db58;
  }
  if (param_1 == 0x2c5cd5cf) {
    return &PTR____CFConstantStringClassReference_110f7d658;
  }
  if (param_1 == 0x2e9f2ec0) {
    return &PTR____CFConstantStringClassReference_110f7d598;
  }
  if (param_1 == 0x30ad202a) {
    return &PTR____CFConstantStringClassReference_110f7d3f8;
  }
  if (param_1 == 0x31fab012) {
    return &PTR____CFConstantStringClassReference_110f7d6b8;
  }
  if (param_1 == 0x32311ee6) {
    return &PTR____CFConstantStringClassReference_110f7d858;
  }
  if (param_1 == 0x32f38a02) {
    return &PTR____CFConstantStringClassReference_110f7d618;
  }
  if (param_1 == 0x337669a9) {
    return &PTR____CFConstantStringClassReference_110f7d5b8;
  }
  if (param_1 == 0x371c6d50) {
    return &PTR____CFConstantStringClassReference_110f7d558;
  }
  if (param_1 == 0x3a38d685) {
    return &PTR____CFConstantStringClassReference_110f7d4d8;
  }
  if (param_1 == 0x3cfe1ed6) {
    return &PTR____CFConstantStringClassReference_110df4b38;
  }
  if (param_1 == 0x3e42e5f7) {
    return &PTR____CFConstantStringClassReference_110f7db18;
  }
  if (param_1 == 0x7c195448) {
    return &PTR____CFConstantStringClassReference_110f7d338;
  }
  if (param_1 == 0x4402c2dd) {
    return &PTR____CFConstantStringClassReference_110f7d798;
  }
  if (param_1 == 0x48870387) {
    return &PTR____CFConstantStringClassReference_110f7d418;
  }
  if (param_1 == 0x4c7de3c3) {
    return &PTR____CFConstantStringClassReference_110f7d7d8;
  }
  if (param_1 == 0x4ca97755) {
    return &PTR____CFConstantStringClassReference_110f7d7b8;
  }
  if (param_1 == 0x517bfb7f) {
    return &PTR____CFConstantStringClassReference_110f7d698;
  }
  if (param_1 == 0x541ef584) {
    return &PTR____CFConstantStringClassReference_110f7dbb8;
  }
  if (param_1 == 0x5fd2d5cd) {
    return &PTR____CFConstantStringClassReference_110f7d818;
  }
  if (param_1 != 0x62d193ff) {
    if (param_1 == 0x6545cd73) {
      return &PTR____CFConstantStringClassReference_110f7d8f8;
    }
    if (param_1 == 0x68968ad8) {
      return &PTR____CFConstantStringClassReference_110f7dad8;
    }
    if (param_1 == 0x690d9606) {
      return &PTR____CFConstantStringClassReference_110f7d8d8;
    }
    if (param_1 == 0x69dc2d93) {
      return &PTR____CFConstantStringClassReference_110dd08b8;
    }
    if (param_1 == 0x6b1e6717) {
      return &PTR____CFConstantStringClassReference_110f7d738;
    }
    if (param_1 == 0x6effffc7) {
      return &PTR____CFConstantStringClassReference_110f7d518;
    }
    if (param_1 == 0x7693c0aa) {
      return &PTR____CFConstantStringClassReference_110f7d958;
    }
    if (param_1 != 0x771b1daa) {
      if (param_1 == 0x3ef29f1a) {
        return &PTR____CFConstantStringClassReference_110f7d358;
      }
      return &PTR____CFConstantStringClassReference_110de39b8;
    }
    return &PTR____CFConstantStringClassReference_110f7d9b8;
  }
  return &PTR____CFConstantStringClassReference_110f7d458;
}



/* Entry: 10b76f04c; end: 10b76f06f; -[SOJUCommerceErrorResponse initWithCode:message:isFakeError:isRetryable:] */

void FUN_10b76f04c(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76f070; end: 10b76f0ff; +[SOJUCommerceErrorResponse registerMessageFields:] */

void FUN_10b76f070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_code_1125ad4b8;
  _objc_retain(param_3);
  func_0x00010b76f120(param_3,param_2,puVar1);
  func_0x00010bf06b60();
  func_0x00010b76f120(param_3,param_2,PTR_s_message_112610668);
  func_0x00010bf06b60();
  func_0x00010b76f100();
  func_0x00010b76f100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76f100; end: 10b76f133;  */

void FUN_10b76f100(void)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76f134; end: 10b76f63f;  */

undefined8 FUN_10b76f134(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110ec5938;
  FUN_10b76f640();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x82b;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110ec5978;
    FUN_10b76f640();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x82a;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110ec59b8;
      FUN_10b76f640();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x839;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110ec59f8;
        FUN_10b76f640();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0x831;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110ec5a38;
          FUN_10b76f640();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x85e;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110ec5a78;
            FUN_10b76f640();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0x86c;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110ec5ab8;
              FUN_10b76f640();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x871;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110daf1f8;
                FUN_10b76f640();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0x881;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110ec5b58;
                  FUN_10b76f640();
                  if (ppuVar1 == (undefined **)0x0) {
                    uVar2 = 0x8c6;
                  }
                  else {
                    ppuVar1 = &PTR____CFConstantStringClassReference_110ec5b98;
                    FUN_10b76f640();
                    if (ppuVar1 == (undefined **)0x0) {
                      uVar2 = 0x8da;
                    }
                    else {
                      ppuVar1 = &PTR____CFConstantStringClassReference_110ec5bd8;
                      FUN_10b76f640();
                      if (ppuVar1 == (undefined **)0x0) {
                        uVar2 = 0x901;
                      }
                      else {
                        ppuVar1 = &PTR____CFConstantStringClassReference_110e77bb8;
                        FUN_10b76f640();
                        if (ppuVar1 == (undefined **)0x0) {
                          uVar2 = 0x91b;
                        }
                        else {
                          ppuVar1 = &PTR____CFConstantStringClassReference_110ec5c38;
                          FUN_10b76f640();
                          if (ppuVar1 == (undefined **)0x0) {
                            uVar2 = 0x923;
                          }
                          else {
                            ppuVar1 = &PTR____CFConstantStringClassReference_110daf238;
                            FUN_10b76f640();
                            if (ppuVar1 == (undefined **)0x0) {
                              uVar2 = 0x925;
                            }
                            else {
                              ppuVar1 = &PTR____CFConstantStringClassReference_110ec5c98;
                              FUN_10b76f640();
                              if (ppuVar1 == (undefined **)0x0) {
                                uVar2 = 0x918;
                              }
                              else {
                                ppuVar1 = &PTR____CFConstantStringClassReference_110ec5cd8;
                                FUN_10b76f640();
                                if (ppuVar1 == (undefined **)0x0) {
                                  uVar2 = 0x968;
                                }
                                else {
                                  ppuVar1 = &PTR____CFConstantStringClassReference_110ec5d18;
                                  FUN_10b76f640();
                                  if (ppuVar1 == (undefined **)0x0) {
                                    uVar2 = 0x96e;
                                  }
                                  else {
                                    ppuVar1 = &PTR____CFConstantStringClassReference_110ec5d58;
                                    FUN_10b76f640();
                                    if (ppuVar1 == (undefined **)0x0) {
                                      uVar2 = 0x975;
                                    }
                                    else {
                                      ppuVar1 = &PTR____CFConstantStringClassReference_110ec5d98;
                                      FUN_10b76f640();
                                      if (ppuVar1 == (undefined **)0x0) {
                                        uVar2 = 0x998;
                                      }
                                      else {
                                        ppuVar1 = &PTR____CFConstantStringClassReference_110ec5dd8;
                                        FUN_10b76f640();
                                        if (ppuVar1 == (undefined **)0x0) {
                                          uVar2 = 0x997;
                                        }
                                        else {
                                          ppuVar1 = &PTR____CFConstantStringClassReference_110ec5e18
                                          ;
                                          FUN_10b76f640();
                                          if (ppuVar1 == (undefined **)0x0) {
                                            uVar2 = 0x994;
                                          }
                                          else {
                                            ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e57438;
                                            FUN_10b76f640();
                                            if (ppuVar1 == (undefined **)0x0) {
                                              uVar2 = 0x99c;
                                            }
                                            else {
                                              ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5e78;
                                              FUN_10b76f640();
                                              if (ppuVar1 == (undefined **)0x0) {
                                                uVar2 = 0x9a1;
                                              }
                                              else {
                                                ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5eb8;
                                                FUN_10b76f640();
                                                if (ppuVar1 == (undefined **)0x0) {
                                                  uVar2 = 0x9a6;
                                                }
                                                else {
                                                  ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5ef8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9a2;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5f38;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9a7;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5f78;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9b7;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5fb8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9c8;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5ff8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9ba;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6038;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9bc;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6078;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9bf;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec60b8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9cb;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec60f8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9b5;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6138;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9b6;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6178;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9d9;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dd6e18;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9dc;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec61d8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9e3;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6218;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0x9f1;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110e69138;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xa02;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6258;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xa37;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110dcde58;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xa50;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec62b8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xa51;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec62f8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xa7a;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6338;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xa84;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6378;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xa9f;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec63b8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xabe;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec63f8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xaab;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6438;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xaca;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ddf558;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xadf;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec6498;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xad2;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec64d8;
                                                  FUN_10b76f640();
                                                  if (ppuVar1 == (undefined **)0x0) {
                                                    uVar2 = 0xae2;
                                                  }
                                                  else {
                                                    ppuVar1 = &
                                                  PTR____CFConstantStringClassReference_110ec5b18;
                                                  FUN_10b76f640();
                                                  uVar2 = 0x87f;
                                                  if (ppuVar1 != (undefined **)0x0) {
                                                    uVar2 = 0;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76f640; end: 10b76f647;  */

void FUN_10b76f640(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_caseInsensitiveCompare__1125aa560);
  return;
}



/* Entry: 10b76f648; end: 10b76f66b; -[SOJUConfigConfigResponse initWithStringConfigs:floatConfigs:longConfigs:booleanConfigs:] */

void FUN_10b76f648(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76f66c; end: 10b76f73b; +[SOJUConfigConfigResponse registerMessageFields:] */

void FUN_10b76f66c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b76f75c();
  func_0x00010b76f73c();
  func_0x00010b76f754();
  func_0x00010b76f75c();
  func_0x00010b76f73c();
  func_0x00010b76f754();
  func_0x00010b76f75c();
  func_0x00010b76f73c();
  func_0x00010b76f754();
  func_0x00010b76f75c();
  func_0x00010b76f73c();
  func_0x00010b76f754();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76f73c; end: 10b76f767;  */

void FUN_10b76f73c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,0,7,0,0);
  return;
}



/* Entry: 10b76f768; end: 10b76f76b; -[SOJUConnectedLensInfo initWithAppId:] */

void FUN_10b76f768(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b76f76c; end: 10b76f7ab; +[SOJUConnectedLensInfo registerMessageFields:] */

void FUN_10b76f76c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_appId_11259ee68,0,1,6,0,0,0,0);
  return;
}



/* Entry: 10b76f7ac; end: 10b76f7b7; +[SOJUConnectedLensInfoBuilder messageClass] */

void FUN_10b76f7ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126e0ab0);
  return;
}



/* Entry: 10b76f7b8; end: 10b76f7bb; +[SOJUConnectedLensInfoBuilder withJUConnectedLensInfo:] */

void FUN_10b76f7b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf24850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_builderWithBaseMessage__1125a6bb8);
  return;
}



/* Entry: 10b76f7bc; end: 10b76f7db; -[SOJUContextFilterMetadata initWithSkies:portraits:] */

void FUN_10b76f7bc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76f7dc; end: 10b76f853; +[SOJUContextFilterMetadata registerMessageFields:] */

void FUN_10b76f7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d8bf0;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  FUN_10b76f854();
  _objc_opt_class(PTR_PTR_1126d8bf8);
  FUN_10b76f854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76f854; end: 10b76f873;  */

void FUN_10b76f854(void)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b76f874; end: 10b76f89f; -[SOJUContextFilterSkyItem initWithUuid:url:skyType:styleType:colorBrightness:replacementSkyUrl:blimpUrl:] */

void FUN_10b76f874(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76f8a0; end: 10b76f99b; +[SOJUContextFilterSkyItem registerMessageFields:] */

void FUN_10b76f8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_uuid_112682d80;
  _objc_retain(param_3);
  FUN_10b76f99c(param_3,param_2,puVar1,0,0);
  FUN_10b76f99c(param_3,param_2,PTR_s_url_1126816f8,0,0);
  func_0x00010b76f9ac();
  func_0x00010bf06b60();
  func_0x00010b76f9ac();
  func_0x00010bf06b60();
  func_0x00010b76f9c4();
  func_0x00010bf06b60();
  func_0x00010b76f9c4();
  FUN_10b76f99c();
  func_0x00010b76f9c4();
  FUN_10b76f99c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76f99c; end: 10b76f9d3;  */

void FUN_10b76f99c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b76f9d4; end: 10b76fa53;  */

undefined8 FUN_10b76f9d4(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7dbd8;
  func_0x00010b76faa8();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0xffffffff81203449;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7dbf8;
    func_0x00010b76faa8();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0xffffffff9274be96;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7dc18;
      func_0x00010b76faa8();
      uVar2 = 0xfffffffff78dfac5;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76fa54; end: 10b76faaf;  */

undefined ** FUN_10b76fa54(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == -0x6d8b416a) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7dbf8;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7dc18;
  if (param_1 != -0x872053b) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110f7dbd8;
  if (param_1 != -0x7edfcbb7) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76fab0; end: 10b76fb2f;  */

undefined8 FUN_10b76fab0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd1f38;
  func_0x00010b76fb84();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x6b8dab7c;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7dc38;
    func_0x00010b76fb84();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x4bd76b4e;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7dc58;
      func_0x00010b76fb84();
      uVar2 = 0x5654bad0;
      if (ppuVar1 != (undefined **)0x0) {
        uVar2 = 0;
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76fb30; end: 10b76fb8b;  */

undefined ** FUN_10b76fb30(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110de39b8;
  if (param_1 == 0x4bd76b4e) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f7dc38;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7dc58;
  if (param_1 != 0x5654bad0) {
    ppuVar1 = ppuVar2;
  }
  ppuVar2 = &PTR____CFConstantStringClassReference_110dd1f38;
  if (param_1 != 0x6b8dab7c) {
    ppuVar2 = ppuVar1;
  }
  return ppuVar2;
}



/* Entry: 10b76fb8c; end: 10b76fcb3;  */

undefined8 FUN_10b76fb8c(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110f7dc78;
  func_0x00010b76fdbc();
  if (ppuVar1 == (undefined **)0x0) {
    uVar2 = 0x4fc93894;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f7dc98;
    func_0x00010b76fdbc();
    if (ppuVar1 == (undefined **)0x0) {
      uVar2 = 0x1d4675df;
    }
    else {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f7dcb8;
      func_0x00010b76fdbc();
      if (ppuVar1 == (undefined **)0x0) {
        uVar2 = 0x1d4dd251;
      }
      else {
        ppuVar1 = &PTR____CFConstantStringClassReference_110f7dcd8;
        func_0x00010b76fdbc();
        if (ppuVar1 == (undefined **)0x0) {
          uVar2 = 0xffffffff870f7a31;
        }
        else {
          ppuVar1 = &PTR____CFConstantStringClassReference_110f7dcf8;
          func_0x00010b76fdbc();
          if (ppuVar1 == (undefined **)0x0) {
            uVar2 = 0x34b6babc;
          }
          else {
            ppuVar1 = &PTR____CFConstantStringClassReference_110f7dd18;
            func_0x00010b76fdbc();
            if (ppuVar1 == (undefined **)0x0) {
              uVar2 = 0xfffffffff66c622e;
            }
            else {
              ppuVar1 = &PTR____CFConstantStringClassReference_110f7dd38;
              func_0x00010b76fdbc();
              if (ppuVar1 == (undefined **)0x0) {
                uVar2 = 0x489c5ac1;
              }
              else {
                ppuVar1 = &PTR____CFConstantStringClassReference_110f7dd58;
                func_0x00010b76fdbc();
                if (ppuVar1 == (undefined **)0x0) {
                  uVar2 = 0xffffffffad797091;
                }
                else {
                  ppuVar1 = &PTR____CFConstantStringClassReference_110e3cd18;
                  func_0x00010b76fdbc();
                  uVar2 = 0x237a88eb;
                  if (ppuVar1 != (undefined **)0x0) {
                    uVar2 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b76fcb4; end: 10b76fdc3;  */

undefined ** FUN_10b76fcb4(long param_1)

{
  if (param_1 == -0x78f085cf) {
    return &PTR____CFConstantStringClassReference_110f7dcd8;
  }
  if (param_1 == -0x52868f6f) {
    return &PTR____CFConstantStringClassReference_110f7dd58;
  }
  if (param_1 == -0x9939dd2) {
    return &PTR____CFConstantStringClassReference_110f7dd18;
  }
  if (param_1 == 0x4fc93894) {
    return &PTR____CFConstantStringClassReference_110f7dc78;
  }
  if (param_1 == 0x1d4dd251) {
    return &PTR____CFConstantStringClassReference_110f7dcb8;
  }
  if (param_1 == 0x237a88eb) {
    return &PTR____CFConstantStringClassReference_110e3cd18;
  }
  if (param_1 == 0x34b6babc) {
    return &PTR____CFConstantStringClassReference_110f7dcf8;
  }
  if (param_1 != 0x489c5ac1) {
    if (param_1 == 0x1d4675df) {
      return &PTR____CFConstantStringClassReference_110f7dc98;
    }
    return &PTR____CFConstantStringClassReference_110de39b8;
  }
  return &PTR____CFConstantStringClassReference_110f7dd38;
}



/* Entry: 10b76fdc4; end: 10b76fde3; -[SOJUConversationInteractionEvent initWithEventName:timestamp:originatingRecipientId:] */

void FUN_10b76fdc4(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76fde4; end: 10b76fe67; +[SOJUConversationInteractionEvent registerMessageFields:] */

void FUN_10b76fde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_eventName_1125c41c0;
  _objc_retain(param_3);
  FUN_10b76fe68(param_3,param_2,puVar1);
  func_0x00010bf06b60(param_3,param_2,PTR_s_timestamp_112679c98,0,0,2,0,0,0,0);
  FUN_10b76fe68(param_3,param_2,PTR_s_originatingRecipientId_112545300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b76fe68; end: 10b76fe7f;  */

void FUN_10b76fe68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,6,0,0);
  return;
}



/* Entry: 10b76fe80; end: 10b76feb7; -[SOJUConversationMessage initWithType:idValue:appEngineTarget:header:retried:knownChatSequenceNumbers:mischiefVersion:seqNum:timestamp:] */

void FUN_10b76fe80(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b76feb8; end: 10b77001f; +[SOJUConversationMessage registerMessageFields:] */

void FUN_10b76feb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010b77003c();
  func_0x00010bf06b60();
  func_0x00010b770020(param_3,param_2,PTR_s_idValue_1125d7158,
                      &PTR____CFConstantStringClassReference_110dbf6f8,2,6);
  func_0x00010b77002c();
  func_0x00010b770020();
  _objc_opt_class(PTR_PTR_1126e0a78);
  func_0x00010b77003c();
  func_0x00010bf06b60();
  func_0x00010b77002c();
  func_0x00010b770020();
  func_0x00010b770020(param_3,param_2,PTR_s_knownChatSequenceNumbers_112545160,0,1,7);
  func_0x00010c19a460(param_3,param_2,0xb729ceb2d853c2);
  func_0x00010b77002c();
  func_0x00010b770020();
  func_0x00010b77002c();
  func_0x00010b770020();
  func_0x00010b77002c();
  func_0x00010b770020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b770020; end: 10b77004f;  */

void FUN_10b770020(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b770050; end: 10b77007b; -[SOJUConversationState initWithUserSequences:updateSequences:snapSequences:userChatReleasesV2:userSnapReleasesV2:userChatReleases:userSnapReleases:] */

void FUN_10b770050(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b77007c; end: 10b7701d7; +[SOJUConversationState registerMessageFields:] */

void FUN_10b77007c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_userSequences_112545318;
  _objc_retain(param_3);
  FUN_10b7701d8(param_3,param_2,puVar1);
  func_0x00010b770208();
  FUN_10b7701d8(param_3,param_2,PTR_s_updateSequences_112545320);
  func_0x00010b770208();
  FUN_10b7701d8(param_3,param_2,PTR_s_snapSequences_112545328);
  func_0x00010b770208();
  _objc_opt_class(PTR_PTR_1126e0ab8);
  func_0x00010b7701f0();
  func_0x00010bf06b60();
  _objc_opt_class(PTR_PTR_1126e0ac0);
  func_0x00010b7701f0();
  func_0x00010bf06b60();
  FUN_10b7701d8(param_3,param_2,PTR_s_userChatReleases_112545340);
  func_0x00010b770208();
  FUN_10b7701d8(param_3,param_2,PTR_s_userSnapReleases_112545348);
  func_0x00010b770208();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7701d8; end: 10b77020f;  */

void FUN_10b7701d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480,param_3,0,1,7,0,0);
  return;
}



/* Entry: 10b770210; end: 10b77022f; -[SOJUConversationStateChatRelease initWithUsername:releases:] */

void FUN_10b770210(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b770230; end: 10b7702bf; +[SOJUConversationStateChatRelease registerMessageFields:] */

void FUN_10b770230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_username_112682b30;
  _objc_retain(param_3);
  FUN_10b7702c0(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  FUN_10b7702c0(param_3,param_2,PTR_s_releases_112545358,0,0,7,in_x6,in_x7,0,2);
  func_0x00010c19a460(param_3,param_2,0x8f975cd28c61ae);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7702c0; end: 10b7702cb;  */

void FUN_10b7702c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b7702cc; end: 10b7702eb; -[SOJUConversationStateSnapRelease initWithUsername:releases:] */

void FUN_10b7702cc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7702ec; end: 10b77037b; +[SOJUConversationStateSnapRelease registerMessageFields:] */

void FUN_10b7702ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_username_112682b30;
  _objc_retain(param_3);
  FUN_10b77037c(param_3,param_2,puVar1,0,0,6,in_x6,in_x7,0,0);
  FUN_10b77037c(param_3,param_2,PTR_s_releases_112545358,0,0,7,in_x6,in_x7,0,2);
  func_0x00010c19a460(param_3,param_2,0x8f975cd28c61ae);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77037c; end: 10b770387;  */

void FUN_10b77037c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b770388; end: 10b77038b; -[SOJUConversationsResponseInfo initWithIsDelta:] */

void FUN_10b770388(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b77038c; end: 10b7703cb; +[SOJUConversationsResponseInfo registerMessageFields:] */

void FUN_10b77038c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf06b60(param_3,param_2,PTR_s_isDelta_112545368,0,1,0,0,0,0,0);
  return;
}



/* Entry: 10b7703cc; end: 10b7703eb; -[SOJUCoordinate initWithLat:longValue:] */

void FUN_10b7703cc(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b7703ec; end: 10b77045b; +[SOJUCoordinate registerMessageFields:] */

void FUN_10b7703ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_lat_112600538;
  _objc_retain(param_3);
  FUN_10b77045c(param_3,param_2,puVar1,0,0);
  FUN_10b77045c(param_3,param_2,PTR_s_longValue_11260ae10,
                &PTR____CFConstantStringClassReference_110e262f8,2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77045c; end: 10b77046b;  */

void FUN_10b77045c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}



/* Entry: 10b77046c; end: 10b77046f; -[SOJUCustomStickerGetImage initWithCustomStickerIdList:] */

void FUN_10b77046c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c012bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 10b770470; end: 10b7704e7; +[SOJUCustomStickerGetImage registerMessageFields:] */

void FUN_10b770470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_customStickerIdList_112545378;
  _objc_retain(param_3);
  func_0x00010bf06b60(param_3,param_2,puVar1,0,1,7,0,0,0,1);
  func_0x00010c19a460(param_3,param_2,0x3a0ac57aec2a57);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7704e8; end: 10b770507; -[SOJUCustomStickerLastUsedTime initWithStickerId:lastUsedTime:] */

void FUN_10b7704e8(void)

{
  func_0x00010c012ba0();
  return;
}



/* Entry: 10b770508; end: 10b77057b; +[SOJUCustomStickerLastUsedTime registerMessageFields:] */

void FUN_10b770508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  puVar1 = PTR_s_stickerId_112672a58;
  _objc_retain(param_3);
  FUN_10b77057c(param_3,param_2,puVar1,0,1,6,in_x6,in_x7,0,0);
  FUN_10b77057c(param_3,param_2,PTR_s_lastUsedTime_112545388,0,1,2,in_x6,in_x7,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b77057c; end: 10b770587;  */

void FUN_10b77057c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf06b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_appendFieldWithSEL_jsonFieldName_11259f480);
  return;
}


