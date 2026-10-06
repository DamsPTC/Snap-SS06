/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af9e254; end: 10af9e25f; +[SCCBusinessCreateBusinessBlizzardHelper modulePath] */

undefined ** FUN_10af9e254(void)

{
  return &PTR____CFConstantStringClassReference_110f40518;
}



/* Entry: 10af9e260; end: 10af9e267; +[SCCBusinessCreateBusinessBlizzardHelper asyncStrictMode] */

undefined8 FUN_10af9e260(void)

{
  return 0;
}



/* Entry: 10af9e268; end: 10af9e2e3; -[SCCBusinessCreateBusinessBlizzardHelper createBusinessBlizzardHelperWithBusinessMetadata:pageWorkflowSessionId:] */

void FUN_10af9e268(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010af9e698();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9e688();
  _objc_release(param_3);
  func_0x00010af9e690();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af9e2e4; end: 10af9e463; +[SCCBusinessCreateBusinessBlizzardHelper invokeWithJSRuntimeProvider:businessMetadata:pageWorkflowSessionId:completionHandler:] */

void FUN_10af9e2e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  func_0x00010af9e698();
  _objc_retain(param_6);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10af9e3dc;
  puStack_58 = &UNK_1108465d0;
  lStack_50 = param_3;
  uStack_48 = param_4;
  uStack_40 = param_5;
  uStack_38 = param_6;
  _objc_retain(param_6);
  func_0x00010af9e698();
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_70);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  func_0x00010af9e690();
  _objc_release(param_5);
  func_0x00010af9e688();
  _objc_release(param_3);
  return;
}



/* Entry: 10af9e464; end: 10af9e487; +[SCCBusinessCreateBusinessBlizzardHelper valdiMarshallableObjectDescriptor] */

