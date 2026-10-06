/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10432a49c; end: 10432a4ab; -[SCSpotlightRepliesActionsConfig enableDeeplinkToReplyPosterProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a49c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ec28);
}



/* Entry: 10432a4ac; end: 10432a4bb; -[SCSpotlightRepliesActionsConfig enableQuoteCommunityCommentAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a4ac(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ec30);
}



/* Entry: 10432a4bc; end: 10432a4cb; -[SCSpotlightRepliesActionsConfig enableQuoteSpotlightCommentAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a4bc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ec38);
}



/* Entry: 10432a4cc; end: 10432a4d7; -[SCSpotlightRepliesActionsConfig customCommentsDisclaimerText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a4cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ec40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ec40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432a4d8; end: 10432a4e7; -[SCSpotlightRepliesActionsConfig enableShareCommentAction] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a4d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ec48);
}



/* Entry: 10432a4e8; end: 10432a53b; -[SCSpotlightRepliesActionsConfig prependedCommentIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a4e8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_11306ec50);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
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



/* Entry: 10432a53c; end: 10432a54b; -[SCSpotlightRepliesActionsConfig enableCommentsSnapReply] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432a53c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ec58);
}



/* Entry: 10432a54c; end: 10432a557; -[SCSpotlightRepliesActionsConfig suggestedSearchTerm] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a54c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ec60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ec60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432a558; end: 10432a5af;  */

void FUN_10432a558(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432a5b0; end: 10432a5bf; -[SCSpotlightRepliesActionsConfig initialReplyAttachment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a5b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ec68));
  return;
}



/* Entry: 10432a5c0; end: 10432a827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a5c0(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined1 *)(unaff_x20 + _DAT_11306ec18) = param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec20) = param_2;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec28) = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec30) = param_4;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec38) = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ec40);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec48) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_11306ec50) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec58) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ec60);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_11306ec68) = param_14;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432a828; end: 10432a91b; -[SCSpotlightRepliesActionsConfig initWithDefaultToPendingTab:shouldAutoPopUpKeyboard:enableDeeplinkToReplyPosterProfile:enableQuoteCommunityCommentAction:enableQuoteSpotlightCommentAction:customCommentsDisclaimerText:enableShareCommentAction:prependedCommentIds:enableCommentsSnapReply:suggestedSearchTerm:initialReplyAttachment:] */

void FUN_10432a828(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,
                  undefined1 param_9,undefined4 param_10,long param_11,undefined1 param_12,
                  undefined4 param_13,long param_14)

{
  if (param_8 == 0) {
    param_8 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_8);
  }
  if (param_11 != 0) {
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ();
  }
  if (param_14 != 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  _objc_retain();
  func_0x00010432a6f4(param_3,param_4,param_5,param_6,param_7,param_8,param_2,param_9,param_11,
                      param_12);
  return;
}



/* Entry: 10432a91c; end: 10432a95b;  */

undefined8 FUN_10432a91c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10432b3dc(param_1);
  FUN_10432b560(param_1);
  return uVar1;
}



/* Entry: 10432a95c; end: 10432a95f; -[SCSpotlightRepliesActionsConfig copyWithZone:] */

void FUN_10432a95c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10432a960; end: 10432acc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432a960(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f6060);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f6080);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000027;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1f60a0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f60d0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  uVar1 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f6100);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ec40))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ec40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f6130);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f6150);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + _DAT_11306ec50);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar2,PTR___sSSN_11034da80);
  }
  uVar1 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f6170);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(lVar2);
  _objc_release(uVar1);
  uVar1 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f6190);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ec60))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ec60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f61b0);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f61d0);
  func_0x00010bf93020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10432acc4; end: 10432ad13; -[SCSpotlightRepliesActionsConfig encodeWithCoder:] */

void FUN_10432acc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10432a960(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10432ad14; end: 10432ad43;  */

void FUN_10432ad14(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10432ad44(param_1);
  return;
}



/* Entry: 10432ad44; end: 10432b2a3;  */

undefined8 FUN_10432ad44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_e8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f6060);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f6080);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000027;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000027,0x800000010f1f60a0);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f60d0);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000025;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000025,0x800000010f1f6100);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd00000000000001f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001f,0x800000010f1f6130);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar8 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lStack_e8 = 0;
    lVar8 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_b8;
    lStack_e8 = lStack_c0;
    if ((int)plVar3 == 0) {
      lStack_e8 = 0;
      lVar8 = 0;
    }
  }
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f6150);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f6170);
  lVar4 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar4 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar4);
    _swift_unknownObjectRelease(lVar4);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar4 = 0;
  }
  else {
    uVar2 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lVar4 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar4 = 0;
    }
  }
  uVar2 = 0xd00000000000001a;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x800000010f1f6190);
  func_0x00010bf66ce0();
  _objc_release(uVar2);
  uVar2 = 0xd000000000000015;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x800000010f1f61b0);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_b8;
    lVar6 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar6 = 0;
      lVar7 = 0;
    }
  }
  uVar2 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f61d0);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar5 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
    func_0x00010006e7f4(&uStack_90);
    lVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10432b594(0);
    plVar3 = &lStack_c0;
    _swift_dynamicCast(plVar3,&uStack_90,puVar1 + 8,uVar2,6);
    lVar5 = lStack_c0;
    if ((int)plVar3 == 0) {
      lVar5 = 0;
    }
  }
  if (lVar8 == 0) {
    lStack_e8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lStack_e8,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar4;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(lVar4,PTR___sSSN_11034da80);
    _swift_bridgeObjectRelease(lVar4);
  }
  if (lVar7 == 0) {
    lVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(lVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c00a1a0(unaff_x20);
  _objc_release(lStack_e8);
  _objc_release(lVar8);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(lVar5);
  return unaff_x20;
}



/* Entry: 10432b2a4; end: 10432b2cb; -[SCSpotlightRepliesActionsConfig initWithCoder:] */

void FUN_10432b2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10432ad44();
  return;
}



