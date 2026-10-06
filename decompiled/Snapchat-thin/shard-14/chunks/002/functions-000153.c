/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b047ff8; end: 10b048067; -[SCContentFeedCardConverter convertFeedCardToStoryCardWithPayload:] */

void FUN_10b047ff8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b048068; end: 10b0481d7; +[SCContentFeedCardConverter invokeWithJSRuntimeProvider:payload:completionHandler:] */

void FUN_10b048068(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b04814c;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0481d8; end: 10b0481fb; +[SCContentFeedCardConverter valdiMarshallableObjectDescriptor] */

void FUN_10b0481d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb1b70;
  param_1[1] = &PTR_DAT_110cb1ba0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b0481fc; end: 10b048207; +[SCCFriendingClientCreateRecentlyActiveService modulePath] */

undefined ** FUN_10b0481fc(void)

{
  return &PTR____CFConstantStringClassReference_110f52a58;
}



/* Entry: 10b048208; end: 10b04820f; +[SCCFriendingClientCreateRecentlyActiveService asyncStrictMode] */

undefined8 FUN_10b048208(void)

{
  return 0;
}



/* Entry: 10b048210; end: 10b0482c7; -[SCCFriendingClientCreateRecentlyActiveService createNativeCompatRecentlyActiveServiceWithQuerySourceNumeric:grpcServiceFactory:cofStore:friendStore:groupStore:] */

void FUN_10b048210(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  
  _objc_retain(in_x5);
  func_0x00010b0485bc();
  func_0x00010b0485b4();
  func_0x00010b0485a4();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  (**(code **)(param_2 + 0x10))(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048594();
  _objc_release(in_x4);
  func_0x00010b0485ac();
  func_0x00010b04859c();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b0482c8; end: 10b04840f; +[SCCFriendingClientCreateRecentlyActiveService invokeWithJSRuntimeProvider:querySourceNumeric:grpcServiceFactory:cofStore:friendStore:groupStore:completionHandler:] */

void FUN_10b0482c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  func_0x00010b0485bc();
  func_0x00010b0485b4();
  func_0x00010b0485a4();
  _objc_retain(param_9);
  (**(code **)(param_4 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b048410;
  puStack_90 = &UNK_110948760;
  lStack_88 = param_4;
  uStack_80 = param_5;
  uStack_78 = param_6;
  uStack_70 = param_7;
  uStack_68 = param_8;
  uStack_60 = param_9;
  uStack_58 = param_1;
  _objc_retain(param_9);
  func_0x00010b0485a4();
  func_0x00010b0485b4();
  func_0x00010b0485bc();
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf85140(param_4,param_3,&puStack_a8);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lStack_88);
  _objc_release(param_9);
  func_0x00010b04859c();
  func_0x00010b0485ac();
  _objc_release(param_6);
  func_0x00010b048594();
  _objc_release(param_4);
  return;
}



/* Entry: 10b048410; end: 10b04849b;  */

void FUN_10b048410(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c5850;
  func_0x00010bfbc0e0(PTR_PTR_1126c5850,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))(*(undefined8 *)(param_1 + 0x50));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x48) + 0x10))(*(long *)(param_1 + 0x48),puVar2);
  func_0x00010b04859c();
  func_0x00010b0485ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b04849c; end: 10b0484e3; +[SCCFriendingClientCreateRecentlyActiveService valdiMarshallableObjectDescriptor] */

void FUN_10b04849c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb1be0;
  param_1[1] = &PTR_s_SCComposerNetworkingGrpcServiceF_110cb1c10;
  param_1[2] = &PTR_DAT_110cb1bb0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b0484e4; end: 10b04855f;  */

void FUN_10b0484e4(undefined8 param_1)

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
  pcStack_38 = FUN_10b048560;
  puStack_30 = &UNK_110cb1c40;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  FUN_10b048594();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b048560; end: 10b048593;  */

