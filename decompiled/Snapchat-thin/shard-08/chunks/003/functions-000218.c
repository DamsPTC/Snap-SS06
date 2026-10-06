/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fccaa8; end: 105fccabb; +[SCCMyAIInteractiveContext valdiMarshallableObjectDescriptor] */

void FUN_105fccaa8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110905290;
  param_1[1] = &PTR_s_SCBridgeObservable_1109052c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fccabc; end: 105fccb03; -[SCCMyAIInteractiveInfo initWithContentId:title:iconUrl:iconEmoji:lensId:contentType:isFeatureEnabled:] */

void FUN_105fccabc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eecd0;
  uStack_20 = param_1;
  func_0x000105fccbd0(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fccb04; end: 105fccb17; +[SCCMyAIInteractiveInfo valdiMarshallableObjectDescriptor] */

void FUN_105fccb04(undefined8 *param_1)

{
  *param_1 = &PTR_s_contentId_1109052d8;
  param_1[1] = &PTR_DAT_110905398;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fccb18; end: 105fccb4f; -[SCCMyAIInteractiveQuizResult initWithCorrectCount:totalCount:] */

void FUN_105fccb18(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eecd8;
  uStack_20 = param_1;
  func_0x000105fccbd0(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fccb50; end: 105fccb67; +[SCCMyAIInteractiveQuizResult valdiMarshallableObjectDescriptor] */

void FUN_105fccb50(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109053a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fccb68; end: 105fccbab; -[SCCMyAIInteractiveViewModel initWithInfo:] */

void FUN_105fccb68(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eece0;
  uStack_20 = param_1;
  func_0x000105fccbd0(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fccbac; end: 105fccbd7; +[SCCMyAIInteractiveViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fccbac(undefined8 *param_1)

{
  *param_1 = &PTR_s_info_1109053f0;
  param_1[1] = &PTR_DAT_110905480;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fccbd8; end: 105fcccd7; -[SCMessageAccessoryConversationInformation initWithConversationId:conversationParticipants:lastMessageId:renderAsBubble:conversationSubtype:isCampaignConversation:] */

undefined1 *
FUN_105fccbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126eece8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    *(undefined1 *)((long)puVar1 + 9) = param_8;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fcccd8; end: 105fcccfb; -[SCMessageAccessoryConversationInformation copyWithZone:] */

undefined8 FUN_105fcccd8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105fcccfc; end: 105fccd8b; -[SCMessageAccessoryConversationInformation hash] */

undefined8 * FUN_105fcccfc(long param_1,undefined8 param_2,undefined8 *param_3)

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
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar3 = &uStack_58;
  uStack_48 = uVar1;
  func_0x000100505190(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105fcce54:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105fcce60;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) && (puVar3[5] == param_3[5])) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_105fcce60;
          }
          goto LAB_105fcce54;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105fcce60:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105fccd8c; end: 105fcce7b; -[SCMessageAccessoryConversationInformation isEqual:] */

long FUN_105fccd8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105fcce54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105fcce60;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105fcce60;
          }
          goto LAB_105fcce54;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105fcce60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105fcce7c; end: 105fcce83; -[SCMessageAccessoryConversationInformation conversationId] */

undefined8 FUN_105fcce7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105fcce84; end: 105fcce8b; -[SCMessageAccessoryConversationInformation conversationParticipants] */

undefined8 FUN_105fcce84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105fcce8c; end: 105fcce93; -[SCMessageAccessoryConversationInformation lastMessageId] */

undefined8 FUN_105fcce8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105fcce94; end: 105fcce9b; -[SCMessageAccessoryConversationInformation renderAsBubble] */

undefined1 FUN_105fcce94(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105fcce9c; end: 105fccea3; -[SCMessageAccessoryConversationInformation conversationSubtype] */

undefined8 FUN_105fcce9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105fccea4; end: 105fcceab; -[SCMessageAccessoryConversationInformation isCampaignConversation] */

undefined1 FUN_105fccea4(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 105fcceac; end: 105fccee7; -[SCMessageAccessoryConversationInformation .cxx_destruct] */

void FUN_105fcceac(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105fccee8; end: 105fcd15f; -[SCCMerlinWelcomeCardActionHandlerImpl initWithUIContainer:presentingViewController:snapchatter:snapchatterServices:conversationDestinationParsingServices:textSendingServices:inputController:bitmojiEditorScopeExposer:bitmojiEditAvatarBuilderScopeServices:chatCameraScopeExposer:chatCameraScopeServices:] */

undefined8 *
FUN_105fccee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1126eecf0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
  }
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fcd160; end: 105fcd3f3; -[SCCMerlinWelcomeCardActionHandlerImpl updateDisplayNameWithName:callback:] */

void FUN_105fcd160(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x105fcd21c;
    puStack_50 = &UNK_11084a9e8;
    _objc_retain(param_3);
    uStack_48 = param_3;
    _objc_retain(param_4);
    uStack_40 = param_1;
    lStack_38 = param_4;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(lStack_38);
    _objc_release(uStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fcd3f4; end: 105fcd5f7; -[SCCMerlinWelcomeCardActionHandlerImpl sendMessageWithMessage:callback:] */

void FUN_105fcd3f4(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (ppuVar1 != (undefined **)0x0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c26c760();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf501a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126b01c0;
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar9;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c246920(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_105fcd5f8;
    puStack_90 = &UNK_110905510;
    _objc_retain(param_4);
    ppuVar1 = param_3;
    lStack_78 = param_4;
    _objc_retain(param_3);
    ppuStack_88 = param_3;
    uStack_80 = uVar2;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &puStack_a8;
    func_0x00010c297260(uVar6);
    _objc_release(ppuVar1);
    _objc_release(uVar6);
    _objc_release(puVar8);
    _objc_release(puVar9);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(ppuStack_88);
    _objc_release(lStack_78);
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  if (ppuVar7 == (undefined **)0x0) {
    ppuVar7 = (undefined **)PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    ppuVar1 = ppuVar7;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(ppuVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(ppuVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar4 = param_2;
    func_0x00010bf026a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac2e0(ppuVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar9 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    puVar8 = param_3[5];
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf50b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar7;
    func_0x00010bf21f60(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = param_3[6];
    _objc_retain(puVar10);
    func_0x00010c15b620(puVar8);
    _objc_release(ppuVar1);
    _objc_release(uVar4);
    _objc_release(puVar8);
    _objc_release(puVar10);
    _objc_release(puVar9);
  }
  else {
    puVar9 = param_3[6];
    func_0x000106c7758c(ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar9 + 0x10))(puVar9,ppuVar7);
  }
  _objc_release(ppuVar7);
  _objc_release(param_2);
  return;
}



/* Entry: 105fcd5f8; end: 105fcd823;  */

void FUN_105fcd5f8(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  _objc_retain(param_2);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126b1a40;
    _objc_opt_new(PTR_PTR_1126b1a40);
    puVar1 = param_3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2bc480(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2afd40(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar2 = param_2;
    func_0x00010bf026a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x0001086063f4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ac2e0(param_3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf50b20(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_3;
    func_0x00010bf21f60(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar6);
    func_0x00010c15b620(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar6);
    _objc_release(puVar1);
  }
  else {
    lVar5 = *(long *)(param_1 + 0x30);
    func_0x000106c7758c(param_3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,param_3);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105fcd824; end: 105fcd8a7;  */

void FUN_105fcd824(long param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc1878;
    func_0x000106c7723c(&PTR____CFConstantStringClassReference_110dc1878);
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x000106c7758c();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,ppuVar2);
    _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000105fcd8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x10))(lVar3);
  return;
}



/* Entry: 105fcd8a8; end: 105fcd96f; -[SCCMerlinWelcomeCardActionHandlerImpl suggestMessageWithMessage:select:callback:] */

void FUN_105fcd8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105fcd970;
    puStack_58 = &UNK_110864938;
    uStack_50 = param_1;
    _objc_retain(param_3);
    uStack_48 = param_3;
    uStack_38 = param_4;
    _objc_retain(param_5);
    lStack_40 = param_5;
    func_0x000100162d98("APPSTORE",&puStack_70);
    _objc_release(lStack_40);
    _objc_release(uStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105fcd970; end: 105fcd9a7;  */

void FUN_105fcd970(long param_1,undefined8 param_2)

{
  func_0x00010c286960(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,
                      *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000105fcd9a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0);
  return;
}



/* Entry: 105fcd9a8; end: 105fcd9ff; -[SCCMerlinWelcomeCardActionHandlerImpl presentAvatarBuilder] */

void FUN_105fcd9a8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105fcda00;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105fcda00; end: 105fcdafb;  */

void FUN_105fcda00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  puVar2 = PTR_PTR_1126afdc8;
  _objc_opt_new(PTR_PTR_1126afdc8);
  func_0x00010c2ae460();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a8f40(puVar2,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  puVar3 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf23c20(uVar4,param_2,uVar5,puVar3,*(undefined8 *)(param_1 + 0x20),1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),param_2,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105fcdafc; end: 105fcdb53; -[SCCMerlinWelcomeCardActionHandlerImpl presentReplyCamera] */

void FUN_105fcdafc(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105fcdb54;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 105fcdb54; end: 105fcdd7b;  */

void FUN_105fcdb54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126ae6c0;
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c294420(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294300(puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c2923e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010901d7c4(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(uVar8,puVar6);
  func_0x00010c03e6c0(puVar4);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  puVar6 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar7 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x58);
  lVar1 = *(long *)(param_1 + 0x20) + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf23680(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010bf9d620(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  _objc_release(uVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105fcdd7c; end: 105fcddc3; -[SCCMerlinWelcomeCardActionHandlerImpl bitmojiAvatarBuilderCancelled] */

void FUN_105fcdd7c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcddc4; end: 105fcde0b; -[SCCMerlinWelcomeCardActionHandlerImpl bitmojiAvatarBuilderCompleted] */

void FUN_105fcddc4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcde0c; end: 105fcde53; -[SCCMerlinWelcomeCardActionHandlerImpl bitmojiAvatarBuilderFailedWithError:] */

void FUN_105fcde0c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x40));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcde54; end: 105fcde9b; -[SCCMerlinWelcomeCardActionHandlerImpl dismissCameraScope:] */

void FUN_105fcde54(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x50));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcde9c; end: 105fcdf33; -[SCCMerlinWelcomeCardActionHandlerImpl .cxx_destruct] */

void FUN_105fcde9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fcdf34; end: 105fce287; -[SCPlusMerlinWelcomeCardMessagePlugin initWithCurrentUserId:billboardStringsServices:composerCoreUIServices:snapchatterServices:conversationDestinationParsingServices:textSendingServices:friendmojiServices:blizzardLogger:bitmojiEditorScopeExposer:bitmojiEditAvatarBuilderScopeServices:simpleWebBrowserScopeExposer:simpleWebBrowserScopeServices:chatCameraScopeExposer:chatCameraScopeServices:messagingMessageProvider:] */

undefined8 *
FUN_105fcdf34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126eecf8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fce288; end: 105fce853; -[SCPlusMerlinWelcomeCardMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fce288(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined *puVar22;
  undefined *puVar23;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar21;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar2;
  func_0x00010c2533e0();
  _objc_release(uVar2);
  _objc_release(uVar21);
  if (((int)uVar12 == 0x16) && (uVar3 = param_4, func_0x0001070b1c70(), (uVar3 & 1) == 0)) {
    uVar3 = param_4;
    func_0x0001070b1d3c(param_4,*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0720c0();
    _objc_release(uVar4);
    if ((int)uVar5 == 0) {
      puVar23 = (undefined *)0x0;
    }
    else {
      puVar6 = PTR_PTR_1126c6d10;
      _objc_alloc_init();
      puVar7 = PTR_PTR_1126b1440;
      _objc_alloc();
      func_0x00010c040f20();
      uVar8 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c2445a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c2923e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar21;
      func_0x00010c2445c0();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar2;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar12;
      func_0x00010c2519e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar19;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar10;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_release(uVar19);
      _objc_release(uVar12);
      _objc_release(uVar2);
      _objc_release(uVar9);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar21);
      _objc_release(uVar8);
      puVar23 = PTR_PTR_1126ae6b8;
      uVar12 = *(undefined8 *)(param_1 + 0x40);
      func_0x00010bfb9940(uVar12);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar21;
      func_0x00010bf8e420();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0860a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar23;
      func_0x00010c272120();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar23);
      _objc_release(uVar2);
      _objc_release(uVar21);
      _objc_release(uVar12);
      puVar14 = PTR_PTR_1126c6d18;
      _objc_alloc();
      lVar15 = param_1 + 0x98;
      _objc_loadWeakRetained(lVar15);
      lVar16 = param_1 + 0xa8;
      _objc_loadWeakRetained(lVar16);
      lVar17 = param_1 + 0xa0;
      _objc_loadWeakRetained();
      func_0x00010c0571a0();
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      puVar18 = PTR_PTR_1126b34f8;
      _objc_alloc();
      func_0x00010bff7720();
      uVar12 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010beff660();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar12;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = param_1 + 0x98;
      _objc_loadWeakRetained(lVar15);
      uVar2 = uVar21;
      func_0x00010c0b7600();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar15);
      _objc_release(uVar21);
      _objc_release(uVar12);
      uVar19 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0dc680(uVar19);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar19;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar12 = uVar21;
      func_0x00010c0b75e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar21);
      _objc_release(uVar19);
      puVar20 = PTR_PTR_1126c6d20;
      _objc_alloc(PTR_PTR_1126c6d20);
      uVar21 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02b2a0(puVar20);
      _objc_release(uVar21);
      puVar23 = PTR_PTR_1126b34e8;
      _objc_alloc(PTR_PTR_1126b34e8);
      param_1 = param_1 + 0xa8;
      _objc_loadWeakRetained(param_1);
      lVar15 = param_1;
      func_0x000106c733fc();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c046960(puVar23);
      func_0x00010c1ab5e0(puVar20);
      _objc_release(puVar23);
      _objc_release(lVar15);
      _objc_release(param_1);
      puVar23 = PTR_PTR_1126c67d8;
      _objc_alloc(PTR_PTR_1126c67d8);
      puVar22 = PTR_PTR_1126c6d28;
      func_0x00010bf44480(PTR_PTR_1126c6d28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c000660(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar20);
      _objc_release(uVar12);
      _objc_release(uVar2);
      _objc_release(puVar18);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(uVar11);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(uVar3);
  }
  else {
    puVar23 = (undefined *)0x0;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 105fce854; end: 105fce8b3;  */

void FUN_105fce854(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1440;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fce8b4; end: 105fce8e3; -[SCPlusMerlinWelcomeCardMessagePlugin identifier] */

void FUN_105fce8b4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eebb78);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eebb78);
  return;
}



/* Entry: 105fce8e4; end: 105fce8eb; -[SCPlusMerlinWelcomeCardMessagePlugin pluginType] */

undefined8 FUN_105fce8e4(void)

{
  return 1;
}



/* Entry: 105fce8ec; end: 105fce8f3; -[SCPlusMerlinWelcomeCardMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fce8ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105fce8f4; end: 105fce923; -[SCPlusMerlinWelcomeCardMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fce8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fce924; end: 105fce92b; -[SCPlusMerlinWelcomeCardMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fce924(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105fce92c; end: 105fce95b; -[SCPlusMerlinWelcomeCardMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fce92c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fce95c; end: 105fce973; -[SCPlusMerlinWelcomeCardMessagePlugin uiContainer] */

void FUN_105fce95c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fce974; end: 105fce97f; -[SCPlusMerlinWelcomeCardMessagePlugin setUiContainer:] */

void FUN_105fce974(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x98,param_3);
  return;
}



/* Entry: 105fce980; end: 105fce997; -[SCPlusMerlinWelcomeCardMessagePlugin inputController] */

void FUN_105fce980(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fce998; end: 105fce9a3; -[SCPlusMerlinWelcomeCardMessagePlugin setInputController:] */

void FUN_105fce998(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa0,param_3);
  return;
}



/* Entry: 105fce9a4; end: 105fce9bb; -[SCPlusMerlinWelcomeCardMessagePlugin presentingViewController] */

void FUN_105fce9a4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fce9bc; end: 105fce9c7; -[SCPlusMerlinWelcomeCardMessagePlugin setPresentingViewController:] */

void FUN_105fce9bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0xa8,param_3);
  return;
}



/* Entry: 105fce9c8; end: 105fceacf; -[SCPlusMerlinWelcomeCardMessagePlugin .cxx_destruct] */

void FUN_105fce9c8(long param_1)

{
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0xa0);
  _objc_destroyWeak(param_1 + 0x98);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fcead0; end: 105fcebcb; -[SCPlusGiftingMessagePlugin initWithUserId:userProvider:giftingScopeExposer:messagingMessageProvider:] */

undefined1 *
FUN_105fcead0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eed00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fcebcc; end: 105fceea3; -[SCPlusGiftingMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fcebcc(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010c253320();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2533e0();
  _objc_release(uVar2);
  _objc_release(uVar11);
  if ((int)uVar3 == 0x14) {
    uVar11 = param_3;
    func_0x00010c15de20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar11;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar11);
    func_0x00010c0720c0(*(undefined8 *)(param_1 + 8));
    uVar4 = param_4;
    func_0x0001070b1c70();
    uVar5 = param_4;
    if ((uVar4 & 1) == 0) {
      func_0x0001070b1d3c(param_4,*(undefined8 *)(param_1 + 8));
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001070b22f4(param_4,uVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    uVar4 = uVar5;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar6 = PTR_PTR_1126c6d30;
    _objc_alloc(PTR_PTR_1126c6d30);
    func_0x00010c01f680();
    puVar7 = PTR_PTR_1126b1da8;
    _objc_alloc(PTR_PTR_1126b1da8);
    func_0x00010c04abe0();
    puVar8 = PTR_PTR_1126c3510;
    _objc_alloc(PTR_PTR_1126c3510);
    lVar9 = param_1 + 0x38;
    _objc_loadWeakRetained(lVar9);
    puVar13 = PTR_PTR_1126c6d38;
    func_0x00010c124960(PTR_PTR_1126c6d38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056ce0(puVar8);
    _objc_release(puVar13);
    _objc_release(lVar9);
    puVar10 = PTR_PTR_1126c6d40;
    _objc_alloc(PTR_PTR_1126c6d40);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c017ca0(puVar10);
    _objc_release(uVar11);
    puVar13 = PTR_PTR_1126c67d8;
    _objc_alloc(PTR_PTR_1126c67d8);
    puVar12 = PTR_PTR_1126c6d48;
    func_0x00010bf44480(PTR_PTR_1126c6d48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660(puVar13);
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  else {
    puVar13 = (undefined *)0x0;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 105fceea4; end: 105fceed3; -[SCPlusGiftingMessagePlugin identifier] */

void FUN_105fceea4(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeba98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeba98);
  return;
}



/* Entry: 105fceed4; end: 105fceedb; -[SCPlusGiftingMessagePlugin pluginType] */

undefined8 FUN_105fceed4(void)

{
  return 1;
}



/* Entry: 105fceedc; end: 105fcef23; -[SCPlusGiftingMessagePlugin plusGiftingPageDidDismiss] */

void FUN_105fceedc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcef24; end: 105fcef2b; -[SCPlusGiftingMessagePlugin activeConversationIdObservable] */

undefined8 FUN_105fcef24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105fcef2c; end: 105fcef5b; -[SCPlusGiftingMessagePlugin setActiveConversationIdObservable:] */

void FUN_105fcef2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcef5c; end: 105fcef63; -[SCPlusGiftingMessagePlugin activeConversationInformationObservable] */

undefined8 FUN_105fcef5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105fcef64; end: 105fcef93; -[SCPlusGiftingMessagePlugin setActiveConversationInformationObservable:] */

void FUN_105fcef64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcef94; end: 105fcefab; -[SCPlusGiftingMessagePlugin uiContainer] */

void FUN_105fcef94(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fcefac; end: 105fcefb7; -[SCPlusGiftingMessagePlugin setUiContainer:] */

void FUN_105fcefac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 105fcefb8; end: 105fcf01f; -[SCPlusGiftingMessagePlugin .cxx_destruct] */

void FUN_105fcefb8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fcf020; end: 105fcf367; -[SCSnapProActionHandler initWithSnapProId:snapId:snapProShareDataFetcher:uiContainer:unifiedPublicProfilesPresenterScopeExposer:storySharePlaybackScopeExposer:playbackDataProvider:userSession:storiesReadReceiptCoordinator:circumstanceEngine:pageLauncher:storiesConfigProvider:contentProductPlaybackExposer:contentProductPlaybackScopeServices:storiesGrapheneMetricsEmitter:] */

undefined8 *
FUN_105fcf020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  puStack_70 = PTR_PTR_1126eed08;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    uVar2 = param_12;
    func_0x00010b09ced4();
    *(char *)(puVar1 + 0xb) = (char)uVar2;
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_17;
    _objc_release(uVar2);
  }
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fcf368; end: 105fcf37b; -[SCSnapProActionHandler handleActionButtonTapFor:] */

void FUN_105fcf368(long param_1,undefined8 param_2,int param_3)

{
  if (param_3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x00010c25fd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x18),PTR_s_subscribe_112675968);
    return;
  }
  return;
}



/* Entry: 105fcf37c; end: 105fcf65f; -[SCSnapProActionHandler handleAvatarTap:] */

void FUN_105fcf37c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_2 + 0x18);
  func_0x00010bfd8820();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfd1380(param_2);
  }
  else {
    _CACurrentMediaTime();
    *(double *)(param_2 + 0x28) = param_1;
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x68);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c242720();
      _objc_release(uVar3);
      if ((int)uVar8 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_PTR_1126c6d50;
        _objc_alloc(PTR_PTR_1126c6d50);
        func_0x00010c05d080();
        puVar6 = PTR_PTR_1126b23f8;
        _objc_alloc(PTR_PTR_1126b23f8);
        func_0x00010c0372c0();
        puVar7 = PTR_PTR_1126c6d58;
        _objc_alloc(PTR_PTR_1126c6d58);
        uVar8 = *(undefined8 *)(param_2 + 0x40);
        func_0x00010c0f3ca0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_2 + 0x40);
        func_0x00010c1016e0(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = *(undefined8 *)(param_2 + 0x40);
        func_0x00010c0eb380(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = *(undefined8 *)(param_2 + 0x40);
        func_0x00010c0eadc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04ad20(puVar7);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar3);
        _objc_release(uVar8);
        uVar3 = *(undefined8 *)(param_2 + 0x80);
        dVar11 = *(double *)(param_2 + 0x28);
        _CACurrentMediaTime();
        uVar8 = 0xb;
        func_0x000108534a80(0xb);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0ab9c0((double)(long)((param_1 - dVar11) * 1000.0),uVar3);
        _objc_release(uVar8);
        func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x38));
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
      }
      else {
        _objc_initWeak(auStack_78,param_2);
        puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0xc2000000;
        pcStack_98 = FUN_105fcf660;
        puStack_90 = &UNK_110841fb0;
        _objc_copyWeak(auStack_80,auStack_78);
        _objc_retain(param_4);
        uStack_88 = param_4;
        func_0x0001000d76cc("APPSTORE",&puStack_a8);
        _objc_release(uStack_88);
        _objc_destroyWeak(auStack_80);
        _objc_destroyWeak(auStack_78);
      }
    }
  }
  _objc_release(param_4);
  return;
}



/* Entry: 105fcf660; end: 105fcf69b;  */

void FUN_105fcf660(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be7ebe0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105fcf69c; end: 105fcf913; -[SCSnapProActionHandler handleHeaderTap] */

void FUN_105fcf69c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    puVar2 = PTR_PTR_1126b0ea8;
    _objc_opt_new();
    func_0x00010c19a840();
    puVar3 = PTR_PTR_1126b3f98;
    _objc_opt_new(PTR_PTR_1126b3f98);
    func_0x00010c1e57e0(puVar2);
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c11a640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4140();
    _objc_release(puVar3);
    puVar3 = puVar2;
    func_0x00010c11a640(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1b2c80();
    _objc_release(puVar3);
    _objc_initWeak(auStack_38,param_1);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x105fcf8b0;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    puStack_48 = puVar2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    _objc_release(puVar2);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126b0f10;
      _objc_alloc(PTR_PTR_1126b0f10);
      func_0x00010c033440();
      puVar3 = PTR_PTR_1126b0f18;
      _objc_alloc(PTR_PTR_1126b0f18);
      func_0x00010bff9da0();
      func_0x00010c1cd960();
      func_0x00010c1cd9a0(puVar3);
      puVar4 = PTR_PTR_1126b0f20;
      _objc_alloc(PTR_PTR_1126b0f20);
      func_0x00010c056680();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x30));
      _objc_release(puVar4);
      _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 105fcf914; end: 105fcfbab; -[SCSnapProActionHandler _presentStoryPlaybackScopeWithSourceView:] */

void FUN_105fcf914(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(param_4);
  func_0x00010bf4cfc0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b4d30;
  _objc_alloc(PTR_PTR_1126b4d30);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bfb1500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar7;
  func_0x00010c0644c0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0(puVar1,param_3,7,0x17,(long)(param_1 * 1000.0),0xb,uVar2,uVar4,0,0x29);
  _objc_release(uVar4);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c0f3ca0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7200(puVar3,param_3,param_4,uVar4,0,param_2,0,0,0,0);
  _objc_release(param_4);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b4d38;
  uVar4 = uVar7;
  func_0x00010c25a140(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf5f840(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf361c0(puVar5,param_3,PTR____NSArray0__struct_11034ab48,uVar4,0,6,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  puVar6 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  dVar9 = *(double *)(param_2 + 0x28);
  func_0x00010bff0a00(dVar9);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  func_0x00010bf22a20(uVar4,param_3,puVar1,puVar3,0,10,puVar5,puVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_2 + 0x80);
  dVar10 = *(double *)(param_2 + 0x28);
  _CACurrentMediaTime();
  uVar2 = 0xb;
  func_0x000108534a80(0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar9 - dVar10) * 1000.0),uVar8,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,uVar2);
  _objc_release(uVar2);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + 0x70),param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 105fcfbac; end: 105fcfbf3; -[SCSnapProActionHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_105fcfbac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x30));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcfbf4; end: 105fcfc3b; -[SCSnapProActionHandler chatSharePlaybackDidFinish] */

void FUN_105fcfbf4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x38));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcfc3c; end: 105fcfc3f; -[SCSnapProActionHandler chatSharePlaybackTriggerPagination:] */

void FUN_105fcfc3c(void)

{
  return;
}



/* Entry: 105fcfc40; end: 105fcfccb; -[SCSnapProActionHandler playbackPresenterDidTearDown:playbackScope:] */

void FUN_105fcfc40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaf20();
  _objc_release(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(param_1 + 0x70);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x70));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fcfccc; end: 105fcfd3b; -[SCSnapProActionHandler playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_105fcfccc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb000();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcfd3c; end: 105fcfd8b; -[SCSnapProActionHandler playbackPresenterDidCancelDismissing:playbackScope:] */

void FUN_105fcfd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eade0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcfd8c; end: 105fcfddb; -[SCSnapProActionHandler playbackPresenterWillBeginAnimatingToDismiss:playbackScope:] */

void FUN_105fcfd8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eafe0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcfddc; end: 105fcfe2b; -[SCSnapProActionHandler playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_105fcfddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eae40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcfe2c; end: 105fcfe7b; -[SCSnapProActionHandler playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_105fcfe2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eae60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcfe7c; end: 105fcfef7; -[SCSnapProActionHandler playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_105fcfe7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf37700(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ead60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcfef8; end: 105fcff7f; -[SCSnapProActionHandler playbackPresenter:didFinishPlayingStory:nextStory:playbackScope:] */

void FUN_105fcfef8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ead80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcff80; end: 105fcffef; -[SCSnapProActionHandler playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

void FUN_105fcff80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eae80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fcfff0; end: 105fd005f; -[SCSnapProActionHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_105fcfff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eb020();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fd0060; end: 105fd011f; -[SCSnapProActionHandler .cxx_destruct] */

void FUN_105fd0060(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fd0120; end: 105fd09ff; -[SCSnapProChatShareMessageRenderingPlugin initWithUserSession:storySharingServices:navigationServices:contextOperaPluginProvider:snapProProfilesProvider:circumstanceEngine:discoverOperaPluginCreator:shareMessageSender:resourceDownloader:unifiedPublicProfilesPresenterScopeExposer:safetyReportScopeExposer:storySharePlaybackScopeExposer:viewModelGenerator:autoAdvancePlaybackDataProvider:storiesNetworkRequester:discoverFeedDataFetcher:discoverFeedDataMutator:notificationPool:networkConnectivityMonitor:locationProvider:storiesReadReceiptCoordinator:storiesConfigProvider:notificationOSSettingsRetriever:composerStoryAutoAdvanceHandlerFactory:snapchattersSynchronousDataFetcher:musicContentRestrictionServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:pageLauncher:discoverFeedFriendStoriesDataCoordinator:optInDataProvider:mediaCoordinator:contentProductPlaybackExposer:contentProductPlaybackScopeServices:storiesGrapheneMetricsEmitter:adRenderDataParser:remoteSnapchattersDataFetcher:imageDownloader:grapheneRegistry:snapchatterObservableRepository:storiesCachedSummaryInfoProvider:lazyDiscoverFeedEventsController:storiesUsageLogger:lazyDiscoverFeedInteractionHistoryManager:messagingMessageProvider:] */

undefined8 *
FUN_105fd0120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(in_stack_000000b0);
  _objc_retain(in_stack_000000b8);
  _objc_retain(in_stack_000000c0);
  _objc_retain(in_stack_000000c8);
  _objc_retain(in_stack_000000d0);
  _objc_retain(in_stack_000000d8);
  _objc_retain(in_stack_000000e0);
  _objc_retain(in_stack_000000e8);
  _objc_retain(in_stack_000000f0);
  _objc_retain(in_stack_000000f8);
  _objc_retain(in_stack_00000100);
  _objc_retain(in_stack_00000108);
  _objc_retain(in_stack_00000110);
  _objc_retain(in_stack_00000118);
  _objc_retain(in_stack_00000120);
  _objc_retain(in_stack_00000128);
  _objc_retain(in_stack_00000130);
  puStack_70 = PTR_PTR_1126eed10;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_20;
    _objc_release(uVar2);
    _objc_retain(param_21);
    uVar2 = puVar1[0x17];
    puVar1[0x17] = param_21;
    _objc_release(uVar2);
    _objc_retain(param_22);
    uVar2 = puVar1[0x18];
    puVar1[0x18] = param_22;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0x19) = 0;
    _objc_retain(param_23);
    uVar2 = puVar1[0x1a];
    puVar1[0x1a] = param_23;
    _objc_release(uVar2);
    _objc_retain(param_24);
    uVar2 = puVar1[0x1b];
    puVar1[0x1b] = param_24;
    _objc_release(uVar2);
    _objc_retain(param_25);
    uVar2 = puVar1[0x1c];
    puVar1[0x1c] = param_25;
    _objc_release(uVar2);
    _objc_retain(param_26);
    uVar2 = puVar1[0x1d];
    puVar1[0x1d] = param_26;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    uVar2 = puVar1[0x1e];
    puVar1[0x1e] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_27);
    uVar2 = puVar1[0x1f];
    puVar1[0x1f] = param_27;
    _objc_release(uVar2);
    _objc_retain(param_28);
    uVar2 = puVar1[0x20];
    puVar1[0x20] = param_28;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000b0);
    uVar2 = puVar1[0x23];
    puVar1[0x23] = in_stack_000000b0;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_19;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000b8);
    uVar2 = puVar1[0x24];
    puVar1[0x24] = in_stack_000000b8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000c0);
    uVar2 = puVar1[0x25];
    puVar1[0x25] = in_stack_000000c0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000c8);
    uVar2 = puVar1[0x26];
    puVar1[0x26] = in_stack_000000c8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000d0);
    uVar2 = puVar1[0x27];
    puVar1[0x27] = in_stack_000000d0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000d8);
    uVar2 = puVar1[0x28];
    puVar1[0x28] = in_stack_000000d8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000e0);
    uVar2 = puVar1[0x29];
    puVar1[0x29] = in_stack_000000e0;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000e8);
    uVar2 = puVar1[0x2a];
    puVar1[0x2a] = in_stack_000000e8;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000f0);
    uVar2 = puVar1[0x2b];
    puVar1[0x2b] = in_stack_000000f0;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000120);
    uVar2 = puVar1[0x2c];
    puVar1[0x2c] = in_stack_00000120;
    _objc_release(uVar2);
    _objc_retain(in_stack_000000f8);
    uVar2 = puVar1[0x2d];
    puVar1[0x2d] = in_stack_000000f8;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000100);
    uVar2 = puVar1[0x2e];
    puVar1[0x2e] = in_stack_00000100;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000108);
    uVar2 = puVar1[0x2f];
    puVar1[0x2f] = in_stack_00000108;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000110);
    uVar2 = puVar1[0x30];
    puVar1[0x30] = in_stack_00000110;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000118);
    uVar2 = puVar1[0x31];
    puVar1[0x31] = in_stack_00000118;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000128);
    uVar2 = puVar1[0x32];
    puVar1[0x32] = in_stack_00000128;
    _objc_release(uVar2);
    _objc_retain(in_stack_00000130);
    uVar2 = puVar1[0x33];
    puVar1[0x33] = in_stack_00000130;
    _objc_release(uVar2);
  }
  _objc_release(in_stack_00000130);
  _objc_release(in_stack_00000128);
  _objc_release(in_stack_00000120);
  _objc_release(in_stack_00000118);
  _objc_release(in_stack_00000110);
  _objc_release(in_stack_00000108);
  _objc_release(in_stack_00000100);
  _objc_release(in_stack_000000f8);
  _objc_release(in_stack_000000f0);
  _objc_release(in_stack_000000e8);
  _objc_release(in_stack_000000e0);
  _objc_release(in_stack_000000d8);
  _objc_release(in_stack_000000d0);
  _objc_release(in_stack_000000c8);
  _objc_release(in_stack_000000c0);
  _objc_release(in_stack_000000b8);
  _objc_release(in_stack_000000b0);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fd0a00; end: 105fd0a2f; -[SCSnapProChatShareMessageRenderingPlugin identifier] */

void FUN_105fd0a00(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110eeba38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110eeba38);
  return;
}



/* Entry: 105fd0a30; end: 105fd0a37; -[SCSnapProChatShareMessageRenderingPlugin pluginType] */

undefined8 FUN_105fd0a30(void)

{
  return 0;
}



/* Entry: 105fd0a38; end: 105fd0aff; -[SCSnapProChatShareMessageRenderingPlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_105fd0a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x198);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0cbe00(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126c6880;
  func_0x00010c0cbae0(PTR_PTR_1126c6880,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bee75c0(param_1,param_2,uVar2,puVar1,param_4,0,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fd0b00; end: 105fd0c9f; -[SCSnapProChatShareMessageRenderingPlugin _valdiContextParamsForMessage:pluginMessage:conversationParticipants:renderForQuotedMessage:renderForQuotedMessagePreview:] */

void FUN_105fd0b00(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  if ((param_6 & 1) == 0) {
    func_0x00010bf4df40();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c11ebc0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c242900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c242900();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar5 = 0;
  if ((lVar4 != 0) && (lVar3 != 0)) {
    func_0x00010be1e140(param_1,param_2,lVar3,lVar4,param_3,param_5,param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bf4ece0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105fd0ca0; end: 105fd0dbb; -[SCSnapProChatShareMessageRenderingPlugin setActiveConversationIdObservable:] */

void FUN_105fd0ca0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x1a8) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf870a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105fd0dbc; end: 105fd0de7;  */

void FUN_105fd0dbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fd0de8; end: 105fd0f0b; -[SCSnapProChatShareMessageRenderingPlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_105fd0de8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x198);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 200);
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c242900();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010bf4b900(uVar6,param_2,lVar5);
    uVar7 = (uint)uVar6 ^ 1;
  }
  _objc_release(lVar5);
  _os_unfair_lock_unlock(param_1 + 200);
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105fd0f0c; end: 105fd101b; -[SCSnapProChatShareMessageRenderingPlugin canForwardMessageFromCTA:] */

uint FUN_105fd0f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x198);
  func_0x00010c0cbe00(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 200);
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c242900();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0xf0);
    func_0x00010bf4b900(uVar6,param_2,lVar5);
    uVar7 = (uint)uVar6 ^ 1;
  }
  _objc_release(lVar5);
  _os_unfair_lock_unlock(param_1 + 200);
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105fd101c; end: 105fd10f3; -[SCSnapProChatShareMessageRenderingPlugin isSharingRestrictedForMessage:] */

