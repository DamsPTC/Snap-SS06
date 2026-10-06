/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afe9bd4; end: 10afe9c03; -[SCChatInputFeatureType .cxx_destruct] */

void FUN_10afe9bd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afe9c04; end: 10afe9c4f; -[SCChatInputSizeEvent initWithNewSize:] */

void FUN_10afe9c04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112703fe8;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 10afe9c50; end: 10afe9c73; -[SCChatInputSizeEvent copyWithZone:] */

undefined8 FUN_10afe9c50(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afe9c74; end: 10afe9d07; -[SCChatInputSizeEvent hash] */

ulong * FUN_10afe9c74(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar2 = &uStack_28;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar2 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar2;
      _objc_opt_class(puVar2);
      puVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar3 & 1) == 0) {
        puVar6 = (ulong *)0x0;
      }
      else {
        uVar4 = 0;
        if ((double)puVar2[2] == (double)param_3[2]) {
          uVar4 = (uint)((double)puVar2[1] == (double)param_3[1]);
        }
        puVar6 = (ulong *)(ulong)uVar4;
      }
    }
  }
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afe9d08; end: 10afe9d97; -[SCChatInputSizeEvent isEqual:] */

bool FUN_10afe9d08(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar1 = param_1;
      _objc_opt_class(param_1);
      uVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar1);
      if ((uVar2 & 1) == 0) {
        bVar3 = false;
      }
      else {
        bVar3 = false;
        if (*(double *)(param_1 + 0x10) == *(double *)(param_3 + 0x10)) {
          bVar3 = *(double *)(param_1 + 8) == *(double *)(param_3 + 8);
        }
      }
    }
  }
  _objc_release(param_3);
  return bVar3;
}



/* Entry: 10afe9d98; end: 10afe9d9f; -[SCChatInputSizeEvent newSize] */

undefined1  [16] FUN_10afe9d98(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + 8);
}



/* Entry: 10afe9da0; end: 10afea013; -[SCChatActiveConversationInformation initWithConversationId:conversationSubtype:chatPageSource:chatIdentifier:quotedMessageData:storyMetadata:contextSessionId:hasSeenSnapProPublicStoryReplyDisclaimer:isPosterMutualFriend:presenceInformation:shouldPreferStickerReplyOverChatReaction:isConversationSpotlightRecommendReply:sendContextSource:attachedURL:hasSaturnStatusVisible:isCampaignConversation:recipientIsThirdPartyBot:recipientIsSnapchatBot:recipientUserId:] */

undefined8 *
FUN_10afe9da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
             undefined4 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined4 param_18,undefined4 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_20);
  puStack_68 = PTR_PTR_112703ff0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    puVar1[3] = param_4;
    puVar1[4] = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_10;
    *(undefined1 *)((long)puVar1 + 9) = param_10._1_1_;
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = (undefined1)param_13;
    *(undefined1 *)((long)puVar1 + 0xb) = param_13._1_1_;
    puVar1[10] = param_15;
    uVar2 = param_16;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xc) = (undefined1)param_18;
    *(undefined1 *)((long)puVar1 + 0xd) = param_18._1_1_;
    *(undefined1 *)((long)puVar1 + 0xe) = param_18._2_1_;
    uVar2 = param_20;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_20);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afea014; end: 10afea037; -[SCChatActiveConversationInformation copyWithZone:] */