/* Entry: 10432b2cc; end: 10432b2ff; -[SCSpotlightRepliesActionsConfig description] */

void FUN_10432b2cc(void)

{
  undefined1 auStack_58 [72];
  
  FUN_10432b5d8(auStack_58);
  FUN_10432b560(auStack_58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432b300; end: 10432b37b; -[SCSpotlightRepliesActionsConfig init] */

void FUN_10432b300(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightRepliesScope/SCSpotlightRepliesActionsConfigWrapper.swift",0x44,2,0x8a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10432b348);
  (*pcVar1)();
}



/* Entry: 10432b37c; end: 10432b3db; -[SCSpotlightRepliesActionsConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b37c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ec40 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ec50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ec60 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_11306ec68));
  return;
}



/* Entry: 10432b3dc; end: 10432b55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b3dc(undefined1 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _DAT_11306ec18) = *param_1;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec20) = param_1[1];
  *(undefined1 *)(unaff_x20 + _DAT_11306ec28) = param_1[2];
  *(undefined1 *)(unaff_x20 + _DAT_11306ec30) = param_1[3];
  *(undefined1 *)(unaff_x20 + _DAT_11306ec38) = param_1[4];
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ec40);
  puVar1[1] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = uVar2;
  uStack_38 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 8);
  *(undefined1 *)(unaff_x20 + _DAT_11306ec48) = param_1[0x18];
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(unaff_x20 + _DAT_11306ec50) = uStack_48;
  *(undefined1 *)(unaff_x20 + _DAT_11306ec58) = param_1[0x28];
  uStack_58 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ec60);
  puVar1[1] = *(undefined8 *)(param_1 + 0x38);
  *puVar1 = uVar2;
  uStack_68 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(unaff_x20 + _DAT_11306ec68) = uStack_68;
  FUN_10432b6f0(&uStack_40,auStack_78,0x112d35ff8,&UNK_10d900cd0);
  FUN_10432b6f0(&uStack_48,auStack_78,0x112d445a8,&UNK_10d990150);
  FUN_10432b6f0(&uStack_60,auStack_78,0x112d35ff8,&UNK_10d900cd0);
  FUN_10432b6f0(&uStack_68,auStack_78,0x11306eca0,&UNK_10dceb568);
  _objc_msgSendSuper2(&stack0xffffffffffffff78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432b560; end: 10432b593;  */

undefined8 FUN_10432b560(undefined8 param_1)

{
  (*(code *)(undefined *)0x104328634)();
  return param_1;
}



/* Entry: 10432b594; end: 10432b5d7;  */

void FUN_10432b594(void)

{
  undefined *puVar1;
  
  if (puRam000000011306ec70 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5ff8;
  _objc_opt_self();
  _swift_getObjCClassMetadata();
  puRam000000011306ec70 = puVar1;
  return;
}



/* Entry: 10432b5d8; end: 10432b6cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b5d8(undefined1 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = *(undefined1 *)(param_2 + _DAT_11306ec20);
  uVar4 = *(undefined1 *)(param_2 + _DAT_11306ec28);
  uVar5 = *(undefined1 *)(param_2 + _DAT_11306ec30);
  uVar6 = *(undefined1 *)(param_2 + _DAT_11306ec38);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306ec40);
  uVar7 = *(undefined1 *)(param_2 + _DAT_11306ec48);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11306ec50);
  uVar8 = *(undefined1 *)(param_2 + _DAT_11306ec58);
  puVar2 = (undefined8 *)(param_2 + _DAT_11306ec60);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11306ec68);
  *param_1 = *(undefined1 *)(param_2 + _DAT_11306ec18);
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  param_1[4] = uVar6;
  uVar9 = puVar1[1];
  uVar12 = *puVar1;
  *(undefined8 *)(param_1 + 0x10) = puVar1[1];
  *(undefined8 *)(param_1 + 8) = uVar12;
  param_1[0x18] = uVar7;
  *(undefined8 *)(param_1 + 0x20) = uVar10;
  param_1[0x28] = uVar8;
  uVar12 = puVar2[1];
  uVar13 = *puVar2;
  *(undefined8 *)(param_1 + 0x38) = puVar2[1];
  *(undefined8 *)(param_1 + 0x30) = uVar13;
  *(undefined8 *)(param_1 + 0x40) = uVar11;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar11);
  return;
}



/* Entry: 10432b6d0; end: 10432b6ef;  */

void FUN_10432b6d0(void)

{
  _objc_opt_self(&PTR_PTR_11299cb80);
  return;
}



/* Entry: 10432b6f0; end: 10432b737;  */

undefined8 FUN_10432b6f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10432b738; end: 10432b743; -[SCSpotlightRepliesSnapInteractionInfo snapCreatorUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b738(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306eca8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306eca8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432b744; end: 10432b74f; -[SCSpotlightRepliesSnapInteractionInfo snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b744(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ecb0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ecb0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432b750; end: 10432b75b; -[SCSpotlightRepliesSnapInteractionInfo compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b750(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ecb8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ecb8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432b75c; end: 10432b767; -[SCSpotlightRepliesSnapInteractionInfo commentViewerUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b75c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ecc0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ecc0);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432b768; end: 10432b773; -[SCSpotlightRepliesSnapInteractionInfo commentViewerDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b768(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ecc8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ecc8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432b774; end: 10432b783; -[SCSpotlightRepliesSnapInteractionInfo commentViewerIsAdmin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10432b774(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11306ecd0);
}



/* Entry: 10432b784; end: 10432b78f; -[SCSpotlightRepliesSnapInteractionInfo currentUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b784(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ecd8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ecd8);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432b790; end: 10432b7e7;  */

void FUN_10432b790(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432b7e8; end: 10432b8f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eca8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecb0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecb8);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecc0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecc8);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined1 *)(unaff_x20 + _DAT_11306ecd0) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecd8);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432b8f8; end: 10432badf; -[SCSpotlightRepliesSnapInteractionInfo initWithSnapCreatorUserId:snapId:compositeStoryId:commentViewerUserId:commentViewerDisplayName:commentViewerIsAdmin:currentUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432b8f8(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7,undefined1 param_8,long param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lStack_90 = 0;
    lStack_88 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_90 = param_2;
    lStack_88 = param_3;
  }
  if (param_4 == 0) {
    lStack_a0 = 0;
    lStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lStack_a0 = param_2;
    lStack_98 = param_4;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar8 = param_2;
  }
  lVar3 = param_6;
  _objc_retain();
  lVar4 = param_7;
  _objc_retain();
  lVar5 = param_9;
  _objc_retain();
  if (lVar3 == 0) {
    param_6 = 0;
    lVar3 = 0;
    lVar6 = param_2;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar6 = param_2;
    _objc_release(lVar3);
    lVar3 = param_2;
  }
  if (lVar4 == 0) {
    param_7 = 0;
    lVar4 = 0;
    lVar7 = lVar6;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar7 = lVar6;
    _objc_release(lVar4);
    lVar4 = lVar6;
  }
  if (lVar5 == 0) {
    param_9 = 0;
    lVar7 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar5);
  }
  plVar1 = (long *)(param_1 + _DAT_11306eca8);
  *plVar1 = lStack_88;
  plVar1[1] = lStack_90;
  plVar1 = (long *)(param_1 + _DAT_11306ecb0);
  *plVar1 = lStack_98;
  plVar1[1] = lStack_a0;
  plVar1 = (long *)(param_1 + _DAT_11306ecb8);
  *plVar1 = param_5;
  plVar1[1] = lVar8;
  plVar1 = (long *)(param_1 + _DAT_11306ecc0);
  *plVar1 = param_6;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_11306ecc8);
  *plVar1 = param_7;
  plVar1[1] = lVar4;
  *(undefined1 *)(param_1 + _DAT_11306ecd0) = param_8;
  plVar1 = (long *)(param_1 + _DAT_11306ecd8);
  *plVar1 = param_9;
  plVar1[1] = lVar7;
  lStack_70 = param_1;
  lStack_68 = lVar2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432bae0; end: 10432bb0f;  */

void FUN_10432bae0(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10432bb10(param_1);
  return;
}



/* Entry: 10432bb10; end: 10432bc27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432bb10(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_a0 [16];
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
  
  _swift_getObjectType();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306eca8);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecb0);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecb8);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uVar2 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecc0);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecc8);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  *(undefined1 *)(unaff_x20 + _DAT_11306ecd0) = *(undefined1 *)(param_1 + 10);
  uStack_88 = param_1[0xc];
  uStack_90 = param_1[0xb];
  uVar2 = param_1[0xb];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ecd8);
  puVar1[1] = param_1[0xc];
  *puVar1 = uVar2;
  func_0x000101223174(&uStack_40,auStack_a0);
  func_0x000101223174(&uStack_50,auStack_a0);
  func_0x000101223174(&uStack_60,auStack_a0);
  func_0x000101223174(&uStack_70,auStack_a0);
  func_0x000101223174(&uStack_80,auStack_a0);
  func_0x000101223174(&uStack_90,auStack_a0);
  FUN_10432bc28(param_1);
  _objc_msgSendSuper2(&stack0xffffffffffffff50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432bc28; end: 10432bc5b;  */

undefined8 FUN_10432bc28(undefined8 param_1)

{
  (*(code *)(undefined *)0x104329948)();
  return param_1;
}



/* Entry: 10432bc5c; end: 10432bc5f; -[SCSpotlightRepliesSnapInteractionInfo copyWithZone:] */

void FUN_10432bc5c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10432bc60; end: 10432bf37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432bc60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11306eca8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306eca8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f6240);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ecb0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ecb0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50414e53,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ecb8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ecb8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1ce770);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ecc0))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ecc0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f6260);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ecc8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ecc8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f6280);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  uVar1 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f62a0);
  func_0x00010bf92da0(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ecd8))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ecd8);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x5f544e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4552525543,0xef44495f52455355);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10432bf38; end: 10432bf87; -[SCSpotlightRepliesSnapInteractionInfo encodeWithCoder:] */

