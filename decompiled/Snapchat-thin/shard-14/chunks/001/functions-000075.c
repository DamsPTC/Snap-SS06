/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af9f5b0; end: 10af9f5fb; -[SCCSearchApiUiCreateUniversalSearchService createUniversalSearchServiceWithFlavorContext:dependencies:] */

void FUN_10af9f5b0(void)

{
  code *extraout_x8;
  undefined8 unaff_x21;
  
  func_0x00010af9f860();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f8ec();
  (*extraout_x8)();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f824();
  func_0x00010af9f844();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10af9f5fc; end: 10af9f6ef; +[SCCSearchApiUiCreateUniversalSearchService invokeWithJSRuntimeProvider:flavorContext:dependencies:completionHandler:] */

void FUN_10af9f5fc(void)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  func_0x00010af9f82c();
  _objc_retain();
  (**(code **)(unaff_x21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f8c4();
  func_0x00010af9f7fc(0x10af9f688);
  func_0x00010af9f890();
  _objc_retain();
  func_0x00010af9f884();
  _objc_release(uStack_40);
  func_0x00010af9f898();
  _objc_release(uStack_50);
  _objc_release();
  func_0x00010af9f824();
  func_0x00010af9f844();
  return;
}



/* Entry: 10af9f6f0; end: 10af9f717; +[SCCSearchApiUiCreateUniversalSearchService valdiMarshallableObjectDescriptor] */

void FUN_10af9f6f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4da0;
  param_1[1] = &PTR_DAT_110ca4dd0;
  param_1[2] = &PTR_DAT_110ca4d70;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af9f718; end: 10af9f723; +[SCCCallLauncher valdiMarshallableObjectDescriptor] */

void FUN_10af9f718(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca4df8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f724; end: 10af9f72f; +[SCCCreateChatPagePresenting valdiMarshallableObjectDescriptor] */

void FUN_10af9f724(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca4e70;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f730; end: 10af9f74f; +[SCCSearchApiUiSearchSafetyReporting valdiMarshallableObjectDescriptor] */

void FUN_10af9f730(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4ea0;
  param_1[1] = &PTR_DAT_110ca4ed0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f750; end: 10af9f75b; +[SCCSnapchatPlusPresenting valdiMarshallableObjectDescriptor] */

void FUN_10af9f750(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca4ee0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f75c; end: 10af9f7b7;  */

undefined8 FUN_10af9f75c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df180;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010af9f824();
  return param_1;
}



/* Entry: 10af9f7b8; end: 10af9f7e7;  */

void FUN_10af9f7b8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10af9f7e8; end: 10af9f8ff;  */

void FUN_10af9f7e8(undefined8 *param_1)

{
  undefined8 in_x9;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = in_x9;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f900; end: 10af9f923; +[SCCCameraPresenting valdiMarshallableObjectDescriptor] */

void FUN_10af9f900(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4f40;
  param_1[1] = &PTR_DAT_110ca4f70;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f924; end: 10af9f983;  */

undefined8 FUN_10af9f924(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df188;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10af9f984; end: 10af9f997; +[SCCFriendsFeedStatusHandlerProviding valdiMarshallableObjectDescriptor] */

void FUN_10af9f984(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4f80;
  param_1[1] = &PTR_DAT_110ca5010;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f998; end: 10af9f9db;  */

undefined8 FUN_10af9f998(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df190;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010af9fa48();
  func_0x00010af9fa58();
  return param_1;
}



/* Entry: 10af9f9dc; end: 10af9f9ef; +[SCCFriendsFeedStatusHandling valdiMarshallableObjectDescriptor] */

void FUN_10af9f9dc(undefined8 *param_1)

{
  *param_1 = &PTR_s_fetch_110ca5028;
  param_1[1] = &PTR_DAT_110ca5070;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9f9f0; end: 10af9fa33;  */

undefined8 FUN_10af9f9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df198;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010af9fa48();
  func_0x00010af9fa58();
  return param_1;
}



/* Entry: 10af9fa34; end: 10af9fa6f;  */

void FUN_10af9fa34(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9fa70; end: 10af9fa9b; +[SCCSharingApiIValdiSharingFeatureSettings valdiMarshallableObjectDescriptor] */

void FUN_10af9fa70(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca50c8;
  param_1[1] = &PTR_DAT_110ca5110;
  param_1[2] = &PTR_DAT_110ca5080;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9fa9c; end: 10af9fac3;  */

ulong FUN_10af9fa9c(code *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  (*param_1)(uVar1,param_2[1],(int)param_2[2]);
  return uVar1 & 0xffffffff;
}



/* Entry: 10af9fac4; end: 10af9fb27;  */

void FUN_10af9fac4(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010af9fbf4(FUN_10af9fba0);
  _objc_retainBlock(&puStack_48);
  func_0x00010af9fc10();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9fb28; end: 10af9fb3b;  */

void FUN_10af9fb28(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010af9fb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return;
}



/* Entry: 10af9fb3c; end: 10af9fb9f;  */

void FUN_10af9fb3c(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  func_0x00010af9fbf4(0x10af9fbc0);
  _objc_retainBlock(&puStack_48);
  func_0x00010af9fc10();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9fba0; end: 10af9fbdb;  */

uint FUN_10af9fba0(uint param_1)

{
  FUN_10af9fbdc();
  return param_1 & 1;
}



/* Entry: 10af9fbdc; end: 10af9fc1b;  */

void FUN_10af9fbdc(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uStack0000000000000000;
  ulong uStack0000000000000008;
  
  uStack0000000000000008 = (ulong)param_3;
  uStack0000000000000000 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010af9fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10af9fc1c; end: 10af9fc3f; +[SCCTopicPageLauncher valdiMarshallableObjectDescriptor] */

void FUN_10af9fc1c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca5128;
  param_1[1] = &PTR_DAT_110ca51d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9fc40; end: 10af9fc9f;  */

undefined8 FUN_10af9fc40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df1a0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10af9fca0; end: 10af9fcab; +[SCCallLogList componentPath] */

undefined ** FUN_10af9fca0(void)

{
  return &PTR____CFConstantStringClassReference_110f40738;
}



/* Entry: 10af9fcac; end: 10af9fcdf; -[SCCallLogList initWithViewModel:componentContext:runtime:] */

void FUN_10af9fcac(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127035c8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10af9fce0; end: 10af9fd2f; -[SCCallLogList setViewModel:] */

void FUN_10af9fce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af9fd30; end: 10af9fd73; -[SCCallLogList viewModel] */

void FUN_10af9fd30(undefined8 param_1)

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



/* Entry: 10af9fd74; end: 10af9fd77; +[SCCTCLGetCallLogEntriesCountObservable modulePath] */

undefined ** FUN_10af9fd74(void)

{
  return &PTR____CFConstantStringClassReference_110f40758;
}



/* Entry: 10af9fd78; end: 10af9fd7b; +[SCCTCLGetCallLogEntriesCountObservable asyncStrictMode] */

undefined8 FUN_10af9fd78(void)

{
  return 0;
}



/* Entry: 10af9fd7c; end: 10af9fdbb; -[SCCTCLGetCallLogEntriesCountObservable getCallLogEntriesCountObservable] */

void FUN_10af9fd7c(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af9fdbc; end: 10af9fe2f; +[SCCTCLGetCallLogEntriesCountObservable invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10af9fdbc(void)

{
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010afa029c();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa02ec();
  func_0x00010afa025c(FUN_10af9fe30);
  _objc_retain(unaff_x20);
  func_0x00010afa02b4();
  func_0x00010afa0294();
  _objc_release(uStack_30);
  func_0x00010afa0280();
  func_0x00010afa02c8();
  return;
}



/* Entry: 10af9fe30; end: 10af9fe97;  */

void FUN_10af9fe30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df1a8;
  func_0x00010bfbc0e0(PTR_PTR_1126df1a8,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  FUN_10afa023c();
  func_0x00010afa02d8();
  func_0x00010afa02ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af9fe98; end: 10af9feb3; +[SCCTCLGetCallLogEntriesCountObservable valdiMarshallableObjectDescriptor] */

void FUN_10af9fe98(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca51f8;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca5228;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af9feb4; end: 10af9feb7; +[SCCTCLGetUnreadCallLogEntriesCount modulePath] */

undefined ** FUN_10af9feb4(void)

{
  return &PTR____CFConstantStringClassReference_110f40758;
}



/* Entry: 10af9feb8; end: 10af9febb; +[SCCTCLGetUnreadCallLogEntriesCount asyncStrictMode] */

undefined8 FUN_10af9feb8(void)

{
  return 0;
}



/* Entry: 10af9febc; end: 10af9fefb; -[SCCTCLGetUnreadCallLogEntriesCount getUnreadCallLogEntriesCount] */

void FUN_10af9febc(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af9fefc; end: 10af9ff6f; +[SCCTCLGetUnreadCallLogEntriesCount invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10af9fefc(void)

{
  long unaff_x20;
  undefined8 uStack_30;
  
  func_0x00010afa029c();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa02ec();
  func_0x00010afa025c(FUN_10af9ff70);
  _objc_retain(unaff_x20);
  func_0x00010afa02b4();
  func_0x00010afa0294();
  _objc_release(uStack_30);
  func_0x00010afa0280();
  func_0x00010afa02c8();
  return;
}



/* Entry: 10af9ff70; end: 10af9ffd7;  */

void FUN_10af9ff70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126df1b0;
  func_0x00010bfbc0e0(PTR_PTR_1126df1b0,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  FUN_10afa023c();
  func_0x00010afa02d8();
  func_0x00010afa02ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af9ffd8; end: 10af9fff3; +[SCCTCLGetUnreadCallLogEntriesCount valdiMarshallableObjectDescriptor] */

void FUN_10af9ffd8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca5238;
  param_1[1] = &PTR_s_SCBridgeObservable_110ca5268;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af9fff4; end: 10af9fff7; +[SCCTCLSyncCallLog modulePath] */

undefined ** FUN_10af9fff4(void)

{
  return &PTR____CFConstantStringClassReference_110f40758;
}



/* Entry: 10af9fff8; end: 10af9fffb; +[SCCTCLSyncCallLog asyncStrictMode] */

undefined8 FUN_10af9fff8(void)

{
  return 0;
}



/* Entry: 10af9fffc; end: 10afa0043; -[SCCTCLSyncCallLog syncCallLogWithTriggerType:] */

void FUN_10af9fffc(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa02c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10afa0044; end: 10afa0163; +[SCCTCLSyncCallLog invokeWithJSRuntimeProvider:triggerType:completionHandler:] */

void FUN_10afa0044(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afa02ec();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10afa00f8;
  puStack_50 = &UNK_1108ecac0;
  lStack_48 = lVar1;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_68);
  _objc_release(uStack_40);
  func_0x00010afa0294();
  func_0x00010afa0280();
  func_0x00010afa02ac();
  return;
}



/* Entry: 10afa0164; end: 10afa0197; +[SCCTCLSyncCallLog valdiMarshallableObjectDescriptor] */

void FUN_10afa0164(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca52a8;
  param_1[1] = &PTR_DAT_110ca52d8;
  param_1[2] = &PTR_DAT_110ca5278;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa0198; end: 10afa020b;  */

void FUN_10afa0198(undefined8 param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  func_0x00010afa02ec();
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10afa020c;
  puStack_30 = &UNK_1108ecc00;
  uStack_28 = param_1;
  _objc_retain(param_1);
  puVar1 = auStack_48;
  _objc_retainBlock(puVar1);
  func_0x00010afa0294();
  func_0x00010afa0280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10afa020c; end: 10afa023b;  */

void FUN_10afa020c(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afa023c; end: 10afa02f7;  */

void FUN_10afa023c(undefined8 param_1)

{
  long unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x00010afa024c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x19 + 0x28) + 0x10))(*(long *)(unaff_x19 + 0x28),param_1);
  return;
}



/* Entry: 10afa02f8; end: 10afa0303; +[SCStartCallTray componentPath] */

undefined ** FUN_10afa02f8(void)

{
  return &PTR____CFConstantStringClassReference_110f40778;
}



/* Entry: 10afa0304; end: 10afa0337; -[SCStartCallTray initWithViewModel:componentContext:runtime:] */

void FUN_10afa0304(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127035d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10afa0338; end: 10afa0387; -[SCStartCallTray setViewModel:] */

void FUN_10afa0338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afa0388; end: 10afa03cb; -[SCStartCallTray viewModel] */

void FUN_10afa0388(undefined8 param_1)

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



/* Entry: 10afa03cc; end: 10afa03d7; +[SCCUnavailableMessage componentPath] */

undefined ** FUN_10afa03cc(void)

{
  return &PTR____CFConstantStringClassReference_110f40798;
}



/* Entry: 10afa03d8; end: 10afa040b; -[SCCUnavailableMessage initWithViewModel:componentContext:runtime:] */

void FUN_10afa03d8(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127035d8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10afa040c; end: 10afa045b; -[SCCUnavailableMessage setViewModel:] */

void FUN_10afa040c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10afa045c; end: 10afa049f; -[SCCUnavailableMessage viewModel] */

void FUN_10afa045c(undefined8 param_1)

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



/* Entry: 10afa04a0; end: 10afa04ab; +[SCShareSheetStore modulePath] */

undefined ** FUN_10afa04a0(void)

{
  return &PTR____CFConstantStringClassReference_110f407b8;
}



/* Entry: 10afa04ac; end: 10afa04b3; +[SCShareSheetStore asyncStrictMode] */

undefined8 FUN_10afa04ac(void)

{
  return 0;
}



/* Entry: 10afa04b4; end: 10afa04eb; -[SCShareSheetStore updateDestinationTimestampWithDestination:] */

void FUN_10afa04b4(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10afa04ec; end: 10afa0617; +[SCShareSheetStore invokeWithJSRuntimeProvider:destination:completionHandler:] */

void FUN_10afa04ec(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010afa0b44();
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10afa05a4;
  puStack_50 = &UNK_1108ecac0;
  lStack_48 = lVar1;
  uStack_40 = param_5;
  uStack_38 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,auStack_68);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  func_0x00010afa0b08();
  _objc_release(param_3);
  return;
}



/* Entry: 10afa0618; end: 10afa0643; +[SCShareSheetStore valdiMarshallableObjectDescriptor] */

void FUN_10afa0618(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca5318;
  param_1[1] = &PTR_DAT_110ca5348;
  param_1[2] = &PTR_s_oi_v_110ca52e8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10afa0644; end: 10afa0667;  */

undefined8 FUN_10afa0644(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 10afa0668; end: 10afa06b7;  */

void FUN_10afa0668(void)

{
  func_0x00010afa0ba0();
  func_0x00010afa0b44();
  func_0x00010afa0b10(FUN_10afa0a40);
  func_0x00010afa0b88();
  func_0x00010afa0b20();
  func_0x00010afa0b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa06b8; end: 10afa06d7; +[SCCShareSelectionContext valdiMarshallableObjectDescriptor] */

void FUN_10afa06b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca5388;
  param_1[1] = &PTR_DAT_110ca5400;
  param_1[2] = &PTR_DAT_110ca5358;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa06d8; end: 10afa0707;  */

undefined8 FUN_10afa06d8(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2),*(uint *)(param_2 + 3) & 1);
  return 0;
}



/* Entry: 10afa0708; end: 10afa0757;  */

void FUN_10afa0708(void)

{
  func_0x00010afa0ba0();
  func_0x00010afa0b44();
  func_0x00010afa0b10(0x10afa0a70);
  func_0x00010afa0b88();
  func_0x00010afa0b20();
  func_0x00010afa0b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa0758; end: 10afa079b;  */

undefined8 FUN_10afa0758(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df1c0;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010afa0b54();
  func_0x00010afa0aec();
  return param_1;
}



/* Entry: 10afa079c; end: 10afa07bb; +[SCCShareSheetContext valdiMarshallableObjectDescriptor] */

void FUN_10afa079c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca5448;
  param_1[1] = &PTR_DAT_110ca54d8;
  param_1[2] = &PTR_DAT_110ca5418;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa07bc; end: 10afa07e3;  */

undefined8 FUN_10afa07bc(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(undefined4 *)(param_2 + 2));
  return 0;
}



/* Entry: 10afa07e4; end: 10afa0833;  */

void FUN_10afa07e4(void)

{
  func_0x00010afa0ba0();
  func_0x00010afa0b44();
  func_0x00010afa0b10(0x10afa0aa8);
  func_0x00010afa0b88();
  func_0x00010afa0b20();
  func_0x00010afa0b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa0834; end: 10afa0877;  */

undefined8 FUN_10afa0834(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df1c8;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010afa0b54();
  func_0x00010afa0aec();
  return param_1;
}



/* Entry: 10afa0878; end: 10afa0883; +[SCCExportOrSendIconStack componentPath] */

undefined ** FUN_10afa0878(void)

{
  return &PTR____CFConstantStringClassReference_110f407d8;
}



/* Entry: 10afa0884; end: 10afa08a3; -[SCCExportOrSendIconStack initWithViewModel:componentContext:runtime:] */

void FUN_10afa0884(void)

{
  FUN_10afa0ad8(PTR_PTR_1127035e0);
  return;
}



/* Entry: 10afa08a4; end: 10afa08d7; -[SCCExportOrSendIconStack setViewModel:] */

void FUN_10afa08a4(void)

{
  func_0x00010afa0af8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0b2c();
  func_0x00010afa0b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa08d8; end: 10afa090f; -[SCCExportOrSendIconStack viewModel] */

void FUN_10afa08d8(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa0910; end: 10afa091b; +[SCCShareSelectionView componentPath] */

undefined ** FUN_10afa0910(void)

{
  return &PTR____CFConstantStringClassReference_110f407f8;
}



/* Entry: 10afa091c; end: 10afa093b; -[SCCShareSelectionView initWithViewModel:componentContext:runtime:] */

void FUN_10afa091c(void)

{
  FUN_10afa0ad8(PTR_PTR_1127035e8);
  return;
}



/* Entry: 10afa093c; end: 10afa096f; -[SCCShareSelectionView setViewModel:] */

void FUN_10afa093c(void)

{
  func_0x00010afa0af8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0b2c();
  func_0x00010afa0b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa0970; end: 10afa09a7; -[SCCShareSelectionView viewModel] */

void FUN_10afa0970(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa09a8; end: 10afa09b3; +[SCCShareSheet componentPath] */

undefined ** FUN_10afa09a8(void)

{
  return &PTR____CFConstantStringClassReference_110f40818;
}



/* Entry: 10afa09b4; end: 10afa09d3; -[SCCShareSheet initWithViewModel:componentContext:runtime:] */

void FUN_10afa09b4(void)

{
  FUN_10afa0ad8(PTR_PTR_1127035f0);
  return;
}



/* Entry: 10afa09d4; end: 10afa0a07; -[SCCShareSheet setViewModel:] */

void FUN_10afa09d4(void)

{
  func_0x00010afa0af8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0b2c();
  func_0x00010afa0b08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa0a08; end: 10afa0a3f; -[SCCShareSheet viewModel] */

void FUN_10afa0a08(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa0aec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa0a40; end: 10afa0ad7;  */

void FUN_10afa0a40(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10afa0ad8; end: 10afa0ba7;  */

void FUN_10afa0ad8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10afa0ba8; end: 10afa0bc3; +[SCStickerPickerValdiViewActionHandler valdiMarshallableObjectDescriptor] */

void FUN_10afa0ba8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_onDismiss_110ca54f0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10afa0bc4; end: 10afa0bcf; +[SCCCameraRollStickerPickerView componentPath] */

undefined ** FUN_10afa0bc4(void)

{
  return &PTR____CFConstantStringClassReference_110f40838;
}



/* Entry: 10afa0bd0; end: 10afa0bef; -[SCCCameraRollStickerPickerView initWithViewModel:componentContext:runtime:] */

void FUN_10afa0bd0(void)

{
  FUN_10afa11b4(PTR_PTR_1127035f8);
  return;
}



/* Entry: 10afa0bf0; end: 10afa0c23; -[SCCCameraRollStickerPickerView setViewModel:] */

void FUN_10afa0bf0(void)

{
  func_0x00010afa11c8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa11d8();
  func_0x00010afa11f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa0c24; end: 10afa0c5b; -[SCCCameraRollStickerPickerView viewModel] */

void FUN_10afa0c24(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa11e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa0c5c; end: 10afa0c67; +[SCCreativeToolsStickersAnimatedStickerEditingView componentPath] */

undefined ** FUN_10afa0c5c(void)

{
  return &PTR____CFConstantStringClassReference_110f40858;
}



/* Entry: 10afa0c68; end: 10afa0c87; -[SCCreativeToolsStickersAnimatedStickerEditingView initWithViewModel:componentContext:runtime:] */

void FUN_10afa0c68(void)

{
  FUN_10afa11b4(PTR_PTR_112703600);
  return;
}



/* Entry: 10afa0c88; end: 10afa0cbb; -[SCCreativeToolsStickersAnimatedStickerEditingView setViewModel:] */

void FUN_10afa0c88(void)

{
  func_0x00010afa11c8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa11d8();
  func_0x00010afa11f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa0cbc; end: 10afa0cf3; -[SCCreativeToolsStickersAnimatedStickerEditingView viewModel] */

void FUN_10afa0cbc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa11e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afa0cf4; end: 10afa0cff; +[SCStickerPickerInteractiveStickersSection componentPath] */

undefined ** FUN_10afa0cf4(void)

{
  return &PTR____CFConstantStringClassReference_110f40878;
}



/* Entry: 10afa0d00; end: 10afa0d1f; -[SCStickerPickerInteractiveStickersSection initWithViewModel:componentContext:runtime:] */

void FUN_10afa0d00(void)

{
  FUN_10afa11b4(PTR_PTR_112703608);
  return;
}



/* Entry: 10afa0d20; end: 10afa0d53; -[SCStickerPickerInteractiveStickersSection setViewModel:] */

void FUN_10afa0d20(void)

{
  func_0x00010afa11c8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa11d8();
  func_0x00010afa11f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10afa0d54; end: 10afa0d8b; -[SCStickerPickerInteractiveStickersSection viewModel] */

void FUN_10afa0d54(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010afa11e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