long FUN_105fd101c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec4920(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar2 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010afef4dc();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c07dce0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  return lVar6;
}



/* Entry: 105fd10f4; end: 105fd12bb; -[SCSnapProChatShareMessageRenderingPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_105fd10f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  
  lVar1 = *(long *)(param_1 + 0x198);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c242900();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c241220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar5 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar10 = *(undefined8 *)(param_1 + 0x60);
    lVar2 = lVar1;
    func_0x00010bf490e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar10,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010c25b620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(lVar2);
    func_0x00010becbcc0(param_1,param_2,uVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126b0648;
    _objc_alloc(PTR_PTR_1126b0648);
    func_0x00010c01cb60();
    puVar8 = PTR_PTR_1126c6898;
    func_0x00010c08f300(PTR_PTR_1126c6898,param_2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126c68a0;
    func_0x00010c2990e0(0x3fe3aa03e88cb3c9,PTR_PTR_1126c68a0);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR_PTR_1126c68a8;
    _objc_alloc(PTR_PTR_1126c68a8);
    func_0x00010c039de0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(param_1);
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 105fd12bc; end: 105fd161b; -[SCSnapProChatShareMessageRenderingPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

void FUN_105fd12bc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 in_x4;
  undefined8 in_x6;
  undefined8 uVar11;
  
  _objc_retain(in_x6);
  uVar11 = *(undefined8 *)(param_1 + 0x198);
  _objc_retain(in_x4);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar11;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c242900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c116a20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar3;
  func_0x00010c241220(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b1a58;
  _objc_opt_new(PTR_PTR_1126b1a58);
  func_0x00010c1a99c0();
  puVar5 = PTR_PTR_1126b1a40;
  _objc_opt_new(PTR_PTR_1126b1a40);
  func_0x00010c2b9b80();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2aa660(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar6 = in_x4;
  func_0x00010bf026a0(in_x4);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  func_0x0001086063f4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ac2e0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar6);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc480(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  func_0x00010c2b0820(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2afd40(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar7);
  lVar8 = param_1;
  func_0x00010bec4920(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x000107d0506c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  func_0x00010c2aaec0(puVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf21f60(puVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = in_x4;
  func_0x00010bf50b20(in_x4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x4);
  _objc_retain(in_x6);
  func_0x00010c22afc0(uVar10);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(in_x6);
  _objc_release(in_x6);
  _objc_release(puVar7);
  _objc_release(lVar9);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar11);
  return;
}



/* Entry: 105fd161c; end: 105fd162f;  */