void FUN_10432bf38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10432bc60(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10432bf88; end: 10432bfb7;  */

void FUN_10432bf88(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10432bfb8(param_1);
  return;
}



/* Entry: 10432bfb8; end: 10432c5c7;  */

undefined8 FUN_10432bfb8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = 0xd000000000000014;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000014,0x800000010f1f6240);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar2 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_c0 = 0;
    lVar2 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar2 = lStack_a8;
    uStack_c0 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_c0 = 0;
      lVar2 = 0;
    }
  }
  uVar4 = 0x44495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50414e53,0xe700000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_c8 = 0;
    lVar5 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_a8;
    uStack_c8 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_c8 = 0;
      lVar5 = 0;
    }
  }
  uVar4 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1ce770);
  lVar6 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar6 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar6);
    _swift_unknownObjectRelease(lVar6);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_d0 = 0;
    lVar6 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar6 = lStack_a8;
    uStack_d0 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_d0 = 0;
      lVar6 = 0;
    }
  }
  uVar4 = 0xd000000000000016;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000016,0x800000010f1f6260);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar7 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_d8 = 0;
    lVar7 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar7 = lStack_a8;
    uStack_d8 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_d8 = 0;
      lVar7 = 0;
    }
  }
  uVar4 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010f1f6280);
  lVar8 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar8 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar8);
    _swift_unknownObjectRelease(lVar8);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uStack_e0 = 0;
    lVar8 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    lVar8 = lStack_a8;
    uStack_e0 = uStack_b0;
    if ((int)puVar3 == 0) {
      uStack_e0 = 0;
      lVar8 = 0;
    }
  }
  uVar4 = 0xd000000000000017;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000017,0x800000010f1f62a0);
  func_0x00010bf66ce0(param_1);
  _objc_release(uVar4);
  uVar4 = 0x5f544e4552525543;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5f544e4552525543,0xef44495f52455355);
  lVar9 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar9 == 0) {
    uStack_98 = 0;
    uStack_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_a0,lVar9);
    _swift_unknownObjectRelease(lVar9);
  }
  uStack_78 = uStack_98;
  uStack_80 = uStack_a0;
  lStack_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    func_0x00010006e7f4(&uStack_80);
    uVar4 = 0;
    lVar9 = 0;
  }
  else {
    puVar3 = &uStack_b0;
    _swift_dynamicCast(puVar3,&uStack_80,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar4 = uStack_b0;
    lVar9 = lStack_a8;
    if ((int)puVar3 == 0) {
      uVar4 = 0;
      lVar9 = 0;
    }
  }
  if (lVar2 == 0) {
    uStack_c0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c0,lVar2);
    _swift_bridgeObjectRelease(lVar2);
  }
  if (lVar5 == 0) {
    uStack_c8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_c8,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar6 == 0) {
    uStack_d0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d0,lVar6);
    _swift_bridgeObjectRelease(lVar6);
  }
  if (lVar7 == 0) {
    uStack_d8 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d8,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  if (lVar8 == 0) {
    uStack_e0 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_e0,lVar8);
    _swift_bridgeObjectRelease(lVar8);
  }
  if (lVar9 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar9);
    _swift_bridgeObjectRelease(lVar9);
  }
  func_0x00010c047360(unaff_x20);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d0);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(uVar4);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10432c5c8; end: 10432c5ef; -[SCSpotlightRepliesSnapInteractionInfo initWithCoder:] */