void FUN_10af9e464(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4598;
  param_1[1] = &PTR_DAT_110ca45c8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af9e488; end: 10af9e4ab; +[SCCBusinessIAdPreviewDisplayer valdiMarshallableObjectDescriptor] */

void FUN_10af9e488(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4610;
  param_1[1] = &PTR_DAT_110ca4658;
  param_1[2] = &PTR_s_ob_v_110ca45e0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e4ac; end: 10af9e4d3;  */

undefined8 FUN_10af9e4ac(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(uint *)(param_2 + 1) & 1);
  return 0;
}



/* Entry: 10af9e4d4; end: 10af9e54f;  */

void FUN_10af9e4d4(undefined8 param_1)

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
  pcStack_38 = FUN_10af9e638;
  puStack_30 = &UNK_110842508;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  func_0x00010af9e688();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10af9e550; end: 10af9e5ab;  */

undefined8 FUN_10af9e550(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df160;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010af9e688();
  return param_1;
}



/* Entry: 10af9e5ac; end: 10af9e5bf; +[SCCBusinessIBrainTreeTokenService valdiMarshallableObjectDescriptor] */

void FUN_10af9e5ac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4668;
  param_1[1] = &PTR_DAT_110ca4698;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e5c0; end: 10af9e5d3; +[SCCBusinessIBusinessBlizzardHelper valdiMarshallableObjectDescriptor] */

void FUN_10af9e5c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca46b0;
  param_1[1] = &PTR_DAT_110ca4728;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e5d4; end: 10af9e5e7; +[SCCBusinessIBusinessIAPErrorInfo valdiMarshallableObjectDescriptor] */

void FUN_10af9e5d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca4740;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e5e8; end: 10af9e5fb; +[SCCBusinessIBusinessPageLogger valdiMarshallableObjectDescriptor] */

void FUN_10af9e5e8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4800;
  param_1[1] = &PTR_DAT_110ca4938;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e5fc; end: 10af9e60f; +[SCCBusinessICreditCard valdiMarshallableObjectDescriptor] */

void FUN_10af9e5fc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_firstName_110ca4978;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e610; end: 10af9e623; +[SCCBusinessIEmailLauncher valdiMarshallableObjectDescriptor] */

void FUN_10af9e610(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4ab0;
  param_1[1] = &PTR_DAT_110ca4af8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e624; end: 10af9e637; +[SCCBusinessIWorkflowRouter valdiMarshallableObjectDescriptor] */

void FUN_10af9e624(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_start_110ca4b08;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e638; end: 10af9e667;  */

void FUN_10af9e638(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10af9e668; end: 10af9e69f;  */

void FUN_10af9e668(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e6a0; end: 10af9e6bb; +[SCCMediaProcessorIMemoriesTranscoder valdiMarshallableObjectDescriptor] */

void FUN_10af9e6a0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4b38;
  param_1[1] = &PTR_DAT_110ca4b80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e6bc; end: 10af9e6f7;  */

undefined8 FUN_10af9e6bc(undefined8 param_1)

{
  func_0x00010af9e7d4();
  func_0x00010af9e7dc();
  func_0x00010af9e7a0();
  func_0x00010af9e7b0();
  return param_1;
}



/* Entry: 10af9e6f8; end: 10af9e70b; +[SCCMediaProcessorITempFile valdiMarshallableObjectDescriptor] */

void FUN_10af9e6f8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_getUrl_110ca4b98;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e70c; end: 10af9e747;  */

undefined8 FUN_10af9e70c(undefined8 param_1)

{
  func_0x00010af9e7d4();
  func_0x00010af9e7dc();
  func_0x00010af9e7a0();
  func_0x00010af9e7b0();
  return param_1;
}



/* Entry: 10af9e748; end: 10af9e763; +[SCCMediaProcessorITempFileProvider valdiMarshallableObjectDescriptor] */

void FUN_10af9e748(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4bf8;
  param_1[1] = &PTR_DAT_110ca4c28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9e764; end: 10af9e79f;  */

undefined8 FUN_10af9e764(undefined8 param_1)

{
  func_0x00010af9e7d4();
  func_0x00010af9e7dc();
  func_0x00010af9e7a0();
  func_0x00010af9e7b0();
  return param_1;
}



/* Entry: 10af9e7a0; end: 10af9e7e3;  */

undefined8 FUN_10af9e7a0(undefined8 param_1)

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



/* Entry: 10af9e7e4; end: 10af9e7ef; +[SCCProfileFindFriendsSeeAllPage componentPath] */

undefined ** FUN_10af9e7e4(void)

{
  return &PTR____CFConstantStringClassReference_110f40538;
}



/* Entry: 10af9e7f0; end: 10af9e813; -[SCCProfileFindFriendsSeeAllPage initWithViewModel:componentContext:runtime:] */

void FUN_10af9e7f0(void)

{
  FUN_10af9e934(PTR_PTR_112703558);
  return;
}



/* Entry: 10af9e814; end: 10af9e84b; -[SCCProfileFindFriendsSeeAllPage setViewModel:] */

void FUN_10af9e814(void)

{
  func_0x00010af9e950();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9e960();
  func_0x00010af9e948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9e84c; end: 10af9e88b; -[SCCProfileFindFriendsSeeAllPage viewModel] */

void FUN_10af9e84c(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9e948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af9e88c; end: 10af9e897; +[SCCProfileQuickAddVerticalListRootComponent componentPath] */

undefined ** FUN_10af9e88c(void)

{
  return &PTR____CFConstantStringClassReference_110f40558;
}



/* Entry: 10af9e898; end: 10af9e8bb; -[SCCProfileQuickAddVerticalListRootComponent initWithViewModel:componentContext:runtime:] */

void FUN_10af9e898(void)

{
  FUN_10af9e934(PTR_PTR_112703560);
  return;
}



/* Entry: 10af9e8bc; end: 10af9e8f3; -[SCCProfileQuickAddVerticalListRootComponent setViewModel:] */

void FUN_10af9e8bc(void)

{
  func_0x00010af9e950();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9e960();
  func_0x00010af9e948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9e8f4; end: 10af9e933; -[SCCProfileQuickAddVerticalListRootComponent viewModel] */

void FUN_10af9e8f4(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9e948();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10af9e934; end: 10af9e96b;  */

void FUN_10af9e934(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10af9e96c; end: 10af9e977; +[SCCSaturnCalendarCreateCellView componentPath] */

undefined ** FUN_10af9e96c(void)

{
  return &PTR____CFConstantStringClassReference_110f40578;
}



/* Entry: 10af9e978; end: 10af9e997; -[SCCSaturnCalendarCreateCellView initWithViewModel:componentContext:runtime:] */

void FUN_10af9e978(void)

{
  FUN_10af9ebcc(PTR_PTR_112703568);
  return;
}



/* Entry: 10af9e998; end: 10af9e9cb; -[SCCSaturnCalendarCreateCellView setViewModel:] */

void FUN_10af9e998(void)

{
  func_0x00010af9ebe0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebf0();
  func_0x00010af9ec08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9e9cc; end: 10af9ea03; -[SCCSaturnCalendarCreateCellView viewModel] */

void FUN_10af9e9cc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9ea04; end: 10af9ea0f; +[SCCSaturnCalendarEventProfileCellView componentPath] */

undefined ** FUN_10af9ea04(void)

{
  return &PTR____CFConstantStringClassReference_110f40598;
}



/* Entry: 10af9ea10; end: 10af9ea2f; -[SCCSaturnCalendarEventProfileCellView initWithViewModel:componentContext:runtime:] */

void FUN_10af9ea10(void)

{
  FUN_10af9ebcc(PTR_PTR_112703570);
  return;
}



/* Entry: 10af9ea30; end: 10af9ea63; -[SCCSaturnCalendarEventProfileCellView setViewModel:] */

void FUN_10af9ea30(void)

{
  func_0x00010af9ebe0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebf0();
  func_0x00010af9ec08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9ea64; end: 10af9ea9b; -[SCCSaturnCalendarEventProfileCellView viewModel] */

void FUN_10af9ea64(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9ea9c; end: 10af9eaa7; +[SCCSaturnCalendarListView componentPath] */

undefined ** FUN_10af9ea9c(void)

{
  return &PTR____CFConstantStringClassReference_110f405b8;
}



/* Entry: 10af9eaa8; end: 10af9eac7; -[SCCSaturnCalendarListView initWithViewModel:componentContext:runtime:] */

void FUN_10af9eaa8(void)

{
  FUN_10af9ebcc(PTR_PTR_112703578);
  return;
}



/* Entry: 10af9eac8; end: 10af9eafb; -[SCCSaturnCalendarListView setViewModel:] */

void FUN_10af9eac8(void)

{
  func_0x00010af9ebe0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebf0();
  func_0x00010af9ec08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9eafc; end: 10af9eb33; -[SCCSaturnCalendarListView viewModel] */

void FUN_10af9eafc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9eb34; end: 10af9eb3f; +[SCCSaturnCalendarViewAllButton componentPath] */

undefined ** FUN_10af9eb34(void)

{
  return &PTR____CFConstantStringClassReference_110f405d8;
}



/* Entry: 10af9eb40; end: 10af9eb5f; -[SCCSaturnCalendarViewAllButton initWithViewModel:componentContext:runtime:] */

void FUN_10af9eb40(void)

{
  FUN_10af9ebcc(PTR_PTR_112703580);
  return;
}



/* Entry: 10af9eb60; end: 10af9eb93; -[SCCSaturnCalendarViewAllButton setViewModel:] */

void FUN_10af9eb60(void)

{
  func_0x00010af9ebe0();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebf0();
  func_0x00010af9ec08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9eb94; end: 10af9ebcb; -[SCCSaturnCalendarViewAllButton viewModel] */

void FUN_10af9eb94(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9ebfc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9ebcc; end: 10af9ec27;  */

void FUN_10af9ebcc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10af9ec28; end: 10af9ec33; +[SCCCalendarCreateKronosEventShareSender modulePath] */

undefined ** FUN_10af9ec28(void)

{
  return &PTR____CFConstantStringClassReference_110f405f8;
}



/* Entry: 10af9ec34; end: 10af9ec3b; +[SCCCalendarCreateKronosEventShareSender asyncStrictMode] */

undefined8 FUN_10af9ec34(void)

{
  return 0;
}



/* Entry: 10af9ec3c; end: 10af9ec77; -[SCCCalendarCreateKronosEventShareSender createKronosEventShareSender] */

void FUN_10af9ec3c(long param_1)

{
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9ec78; end: 10af9ed27; +[SCCCalendarCreateKronosEventShareSender invokeWithJSRuntimeProvider:completionHandler:] */

void FUN_10af9ec78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

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
  pcStack_40 = FUN_10af9ed28;
  puStack_38 = &UNK_11084aaa8;
  lStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(lStack_30);
  func_0x00010af9f1d0();
  _objc_release(param_3);
  return;
}



/* Entry: 10af9ed28; end: 10af9edaf;  */

void FUN_10af9ed28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d90d8;
  func_0x00010bfbc0e0(PTR_PTR_1126d90d8,param_2,*(undefined8 *)(param_1 + 0x20));
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



/* Entry: 10af9edb0; end: 10af9edd3; +[SCCCalendarCreateKronosEventShareSender valdiMarshallableObjectDescriptor] */

void FUN_10af9edb0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4c38;
  param_1[1] = &PTR_DAT_110ca4c68;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af9edd4; end: 10af9edef; +[SCCCalendarEventDataFetching valdiMarshallableObjectDescriptor] */

void FUN_10af9edd4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4c78;
  param_1[1] = &PTR_DAT_110ca4ca8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9edf0; end: 10af9ee03; +[SCCCalendarKronosEventShareSender valdiMarshallableObjectDescriptor] */

void FUN_10af9edf0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110ca4cb8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10af9ee04; end: 10af9ee0f; +[SCCCalendarCalendarParticipantsViewer componentPath] */

undefined ** FUN_10af9ee04(void)

{
  return &PTR____CFConstantStringClassReference_110f40618;
}



/* Entry: 10af9ee10; end: 10af9ee2f; -[SCCCalendarCalendarParticipantsViewer initWithViewModel:componentContext:runtime:] */

void FUN_10af9ee10(void)

{
  FUN_10af9f194(PTR_PTR_112703588);
  return;
}



/* Entry: 10af9ee30; end: 10af9ee63; -[SCCCalendarCalendarParticipantsViewer setViewModel:] */

void FUN_10af9ee30(void)

{
  func_0x00010af9f1a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1c4();
  func_0x00010af9f1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9ee64; end: 10af9ee9b; -[SCCCalendarCalendarParticipantsViewer viewModel] */

void FUN_10af9ee64(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9ee9c; end: 10af9eea7; +[SCCCalendarCreateEventComponent componentPath] */

undefined ** FUN_10af9ee9c(void)

{
  return &PTR____CFConstantStringClassReference_110f40638;
}



/* Entry: 10af9eea8; end: 10af9eec7; -[SCCCalendarCreateEventComponent initWithViewModel:componentContext:runtime:] */

void FUN_10af9eea8(void)

{
  FUN_10af9f194(PTR_PTR_112703590);
  return;
}



/* Entry: 10af9eec8; end: 10af9eefb; -[SCCCalendarCreateEventComponent setViewModel:] */

void FUN_10af9eec8(void)

{
  func_0x00010af9f1a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1c4();
  func_0x00010af9f1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9eefc; end: 10af9ef33; -[SCCCalendarCreateEventComponent viewModel] */

void FUN_10af9eefc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9ef34; end: 10af9ef3f; +[SCCCalendarCreateEventParticipantPicker componentPath] */

undefined ** FUN_10af9ef34(void)

{
  return &PTR____CFConstantStringClassReference_110f40658;
}



/* Entry: 10af9ef40; end: 10af9ef5f; -[SCCCalendarCreateEventParticipantPicker initWithViewModel:componentContext:runtime:] */

void FUN_10af9ef40(void)

{
  FUN_10af9f194(PTR_PTR_112703598);
  return;
}



/* Entry: 10af9ef60; end: 10af9ef93; -[SCCCalendarCreateEventParticipantPicker setViewModel:] */

void FUN_10af9ef60(void)

{
  func_0x00010af9f1a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1c4();
  func_0x00010af9f1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9ef94; end: 10af9efcb; -[SCCCalendarCreateEventParticipantPicker viewModel] */

void FUN_10af9ef94(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9efcc; end: 10af9efd7; +[SCCCalendarEventDetailViewComponent componentPath] */

undefined ** FUN_10af9efcc(void)

{
  return &PTR____CFConstantStringClassReference_110f40678;
}



/* Entry: 10af9efd8; end: 10af9eff7; -[SCCCalendarEventDetailViewComponent initWithViewModel:componentContext:runtime:] */

void FUN_10af9efd8(void)

{
  FUN_10af9f194(PTR_PTR_1127035a0);
  return;
}



/* Entry: 10af9eff8; end: 10af9f02b; -[SCCCalendarEventDetailViewComponent setViewModel:] */

void FUN_10af9eff8(void)

{
  func_0x00010af9f1a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1c4();
  func_0x00010af9f1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9f02c; end: 10af9f063; -[SCCCalendarEventDetailViewComponent viewModel] */

void FUN_10af9f02c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9f064; end: 10af9f06f; +[SCCCalendarEventShareMessage componentPath] */

undefined ** FUN_10af9f064(void)

{
  return &PTR____CFConstantStringClassReference_110f40698;
}



/* Entry: 10af9f070; end: 10af9f08f; -[SCCCalendarEventShareMessage initWithViewModel:componentContext:runtime:] */

void FUN_10af9f070(void)

{
  FUN_10af9f194(PTR_PTR_1127035a8);
  return;
}



/* Entry: 10af9f090; end: 10af9f0c3; -[SCCCalendarEventShareMessage setViewModel:] */

void FUN_10af9f090(void)

{
  func_0x00010af9f1a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1c4();
  func_0x00010af9f1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9f0c4; end: 10af9f0fb; -[SCCCalendarEventShareMessage viewModel] */

void FUN_10af9f0c4(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9f0fc; end: 10af9f107; +[SCCCalendarKronosEventStatusView componentPath] */

undefined ** FUN_10af9f0fc(void)

{
  return &PTR____CFConstantStringClassReference_110f406b8;
}



/* Entry: 10af9f108; end: 10af9f127; -[SCCCalendarKronosEventStatusView initWithViewModel:componentContext:runtime:] */

void FUN_10af9f108(void)

{
  FUN_10af9f194(PTR_PTR_1127035b0);
  return;
}



/* Entry: 10af9f128; end: 10af9f15b; -[SCCCalendarKronosEventStatusView setViewModel:] */

void FUN_10af9f128(void)

{
  func_0x00010af9f1a8();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1c4();
  func_0x00010af9f1d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10af9f15c; end: 10af9f193; -[SCCCalendarKronosEventStatusView viewModel] */

void FUN_10af9f15c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f1b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af9f194; end: 10af9f1fb;  */

void FUN_10af9f194(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10af9f1fc; end: 10af9f207; +[SCCBaseConversationListSelectorBaseConversationListSelector componentPath] */

undefined ** FUN_10af9f1fc(void)

{
  return &PTR____CFConstantStringClassReference_110f406d8;
}



/* Entry: 10af9f208; end: 10af9f23b; -[SCCBaseConversationListSelectorBaseConversationListSelector initWithViewModel:componentContext:runtime:] */

void FUN_10af9f208(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127035b8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10af9f23c; end: 10af9f28b; -[SCCBaseConversationListSelectorBaseConversationListSelector setViewModel:] */

void FUN_10af9f23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af9f28c; end: 10af9f2cf; -[SCCBaseConversationListSelectorBaseConversationListSelector viewModel] */

void FUN_10af9f28c(undefined8 param_1)

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



/* Entry: 10af9f2d0; end: 10af9f2db; +[SCCNewChatsView componentPath] */

undefined ** FUN_10af9f2d0(void)

{
  return &PTR____CFConstantStringClassReference_110f406f8;
}



/* Entry: 10af9f2dc; end: 10af9f30f; -[SCCNewChatsView initWithViewModel:componentContext:runtime:] */

void FUN_10af9f2dc(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1127035c0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10af9f310; end: 10af9f35f; -[SCCNewChatsView setViewModel:] */

void FUN_10af9f310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10af9f360; end: 10af9f3a3; -[SCCNewChatsView viewModel] */

void FUN_10af9f360(undefined8 param_1)

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



/* Entry: 10af9f3a4; end: 10af9f3a7; +[SCCSearchApiUiCreateLocalSearchIndex modulePath] */

undefined ** FUN_10af9f3a4(void)

{
  return &PTR____CFConstantStringClassReference_110f40718;
}



/* Entry: 10af9f3a8; end: 10af9f3af; +[SCCSearchApiUiCreateLocalSearchIndex asyncStrictMode] */

undefined8 FUN_10af9f3a8(void)

{
  return 0;
}



/* Entry: 10af9f3b0; end: 10af9f3fb; -[SCCSearchApiUiCreateLocalSearchIndex createLocalSearchIndexWithFlavorContext:dependencies:] */

void FUN_10af9f3b0(void)

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



/* Entry: 10af9f3fc; end: 10af9f4ef; +[SCCSearchApiUiCreateLocalSearchIndex invokeWithJSRuntimeProvider:flavorContext:dependencies:completionHandler:] */

void FUN_10af9f3fc(void)

{
  long unaff_x21;
  undefined8 uStack_50;
  undefined8 uStack_40;
  
  func_0x00010af9f82c();
  _objc_retain();
  (**(code **)(unaff_x21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010af9f8c4();
  func_0x00010af9f7fc(0x10af9f488);
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



/* Entry: 10af9f4f0; end: 10af9f52f; +[SCCSearchApiUiCreateLocalSearchIndex valdiMarshallableObjectDescriptor] */

void FUN_10af9f4f0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110ca4d18;
  param_1[1] = &PTR_DAT_110ca4d48;
  param_1[2] = &PTR_DAT_110ca4ce8;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 10af9f530; end: 10af9f5a3;  */

void FUN_10af9f530(undefined8 param_1)

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
  pcStack_38 = FUN_10af9f7b8;
  puStack_30 = &UNK_110ca4f10;
  uStack_28 = param_1;
  func_0x00010af9f890();
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  func_0x00010af9f898();
  func_0x00010af9f824();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 10af9f5a4; end: 10af9f5a7; +[SCCSearchApiUiCreateUniversalSearchService modulePath] */

undefined ** FUN_10af9f5a4(void)

{
  return &PTR____CFConstantStringClassReference_110f40718;
}



/* Entry: 10af9f5a8; end: 10af9f5af; +[SCCSearchApiUiCreateUniversalSearchService asyncStrictMode] */

undefined8 FUN_10af9f5a8(void)

{
  return 0;
}


