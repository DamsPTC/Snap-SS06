/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b636b34; end: 10b636b57; -[SCNMessagingConversationMessageOneToOneMetricsData setRecipientId:] */

void FUN_10b636b34(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b636b98();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636b58; end: 10b636b5f; -[SCNMessagingConversationMessageOneToOneMetricsData snapPostOpenViewingPolicy] */

undefined8 FUN_10b636b58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b636b60; end: 10b636b67; -[SCNMessagingConversationMessageOneToOneMetricsData setSnapPostOpenViewingPolicy:] */

void FUN_10b636b60(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b636b68; end: 10b636b97; -[SCNMessagingConversationMessageOneToOneMetricsData .cxx_destruct] */

void FUN_10b636b68(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b636b98; end: 10b636ba7;  */

void FUN_10b636b98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b636ba8; end: 10b636c57; -[SCNMessagingConversationMetadata initWithConversationId:version:lastSeenChat:lastSeenSnap:lastSeenReactionId:] */

undefined1 *
FUN_10b636ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_112706e90;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b636c58; end: 10b636c5f; -[SCNMessagingConversationMetadata conversationId] */

undefined8 FUN_10b636c58(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b636c60; end: 10b636c8f; -[SCNMessagingConversationMetadata setConversationId:] */

void FUN_10b636c60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636c90; end: 10b636c97; -[SCNMessagingConversationMetadata version] */

undefined8 FUN_10b636c90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b636c98; end: 10b636c9f; -[SCNMessagingConversationMetadata setVersion:] */

void FUN_10b636c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b636ca0; end: 10b636ca7; -[SCNMessagingConversationMetadata lastSeenChat] */

undefined8 FUN_10b636ca0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b636ca8; end: 10b636caf; -[SCNMessagingConversationMetadata setLastSeenChat:] */

void FUN_10b636ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b636cb0; end: 10b636cb7; -[SCNMessagingConversationMetadata lastSeenSnap] */

undefined8 FUN_10b636cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b636cb8; end: 10b636cbf; -[SCNMessagingConversationMetadata setLastSeenSnap:] */

void FUN_10b636cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b636cc0; end: 10b636cc7; -[SCNMessagingConversationMetadata lastSeenReactionId] */

undefined8 FUN_10b636cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b636cc8; end: 10b636ccf; -[SCNMessagingConversationMetadata setLastSeenReactionId:] */

void FUN_10b636cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10b636cd0; end: 10b636cdb; -[SCNMessagingConversationMetadata .cxx_destruct] */

void FUN_10b636cd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b636cdc; end: 10b636ce3; -[SCNMessagingConversationMetadataFormat userListMessageMetadata] */

undefined8 FUN_10b636cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b636ce4; end: 10b636ceb; -[SCNMessagingConversationMetadataFormat setUserListMessageMetadata:] */

void FUN_10b636ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b636cec; end: 10b636d83; -[SCNMessagingConversationMetricsData initWithConversationId:type:] */

undefined1 *
FUN_10b636cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706ea0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b636d84; end: 10b636d8b; -[SCNMessagingConversationMetricsData conversationId] */

undefined8 FUN_10b636d84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b636d8c; end: 10b636dbb; -[SCNMessagingConversationMetricsData setConversationId:] */

void FUN_10b636d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b636dbc; end: 10b636dc3; -[SCNMessagingConversationMetricsData type] */

undefined8 FUN_10b636dbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b636dc4; end: 10b636dcb; -[SCNMessagingConversationMetricsData setType:] */

void FUN_10b636dc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b636dcc; end: 10b636dd7; -[SCNMessagingConversationMetricsData .cxx_destruct] */

void FUN_10b636dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b636dd8; end: 10b636eef; -[SCNMessagingConversationRetentionPolicy isEqual:] */

uint FUN_10b636dd8(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126da988;
  _objc_opt_class(PTR_PTR_1126da988);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    goto LAB_10b636ebc;
  }
  _objc_retain(param_3);
  uVar2 = param_1;
  func_0x00010c15c620();
  uVar3 = param_3;
  func_0x00010c15c620();
  if ((int)uVar2 == (int)uVar3) {
    uVar2 = param_1;
    func_0x00010c15c640();
    uVar3 = param_3;
    func_0x00010c15c640();
    if ((int)uVar2 != (int)uVar3) goto LAB_10b636eb4;
    uVar2 = param_1;
    func_0x00010c281ee0();
    uVar3 = param_3;
    func_0x00010c281ee0();
    if (uVar2 != uVar3) goto LAB_10b636eb4;
    uVar2 = param_1;
    func_0x00010c1218e0();
    uVar3 = param_3;
    func_0x00010c1218e0();
    if (uVar2 != uVar3) goto LAB_10b636eb4;
    func_0x00010bfed7a0(param_1);
    func_0x00010bfed7a0(param_3);
    uVar4 = (uint)param_1 ^ (uint)param_3 ^ 1;
  }
  else {
LAB_10b636eb4:
    uVar4 = 0;
  }
  func_0x00010b636ffc();
LAB_10b636ebc:
  func_0x00010b636ffc();
  return uVar4;
}



/* Entry: 10b636ef0; end: 10b636fab; -[SCNMessagingConversationRetentionPolicy hash] */

ulong FUN_10b636ef0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c15c620(param_1);
  uVar3 = param_1;
  func_0x00010c15c640(param_1);
  uVar4 = param_1;
  func_0x00010c281ee0(param_1);
  uVar5 = param_1;
  func_0x00010c1218e0(param_1);
  func_0x00010bfed7a0(param_1);
  func_0x00010b636ffc();
  return uVar1 ^ uVar2 & 0xffffffff ^ uVar3 & 0xffffffff ^ uVar4 ^ uVar5 ^ param_1 & 0xffffffff;
}



/* Entry: 10b636fac; end: 10b636fb3; -[SCNMessagingConversationRetentionPolicy sendReadMessage] */

undefined1 FUN_10b636fac(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b636fb4; end: 10b636fbb; -[SCNMessagingConversationRetentionPolicy setSendReadMessage:] */

void FUN_10b636fb4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b636fbc; end: 10b636fc3; -[SCNMessagingConversationRetentionPolicy sendReleaseMessages] */

undefined1 FUN_10b636fbc(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b636fc4; end: 10b636fcb; -[SCNMessagingConversationRetentionPolicy setSendReleaseMessages:] */

void FUN_10b636fc4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 9) = param_3;
  return;
}



/* Entry: 10b636fcc; end: 10b636fd3; -[SCNMessagingConversationRetentionPolicy unreadRetentionTimeSeconds] */

undefined8 FUN_10b636fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b636fd4; end: 10b636fdb; -[SCNMessagingConversationRetentionPolicy setUnreadRetentionTimeSeconds:] */

void FUN_10b636fd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b636fdc; end: 10b636fe3; -[SCNMessagingConversationRetentionPolicy readRetentionTimeSeconds] */

undefined8 FUN_10b636fdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b636fe4; end: 10b636feb; -[SCNMessagingConversationRetentionPolicy setReadRetentionTimeSeconds:] */

void FUN_10b636fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b636fec; end: 10b636ff3; -[SCNMessagingConversationRetentionPolicy infiniteMode] */

undefined1 FUN_10b636fec(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10b636ff4; end: 10b637003; -[SCNMessagingConversationRetentionPolicy setInfiniteMode:] */

void FUN_10b636ff4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 10) = param_3;
  return;
}



/* Entry: 10b637004; end: 10b637013; -[SCNMessagingConversationSubTypeMetadata init] */

void FUN_10b637004(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bffc330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithCampaignMetadata_publicG_1125dca90,0,0,0);
  return;
}