void FUN_10432c5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10432bfb8();
  return;
}



/* Entry: 10432c5f0; end: 10432c623; -[SCSpotlightRepliesSnapInteractionInfo description] */

void FUN_10432c5f0(void)

{
  undefined1 auStack_78 [104];
  
  FUN_10432c730(auStack_78);
  FUN_10432bc28(auStack_78);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432c624; end: 10432c69f; -[SCSpotlightRepliesSnapInteractionInfo init] */

void FUN_10432c624(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightRepliesScope/SCSpotlightRepliesSnapInteractionInfoWrapper.swift",0x4a,2,100
             ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10432c66c);
  (*pcVar1)();
}



/* Entry: 10432c6a0; end: 10432c72f; -[SCSpotlightRepliesSnapInteractionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c6a0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306eca8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ecb0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ecb8 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ecc0 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ecc8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ecd8 + 8))
  ;
  return;
}



/* Entry: 10432c730; end: 10432c817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c730(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_11306eca8);
  puVar2 = (undefined8 *)(param_2 + _DAT_11306ecb0);
  puVar3 = (undefined8 *)(param_2 + _DAT_11306ecb8);
  puVar4 = (undefined8 *)(param_2 + _DAT_11306ecc0);
  puVar5 = (undefined8 *)(param_2 + _DAT_11306ecc8);
  uVar7 = *(undefined1 *)(param_2 + _DAT_11306ecd0);
  puVar6 = (undefined8 *)(param_2 + _DAT_11306ecd8);
  uVar8 = puVar1[1];
  uVar10 = *puVar1;
  uVar9 = puVar2[1];
  uVar12 = puVar2[1];
  uVar11 = *puVar2;
  param_1[1] = puVar1[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  uVar10 = puVar3[1];
  uVar12 = *puVar3;
  uVar11 = puVar4[1];
  uVar14 = puVar4[1];
  uVar13 = *puVar4;
  param_1[5] = puVar3[1];
  param_1[4] = uVar12;
  param_1[7] = uVar14;
  param_1[6] = uVar13;
  uVar12 = puVar5[1];
  uVar13 = *puVar5;
  param_1[9] = puVar5[1];
  param_1[8] = uVar13;
  *(undefined1 *)(param_1 + 10) = uVar7;
  uVar13 = puVar6[1];
  uVar14 = *puVar6;
  param_1[0xc] = puVar6[1];
  param_1[0xb] = uVar14;
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar13);
  return;
}



/* Entry: 10432c818; end: 10432c837;  */

void FUN_10432c818(void)

{
  _objc_opt_self(&PTR_PTR_11299cca0);
  return;
}



/* Entry: 10432c838; end: 10432c847; -[SCSpotlightRepliesLoggingInfo repliesTrayOpenSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432c838(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ed08);
}



/* Entry: 10432c848; end: 10432c857; -[SCSpotlightRepliesLoggingInfo contentViewSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432c848(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ed10);
}



/* Entry: 10432c858; end: 10432c867; -[SCSpotlightRepliesLoggingInfo pageType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432c858(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ed18);
}



/* Entry: 10432c868; end: 10432c877; -[SCSpotlightRepliesLoggingInfo actionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432c868(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ed20);
}



/* Entry: 10432c878; end: 10432c883; -[SCSpotlightRepliesLoggingInfo pageSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c878(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ed28))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ed28);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432c884; end: 10432c893; -[SCSpotlightRepliesLoggingInfo discoverStoryDedupeFp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c884(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ed30));
  return;
}



/* Entry: 10432c894; end: 10432c8a3; -[SCSpotlightRepliesLoggingInfo storyType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10432c894(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11306ed38);
}



/* Entry: 10432c8a4; end: 10432c8af; -[SCSpotlightRepliesLoggingInfo streamId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c8a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ed40))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ed40);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432c8b0; end: 10432c8bf; -[SCSpotlightRepliesLoggingInfo liveCommentCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c8b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306ed48));
  return;
}



/* Entry: 10432c8c0; end: 10432c8cb; -[SCSpotlightRepliesLoggingInfo compositeStoryId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c8c0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ed50))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ed50);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432c8cc; end: 10432c917; -[SCSpotlightRepliesLoggingInfo snapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c8cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_11306ed58);
  uVar1 = ((undefined8 *)(param_1 + _DAT_11306ed58))[1];
  _swift_bridgeObjectRetain(uVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432c918; end: 10432c923; -[SCSpotlightRepliesLoggingInfo playbackShareId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c918(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ed60))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ed60);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432c924; end: 10432c97b;  */

