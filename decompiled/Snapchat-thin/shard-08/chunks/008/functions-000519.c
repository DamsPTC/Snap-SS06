/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1065ba8e8; end: 1065ba8eb;  */

void FUN_1065ba8e8(void)

{
  return;
}



/* Entry: 1065ba8ec; end: 1065ba8ef; -[SCMessagingIntentRemover didUpdateCustomStoriesWithPublicationIds:] */

void FUN_1065ba8ec(void)

{
  return;
}



/* Entry: 1065ba8f0; end: 1065ba8f3; -[SCMessagingIntentRemover didUpdatePostableStories] */

void FUN_1065ba8f0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beddef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePrivateStories_112595160);
  return;
}



/* Entry: 1065ba8f4; end: 1065ba8fb; -[SCMessagingIntentRemover _shouldDeleteIntentForGroup:] */

void FUN_1065ba8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c076eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isLocked_1125fb5b8);
  return;
}



/* Entry: 1065ba8fc; end: 1065ba983; -[SCMessagingIntentRemover _deleteAllIntents:] */

void FUN_1065ba8fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1065ba984;
  puStack_30 = &UNK_110859a38;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf6b400(puVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1065ba984; end: 1065ba997;  */

void FUN_1065ba984(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001065ba990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1065ba998; end: 1065baa97; -[SCMessagingIntentRemover _deleteIntentsForConversationCleared:] */

void FUN_1065ba998(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1065baa98;
  puStack_58 = &UNK_110843540;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0bf260(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 1065baa98; end: 1065bab27;  */

void FUN_1065baa98(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfa220();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065bab28; end: 1065babf3; -[SCMessagingIntentRemover _deleteIntentsForGroupWithUserId:] */

void FUN_1065bab28(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126cbc88;
    func_0x00010c0e8300(PTR_PTR_1126cbc88,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
    puVar1 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1065babf4;
    puStack_40 = &UNK_110849810;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bf6c040(puVar1,param_2,param_3,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065babf4; end: 1065babf7;  */

void FUN_1065babf4(void)

{
  return;
}



/* Entry: 1065babf8; end: 1065bad67; -[SCMessagingIntentRemover _deleteIntentsForGroupWithGroupId:] */

void FUN_1065babf8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar3 = PTR_PTR_1126cbc88;
    func_0x00010bfcf600(PTR_PTR_1126cbc88,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar3);
    puVar2 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1065bad68;
    puStack_70 = &UNK_110849810;
    _objc_retain(param_3);
    lStack_68 = param_3;
    func_0x00010bf6c040(puVar2,param_2,param_3,&puStack_88);
    puVar2 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_60 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x1065bad6c;
    puStack_98 = &UNK_110849810;
    _objc_retain(param_3);
    lStack_90 = param_3;
    func_0x00010bf6c060(puVar2,param_2,puVar4,&puStack_b0);
    _objc_release(puVar4);
    _objc_release(lStack_90);
    _objc_release(lStack_68);
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1065bad68; end: 1065bad6f;  */

void FUN_1065bad68(void)

{
  return;
}



/* Entry: 1065bad70; end: 1065bae3b; -[SCMessagingIntentRemover _deleteIntentsForStoryWithStoryId:] */

void FUN_1065bad70(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar2 = PTR_PTR_1126cbc88;
    func_0x00010c25bba0(PTR_PTR_1126cbc88,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,puVar2);
    puVar1 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1065bae3c;
    puStack_40 = &UNK_110849810;
    _objc_retain(param_3);
    lStack_38 = param_3;
    func_0x00010bf6c040(puVar1,param_2,param_3,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1065bae3c; end: 1065bae3f;  */

void FUN_1065bae3c(void)

{
  return;
}



/* Entry: 1065bae40; end: 1065bae47; -[SCMessagingIntentRemover deleteIntentStartEventObservable] */

undefined8 FUN_1065bae40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1065bae48; end: 1065bae9b; -[SCMessagingIntentRemover .cxx_destruct] */

void FUN_1065bae48(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065bae9c; end: 1065bb02f; -[SCMessagingIntentStoryDonator initWithUserId:featureSettingsService:myStoriesDataCoordinator:bitmojiAvatarIdProvider:bitmojiSelfieIdProvider:bitmojiSelfieFetcher:intentDonator:] */

undefined1 *
FUN_1065bae9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

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
  puStack_68 = PTR_PTR_1126f1e70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065bb030; end: 1065bb0ef; -[SCMessagingIntentStoryDonator didUpdateMyStoriesDataRequest:] */

void FUN_1065bb030(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf91040();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1065bb0f0;
    puStack_40 = &UNK_110850398;
    lStack_38 = param_1;
    func_0x00010c0be260(param_3,param_2,0,0,0,0,0,0,&puStack_58,0,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bb0f0; end: 1065bb0ff;  */

void FUN_1065bb0f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__donateStoryIntentWithStoryId_di_11255f078,
             param_2,param_3);
  return;
}



/* Entry: 1065bb100; end: 1065bb24b; -[SCMessagingIntentStoryDonator _donateStoryIntentWithStoryId:displayName:] */

void FUN_1065bb100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0();
  if ((int)uVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeab80(param_1);
    _objc_release(puVar2);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010be0fee0(param_1);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065bb24c; end: 1065bb29f;  */

void FUN_1065bb24c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdeab80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065bb2a0; end: 1065bb563; -[SCMessagingIntentStoryDonator _fetchBitmojiForCurrentUser:] */

void FUN_1065bb2a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar12 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar12);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if ((lVar3 == 0) || (lVar3 = lVar1, func_0x00010c08fa60(), lVar3 == 0)) {
    (**(code **)(param_3 + 0x10))(param_3,0);
  }
  else {
    puVar4 = PTR_PTR_1126afd38;
    func_0x00010bf1b4c0(PTR_PTR_1126afd38);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c2bc360();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c2a8ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c2b8160();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010c2b78c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar8;
    func_0x00010bf21f60(puVar8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b19f8;
    func_0x00010c258040();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = 0xffffffffffff8000;
    func_0x0001000819a8(0xffffffffffff8000,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010bfaa020(uVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar9);
    _objc_release(param_3);
    _objc_release(puVar8);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(uVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001065bb56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))();
  return;
}



/* Entry: 1065bb564; end: 1065bb56f;  */

void FUN_1065bb564(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001065bb56c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1065bb570; end: 1065bb6bf; -[SCMessagingIntentStoryDonator _createAndDonateIntentWithStoryId:displayName:image:] */

void FUN_1065bb570(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010bdeeca0(param_1,param_2,param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___INInteraction_1126cbc50;
    _objc_alloc(PTR__OBJC_CLASS___INInteraction_1126cbc50);
    func_0x00010c01e5a0();
    func_0x00010c1a4780();
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1065bb6c0;
    puStack_78 = &UNK_11092ddb8;
    lStack_70 = param_1;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010bf88080(uVar3,param_2,puVar2,&puStack_90);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065bb6c0; end: 1065bb6c3;  */

void FUN_1065bb6c0(void)

{
  return;
}



/* Entry: 1065bb6c4; end: 1065bb7d3; -[SCMessagingIntentStoryDonator _createIntentWithStoryId:displayName:image:] */

void FUN_1065bb6c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___INSpeakableString_1126cbc58;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c04b1e0();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70;
  _objc_alloc(PTR__OBJC_CLASS___INSendMessageIntent_1126cbc70);
  func_0x00010c03d580();
  _objc_release(param_3);
  if (param_5 != 0) {
    lVar3 = param_5;
    FUN_1065b8618(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___INImage_1126cbc78;
    func_0x00010bfe9800(PTR__OBJC_CLASS___INImage_1126cbc78,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9fa0(puVar2,param_2,puVar4,&PTR____CFConstantStringClassReference_110e54e38);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(puVar1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065bb7d4; end: 1065bb833; -[SCMessagingIntentStoryDonator .cxx_destruct] */

void FUN_1065bb7d4(long param_1)

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



/* Entry: 1065bb834; end: 1065bb83f; -[SCMessagingSystemIntentDonator donateInteraction:completion:] */

void FUN_1065bb834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf880b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_donateInteractionWithCompletion__1125bf9d0,param_4);
  return;
}



/* Entry: 1065bb840; end: 1065bb8ab; +[SCMessagingIntentDeletionStartEvent groupWithGroupId:] */

void FUN_1065bb840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbc88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065bb8ac; end: 1065bb90f; +[SCMessagingIntentDeletionStartEvent oneOnOneWithUserId:] */

void FUN_1065bb8ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbc88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065bb910; end: 1065bb97b; +[SCMessagingIntentDeletionStartEvent storyWithStoryId:] */

void FUN_1065bb910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cbc88;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065bb97c; end: 1065bb99f; -[SCMessagingIntentDeletionStartEvent copyWithZone:] */

undefined8 FUN_1065bb97c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1065bb9a0; end: 1065bba23; -[SCMessagingIntentDeletionStartEvent hash] */

void FUN_1065bb9a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126f1e78;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065bba24; end: 1065bba67; -[SCMessagingIntentDeletionStartEvent internalInit] */

void FUN_1065bba24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f1e78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065bba68; end: 1065bbb37; -[SCMessagingIntentDeletionStartEvent isEqual:] */

long FUN_1065bba68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1065bbb10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1065bbb1c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1065bbb1c;
          }
          goto LAB_1065bbb10;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1065bbb1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1065bbb38; end: 1065bbbe3; -[SCMessagingIntentDeletionStartEvent matchOneOnOne:group:story:] */

void FUN_1065bbb38(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 == 0) goto LAB_1065bbbc0;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 1) {
    if (param_4 == 0) goto LAB_1065bbbc0;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 0) || (param_3 == 0)) goto LAB_1065bbbc0;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_1065bbbc0:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bbbe4; end: 1065bbc1f; -[SCMessagingIntentDeletionStartEvent .cxx_destruct] */

void FUN_1065bbbe4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1065bbc20; end: 1065bbc2b; -[SCFeatureSettingsService areOSShareIntentsEnabled] */

void FUN_1065bbc20(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be33e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__hasFeatureSettingAvailable__11256a938,
             &PTR____CFConstantStringClassReference_110e54e58);
  return;
}



/* Entry: 1065bbc2c; end: 1065bbc37; -[SCFeatureSettingsService enableOSShareIntentsServerParam] */

undefined ** FUN_1065bbc2c(void)

{
  return &PTR____CFConstantStringClassReference_110e54e58;
}



/* Entry: 1065bbc38; end: 1065bbc47; -[SCFeatureSettingsService setEnableOSShareIntents:] */

void FUN_1065bbc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3d70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setFeatureSetting_boolValue__112586900,
             &PTR____CFConstantStringClassReference_110e54e58,param_3);
  return;
}



/* Entry: 1065bbc48; end: 1065bbc4f; -[SCFeatureSettingsService enable_ios_share_intents_client_value:] */

undefined * FUN_1065bbc48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dad378);
  puVar1 = PTR____kCFBooleanTrue_11034ab68;
  if ((int)param_3 == 0) {
    puVar1 = PTR____kCFBooleanFalse_11034ab60;
  }
  return puVar1;
}



/* Entry: 1065bbc50; end: 1065bbc57; -[SCFeatureSettingsService enable_ios_share_intents_server_value:] */

void FUN_1065bbc50(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  func_0x00010bf1f3c0();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1065bbc58; end: 1065bbd23; -[SCDiscoverFeedStorySnapComposerPlayerProvider initWithMediaCoordinator:avPlayerProvider:configProvider:] */

undefined1 *
FUN_1065bbc58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1e80;
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



/* Entry: 1065bbd24; end: 1065bbf6b; -[SCDiscoverFeedStorySnapComposerPlayerProvider createPlayerForContextObject:completion:] */

void FUN_1065bbd24(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined **unaff_x25;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cbc90;
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  uVar8 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  uVar5 = param_3;
  if ((uVar8 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_3);
  uVar8 = uVar5;
  func_0x00010bf9c800();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x000107d03060(uVar5,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  if (uVar2 == 0) {
    puVar7 = (undefined1 *)0x0;
    uVar8 = 0;
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    _objc_initWeak(auStack_78,param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_70 = &PTR____CFConstantStringClassReference_110e343f8;
    ppuStack_68 = &PTR____CFConstantStringClassReference_110e135d8;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110e1cc58;
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1065bbf6c;
    puStack_90 = &UNK_11092de08;
    _objc_retain(param_4);
    unaff_x25 = &puStack_a8;
    puVar7 = auStack_78;
    lStack_88 = param_4;
    _objc_copyWeak(auStack_80);
    uVar8 = uVar2;
    func_0x00010c11d620(uVar3);
    _objc_release(puVar1);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_80);
    _objc_release(lStack_88);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x25 + 5);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(uVar8);
  lVar9 = *(long *)(param_3 + 0x20);
  if (puVar7 == (undefined1 *)0x2) {
    lVar4 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar4);
    uVar5 = uVar8;
    func_0x00010c23fc80(uVar8);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010c1011a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar2 = uVar8;
    func_0x00010c0ef700(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe93c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,lVar6,puVar1);
    _objc_release(puVar1);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  else {
    (**(code **)(lVar9 + 0x10))(lVar9,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1065bbf6c; end: 1065bc07f;  */

void FUN_1065bbf6c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x20);
  if (param_2 == 2) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    uVar1 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c1011a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar3 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe93c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,lVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    (**(code **)(lVar5 + 0x10))(lVar5,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bc080; end: 1065bc173; -[SCDiscoverFeedStorySnapComposerPlayerProvider playerWithVideoData:] */

void FUN_1065bc080(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c0082a0();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126ba150;
    func_0x00010c22e420(PTR_PTR_1126ba150,param_2,puVar1,*(undefined8 *)(param_1 + 0x18));
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      func_0x00010bff41a0();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c101100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1065bc174; end: 1065bc1af; -[SCDiscoverFeedStorySnapComposerPlayerProvider .cxx_destruct] */

void FUN_1065bc174(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065bc1b0; end: 1065bc2ab; -[SCLegacyStoryShareComposerPlayerProvider initWithMediaCoordinator:avPlayerProvider:storiesConfigProvider:configProvider:] */

undefined1 *
FUN_1065bc1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f1e88;
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



/* Entry: 1065bc2ac; end: 1065bc67b; -[SCLegacyStoryShareComposerPlayerProvider createPlayerForContextObject:completion:] */

void FUN_1065bc2ac(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined **unaff_x25;
  undefined **ppuVar12;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar12 = &puStack_f0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25b120();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cbca0;
  puVar5 = PTR_PTR_1126cbc98;
  uVar7 = param_3;
  if ((int)uVar2 == 0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    if ((uVar4 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_3);
    uVar4 = uVar7;
    func_0x0001071ea420();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 != 0) {
      _objc_initWeak(auStack_90,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e343f8;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110e135d8;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e1cc58;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      uStack_e0 = 0x1065bc790;
      puStack_d8 = &UNK_11092de08;
      _objc_retain(param_4);
      puVar9 = auStack_90;
      lStack_d0 = param_4;
      _objc_copyWeak(auStack_c8);
      uVar10 = uVar4;
      func_0x00010c11d620(uVar2);
      _objc_release(puVar5);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_c8);
      _objc_release(lStack_d0);
      _objc_destroyWeak(auStack_90);
      goto LAB_1065bc5d8;
    }
  }
  else {
    _objc_retain(param_3);
    _objc_opt_class(puVar5);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar5);
    if ((uVar4 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(param_3);
    uVar10 = uVar7;
    func_0x00010c25a520();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010c0c5340();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    if (uVar4 != 0) {
      _objc_initWeak(auStack_90,param_1);
      uVar2 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_110e343f8;
      ppuStack_68 = &PTR____CFConstantStringClassReference_110e135d8;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110e1cc58;
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1065bc67c;
      puStack_a8 = &UNK_11092de08;
      _objc_retain(param_4);
      puVar9 = auStack_90;
      lStack_a0 = param_4;
      _objc_copyWeak(auStack_98);
      uVar10 = uVar4;
      func_0x00010c11d620(uVar2);
      _objc_release(puVar5);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_98);
      _objc_release(lStack_a0);
      _objc_destroyWeak(auStack_90);
      ppuVar12 = &puStack_c0;
      goto LAB_1065bc5d8;
    }
  }
  puVar9 = (undefined1 *)0x0;
  uVar10 = 0;
  (**(code **)(param_4 + 0x10))(param_4,0,0);
  ppuVar12 = unaff_x25;
LAB_1065bc5d8:
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar12 + 5);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(uVar10);
  lVar11 = *(long *)(param_3 + 0x20);
  if (puVar9 == (undefined1 *)0x2) {
    lVar6 = param_3 + 0x28;
    _objc_loadWeakRetained(lVar6);
    uVar7 = uVar10;
    func_0x00010c23fc80(uVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar6;
    func_0x00010c1011a0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar4 = uVar10;
    func_0x00010c0ef700(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar11 + 0x10))(lVar11,lVar8,puVar5);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(lVar8);
    _objc_release(uVar7);
    _objc_release(lVar6);
  }
  else {
    (**(code **)(lVar11 + 0x10))(lVar11,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar10);
  return;
}



/* Entry: 1065bc67c; end: 1065bc8a3;  */

void FUN_1065bc67c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x20);
  if (param_2 == 2) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    uVar1 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c1011a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar3 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,lVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    (**(code **)(lVar5 + 0x10))(lVar5,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bc8a4; end: 1065bc997; -[SCLegacyStoryShareComposerPlayerProvider playerWithVideoData:] */

void FUN_1065bc8a4(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c0082a0();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126ba150;
    func_0x00010c22e420(PTR_PTR_1126ba150,param_2,puVar1,*(undefined8 *)(param_1 + 0x20));
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      func_0x00010bff41a0();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c101100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1065bc998; end: 1065bc9df; -[SCLegacyStoryShareComposerPlayerProvider .cxx_destruct] */

void FUN_1065bc998(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065bc9e0; end: 1065bca83; -[SCSnapDocComposerPlayerProvider initWithAvPlayerProvider:configProvider:] */

undefined1 *
FUN_1065bc9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f1e90;
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



/* Entry: 1065bca84; end: 1065bcc97; -[SCSnapDocComposerPlayerProvider createPlayerForContextObject:completion:] */

void FUN_1065bca84(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126b25c0;
  _objc_opt_class(PTR_PTR_1126b25c0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0,0);
  }
  else {
    uVar3 = param_3;
    func_0x00010c0c6280();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb2040();
    _objc_retainAutoreleasedReturnValue();
    if (uVar4 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      uVar5 = uVar4;
      func_0x00010bdc2b80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar2);
      _objc_release(uVar5);
      puVar6 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
      _objc_alloc(PTR__OBJC_CLASS___AVURLAsset_1126b0d68);
      func_0x00010c057ae0();
      puVar7 = PTR_PTR_1126ba150;
      func_0x00010c22e420();
      if ((int)puVar7 == 0) {
        puVar7 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
        _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
        func_0x00010bff41a0();
        uVar8 = *(undefined8 *)(param_1 + 8);
        func_0x00010c269d40(uVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar8;
        func_0x00010c101100();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar8);
        (**(code **)(param_4 + 0x10))(param_4,uVar9,0);
        _objc_release(uVar9);
        _objc_release(puVar7);
      }
      else {
        (**(code **)(param_4 + 0x10))(param_4,0,0);
      }
      _objc_release(puVar6);
      _objc_release(puVar2);
    }
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bcc98; end: 1065bccb7;  */

bool FUN_1065bcc98(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0c6c20(param_2);
  return (int)param_2 == 3;
}



/* Entry: 1065bccb8; end: 1065bcce7; -[SCSnapDocComposerPlayerProvider .cxx_destruct] */

void FUN_1065bccb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065bcce8; end: 1065bcdb3; -[SCStoryManifestComposerPlayerProvider initWithMediaCoordinator:avPlayerProvider:configProvider:] */

undefined1 *
FUN_1065bcce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1e98;
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



/* Entry: 1065bcdb4; end: 1065bd4b3; -[SCStoryManifestComposerPlayerProvider createPlayerForContextObject:completion:] */

void FUN_1065bcdb4(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **unaff_x24;
  undefined **ppuVar14;
  undefined **ppuStack_100;
  undefined **ppuStack_d0;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar13 = PTR_PTR_1126c62e8;
  _objc_retain(param_3);
  _objc_opt_class(puVar13);
  ppuVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar13);
  ppuVar10 = param_3;
  if (((ulong)ppuVar1 & 1) == 0) {
    ppuVar10 = (undefined **)0x0;
  }
  _objc_retain(ppuVar10);
  _objc_release(param_3);
  _objc_retain(ppuVar10);
  if (ppuVar10 == (undefined **)0x0) {
LAB_1065bd054:
    _objc_release(ppuVar10);
  }
  else {
    ppuVar1 = param_3;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar14 = ppuVar1;
    func_0x00010bf529e0();
    _objc_release(ppuVar1);
    unaff_x24 = (undefined **)0x0;
    if (ppuVar14 == (undefined **)0x0) goto LAB_1065bd054;
    unaff_x24 = param_3;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = unaff_x24;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(unaff_x24);
    if (ppuVar1 == (undefined **)0x0) {
LAB_1065bd078:
      puVar13 = (undefined *)0x0;
    }
    else {
      ppuVar14 = ppuVar1;
      func_0x00010c241660();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      unaff_x24 = (undefined **)0x0;
      if (ppuVar14 == (undefined **)0x0) goto LAB_1065bd078;
      unaff_x24 = ppuVar1;
      func_0x00010c241660();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126bfca8;
      _objc_alloc();
      ppuVar14 = unaff_x24;
      func_0x00010c0c54a0(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = unaff_x24;
      func_0x00010c0c5480(unaff_x24);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c020b60();
      _objc_release(ppuVar3);
      _objc_release(ppuVar14);
      ppuVar14 = unaff_x24;
      func_0x00010c2420c0();
      if (((int)ppuVar14 == 1) || (ppuVar14 = unaff_x24, func_0x00010c2420c0(), (int)ppuVar14 == 2))
      {
        func_0x00010c2420c0();
        ppuVar14 = unaff_x24;
        func_0x00010bfdc240();
        if ((int)ppuVar14 == 0) {
LAB_1065bd080:
          puVar12 = (undefined *)0x0;
        }
        else {
          ppuVar14 = unaff_x24;
          func_0x00010c23f5e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar14;
          func_0x00010bfdc220();
          _objc_release(ppuVar14);
          if ((int)ppuVar3 == 0) goto LAB_1065bd080;
          ppuVar14 = unaff_x24;
          func_0x00010c23f5e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar14;
          func_0x00010c23f5c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010c0c4640();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010c08fa60();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          _objc_release(ppuVar14);
          if (ppuVar5 == (undefined **)0x0) {
            ppuStack_d0 = (undefined **)0x0;
          }
          else {
            ppuVar14 = unaff_x24;
            func_0x00010c23f5e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar3 = ppuVar14;
            func_0x00010c23f5c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c0c4640();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_d0 = ppuVar4;
            func_0x00010bf15da0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar4);
            _objc_release(ppuVar3);
            _objc_release(ppuVar14);
          }
          ppuVar14 = unaff_x24;
          func_0x00010c23f5e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = ppuVar14;
          func_0x00010c23f5c0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar3;
          func_0x00010c0ef6e0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar4;
          func_0x00010c08fa60();
          _objc_release(ppuVar4);
          _objc_release(ppuVar3);
          _objc_release(ppuVar14);
          if (ppuVar5 == (undefined **)0x0) {
            ppuVar14 = (undefined **)0x0;
          }
          else {
            ppuVar3 = unaff_x24;
            func_0x00010c23f5e0(unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            ppuVar4 = ppuVar3;
            func_0x00010c23f5c0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar5 = ppuVar4;
            func_0x00010c0ef6e0();
            _objc_retainAutoreleasedReturnValue();
            ppuVar14 = ppuVar5;
            func_0x00010bf15da0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(ppuVar5);
            _objc_release(ppuVar4);
            _objc_release(ppuVar3);
          }
          puVar12 = PTR_PTR_1126cbca8;
          _objc_alloc();
          func_0x00010c022600();
          _objc_release(ppuVar14);
          _objc_release(ppuStack_d0);
        }
        puVar13 = PTR_PTR_1126c3390;
        _objc_alloc();
        ppuVar14 = ppuVar1;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = unaff_x24;
        func_0x00010c242060();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c083e00();
        ppuVar4 = unaff_x24;
        func_0x00010c0c6e00();
        _objc_retainAutoreleasedReturnValue();
        if (puVar12 == (undefined *)0x0) {
          ppuStack_100 = (undefined **)0x0;
        }
        else {
          ppuStack_100 = unaff_x24;
          func_0x00010c0c6e00();
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_retain(ppuVar1);
        puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x00010bf65600(0x40f5180000000000);
        _objc_retainAutoreleasedReturnValue();
        ppuVar5 = ppuVar1;
        func_0x00010c2629c0();
        if ((long)ppuVar5 < 1) {
LAB_1065bd290:
          _objc_retain(puVar6);
          puVar7 = puVar6;
        }
        else {
          puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
          _objc_alloc();
          ppuVar5 = ppuVar1;
          func_0x00010c2629c0(ppuVar1);
          func_0x00010c052380((double)(long)ppuVar5 / 1000.0);
          puVar8 = puVar7;
          func_0x00010bf433a0();
          if (puVar8 != (undefined *)0xffffffffffffffff) {
            _objc_release(puVar7);
            goto LAB_1065bd290;
          }
        }
        _objc_release(puVar6);
        _objc_release(ppuVar1);
        func_0x00010bffa840();
        _objc_release(puVar7);
        if (puVar12 != (undefined *)0x0) {
          _objc_release(ppuStack_100);
        }
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        _objc_release(ppuVar14);
        _objc_release(puVar12);
      }
      else {
        puVar13 = (undefined *)0x0;
      }
      _objc_release(puVar2);
      _objc_release(unaff_x24);
    }
    _objc_release(ppuVar1);
    _objc_release(param_3);
    if (puVar13 != (undefined *)0x0) {
      _objc_initWeak(auStack_90,param_1);
      uVar9 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_88 = &PTR____CFConstantStringClassReference_110e343f8;
      ppuStack_80 = &PTR____CFConstantStringClassReference_110e135d8;
      ppuStack_78 = &PTR____CFConstantStringClassReference_110e1cc58;
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_1065bd4b4;
      puStack_a8 = &UNK_11092de08;
      _objc_retain(param_4);
      unaff_x24 = &puStack_c0;
      puVar11 = auStack_90;
      lStack_a0 = param_4;
      _objc_copyWeak(auStack_98);
      puVar12 = puVar13;
      func_0x00010c11d620(uVar9);
      _objc_release(puVar2);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_98);
      _objc_release(lStack_a0);
      _objc_destroyWeak(auStack_90);
      goto LAB_1065bd42c;
    }
  }
  puVar11 = (undefined1 *)0x0;
  puVar12 = (undefined *)0x0;
  (**(code **)(param_4 + 0x10))(param_4,0,0);
  puVar13 = (undefined *)0x0;
LAB_1065bd42c:
  _objc_release(puVar13);
  _objc_release(ppuVar10);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x24 + 5);
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(puVar12);
  puVar13 = param_3[4];
  if (puVar11 == (undefined1 *)0x2) {
    param_3 = param_3 + 5;
    _objc_loadWeakRetained(param_3);
    puVar6 = puVar12;
    func_0x00010c23fc80(puVar12);
    _objc_retainAutoreleasedReturnValue();
    ppuVar10 = param_3;
    func_0x00010c1011a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    puVar7 = puVar12;
    func_0x00010c0ef700(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe93c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(puVar13 + 0x10))(puVar13,ppuVar10,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(ppuVar10);
    _objc_release(puVar6);
    _objc_release(param_3);
  }
  else {
    (**(code **)(puVar13 + 0x10))(puVar13,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 1065bd4b4; end: 1065bd5c7;  */

void FUN_1065bd4b4(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = *(long *)(param_1 + 0x20);
  if (param_2 == 2) {
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained(param_1);
    uVar1 = param_3;
    func_0x00010c23fc80(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c1011a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    uVar3 = param_3;
    func_0x00010c0ef700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe93c0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,lVar2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release(param_1);
  }
  else {
    (**(code **)(lVar5 + 0x10))(lVar5,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bd5c8; end: 1065bd6bb; -[SCStoryManifestComposerPlayerProvider playerWithVideoData:] */

void FUN_1065bd5c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___AVURLAsset_1126b0d68;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c0082a0();
    _objc_release(param_3);
    puVar2 = PTR_PTR_1126ba150;
    func_0x00010c22e420(PTR_PTR_1126ba150,param_2,puVar1,*(undefined8 *)(param_1 + 0x18));
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0;
      _objc_alloc(PTR__OBJC_CLASS___AVPlayerItem_1126c1cb0);
      func_0x00010bff41a0();
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c101100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      _objc_release(puVar2);
    }
    else {
      uVar4 = 0;
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1065bd6bc; end: 1065bd6f7; -[SCStoryManifestComposerPlayerProvider .cxx_destruct] */

void FUN_1065bd6bc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065bd6f8; end: 1065bd897; -[SCStorySharingComposerContextProviderFactoryImpl initWithStorySharePlaybackScopeExposer:valdiRuntimeProvider:cofSyncStore:upNextV2PlaybackSessionExposer:upNextV2PlaybackSessionScopeServices:pageLauncher:storiesGrapheneMetricsEmitter:genAIDreamsService:] */

undefined1 *
FUN_1065bd6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_68 = PTR_PTR_1126f1ea0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_7);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_10;
    _objc_release(uVar2);
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



/* Entry: 1065bd898; end: 1065bd9f3; -[SCStorySharingComposerContextProviderFactoryImpl contextProviderWithDataProvider:playbackDataProvider:snapPlayerViewProvider:actionHandler:viewTemplate:] */

void FUN_1065bd898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126cbcb0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  FUN_1065c2f88();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c008bc0(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1065bd9f4; end: 1065bda07; -[SCStorySharingComposerContextProviderFactoryImpl contextProviderWithDataProvider:snapPlayerViewProvider:actionHandler:viewTemplate:] */

void FUN_1065bd9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4ef10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_contextProviderWithDataProvider__1125b1568,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 1065bda08; end: 1065bda7b; -[SCStorySharingComposerContextProviderFactoryImpl .cxx_destruct] */

void FUN_1065bda08(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1065bda7c; end: 1065bdc87; -[SCStorySharingComposerContextProviderImpl initWithDataProvider:playbackDataProvider:cofSyncStore:storySharePlaybackExposer:playerViewFactory:actionHandler:viewTemplate:upNextV2PlaybackSessionExposer:upNextV2PlaybackSessionScopeServices:pageLauncher:storiesGrapheneMetricsEmitter:genAIDreamsService:] */

undefined8 *
FUN_1065bda7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_1126f1ea8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    puVar1[0xb] = param_9;
    *(undefined1 *)(puVar1 + 0xf) = 1;
    puVar3 = PTR_PTR_1126cbcb8;
    _objc_alloc();
    func_0x00010c04e100();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 0xd) = 0;
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1065bdc88; end: 1065bdd93; -[SCStorySharingComposerContextProviderImpl contextParamsFor:] */

void FUN_1065bdc88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1065bdd94;
  uStack_30 = 0x1065bdda4;
  uStack_28 = 0;
  func_0x00010c0beda0(param_3);
  func_0x00010bf4ed20(param_1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1065bdd94; end: 1065bddab;  */

void FUN_1065bdd94(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065bddac; end: 1065bde5b;  */

void FUN_1065bddac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010bf4df40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000107d60b58();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1065bde5c; end: 1065be3bb; -[SCStorySharingComposerContextProviderImpl contextParamsWithMessageType:] */

void FUN_1065bde5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_5);
  lVar8 = *(long *)(param_3 + 0x50);
  if (lVar8 == 0) {
    puVar3 = PTR_PTR_1126cbcc0;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_3 + 0x30);
    *(undefined **)(param_3 + 0x30) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_3 + 0x38);
    *(undefined **)(param_3 + 0x38) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    *(undefined **)(param_3 + 0x40) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar7 = *(undefined8 *)(param_3 + 0x48);
    *(undefined **)(param_3 + 0x48) = puVar3;
    _objc_release(uVar7);
    puVar3 = PTR_PTR_1126cbcc8;
    _objc_opt_new(PTR_PTR_1126cbcc8);
    func_0x00010c1a77a0(*(undefined8 *)(param_3 + 0x30));
    _objc_release(puVar3);
    uVar7 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c272120(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c221420(*(undefined8 *)(param_3 + 0x30));
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_3 + 0x48);
    func_0x00010c272120(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20df80(*(undefined8 *)(param_3 + 0x30));
    _objc_release(uVar7);
    _objc_initWeak(auStack_78,param_3);
    puVar3 = PTR_PTR_1126c6910;
    _objc_alloc(PTR_PTR_1126c6910);
    uVar7 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c272120(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00d2c0(puVar3);
    _objc_release(uVar7);
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6508;
    if (*(long *)(param_3 + 0x58) != 1) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c64f0;
    }
    ppuVar2 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c6520;
    if (*(long *)(param_3 + 0x58) != 2) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    func_0x00010c212c00(puVar3);
    _objc_release(ppuVar2);
    func_0x00010c222520(puVar3);
    func_0x00010c17df40(puVar3);
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1065be3c0;
    puStack_88 = &UNK_11092dea8;
    _objc_copyWeak(auStack_80,auStack_78);
    puStack_c8 = puVar4;
    uStack_c0 = 0xc2000000;
    uStack_b8 = 0x1065be408;
    puStack_b0 = &UNK_1108485e8;
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_copyWeak(auStack_d0,auStack_78);
    func_0x00010bfa6360(uVar7);
    puVar4 = PTR_PTR_1126cbcd0;
    _objc_opt_new(PTR_PTR_1126cbcd0);
    lVar9 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar9);
    lVar8 = lVar9;
    func_0x00010010fab4(lVar9,PTR_DAT_1126a5508);
    _objc_release(lVar9);
    iVar11 = 0;
    if (lVar9 != 0) {
      iVar11 = (int)lVar8;
    }
    if (iVar11 == 1) {
      uVar10 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar10);
      uVar7 = uVar10;
      func_0x00010c231b80();
      if ((int)uVar7 != 0) {
        func_0x00010c0f0240(uVar10);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2256c0(puVar4);
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df720(param_2,PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a7d00(puVar4);
        _objc_release(puVar5);
      }
      _objc_release(uVar10);
    }
    func_0x00010c1c7160(puVar4);
    lVar12 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar12);
    lVar9 = lVar12;
    func_0x00010010fab4(lVar12,PTR_DAT_1126a5510);
    lVar8 = lVar12;
    if ((int)lVar9 == 0) {
      lVar8 = 0;
    }
    _objc_retain(lVar8);
    _objc_release(lVar12);
    if (lVar8 != 0) {
      func_0x00010c25b8e0(lVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c160fa0(puVar4);
      _objc_release(lVar12);
    }
    lVar13 = *(long *)(param_3 + 0x28);
    _objc_retain(lVar13);
    lVar12 = lVar13;
    func_0x00010010fab4(lVar13,PTR_DAT_1126a5518);
    lVar9 = lVar13;
    if ((int)lVar12 == 0) {
      lVar9 = 0;
    }
    _objc_retain(lVar9);
    _objc_release(lVar13);
    if ((lVar9 != 0) && (*(char *)(param_3 + 0x78) == '\x01')) {
      func_0x00010bf11a60(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16ce80(puVar4);
      _objc_release(lVar13);
    }
    puVar5 = PTR_PTR_1126c67d8;
    _objc_alloc();
    puVar6 = PTR_PTR_1126cbcd8;
    func_0x00010bf44480(PTR_PTR_1126cbcd8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c000660();
    uVar7 = *(undefined8 *)(param_3 + 0x50);
    *(undefined **)(param_3 + 0x50) = puVar5;
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_78);
    lVar8 = *(long *)(param_3 + 0x50);
  }
  _objc_retain(lVar8);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1065be3bc; end: 1065be3bf;  */

void FUN_1065be3bc(void)

{
  return;
}



/* Entry: 1065be3c0; end: 1065be497;  */

void FUN_1065be3c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee2c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065be498; end: 1065be5e3; -[SCStorySharingComposerContextProviderImpl setAutoPlayPreviewEnabled:] */

void FUN_1065be498(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _os_unfair_lock_lock(param_1 + 0x68);
  if (*(byte *)(param_1 + 0x78) != param_3) {
    *(char *)(param_1 + 0x78) = (char)param_3;
    uVar3 = *(ulong *)(param_1 + 0x50);
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cbcd0;
    _objc_opt_class(PTR_PTR_1126cbcd0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar6 = *(ulong *)(param_1 + 0x28);
    _objc_retain(uVar6);
    uVar3 = uVar6;
    func_0x00010010fab4(uVar6,PTR_DAT_1126a5518);
    uVar5 = uVar6;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    uVar1 = 0;
    if (uVar5 != 0) {
      uVar1 = param_3;
    }
    if (uVar1 == 1) {
      func_0x00010bf11a60(uVar6);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = 0;
    }
    func_0x00010c16ce80(uVar2);
    if (uVar1 != 0) {
      _objc_release(uVar6);
    }
    if (((param_3 != 0) && (*(long *)(param_1 + 0x40) != 0)) && (*(long *)(param_1 + 0x80) != 0)) {
      func_0x00010c0d9840();
    }
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x68);
  return;
}



/* Entry: 1065be5e4; end: 1065be673; -[SCStorySharingComposerContextProviderImpl onTapWithView:] */

void FUN_1065be5e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + 0x70) = param_1;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_1065be674;
  puStack_38 = &UNK_110841f80;
  lStack_30 = param_2;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_4);
  return;
}



/* Entry: 1065be674; end: 1065be67f;  */

void FUN_1065be674(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6bf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onTapWithView__112578960,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1065be680; end: 1065be7b3; -[SCStorySharingComposerContextProviderImpl _onTapWithView:] */

void FUN_1065be680(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  puVar2 = PTR_DAT_1126a5520;
  uVar5 = *(ulong *)(param_1 + 0x20);
  _objc_retain(uVar5);
  uVar7 = uVar5;
  func_0x00010010fab4(uVar5,puVar2);
  uVar1 = uVar5;
  if ((int)uVar7 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  uVar7 = uVar1;
  _objc_opt_respondsToSelector(uVar1,PTR_s_ignoreCallingHandleStoryTap_1125d7370);
  if ((uVar7 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = uVar1;
    func_0x00010bfe66a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
  }
  uVar4 = param_3;
  if ((uVar1 == 0) || ((uVar7 & 1) != 0)) {
    uVar6 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c040(*(undefined8 *)(param_1 + 0x70),uVar6);
  }
  else {
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2ae0(uVar5);
  }
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065be7b4; end: 1065be7f3; -[SCStorySharingComposerContextProviderImpl onProfileTap] */

void FUN_1065be7b4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleHeaderTap_1125d1e88);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_handleHeaderTap_1125d1e88);
    return;
  }
  return;
}



/* Entry: 1065be7f4; end: 1065be873; -[SCStorySharingComposerContextProviderImpl onAvatarTapWithView:] */

void FUN_1065be7f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleAvatarTap__1125d1af0);
  if ((uVar1 & 1) == 0) {
    func_0x00010c0e5c80(param_1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd0520(uVar3);
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065be874; end: 1065be8bb; -[SCStorySharingComposerContextProviderImpl onActionButtonTapWithButtonType:] */

void FUN_1065be874(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_handleActionButtonTapFor__1125d19c0);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfd0070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_handleActionButtonTapFor__1125d19c0,param_3);
    return;
  }
  return;
}



/* Entry: 1065be8bc; end: 1065be91b; -[SCStorySharingComposerContextProviderImpl onExtensionCTATap] */

void FUN_1065be8bc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_1126a5528;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,puVar2);
  lVar1 = lVar4;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar4);
  if (lVar1 != 0) {
    func_0x00010bfd1160(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065be91c; end: 1065be923; -[SCStorySharingComposerContextProviderImpl shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1065be91c(void)

{
  return 0;
}



/* Entry: 1065be924; end: 1065be92f; -[SCStorySharingComposerContextProviderImpl pushToValdiMarshaller:] */

undefined8 FUN_1065be924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df0d8;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010af9b284();
  func_0x00010af9b278();
  return param_3;
}



/* Entry: 1065be930; end: 1065bec9b; -[SCStorySharingComposerContextProviderImpl _updateUiWithConfiguration:] */

void FUN_1065be930(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  puVar1 = PTR_PTR_1126cbcc8;
  _objc_opt_new(PTR_PTR_1126cbcc8);
  lVar6 = param_3;
  func_0x00010c2711a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18fca0(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20f6c0(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c26e520(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2144c0(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf15520(param_3);
  func_0x00010c16eda0(puVar1,param_2,lVar6);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar6 = param_3;
  func_0x00010bfdff00(param_3);
  func_0x00010c0df760(puVar2,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a79c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar6 = param_3;
  func_0x00010c25a980(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d700(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf12c20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16d940(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010c29c5c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c222500(puVar1,param_2,lVar6);
  _objc_release(lVar6);
  puVar3 = PTR_PTR_1126cbcc0;
  _objc_opt_new();
  func_0x00010c1a77a0();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c299960(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c221420(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c25b8a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20df80(puVar3,param_2,uVar4);
  _objc_release(uVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar6 = param_3;
  func_0x00010beef1e0(param_3);
  func_0x00010c0df760(puVar5,param_2,lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a100(puVar2,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161800(puVar3,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar5);
  lVar6 = param_3;
  func_0x00010bf98d60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1971a0(puVar3,param_2,lVar6);
  _objc_release(lVar6);
  lVar6 = param_3;
  func_0x00010bf9dcc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 == 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010bf9dca0(lVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c199300(puVar3,param_2,lVar6);
  }
  else {
    puVar2 = PTR_PTR_1126cbce0;
    _objc_alloc(PTR_PTR_1126cbce0);
    lVar6 = param_3;
    func_0x00010bf9dcc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c052bc0(puVar2,param_2,lVar6);
    func_0x00010c199300(puVar3,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(lVar6);
  _objc_retain(puVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar3;
  _objc_release(uVar4);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x38),param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _os_unfair_lock_unlock(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bec9c; end: 1065bed17; -[SCStorySharingComposerContextProviderImpl _updateWithAutoPlayPreviewVideoContext:] */

void FUN_1065bec9c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x68);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(long *)(param_1 + 0x80) = param_3;
  _objc_release(uVar1);
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x78) & 1) != 0)) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
  }
  _os_unfair_lock_unlock(param_1 + 0x68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065bed18; end: 1065bed1f; -[SCStorySharingComposerContextProviderImpl _updateWithStoryThumbnailUrl:] */

void FUN_1065bed18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_next__112614028);
  return;
}



/* Entry: 1065bed20; end: 1065bedc7; -[SCStorySharingComposerContextProviderImpl .cxx_destruct] */

void FUN_1065bed20(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1065bedc8; end: 1065bee93; -[SCStorySharingContentProductPlaybackLauncher initWithPageLauncher:storiesGrapheneMetricsEmitter:genAIDreamsService:] */

undefined1 *
FUN_1065bedc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f1eb0;
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



/* Entry: 1065bee94; end: 1065bf303; -[SCStorySharingContentProductPlaybackLauncher presentStoryPlaybackScopeWithPlaybackDataProvider:sourceView:actionStartTime:playbackScopeDelegate:] */

void FUN_1065bee94(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  dVar12 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = param_4;
  _objc_release(uVar1);
  _objc_storeWeak(param_2 + 0x28,param_6);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bf4cfa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0ea680();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b4d30;
  _objc_alloc();
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  dVar12 = dVar12 * 1000.0;
  uVar1 = uVar3;
  func_0x00010bfb1100(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c0644c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0();
  _objc_release(uVar11);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c0f3ca0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7200(puVar5);
  _objc_release(uVar1);
  puVar6 = PTR_PTR_1126b4d38;
  uVar1 = uVar3;
  func_0x00010bf63f20(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar2;
  func_0x00010c25a140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar2;
  func_0x00010c063c60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar2;
  func_0x00010bf5f840(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf361c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar11);
  _objc_release(uVar1);
  puVar7 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  _CACurrentMediaTime();
  func_0x00010bff0a00(puVar7);
  puVar8 = PTR_PTR_1126cb980;
  _objc_alloc();
  func_0x00010c078640();
  func_0x00010bff6ca0();
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  _CACurrentMediaTime();
  uVar1 = 0xb;
  func_0x000108534a80(0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((dVar12 - param_1) * 1000.0),uVar11);
  _objc_release(uVar1);
  if (puVar8 != (undefined *)0x0) {
    _objc_retain(puVar8);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = puVar8;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08c080();
    _objc_release(uVar1);
    _objc_initWeak(auStack_78,param_2);
    uVar9 = *(undefined8 *)(param_2 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar9;
    func_0x00010bf8a500();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar11 = uVar1;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = uVar11;
    _objc_release(uVar10);
    _objc_release(uVar1);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1065bf304; end: 1065bf337;  */

void FUN_1065bf304(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be74c60(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065bf338; end: 1065bf383; -[SCStorySharingContentProductPlaybackLauncher cleanUp] */

void FUN_1065bf338(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf6b020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83660();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf86d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_dispose_1125bf4f8);
  return;
}



/* Entry: 1065bf384; end: 1065bf3db; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterDidTearDown:playbackScope:] */

void FUN_1065bf384(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010be74c60(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0eadc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0eaf20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065bf3dc; end: 1065bf44b; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:] */

void FUN_1065bf3dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 1065bf44c; end: 1065bf49b; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterDidCancelDismissing:playbackScope:] */

void FUN_1065bf44c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 1065bf49c; end: 1065bf4eb; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterWillBeginAnimatingToDismiss:playbackScope:] */

void FUN_1065bf49c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 1065bf4ec; end: 1065bf53b; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterDidFailToPresent:playbackScope:] */

void FUN_1065bf4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 1065bf53c; end: 1065bf58b; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterDidFinishDismissing:playbackScope:] */

void FUN_1065bf53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 1065bf58c; end: 1065bf617; -[SCStorySharingContentProductPlaybackLauncher playbackPresenter:didBeginPlayingStory:playbackScope:] */

void FUN_1065bf58c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf37700();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0eadc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ead60();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1065bf618; end: 1065bf69f; -[SCStorySharingContentProductPlaybackLauncher playbackPresenter:didFinishPlayingStory:nextStory:playbackScope:] */

void FUN_1065bf618(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 1065bf6a0; end: 1065bf70f; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:] */

void FUN_1065bf6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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



/* Entry: 1065bf710; end: 1065bf77f; -[SCStorySharingContentProductPlaybackLauncher playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:] */

void FUN_1065bf710(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
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