void FUN_10b048560(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b048594; end: 10b0485c3;  */

void FUN_10b048594(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b0485c4; end: 10b0485d7; +[SCCLensActionHandling valdiMarshallableObjectDescriptor] */

void FUN_10b0485c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb1c70;
  param_1[1] = &PTR_DAT_110cb1d90;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b0485d8; end: 10b048637;  */

undefined8 FUN_10b0485d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df460;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b048638; end: 10b04865f; +[SCCLensPlusExclusiveLensesProviding valdiMarshallableObjectDescriptor] */

void FUN_10b048638(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb1dc0;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb1df0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b048660; end: 10b04866b; +[SCCMutualFriendsDataProviderFactory modulePath] */

undefined ** FUN_10b048660(void)

{
  return &PTR____CFConstantStringClassReference_110f52a78;
}



/* Entry: 10b04866c; end: 10b048673; +[SCCMutualFriendsDataProviderFactory asyncStrictMode] */

undefined8 FUN_10b04866c(void)

{
  return 0;
}



/* Entry: 10b048674; end: 10b0486d3; -[SCCMutualFriendsDataProviderFactory createMutualFriendsDataProviderWithFriendStore:] */

void FUN_10b048674(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_10b048b28();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048b4c();
  _objc_release(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b0486d4; end: 10b04883f; +[SCCMutualFriendsDataProviderFactory invokeWithJSRuntimeProvider:friendStore:completionHandler:] */

void FUN_10b0486d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10b0487b4;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  func_0x00010b048b4c();
  _objc_release(param_3);
  return;
}



/* Entry: 10b048840; end: 10b048863; +[SCCMutualFriendsDataProviderFactory valdiMarshallableObjectDescriptor] */

void FUN_10b048840(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb1e08;
  param_1[1] = &PTR_s_SCCFriendStoring_110cb1e38;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b048864; end: 10b0488a7; +[SCCIMutualFriendsDataProvider valdiMarshallableObjectDescriptor] */

void FUN_10b048864(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb1e80;
  param_1[1] = &PTR_DAT_110cb1ec8;
  param_1[2] = &PTR_DAT_110cb1e50;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b0488a8; end: 10b048923;  */

void FUN_10b0488a8(undefined8 param_1)

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
  pcStack_38 = FUN_10b048af8;
  puStack_30 = &UNK_1108fbfa0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x00010b048b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b048924; end: 10b04892f; +[SCCMutualFriendsPage componentPath] */

undefined ** FUN_10b048924(void)

{
  return &PTR____CFConstantStringClassReference_110f52a98;
}



/* Entry: 10b048930; end: 10b04894f; -[SCCMutualFriendsPage initWithViewModel:componentContext:runtime:] */

void FUN_10b048930(void)

{
  func_0x00010b048b38(PTR_PTR_112704bb8);
  return;
}



/* Entry: 10b048950; end: 10b048983; -[SCCMutualFriendsPage setViewModel:] */

void FUN_10b048950(void)

{
  FUN_10b048b28();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048b54();
  func_0x00010b048b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b048984; end: 10b0489bf; -[SCCMutualFriendsPage viewModel] */

void FUN_10b048984(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b0489c0; end: 10b0489cb; +[SCCMutualFriendsSummaryView componentPath] */

undefined ** FUN_10b0489c0(void)

{
  return &PTR____CFConstantStringClassReference_110f52ab8;
}



/* Entry: 10b0489cc; end: 10b0489eb; -[SCCMutualFriendsSummaryView initWithViewModel:componentContext:runtime:] */

void FUN_10b0489cc(void)

{
  func_0x00010b048b38(PTR_PTR_112704bc0);
  return;
}



/* Entry: 10b0489ec; end: 10b048a1f; -[SCCMutualFriendsSummaryView setViewModel:] */

void FUN_10b0489ec(void)

{
  FUN_10b048b28();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048b54();
  func_0x00010b048b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b048a20; end: 10b048a5b; -[SCCMutualFriendsSummaryView viewModel] */

void FUN_10b048a20(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b048a5c; end: 10b048a67; +[SCCMutualFriendsUpsellModal componentPath] */

undefined ** FUN_10b048a5c(void)

{
  return &PTR____CFConstantStringClassReference_110f52ad8;
}



/* Entry: 10b048a68; end: 10b048a87; -[SCCMutualFriendsUpsellModal initWithViewModel:componentContext:runtime:] */

void FUN_10b048a68(void)

{
  func_0x00010b048b38(PTR_PTR_112704bc8);
  return;
}



/* Entry: 10b048a88; end: 10b048abb; -[SCCMutualFriendsUpsellModal setViewModel:] */

void FUN_10b048a88(void)

{
  FUN_10b048b28();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048b54();
  func_0x00010b048b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b048abc; end: 10b048af7; -[SCCMutualFriendsUpsellModal viewModel] */

void FUN_10b048abc(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048b4c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b048af8; end: 10b048b27;  */

void FUN_10b048af8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b048b28; end: 10b048b77;  */

void FUN_10b048b28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b048b78; end: 10b048b9b; +[SCCChatEligibilityProviding valdiMarshallableObjectDescriptor] */

void FUN_10b048b78(undefined8 *param_1)

{
  *param_1 = &PTR_s_isCurrentUserNonFriendMessagingE_110cb1f08;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_110cb1ed8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b048b9c; end: 10b048bc3;  */

undefined8 FUN_10b048b9c(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b048bc4; end: 10b048c3f;  */

void FUN_10b048bc4(undefined8 param_1)

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
  pcStack_38 = FUN_10b048de0;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x00010b048e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10b048c40; end: 10b048c97;  */

undefined8 FUN_10b048c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df470;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_10b048e10();
  return param_1;
}



/* Entry: 10b048c98; end: 10b048ca3; +[SCCChatNonFriendOnboardingPromptTrayView componentPath] */

undefined ** FUN_10b048c98(void)

{
  return &PTR____CFConstantStringClassReference_110f52af8;
}



/* Entry: 10b048ca4; end: 10b048cc7; -[SCCChatNonFriendOnboardingPromptTrayView initWithViewModel:componentContext:runtime:] */

void FUN_10b048ca4(void)

{
  func_0x00010b048e24(PTR_PTR_112704bd0);
  return;
}



/* Entry: 10b048cc8; end: 10b048cff; -[SCCChatNonFriendOnboardingPromptTrayView setViewModel:] */

void FUN_10b048cc8(void)

{
  func_0x00010b048e38();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048e48();
  func_0x00010b048e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b048d00; end: 10b048d3b; -[SCCChatNonFriendOnboardingPromptTrayView viewModel] */

void FUN_10b048d00(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b048e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b048d3c; end: 10b048d47; +[SCCChatNonFriendRecipientPromptView componentPath] */

undefined ** FUN_10b048d3c(void)

{
  return &PTR____CFConstantStringClassReference_110f52b18;
}



/* Entry: 10b048d48; end: 10b048d6b; -[SCCChatNonFriendRecipientPromptView initWithViewModel:componentContext:runtime:] */

void FUN_10b048d48(void)

{
  func_0x00010b048e24(PTR_PTR_112704bd8);
  return;
}



/* Entry: 10b048d6c; end: 10b048da3; -[SCCChatNonFriendRecipientPromptView setViewModel:] */

void FUN_10b048d6c(void)

{
  func_0x00010b048e38();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b048e48();
  func_0x00010b048e1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b048da4; end: 10b048ddf; -[SCCChatNonFriendRecipientPromptView viewModel] */

void FUN_10b048da4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10b048e10();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b048de0; end: 10b048e0f;  */

void FUN_10b048de0(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b048e10; end: 10b048e53;  */

void FUN_10b048e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b048e54; end: 10b048e5f; +[SCSnapshotsOperaOverlayView componentPath] */

undefined ** FUN_10b048e54(void)

{
  return &PTR____CFConstantStringClassReference_110f52b38;
}



/* Entry: 10b048e60; end: 10b048e93; -[SCSnapshotsOperaOverlayView initWithViewModel:componentContext:runtime:] */

void FUN_10b048e60(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_112704be0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10b048e94; end: 10b048ee3; -[SCSnapshotsOperaOverlayView setViewModel:] */

void FUN_10b048e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b048ee4; end: 10b048f27; -[SCSnapshotsOperaOverlayView viewModel] */

void FUN_10b048ee4(undefined8 param_1)

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



/* Entry: 10b048f28; end: 10b048f33; +[SCCSqliteUserScopeDbRootPath modulePath] */

undefined ** FUN_10b048f28(void)

{
  return &PTR____CFConstantStringClassReference_110f52b58;
}



/* Entry: 10b048f34; end: 10b048f3b; +[SCCSqliteUserScopeDbRootPath asyncStrictMode] */

undefined8 FUN_10b048f34(void)

{
  return 0;
}



/* Entry: 10b048f3c; end: 10b048f83; -[SCCSqliteUserScopeDbRootPath userScopeDbRootPath] */

void FUN_10b048f3c(long param_1)

{
  long lVar1;
  
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b048f84; end: 10b049037; +[SCCSqliteUserScopeDbRootPath invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10b048f84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10b049038;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b049038; end: 10b0490bf;  */

void FUN_10b049038(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126dbd70;
  func_0x00010bfbc0e0(PTR_PTR_1126dbd70,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0490c0; end: 10b0490db; +[SCCSqliteUserScopeDbRootPath valdiMarshallableObjectDescriptor] */

void FUN_10b0490c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110cb1f38;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b0490dc; end: 10b04910f; +[SCComposerSUPBooleanRepo valdiMarshallableObjectDescriptor] */

void FUN_10b0490dc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb1fb0;
  param_1[1] = &PTR_DAT_110cb2040;
  param_1[2] = &PTR_DAT_110cb1f68;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b049110; end: 10b04915f;  */

void FUN_10b049110(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(FUN_10b049848);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b049160; end: 10b04917b;  */

void FUN_10b049160(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b049178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1);
  return;
}



/* Entry: 10b04917c; end: 10b0491cb;  */

void FUN_10b04917c(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b049870);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0491cc; end: 10b0491ef; +[SCComposerSUPLongRepo valdiMarshallableObjectDescriptor] */

void FUN_10b0491cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb20a0;
  param_1[1] = &PTR_DAT_110cb2130;
  param_1[2] = &PTR_DAT_110cb2058;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b0491f0; end: 10b04923f;  */

void FUN_10b0491f0(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b0498a0);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b049240; end: 10b049263; +[SCComposerSUPRepo valdiMarshallableObjectDescriptor] */

void FUN_10b049240(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2148;
  param_1[1] = &PTR_DAT_110cb21a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b049264; end: 10b049283; +[SCComposerSUPStoring valdiMarshallableObjectDescriptor] */

void FUN_10b049264(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb22e8;
  param_1[1] = &PTR_s_SCBridgeObservable_110cb2420;
  param_1[2] = &PTR_s_ob_v_110cb21c8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b049284; end: 10b0492ab;  */

undefined8 FUN_10b049284(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b0492ac; end: 10b0492fb;  */

void FUN_10b0492ac(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b0498c0);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0492fc; end: 10b049327;  */

undefined8 FUN_10b0492fc(void)

{
  code *extraout_x8;
  
  func_0x00010b049b0c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b049328; end: 10b049377;  */

void FUN_10b049328(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b0498f0);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b049378; end: 10b04939f;  */

undefined8 FUN_10b049378(void)

{
  code *extraout_x8;
  
  func_0x00010b049b0c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b0493a0; end: 10b0493ef;  */

void FUN_10b0493a0(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b049914);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0493f0; end: 10b04940b;  */

void FUN_10b0493f0(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b049408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2[2],*param_2,param_2[1],*(uint *)(param_2 + 3) & 1);
  return;
}



/* Entry: 10b04940c; end: 10b04945b;  */

void FUN_10b04940c(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b049938);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04945c; end: 10b04947f;  */

undefined8 FUN_10b04945c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b049480; end: 10b0494cf;  */

void FUN_10b049480(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b04995c);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0494d0; end: 10b0494fb;  */

undefined8 FUN_10b0494d0(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[3],*param_2,param_2[1],param_2[4]);
  return 0;
}



/* Entry: 10b0494fc; end: 10b04954b;  */

void FUN_10b0494fc(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b049984);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04954c; end: 10b049573;  */

undefined8 FUN_10b04954c(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[2],param_2[3],*param_2,param_2[1]);
  return 0;
}



/* Entry: 10b049574; end: 10b0495c3;  */

void FUN_10b049574(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b0499a8);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b0495c4; end: 10b0495d7;  */

void FUN_10b0495c4(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0495d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2[2],param_2[3],*param_2,param_2[1]);
  return;
}



/* Entry: 10b0495d8; end: 10b049627;  */

void FUN_10b0495d8(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b0499c8);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b049628; end: 10b04964b;  */

undefined8 FUN_10b049628(void)

{
  code *extraout_x8;
  
  func_0x00010b049b0c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b04964c; end: 10b04969b;  */

void FUN_10b04964c(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b0499e8);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b04969c; end: 10b0496bf;  */

undefined8 FUN_10b04969c(void)

{
  code *extraout_x8;
  
  func_0x00010b049b0c();
  (*extraout_x8)();
  return 0;
}



/* Entry: 10b0496c0; end: 10b04970f;  */

void FUN_10b0496c0(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b049a0c);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b049710; end: 10b049727;  */

void FUN_10b049710(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b049724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2[2],*param_2,param_2[1],param_2[3]);
  return;
}



/* Entry: 10b049728; end: 10b049777;  */

void FUN_10b049728(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b049a30);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b049778; end: 10b0497d3;  */

undefined8 FUN_10b049778(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df478;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010b049ad8();
  return param_1;
}



/* Entry: 10b0497d4; end: 10b0497f7; +[SCComposerSUPStringRepo valdiMarshallableObjectDescriptor] */

void FUN_10b0497d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2478;
  param_1[1] = &PTR_DAT_110cb2508;
  param_1[2] = &PTR_DAT_110cb2430;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b0497f8; end: 10b049847;  */

void FUN_10b0497f8(void)

{
  func_0x00010b049ae0();
  func_0x00010b049a9c();
  func_0x00010b049a74(0x10b049a54);
  func_0x00010b049ae8();
  func_0x00010b049a90();
  func_0x00010b049ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b049848; end: 10b049a73;  */

void FUN_10b049848(undefined8 param_1)

{
  code *extraout_x8;
  
  func_0x00010b049af0();
  (*extraout_x8)(param_1,0);
  return;
}



/* Entry: 10b049a74; end: 10b049b3f;  */

void FUN_10b049a74(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b049b40; end: 10b049b63; +[SCComposerPageLauncher valdiMarshallableObjectDescriptor] */

void FUN_10b049b40(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110cb2610;
  param_1[1] = &PTR_DAT_110cb2670;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b049b64; end: 10b049b6f; +[SCCSearchApiClientCreateRemoteSearchserviceClient modulePath] */

undefined ** FUN_10b049b64(void)

{
  return &PTR____CFConstantStringClassReference_110f52b78;
}



/* Entry: 10b049b70; end: 10b049b77; +[SCCSearchApiClientCreateRemoteSearchserviceClient asyncStrictMode] */

undefined8 FUN_10b049b70(void)

{
  return 0;
}



/* Entry: 10b049b78; end: 10b049c0f; -[SCCSearchApiClientCreateRemoteSearchserviceClient createNativeCompatRemoteSearchserviceClientWithNetworkingClient:userInfoProvider:opts:] */

void FUN_10b049b78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010b049df4();
  func_0x00010b049de4();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  func_0x00010b049dec();
  func_0x00010b049ddc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b049c10; end: 10b049d2f; +[SCCSearchApiClientCreateRemoteSearchserviceClient invokeWithJSRuntimeProvider:networkingClient:userInfoProvider:opts:completionHandler:] */

void FUN_10b049c10(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  func_0x00010b049df4();
  func_0x00010b049de4();
  _objc_retain(param_7);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10b049d30;
  puStack_70 = &UNK_110852488;
  lStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  uStack_48 = param_7;
  _objc_retain(param_7);
  func_0x00010b049de4();
  func_0x00010b049df4();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_88);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(lStack_68);
  func_0x00010b049ddc();
  func_0x00010b049dec();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}