void FUN_10432c924(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432c97c; end: 10432cc5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432c97c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  _objc_allocWithZone();
  *(undefined8 *)(unaff_x20 + _DAT_11306ed08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ed10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_11306ed18) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_11306ed20) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed28);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_11306ed30) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_11306ed38) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed40);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_11306ed48) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed50);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed58);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed60);
  *puVar1 = param_16;
  puVar1[1] = param_17;
  _objc_msgSendSuper2(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432cc5c; end: 10432cd9b; -[SCSpotlightRepliesLoggingInfo initWithRepliesTrayOpenSource:contentViewSource:pageType:actionType:pageSessionId:discoverStoryDedupeFp:storyType:streamId:liveCommentCount:compositeStoryId:snapId:playbackShareId:] */

void FUN_10432cc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,long param_12,
                  undefined8 param_13,long param_14)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if (param_7 == 0) {
    uStack_a0 = 0;
    uStack_98 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_a0 = param_2;
    uStack_98 = param_7;
  }
  if (param_10 == 0) {
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uStack_b0 = param_2;
    uStack_a8 = param_10;
  }
  if (param_12 == 0) {
    uVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    uVar2 = param_2;
  }
  _objc_retain(param_8);
  _objc_retain();
  lVar1 = param_14;
  _objc_retain();
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  if (lVar1 == 0) {
    param_14 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    _objc_release(lVar1);
  }
  func_0x00010432caec(param_3,param_4,param_5,param_6,uStack_98,uStack_a0,param_8,param_9,uStack_a8,
                      uStack_b0,param_11,param_12,uVar2,param_13,param_2,param_14,uVar3);
  return;
}



/* Entry: 10432cd9c; end: 10432cddb;  */

undefined8 FUN_10432cd9c(undefined8 param_1)

{
  undefined8 uVar1;
  
  _objc_allocWithZone();
  uVar1 = param_1;
  FUN_10432de60(param_1);
  FUN_10432e038(param_1);
  return uVar1;
}



/* Entry: 10432cddc; end: 10432cddf; -[SCSpotlightRepliesLoggingInfo copyWithZone:] */

void FUN_10432cddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10432cde0; end: 10432d27b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432cde0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)(unaff_x20 + _DAT_11306ed08);
  uVar1 = 0;
  func_0x0001043285b0(0);
  puVar2 = &uStack_48;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar2,uVar1);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f6310);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar2);
  _objc_release(uVar1);
  uStack_48 = *(undefined8 *)(unaff_x20 + _DAT_11306ed10);
  uVar1 = 0;
  func_0x000101db57b4(0);
  puVar2 = &uStack_48;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar2,uVar1);
  uVar1 = 0xd000000000000013;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f6330);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar2);
  _objc_release(uVar1);
  uVar1 = 0x5059545f45474150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5059545f45474150,0xe900000000000045);
  func_0x00010bf92fc0(param_1);
  _objc_release(uVar1);
  uStack_48 = *(undefined8 *)(unaff_x20 + _DAT_11306ed20);
  uVar1 = 0;
  func_0x000101106e80(0);
  puVar2 = &uStack_48;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar2,uVar1);
  uVar1 = 0x545f4e4f49544341;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4e4f49544341,0xeb00000000455059);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ed28))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ed28);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0x5345535f45474150;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5345535f45474150,0xef44495f4e4f4953);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f6350);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  uStack_48 = *(undefined8 *)(unaff_x20 + _DAT_11306ed38);
  uVar1 = 0;
  func_0x000103203e24(0);
  puVar2 = &uStack_48;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar2,uVar1);
  uVar1 = 0x59545f59524f5453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f59524f5453,0xea00000000004550);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(puVar2);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ed40))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ed40);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0x495f4d4145525453;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f4d4145525453,0xe900000000000044);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f6370);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ed50))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ed50);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1ce770);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ed58);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
            (uVar1,((undefined8 *)(unaff_x20 + _DAT_11306ed58))[1]);
  uVar3 = 0x44495f50414e53;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50414e53,0xe700000000000000);
  func_0x00010bf93020(param_1);
  _objc_release(uVar1);
  _objc_release(uVar3);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ed60))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ed60);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar3 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x800000010f1f6390);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar3);
  return;
}



/* Entry: 10432d27c; end: 10432d2cb; -[SCSpotlightRepliesLoggingInfo encodeWithCoder:] */