undefined8 FUN_10afea014(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afea038; end: 10afea13b; -[SCChatActiveConversationInformation hash] */

undefined8 * FUN_10afea038(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uStack_88 = (ulong)*(byte *)(param_1 + 8);
  uStack_80 = (ulong)*(byte *)(param_1 + 9);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar1;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 10);
  uStack_68 = (ulong)*(byte *)(param_1 + 0xb);
  lVar5 = *(long *)(param_1 + 0x50);
  uStack_58 = *(undefined8 *)(param_1 + 0x58);
  lStack_60 = -lVar5;
  if (-1 < lVar5) {
    lStack_60 = lVar5;
  }
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0xc);
  uStack_40 = (ulong)*(byte *)(param_1 + 0xd);
  uStack_38 = (ulong)*(byte *)(param_1 + 0xe);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afea304:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afea310;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((((ulong)puVar4 & 1) != 0) &&
         ((((*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)((long)puVar3 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(char *)((long)puVar3 + 8) == param_3[8])) &&
          ((*(char *)((long)puVar3 + 9) == param_3[9] &&
           (*(char *)((long)puVar3 + 10) == param_3[10])))))) &&
        (*(char *)((long)puVar3 + 0xb) == param_3[0xb])) &&
       (((*(long *)((long)puVar3 + 0x50) == *(long *)(param_3 + 0x50) &&
         (*(char *)((long)puVar3 + 0xc) == param_3[0xc])) &&
        ((*(char *)((long)puVar3 + 0xd) == param_3[0xd] &&
         (*(char *)((long)puVar3 + 0xe) == param_3[0xe])))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x28);
        if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x30);
          if ((lVar5 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x38);
            if ((lVar5 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = *(long *)((long)puVar3 + 0x40);
              if ((lVar5 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar5 != 0))
              {
                lVar5 = *(long *)((long)puVar3 + 0x48);
                if ((lVar5 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar5 != 0)
                   ) {
                  lVar5 = *(long *)((long)puVar3 + 0x58);
                  if ((lVar5 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = *(long *)((long)puVar3 + 0x60);
                    if ((lVar5 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      puVar6 = *(undefined1 **)((long)puVar3 + 0x68);
                      if (puVar6 != *(undefined1 **)(param_3 + 0x68)) {
                        func_0x00010c071ae0();
                        goto LAB_10afea310;
                      }
                      goto LAB_10afea304;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afea310:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afea13c; end: 10afea32b; -[SCChatActiveConversationInformation isEqual:] */

long FUN_10afea13c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afea304:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afea310;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
            (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
           (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
          ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
           (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) &&
        (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))) &&
       (((*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50) &&
         (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) &&
        ((*(char *)(param_1 + 0xd) == *(char *)(param_3 + 0xd) &&
         (*(char *)(param_1 + 0xe) == *(char *)(param_3 + 0xe))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x48);
                if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if (lVar3 != *(long *)(param_3 + 0x68)) {
                        func_0x00010c071ae0();
                        goto LAB_10afea310;
                      }
                      goto LAB_10afea304;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afea310:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afea32c; end: 10afea333; -[SCChatActiveConversationInformation conversationId] */

undefined8 FUN_10afea32c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afea334; end: 10afea33b; -[SCChatActiveConversationInformation conversationSubtype] */

undefined8 FUN_10afea334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afea33c; end: 10afea343; -[SCChatActiveConversationInformation chatPageSource] */

undefined8 FUN_10afea33c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afea344; end: 10afea34b; -[SCChatActiveConversationInformation chatIdentifier] */

undefined8 FUN_10afea344(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afea34c; end: 10afea353; -[SCChatActiveConversationInformation quotedMessageData] */

undefined8 FUN_10afea34c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afea354; end: 10afea35b; -[SCChatActiveConversationInformation storyMetadata] */

undefined8 FUN_10afea354(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afea35c; end: 10afea363; -[SCChatActiveConversationInformation contextSessionId] */

undefined8 FUN_10afea35c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afea364; end: 10afea36b; -[SCChatActiveConversationInformation hasSeenSnapProPublicStoryReplyDisclaimer] */

undefined1 FUN_10afea364(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afea36c; end: 10afea373; -[SCChatActiveConversationInformation isPosterMutualFriend] */

undefined1 FUN_10afea36c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afea374; end: 10afea37b; -[SCChatActiveConversationInformation presenceInformation] */

undefined8 FUN_10afea374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afea37c; end: 10afea383; -[SCChatActiveConversationInformation shouldPreferStickerReplyOverChatReaction] */

undefined1 FUN_10afea37c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10afea384; end: 10afea38b; -[SCChatActiveConversationInformation isConversationSpotlightRecommendReply] */

undefined1 FUN_10afea384(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 10afea38c; end: 10afea393; -[SCChatActiveConversationInformation sendContextSource] */

undefined8 FUN_10afea38c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afea394; end: 10afea39b; -[SCChatActiveConversationInformation attachedURL] */

undefined8 FUN_10afea394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afea39c; end: 10afea3a3; -[SCChatActiveConversationInformation hasSaturnStatusVisible] */

undefined8 FUN_10afea39c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afea3a4; end: 10afea3ab; -[SCChatActiveConversationInformation isCampaignConversation] */

undefined1 FUN_10afea3a4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 10afea3ac; end: 10afea3b3; -[SCChatActiveConversationInformation recipientIsThirdPartyBot] */

undefined1 FUN_10afea3ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 10afea3b4; end: 10afea3bb; -[SCChatActiveConversationInformation recipientIsSnapchatBot] */

undefined1 FUN_10afea3b4(long param_1)

{
  return *(undefined1 *)(param_1 + 0xe);
}



/* Entry: 10afea3bc; end: 10afea3c3; -[SCChatActiveConversationInformation recipientUserId] */

undefined8 FUN_10afea3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10afea3c4; end: 10afea447; -[SCChatActiveConversationInformation .cxx_destruct] */

void FUN_10afea3c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afea448; end: 10afea463; +[SCChatActiveConversationInformationBuilder chatActiveConversationInformation] */

void FUN_10afea448(void)

{
  _objc_alloc_init(PTR_PTR_1126cb300);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afea464; end: 10afea8b7; +[SCChatActiveConversationInformationBuilder chatActiveConversationInformationFromExistingChatActiveConversationInformation:] */

void FUN_10afea464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  
  puVar1 = PTR_PTR_1126cb300;
  _objc_retain(param_3);
  func_0x00010bf35e40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2ab180(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf50920(param_3);
  puVar5 = puVar3;
  func_0x00010c2ab1c0(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf37160(param_3);
  puVar6 = puVar5;
  func_0x00010c2aa600(puVar5,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf36840();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c2aa560(puVar6,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c11eca0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x00010c2b66a0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c25a520();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c2ba500(puVar9,param_2,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010bf4f080();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c2ab080(puVar11,param_2,uVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010bfdbbc0(param_3);
  puVar15 = puVar13;
  func_0x00010c2af480(puVar13,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c07a880(param_3);
  puVar16 = puVar15;
  func_0x00010c2b11e0(puVar15,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_3;
  func_0x00010c10ad20();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c2b5be0(puVar16,param_2,uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c231e20(param_3);
  puVar19 = puVar17;
  func_0x00010c2b8aa0(puVar17,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c06f6c0(param_3);
  puVar20 = puVar19;
  func_0x00010c2b04c0(puVar19,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010c15b9c0(param_3);
  puVar21 = puVar20;
  func_0x00010c2b81a0(puVar20,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = param_3;
  func_0x00010bf0cb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar21;
  func_0x00010c2a8840(puVar21,param_2,uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = param_3;
  func_0x00010bfdb620(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  func_0x00010c2af3e0(puVar22,param_2,uVar23);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c06e040(param_3);
  puVar26 = puVar24;
  func_0x00010c2b03e0(puVar24,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c122be0(param_3);
  puVar27 = puVar26;
  func_0x00010c2b6920(puVar26,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c122bc0(param_3);
  puVar28 = puVar27;
  func_0x00010c2b6900(puVar27,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = param_3;
  func_0x00010c122e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar29 = puVar28;
  func_0x00010c2b6960(puVar28,param_2,uVar25);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar25);
  _objc_release(puVar28);
  _objc_release(puVar27);
  _objc_release(puVar26);
  _objc_release(puVar24);
  _objc_release(uVar23);
  _objc_release(puVar22);
  _objc_release(uVar18);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar17);
  _objc_release(uVar14);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(uVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar29);
  return;
}



/* Entry: 10afea8b8; end: 10afea93f; -[SCChatActiveConversationInformationBuilder build] */

void FUN_10afea8b8(void)

{
  _objc_alloc(PTR_PTR_1126b6108);
  func_0x00010c004da0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afea940; end: 10afea977; -[SCChatActiveConversationInformationBuilder withConversationId:] */

long FUN_10afea940(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afea978; end: 10afea97f; -[SCChatActiveConversationInformationBuilder withConversationSubtype:] */

void FUN_10afea978(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10afea980; end: 10afea987; -[SCChatActiveConversationInformationBuilder withChatPageSource:] */

void FUN_10afea980(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10afea988; end: 10afea9bf; -[SCChatActiveConversationInformationBuilder withChatIdentifier:] */

long FUN_10afea988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afea9c0; end: 10afea9f7; -[SCChatActiveConversationInformationBuilder withQuotedMessageData:] */

long FUN_10afea9c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afea9f8; end: 10afeaa2f; -[SCChatActiveConversationInformationBuilder withStoryMetadata:] */

long FUN_10afea9f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afeaa30; end: 10afeaa67; -[SCChatActiveConversationInformationBuilder withContextSessionId:] */

long FUN_10afeaa30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afeaa68; end: 10afeaa6f; -[SCChatActiveConversationInformationBuilder withHasSeenSnapProPublicStoryReplyDisclaimer:] */

void FUN_10afeaa68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10afeaa70; end: 10afeaa77; -[SCChatActiveConversationInformationBuilder withIsPosterMutualFriend:] */

void FUN_10afeaa70(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x41) = param_3;
  return;
}



/* Entry: 10afeaa78; end: 10afeaaaf; -[SCChatActiveConversationInformationBuilder withPresenceInformation:] */

long FUN_10afeaa78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afeaab0; end: 10afeaab7; -[SCChatActiveConversationInformationBuilder withShouldPreferStickerReplyOverChatReaction:] */

void FUN_10afeaab0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10afeaab8; end: 10afeaabf; -[SCChatActiveConversationInformationBuilder withIsConversationSpotlightRecommendReply:] */

void FUN_10afeaab8(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x51) = param_3;
  return;
}



/* Entry: 10afeaac0; end: 10afeaac7; -[SCChatActiveConversationInformationBuilder withSendContextSource:] */

void FUN_10afeaac0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 10afeaac8; end: 10afeaaff; -[SCChatActiveConversationInformationBuilder withAttachedURL:] */

long FUN_10afeaac8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afeab00; end: 10afeab37; -[SCChatActiveConversationInformationBuilder withHasSaturnStatusVisible:] */

long FUN_10afeab00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afeab38; end: 10afeab3f; -[SCChatActiveConversationInformationBuilder withIsCampaignConversation:] */

void FUN_10afeab38(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10afeab40; end: 10afeab47; -[SCChatActiveConversationInformationBuilder withRecipientIsThirdPartyBot:] */

void FUN_10afeab40(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x71) = param_3;
  return;
}



/* Entry: 10afeab48; end: 10afeab4f; -[SCChatActiveConversationInformationBuilder withRecipientIsSnapchatBot:] */

void FUN_10afeab48(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x72) = param_3;
  return;
}



/* Entry: 10afeab50; end: 10afeab87; -[SCChatActiveConversationInformationBuilder withRecipientUserId:] */

long FUN_10afeab50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afeab88; end: 10afeac0b; -[SCChatActiveConversationInformationBuilder .cxx_destruct] */

void FUN_10afeab88(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afeac0c; end: 10afead07; -[SCChatActiveConversationPartialInformation initWithConversationId:conversationSubtype:chatPageSource:chatIdentifier:storyMetadata:isCampaignConversation:] */

undefined1 *
FUN_10afeac0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112703ff8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afead08; end: 10afead2b; -[SCChatActiveConversationPartialInformation copyWithZone:] */

undefined8 FUN_10afead08(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afead2c; end: 10afeadbb; -[SCChatActiveConversationPartialInformation hash] */

undefined8 * FUN_10afead2c(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar3 = &uStack_58;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afeae84:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afeae90;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((puVar3[3] == param_3[3] && (puVar3[4] == param_3[4])) &&
        (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[5];
        if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[6];
          if (puVar6 != (undefined8 *)param_3[6]) {
            func_0x00010c071ae0();
            goto LAB_10afeae90;
          }
          goto LAB_10afeae84;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afeae90:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afeadbc; end: 10afeaeab; -[SCChatActiveConversationPartialInformation isEqual:] */

long FUN_10afeadbc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afeae84:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afeae90;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18) &&
         (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x28);
        if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10afeae90;
          }
          goto LAB_10afeae84;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afeae90:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afeaeac; end: 10afeaeb3; -[SCChatActiveConversationPartialInformation conversationId] */

undefined8 FUN_10afeaeac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afeaeb4; end: 10afeaebb; -[SCChatActiveConversationPartialInformation conversationSubtype] */

undefined8 FUN_10afeaeb4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afeaebc; end: 10afeaec3; -[SCChatActiveConversationPartialInformation chatPageSource] */

undefined8 FUN_10afeaebc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afeaec4; end: 10afeaecb; -[SCChatActiveConversationPartialInformation chatIdentifier] */

undefined8 FUN_10afeaec4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afeaecc; end: 10afeaed3; -[SCChatActiveConversationPartialInformation storyMetadata] */

undefined8 FUN_10afeaecc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afeaed4; end: 10afeaedb; -[SCChatActiveConversationPartialInformation isCampaignConversation] */

undefined1 FUN_10afeaed4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afeaedc; end: 10afeaf17; -[SCChatActiveConversationPartialInformation .cxx_destruct] */

void FUN_10afeaedc(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afeaf18; end: 10afeaf9f; -[SCChatActiveConversationSourceInformation initWithChatPageSource:identifier:] */

undefined1 *
FUN_10afeaf18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112704000;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afeafa0; end: 10afeafc3; -[SCChatActiveConversationSourceInformation copyWithZone:] */

undefined8 FUN_10afeafa0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afeafc4; end: 10afeb02b; -[SCChatActiveConversationSourceInformation hash] */

long * FUN_10afeafc4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  func_0x00010bfde980();
  plVar3 = &lStack_28;
  uStack_20 = uVar2;
  func_0x000107c3191c(plVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return plVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (plVar3 != param_3) {
    plVar5 = (long *)0x0;
    if ((plVar3 == (long *)0x0) || (param_3 == (long *)0x0)) goto LAB_10afeb0b0;
    plVar5 = plVar3;
    _objc_opt_class(plVar3);
    plVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,plVar5);
    if ((((ulong)plVar4 & 1) == 0) || (plVar3[1] != param_3[1])) {
      plVar5 = (long *)0x0;
      goto LAB_10afeb0b0;
    }
    plVar5 = (long *)plVar3[2];
    if (plVar5 != (long *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10afeb0b0;
    }
  }
  plVar5 = (long *)0x1;
LAB_10afeb0b0:
  _objc_release(param_3);
  return plVar5;
}



/* Entry: 10afeb02c; end: 10afeb0cb; -[SCChatActiveConversationSourceInformation isEqual:] */

long FUN_10afeb02c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afeb0b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afeb0b0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afeb0b0;
    }
  }
  lVar3 = 1;
LAB_10afeb0b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afeb0cc; end: 10afeb0d3; -[SCChatActiveConversationSourceInformation chatPageSource] */

undefined8 FUN_10afeb0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afeb0d4; end: 10afeb0db; -[SCChatActiveConversationSourceInformation identifier] */

undefined8 FUN_10afeb0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afeb0dc; end: 10afeb0e7; -[SCChatActiveConversationSourceInformation .cxx_destruct] */

void FUN_10afeb0dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afeb0e8; end: 10afeb147; +[SCChatInputInteractiveDrawerEvent inputBarHeightChangedWithDrawerHeight:inputBarHeight:] */

void FUN_10afeb0e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x70) = param_1;
  *(undefined8 *)(puVar2 + 0x78) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeb148; end: 10afeb1cb; +[SCChatInputInteractiveDrawerEvent panGestureChangedWithDrawerHeight:translation:velocity:] */

void FUN_10afeb148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeb1cc; end: 10afeb25f; +[SCChatInputInteractiveDrawerEvent panGestureEndedWithDrawerHeight:translation:velocity:isClosing:] */

void FUN_10afeb1cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x40) = param_1;
  *(undefined8 *)(puVar2 + 0x48) = param_2;
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  *(undefined8 *)(puVar2 + 0x58) = param_4;
  *(undefined8 *)(puVar2 + 0x60) = param_5;
  puVar2[0x68] = param_8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeb260; end: 10afeb2b7; +[SCChatInputInteractiveDrawerEvent updateWithDrawerHeight:] */

void FUN_10afeb260(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb8a8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeb2b8; end: 10afeb2db; -[SCChatInputInteractiveDrawerEvent copyWithZone:] */

undefined8 FUN_10afeb2b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afeb2dc; end: 10afeb4db; -[SCChatInputInteractiveDrawerEvent hash] */

void FUN_10afeb2dc(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_90;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  uVar2 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_88 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_80 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_78 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_70 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_70 = uStack_70 ^ uStack_70 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_68 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_60 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_58 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_50 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x50) + *(ulong *)(param_1 + 0x50) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_48 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_48 = uStack_48 ^ uStack_48 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x58) + *(ulong *)(param_1 + 0x58) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_40 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_38 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uStack_30 = (ulong)*(byte *)(param_1 + 0x68);
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_28 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar2 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uStack_20 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  func_0x000107c3191c(&uStack_90,0xf);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_b8 = PTR_PTR_112704008;
  puStack_c0 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afeb4dc; end: 10afeb51f; -[SCChatInputInteractiveDrawerEvent internalInit] */

void FUN_10afeb4dc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704008;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afeb520; end: 10afeb74f; -[SCChatInputInteractiveDrawerEvent isEqual:] */

bool FUN_10afeb520(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) != 0) &&
         ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x68) == *(char *)(param_3 + 0x68))))) {
        dVar5 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar5 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
          dVar4 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
            bVar1 = dVar5 < dVar4;
          }
          if (bVar1) {
            bVar1 = false;
            if ((((*(double *)(param_1 + 0x20) != *(double *)(param_3 + 0x20)) ||
                 (*(double *)(param_1 + 0x28) != *(double *)(param_3 + 0x28))) ||
                (bVar1 = false, *(double *)(param_1 + 0x30) != *(double *)(param_3 + 0x30))) ||
               (*(double *)(param_1 + 0x38) != *(double *)(param_3 + 0x38))) goto LAB_10afeb67c;
            dVar4 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                        2.220446049250313e-16)) {
              bVar1 = false;
              if (((*(double *)(param_1 + 0x48) != *(double *)(param_3 + 0x48)) ||
                  ((*(double *)(param_1 + 0x50) != *(double *)(param_3 + 0x50) ||
                   (bVar1 = false, *(double *)(param_1 + 0x58) != *(double *)(param_3 + 0x58))))) ||
                 (*(double *)(param_1 + 0x60) != *(double *)(param_3 + 0x60))) goto LAB_10afeb67c;
              dVar4 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0x78) + *(double *)(param_3 + 0x78)) *
                        2.220446049250313e-16;
                if (dVar4 <= 2.2250738585072014e-308) {
                  dVar4 = 2.2250738585072014e-308;
                }
                bVar1 = ABS(*(double *)(param_1 + 0x78) - *(double *)(param_3 + 0x78)) < dVar4;
                goto LAB_10afeb67c;
              }
            }
          }
        }
      }
      bVar1 = false;
    }
  }
LAB_10afeb67c:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afeb750; end: 10afeb85f; -[SCChatInputInteractiveDrawerEvent matchUpdate:panGestureChanged:panGestureEnded:inputBarHeightChanged:] */

void FUN_10afeb750(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))(*(undefined8 *)(param_1 + 0x10),param_3);
      }
    }
    else if ((lVar1 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38),param_4);
    }
  }
  else if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60),param_5,*(undefined1 *)(param_1 + 0x68));
    }
  }
  else if ((lVar1 == 3) && (param_6 != 0)) {
    (**(code **)(param_6 + 0x10))
              (*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afeb860; end: 10afeb8ab; -[SCChatPresenceInformation initWithNumberOfPresentUsers:numberOfPresentDWebUsers:] */

void FUN_10afeb860(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112704010;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 10afeb8ac; end: 10afeb8cf; -[SCChatPresenceInformation copyWithZone:] */

undefined8 FUN_10afeb8ac(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afeb8d0; end: 10afeb927; -[SCChatPresenceInformation hash] */

undefined8 * FUN_10afeb8d0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 0x10);
  uStack_30 = *(undefined8 *)(param_1 + 8);
  func_0x000107c3191c(&uStack_30,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (undefined8 *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (undefined8 *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) || (*(long *)((long)puVar1 + 8) != *(long *)(param_3 + 8))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x10) == *(long *)(param_3 + 0x10));
      }
    }
  }
  _objc_release(param_3);
  return (undefined8 *)puVar3;
}



/* Entry: 10afeb928; end: 10afeb9bf; -[SCChatPresenceInformation isEqual:] */

bool FUN_10afeb928(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if (((uVar3 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afeb9c0; end: 10afeb9c7; -[SCChatPresenceInformation numberOfPresentUsers] */

undefined8 FUN_10afeb9c0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afeb9c8; end: 10afeb9cf; -[SCChatPresenceInformation numberOfPresentDWebUsers] */

undefined8 FUN_10afeb9c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afeb9d0; end: 10afebaa7; -[SCChatInputPasteInformationEvent initWithConversationInfo:pasteEvent:replyAllGroupId:] */

undefined1 *
FUN_10afeb9d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112704018;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afebaa8; end: 10afebacb; -[SCChatInputPasteInformationEvent copyWithZone:] */

undefined8 FUN_10afebaa8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afebacc; end: 10afebb4b; -[SCChatInputPasteInformationEvent hash] */

undefined8 * FUN_10afebacc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afebbe4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afebbf0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afebbf0;
          }
          goto LAB_10afebbe4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afebbf0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afebb4c; end: 10afebc0b; -[SCChatInputPasteInformationEvent isEqual:] */

long FUN_10afebb4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afebbe4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afebbf0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10afebbf0;
          }
          goto LAB_10afebbe4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afebbf0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afebc0c; end: 10afebc13; -[SCChatInputPasteInformationEvent conversationInfo] */

undefined8 FUN_10afebc0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afebc14; end: 10afebc1b; -[SCChatInputPasteInformationEvent pasteEvent] */

undefined8 FUN_10afebc14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afebc1c; end: 10afebc23; -[SCChatInputPasteInformationEvent replyAllGroupId] */

undefined8 FUN_10afebc1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afebc24; end: 10afebc5f; -[SCChatInputPasteInformationEvent .cxx_destruct] */

void FUN_10afebc24(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afebc60; end: 10afebe07; -[SCMentionBarScope initWithTextInputObservable:mentionPersonsObservable:sendMessageObservable:mentionBarDelegate:uiContainer:composerRuntime:didScopeBegin:getNonParticipantObservableCallback:merlinOnboardingType:] */

undefined1 *
FUN_10afebc60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112704020;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_6);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_8);
    uVar2 = param_9;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x48) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afebe08; end: 10afebe0f; -[SCMentionBarScope uiContainer] */

undefined8 FUN_10afebe08(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afebe10; end: 10afebe17; -[SCMentionBarScope textInputObservable] */

undefined8 FUN_10afebe10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afebe18; end: 10afebe2f; -[SCMentionBarScope mentionBarDelegate] */

void FUN_10afebe18(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afebe30; end: 10afebe37; -[SCMentionBarScope mentionPersonsObservable] */

undefined8 FUN_10afebe30(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afebe38; end: 10afebe3f; -[SCMentionBarScope sendMessageObservable] */

undefined8 FUN_10afebe38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


