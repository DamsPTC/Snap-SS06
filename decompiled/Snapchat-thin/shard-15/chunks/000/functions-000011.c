/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b75b95c; end: 10b75b997; -[SCCInLensCreationCustomizationPersistentStore customizationPersistentStore] */

void FUN_10b75b95c(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75b998; end: 10b75ba47; +[SCCInLensCreationCustomizationPersistentStore invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10b75b998(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  pcStack_40 = FUN_10b75ba48;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  func_0x00010b75bf58();
  _objc_release(param_3);
  return;
}



/* Entry: 10b75ba48; end: 10b75bacf;  */

void FUN_10b75ba48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126e06f8;
  func_0x00010bfbc0e0(PTR_PTR_1126e06f8,param_2,*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10b75bad0; end: 10b75baf3; +[SCCInLensCreationCustomizationPersistentStore valdiMarshallableObjectDescriptor] */

void FUN_10b75bad0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5b448;
  param_1[1] = &PTR_DAT_110d5b478;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b75baf4; end: 10b75baff; +[SCCInLensCreationAiCreationFlowPageComponent componentPath] */

undefined ** FUN_10b75baf4(void)

{
  return &PTR____CFConstantStringClassReference_110f7c198;
}



/* Entry: 10b75bb00; end: 10b75bb1f; -[SCCInLensCreationAiCreationFlowPageComponent initWithViewModel:componentContext:runtime:] */

void FUN_10b75bb00(void)

{
  FUN_10b75bf1c(PTR_PTR_11270a848);
  return;
}



/* Entry: 10b75bb20; end: 10b75bb53; -[SCCInLensCreationAiCreationFlowPageComponent setViewModel:] */

void FUN_10b75bb20(void)

{
  func_0x00010b75bf30();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf4c();
  func_0x00010b75bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b75bb54; end: 10b75bb8b; -[SCCInLensCreationAiCreationFlowPageComponent viewModel] */

void FUN_10b75bb54(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75bb8c; end: 10b75bb97; +[SCCInLensCreationCameraViewportComponent componentPath] */

undefined ** FUN_10b75bb8c(void)

{
  return &PTR____CFConstantStringClassReference_110f7c1b8;
}



/* Entry: 10b75bb98; end: 10b75bbb7; -[SCCInLensCreationCameraViewportComponent initWithViewModel:componentContext:runtime:] */

void FUN_10b75bb98(void)

{
  FUN_10b75bf1c(PTR_PTR_11270a850);
  return;
}



/* Entry: 10b75bbb8; end: 10b75bbeb; -[SCCInLensCreationCameraViewportComponent setViewModel:] */

void FUN_10b75bbb8(void)

{
  func_0x00010b75bf30();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf4c();
  func_0x00010b75bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b75bbec; end: 10b75bc23; -[SCCInLensCreationCameraViewportComponent viewModel] */

void FUN_10b75bbec(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75bc24; end: 10b75bc2f; +[SCCInLensCreationCustomizationFriendSelectionComponent componentPath] */

undefined ** FUN_10b75bc24(void)

{
  return &PTR____CFConstantStringClassReference_110f7c1d8;
}



/* Entry: 10b75bc30; end: 10b75bc4f; -[SCCInLensCreationCustomizationFriendSelectionComponent initWithViewModel:componentContext:runtime:] */

void FUN_10b75bc30(void)

{
  FUN_10b75bf1c(PTR_PTR_11270a858);
  return;
}



/* Entry: 10b75bc50; end: 10b75bc83; -[SCCInLensCreationCustomizationFriendSelectionComponent setViewModel:] */

void FUN_10b75bc50(void)

{
  func_0x00010b75bf30();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf4c();
  func_0x00010b75bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b75bc84; end: 10b75bcbb; -[SCCInLensCreationCustomizationFriendSelectionComponent viewModel] */

void FUN_10b75bc84(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75bcbc; end: 10b75bcc7; +[SCCInLensCreationCustomizationPreviewView componentPath] */

undefined ** FUN_10b75bcbc(void)

{
  return &PTR____CFConstantStringClassReference_110f7c1f8;
}



/* Entry: 10b75bcc8; end: 10b75bce7; -[SCCInLensCreationCustomizationPreviewView initWithViewModel:componentContext:runtime:] */

void FUN_10b75bcc8(void)

{
  FUN_10b75bf1c(PTR_PTR_11270a860);
  return;
}



/* Entry: 10b75bce8; end: 10b75bd1b; -[SCCInLensCreationCustomizationPreviewView setViewModel:] */

void FUN_10b75bce8(void)

{
  func_0x00010b75bf30();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf4c();
  func_0x00010b75bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b75bd1c; end: 10b75bd53; -[SCCInLensCreationCustomizationPreviewView viewModel] */

void FUN_10b75bd1c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75bd54; end: 10b75bd5f; +[SCCInLensCreationMentionInputCore componentPath] */

undefined ** FUN_10b75bd54(void)

{
  return &PTR____CFConstantStringClassReference_110f7c218;
}



/* Entry: 10b75bd60; end: 10b75bd7f; -[SCCInLensCreationMentionInputCore initWithViewModel:componentContext:runtime:] */

void FUN_10b75bd60(void)

{
  FUN_10b75bf1c(PTR_PTR_11270a868);
  return;
}



/* Entry: 10b75bd80; end: 10b75bdb3; -[SCCInLensCreationMentionInputCore setViewModel:] */

void FUN_10b75bd80(void)

{
  func_0x00010b75bf30();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf4c();
  func_0x00010b75bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b75bdb4; end: 10b75bdeb; -[SCCInLensCreationMentionInputCore viewModel] */

void FUN_10b75bdb4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75bdec; end: 10b75bdf7; +[SCCInLensCreationMentionTextView componentPath] */

undefined ** FUN_10b75bdec(void)

{
  return &PTR____CFConstantStringClassReference_110f7c238;
}



/* Entry: 10b75bdf8; end: 10b75be17; -[SCCInLensCreationMentionTextView initWithViewModel:componentContext:runtime:] */

void FUN_10b75bdf8(void)

{
  FUN_10b75bf1c(PTR_PTR_11270a870);
  return;
}



/* Entry: 10b75be18; end: 10b75be4b; -[SCCInLensCreationMentionTextView setViewModel:] */

void FUN_10b75be18(void)

{
  func_0x00010b75bf30();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf4c();
  func_0x00010b75bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b75be4c; end: 10b75be83; -[SCCInLensCreationMentionTextView viewModel] */

void FUN_10b75be4c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75be84; end: 10b75be8f; +[SCCInLensCreationVisualPromptsTrayBody componentPath] */

undefined ** FUN_10b75be84(void)

{
  return &PTR____CFConstantStringClassReference_110f7c258;
}



/* Entry: 10b75be90; end: 10b75beaf; -[SCCInLensCreationVisualPromptsTrayBody initWithViewModel:componentContext:runtime:] */

void FUN_10b75be90(void)

{
  FUN_10b75bf1c(PTR_PTR_11270a878);
  return;
}



/* Entry: 10b75beb0; end: 10b75bee3; -[SCCInLensCreationVisualPromptsTrayBody setViewModel:] */

void FUN_10b75beb0(void)

{
  func_0x00010b75bf30();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf4c();
  func_0x00010b75bf58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b75bee4; end: 10b75bf1b; -[SCCInLensCreationVisualPromptsTrayBody viewModel] */

void FUN_10b75bee4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75bf40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75bf1c; end: 10b75bf77;  */

void FUN_10b75bf1c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10b75bf78; end: 10b75bf83; +[SCCAlternativeAvatarView componentPath] */

undefined ** FUN_10b75bf78(void)

{
  return &PTR____CFConstantStringClassReference_110f7c278;
}



/* Entry: 10b75bf84; end: 10b75bfb7; -[SCCAlternativeAvatarView initWithViewModel:componentContext:runtime:] */

void FUN_10b75bf84(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270a880;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10b75bfb8; end: 10b75c007; -[SCCAlternativeAvatarView setViewModel:] */

void FUN_10b75bfb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b75c008; end: 10b75c04b; -[SCCAlternativeAvatarView viewModel] */

void FUN_10b75c008(undefined8 param_1)

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



/* Entry: 10b75c04c; end: 10b75c067; +[SCCPublisherWatchStateStore valdiMarshallableObjectDescriptor] */

void FUN_10b75c04c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5b488;
  param_1[1] = &PTR_DAT_110d5b4d0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b75c068; end: 10b75c0a3;  */

undefined8 FUN_10b75c068(undefined8 param_1)

{
  func_0x00010b75c180();
  func_0x00010b75c188();
  func_0x00010b75c14c();
  func_0x00010b75c15c();
  return param_1;
}



/* Entry: 10b75c0a4; end: 10b75c0bf; +[SCCPublisherWatchStateStoreFactory valdiMarshallableObjectDescriptor] */

void FUN_10b75c0a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5b4e8;
  param_1[1] = &PTR_DAT_110d5b518;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b75c0c0; end: 10b75c0fb;  */

undefined8 FUN_10b75c0c0(undefined8 param_1)

{
  func_0x00010b75c180();
  func_0x00010b75c188();
  func_0x00010b75c14c();
  func_0x00010b75c15c();
  return param_1;
}



/* Entry: 10b75c0fc; end: 10b75c10f; +[SCCStorySummaryInfoStoring valdiMarshallableObjectDescriptor] */

void FUN_10b75c0fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5b538;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10b75c110; end: 10b75c14b;  */

undefined8 FUN_10b75c110(undefined8 param_1)

{
  func_0x00010b75c180();
  func_0x00010b75c188();
  func_0x00010b75c14c();
  func_0x00010b75c15c();
  return param_1;
}



/* Entry: 10b75c14c; end: 10b75c18f;  */

undefined8 FUN_10b75c14c(undefined8 param_1)

{
  undefined8 unaff_x19;
  
  _objc_retain();
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bbe00();
  func_0x00010b967914();
  _objc_release(unaff_x19);
  return param_1;
}



/* Entry: 10b75c190; end: 10b75c19b; +[SCCObservablePersistentStoreFactory modulePath] */

undefined ** FUN_10b75c190(void)

{
  return &PTR____CFConstantStringClassReference_110f7c298;
}



/* Entry: 10b75c19c; end: 10b75c1a3; +[SCCObservablePersistentStoreFactory asyncStrictMode] */

undefined8 FUN_10b75c19c(void)

{
  return 0;
}



/* Entry: 10b75c1a4; end: 10b75c213; -[SCCObservablePersistentStoreFactory createObservablePersistentStoreWithConfig:] */

void FUN_10b75c1a4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10b75c214; end: 10b75c383; +[SCCObservablePersistentStoreFactory invokeWithJSRuntimeProvider:config:completionHandler:] */

void FUN_10b75c214(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  uStack_58 = 0x10b75c2f8;
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



/* Entry: 10b75c384; end: 10b75c3a7; +[SCCObservablePersistentStoreFactory valdiMarshallableObjectDescriptor] */

void FUN_10b75c384(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5b580;
  param_1[1] = &PTR_DAT_110d5b5b0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10b75c3a8; end: 10b75c3af; -[SCCInLensCreationCustomizationPreviewSubscreen__Enum init] */

void FUN_10b75c3a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,5);
  return;
}



/* Entry: 10b75c3b0; end: 10b75c3b3; -[SCCInLensCreationCustomizationPreviewUpdateEvent__Enum init] */

void FUN_10b75c3b0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b75c3b4; end: 10b75c3b7; -[SCCInLensCreationCustomizationPreviewVisibilityEvent__Enum init] */

void FUN_10b75c3b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b75c3b8; end: 10b75c3bb; -[SCCInLensCreationCustomizationPromptType__Enum init] */

void FUN_10b75c3b8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b75c3bc; end: 10b75c3bf; -[SCCInLensCreationCustomizationType__Enum init] */

void FUN_10b75c3bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b75c3c0; end: 10b75c3c3; -[SCCInLensCreationImagineLensPlaceholderType__Enum init] */

void FUN_10b75c3c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 10b75c3c4; end: 10b75c3c7; -[SCCInLensCreationLensConceptType__Enum init] */

void FUN_10b75c3c4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,3);
  return;
}



/* Entry: 10b75c3c8; end: 10b75c3d7; -[SCCInLensCreationLensSource__Enum init] */

void FUN_10b75c3c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithEnumCases_count__1125e1b50,0x1133d3090,2);
  return;
}



/* Entry: 10b75c3d8; end: 10b75c3df; -[SCCInLensCreationTrendingListTabType__Enum init] */

void FUN_10b75c3d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 10b75c3e0; end: 10b75c48f; -[SCCInLensCreationCustomizationPromptSource__Enum init] */

undefined * FUN_10b75c3e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined auStack_110 [16];
  undefined1 ***pppuStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 **ppuStack_c0;
  code *pcStack_b8;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined *puStack_68;
  undefined **ppuStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  undefined **ppuStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b75cee8();
  puStack_68 = PTR_PTR_1133d30a0;
  ppuStack_60 = &PTR____CFConstantStringClassReference_110f30798;
  puStack_58 = PTR_PTR_1133d30a8;
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e79df8;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e79d38;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e04238;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110f7c2d8;
  puStack_30 = PTR_PTR_1133d30b0;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_68,8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75ce7c();
  func_0x00010b75cec0();
  func_0x00010b75cec8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_78 = FUN_10b75c490;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010b75cee8();
    puStack_a8 = PTR_PTR_1133d30b8;
    puStack_a0 = PTR_PTR_1133d30c0;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_98 = extraout_x8_00;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b75ce7c();
    func_0x00010b75cec0();
    func_0x00010b75cec8(uStack_98);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcStack_b8 = FUN_10b75c504;
      ppuStack_c0 = &puStack_80;
      func_0x00010b75cee8();
      puStack_f0 = PTR_PTR_1133d30c8;
      puStack_e8 = PTR_PTR_1133d30d0;
      puStack_e0 = PTR_PTR_1133d30d8;
      puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_d8 = extraout_x8_01;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_f0,3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010b75ce7c();
      func_0x00010b75cec0();
      func_0x00010b75cec8(uStack_d8);
      if (!(bool)in_ZR) {
        ___stack_chk_fail();
        pcStack_f8 = FUN_10b75c584;
        pppuStack_100 = &ppuStack_c0;
        func_0x00010b75ce9c(PTR_PTR_11270a888);
        puVar1 = auStack_110;
        func_0x00010b75ce74(puVar1);
      }
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 10b75c490; end: 10b75c503; -[SCCInLensCreationCustomizationSelectionOrigin__Enum init] */

void FUN_10b75c490(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 auStack_a0 [16];
  undefined1 **ppuStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b75cee8();
  puStack_38 = PTR_PTR_1133d30b8;
  puStack_30 = PTR_PTR_1133d30c0;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_38,2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75ce7c();
  func_0x00010b75cec0();
  func_0x00010b75cec8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_48 = FUN_10b75c504;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010b75cee8();
    puStack_80 = PTR_PTR_1133d30c8;
    puStack_78 = PTR_PTR_1133d30d0;
    puStack_70 = PTR_PTR_1133d30d8;
    uStack_68 = extraout_x8_00;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_80,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b75ce7c();
    func_0x00010b75cec0();
    func_0x00010b75cec8(uStack_68);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      pcStack_88 = FUN_10b75c584;
      ppuStack_90 = &puStack_50;
      func_0x00010b75ce9c(PTR_PTR_11270a888);
      func_0x00010b75ce74(auStack_a0);
    }
  }
  return;
}



/* Entry: 10b75c504; end: 10b75c583; -[SCCInLensCreationImagineLensCtaButtonType__Enum init] */

void FUN_10b75c504(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010b75cee8();
  puStack_40 = PTR_PTR_1133d30c8;
  puStack_38 = PTR_PTR_1133d30d0;
  puStack_30 = PTR_PTR_1133d30d8;
  uStack_28 = extraout_x8;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010b75ce7c();
  func_0x00010b75cec0();
  func_0x00010b75cec8(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    pcStack_48 = FUN_10b75c584;
    puStack_50 = &stack0xfffffffffffffff0;
    func_0x00010b75ce9c(PTR_PTR_11270a888);
    func_0x00010b75ce74(auStack_60);
  }
  return;
}



/* Entry: 10b75c584; end: 10b75c5b3; -[SCCCustomizationFriendSelectionContext initWithFriendsObservable:] */

void FUN_10b75c584(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b75ce9c(PTR_PTR_11270a888);
  func_0x00010b75ce74(auStack_20);
  return;
}



/* Entry: 10b75c5b4; end: 10b75c5c7; +[SCCCustomizationFriendSelectionContext valdiMarshallableObjectDescriptor] */

void FUN_10b75c5b4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5b5c8;
  param_1[1] = &PTR_s_SCBridgeObservable_110d5b628;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75c5c8; end: 10b75c6ab; -[SCCInLensCreationActiveStateParams initWithLensId:dismissObservable:onReturn:onToggleCamera:onGenerate:] */

undefined8 *
FUN_10b75c5c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  _objc_retainBlock();
  func_0x00010b75cf2c();
  _objc_retainBlock();
  func_0x00010b75cf24();
  puStack_58 = PTR_PTR_11270a890;
  uStack_60 = param_1;
  func_0x00010b75ceac();
  puVar1 = &uStack_60;
  func_0x00010b75ce74(puVar1);
  func_0x00010b75cec0();
  func_0x00010b75ceb8();
  func_0x00010b75cf2c();
  _objc_release(param_6);
  func_0x00010b75cf6c();
  return puVar1;
}



/* Entry: 10b75c6ac; end: 10b75c6cf; +[SCCInLensCreationActiveStateParams valdiMarshallableObjectDescriptor] */

void FUN_10b75c6ac(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110d5b6a0;
  param_1[1] = &PTR_s_SCBridgeObservable_110d5b778;
  param_1[2] = &PTR_s_ob_v_110d5b640;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75c6d0; end: 10b75c6f7;  */

undefined8 FUN_10b75c6d0(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10b75c6f8; end: 10b75c747;  */

void FUN_10b75c6f8(void)

{
  func_0x00010b75cf64();
  func_0x00010b75cf44();
  func_0x00010b75ce8c(FUN_10b75cdcc);
  func_0x00010b75cf84();
  func_0x00010b75cedc();
  func_0x00010b75ceb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75c748; end: 10b75c76b;  */

undefined8 FUN_10b75c748(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b75c76c; end: 10b75c7bb;  */

void FUN_10b75c76c(void)

{
  func_0x00010b75cf64();
  func_0x00010b75cf44();
  func_0x00010b75ce8c(0x10b75cdf8);
  func_0x00010b75cf84();
  func_0x00010b75cedc();
  func_0x00010b75ceb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75c7bc; end: 10b75c7e7;  */

undefined8 FUN_10b75c7bc(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2,*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10b75c7e8; end: 10b75c837;  */

void FUN_10b75c7e8(void)

{
  func_0x00010b75cf64();
  func_0x00010b75cf44();
  func_0x00010b75ce8c(0x10b75ce20);
  func_0x00010b75cf84();
  func_0x00010b75cedc();
  func_0x00010b75ceb8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b75c838; end: 10b75c923; -[SCCInLensCreationAiCreationFlowPageContext initWithNavigator:grpcService:blizzardLogger:sessionId:onReturn:onCustomizationSelected:] */

undefined8 *
FUN_10b75c838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_8);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  puStack_58 = PTR_PTR_11270a898;
  uStack_60 = param_1;
  func_0x00010b75ceac();
  puVar2 = &uStack_60;
  func_0x00010b75ce74(puVar2);
  func_0x00010b75cf24();
  func_0x00010b75cf6c();
  func_0x00010b75cec0();
  func_0x00010b75ceb8();
  _objc_release(uVar1);
  func_0x00010b75cf2c();
  return puVar2;
}



/* Entry: 10b75c924; end: 10b75c937; +[SCCInLensCreationAiCreationFlowPageContext valdiMarshallableObjectDescriptor] */

void FUN_10b75c924(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d5b788;
  param_1[1] = &PTR_s_SCValdiINavigator_110d5b890;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75c938; end: 10b75c963; -[SCCInLensCreationAiCreationFlowPageViewModel initWithLensId:] */

void FUN_10b75c938(void)

{
  func_0x00010b75ceac();
  func_0x00010b75ce60();
  return;
}



/* Entry: 10b75c964; end: 10b75c977; +[SCCInLensCreationAiCreationFlowPageViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b75c964(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_lensId_110d5b8d0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75c978; end: 10b75c9a3; -[SCCInLensCreationCameraViewportComponentViewModel initWithViewportHeight:viewportTop:] */

void FUN_10b75c978(void)

{
  func_0x00010b75ceac();
  func_0x00010b75ce60();
  return;
}



/* Entry: 10b75c9a4; end: 10b75c9b7; +[SCCInLensCreationCameraViewportComponentViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b75c9a4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d5b918;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75c9b8; end: 10b75c9f7; -[SCCInLensCreationCustomization initWithText:data:] */

void FUN_10b75c9b8(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b75ce9c(PTR_PTR_11270a8b0);
  func_0x00010b75ce74(auStack_20);
  return;
}



/* Entry: 10b75c9f8; end: 10b75ca0b; +[SCCInLensCreationCustomization valdiMarshallableObjectDescriptor] */

void FUN_10b75c9f8(undefined8 *param_1)

{
  *param_1 = &PTR_s_text_110d5b960;
  param_1[1] = &PTR_DAT_110d5ba68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75ca0c; end: 10b75cab3; -[SCCInLensCreationCustomizationFriendSelectionComponentContext initWithFilteredFriendsObservable:onTapFriend:onTapCancel:] */

undefined8 *
FUN_10b75ca0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retainBlock();
  func_0x00010b75cf5c();
  func_0x00010b75ceb8();
  puStack_48 = PTR_PTR_11270a8b8;
  uStack_50 = param_1;
  func_0x00010b75ceac();
  puVar1 = &uStack_50;
  func_0x00010b75ce74(puVar1);
  func_0x00010b75cf6c();
  func_0x00010b75cf2c();
  func_0x00010b75cec0();
  return puVar1;
}



/* Entry: 10b75cab4; end: 10b75cac7; +[SCCInLensCreationCustomizationFriendSelectionComponentContext valdiMarshallableObjectDescriptor] */

void FUN_10b75cab4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5ba90;
  param_1[1] = &PTR_s_SCBridgeObservable_110d5bb50;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cac8; end: 10b75caeb; -[SCCInLensCreationCustomizationFriendSelectionComponentViewModel init] */

void FUN_10b75cac8(void)

{
  func_0x00010b75cf08(PTR_PTR_11270a8c0);
  return;
}



/* Entry: 10b75caec; end: 10b75caff; +[SCCInLensCreationCustomizationFriendSelectionComponentViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b75caec(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &UNK_10e5db7a8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cb00; end: 10b75cb3b; -[SCCInLensCreationCustomizationPreviewViewContext initWithNavigator:grpcService:blizzardLogger:sessionId:] */

void FUN_10b75cb00(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b75ce9c(PTR_PTR_11270a8c8);
  func_0x00010b75ce74(auStack_20);
  return;
}



/* Entry: 10b75cb3c; end: 10b75cb4f; +[SCCInLensCreationCustomizationPreviewViewContext valdiMarshallableObjectDescriptor] */

void FUN_10b75cb3c(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_110d5bb68;
  param_1[1] = &PTR_s_SCValdiINavigator_110d5bc58;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cb50; end: 10b75cbdf; -[SCCInLensCreationCustomizationPreviewViewModel initWithLensId:lensConceptType:openSubscreen:onCustomizationChanged:] */

undefined8 * FUN_10b75cb50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  func_0x00010b75cf5c();
  puStack_48 = PTR_PTR_11270a8d0;
  uStack_50 = param_1;
  func_0x00010b75ceac();
  puVar1 = &uStack_50;
  func_0x00010b75ce74(puVar1);
  func_0x00010b75cf24();
  func_0x00010b75ceb8();
  return puVar1;
}



/* Entry: 10b75cbe0; end: 10b75cbf3; +[SCCInLensCreationCustomizationPreviewViewModel valdiMarshallableObjectDescriptor] */

void FUN_10b75cbe0(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110d5bca0;
  param_1[1] = &PTR_DAT_110d5bdd8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cbf4; end: 10b75cc17; -[SCCInLensCreationCustomizationSelectionAnalyticsMetadata init] */

void FUN_10b75cbf4(void)

{
  func_0x00010b75cf08(PTR_PTR_11270a8d8);
  return;
}



/* Entry: 10b75cc18; end: 10b75cc2b; +[SCCInLensCreationCustomizationSelectionAnalyticsMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b75cc18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5be10;
  param_1[1] = &PTR_DAT_110d5bea0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cc2c; end: 10b75cca7; -[SCCInLensCreationICustomizationPersistentStore initWithDeleteCustomization:deleteAllCustomizations:] */

undefined8
FUN_10b75cc2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retainBlock();
  func_0x00010b75cf5c();
  func_0x00010b75ceb8();
  func_0x00010b75ceac();
  func_0x00010b75ce60();
  func_0x00010b75cf24();
  func_0x00010b75cec0();
  return param_3;
}



/* Entry: 10b75cca8; end: 10b75ccbb; +[SCCInLensCreationICustomizationPersistentStore valdiMarshallableObjectDescriptor] */

void FUN_10b75cca8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5bec0;
  param_1[1] = &PTR_s_SCBridgeObservable_110d5bf08;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75ccbc; end: 10b75ccf3; -[SCCInLensCreationImagineLensPageControlsConfiguration initWithShowRandomizationButton:ctaButtonType:] */

void FUN_10b75ccbc(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b75ce9c(PTR_PTR_11270a8e8);
  func_0x00010b75ce74(auStack_20);
  return;
}



/* Entry: 10b75ccf4; end: 10b75cd07; +[SCCInLensCreationImagineLensPageControlsConfiguration valdiMarshallableObjectDescriptor] */

void FUN_10b75ccf4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5bf18;
  param_1[1] = &PTR_DAT_110d5c020;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cd08; end: 10b75cd33; -[SCCInLensCreationMention initWithUserId:username:] */

void FUN_10b75cd08(void)

{
  func_0x00010b75ceac();
  func_0x00010b75ce60();
  return;
}



/* Entry: 10b75cd34; end: 10b75cd47; +[SCCInLensCreationMention valdiMarshallableObjectDescriptor] */

void FUN_10b75cd34(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_userId_110d5c038;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cd48; end: 10b75cd77; -[SCCInLensCreationOnCustomizationSelectedEvent initWithLensId:customization:origin:] */

void FUN_10b75cd48(void)

{
  undefined1 auStack_20 [16];
  
  func_0x00010b75ce9c(PTR_PTR_11270a8f8);
  func_0x00010b75ce74(auStack_20);
  return;
}



/* Entry: 10b75cd78; end: 10b75cd8b; +[SCCInLensCreationOnCustomizationSelectedEvent valdiMarshallableObjectDescriptor] */

void FUN_10b75cd78(undefined8 *param_1)

{
  *param_1 = &PTR_s_lensId_110d5c080;
  param_1[1] = &PTR_DAT_110d5c0f8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cd8c; end: 10b75cdb7; -[SCCInLensCreationSourceTileMetadata initWithSourceElementAccessibilityId:sourceTileRect:] */

void FUN_10b75cd8c(void)

{
  func_0x00010b75ceac();
  func_0x00010b75ce60();
  return;
}



/* Entry: 10b75cdb8; end: 10b75cdcb; +[SCCInLensCreationSourceTileMetadata valdiMarshallableObjectDescriptor] */

void FUN_10b75cdb8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110d5c118;
  param_1[1] = &PTR_DAT_110d5c160;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b75cdcc; end: 10b75ce4f;  */

void FUN_10b75cdcc(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}


