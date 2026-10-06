/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105fb1138; end: 105fb116b; -[SCCChatBotDisclaimerView initWithViewModel:componentContext:runtime:] */

void FUN_105fb1138(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eea38;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fb116c; end: 105fb11bb; -[SCCChatBotDisclaimerView setViewModel:] */

void FUN_105fb116c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb11bc; end: 105fb11ff; -[SCCChatBotDisclaimerView viewModel] */

void FUN_105fb11bc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb1200; end: 105fb123b; -[SCCChatBotDisclaimerViewModel initWithText:] */

void FUN_105fb1200(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eea40;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 105fb123c; end: 105fb1253; +[SCCChatBotDisclaimerViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fb123c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_text_110902ef0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb1254; end: 105fb125f; +[SCCChatActionSuggestionsView componentPath] */

undefined ** FUN_105fb1254(void)

{
  return &PTR____CFConstantStringClassReference_110e34d18;
}



/* Entry: 105fb1260; end: 105fb1293; -[SCCChatActionSuggestionsView initWithViewModel:componentContext:runtime:] */

void FUN_105fb1260(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eea48;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fb1294; end: 105fb12e3; -[SCCChatActionSuggestionsView setViewModel:] */

void FUN_105fb1294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb12e4; end: 105fb1327; -[SCCChatActionSuggestionsView viewModel] */

void FUN_105fb12e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb1328; end: 105fb132f; -[SCCChatActionSuggestionType__Enum init] */

void FUN_105fb1328(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105fb1330; end: 105fb133f; -[SCCChatSearchSuggestionTrailingElement__Enum init] */

void FUN_105fb1330(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x113134678,4);
  return;
}



/* Entry: 105fb1340; end: 105fb1363; -[SCCChatActionSuggestionsContext init] */

void FUN_105fb1340(void)

{
  func_0x000105fb1454(PTR_PTR_1126eea50);
  return;
}



/* Entry: 105fb1364; end: 105fb1377; +[SCCChatActionSuggestionsContext valdiMarshallableObjectDescriptor] */

void FUN_105fb1364(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110902f20;
  param_1[1] = &PTR_s_SCCBlizzardLogging_110902fb0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb1378; end: 105fb139b; -[SCCChatActionSuggestionsViewModel init] */

void FUN_105fb1378(void)

{
  func_0x000105fb1454(PTR_PTR_1126eea58);
  return;
}



/* Entry: 105fb139c; end: 105fb13af; +[SCCChatActionSuggestionsViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fb139c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110902fd8;
  param_1[1] = &PTR_DAT_110903098;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb13b0; end: 105fb13e3; -[SCCChatMessageActionSuggestion initWithActionSuggestionType:] */

void FUN_105fb13b0(undefined8 param_1)

{
  func_0x000105fb1468(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fb13e4; end: 105fb13f7; +[SCCChatMessageActionSuggestion valdiMarshallableObjectDescriptor] */

void FUN_105fb13e4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109030b0;
  param_1[1] = &PTR_DAT_110903110;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb13f8; end: 105fb142b; -[SCCChatSearchSuggestion initWithUrl:term:suggestionId:] */

void FUN_105fb13f8(undefined8 param_1)

{
  func_0x000105fb1468(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105fb142c; end: 105fb1477; +[SCCChatSearchSuggestion valdiMarshallableObjectDescriptor] */

void FUN_105fb142c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_url_110903128;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb1478; end: 105fb1483; +[SCCChatMerlinFeedbackView componentPath] */

undefined ** FUN_105fb1478(void)

{
  return &PTR____CFConstantStringClassReference_110e34d38;
}



/* Entry: 105fb1484; end: 105fb14b7; -[SCCChatMerlinFeedbackView initWithViewModel:componentContext:runtime:] */

void FUN_105fb1484(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eea70;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105fb14b8; end: 105fb1507; -[SCCChatMerlinFeedbackView setViewModel:] */

void FUN_105fb14b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105fb1508; end: 105fb154b; -[SCCChatMerlinFeedbackView viewModel] */

void FUN_105fb1508(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb154c; end: 105fb1553; -[SCCChatMerlinFeedbackPromptType__Enum init] */

void FUN_105fb154c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,6);
  return;
}



/* Entry: 105fb1554; end: 105fb1577; -[SCCChatMerlinFeedbackContext init] */

void FUN_105fb1554(void)

{
  func_0x000105fb15c4(PTR_PTR_1126eea78);
  return;
}



/* Entry: 105fb1578; end: 105fb158b; +[SCCChatMerlinFeedbackContext valdiMarshallableObjectDescriptor] */

void FUN_105fb1578(undefined8 *param_1)

{
  *param_1 = &PTR_s_blizzardLogger_110903188;
  param_1[1] = &PTR_s_SCCBlizzardLogging_1109031d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb158c; end: 105fb15af; -[SCCChatMerlinFeedbackViewModel init] */

void FUN_105fb158c(void)

{
  func_0x000105fb15c4(PTR_PTR_1126eea80);
  return;
}



/* Entry: 105fb15b0; end: 105fb15e7; +[SCCChatMerlinFeedbackViewModel valdiMarshallableObjectDescriptor] */

void FUN_105fb15b0(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_1109031e0;
  param_1[1] = &PTR_DAT_110903240;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105fb15e8; end: 105fb16b3; -[SCAddFriendMessageAccessoryPlugin initWithUserProvider:snapchattersObservableRepository:snapchattersDataMutator:] */

undefined1 *
FUN_105fb15e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eea88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fb16b4; end: 105fb18c3; -[SCAddFriendMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105fb16b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new();
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fb18c4;
  puStack_88 = &UNK_110903250;
  _objc_copyWeak(auStack_80,auStack_78);
  uVar2 = param_3;
  func_0x00010bfb26a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = puVar1;
  func_0x00010c2519e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c268560(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = puVar4;
  func_0x00010bf41860(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105fb18c4; end: 105fb1927;  */

void FUN_105fb18c4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bee71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fb1928; end: 105fb1a3f;  */

void FUN_105fb1928(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0ec5e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 != 0) {
    uVar3 = param_2;
    func_0x00010bf1f3c0();
    _objc_release(lVar2);
    puVar4 = PTR_PTR_1126ae750;
    if ((int)uVar3 == 0) {
      param_1 = param_1 + 0x40;
      _objc_loadWeakRetained(param_1);
      lVar2 = param_1;
      func_0x00010bde84a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ec800(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(param_1);
      goto LAB_105fb1a18;
    }
  }
  puVar4 = PTR_PTR_1126ae750;
  func_0x00010c0db140(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
LAB_105fb1a18:
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105fb1a40; end: 105fb1a6f; -[SCAddFriendMessageAccessoryPlugin identifier] */

void FUN_105fb1a40(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e35598);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e35598);
  return;
}



/* Entry: 105fb1a70; end: 105fb1b23; -[SCAddFriendMessageAccessoryPlugin isApplicableToMessage:] */

undefined4 FUN_105fb1a70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar1 = PTR_DAT_1126a5278;
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010010fab4(lVar3,puVar1);
  _objc_release(lVar3);
  uVar4 = 0;
  if (lVar3 != 0) {
    uVar4 = (undefined4)lVar2;
  }
  _objc_release(lVar3);
  return uVar4;
}



/* Entry: 105fb1b24; end: 105fb1b2b; -[SCAddFriendMessageAccessoryPlugin pluginType] */

undefined8 FUN_105fb1b24(void)

{
  return 1;
}



/* Entry: 105fb1b2c; end: 105fb1ce3; -[SCAddFriendMessageAccessoryPlugin _userToAddForMessage:] */

void FUN_105fb1b2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar2 = puVar3;
  func_0x00010010fab4(puVar3,PTR_DAT_1126a5278);
  puVar1 = puVar3;
  if ((int)puVar2 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar3);
  puVar2 = PTR_PTR_1126ae6b8;
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    func_0x00010bf54280(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(uVar4);
    puVar1 = puVar2;
    func_0x00010bfb26a0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(puVar2);
    uVar4 = param_3;
    puVar2 = puVar1;
  }
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb1ce4; end: 105fb1e03;  */

void FUN_105fb1ce4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c292400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_2);
  func_0x00010c297260(uVar1);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126b0418;
  func_0x00010bf54280(PTR_PTR_1126b0418);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb1e04; end: 105fb1f77;  */

void FUN_105fb1e04(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar5 = PTR_PTR_1126ae6b8;
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_2;
    func_0x00010c0ec5e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c09dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      _objc_retain(lVar6);
      lVar1 = lVar6;
    }
    else {
      lVar1 = 0;
    }
    puVar5 = PTR_PTR_1126ae750;
    func_0x00010c0ec800(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105fb1f78; end: 105fb2007;  */

void FUN_105fb1f78(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    _objc_retain(param_2);
    lVar1 = param_2;
  }
  else {
    lVar1 = 0;
  }
  puVar2 = PTR_PTR_1126ae750;
  func_0x00010c0ec800(PTR_PTR_1126ae750);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb2008; end: 105fb2387; -[SCAddFriendMessageAccessoryPlugin _contextParamsForSnapchatter:messageObservable:conversationInformation:snapchatterObservable:dismissalSubject:] */

void FUN_105fb2008(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c6b28;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ac00();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126c6b30;
  _objc_opt_new(PTR_PTR_1126c6b30);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105fb2388;
  puStack_80 = &UNK_110842e18;
  _objc_retain(param_7);
  uStack_78 = param_7;
  func_0x00010c18f360(puVar2);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f040(puVar2);
  _objc_release(uVar3);
  uVar3 = param_4;
  func_0x00010c0b8600(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6f40(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010c0b8600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea9a0(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c0b8600(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e980(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_a0,param_1);
  _objc_copyWeak(auStack_a8,auStack_a0);
  _objc_retain(param_3);
  func_0x00010c1d3960(puVar2);
  puVar6 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar7 = PTR_PTR_1126c6b38;
  func_0x00010bf44480(PTR_PTR_1126c6b38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar6);
  _objc_release(puVar7);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_78);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fb2388; end: 105fb2397;  */

void FUN_105fb2388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,PTR____kCFBooleanTrue_11034ab68);
  return;
}



/* Entry: 105fb2398; end: 105fb23f7;  */

void FUN_105fb2398(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07d080(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105fb23f8; end: 105fb24c7;  */

void FUN_105fb23f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar1 = param_2;
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_2;
    func_0x00010c0ec5e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010c0df760(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fb24c8; end: 105fb256f;  */

void FUN_105fb24c8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  _objc_retain(param_2);
  func_0x00010bdc8500(param_1);
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 105fb2570; end: 105fb25ef;  */

void FUN_105fb2570(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_105fb25f0;
    puStack_38 = &UNK_11084a9b8;
    _objc_retain(lVar1);
    lStack_30 = lVar1;
    uStack_28 = param_2;
    func_0x0001000d76cc("APPSTORE",&puStack_50);
    _objc_release(lStack_30);
  }
  return;
}



/* Entry: 105fb25f0; end: 105fb2603;  */

void FUN_105fb25f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105fb2600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105fb2604; end: 105fb2743; -[SCAddFriendMessageAccessoryPlugin _addSnapchatter:completion:] */

void FUN_105fb2604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010befca80(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x19;
  func_0x0001000819a8(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bef8a80(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return;
}



/* Entry: 105fb2744; end: 105fb2757;  */

void FUN_105fb2744(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000105fb2750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 105fb2758; end: 105fb276f; -[SCAddFriendMessageAccessoryPlugin messageRenderingPluginManager] */

void FUN_105fb2758(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fb2770; end: 105fb277b; -[SCAddFriendMessageAccessoryPlugin setMessageRenderingPluginManager:] */

void FUN_105fb2770(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 105fb277c; end: 105fb27bf; -[SCAddFriendMessageAccessoryPlugin .cxx_destruct] */

void FUN_105fb277c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fb27c0; end: 105fb28fb;  */

bool FUN_105fb27c0(undefined **param_1)

{
  bool bVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  
  _objc_retain();
  ppuVar2 = param_1;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (ppuVar2 == (undefined **)0x0) {
    bVar1 = false;
  }
  else {
    ppuVar3 = param_1;
    func_0x00010c26c400();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = &PTR___NSConcreteGlobalBlock_1109033e0;
    ppuVar4 = ppuVar3;
    func_0x0001006372a4();
    _objc_release(ppuVar3);
    ppuVar3 = ppuVar4;
    func_0x00010bf529e0();
    if (ppuVar3 == (undefined **)0x1) {
      ppuVar3 = param_1;
      func_0x00010c26b700(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
      func_0x00010c2a4bc0(PTR__OBJC_CLASS___NSCharacterSet_1126af030);
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = ppuVar3;
      func_0x00010c25d0a0(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar4;
      func_0x00010bfb1920(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2a0();
      _objc_release(ppuVar3);
      ppuVar3 = ppuVar6;
      func_0x00010c08fa60(ppuVar6);
      bVar1 = ppuVar3 == ppuVar2;
      _objc_release(ppuVar6);
    }
    else {
      bVar1 = false;
    }
    _objc_release(ppuVar4);
  }
  _objc_release(param_1);
  return bVar1;
}



/* Entry: 105fb28fc; end: 105fb2a03;  */

undefined1 FUN_105fb28fc(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  uVar2 = param_2;
  func_0x00010bf4df40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0becc0();
  _objc_release(uVar2);
  uVar1 = *(undefined1 *)(puStack_48 + 3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_2);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105fb2a04; end: 105fb2b53; -[SCForwardMessageAccessoryPlugin initWithCurrentUserId:forwardScopeExposer:urlSpamProvider:messagingExperimentService:notificationPool:] */

undefined1 *
FUN_105fb2a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126eea90;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c082300();
    *(char *)((long)puVar1 + 0x30) = (char)uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105fb2b54; end: 105fb2d27; -[SCForwardMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105fb2b54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = param_3;
  func_0x00010bfb0d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fb2d28;
  puStack_88 = &UNK_110903400;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_80 = param_3;
  _objc_retain(param_4);
  uVar2 = uVar1;
  uStack_78 = param_4;
  func_0x00010bfb26a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_a8,auStack_68);
  uVar3 = uVar2;
  func_0x00010bfb26a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_a8);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105fb2d28; end: 105fb2d8f;  */

void FUN_105fb2d28(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be18de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105fb2d90; end: 105fb2ee7;  */

void FUN_105fb2d90(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  puVar3 = PTR_PTR_1126ae6b8;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar3 = *(undefined **)(param_1 + 0x20);
    puVar2 = *(undefined **)(param_1 + 0x28);
    func_0x00010bfb0d80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
    func_0x00010bf41860(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fb2ee8; end: 105fb2f97;  */

void FUN_105fb2ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae750;
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8420();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c0ec800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb2f98; end: 105fb2fc7; -[SCForwardMessageAccessoryPlugin identifier] */

void FUN_105fb2f98(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e355b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e355b8);
  return;
}



/* Entry: 105fb2fc8; end: 105fb309f; -[SCForwardMessageAccessoryPlugin isApplicableToMessage:] */

ulong FUN_105fb2fc8(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bfddc80();
  if (((int)uVar2 == 0) || ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    uVar2 = param_3;
    func_0x00010c0cb8c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    if ((uVar1 & 1) == 0) {
      func_0x00010be18ea0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      if (param_1 == 0) {
        uVar2 = param_3;
        func_0x00010c080dc0();
        if ((int)uVar2 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = param_3;
          FUN_105fb27c0(param_3);
        }
      }
      else {
        uVar2 = 1;
      }
      _objc_release(param_1);
      goto LAB_105fb3084;
    }
  }
  uVar2 = 0;
LAB_105fb3084:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105fb30a0; end: 105fb30a7; -[SCForwardMessageAccessoryPlugin pluginType] */

undefined8 FUN_105fb30a0(void)

{
  return 1;
}



/* Entry: 105fb30a8; end: 105fb30ab; -[SCForwardMessageAccessoryPlugin dismissPresentedView] */

void FUN_105fb30a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissForwardScopeIfPresented_11255e468);
  return;
}



/* Entry: 105fb30ac; end: 105fb30af; -[SCForwardMessageAccessoryPlugin dismissForwardScope:] */

void FUN_105fb30ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be02b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__dismissForwardScopeIfPresented_11255e468);
  return;
}



/* Entry: 105fb30b0; end: 105fb30ff; -[SCForwardMessageAccessoryPlugin _forwardablePluginForMessage:] */

void FUN_105fb30b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be75460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010010fab4();
  uVar1 = param_1;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb3100; end: 105fb317b; -[SCForwardMessageAccessoryPlugin _pluginForMessage:] */

void FUN_105fb3100(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105fb317c; end: 105fb346b; -[SCForwardMessageAccessoryPlugin _forwardEligibilityObservableForMessage:messageObservable:conversationInformationObservable:] */

void FUN_105fb317c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010be75460();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = (undefined *)(param_1 + 0x40);
  _objc_loadWeakRetained(puVar2);
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c28d7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105fb346c;
  puStack_88 = &UNK_110856a28;
  puVar5 = puVar4;
  lStack_80 = lVar1;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar1;
  func_0x00010bfe5ec0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2519e0(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar6 = param_1;
  func_0x00010be18ea0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uVar8 = param_3;
    func_0x00010c080dc0();
    if ((int)uVar8 == 0) {
      puVar2 = PTR_PTR_1126ae6b8;
      func_0x00010c0860a0(PTR_PTR_1126ae6b8);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_initWeak(auStack_d0,param_1);
      _objc_retain(param_4);
      _objc_retain(param_5);
      _objc_copyWeak(auStack_d8,auStack_d0);
      puVar9 = puVar7;
      func_0x00010bfb2660(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar9);
      _objc_destroyWeak(auStack_d8);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_d0);
    }
  }
  else {
    puStack_c8 = puVar9;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_105fb34d0;
    puStack_b0 = &UNK_110903490;
    puVar9 = puVar7;
    lStack_a8 = lVar6;
    func_0x00010bf41860(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
  }
  _objc_release(lVar6);
  _objc_release(puVar7);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb346c; end: 105fb34cf;  */

undefined8 FUN_105fb346c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bfe5ec0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 105fb34d0; end: 105fb34ff;  */

void FUN_105fb34d0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf2ca80(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105fb3500; end: 105fb35c3;  */

void FUN_105fb3500(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_48,param_1 + 0x30);
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105fb35c4; end: 105fb365f;  */

void FUN_105fb35c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be44900();
  _objc_release(param_3);
  _objc_release(param_2);
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105fb3660; end: 105fb37e3; -[SCForwardMessageAccessoryPlugin _isTextMessageEligible:conversationInformation:] */

byte FUN_105fb3660(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_105fb27c0();
  if (((int)uVar1 == 0) || (uVar2 = param_4, func_0x00010c06e040(), (uVar2 & 1) != 0)) {
    bVar4 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010c26c400(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x2020000000;
    uStack_48 = 1;
    uVar1 = uVar3;
    func_0x00010bf4df40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0becc0(uVar1);
    _objc_release(uVar1);
    bVar4 = *(byte *)(puStack_58 + 3);
    _objc_release(param_4);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar4 & 1;
}



/* Entry: 105fb37e4; end: 105fb381b;  */

void FUN_105fb37e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be44e60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),param_2,
                      *(undefined8 *)(param_1 + 0x30));
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 105fb381c; end: 105fb3b77; -[SCForwardMessageAccessoryPlugin _isURLMessageEligible:url:conversationInformation:] */

uint FUN_105fb381c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c101bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar2 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a5280);
  uVar1 = uVar3;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  if (uVar1 != 0) {
    func_0x00010c108320();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    uVar6 = param_4;
    func_0x00010beec820(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar6);
    if ((uVar5 != 0) && (uVar2 = uVar5, func_0x00010c07efa0(), (uVar2 & 1) != 0)) {
      _objc_release(uVar5);
      _objc_release(uVar3);
      uVar10 = 0;
      goto LAB_105fb3b10;
    }
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar11);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_105fb3b78;
  uStack_78 = 0x105fb3b88;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_105fb3b78;
  uStack_a8 = 0x105fb3b88;
  uStack_a0 = 0;
  uVar6 = param_5;
  func_0x00010bf507c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bf240();
  _objc_release(uVar6);
  if (puStack_90[5] == 0) {
    uVar10 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c0cb8c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010bf026e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar7;
    func_0x00010c081ce0(uVar7);
    uVar10 = (uint)uVar9 ^ 1;
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(uVar11);
LAB_105fb3b10:
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar10;
}



/* Entry: 105fb3b78; end: 105fb3b8f;  */

void FUN_105fb3b78(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105fb3b90; end: 105fb3c83;  */

void FUN_105fb3b90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105fb3c84; end: 105fb3ccb; -[SCForwardMessageAccessoryPlugin _dismissForwardScopeIfPresented] */

void FUN_105fb3c84(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 105fb3ccc; end: 105fb3f4f; -[SCForwardMessageAccessoryPlugin _contextParamsForMessage:conversationInformation:messageObservable:conversationInformationObservable:] */

void FUN_105fb3ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c6b40;
  _objc_alloc(PTR_PTR_1126c6b40);
  func_0x00010bffa0e0();
  puVar2 = PTR_PTR_1126c6b48;
  _objc_opt_new(PTR_PTR_1126c6b48);
  uVar3 = param_5;
  func_0x00010c0b8600(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c6f40(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = param_6;
  func_0x00010c0b8600(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ea9a0(puVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_initWeak(auStack_68,param_1);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c1d3960(puVar2);
  puVar6 = PTR_PTR_1126c67d8;
  _objc_alloc(PTR_PTR_1126c67d8);
  puVar7 = PTR_PTR_1126c6b50;
  func_0x00010bf44480(PTR_PTR_1126c6b50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c000660(puVar6);
  _objc_release(puVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105fb3f50; end: 105fb3faf;  */

void FUN_105fb3f50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c07d080(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 105fb3fb0; end: 105fb400f;  */

void FUN_105fb3fb0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf507c0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be31c80(lVar2,param_2,uVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105fb4010; end: 105fb420f; -[SCForwardMessageAccessoryPlugin _handleTapOnMessage:conversationParticipants:] */

void FUN_105fb4010(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be18ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  if (((uVar2 & 1) != 0) && (uVar2 = uVar1, func_0x00010c07dd80(), (int)uVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c07dd60();
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126afde0;
    if ((int)uVar4 != 0) {
      ppuVar5 = &PTR____CFConstantStringClassReference_110e34d58;
      func_0x0001000f6108(&PTR____CFConstantStringClassReference_110e34d58,
                          &PTR____CFConstantStringClassReference_110e34d78,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf57f80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar5);
      puVar6 = *(undefined **)(param_1 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105fb4210;
      puStack_58 = &UNK_110841f80;
      puStack_50 = puVar6;
      puStack_48 = puVar7;
      _objc_retain(puVar7);
      _objc_retain(puVar6);
      func_0x0001000d76cc("APPSTORE",&puStack_70);
      _objc_release(puStack_48);
      _objc_release(puStack_50);
      _objc_release(puVar7);
      goto LAB_105fb41dc;
    }
  }
  puVar6 = PTR_PTR_1126c6b58;
  _objc_alloc(PTR_PTR_1126c6b58);
  puVar7 = PTR_PTR_1126c6b60;
  func_0x00010bfbba20(PTR_PTR_1126c6b60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02b3c0(puVar6);
  _objc_release(puVar7);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10));
LAB_105fb41dc:
  _objc_release(puVar6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105fb4210; end: 105fb421b;  */

void FUN_105fb4210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c25f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_submitNotificationWithPresenter__1126756f8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105fb421c; end: 105fb4223; -[SCForwardMessageAccessoryPlugin uiContainer] */

undefined8 FUN_105fb421c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 105fb4224; end: 105fb4253; -[SCForwardMessageAccessoryPlugin setUiContainer:] */

void FUN_105fb4224(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105fb4254; end: 105fb426b; -[SCForwardMessageAccessoryPlugin messageRenderingPluginManager] */

void FUN_105fb4254(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fb426c; end: 105fb4277; -[SCForwardMessageAccessoryPlugin setMessageRenderingPluginManager:] */

void FUN_105fb426c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x40,param_3);
  return;
}



/* Entry: 105fb4278; end: 105fb42df; -[SCForwardMessageAccessoryPlugin .cxx_destruct] */

void FUN_105fb4278(long param_1)

{
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105fb42e0; end: 105fb42fb;  */

void FUN_105fb42e0(long param_1,ulong param_2)

{
  if (param_2 < 2) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 105fb42fc; end: 105fb432b;  */

void FUN_105fb42fc(long param_1,undefined1 param_2)

{
  func_0x00010c083ac0();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105fb432c; end: 105fb43c3;  */

undefined8 FUN_105fb432c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((((uVar2 & 1) == 0) && (uVar1 = param_1, func_0x00010c07f260(), (uVar1 & 1) == 0)) &&
     ((uVar1 = param_1, func_0x00010c083520(), (uVar1 & 1) != 0 ||
      (uVar1 = param_1, func_0x00010c06e580(), (int)uVar1 != 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_1);
  return uVar3;
}



/* Entry: 105fb43c4; end: 105fb4427;  */

uint FUN_105fb43c4(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_105fb432c();
  if ((((int)uVar1 == 0) || (uVar1 = param_1, func_0x00010bf2c580(), (int)uVar1 == 0)) ||
     (uVar1 = param_1, func_0x00010c07d080(), (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c15dfc0(param_1);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105fb4428; end: 105fb443b; -[SCSaveMessageAccessoryPlugin init] */

void FUN_105fb4428(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0428d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithScwConfigProvider_scwBri_1125ee430,0,0,0,0);
  return;
}



/* Entry: 105fb443c; end: 105fb458f; -[SCSaveMessageAccessoryPlugin initWithScwConfigProvider:scwBridge:conversationActionHandler:messagingExperimentService:] */

undefined8 *
FUN_105fb443c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eea98;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[1];
    puVar1[1] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105fb4590; end: 105fb45fb;  */

void FUN_105fb4590(long param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if ((((iVar1 != 0) && (*(long *)(param_1 + 0x20) != 0)) && (*(long *)(param_1 + 0x28) != 0)) &&
     (puVar2 = PTR_PTR_1126b2dc8, func_0x00010c06dc40(), (int)puVar2 != 0)) {
    func_0x00010c14ac80(*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105fb45fc; end: 105fb4603; -[SCSaveMessageAccessoryPlugin _scwVersionObservableIfEnabled] */

void FUN_105fb45fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_target_112678178);
  return;
}



/* Entry: 105fb4604; end: 105fb4757; -[SCSaveMessageAccessoryPlugin accessoryParamsForMessage:conversationInformation:] */

void FUN_105fb4604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  func_0x00010be07380(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x00010bfb26a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105fb4758; end: 105fb48ab;  */

void FUN_105fb4758(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf1f3c0();
  puVar3 = PTR_PTR_1126ae6b8;
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR_PTR_1126ae750;
    func_0x00010c0db140(PTR_PTR_1126ae750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0860a0(puVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = *(undefined **)(param_1 + 0x20);
    func_0x00010bfb0d80(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    puVar3 = puVar2;
    func_0x00010c0b8600(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(puVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105fb48ac; end: 105fb493b;  */

void FUN_105fb48ac(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126ae750;
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde8460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c0ec800(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105fb493c; end: 105fb496b; -[SCSaveMessageAccessoryPlugin identifier] */

void FUN_105fb493c(void)

{
  _objc_retain(&PTR____CFConstantStringClassReference_110e355d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)
            (&PTR____CFConstantStringClassReference_110e355d8);
  return;
}



/* Entry: 105fb496c; end: 105fb4973; -[SCSaveMessageAccessoryPlugin isApplicableToMessage:] */

undefined8 FUN_105fb496c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_3;
  func_0x00010c0cb8c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((((uVar2 & 1) == 0) && (uVar1 = param_3, func_0x00010c07f260(), (uVar1 & 1) == 0)) &&
     ((uVar1 = param_3, func_0x00010c083520(), (uVar1 & 1) != 0 ||
      (uVar1 = param_3, func_0x00010c06e580(), (int)uVar1 != 0)))) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105fb4974; end: 105fb497b; -[SCSaveMessageAccessoryPlugin pluginType] */

undefined8 FUN_105fb4974(void)

{
  return 1;
}


