/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f38a88; end: 104f38a97; -[SCMentionBarViewController uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104f38a88(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127175d4);
}



/* Entry: 104f38a98; end: 104f38ad7; -[SCMentionBarViewController setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f38a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127175d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f38ad8; end: 104f38bb3; -[SCMentionBarViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f38ad8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127175d4,0);
  _objc_storeStrong(param_1 + _DAT_1127175d0,0);
  _objc_storeStrong(param_1 + _DAT_1127175c4,0);
  _objc_storeStrong(param_1 + _DAT_1127175c0,0);
  _objc_storeStrong(param_1 + _DAT_1127175bc,0);
  _objc_storeStrong(param_1 + _DAT_1127175b8,0);
  _objc_storeStrong(param_1 + _DAT_1127175b4,0);
  _objc_storeStrong(param_1 + _DAT_1127175b0,0);
  _objc_storeStrong(param_1 + _DAT_1127175ac,0);
  _objc_storeStrong(param_1 + _DAT_1127175a8,0);
  _objc_destroyWeak(param_1 + _DAT_1127175a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127175cc,0);
  return;
}



/* Entry: 104f38bb4; end: 104f38cfb;  */

void FUN_104f38bb4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  
  uVar7 = param_2;
  _objc_retain(param_2);
  if (param_2 == 0) {
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = PTR_PTR_1126b28d0;
    _objc_alloc(PTR_PTR_1126b28d0);
    uVar1 = param_2;
    func_0x00010c28d600();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010bf35460(param_2);
    func_0x00010bf35460(param_2);
    uVar3 = param_2;
    func_0x00010befcde0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c08fa60();
    func_0x00010c051600((double)uVar2,(double)uVar7,(double)uVar4,puVar5);
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar6 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104f38cfc; end: 104f38d3b;  */

void FUN_104f38cfc(undefined8 param_1,long param_2)

{
  if (param_2 == 0) {
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f38d3c; end: 104f38ddf;  */

void FUN_104f38d3c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  if (param_2 == (undefined *)0x0) {
    param_2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,0,
                        &PTR____CFConstantStringClassReference_110dbba58,
                        &PTR____CFConstantStringClassReference_110dbba98,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11085cac8);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f38de0; end: 104f38fdf;  */

void FUN_104f38de0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = param_2;
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    puVar6 = (undefined *)0x0;
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b28e0;
      _objc_opt_new(PTR_PTR_1126b28e0);
      lVar1 = param_2;
      func_0x00010bf1acc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16da00(puVar3);
      _objc_release(lVar1);
      lVar1 = param_2;
      func_0x00010bf1c0a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1fbc60(puVar3);
      _objc_release(lVar1);
      puVar6 = PTR_PTR_1126b28e8;
      _objc_alloc(PTR_PTR_1126b28e8);
      lVar1 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x00010c294420(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bf85d80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05bfc0(puVar6);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c171180(puVar6);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      lVar1 = param_2;
      func_0x00010c2916e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf09c20();
      func_0x00010c0df760(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17e800(puVar6);
      _objc_release(puVar5);
      _objc_release(lVar1);
      puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c078d00(param_2);
      func_0x00010c0df6e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b2e20(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar3);
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 104f38fe0; end: 104f38feb; +[SCMentionsSearcherFactory modulePath] */

undefined ** FUN_104f38fe0(void)

{
  return &PTR____CFConstantStringClassReference_110dbbab8;
}



/* Entry: 104f38fec; end: 104f38ff3; +[SCMentionsSearcherFactory asyncStrictMode] */

undefined8 FUN_104f38fec(void)

{
  return 0;
}



/* Entry: 104f38ff4; end: 104f39053; -[SCMentionsSearcherFactory createSearcherSubscriptionWithConfig:] */

void FUN_104f38ff4(void)

{
  long lVar1;
  long unaff_x20;
  
  func_0x000104f392ac();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = unaff_x20;
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000104f392a4();
  _objc_release(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 104f39054; end: 104f391bf; +[SCMentionsSearcherFactory invokeWithJSRuntimeProvider:config:completionHandler:] */

void FUN_104f39054(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
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
  uStack_58 = 0x104f39134;
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
  FUN_104f392a4();
  _objc_release(param_3);
  return;
}



/* Entry: 104f391c0; end: 104f391e3; +[SCMentionsSearcherFactory valdiMarshallableObjectDescriptor] */

void FUN_104f391c0(undefined8 *param_1)

{
  *param_1 = &PTR_s_createSearcherSubscription_11085cae8;
  param_1[1] = &PTR_s_SCMentionsSearcherConfig_11085cb18;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 104f391e4; end: 104f391ef; +[SCMentionBarView componentPath] */

undefined ** FUN_104f391e4(void)

{
  return &PTR____CFConstantStringClassReference_110dbbad8;
}



/* Entry: 104f391f0; end: 104f39223; -[SCMentionBarView initWithViewModel:componentContext:runtime:] */

void FUN_104f391f0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e51d0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 104f39224; end: 104f39263; -[SCMentionBarView setViewModel:] */

void FUN_104f39224(void)

{
  undefined8 unaff_x20;
  
  func_0x000104f392ac();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x000104f392a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 104f39264; end: 104f392a3; -[SCMentionBarView viewModel] */

void FUN_104f39264(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f392a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 104f392a4; end: 104f392bb;  */

void FUN_104f392a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 104f392bc; end: 104f392c3; -[SCMentionsSearchInputMode__Enum init] */

void FUN_104f392bc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,4);
  return;
}



/* Entry: 104f392c4; end: 104f39307; -[SCFriendRecord initWithUserId:username:displayName:] */

void FUN_104f392c4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e51d8;
  uStack_20 = param_1;
  func_0x000104f39688();
  func_0x000104f3966c(&uStack_20);
  return;
}



/* Entry: 104f39308; end: 104f3931b; +[SCFriendRecord valdiMarshallableObjectDescriptor] */

void FUN_104f39308(undefined8 *param_1)

{
  *param_1 = &PTR_s_userId_11085cb30;
  param_1[1] = &PTR_s_SCCBitmojiInfo_11085cbf0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f3931c; end: 104f3934f; -[SCFriendRecordResult initWithFriendRecord:searchInputMode:] */

void FUN_104f3931c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e51e0;
  uStack_20 = param_1;
  func_0x000104f39688();
  func_0x000104f3966c(&uStack_20);
  return;
}



/* Entry: 104f39350; end: 104f39363; +[SCFriendRecordResult valdiMarshallableObjectDescriptor] */

void FUN_104f39350(undefined8 *param_1)

{
  *param_1 = &PTR_s_friendRecord_11085cc00;
  param_1[1] = &PTR_s_SCFriendRecord_11085cc48;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f39364; end: 104f39387; -[SCMentionBarContext init] */

void FUN_104f39364(void)

{
  func_0x000104f39674(PTR_PTR_1126e51e8);
  return;
}



/* Entry: 104f39388; end: 104f3939b; +[SCMentionBarContext valdiMarshallableObjectDescriptor] */

void FUN_104f39388(undefined8 *param_1)

{
  *param_1 = &PTR_s_onMentionsBarShown_11085cc60;
  param_1[1] = &PTR_s_SCFriendRecordResult_11085cd98;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f3939c; end: 104f393bf; -[SCMentionsDisplayMetrics init] */

void FUN_104f3939c(void)

{
  func_0x000104f39674(PTR_PTR_1126e51f0);
  return;
}



/* Entry: 104f393c0; end: 104f393cf; +[SCMentionsDisplayMetrics valdiMarshallableObjectDescriptor] */

void FUN_104f393c0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_searchWithoutAtSymbolCount_11085cdd0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f393d0; end: 104f39407; -[SCMentionsSearchResult initWithMatchingUsers:range:] */

void FUN_104f393d0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e51f8;
  uStack_20 = param_1;
  func_0x000104f39688();
  func_0x000104f3966c(&uStack_20);
  return;
}



/* Entry: 104f39408; end: 104f3941b; +[SCMentionsSearchResult valdiMarshallableObjectDescriptor] */

void FUN_104f39408(undefined8 *param_1)

{
  *param_1 = &PTR_s_matchingUsers_11085ce18;
  param_1[1] = &PTR_s_SCFriendRecordResult_11085ce78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f3941c; end: 104f3950b; -[SCMentionsSearcherConfig initWithUserInput:friendRecords:getNonParticipantRecordsObservable:isDisplayNameSearchEnabled:isExactUsernameSearchEnabled:minLengthDisplayNameSearch:minLengthPrefixMatch:onNewSearchResult:] */

undefined8 *
FUN_104f3941c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  uVar1 = param_8;
  _objc_retainBlock();
  _objc_release(param_8);
  puStack_68 = PTR_PTR_1126e5200;
  uStack_70 = param_1;
  func_0x000104f39688();
  puVar2 = &uStack_70;
  func_0x000104f3966c(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_5);
  return puVar2;
}



/* Entry: 104f3950c; end: 104f3951f; +[SCMentionsSearcherConfig valdiMarshallableObjectDescriptor] */

void FUN_104f3950c(undefined8 *param_1)

{
  *param_1 = &PTR_s_userInput_11085ce90;
  param_1[1] = &PTR_s_SCBridgeObservable_11085cf80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f39520; end: 104f395af; -[SCMentionsSearcherSubscription initWithResetSearch:unsubscribe:] */

undefined8 *
FUN_104f39520(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retainBlock();
  uVar1 = param_4;
  _objc_retainBlock();
  _objc_release(param_4);
  puStack_38 = PTR_PTR_1126e5208;
  uStack_40 = param_1;
  func_0x000104f39688();
  puVar2 = &uStack_40;
  func_0x000104f3966c(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 104f395b0; end: 104f395bf; +[SCMentionsSearcherSubscription valdiMarshallableObjectDescriptor] */

void FUN_104f395b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_resetSearch_11085cfa8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f395c0; end: 104f395f3; -[SCRange initWithStart:endExclusive:] */

void FUN_104f395c0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5210;
  uStack_20 = param_1;
  func_0x000104f39688();
  func_0x000104f3966c(&uStack_20);
  return;
}



/* Entry: 104f395f4; end: 104f39603; +[SCRange valdiMarshallableObjectDescriptor] */

void FUN_104f395f4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_start_11085cff0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f39604; end: 104f3963f; -[SCUserInput initWithText:start:before:count:] */

void FUN_104f39604(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e5218;
  uStack_20 = param_1;
  func_0x000104f39688();
  func_0x000104f3966c(&uStack_20);
  return;
}



/* Entry: 104f39640; end: 104f39693; +[SCUserInput valdiMarshallableObjectDescriptor] */

void FUN_104f39640(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_s_text_11085d038;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 104f39694; end: 104f39737; -[SCMessageForwarder initWithCoreMessageSender:textSender:] */

undefined1 *
FUN_104f39694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5220;
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f39738; end: 104f39983; -[SCMessageForwarder forwardMessage:metricsMessageType:additionalText:platformAnalytics:conversations:completionQueue:completionHandler:] */

void FUN_104f39738(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((param_3 != 0) && (lVar1 = param_7, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x00010c0c6c20(param_3);
    func_0x0001085439dc();
    func_0x000107d6b2ec();
    puVar2 = PTR_PTR_1126b28f8;
    _objc_alloc();
    func_0x00010c02b8e0();
    puVar3 = puVar2;
    func_0x00010c2a82e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2900;
    _objc_alloc(PTR_PTR_1126b2900);
    lVar1 = param_3;
    func_0x00010bf6e760(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b420(puVar2,param_2,lVar1,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar1);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104f39984;
    puStack_90 = &UNK_11085d0b0;
    _objc_retain(param_5);
    uStack_88 = param_5;
    lStack_80 = param_1;
    _objc_retain(param_7);
    lStack_78 = param_7;
    _objc_retain(param_6);
    uStack_70 = param_6;
    _objc_retain(param_9);
    uStack_68 = param_9;
    ppuVar5 = &puStack_a8;
    _objc_retainBlock(ppuVar5);
    uVar6 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6340();
    _objc_release(uVar6);
    _objc_release(ppuVar5);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
    _objc_release(uStack_88);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 104f39984; end: 104f39a33;  */

void FUN_104f39984(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e820();
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15b620();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
  }
  lVar1 = *(long *)(param_1 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000104f39a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
    return;
  }
  return;
}



/* Entry: 104f39a34; end: 104f39bcb; -[SCMessageForwarder forwardSnapMessage:metricsMessageType:snapSendInfo:conversations:completionQueue:completionHandler:] */

void FUN_104f39a34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  if ((param_3 != 0) && (lVar1 = param_6, func_0x00010bf529e0(), lVar1 != 0)) {
    func_0x00010c0c6c20(param_3);
    func_0x0001085439dc();
    func_0x000107d6b2ec();
    puVar2 = PTR_PTR_1126b28f8;
    _objc_alloc(PTR_PTR_1126b28f8);
    func_0x00010c02b8e0();
    puVar3 = puVar2;
    func_0x00010c2b9620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126b2900;
    _objc_alloc(PTR_PTR_1126b2900);
    lVar1 = param_3;
    func_0x00010bf6e760(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf21f60(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02b420(puVar2,param_2,lVar1,puVar4);
    _objc_release(puVar4);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb6340();
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f39bcc; end: 104f39bfb; -[SCMessageForwarder .cxx_destruct] */

void FUN_104f39bcc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f39bfc; end: 104f39cdf; -[SCMessageForwardingServiceProvider provide] */

void FUN_104f39bfc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b2910;
  _objc_alloc(PTR_PTR_1126b2910);
  func_0x00010c02b5a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f39ce0; end: 104f39db7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f39ce0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b2908;
    _objc_alloc(PTR_PTR_1126b2908);
    lVar1 = param_1 + _DAT_1127175e0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf523a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127175e4;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c26c760();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c005e40(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 104f39db8; end: 104f39def; -[SCMessageForwardingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f39db8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127175e4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127175e0);
  return;
}



/* Entry: 104f39df0; end: 104f3a223; -[SCNewChatsComposerViewController initWithSnapchattersDataFetcher:friendStoreFactory:groupStore:friendmojiProviderFactory:groupDataFetcher:groupDataCreator:groupDataMutator:composerRuntime:userSession:userInfoProvider:application:alertPresenterFactory:networkingClient:logger:delegate:chatEligibilityProvider:contactUserStoreFactory:searchDependencies:createNewChatsScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_104f39df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,long param_19,undefined8 param_20,
             undefined8 param_21)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  puStack_70 = PTR_PTR_1126e5228;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x000100456ca0();
    *(char *)((long)puVar1 + (long)_DAT_1127175e8) = (char)puVar2;
    lVar7 = (long)_DAT_1127175ec;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_1127175f0;
    _objc_retain(param_8);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_8;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_1127175f4;
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_7;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_1127175f8;
    _objc_retain(param_9);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_9;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_1127175fc;
    _objc_retain(param_11);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_11;
    _objc_release(uVar3);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112717600,param_17);
    lVar7 = (long)_DAT_112717604;
    _objc_retain(param_16);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_16;
    _objc_release(uVar3);
    lVar7 = (long)_DAT_112717608;
    _objc_retain(param_21);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_21;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271760c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271760c) = puVar4;
    _objc_release(uVar3);
    uVar3 = param_18;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c06fd80();
    *(char *)((long)puVar1 + (long)_DAT_112717610) = (char)uVar5;
    _objc_release(uVar3);
    puVar4 = PTR_PTR_1126b1540;
    _objc_alloc(PTR_PTR_1126b1540);
    func_0x00010bffae80();
    lVar7 = param_19;
    (**(code **)(param_19 + 0x10))(param_19,puVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    puVar2 = puVar1;
    func_0x00010be3b780();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112717614);
    *(undefined8 **)((long)puVar1 + (long)_DAT_112717614) = puVar2;
    _objc_release(uVar3);
    func_0x00010c189400(puVar1);
    func_0x00010bea3400(puVar1);
    _objc_release(lVar6);
    _objc_release(puVar4);
  }
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



/* Entry: 104f3a224; end: 104f3a8db; -[SCNewChatsComposerViewController _initializeNewChatsViewWithFriendStoreFactory:groupStore:friendmojiProviderFactory:composerRuntime:userInfoProvider:application:alertPresenterFactory:networkingClient:logger:contactUserStore:searchDependencies:shouldShowContacts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3a224(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
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
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc();
  func_0x00010c0368e0();
  lVar2 = param_3;
  (**(code **)(param_3 + 0x10))(param_3,puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126b1548;
  _objc_alloc();
  func_0x00010c046040();
  lVar2 = param_5;
  (**(code **)(param_5 + 0x10))(param_5,puVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112717600;
  _objc_loadWeakRetained();
  lVar6 = lVar2;
  func_0x00010c0b79e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  uVar7 = param_9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  lVar16 = (long)_DAT_112717608;
  func_0x00010bf54da0();
  _objc_initWeak(auStack_80,param_1);
  puVar9 = PTR_PTR_1126b2918;
  _objc_alloc(PTR_PTR_1126b2918);
  uVar7 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_104f3a8dc;
  puStack_90 = &UNK_11085d110;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010c015b80(puVar9);
  _objc_release(uVar7);
  func_0x00010c1a0660(puVar9);
  uVar7 = param_7;
  func_0x00010c269d40(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e800(puVar9);
  _objc_release(uVar7);
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010c1d29e0(puVar9);
  uVar7 = param_8;
  func_0x00010c269d40(param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c169820(puVar9);
  _objc_release(uVar7);
  func_0x00010c166b20(puVar9);
  _objc_retain(param_11);
  func_0x00010c1d29c0(puVar9);
  uVar7 = param_10;
  func_0x00010c269d40(param_10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cc960(puVar9);
  _objc_release(uVar7);
  func_0x00010c181760(puVar9);
  uVar7 = param_13;
  func_0x00010c269d40(param_13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cb560(puVar9);
  _objc_release(uVar7);
  puVar10 = PTR_PTR_1126b2920;
  _objc_alloc(PTR_PTR_1126b2920);
  uVar11 = *(ulong *)(param_1 + _DAT_1127175f0);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c0c2920();
  func_0x00010c028ca0((double)uVar12);
  _objc_release(uVar11);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c201120(puVar10);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf54da0();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b300(puVar10);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf54da0();
  func_0x00010be62e00();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8c60(puVar10);
  _objc_release(puVar13);
  puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8460(puVar10);
  _objc_release(puVar13);
  lVar14 = *(long *)(param_1 + lVar16);
  func_0x00010c10aae0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar14;
  func_0x00010bf529e0();
  _objc_release(lVar14);
  if (lVar2 != 0) {
    uVar15 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010c10aae0(uVar15);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar15;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e0bc0(puVar10);
    _objc_release(uVar7);
    _objc_release(uVar15);
  }
  puVar13 = PTR_PTR_1126b2928;
  _objc_alloc(PTR_PTR_1126b2928);
  func_0x00010c061d40();
  _objc_release(puVar10);
  _objc_release(param_11);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar9);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar1);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104f3a8dc; end: 104f3a9ab;  */

void FUN_104f3a8dc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c159ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104f3a9ac;
    puStack_48 = &UNK_110841fb0;
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_60);
    _objc_release(lStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104f3a9ac; end: 104f3aa27;  */

void FUN_104f3a9ac(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3aa28; end: 104f3aa33;  */

void FUN_104f3aa28(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf437b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_completeAndEmitIfNecessaryWithLo_1125ae790,
             param_2);
  return;
}



/* Entry: 104f3aa34; end: 104f3aae3; -[SCNewChatsComposerViewController _setCustomModalPresentationIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3aa34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126b2930;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c075ce0();
  _objc_release();
  if ((int)puVar2 != 0) {
    func_0x00010b8373e4();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_112717618;
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1797c0(*(undefined8 *)(param_1 + lVar4));
    func_0x00010c19efc0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
    func_0x00010c219b20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1c8b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setModalPresentationStyle__11264fd08,4);
    return;
  }
  return;
}



/* Entry: 104f3aae4; end: 104f3ab3b; -[SCNewChatsComposerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3aae4(long param_1)

{
  long lStack_20;
  undefined *puStack_18;
  
  if (*(char *)(param_1 + _DAT_1127175e8) == '\x01') {
    puStack_18 = PTR_PTR_1126e5228;
    lStack_20 = param_1;
    _objc_msgSendSuper2(&lStack_20,PTR_s_loadView_112604be0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_112717614));
  return;
}



/* Entry: 104f3ab3c; end: 104f3abb3; -[SCNewChatsComposerViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3ab3c(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5228;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidDisappear__112684c48);
  uVar1 = param_1;
  func_0x00010c06d1a0();
  if (((uVar1 & 1) != 0) || (uVar1 = param_1, func_0x00010c077fc0(), (int)uVar1 != 0)) {
    lVar2 = param_1 + (long)_DAT_112717600;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf74ac0();
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 104f3abb4; end: 104f3af27; -[SCNewChatsComposerViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3abb4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  long lStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126e5228;
  puStack_a0 = param_1;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_viewDidLoad_112684cd8);
  lVar9 = *(long *)(param_1 + _DAT_112717618);
  puVar1 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067a20(lVar9);
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar3 = *(long *)(param_1 + _DAT_112717604);
  func_0x00010c19d500();
  if (param_1[_DAT_1127175e8] == '\x01') {
    lVar9 = *(long *)(param_1 + _DAT_112717614);
    _objc_retain(lVar9);
    func_0x00010c219b60(lVar9);
    puVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar1);
    puStack_e0 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    lVar3 = lVar9;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    lStack_b0 = lVar3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = puVar1;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar9;
    lStack_c0 = lVar3;
    lStack_90 = lVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_1;
    lStack_d0 = lVar4;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_d8 = puVar1;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar9;
    lStack_e8 = lVar4;
    lStack_88 = lVar4;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar2;
    func_0x00010c08e400();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar9;
    lStack_80 = lVar4;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = param_1;
    func_0x00010c1408a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar8;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_e0);
    _objc_release(puVar1);
    _objc_release(lVar8);
    _objc_release(puVar7);
    _objc_release(param_1);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(lVar3);
    _objc_release(lStack_e8);
    _objc_release(puStack_d8);
    _objc_release(puStack_c8);
    _objc_release(lStack_d0);
    _objc_release(lStack_c0);
    _objc_release(lVar9);
    _objc_release(puStack_b8);
    _objc_release(puStack_a8);
    lVar3 = lStack_b0;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_f8 = FUN_104f3af28;
  puStack_118 = PTR_PTR_1126e5228;
  lStack_120 = lVar3;
  puStack_110 = puVar1;
  lStack_108 = lVar9;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_120,PTR_s_viewWillAppear__1126853f0);
  uVar10 = *(undefined8 *)(lVar3 + _DAT_11271760c);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar10);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f3af28; end: 104f3af9f; -[SCNewChatsComposerViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3af28(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5228;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillAppear__1126853f0);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271760c);
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f3afa0; end: 104f3afa3; -[SCNewChatsComposerViewController cardToExpandTransition] */

void FUN_104f3afa0(void)

{
  return;
}



/* Entry: 104f3afa4; end: 104f3afaf; -[SCNewChatsComposerViewController cardTransitionWillBeginWithView:] */

void FUN_104f3afa4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104f3afb0; end: 104f3b027; -[SCNewChatsComposerViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_104f3afb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + _DAT_112717614);
  if ((param_5 == uVar1) && (func_0x00010bf2d520(param_1,param_2,uVar1,param_4,1), (uVar1 & 1) != 0)
     ) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  _objc_release(param_5);
  return uVar2;
}



/* Entry: 104f3b028; end: 104f3b09b; -[SCNewChatsComposerViewController _handleRequestForNewChatOrCall:] */

void FUN_104f3b028(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c159ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 1) {
    func_0x00010be62220();
  }
  else {
    func_0x00010be62200(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f3b09c; end: 104f3b31f; -[SCNewChatsComposerViewController _navigateToChatOrStartCallForSingleUserOrExistingGroup:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3b09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0cfd40();
  uVar2 = param_3;
  func_0x00010c159ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c122de0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar5 = PTR_PTR_1126b01c0;
  if ((int)uVar4 == 2) {
    uVar1 = param_3;
    func_0x00010c286320();
    if ((int)uVar1 == 0) {
      func_0x00010be622e0(param_1);
    }
    else {
      _objc_initWeak(auStack_58,param_1);
      uVar1 = param_3;
      func_0x00010c159ea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bfcef60(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_60,auStack_58);
      _objc_retain(param_3);
      func_0x00010bed8f80(param_1);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
    }
  }
  else if ((int)uVar4 == 1) {
    uVar2 = param_3;
    func_0x00010c159ea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c294260(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if ((int)uVar1 == 2) {
      func_0x00010bebf960(param_1);
    }
    else {
      param_1 = param_1 + _DAT_112717600;
      _objc_loadWeakRetained(param_1);
      func_0x00010c2a1ae0();
      _objc_release(param_1);
    }
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104f3b320; end: 104f3b353;  */

void FUN_104f3b320(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be622e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3b354; end: 104f3b44b; -[SCNewChatsComposerViewController _navigateToExistingGroupAndOrStartCall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3b354(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b01c0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c159ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcf680(puVar4,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010c0cfd40();
  _objc_release(param_3);
  if ((int)uVar1 == 2) {
    func_0x00010bebf960(param_1,param_2,puVar4);
  }
  else {
    param_1 = param_1 + _DAT_112717600;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2a1ae0();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 104f3b44c; end: 104f3b523; -[SCNewChatsComposerViewController _navigateToChatOrStartCallForNewGroup:] */

void FUN_104f3b44c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdf0740(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3b524; end: 104f3b5e7;  */

void FUN_104f3b524(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar2 != 0)) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
    func_0x00010c0cfd40();
    uStack_38 = iVar1 == 2;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104f3b5e8;
    puStack_50 = &UNK_11084d5f8;
    lStack_48 = lVar2;
    _objc_retain(param_2);
    lStack_40 = param_2;
    func_0x000100162d98("APPSTORE",&puStack_68);
    _objc_release(lStack_40);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 104f3b5e8; end: 104f3b667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3b5e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdee4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__createGroupOnServerForCallWithG_1125592c8,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112717600;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c2a1ae0();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f3b668; end: 104f3b767; -[SCNewChatsComposerViewController _createNewGroupWithResult:completionHandler:] */

void FUN_104f3b668(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010be14460(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3b768; end: 104f3b7db;  */

void FUN_104f3b768(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bdf0760();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f3b7dc; end: 104f3ba6b; -[SCNewChatsComposerViewController _fetchSnapchattersWithResult:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3b7dc(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010c159ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  do {
    if (lVar8 == 0) {
      _objc_release(lVar2);
      uVar4 = *(undefined8 *)(param_1 + _DAT_1127175ec);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf00560();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = 0x15;
      lVar8 = 0;
      func_0x0001000819a8(0x15);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_4);
      _objc_retain(puVar1);
      puVar9 = puVar5;
      func_0x00010c244e80(uVar4);
      _objc_release(uVar6);
      _objc_release(puVar5);
      _objc_release(uVar4);
      _objc_release(param_4);
      _objc_release(puVar1);
      _objc_release(param_4);
      _objc_release(puVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
        return;
      }
      ___stack_chk_fail();
      _objc_retain(lVar8);
      _objc_retain(puVar9);
      if ((puVar9 == (undefined *)0x0) && (lVar7 = lVar8, func_0x00010bf529e0(), lVar7 != 0)) {
        lVar2 = lVar8;
        func_0x00010bf529e0();
        lVar10 = *(long *)(param_3 + 0x20);
        func_0x00010bf529e0();
        lVar7 = lVar8;
        if (lVar2 != lVar10) {
          lVar7 = 0;
        }
      }
      else {
        lVar7 = 0;
      }
      (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),lVar7);
      _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar8);
      return;
    }
    lVar12 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar2);
      }
      lVar11 = *(long *)(lVar12 * 8);
      lVar3 = lVar11;
      func_0x00010c122de0();
      if ((int)lVar3 == 1) {
        func_0x00010bfe5ec0(lVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
LAB_104f3b91c:
        _objc_release(lVar11);
      }
      else {
        lVar3 = lVar11;
        func_0x00010c122de0();
        if ((int)lVar3 == 2) {
          lVar3 = lVar11;
          func_0x00010bfcf540();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != 0) {
            func_0x00010bfcf540(lVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa160(puVar1);
            goto LAB_104f3b91c;
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar8 != lVar12);
    lVar8 = lVar2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 104f3ba6c; end: 104f3baf3;  */

void FUN_104f3ba6c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
    lVar2 = param_2;
    func_0x00010bf529e0();
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0();
    lVar1 = param_2;
    if (lVar2 != lVar3) {
      lVar1 = 0;
    }
  }
  else {
    lVar1 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f3baf4; end: 104f3bc43; -[SCNewChatsComposerViewController _createNewGroupWithSnapchatters:result:completionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3baf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bfcef60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c08fa60();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127175f0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf56ee0(uVar2);
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    _objc_retain(param_5);
    func_0x00010bf56680(uVar2);
    _objc_release(param_3);
    _objc_release(uVar2);
    uVar2 = param_5;
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 104f3bc44; end: 104f3bc4f;  */

void FUN_104f3bc44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f3bc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 104f3bc50; end: 104f3bd33; -[SCNewChatsComposerViewController _updateGroupNameWithGroupId:groupName:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3bc50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127175f8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104f3bd34;
  puStack_40 = &UNK_11085d1d0;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x00010c286340(uVar1,param_2,param_3,param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 104f3bd34; end: 104f3bd47;  */

void FUN_104f3bd34(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  if (param_2 == 0) {
    param_5 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000104f3bd44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_5);
  return;
}



/* Entry: 104f3bd48; end: 104f3bd9f; -[SCNewChatsComposerViewController _startCall:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3bd48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112717600;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2a1ac0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3bda0; end: 104f3bea7; -[SCNewChatsComposerViewController _createGroupOnServerForCallWithGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3bda0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127175f0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf56660(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3bea8; end: 104f3bf07;  */

void FUN_104f3bea8(long param_1,int param_2)

{
  undefined *puVar1;
  
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126b01c0;
    func_0x00010bfcf680(PTR_PTR_1126b01c0,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    func_0x00010bebf960();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 104f3bf08; end: 104f3bf63; -[SCNewChatsComposerViewController _openActionSheetWithPressedRecipient:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3bf08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112717600;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd24e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3bf64; end: 104f3bf73; -[SCNewChatsComposerViewController _newChatsModeFromCreateButtonExtensionType:] */

undefined4 FUN_104f3bf64(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_3 == 3) {
    uVar1 = 2;
  }
  return uVar1;
}



/* Entry: 104f3bf74; end: 104f3c03f; -[SCNewChatsComposerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3bf74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717608,0);
  _objc_storeStrong(param_1 + _DAT_11271760c,0);
  _objc_storeStrong(param_1 + _DAT_112717604,0);
  _objc_storeStrong(param_1 + _DAT_112717618,0);
  _objc_storeStrong(param_1 + _DAT_1127175f8,0);
  _objc_storeStrong(param_1 + _DAT_1127175f4,0);
  _objc_storeStrong(param_1 + _DAT_1127175f0,0);
  _objc_storeStrong(param_1 + _DAT_1127175ec,0);
  _objc_destroyWeak(param_1 + _DAT_112717600);
  _objc_storeStrong(param_1 + _DAT_1127175fc,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717614,0);
  return;
}



/* Entry: 104f3c040; end: 104f3c4ef; -[SCNewChatsScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c040(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  
  puVar1 = PTR_PTR_1126b2938;
  _objc_alloc();
  lVar37 = (long)_DAT_11271761c;
  lVar2 = param_1 + lVar37;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c247520();
  lVar4 = param_1 + _DAT_112717620;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a960(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126b2940;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112717624;
  _objc_loadWeakRetained();
  lVar7 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112717628;
  _objc_loadWeakRetained();
  lVar8 = lVar4;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_11271762c;
  _objc_loadWeakRetained();
  lVar9 = lVar3;
  func_0x00010bfcf320();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_112717630;
  _objc_loadWeakRetained();
  lVar10 = lVar5;
  func_0x00010bfb9920();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = (long)_DAT_112717634;
  lVar11 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010bfcf8c0();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010bfcf8a0();
  _objc_retainAutoreleasedReturnValue();
  lVar38 = param_1 + lVar38;
  _objc_loadWeakRetained();
  lVar15 = lVar38;
  func_0x00010bfcf8e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112717638;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar18;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + _DAT_11271763c;
  _objc_loadWeakRetained();
  lVar21 = lVar20;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = param_1 + _DAT_112717640;
  _objc_loadWeakRetained();
  lVar23 = lVar22;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_112717644;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010bf075a0();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1 + _DAT_112717648;
  _objc_loadWeakRetained();
  lVar27 = lVar26;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + _DAT_11271764c;
  _objc_loadWeakRetained();
  lVar29 = lVar28;
  func_0x00010c0d8300();
  _objc_retainAutoreleasedReturnValue();
  lVar30 = param_1 + _DAT_112717650;
  _objc_loadWeakRetained();
  lVar31 = lVar30;
  func_0x00010bf36440();
  _objc_retainAutoreleasedReturnValue();
  lVar32 = param_1 + _DAT_112717654;
  _objc_loadWeakRetained();
  lVar33 = lVar32;
  func_0x00010bf4a820();
  _objc_retainAutoreleasedReturnValue();
  lVar34 = param_1 + _DAT_112717658;
  _objc_loadWeakRetained();
  lVar35 = lVar34;
  func_0x00010c153860();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = param_1 + lVar37;
  _objc_loadWeakRetained();
  func_0x00010c0497a0(puVar6,param_2,lVar7,lVar8,lVar9,lVar10,lVar12,lVar14,lVar15,lVar19,lVar21,
                      lVar23,lVar25,lVar27,lVar29,puVar1,param_1,lVar31,lVar33,lVar35,lVar36);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar31);
  _objc_release(lVar30);
  _objc_release(lVar29);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar38);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar5);
  _objc_release(lVar9);
  _objc_release(lVar3);
  _objc_release(lVar8);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar2);
  param_1 = param_1 + lVar37;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f3c4f0; end: 104f3c53b; -[SCNewChatsScopeEntryPoint wantsToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c4f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271761c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf573e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3c53c; end: 104f3c587; -[SCNewChatsScopeEntryPoint didDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c53c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271761c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf573c0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3c588; end: 104f3c5f7; -[SCNewChatsScopeEntryPoint wantsToDismissWithNewChat:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c588(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271761c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57420();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3c5f8; end: 104f3c66b; -[SCNewChatsScopeEntryPoint wantsToDismissForCallWithChatIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c5f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11271761c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf57400();
  _objc_release(param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f3c66c; end: 104f3c7c3; -[SCNewChatsScopeEntryPoint handleRequestForOpeningActionSheetWithPressedRecipient:newChatsViewController:] */

void FUN_104f3c66c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int *piVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c0b79e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c122de0();
  uVar4 = param_3;
  if ((int)uVar2 == 1) {
    puVar3 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058a60(puVar3,param_2,lVar1,uVar4,0xfb,0,1,0xffffffffcf5d0adf,0x2f,param_1);
    piVar5 = (int *)&DAT_11271765c;
  }
  else {
    uVar2 = param_3;
    func_0x00010c122de0();
    if ((int)uVar2 != 2) goto LAB_104f3c7a0;
    puVar3 = PTR_PTR_1126b2858;
    _objc_alloc(PTR_PTR_1126b2858);
    func_0x00010bfe5ec0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0584e0(puVar3,param_2,lVar1,uVar4,0xfb,1,param_1,0);
    piVar5 = (int *)&DAT_112717660;
  }
  _objc_release(uVar4);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + *piVar5),param_2,puVar3);
  _objc_release(puVar3);
LAB_104f3c7a0:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f3c7c4; end: 104f3c813; -[SCNewChatsScopeEntryPoint makeUIContainerWithNewChatsViewController:] */

void FUN_104f3c7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038f40();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f3c814; end: 104f3c817; -[SCNewChatsScopeEntryPoint friendActionSheetOpenProfile:] */

void FUN_104f3c814(void)

{
  return;
}



/* Entry: 104f3c818; end: 104f3c81b; -[SCNewChatsScopeEntryPoint friendActionSheetShowCameraForSnap:] */

void FUN_104f3c818(void)

{
  return;
}



/* Entry: 104f3c81c; end: 104f3c873; -[SCNewChatsScopeEntryPoint friendActionSheetDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c81c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271765c;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f3c874; end: 104f3c877; -[SCNewChatsScopeEntryPoint groupActionSheetOpenProfileForGroupId:] */

void FUN_104f3c874(void)

{
  return;
}



/* Entry: 104f3c878; end: 104f3c87b; -[SCNewChatsScopeEntryPoint groupActionSheetShowCameraForGroupId:] */

void FUN_104f3c878(void)

{
  return;
}



/* Entry: 104f3c87c; end: 104f3c8d3; -[SCNewChatsScopeEntryPoint groupActionSheetDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c87c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112717660;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 104f3c8d4; end: 104f3c9d3; -[SCNewChatsScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f3c8d4(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112717660,0);
  _objc_storeStrong(param_1 + _DAT_11271765c,0);
  _objc_destroyWeak(param_1 + _DAT_112717658);
  _objc_destroyWeak(param_1 + _DAT_112717654);
  _objc_destroyWeak(param_1 + _DAT_112717650);
  _objc_destroyWeak(param_1 + _DAT_112717620);
  _objc_destroyWeak(param_1 + _DAT_11271764c);
  _objc_destroyWeak(param_1 + _DAT_112717648);
  _objc_destroyWeak(param_1 + _DAT_112717644);
  _objc_destroyWeak(param_1 + _DAT_112717640);
  _objc_destroyWeak(param_1 + _DAT_112717630);
  _objc_destroyWeak(param_1 + _DAT_11271762c);
  _objc_destroyWeak(param_1 + _DAT_112717628);
  _objc_destroyWeak(param_1 + _DAT_112717638);
  _objc_destroyWeak(param_1 + _DAT_112717634);
  _objc_destroyWeak(param_1 + _DAT_112717624);
  _objc_destroyWeak(param_1 + _DAT_11271761c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271763c);
  return;
}



/* Entry: 104f3c9d4; end: 104f3ca7f; -[SCComposerNewChatsLogger initWithSource:userTrackedLogger:] */

undefined1 *
FUN_104f3c9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5230;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    puVar2 = PTR_PTR_1126aeea8;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar3);
    func_0x00010beec800(*(undefined8 *)((long)puVar1 + 8));
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 104f3ca80; end: 104f3d34f; -[SCComposerNewChatsLogger completeAndEmitIfNecessaryWithLoggingResult:] */

undefined * FUN_104f3ca80(double param_1,long param_2,undefined8 param_3,undefined *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined **ppuVar14;
  double dVar15;
  long lStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  _objc_retain();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x28) = 1;
    puVar2 = param_4;
    func_0x00010c0d9c60();
    if ((int)puVar2 == 2) {
      uVar13 = 0xffffffffffffffff;
    }
    else {
      puVar2 = param_4;
      func_0x00010bf25b00();
      uVar13 = 0;
      if ((int)puVar2 - 2U < 3) {
        uVar13 = (ulong)((int)puVar2 - 1);
      }
    }
    puVar2 = PTR_PTR_1126b2868;
    _objc_opt_new();
    func_0x00010c198340();
    func_0x00010c206c40(puVar2,param_3,*(undefined8 *)(param_2 + 0x18));
    func_0x00010c19d500(puVar2,param_3,*(undefined1 *)(param_2 + 0x29));
    puVar3 = param_4;
    func_0x00010bfcef40(param_4);
    func_0x00010c1a4980(puVar2,param_3,puVar3);
    puVar3 = param_4;
    func_0x00010be63000(param_4);
    func_0x00010c1cca80(puVar2,param_3,puVar3);
    puVar3 = param_4;
    func_0x00010be63020(param_4);
    func_0x00010c1cb060(puVar2,param_3,puVar3);
    func_0x00010bf995a0(param_4);
    func_0x00010c1971c0(puVar2,param_3,(long)param_1);
    func_0x00010c1747e0(puVar2,param_3,uVar13);
    puVar3 = param_4;
    func_0x00010c0d9c60();
    uVar1 = 2;
    if ((int)puVar3 != 3) {
      uVar1 = (int)puVar3 == 2;
    }
    func_0x00010c1cd480(puVar2,param_3,uVar1);
    puVar3 = param_4;
    func_0x00010c08a380(param_4);
    func_0x00010c1b8ba0(puVar2,param_3,(int)puVar3 != 1);
    puVar4 = param_4;
    func_0x00010c268080(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dbb7b8;
    _objc_retain();
    func_0x00010bf35d60(puVar4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dbbb18;
    puStack_a8 = puVar3;
    func_0x00010bf27d80(puVar4);
    _objc_release(puVar4);
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a8,&ppuStack_d8,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    lStack_e0 = 0;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,puVar6,0,&lStack_e0)
    ;
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((puVar3 != (undefined *)0x0) && (lStack_e0 == 0)) {
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar3);
    _objc_release(puVar6);
    func_0x00010c2116e0(puVar2,param_3,ppuVar14);
    _objc_release(ppuVar14);
    _objc_release(puVar4);
    puVar7 = param_4;
    func_0x00010c156440(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dbb6d8;
    _objc_retain();
    func_0x00010bf19680(puVar7);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dbb6b8;
    puStack_a8 = puVar3;
    func_0x00010c1229a0(puVar7);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dbbaf8;
    puStack_a0 = puVar5;
    func_0x00010bfcf800(puVar7);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dbb6f8;
    puStack_98 = puVar4;
    func_0x00010bf000a0(puVar7);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110dbb718;
    puVar8 = puVar7;
    puStack_90 = puVar6;
    func_0x00010bf4a840(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010bf885a0(puVar8);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_88 = puVar9;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a8,&ppuStack_d8,5)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    lStack_e0 = 0;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,puVar10,0,&lStack_e0
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((puVar3 != (undefined *)0x0) && (lStack_e0 == 0)) {
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar3);
    _objc_release(puVar10);
    func_0x00010c1f9880(puVar2,param_3,ppuVar14);
    _objc_release(ppuVar14);
    _objc_release(puVar7);
    puVar8 = param_4;
    func_0x00010c156460(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dbb6d8;
    _objc_retain();
    func_0x00010bf19680(puVar8);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dbb6b8;
    puStack_a8 = puVar3;
    func_0x00010c1229a0(puVar8);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110dbbaf8;
    puStack_a0 = puVar5;
    func_0x00010bfcf800(puVar8);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_c0 = &PTR____CFConstantStringClassReference_110dbb6f8;
    puStack_98 = puVar4;
    func_0x00010bf000a0(puVar8);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b8 = &PTR____CFConstantStringClassReference_110db9e78;
    puStack_90 = puVar6;
    func_0x00010c153220(puVar8);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_b0 = &PTR____CFConstantStringClassReference_110dbb718;
    puVar10 = puVar8;
    puStack_88 = puVar9;
    func_0x00010bf4a840(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010bf885a0(puVar10);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_80 = puVar7;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a8,&ppuStack_d8,6)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _objc_release(puVar3);
    lStack_e0 = 0;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,puVar11,0,&lStack_e0
                       );
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((puVar3 != (undefined *)0x0) && (lStack_e0 == 0)) {
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar3);
    _objc_release(puVar11);
    func_0x00010c1f98a0(puVar2,param_3,ppuVar14);
    _objc_release(ppuVar14);
    _objc_release(puVar8);
    puVar4 = param_4;
    func_0x00010bf344e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110dbb778;
    _objc_retain();
    func_0x00010c159240(puVar4);
    func_0x00010c0df720();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110dbb798;
    puStack_a8 = puVar3;
    func_0x00010c282600(puVar4);
    _objc_release(puVar4);
    func_0x00010c0df720(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_a0 = puVar5;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_3,&puStack_a8,&ppuStack_d8,2)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar3);
    lStack_e0 = 0;
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x00010bf64b60(PTR__OBJC_CLASS___NSJSONSerialization_1126ae928,param_3,puVar6,0,&lStack_e0)
    ;
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8;
    if ((puVar3 != (undefined *)0x0) &&
       (ppuVar14 = &PTR____CFConstantStringClassReference_110daafd8, lStack_e0 == 0)) {
      ppuVar14 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x00010c008340();
    }
    _objc_release(puVar3);
    _objc_release(puVar6);
    func_0x00010c17a5a0(puVar2,param_3,ppuVar14);
    _objc_release(ppuVar14);
    _objc_release(puVar4);
    func_0x00010beec800(*(undefined8 *)(param_2 + 8));
    dVar15 = (param_1 - *(double *)(param_2 + 0x20)) * 1000.0;
    func_0x00010c2150c0(puVar2,param_3,(long)dVar15);
    func_0x00010c1533a0(param_4);
    func_0x00010c1f81a0(puVar2,param_3,(long)dVar15);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    func_0x00010c269d40(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e60();
    _objc_release(uVar12);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_4);
    return param_4;
  }
  ___stack_chk_fail();
  return (undefined *)(ulong)(byte)puVar2[0x29];
}



/* Entry: 104f3d350; end: 104f3d357; -[SCComposerNewChatsLogger firstRenderSuccessful] */

undefined1 FUN_104f3d350(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 104f3d358; end: 104f3d35f; -[SCComposerNewChatsLogger setFirstRenderSuccessful:] */

void FUN_104f3d358(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x29) = param_3;
  return;
}



/* Entry: 104f3d360; end: 104f3d38f; -[SCComposerNewChatsLogger .cxx_destruct] */

void FUN_104f3d360(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f3d390; end: 104f3d537; -[SCSnapReplayController initWithDelegate:actionHandler:legacyChatTooltipService:plusFeatureGating:plusSubscribeScopeExposer:plusSubscribeScopeServices:userId:uiContainer:] */

undefined1 *
FUN_104f3d390(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  puStack_68 = PTR_PTR_1126e5238;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x58) = 0xffffffffffffffff;
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



/* Entry: 104f3d538; end: 104f3d683; -[SCSnapReplayController attemptReplayOfSnap:inConversation:isGroupConversation:] */

void FUN_104f3d538(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104f3d684;
  puStack_78 = &UNK_11085d230;
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_3);
  ppuVar1 = &puStack_90;
  uStack_70 = param_3;
  uStack_60 = param_5;
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain();
  func_0x00010bfa89a0(uVar2);
  _objc_release(ppuVar1);
  _objc_release(ppuVar1);
  _objc_release(uStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f3d684; end: 104f3d6db;  */

void FUN_104f3d684(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be298c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


