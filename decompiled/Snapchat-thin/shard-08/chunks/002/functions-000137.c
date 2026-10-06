/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e654e8; end: 105e654fb; +[SCCSendToStoryConfig valdiMarshallableObjectDescriptor] */

void FUN_105e654e8(undefined8 *param_1)

{
  *param_1 = &PTR_s_storyType_1108edf88;
  param_1[1] = &PTR_DAT_1108edfd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e654fc; end: 105e65517; +[SCCSendToStoryMetadataProvider valdiMarshallableObjectDescriptor] */

void FUN_105e654fc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee018;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_1108edfe8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65518; end: 105e65533; +[SCCSendToStoryOnboardingManager valdiMarshallableObjectDescriptor] */

void FUN_105e65518(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee0c0;
  param_1[1] = 0;
  param_1[2] = &PTR_s_ob_v_1108ee090;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e65534; end: 105e6553f; +[SCCSendToRootComponent componentPath] */

undefined ** FUN_105e65534(void)

{
  return &PTR____CFConstantStringClassReference_110e2cab8;
}



/* Entry: 105e65540; end: 105e65573; -[SCCSendToRootComponent initWithViewModel:componentContext:runtime:] */

void FUN_105e65540(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed5f0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105e65574; end: 105e655bf; -[SCCSendToRootComponent setViewModel:] */

void FUN_105e65574(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e655c0; end: 105e655ff; -[SCCSendToRootComponent viewModel] */

void FUN_105e655c0(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e65770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e65600; end: 105e65717;  */

void FUN_105e65600(void)

{
  func_0x000105e65788();
  return;
}



/* Entry: 105e65718; end: 105e657a3;  */

void FUN_105e65718(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e657a4; end: 105e6580f; -[SCCSendToRootContextFactory initWithRootDependencies:] */

undefined1 * FUN_105e657a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ed5f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000105e65de4();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  func_0x000105e65ddc();
  return (undefined1 *)puVar1;
}



/* Entry: 105e65810; end: 105e65dcf; -[SCCSendToRootContextFactory contextWithPageConfig:pageCallbacks:friendStore:sendToRecipientFriends:suggestedFriendStore:incomingFriendStore:groupStore:contactUserStore:addressBookStore:grpcServiceFactory:networkingClient:friendmojiProvider:rankedPostableDestinationsStore:replyDataStore:shareDestinationFetcher:deckHierarchy:rankedRecipientsDataStore:listStore:memberRolePresenter:snappableEntityIdsObservable:managedProfilesProvider:sessionVisibilityLogger:trayPositionObservable:isPlusSubscriber:alertPresenter:notificationPresenter:actionSheetPresenter:previewViewFactory:contactSyncViewFactory:locationDependencies:webLauncher:navigator:supStore:performanceLogger:storyOnboardingManager:storyMetadataProvider:nativeOnboardingPresenter:storySummaryInfoStore:locationStore:] */

void FUN_105e65810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c52c8;
  _objc_retain();
  _objc_retain(param_40);
  _objc_retain(param_39);
  _objc_retain(param_38);
  _objc_retain(param_37);
  _objc_retain(param_36);
  _objc_retain(param_35);
  _objc_retain(param_34);
  _objc_retain(param_33);
  func_0x000105e65de4();
  _objc_retain(param_31);
  _objc_retain(param_30);
  _objc_retain(param_29);
  _objc_retain(param_28);
  _objc_retain(param_27);
  _objc_retain(param_26);
  _objc_retain(param_25);
  _objc_retain(param_24);
  _objc_retain(param_23);
  _objc_retain(param_22);
  _objc_retain(param_21);
  _objc_retain(param_20);
  _objc_retain(param_19);
  _objc_retain(param_18);
  _objc_retain(param_17);
  _objc_retain(param_16);
  _objc_retain(param_15);
  _objc_retain(param_14);
  _objc_retain(param_13);
  _objc_retain(param_12);
  _objc_retain(param_11);
  func_0x000105e65de4();
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  func_0x00010c1d7fa0();
  _objc_release(param_3);
  func_0x00010c1d7f20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1a0100(puVar1,param_2,param_5);
  _objc_release(param_5);
  func_0x00010c1fc6c0(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c20f980(puVar1,param_2,param_7);
  _objc_release(param_7);
  func_0x00010c1abec0(puVar1,param_2,param_8);
  _objc_release(param_8);
  func_0x00010c1a4aa0(puVar1,param_2,param_9);
  _objc_release(param_9);
  func_0x00010c181760(puVar1,param_2,param_10);
  func_0x000105e65ddc();
  func_0x00010c165c40(puVar1,param_2,param_11);
  _objc_release(param_11);
  func_0x00010c1a4d00(puVar1);
  _objc_release(param_12);
  func_0x00010c1cc960(puVar1);
  _objc_release(param_13);
  func_0x00010c1a0660(puVar1);
  _objc_release(param_14);
  func_0x00010c1e7100(puVar1);
  _objc_release(param_15);
  func_0x00010c1eb020(puVar1);
  _objc_release(param_16);
  func_0x00010c1febc0(puVar1);
  _objc_release(param_17);
  func_0x00010c18a240(puVar1);
  _objc_release(param_18);
  func_0x00010c1e7120(puVar1,param_2,param_19);
  func_0x000105e65ddc();
  func_0x00010c1be1c0(puVar1);
  _objc_release(param_20);
  func_0x00010c1c5a00(puVar1,param_2,param_21);
  func_0x000105e65ddc();
  func_0x00010c206180(puVar1,param_2,param_22);
  func_0x000105e65ddc();
  func_0x00010c1c1ba0(puVar1,param_2,param_23);
  func_0x000105e65ddc();
  func_0x00010c1fdf40(puVar1,param_2,param_24);
  func_0x000105e65ddc();
  func_0x00010c219fa0(puVar1,param_2,param_25);
  func_0x000105e65ddc();
  func_0x00010c1b3600(puVar1,param_2,param_26);
  func_0x000105e65ddc();
  func_0x00010c166b20(puVar1,param_2,param_27);
  func_0x000105e65ddc();
  func_0x00010c1ce4c0(puVar1,param_2,param_28);
  func_0x000105e65ddc();
  func_0x00010c161e00(puVar1,param_2,param_29);
  func_0x000105e65ddc();
  func_0x00010c1e2460(puVar1,param_2,param_30);
  func_0x000105e65ddc();
  func_0x00010c1816a0(puVar1,param_2,param_31);
  func_0x000105e65ddc();
  func_0x00010c1bf960(puVar1,param_2,param_32);
  func_0x000105e65ddc();
  func_0x00010c224e20(puVar1,param_2,param_33);
  func_0x000105e65ddc();
  func_0x00010c1cba60(puVar1,param_2,param_34);
  func_0x000105e65ddc();
  func_0x00010c20fd40(puVar1,param_2,param_35);
  func_0x000105e65ddc();
  func_0x00010c1da900(puVar1,param_2,param_36);
  func_0x000105e65ddc();
  func_0x00010c20d580(puVar1,param_2,param_37);
  func_0x000105e65ddc();
  func_0x00010c20d520(puVar1,param_2,param_38);
  func_0x000105e65ddc();
  func_0x00010c1cb480(puVar1,param_2,param_39);
  func_0x000105e65ddc();
  func_0x00010c20dca0(puVar1,param_2,param_40);
  func_0x000105e65ddc();
  func_0x00010c1bfde0(puVar1,param_2,param_41);
  func_0x000105e65ddc();
  func_0x00010c1ee660(puVar1,param_2,*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e65dd0; end: 105e65deb; -[SCCSendToRootContextFactory .cxx_destruct] */

void FUN_105e65dd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105e65dec; end: 105e65e47; -[SCCSendToRootContextServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e65dec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c52d0;
  _objc_alloc(PTR_PTR_1126c52d0);
  param_1 = param_1 + _DAT_112738278;
  _objc_loadWeakRetained(param_1);
  func_0x00010c040240(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e65e48; end: 105e65e67; -[SCCSendToRootContextServiceProvider rootDependencies] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e65e48(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112738278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e65e68; end: 105e65e7b; -[SCCSendToRootContextServiceProvider setRootDependencies:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e65e68(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112738278,param_3);
  return;
}



/* Entry: 105e65e7c; end: 105e65e8b; -[SCCSendToRootContextServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e65e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738278);
  return;
}



/* Entry: 105e65e8c; end: 105e65e97; +[SCCCreatePostCreatePostComponent componentPath] */

undefined ** FUN_105e65e8c(void)

{
  return &PTR____CFConstantStringClassReference_110e2cad8;
}



/* Entry: 105e65e98; end: 105e65ecb; -[SCCCreatePostCreatePostComponent initWithViewModel:componentContext:runtime:] */

void FUN_105e65e98(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed600;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 105e65ecc; end: 105e65f1b; -[SCCCreatePostCreatePostComponent setViewModel:] */

void FUN_105e65ecc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105e65f1c; end: 105e65f5f; -[SCCCreatePostCreatePostComponent viewModel] */

void FUN_105e65f1c(undefined8 param_1)

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



/* Entry: 105e65f60; end: 105e65f6b; +[SCRecentsRankingCreateTurnEventHandler modulePath] */

undefined ** FUN_105e65f60(void)

{
  return &PTR____CFConstantStringClassReference_110e2caf8;
}



/* Entry: 105e65f6c; end: 105e65f73; +[SCRecentsRankingCreateTurnEventHandler asyncStrictMode] */

undefined8 FUN_105e65f6c(void)

{
  return 0;
}



/* Entry: 105e65f74; end: 105e65fdb; -[SCRecentsRankingCreateTurnEventHandler createTurnEventHandlerWithSignedInUserId:] */

void FUN_105e65f74(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e66310();
  func_0x000105e66330();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e65fdc; end: 105e66123; +[SCRecentsRankingCreateTurnEventHandler invokeWithJSRuntimeProvider:signedInUserId:completionHandler:] */

void FUN_105e65fdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  func_0x000105e66338();
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105e660ac;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  func_0x000105e66338();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  func_0x000105e66330();
  func_0x000105e66310();
  func_0x000105e66340();
  return;
}



/* Entry: 105e66124; end: 105e66137; +[SCRecentsRankingCreateTurnEventHandler valdiMarshallableObjectDescriptor] */

void FUN_105e66124(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee360;
  param_1[1] = &PTR_DAT_1108ee390;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105e66138; end: 105e66143; +[SCRecentsRankingCreateTurnStateProvider modulePath] */

undefined ** FUN_105e66138(void)

{
  return &PTR____CFConstantStringClassReference_110e2cb18;
}



/* Entry: 105e66144; end: 105e6614b; +[SCRecentsRankingCreateTurnStateProvider asyncStrictMode] */

undefined8 FUN_105e66144(void)

{
  return 0;
}



/* Entry: 105e6614c; end: 105e6618f; -[SCRecentsRankingCreateTurnStateProvider createTurnStateProvider] */

void FUN_105e6614c(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e66310();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105e66190; end: 105e66237; +[SCRecentsRankingCreateTurnStateProvider invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_105e66190(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  pcStack_40 = FUN_105e66238;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x000105e66338();
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  func_0x000105e66310();
  func_0x000105e66330();
  return;
}



/* Entry: 105e66238; end: 105e662ab;  */

void FUN_105e66238(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c52e0;
  func_0x00010bfbc0e0(PTR_PTR_1126c52e0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105e66318(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar2);
  func_0x000105e66340();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105e662ac; end: 105e662bf; +[SCRecentsRankingCreateTurnStateProvider valdiMarshallableObjectDescriptor] */

void FUN_105e662ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee3a0;
  param_1[1] = &PTR_DAT_1108ee3d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105e662c0; end: 105e662d3; +[SCRecentsRankingTurnEventHandler valdiMarshallableObjectDescriptor] */

void FUN_105e662c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee3e0;
  param_1[1] = &PTR_DAT_1108ee410;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e662d4; end: 105e66347; +[SCRecentsRankingTurnStateProvider valdiMarshallableObjectDescriptor] */

void FUN_105e662d4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee420;
  param_1[1] = &PTR_s_SCBridgeObservable_1108ee450;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105e66348; end: 105e6634b; -[SCCSendToContactPermissionStatus__Enum init] */

void FUN_105e66348(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105e6634c; end: 105e6634f; -[SCCSendToListsEditIntent__Enum init] */

void FUN_105e6634c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105e66350; end: 105e66357; -[SCCSendToPageType__Enum init] */

void FUN_105e66350(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105e66358; end: 105e6635b; -[SCCSendToSessionVisibilityShowingReason__Enum init] */

void FUN_105e66358(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 105e6635c; end: 105e66363; -[SCCSendToSpotlightCreatePostAction__Enum init] */

void FUN_105e6635c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 105e66364; end: 105e6636b; -[SCCSendToTrayPosition__Enum init] */

void FUN_105e66364(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 105e6636c; end: 105e6638b; -[SCCSendToFanPassSectionConfig initWithSubscriptionProductDisplayName:] */

void FUN_105e6636c(void)

{
  func_0x000105e66958(PTR_PTR_1126ed608);
  return;
}



/* Entry: 105e6638c; end: 105e6639b; +[SCCSendToFanPassSectionConfig valdiMarshallableObjectDescriptor] */

void FUN_105e6638c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ee468;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e6639c; end: 105e66463; -[SCCSendToLastSnapDataStoreCoordinator initWithFetchLastSnapCompositeIds:fetchLastSnapTimestamp:storeLastSnapCompositeIds:] */

undefined8 *
FUN_105e6639c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  uVar2 = param_5;
  _objc_retainBlock();
  _objc_release(param_5);
  puStack_48 = PTR_PTR_1126ed610;
  puVar3 = &uStack_50;
  uStack_50 = param_1;
  func_0x000105e669bc(puVar3,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105e66464; end: 105e66477; +[SCCSendToLastSnapDataStoreCoordinator valdiMarshallableObjectDescriptor] */

void FUN_105e66464(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee4b0;
  param_1[1] = &PTR_s_SCBridgeObservable_1108ee510;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66478; end: 105e664af; -[SCCSendToMusicTrackInfo initWithTrackTitle:artistName:trackType:isOriginalSound:] */

void FUN_105e66478(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105e669ac(PTR_PTR_1126ed618);
  func_0x000105e669bc(auStack_20);
  return;
}



/* Entry: 105e664b0; end: 105e664bf; +[SCCSendToMusicTrackInfo valdiMarshallableObjectDescriptor] */

void FUN_105e664b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ee528;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e664c0; end: 105e66517; -[SCCSendToPageConfig initWithPendingSelectionsSubject:pageType:sessionMetaData:includeStoriesSection:includeSpotlightSection:includeSelectableContacts:contactPermissionStatus:] */

void FUN_105e664c0(undefined8 param_1)

{
  func_0x000105e66974(param_1,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e66518; end: 105e6652b; +[SCCSendToPageConfig valdiMarshallableObjectDescriptor] */

void FUN_105e66518(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee5a0;
  param_1[1] = &PTR_DAT_1108ee738;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e6652c; end: 105e66557; -[SCCSendToPresentationState initWithIsPresented:timestampMs:] */

void FUN_105e6652c(void)

{
  func_0x000105e6699c(PTR_PTR_1126ed628);
  func_0x000105e66984();
  return;
}



/* Entry: 105e66558; end: 105e66567; +[SCCSendToPresentationState valdiMarshallableObjectDescriptor] */

void FUN_105e66558(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ee7a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66568; end: 105e665a3; -[SCCSendToPreviewConfig initWithHeight:aspectRatio:textInputEnabled:inBetweenSpacingEnabled:] */

void FUN_105e66568(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105e669ac(PTR_PTR_1126ed630);
  func_0x000105e669bc(auStack_20);
  return;
}



/* Entry: 105e665a4; end: 105e665b7; +[SCCSendToPreviewConfig valdiMarshallableObjectDescriptor] */

void FUN_105e665a4(undefined8 *param_1)

{
  *param_1 = &PTR_s_height_1108ee7f0;
  param_1[1] = &PTR_s_SCValdiViewFactory_1108ee8c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e665b8; end: 105e665d7; -[SCCSendToReplyRecipient initWithCompositeId:] */

void FUN_105e665b8(void)

{
  func_0x000105e66958(PTR_PTR_1126ed638);
  return;
}



/* Entry: 105e665d8; end: 105e665eb; +[SCCSendToReplyRecipient valdiMarshallableObjectDescriptor] */

void FUN_105e665d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee8d8;
  param_1[1] = &PTR_DAT_1108ee920;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e665ec; end: 105e66687; -[SCCSendToRootContext initWithPageConfig:pageCallbacks:friendStore:suggestedFriendStore:incomingFriendStore:groupStore:contactUserStore:addressBookStore:grpcServiceFactory:networkingClient:friendmojiProvider:rankedPostableDestinationsStore:replyDataStore:shareDestinationFetcher:deckHierarchy:rankedRecipientsDataStore:listStore:memberRolePresenter:snappableEntityIdsObservable:managedProfilesProvider:sessionVisibilityLogger:trayPositionObservable:isPlusSubscriber:rootDependencies:] */

void FUN_105e665ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ed640;
  uStack_30 = param_1;
  func_0x000105e669bc(&uStack_30,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e66688; end: 105e6669b; +[SCCSendToRootContext valdiMarshallableObjectDescriptor] */

void FUN_105e66688(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ee938;
  param_1[1] = &PTR_DAT_1108eed10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e6669c; end: 105e666c7; -[SCCSendToSelectionItem initWithEntity:title:participants:] */

void FUN_105e6669c(void)

{
  func_0x000105e669ac(PTR_PTR_1126ed648);
  func_0x000105e66974();
  return;
}



/* Entry: 105e666c8; end: 105e666db; +[SCCSendToSelectionItem valdiMarshallableObjectDescriptor] */

void FUN_105e666c8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108eee50;
  param_1[1] = &PTR_DAT_1108eeee0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e666dc; end: 105e66717; -[SCCSendToSelectionState initWithItems:] */

void FUN_105e666dc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x000105e669ac(PTR_PTR_1126ed650);
  func_0x000105e669bc(auStack_20);
  return;
}



/* Entry: 105e66718; end: 105e6672b; +[SCCSendToSelectionState valdiMarshallableObjectDescriptor] */

void FUN_105e66718(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108eeef8;
  param_1[1] = &PTR_DAT_1108eefa0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e6672c; end: 105e6676f; -[SCCSendToSessionMetaData initWithSessionId:sessionStartTimestampMs:presentationState:] */

void FUN_105e6672c(void)

{
  func_0x000105e669ac(PTR_PTR_1126ed658);
  func_0x000105e66974();
  return;
}



/* Entry: 105e66770; end: 105e66783; +[SCCSendToSessionMetaData valdiMarshallableObjectDescriptor] */

void FUN_105e66770(undefined8 *param_1)

{
  *param_1 = &PTR_s_sessionId_1108eefc8;
  param_1[1] = &PTR_s_SCBridgeObservable_1108ef0d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66784; end: 105e667ab; -[SCCSendToShareSheetConfig initWithBeginInCollapsedState:] */

void FUN_105e66784(void)

{
  func_0x000105e6699c(PTR_PTR_1126ed660);
  func_0x000105e66984();
  return;
}



/* Entry: 105e667ac; end: 105e667bb; +[SCCSendToShareSheetConfig valdiMarshallableObjectDescriptor] */

void FUN_105e667ac(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ef0e8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e667bc; end: 105e6683b; -[SCCSendToSpotlightConfig initWithShowAutoApprovalSetting:hasMusic:createPreviewAssets:] */

undefined8 * FUN_105e667bc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_x4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retainBlock();
  puStack_38 = PTR_PTR_1126ed668;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  func_0x000105e669bc(puVar1,PTR_s_initWithFieldValues__1125e24b8);
  _objc_release(in_x4);
  return puVar1;
}



/* Entry: 105e6683c; end: 105e6684f; +[SCCSendToSpotlightConfig valdiMarshallableObjectDescriptor] */

void FUN_105e6683c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ef118;
  param_1[1] = &PTR_DAT_1108ef250;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66850; end: 105e6686f; -[SCCSendToSpotlightCreatePostResult initWithAction:] */

void FUN_105e66850(void)

{
  func_0x000105e66958(PTR_PTR_1126ed670);
  return;
}



/* Entry: 105e66870; end: 105e66883; +[SCCSendToSpotlightCreatePostResult valdiMarshallableObjectDescriptor] */

void FUN_105e66870(undefined8 *param_1)

{
  *param_1 = &PTR_s_action_1108ef288;
  param_1[1] = &PTR_DAT_1108ef2d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66884; end: 105e668b7; -[SCCSendToSpotlightTilePickerResult init] */

void FUN_105e66884(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed678;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 105e668b8; end: 105e668cb; +[SCCSendToSpotlightTilePickerResult valdiMarshallableObjectDescriptor] */

void FUN_105e668b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ef2e8;
  param_1[1] = &PTR_DAT_1108ef318;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e668cc; end: 105e668f7; -[SCCSendToStoryPostingConfig initWithDisplayUsernameOnSnapMap:isImageSnap:isMusicSnap:audioPresentInVideo:audioEnabled:] */

void FUN_105e668cc(void)

{
  func_0x000105e669ac(PTR_PTR_1126ed680);
  func_0x000105e66974();
  return;
}



/* Entry: 105e668f8; end: 105e6690b; +[SCCSendToStoryPostingConfig valdiMarshallableObjectDescriptor] */

void FUN_105e668f8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ef328;
  param_1[1] = &PTR_s_SCBridgeObservable_1108ef3b8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e6690c; end: 105e66937; -[SCCSendToTopic initWithHashtag:source:] */

void FUN_105e6690c(void)

{
  func_0x000105e6699c(PTR_PTR_1126ed688);
  func_0x000105e66984();
  return;
}



/* Entry: 105e66938; end: 105e669db; +[SCCSendToTopic valdiMarshallableObjectDescriptor] */

void FUN_105e66938(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ef3c8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e669dc; end: 105e669e3; -[SCCSendToEntityType__Enum init] */

void FUN_105e669dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,0xc);
  return;
}



/* Entry: 105e669e4; end: 105e669eb; -[SCCSendToLastInteractionContentType__Enum init] */

void FUN_105e669e4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,7);
  return;
}



/* Entry: 105e669ec; end: 105e66b73; -[SCCSendToSectionId__Enum init] */

undefined ** FUN_105e669ec(undefined **param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined **ppuStack_f0;
  undefined **ppuStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined **ppuStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_f0 = &PTR____CFConstantStringClassReference_110e2cb38;
  ppuStack_e8 = &PTR____CFConstantStringClassReference_110ddea98;
  puStack_e0 = PTR_PTR_11312e368;
  puStack_d8 = PTR_PTR_11312e370;
  ppuStack_d0 = &PTR____CFConstantStringClassReference_110e2cb78;
  ppuStack_c8 = &PTR____CFConstantStringClassReference_110e2cb98;
  ppuStack_c0 = &PTR____CFConstantStringClassReference_110e2cbb8;
  puStack_b8 = PTR_PTR_11312e378;
  ppuStack_b0 = &PTR____CFConstantStringClassReference_110dad578;
  ppuStack_a8 = &PTR____CFConstantStringClassReference_110e237b8;
  ppuStack_a0 = &PTR____CFConstantStringClassReference_110e21258;
  ppuStack_98 = &PTR____CFConstantStringClassReference_110e2c1b8;
  ppuStack_90 = &PTR____CFConstantStringClassReference_110de3df8;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110e2cbf8;
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e2cc18;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110e2cc38;
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e2cc58;
  ppuStack_68 = &PTR____CFConstantStringClassReference_110e2cc78;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110e2cc98;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e2ccb8;
  puStack_50 = PTR_PTR_11312e380;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e2ccf8;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e2cd18;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110e2cd38;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e2cd58;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_f0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_105e66b74;
  puStack_108 = PTR_PTR_1126ed690;
  ppuVar2 = &puStack_110;
  puStack_110 = puVar1;
  puStack_100 = &stack0xfffffffffffffff0;
  func_0x000105e66c6c(ppuVar2,PTR_s_initWithFieldValues__1125e24b8);
  return ppuVar2;
}



/* Entry: 105e66b74; end: 105e66bab; -[SCCSendToCompositeEntityId initWithId2:type:] */

void FUN_105e66b74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed690;
  uStack_20 = param_1;
  func_0x000105e66c6c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e66bac; end: 105e66bbf; +[SCCSendToCompositeEntityId valdiMarshallableObjectDescriptor] */

void FUN_105e66bac(undefined8 *param_1)

{
  *param_1 = &PTR_s_id_1108ef410;
  param_1[1] = &PTR_DAT_1108ef458;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66bc0; end: 105e66bf7; -[SCCSendToLastInteractionState initWithLastInteractionContentType:] */

void FUN_105e66bc0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed698;
  uStack_20 = param_1;
  func_0x000105e66c6c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e66bf8; end: 105e66c0b; +[SCCSendToLastInteractionState valdiMarshallableObjectDescriptor] */

void FUN_105e66bf8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ef468;
  param_1[1] = &PTR_DAT_1108ef4b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66c0c; end: 105e66c47; -[SCCSendToPendingSelection initWithSectionId:] */

void FUN_105e66c0c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed6a0;
  uStack_20 = param_1;
  func_0x000105e66c6c(&uStack_20,PTR_s_initWithFieldValues__1125e24b8);
  return;
}



/* Entry: 105e66c48; end: 105e66c73; +[SCCSendToPendingSelection valdiMarshallableObjectDescriptor] */

void FUN_105e66c48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ef4c0;
  param_1[1] = &PTR_DAT_1108ef520;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66c74; end: 105e66ca3; -[SCRecentsRankingConversationTurnState initWithConversationId:turnState:] */

void FUN_105e66c74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed6a8;
  uStack_20 = param_1;
  func_0x000105e66e38();
  func_0x000105e66e20(&uStack_20);
  return;
}



/* Entry: 105e66ca4; end: 105e66cb7; +[SCRecentsRankingConversationTurnState valdiMarshallableObjectDescriptor] */

void FUN_105e66ca4(undefined8 *param_1)

{
  *param_1 = &PTR_s_conversationId_1108ef540;
  param_1[1] = &PTR_DAT_1108ef588;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66cb8; end: 105e66cef; -[SCRecentsRankingTurnState initWithLastTurnTimestamp:] */

void FUN_105e66cb8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed6b0;
  uStack_20 = param_1;
  func_0x000105e66e38();
  func_0x000105e66e20(&uStack_20);
  return;
}



/* Entry: 105e66cf0; end: 105e66cff; +[SCRecentsRankingTurnState valdiMarshallableObjectDescriptor] */

void FUN_105e66cf0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108ef598;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66d00; end: 105e66d3b; -[SCRecentsRankingUpdatedMessage initWithDescriptor:content:senderId:state:metadata:] */

void FUN_105e66d00(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed6b8;
  uStack_20 = param_1;
  func_0x000105e66e38();
  func_0x000105e66e20(&uStack_20);
  return;
}



/* Entry: 105e66d3c; end: 105e66d4f; +[SCRecentsRankingUpdatedMessage valdiMarshallableObjectDescriptor] */

void FUN_105e66d3c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108ef5f8;
  param_1[1] = &PTR_DAT_1108ef688;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66d50; end: 105e66d6f; -[SCRecentsRankingUpdatedMessageContent initWithContentType:] */

void FUN_105e66d50(void)

{
  func_0x000105e66e04(PTR_PTR_1126ed6c0);
  return;
}



/* Entry: 105e66d70; end: 105e66d7f; +[SCRecentsRankingUpdatedMessageContent valdiMarshallableObjectDescriptor] */

void FUN_105e66d70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_contentType_1108ef6a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66d80; end: 105e66d9f; -[SCRecentsRankingUpdatedMessageDescriptor initWithConversationId:] */

void FUN_105e66d80(void)

{
  func_0x000105e66e04(PTR_PTR_1126ed6c8);
  return;
}



/* Entry: 105e66da0; end: 105e66daf; +[SCRecentsRankingUpdatedMessageDescriptor valdiMarshallableObjectDescriptor] */

void FUN_105e66da0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_conversationId_1108ef6d8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66db0; end: 105e66de7; -[SCRecentsRankingUpdatedMessageMetadata initWithSeenBy:openedBy:createdAt:readAt:] */

void FUN_105e66db0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126ed6d0;
  uStack_20 = param_1;
  func_0x000105e66e38();
  func_0x000105e66e20(&uStack_20);
  return;
}



/* Entry: 105e66de8; end: 105e66e4b; +[SCRecentsRankingUpdatedMessageMetadata valdiMarshallableObjectDescriptor] */

void FUN_105e66de8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_seenBy_1108ef708;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 105e66e4c; end: 105e66f53; -[SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceProvider provide] */

void FUN_105e66e4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c52e8;
  _objc_alloc(PTR_PTR_1126c52e8);
  func_0x00010c04c060();
  puVar3 = PTR_PTR_1126c52f0;
  _objc_alloc(PTR_PTR_1126c52f0);
  func_0x00010c030fe0();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e66f54; end: 105e66f93;  */

void FUN_105e66f54(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bec2640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e66f94; end: 105e67017; -[SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceProvider _stateManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e66f94(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c52f8;
  _objc_alloc(PTR_PTR_1126c52f8);
  lVar2 = param_1 + _DAT_11273827c;
  _objc_loadWeakRetained(lVar2);
  param_1 = param_1 + _DAT_112738280;
  _objc_loadWeakRetained(param_1);
  func_0x00010c05ef80(puVar1,param_2,lVar2,param_1);
  _objc_release(param_1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e67018; end: 105e6705b; -[SCExternalShareSheetScopedOffPlatformShareOnMainCameraPreviewServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105e67018(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112738280);
  _objc_destroyWeak(param_1 + _DAT_11273827c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112738284);
  return;
}



/* Entry: 105e6705c; end: 105e6706f;  */

void FUN_105e6705c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setObject_forKey__112651b80,PTR____kCFBooleanTrue_11034ab68,
             &PTR____CFConstantStringClassReference_110e2cdf8);
  return;
}



/* Entry: 105e67070; end: 105e670ef;  */

ulong FUN_105e67070(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0dff20(param_1,param_2,&PTR____CFConstantStringClassReference_110e2cdf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf1f3c0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar3;
}