void FUN_10432d27c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10432cde0(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10432d2cc; end: 10432d2fb;  */

void FUN_10432d2cc(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10432d2fc(param_1);
  return;
}



/* Entry: 10432d2fc; end: 10432dceb;  */

undefined8 FUN_10432d2fc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x20;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_e8;
  long lStack_e0;
  undefined8 uStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  uVar3 = 0xd000000000000018;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f6310);
  lVar2 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar2 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    lStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  uStack_88 = uStack_a8;
  uStack_90 = uStack_b0;
  lStack_78 = lStack_98;
  uStack_80 = uStack_a0;
  if (lStack_98 == 0) {
LAB_10432d5a4:
    uStack_b0 = uStack_90;
    uStack_a8 = uStack_88;
    uStack_a0 = uStack_80;
    lStack_98 = lStack_78;
    _objc_release(param_1);
  }
  else {
    uVar3 = 0;
    func_0x0001043285b0(0);
    puVar1 = PTR___sypN_11034f1a8;
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) == 0) {
LAB_10432d5b8:
      _objc_release(param_1);
      goto LAB_10432d5c0;
    }
    uVar3 = 0xd000000000000013;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000013,0x800000010f1f6330);
    lVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar2 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) goto LAB_10432d5a4;
    uVar3 = 0;
    func_0x000101db57b4(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) == 0) goto LAB_10432d5b8;
    uVar3 = 0x5059545f45474150;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5059545f45474150,0xe900000000000045);
    func_0x00010bf66f40(param_1);
    _objc_release(uVar3);
    uVar3 = 0x545f4e4f49544341;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x545f4e4f49544341,0xeb00000000455059);
    lVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar2 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) goto LAB_10432d5a4;
    uVar3 = 0;
    func_0x000101106e80(0);
    puVar4 = &uStack_c0;
    _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) == 0) goto LAB_10432d5b8;
    uVar3 = 0x5345535f45474150;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x5345535f45474150,0xef44495f4e4f4953);
    lVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar2 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      uStack_d8 = 0;
      lStack_c8 = 0;
    }
    else {
      puVar4 = &uStack_c0;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
      uStack_d8 = uStack_c0;
      lStack_c8 = lStack_b8;
      if ((int)puVar4 == 0) {
        uStack_d8 = 0;
        lStack_c8 = 0;
      }
    }
    uVar3 = 0xd000000000000018;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000018,0x800000010f1f6350);
    lVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar2 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      func_0x00010006e7f4(&uStack_90);
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      func_0x0001002ed07c(0);
      puVar4 = &uStack_c0;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar3,6);
      uVar3 = uStack_c0;
      if ((int)puVar4 == 0) {
        uVar3 = 0;
      }
    }
    uVar5 = 0x59545f59524f5453;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x59545f59524f5453,0xea00000000004550);
    lVar2 = param_1;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    if (lVar2 == 0) {
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
      _swift_unknownObjectRelease(lVar2);
    }
    uStack_88 = uStack_a8;
    uStack_90 = uStack_b0;
    lStack_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) {
      _objc_release(param_1);
      _objc_release(uVar3);
      lStack_e0 = lStack_c8;
    }
    else {
      uVar5 = 0;
      func_0x000103203e24(0);
      puVar4 = &uStack_c0;
      _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar5,6);
      if (((ulong)puVar4 & 1) == 0) {
        _objc_release(param_1);
        _objc_release(uVar3);
        _swift_bridgeObjectRelease(lStack_c8);
        goto LAB_10432d5c0;
      }
      uVar5 = 0x495f4d4145525453;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x495f4d4145525453,0xe900000000000044);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar2 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        uStack_100 = 0;
        lStack_e0 = 0;
      }
      else {
        puVar4 = &uStack_c0;
        _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        uStack_100 = uStack_c0;
        lStack_e0 = lStack_b8;
        if ((int)puVar4 == 0) {
          uStack_100 = 0;
          lStack_e0 = 0;
        }
      }
      uVar5 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1f6370);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar2 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        uStack_e8 = 0;
      }
      else {
        uVar5 = 0;
        func_0x0001002ed07c(0);
        puVar4 = &uStack_c0;
        _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,uVar5,6);
        uStack_e8 = uStack_c0;
        if ((int)puVar4 == 0) {
          uStack_e8 = 0;
        }
      }
      uVar5 = 0xd000000000000012;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x800000010f1ce770);
      lVar2 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar2 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar2);
        _swift_unknownObjectRelease(lVar2);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        func_0x00010006e7f4(&uStack_90);
        uStack_108 = 0;
        lVar2 = 0;
      }
      else {
        puVar4 = &uStack_c0;
        _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar2 = lStack_b8;
        uStack_108 = uStack_c0;
        if ((int)puVar4 == 0) {
          uStack_108 = 0;
          lVar2 = 0;
        }
      }
      uVar5 = 0x44495f50414e53;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50414e53,0xe700000000000000);
      lVar6 = param_1;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar6 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar6);
        _swift_unknownObjectRelease(lVar6);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 != 0) {
        puVar4 = &uStack_c0;
        _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
        lVar6 = lStack_b8;
        uVar5 = uStack_c0;
        if (((ulong)puVar4 & 1) != 0) {
          uVar7 = 0xd000000000000011;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0xd000000000000011,0x800000010f1f6390);
          lVar8 = param_1;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          if (lVar8 == 0) {
            uStack_a8 = 0;
            uStack_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_b0,lVar8);
            _swift_unknownObjectRelease(lVar8);
          }
          uStack_88 = uStack_a8;
          uStack_90 = uStack_b0;
          lStack_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            func_0x00010006e7f4(&uStack_90);
            uVar7 = 0;
            lVar8 = 0;
          }
          else {
            puVar4 = &uStack_c0;
            _swift_dynamicCast(puVar4,&uStack_90,puVar1 + 8,PTR___sSSN_11034da80,6);
            uVar7 = uStack_c0;
            lVar8 = lStack_b8;
            if ((int)puVar4 == 0) {
              uVar7 = 0;
              lVar8 = 0;
            }
          }
          if (lStack_c8 == 0) {
            uStack_d8 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_d8,lStack_c8);
            _swift_bridgeObjectRelease(lStack_c8);
          }
          if (lStack_e0 == 0) {
            lStack_c8 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_100,lStack_e0);
            _swift_bridgeObjectRelease(lStack_e0);
            lStack_c8 = uStack_100;
          }
          if (lVar2 == 0) {
            uStack_108 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uStack_108,lVar2);
            _swift_bridgeObjectRelease(lVar2);
          }
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,lVar6);
          _swift_bridgeObjectRelease(lVar6);
          if (lVar8 == 0) {
            uVar7 = 0;
          }
          else {
            __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar7,lVar8);
            _swift_bridgeObjectRelease(lVar8);
          }
          func_0x00010c03e4a0();
          _objc_release(uStack_d8);
          _objc_release(lStack_c8);
          _objc_release(uStack_108);
          _objc_release(uVar5);
          _objc_release(uVar7);
          _objc_release(param_1);
          _objc_release(uStack_e8);
          _objc_release(uVar3);
          return unaff_x20;
        }
        _objc_release(param_1);
        _objc_release(uStack_e8);
        _objc_release(uVar3);
        _swift_bridgeObjectRelease(lStack_c8);
        _swift_bridgeObjectRelease(lVar2);
        _swift_bridgeObjectRelease(lStack_e0);
        goto LAB_10432d5c0;
      }
      _objc_release(param_1);
      _objc_release(uStack_e8);
      _objc_release(uVar3);
      _swift_bridgeObjectRelease(lStack_c8);
      _swift_bridgeObjectRelease(lVar2);
    }
    _swift_bridgeObjectRelease(lStack_e0);
  }
  func_0x00010006e7f4(&uStack_90);