/* Entry: 10b637014; end: 10b637033; -[SCNMessagingConversationSubTypeMetadata setCampaignMetadata:] */

void FUN_10b637014(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637084();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637034; end: 10b63703b; -[SCNMessagingConversationSubTypeMetadata publicGroupMetadata] */

undefined8 FUN_10b637034(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63703c; end: 10b63705b; -[SCNMessagingConversationSubTypeMetadata setPublicGroupMetadata:] */

void FUN_10b63703c(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637084();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b63705c; end: 10b637063; -[SCNMessagingConversationSubTypeMetadata botConversationMetadata] */

undefined8 FUN_10b63705c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b637064; end: 10b637083; -[SCNMessagingConversationSubTypeMetadata setBotConversationMetadata:] */

void FUN_10b637064(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637084();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637084; end: 10b63709b;  */

void FUN_10b637084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b63709c; end: 10b637163; -[SCNMessagingConversationSyncRequest initWithConversationId:conversationType:minVersion:] */

undefined1 *
FUN_10b63709c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706eb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b637164; end: 10b63716b; -[SCNMessagingConversationSyncRequest initWithConversationId:conversationType:] */

void FUN_10b637164(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c004e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithConversationId_conversat_1125ded50,param_3,param_4,0);
  return;
}



/* Entry: 10b63716c; end: 10b637173; -[SCNMessagingConversationSyncRequest conversationId] */

undefined8 FUN_10b63716c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b637174; end: 10b637197; -[SCNMessagingConversationSyncRequest setConversationId:] */

void FUN_10b637174(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637204();
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  *(undefined8 *)(unaff_x20 + 8) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637198; end: 10b63719f; -[SCNMessagingConversationSyncRequest conversationType] */

undefined8 FUN_10b637198(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6371a0; end: 10b6371a7; -[SCNMessagingConversationSyncRequest setConversationType:] */

void FUN_10b6371a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6371a8; end: 10b6371af; -[SCNMessagingConversationSyncRequest minVersion] */

undefined8 FUN_10b6371a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b6371b0; end: 10b6371d3; -[SCNMessagingConversationSyncRequest setMinVersion:] */

void FUN_10b6371b0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637204();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6371d4; end: 10b637203; -[SCNMessagingConversationSyncRequest .cxx_destruct] */

void FUN_10b6371d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b637204; end: 10b637213;  */

void FUN_10b637204(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b637214; end: 10b63728b; -[SCNMessagingConversationSyncStats initWithConversationSyncAttempted:responseSize:messagesCount:conversationUpdateCount:eelMessagesCount:eelDecryptionLatencyUs:] */

void FUN_10b637214(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112706ec0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
    *(undefined4 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0x14) = param_6;
    *(undefined4 *)((long)puVar1 + 0x18) = param_7;
    *(undefined4 *)((long)puVar1 + 0x1c) = param_8;
  }
  return;
}



/* Entry: 10b63728c; end: 10b637293; -[SCNMessagingConversationSyncStats conversationSyncAttempted] */

undefined1 FUN_10b63728c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b637294; end: 10b63729b; -[SCNMessagingConversationSyncStats setConversationSyncAttempted:] */

void FUN_10b637294(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b63729c; end: 10b6372a3; -[SCNMessagingConversationSyncStats responseSize] */

undefined4 FUN_10b63729c(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b6372a4; end: 10b6372ab; -[SCNMessagingConversationSyncStats setResponseSize:] */

void FUN_10b6372a4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  return;
}



/* Entry: 10b6372ac; end: 10b6372b3; -[SCNMessagingConversationSyncStats messagesCount] */

undefined4 FUN_10b6372ac(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 10b6372b4; end: 10b6372bb; -[SCNMessagingConversationSyncStats setMessagesCount:] */

void FUN_10b6372b4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b6372bc; end: 10b6372c3; -[SCNMessagingConversationSyncStats conversationUpdateCount] */

undefined4 FUN_10b6372bc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* Entry: 10b6372c4; end: 10b6372cb; -[SCNMessagingConversationSyncStats setConversationUpdateCount:] */

void FUN_10b6372c4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x14) = param_3;
  return;
}



/* Entry: 10b6372cc; end: 10b6372d3; -[SCNMessagingConversationSyncStats eelMessagesCount] */

undefined4 FUN_10b6372cc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x18);
}



/* Entry: 10b6372d4; end: 10b6372db; -[SCNMessagingConversationSyncStats setEelMessagesCount:] */

void FUN_10b6372d4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b6372dc; end: 10b6372e3; -[SCNMessagingConversationSyncStats eelDecryptionLatencyUs] */

undefined4 FUN_10b6372dc(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



/* Entry: 10b6372e4; end: 10b6372eb; -[SCNMessagingConversationSyncStats setEelDecryptionLatencyUs:] */

void FUN_10b6372e4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  return;
}



/* Entry: 10b6372ec; end: 10b6373b3; -[SCNMessagingDataWipeParams initWithReason:arroyoExperienceBefore:arroyoExperienceAfter:] */

undefined1 *
FUN_10b6372ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112706ec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6373b4; end: 10b6373bf; -[SCNMessagingDataWipeParams initWithReason:] */

void FUN_10b6373b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c03d1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithReason_arroyoExperienceB_1125ece68,param_3,0,0);
  return;
}



/* Entry: 10b6373c0; end: 10b6373c7; -[SCNMessagingDataWipeParams reason] */

undefined8 FUN_10b6373c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6373c8; end: 10b6373cf; -[SCNMessagingDataWipeParams setReason:] */

void FUN_10b6373c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b6373d0; end: 10b6373d7; -[SCNMessagingDataWipeParams arroyoExperienceBefore] */

undefined8 FUN_10b6373d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6373d8; end: 10b6373fb; -[SCNMessagingDataWipeParams setArroyoExperienceBefore:] */

void FUN_10b6373d8(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637458();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b6373fc; end: 10b637403; -[SCNMessagingDataWipeParams arroyoExperienceAfter] */

undefined8 FUN_10b6373fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b637404; end: 10b637427; -[SCNMessagingDataWipeParams setArroyoExperienceAfter:] */

void FUN_10b637404(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b637458();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = unaff_x19;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637428; end: 10b637457; -[SCNMessagingDataWipeParams .cxx_destruct] */

void FUN_10b637428(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b637458; end: 10b637467;  */

void FUN_10b637458(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b637468; end: 10b6374ff; -[SCNMessagingDeletedFeedEntry initWithReason:feedEntryIdentifier:] */

undefined1 *
FUN_10b637468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706ed0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b637500; end: 10b637507; -[SCNMessagingDeletedFeedEntry reason] */

undefined8 FUN_10b637500(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b637508; end: 10b63750f; -[SCNMessagingDeletedFeedEntry setReason:] */

void FUN_10b637508(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10b637510; end: 10b637517; -[SCNMessagingDeletedFeedEntry feedEntryIdentifier] */

undefined8 FUN_10b637510(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b637518; end: 10b637547; -[SCNMessagingDeletedFeedEntry setFeedEntryIdentifier:] */

void FUN_10b637518(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637548; end: 10b637553; -[SCNMessagingDeletedFeedEntry .cxx_destruct] */

void FUN_10b637548(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b637554; end: 10b6375eb; -[SCNMessagingDeletedMessageDescriptor initWithDescriptor:orderKey:] */

undefined1 *
FUN_10b637554(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112706ed8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b6375ec; end: 10b6375f3; -[SCNMessagingDeletedMessageDescriptor descriptor] */

undefined8 FUN_10b6375ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6375f4; end: 10b637623; -[SCNMessagingDeletedMessageDescriptor setDescriptor:] */

void FUN_10b6375f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b637624; end: 10b63762b; -[SCNMessagingDeletedMessageDescriptor orderKey] */

undefined8 FUN_10b637624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b63762c; end: 10b637633; -[SCNMessagingDeletedMessageDescriptor setOrderKey:] */

void FUN_10b63762c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10b637634; end: 10b63763f; -[SCNMessagingDeletedMessageDescriptor .cxx_destruct] */

void FUN_10b637634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b637640; end: 10b63771b; -[SCNMessagingDeviceEncryptionKeyLite initWithPublicKey:privateKey:] */

undefined1 *
FUN_10b637640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706ee0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b63771c; end: 10b637723; -[SCNMessagingDeviceEncryptionKeyLite publicKey] */

undefined8 FUN_10b63771c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b637724; end: 10b63772b; -[SCNMessagingDeviceEncryptionKeyLite setPublicKey:] */

void FUN_10b637724(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63772c; end: 10b637733; -[SCNMessagingDeviceEncryptionKeyLite privateKey] */

undefined8 FUN_10b63772c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b637734; end: 10b63773b; -[SCNMessagingDeviceEncryptionKeyLite setPrivateKey:] */

void FUN_10b637734(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b63773c; end: 10b63776b; -[SCNMessagingDeviceEncryptionKeyLite .cxx_destruct] */

void FUN_10b63773c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b63776c; end: 10b637847; -[SCNMessagingEditedMessageContent initWithContent:mentionInfo:] */

undefined1 *
FUN_10b63776c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706ee8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b637848; end: 10b63784f; -[SCNMessagingEditedMessageContent initWithContent:] */

void FUN_10b637848(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c002c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithContent_mentionInfo__1125de4e8,param_3,0);
  return;
}



/* Entry: 10b637850; end: 10b637857; -[SCNMessagingEditedMessageContent content] */

undefined8 FUN_10b637850(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b637858; end: 10b63785f; -[SCNMessagingEditedMessageContent setContent:] */

void FUN_10b637858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b637860; end: 10b637867; -[SCNMessagingEditedMessageContent mentionInfo] */

undefined8 FUN_10b637860(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


