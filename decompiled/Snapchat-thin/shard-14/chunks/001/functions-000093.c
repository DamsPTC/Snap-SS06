/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afc4d74; end: 10afc4da3; -[SCCGamesChatDisplayName initWithFirstName:lastName:] */

void FUN_10afc4d74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127038e8;
  uStack_20 = param_1;
  func_0x00010afc5060();
  func_0x00010afc5058(&uStack_20);
  return;
}



/* Entry: 10afc4da4; end: 10afc4db3; +[SCCGamesChatDisplayName valdiMarshallableObjectDescriptor] */

void FUN_10afc4da4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_firstName_110ca91a0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4db4; end: 10afc4ddf; -[SCCGamesChatGameInfo initWithConversationId:gameSessionId:gameLensId:isGroupChat:source:] */

void FUN_10afc4db4(void)

{
  func_0x00010afc5048(PTR_PTR_1127038f0);
  func_0x00010afc5028();
  return;
}



/* Entry: 10afc4de0; end: 10afc4def; +[SCCGamesChatGameInfo valdiMarshallableObjectDescriptor] */

void FUN_10afc4de0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_conversationId_110ca91e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4df0; end: 10afc4e87; -[SCCGamesChatInputBarContext initWithSendMessage:controller:gameInfo:] */

undefined8 *
FUN_10afc4df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1127038f8;
  uStack_40 = param_1;
  func_0x00010afc5060();
  puVar1 = &uStack_40;
  func_0x00010afc5058(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afc4e88; end: 10afc4e9b; +[SCCGamesChatInputBarContext valdiMarshallableObjectDescriptor] */

void FUN_10afc4e88(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9278;
  param_1[1] = &PTR_DAT_110ca9308;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4e9c; end: 10afc4ecb; -[SCCGamesChatInputBarViewModel initWithViewMode:] */

void FUN_10afc4e9c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703900;
  uStack_20 = param_1;
  func_0x00010afc5060();
  func_0x00010afc5058(&uStack_20);
  return;
}



/* Entry: 10afc4ecc; end: 10afc4edf; +[SCCGamesChatInputBarViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afc4ecc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9328;
  param_1[1] = &PTR_DAT_110ca9358;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4ee0; end: 10afc4f0f; -[SCCGamesChatMessage initWithDisplayName:message:timestampMs:] */

void FUN_10afc4ee0(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afc5048(PTR_PTR_112703908);
  func_0x00010afc5058(auStack_20);
  return;
}



/* Entry: 10afc4f10; end: 10afc4f23; +[SCCGamesChatMessage valdiMarshallableObjectDescriptor] */

void FUN_10afc4f10(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_110ca9368;
  param_1[1] = &PTR_DAT_110ca93e0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4f24; end: 10afc4f4f; -[SCCGamesChatMessageViewContext initWithGameInfo:messagesObservable:controller:deckContainerFactory:safetyReportLauncher:] */

void FUN_10afc4f24(void)

{
  func_0x00010afc5048(PTR_PTR_112703910);
  func_0x00010afc5028();
  return;
}



/* Entry: 10afc4f50; end: 10afc4f63; +[SCCGamesChatMessageViewContext valdiMarshallableObjectDescriptor] */

void FUN_10afc4f50(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca93f0;
  param_1[1] = &PTR_DAT_110ca9480;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4f64; end: 10afc4f93; -[SCCGamesChatMessageViewModel initWithViewMode:] */

void FUN_10afc4f64(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703918;
  uStack_20 = param_1;
  func_0x00010afc5060();
  func_0x00010afc5058(&uStack_20);
  return;
}



/* Entry: 10afc4f94; end: 10afc4fa7; +[SCCGamesChatMessageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10afc4f94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca94b8;
  param_1[1] = &PTR_DAT_110ca94e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4fa8; end: 10afc4fd7; -[SCCTurnBasedGameInfo initWithUsersPending:usersPlayed:winnerUserIds:isFinished:] */

void FUN_10afc4fa8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010afc5048(PTR_PTR_112703920);
  func_0x00010afc5058(auStack_20);
  return;
}



/* Entry: 10afc4fd8; end: 10afc4fe7; +[SCCTurnBasedGameInfo valdiMarshallableObjectDescriptor] */

void FUN_10afc4fd8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca94f8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc4fe8; end: 10afc5017;  */

void FUN_10afc4fe8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afc5018; end: 10afc507b;  */

void FUN_10afc5018(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10afc507c; end: 10afc50b7; +[SCCReportedChatMessageFetcher valdiMarshallableObjectDescriptor] */

void FUN_10afc507c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca95b8;
  param_1[1] = &PTR_DAT_110ca9600;
  param_1[2] = &PTR_DAT_110ca9570;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc50b8; end: 10afc5107;  */

void FUN_10afc50b8(void)

{
  func_0x00010afc542c();
  func_0x00010afc541c();
  func_0x00010afc53e0(FUN_10afc534c);
  func_0x00010afc5434();
  func_0x00010afc53f0();
  func_0x00010afc53fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc5108; end: 10afc511f;  */

void FUN_10afc5108(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010afc511c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2[3],*param_2,param_2[1],param_2[2]);
  return;
}



/* Entry: 10afc5120; end: 10afc516f;  */

void FUN_10afc5120(void)

{
  func_0x00010afc542c();
  func_0x00010afc541c();
  func_0x00010afc53e0(0x10afc5380);
  func_0x00010afc5434();
  func_0x00010afc53f0();
  func_0x00010afc53fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc5170; end: 10afc518b; +[SCCSafetyReportDelegate valdiMarshallableObjectDescriptor] */

void FUN_10afc5170(undefined8 *param_1)

{
  *param_1 = &PTR_s_reportDidComplete_110ca9648;
  param_1[1] = 0;
  param_1[2] = &PTR_s_oob_v_110ca9618;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc518c; end: 10afc51b7;  */

undefined8 FUN_10afc518c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10afc51b8; end: 10afc5207;  */

void FUN_10afc51b8(void)

{
  func_0x00010afc542c();
  func_0x00010afc541c();
  func_0x00010afc53e0(0x10afc53b0);
  func_0x00010afc5434();
  func_0x00010afc53f0();
  func_0x00010afc53fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc5208; end: 10afc5263;  */

undefined8 FUN_10afc5208(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2d0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010afc53fc();
  return param_1;
}



/* Entry: 10afc5264; end: 10afc527f; +[SCCSafetyReportLaunching valdiMarshallableObjectDescriptor] */

void FUN_10afc5264(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9690;
  param_1[1] = &PTR_DAT_110ca96c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc5280; end: 10afc528b; +[SCCSafetyReportPageV2 componentPath] */

undefined ** FUN_10afc5280(void)

{
  return &PTR____CFConstantStringClassReference_110f48318;
}



/* Entry: 10afc528c; end: 10afc52bf; -[SCCSafetyReportPageV2 initWithViewModel:componentContext:runtime:] */

void FUN_10afc528c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112703928;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10afc52c0; end: 10afc530b; -[SCCSafetyReportPageV2 setViewModel:] */

void FUN_10afc52c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x00010afc53fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10afc530c; end: 10afc534b; -[SCCSafetyReportPageV2 viewModel] */

void FUN_10afc530c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc53fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc534c; end: 10afc53df;  */

void FUN_10afc534c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afc53e0; end: 10afc543b;  */

void FUN_10afc53e0(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10afc543c; end: 10afc5457; +[SCCContentItemsFetcher valdiMarshallableObjectDescriptor] */

void FUN_10afc543c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca9710;
  param_1[1] = &PTR_DAT_110ca9740;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc5458; end: 10afc547b; +[SCCReportDelegate valdiMarshallableObjectDescriptor] */

void FUN_10afc5458(undefined8 *param_1)

{
  *param_1 = &PTR_s_reportDidComplete_110ca9780;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca97e0;
  param_1[2] = &PTR_s_oob_v_110ca9750;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc547c; end: 10afc54a7;  */

undefined8 FUN_10afc547c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10afc54a8; end: 10afc5523;  */

void FUN_10afc54a8(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10afc56c4;
  puStack_30 = &UNK_110858448;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x00010afc5700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10afc5524; end: 10afc557b;  */

undefined8 FUN_10afc5524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2d8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_10afc56f4();
  return param_1;
}



/* Entry: 10afc557c; end: 10afc5587; +[SCCAdPostReportPage componentPath] */

undefined ** FUN_10afc557c(void)

{
  return &PTR____CFConstantStringClassReference_110f48338;
}



/* Entry: 10afc5588; end: 10afc55ab; -[SCCAdPostReportPage initWithViewModel:componentContext:runtime:] */

void FUN_10afc5588(void)

{
  func_0x00010afc5708(PTR_PTR_112703930);
  return;
}



/* Entry: 10afc55ac; end: 10afc55e3; -[SCCAdPostReportPage setViewModel:] */

void FUN_10afc55ac(void)

{
  func_0x00010afc571c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc572c();
  func_0x00010afc5700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc55e4; end: 10afc561f; -[SCCAdPostReportPage viewModel] */

void FUN_10afc55e4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10afc56f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc5620; end: 10afc562b; +[SCCReportPageRoot componentPath] */

undefined ** FUN_10afc5620(void)

{
  return &PTR____CFConstantStringClassReference_110f48358;
}



/* Entry: 10afc562c; end: 10afc564f; -[SCCReportPageRoot initWithViewModel:componentContext:runtime:] */

void FUN_10afc562c(void)

{
  func_0x00010afc5708(PTR_PTR_112703938);
  return;
}



/* Entry: 10afc5650; end: 10afc5687; -[SCCReportPageRoot setViewModel:] */

void FUN_10afc5650(void)

{
  func_0x00010afc571c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc572c();
  func_0x00010afc5700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc5688; end: 10afc56c3; -[SCCReportPageRoot viewModel] */

void FUN_10afc5688(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10afc56f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc56c4; end: 10afc56f3;  */

void FUN_10afc56c4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afc56f4; end: 10afc5743;  */

void FUN_10afc56f4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc5744; end: 10afc575f; +[SCCAppinsightsNonFatalsPlatformNonFatalErrorReporter valdiMarshallableObjectDescriptor] */

void FUN_10afc5744(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca97f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc5760; end: 10afc57bf;  */

undefined8 FUN_10afc5760(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2e0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10afc57c0; end: 10afc57db; +[SCCAppinsightsMetadataPlatformMetadataHolder valdiMarshallableObjectDescriptor] */

void FUN_10afc57c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca9820;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc57dc; end: 10afc583b;  */

undefined8 FUN_10afc57dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df2e8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10afc583c; end: 10afc5847; +[SCCChatHeaderAddFriendButton componentPath] */

undefined ** FUN_10afc583c(void)

{
  return &PTR____CFConstantStringClassReference_110f48378;
}



/* Entry: 10afc5848; end: 10afc586b; -[SCCChatHeaderAddFriendButton initWithViewModel:componentContext:runtime:] */

void FUN_10afc5848(void)

{
  FUN_10afc598c(PTR_PTR_112703940);
  return;
}



/* Entry: 10afc586c; end: 10afc58a3; -[SCCChatHeaderAddFriendButton setViewModel:] */

void FUN_10afc586c(void)

{
  func_0x00010afc59a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc59b8();
  func_0x00010afc59a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc58a4; end: 10afc58e3; -[SCCChatHeaderAddFriendButton viewModel] */

void FUN_10afc58a4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc59a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc58e4; end: 10afc58ef; +[SCCChatHeaderChatHeader componentPath] */

undefined ** FUN_10afc58e4(void)

{
  return &PTR____CFConstantStringClassReference_110f48398;
}



/* Entry: 10afc58f0; end: 10afc5913; -[SCCChatHeaderChatHeader initWithViewModel:componentContext:runtime:] */

void FUN_10afc58f0(void)

{
  FUN_10afc598c(PTR_PTR_112703948);
  return;
}



/* Entry: 10afc5914; end: 10afc594b; -[SCCChatHeaderChatHeader setViewModel:] */

void FUN_10afc5914(void)

{
  func_0x00010afc59a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc59b8();
  func_0x00010afc59a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afc594c; end: 10afc598b; -[SCCChatHeaderChatHeader viewModel] */

void FUN_10afc594c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afc59a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afc598c; end: 10afc59c3;  */

void FUN_10afc598c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000008 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSendSuper2_11034d298)();
  return;
}



/* Entry: 10afc59c4; end: 10afc59df; +[SCCReportFlowRendererNativeFormReportedProvider valdiMarshallableObjectDescriptor] */

void FUN_10afc59c4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca9850;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afc59e0; end: 10afc5a6b; -[SCNMessagingExpiredStreakMetadata copyWithZone:] */

void FUN_10afc59e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126da9d8;
  _objc_alloc(PTR_PTR_1126da9d8);
  uVar2 = param_1;
  func_0x00010c25be80(param_1);
  uVar3 = param_1;
  func_0x00010c270aa0(param_1);
  uVar4 = param_1;
  func_0x00010c07c7e0(param_1);
  uVar5 = param_1;
  func_0x00010c07c800(param_1);
  func_0x00010c13c380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c04e4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_initWithStreakCount_timestampMs__1125f1340,uVar2,uVar3,uVar4,uVar5,param_1
            );
  return;
}



/* Entry: 10afc5a6c; end: 10afc5a8f; -[SCNMessagingInteractionInfo copyWithZone:] */

undefined8 FUN_10afc5a6c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc5a90; end: 10afc5a97; -[SCFriendsFeedServices friendsFeedChatMediaPrefetcher] */

undefined8 FUN_10afc5a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc5a98; end: 10afc5a9f; -[SCFriendsFeedServices friendsFeedFetcher] */

undefined8 FUN_10afc5a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc5aa0; end: 10afc5aa7; -[SCFriendsFeedServices friendsFeedActionTextGenerator] */

undefined8 FUN_10afc5aa0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afc5aa8; end: 10afc5aaf; -[SCFriendsFeedServices friendsFeedIconGenerator] */

undefined8 FUN_10afc5aa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afc5ab0; end: 10afc5ab7; -[SCFriendsFeedServices friendsFeedActiveSignalProvider] */

undefined8 FUN_10afc5ab0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afc5ab8; end: 10afc5b17; -[SCFriendsFeedServices .cxx_destruct] */

void FUN_10afc5ab8(long param_1)

{
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



/* Entry: 10afc5b18; end: 10afc5b5f; +[SCFriendsFeedViewDataRequest viewHasPartiallyAppearedAtLeastOnce] */

void FUN_10afc5b18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cb150;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afc5b60; end: 10afc5b83; -[SCFriendsFeedViewDataRequest copyWithZone:] */

undefined8 FUN_10afc5b60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc5b84; end: 10afc5b8b; -[SCFriendsFeedViewDataRequest hash] */

undefined8 FUN_10afc5b84(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afc5b8c; end: 10afc5bcf; -[SCFriendsFeedViewDataRequest internalInit] */

void FUN_10afc5b8c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703958;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afc5bd0; end: 10afc5c57; -[SCFriendsFeedViewDataRequest isEqual:] */

bool FUN_10afc5bd0(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afc5c58; end: 10afc5c73; -[SCFriendsFeedViewDataRequest matchViewHasPartiallyAppearedAtLeastOnce:] */

void FUN_10afc5c58(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010afc5c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10afc5c74; end: 10afc5cfb; -[SCFriendsFeedActivePresenceInfo initWithPresenceContent:isPeeking:] */

undefined1 *
FUN_10afc5c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112703960;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc5cfc; end: 10afc5d1f; -[SCFriendsFeedActivePresenceInfo copyWithZone:] */

undefined8 FUN_10afc5cfc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc5d20; end: 10afc5d8b; -[SCFriendsFeedActivePresenceInfo hash] */

undefined8 * FUN_10afc5d20(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afc5e10;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10afc5e10;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10afc5e10;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10afc5e10:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10afc5d8c; end: 10afc5e2b; -[SCFriendsFeedActivePresenceInfo isEqual:] */

long FUN_10afc5d8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc5e10;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10afc5e10;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10afc5e10;
    }
  }
  lVar3 = 1;
LAB_10afc5e10:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc5e2c; end: 10afc5e33; -[SCFriendsFeedActivePresenceInfo presenceContent] */

undefined8 FUN_10afc5e2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc5e34; end: 10afc5e3b; -[SCFriendsFeedActivePresenceInfo isPeeking] */

undefined1 FUN_10afc5e34(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc5e3c; end: 10afc5e47; -[SCFriendsFeedActivePresenceInfo .cxx_destruct] */

void FUN_10afc5e3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afc5e48; end: 10afc5f13; -[SCFriendsFeedActiveCall initWithIsRinging:localPublishedMediaType:caller:callParticipants:callMediaType:] */

undefined1 *
FUN_10afc5e48(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703968;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10afc5f14; end: 10afc5f37; -[SCFriendsFeedActiveCall copyWithZone:] */

undefined8 FUN_10afc5f14(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc5f38; end: 10afc5fc7; -[SCFriendsFeedActiveCall hash] */

ulong * FUN_10afc5f38(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = (ulong)*(byte *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lStack_48 = -lVar5;
  if (-1 < lVar5) {
    lStack_48 = lVar5;
  }
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_10afc6078:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afc6084;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(char *)((long)puVar3 + 8) == param_3[8] &&
         (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10afc6084;
        }
        goto LAB_10afc6078;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afc6084:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 10afc5fc8; end: 10afc609f; -[SCFriendsFeedActiveCall isEqual:] */

long FUN_10afc5fc8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afc6078:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afc6084;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10afc6084;
        }
        goto LAB_10afc6078;
      }
    }
    lVar3 = 0;
  }
LAB_10afc6084:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afc60a0; end: 10afc60a7; -[SCFriendsFeedActiveCall isRinging] */

undefined1 FUN_10afc60a0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc60a8; end: 10afc60af; -[SCFriendsFeedActiveCall localPublishedMediaType] */

undefined8 FUN_10afc60a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc60b0; end: 10afc60b7; -[SCFriendsFeedActiveCall caller] */

undefined8 FUN_10afc60b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afc60b8; end: 10afc60bf; -[SCFriendsFeedActiveCall callParticipants] */

undefined8 FUN_10afc60b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afc60c0; end: 10afc60c7; -[SCFriendsFeedActiveCall callMediaType] */

undefined8 FUN_10afc60c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afc60c8; end: 10afc60f7; -[SCFriendsFeedActiveCall .cxx_destruct] */

void FUN_10afc60c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afc60f8; end: 10afc6153; -[SCFriendsFeedCall initWithIsReceivedUnread:callType:callMediaType:] */

void FUN_10afc60f8(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112703970;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  return;
}



/* Entry: 10afc6154; end: 10afc6177; -[SCFriendsFeedCall copyWithZone:] */

undefined8 FUN_10afc6154(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afc6178; end: 10afc61db; -[SCFriendsFeedCall hash] */

ulong * FUN_10afc6178(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x10));
  uStack_20 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c3191c(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar1 == (ulong *)param_3) {
    puVar3 = (undefined1 *)0x1;
  }
  else {
    puVar3 = (undefined1 *)0x0;
    if ((puVar1 != (ulong *)0x0) && (param_3 != (undefined1 *)0x0)) {
      puVar3 = (undefined1 *)puVar1;
      _objc_opt_class(puVar1);
      puVar2 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar3);
      if ((((ulong)puVar2 & 1) == 0) ||
         ((*(char *)((long)puVar1 + 8) != param_3[8] ||
          (*(long *)((long)puVar1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        puVar3 = (undefined1 *)0x0;
      }
      else {
        puVar3 = (undefined1 *)(ulong)(*(long *)((long)puVar1 + 0x18) == *(long *)(param_3 + 0x18));
      }
    }
  }
  _objc_release(param_3);
  return (ulong *)puVar3;
}



/* Entry: 10afc61dc; end: 10afc6283; -[SCFriendsFeedCall isEqual:] */

bool FUN_10afc61dc(ulong param_1,undefined8 param_2,ulong param_3)

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
      if (((uVar3 & 1) == 0) ||
         ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
          (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afc6284; end: 10afc628b; -[SCFriendsFeedCall isReceivedUnread] */

undefined1 FUN_10afc6284(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afc628c; end: 10afc6293; -[SCFriendsFeedCall callType] */

undefined8 FUN_10afc628c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afc6294; end: 10afc629b; -[SCFriendsFeedCall callMediaType] */

undefined8 FUN_10afc6294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}