LAB_10432d5c0:
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Entry: 10432dcec; end: 10432dd13; -[SCSpotlightRepliesLoggingInfo initWithCoder:] */

void FUN_10432dcec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10432d2fc();
  return;
}



/* Entry: 10432dd14; end: 10432dd47; -[SCSpotlightRepliesLoggingInfo description] */

void FUN_10432dd14(void)

{
  undefined1 auStack_98 [136];
  
  FUN_10432e06c(auStack_98);
  FUN_10432e038(auStack_98);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432dd48; end: 10432ddc3; -[SCSpotlightRepliesLoggingInfo init] */

void FUN_10432dd48(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightRepliesScope/SCSpotlightRepliesLoggingInfoWrapper.swift",0x42,2,0x9d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10432dd90);
  (*pcVar1)();
}



/* Entry: 10432ddc4; end: 10432de5f; -[SCSpotlightRepliesLoggingInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432ddc4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ed28 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ed30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ed40 + 8));
  _objc_release(*(undefined8 *)(param_1 + _DAT_11306ed48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ed50 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ed58 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ed60 + 8))
  ;
  return;
}



/* Entry: 10432de60; end: 10432e037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432de60(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_c0 [16];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getObjectType();
  uVar2 = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_11306ed08) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_11306ed10) = uVar2;
  uVar2 = param_1[3];
  *(undefined8 *)(unaff_x20 + _DAT_11306ed18) = param_1[2];
  *(undefined8 *)(unaff_x20 + _DAT_11306ed20) = uVar2;
  uVar2 = param_1[4];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed28);
  puVar1[1] = param_1[5];
  *puVar1 = uVar2;
  uStack_58 = param_1[6];
  uVar2 = param_1[7];
  *(undefined8 *)(unaff_x20 + _DAT_11306ed30) = uStack_58;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  *(undefined8 *)(unaff_x20 + _DAT_11306ed38) = uVar2;
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uVar2 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed40);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uStack_78 = param_1[10];
  *(undefined8 *)(unaff_x20 + _DAT_11306ed48) = uStack_78;
  uStack_88 = param_1[0xc];
  uStack_90 = param_1[0xb];
  uVar2 = param_1[0xb];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed50);
  puVar1[1] = param_1[0xc];
  *puVar1 = uVar2;
  uStack_98 = param_1[0xe];
  uStack_a0 = param_1[0xd];
  uVar2 = param_1[0xd];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed58);
  puVar1[1] = param_1[0xe];
  *puVar1 = uVar2;
  uStack_a8 = param_1[0x10];
  uStack_b0 = param_1[0xf];
  uVar2 = param_1[0xf];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed60);
  puVar1[1] = param_1[0x10];
  *puVar1 = uVar2;
  FUN_10432e1bc(&uStack_50,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10432e1bc(&uStack_58,auStack_c0,0x112dc3de0,&UNK_10d9813c0);
  FUN_10432e1bc(&uStack_70,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  FUN_10432e1bc(&uStack_78,auStack_c0,0x112dc3de0,&UNK_10d9813c0);
  FUN_10432e1bc(&uStack_90,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  func_0x000100402194(&uStack_a0,auStack_c0);
  FUN_10432e1bc(&uStack_b0,auStack_c0,0x112d35ff8,&UNK_10d900cd0);
  _objc_msgSendSuper2(&stack0xffffffffffffff30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432e038; end: 10432e06b;  */

undefined8 FUN_10432e038(undefined8 param_1)

{
  (*(code *)(undefined *)0x104328b5c)();
  return param_1;
}



/* Entry: 10432e06c; end: 10432e19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e06c(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = *(undefined8 *)(param_2 + _DAT_11306ed10);
  uVar7 = *(undefined8 *)(param_2 + _DAT_11306ed18);
  uVar8 = *(undefined8 *)(param_2 + _DAT_11306ed20);
  puVar1 = (undefined8 *)(param_2 + _DAT_11306ed28);
  uVar10 = *(undefined8 *)(param_2 + _DAT_11306ed30);
  uVar9 = *(undefined8 *)(param_2 + _DAT_11306ed38);
  puVar2 = (undefined8 *)(param_2 + _DAT_11306ed40);
  uVar11 = *(undefined8 *)(param_2 + _DAT_11306ed48);
  puVar3 = (undefined8 *)(param_2 + _DAT_11306ed50);
  uVar12 = *(undefined8 *)(param_2 + _DAT_11306ed58);
  uVar5 = ((undefined8 *)(param_2 + _DAT_11306ed58))[1];
  puVar4 = (undefined8 *)(param_2 + _DAT_11306ed60);
  *param_1 = *(undefined8 *)(param_2 + _DAT_11306ed08);
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar8;
  uVar6 = puVar1[1];
  uVar7 = *puVar1;
  param_1[5] = puVar1[1];
  param_1[4] = uVar7;
  param_1[6] = uVar10;
  param_1[7] = uVar9;
  uVar7 = puVar2[1];
  uVar8 = *puVar2;
  param_1[9] = puVar2[1];
  param_1[8] = uVar8;
  param_1[10] = uVar11;
  uVar8 = puVar3[1];
  uVar9 = *puVar3;
  param_1[0xc] = puVar3[1];
  param_1[0xb] = uVar9;
  param_1[0xd] = uVar12;
  param_1[0xe] = uVar5;
  uVar12 = puVar4[1];
  uVar9 = *puVar4;
  param_1[0x10] = puVar4[1];
  param_1[0xf] = uVar9;
  _swift_bridgeObjectRetain(uVar6);
  _objc_retain(uVar10);
  _swift_bridgeObjectRetain(uVar7);
  _objc_retain(uVar11);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar12);
  return;
}



/* Entry: 10432e19c; end: 10432e1bb;  */

void FUN_10432e19c(void)

{
  _objc_opt_self(&PTR_PTR_11299cda0);
  return;
}



/* Entry: 10432e1bc; end: 10432e203;  */

undefined8 FUN_10432e1bc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10432e204; end: 10432e20f; -[SCSpotlightRepliesCommunityMetadata groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e204(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ed90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ed90);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432e210; end: 10432e21b; -[SCSpotlightRepliesCommunityMetadata orgId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e210(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_11306ed98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11306ed98);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432e21c; end: 10432e273;  */

void FUN_10432e21c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    _swift_bridgeObjectRetain(lVar1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar2,lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10432e274; end: 10432e277;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed98);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432e278; end: 10432e39f; -[SCSpotlightRepliesCommunityMetadata initWithGroupId:orgId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e278(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  long lStack_48;
  
  lVar3 = param_1;
  _swift_getObjectType();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    lVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
  }
  plVar1 = (long *)(param_1 + _DAT_11306ed90);
  *plVar1 = param_3;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_11306ed98);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432e3a0; end: 10432e3a3; -[SCSpotlightRepliesCommunityMetadata copyWithZone:] */

void FUN_10432e3a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10432e3a4; end: 10432e487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e3a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if (((undefined8 *)(unaff_x20 + _DAT_11306ed90))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ed90);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f50554f5247;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50554f5247,0xe800000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
  _objc_release(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_11306ed98))[1] == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11306ed98);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar1);
  }
  uVar2 = 0x44495f47524f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f47524f,0xe600000000000000);
  func_0x00010bf93020(param_1);
  _swift_unknownObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10432e488; end: 10432e4d7; -[SCSpotlightRepliesCommunityMetadata encodeWithCoder:] */