void FUN_105fd161c(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105fd162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 0);
  return;
}



/* Entry: 105fd1630; end: 105fd177b; -[SCSnapProChatShareMessageRenderingPlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_105fd1630(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ac80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126c6880;
  if ((int)uVar4 == 0xe) {
    uVar2 = param_3;
    func_0x00010c0cb340(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11ec40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11eda0(puVar5,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010bee75c0(param_1,param_2,uVar1,puVar5,param_4,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fd177c; end: 105fd188f; -[SCSnapProChatShareMessageRenderingPlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_105fd177c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c0cbe00(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ac80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 == 0xe) {
    puVar5 = PTR_PTR_1126c6880;
    func_0x00010c0cbae0(PTR_PTR_1126c6880,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee75c0(param_1,param_2,uVar1,puVar5,param_4,0,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  else {
    param_1 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105fd1890; end: 105fd1897; -[SCSnapProChatShareMessageRenderingPlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_105fd1890(void)

{
  return 1;
}



/* Entry: 105fd1898; end: 105fd1913; -[SCSnapProChatShareMessageRenderingPlugin shouldDisplayContextualHeaderForMessage:] */

bool FUN_105fd1898(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c0cbe00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ac80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (int)uVar4 == 0xe;
}



/* Entry: 105fd1914; end: 105fd19fb; -[SCSnapProChatShareMessageRenderingPlugin contextualHeaderForMessage:conversationParticipants:] */

void FUN_105fd1914(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  func_0x00010c0cbe00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11ebc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c22a700();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c22ac80();
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((int)uVar4 == 0xe) {
    puVar7 = PTR_PTR_1126c68c0;
    _objc_alloc(PTR_PTR_1126c68c0);
    puVar5 = puVar7;
    func_0x000108f59464();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126c68c8;
    func_0x00010c131980(PTR_PTR_1126c68c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c051540(puVar7,param_2,puVar5,0,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  else {
    puVar7 = (undefined *)0x0;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}