void FUN_10432e488(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_1);
  FUN_10432e3a4(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10432e4d8; end: 10432e507;  */

void FUN_10432e4d8(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10432e508(param_1);
  return;
}



/* Entry: 10432e508; end: 10432e71f;  */

undefined8 FUN_10432e508(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  int iVar3;
  
  iVar2 = (int)&uStack_a0;
  iVar3 = (int)&uStack_a0;
  uVar4 = 0x44495f50554f5247;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f50554f5247,0xe800000000000000);
  lVar5 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar5);
    _swift_unknownObjectRelease(lVar5);
  }
  puVar1 = PTR___sypN_11034f1a8;
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    lVar5 = 0;
    uVar4 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar5 = lStack_98;
    uVar4 = uStack_a0;
    if (iVar2 == 0) {
      uVar4 = 0;
      lVar5 = 0;
    }
  }
  uVar6 = 0x44495f47524f;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x44495f47524f,0xe600000000000000);
  lVar7 = param_1;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  if (lVar7 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&uStack_90,lVar7);
    _swift_unknownObjectRelease(lVar7);
  }
  uStack_68 = uStack_88;
  uStack_70 = uStack_90;
  lStack_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    func_0x00010006e7f4(&uStack_70);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    _swift_dynamicCast(&uStack_a0,&uStack_70,puVar1 + 8,PTR___sSSN_11034da80,6);
    uVar6 = uStack_a0;
    lVar7 = lStack_98;
    if (iVar3 == 0) {
      uVar6 = 0;
      lVar7 = 0;
    }
  }
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar4,lVar5);
    _swift_bridgeObjectRelease(lVar5);
  }
  if (lVar7 == 0) {
    uVar6 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,lVar7);
    _swift_bridgeObjectRelease(lVar7);
  }
  func_0x00010c018f60();
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_1);
  return unaff_x20;
}



/* Entry: 10432e720; end: 10432e747; -[SCSpotlightRepliesCommunityMetadata initWithCoder:] */

void FUN_10432e720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  FUN_10432e508();
  return;
}



/* Entry: 10432e748; end: 10432e763; -[SCSpotlightRepliesCommunityMetadata description] */

void FUN_10432e748(void)

{
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10432e764; end: 10432e7df; -[SCSpotlightRepliesCommunityMetadata init] */

void FUN_10432e764(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0,0xe000000000000000,
             "SCSpotlightRepliesScope/SCSpotlightRepliesCommunityMetadataWrapper.swift",0x48,2,0x37,
             0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10432e7ac);
  (*pcVar1)();
}



/* Entry: 10432e7e0; end: 10432e81f; -[SCSpotlightRepliesCommunityMetadata .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e7e0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + _DAT_11306ed90 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_11306ed98 + 8))
  ;
  return;
}



/* Entry: 10432e820; end: 10432e83f;  */

void FUN_10432e820(void)

{
  _objc_opt_self(&PTR_PTR_11299cec8);
  return;
}



/* Entry: 10432e840; end: 10432e843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  _objc_allocWithZone();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed90);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_11306ed98);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  _objc_msgSendSuper2(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10432e844; end: 10432e853; -[SCSpotlightRepliesTrayPageLauncherPayload config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306edc8));
  return;
}



/* Entry: 10432e854; end: 10432e863; -[SCSpotlightRepliesTrayPageLauncherPayload story] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10432e854(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11306edd0));
  return;
}


