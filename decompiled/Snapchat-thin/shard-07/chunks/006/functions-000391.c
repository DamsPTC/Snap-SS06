/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105719ce8; end: 105719ceb; -[SCSnapAnyoneNativeMessagingListener didRemoveConversation:] */

void FUN_105719ce8(void)

{
  return;
}



/* Entry: 105719cec; end: 105719cef; -[SCSnapAnyoneNativeMessagingListener didSendStart:] */

void FUN_105719cec(void)

{
  return;
}



/* Entry: 105719cf0; end: 105719d73; -[SCSnapAnyoneNativeMessagingListener didSendComplete:] */

void FUN_105719cf0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf43ee0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010bf43ee0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be27440(param_1,param_2,lVar1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105719d74; end: 105719d77; -[SCSnapAnyoneNativeMessagingListener didConfirmConversationServerCreation:] */

void FUN_105719d74(void)

{
  return;
}



/* Entry: 105719d78; end: 105719d7b; -[SCSnapAnyoneNativeMessagingListener didConversationReset:messages:] */

void FUN_105719d78(void)

{
  return;
}



/* Entry: 105719d7c; end: 105719e67; -[SCSnapAnyoneNativeMessagingListener _handleCompletedPhoneNumberDestinations:] */

void FUN_105719d7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105719e68;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x0001000d76cc("APPSTORE",&puStack_60);
    func_0x00010be3db20(param_1);
    func_0x00010be61600(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105719e68; end: 105719e93;  */

void FUN_105719e68(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebafe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105719e94; end: 105719f1b; -[SCSnapAnyoneNativeMessagingListener _showSnapsAndInvitesSentToast] */

void FUN_105719e94(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126afde0;
  uVar2 = uVar1;
  FUN_10571ae20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105719f1c; end: 10571a06b; -[SCSnapAnyoneNativeMessagingListener _inviteWithCompletedPhoneNumberDestinations:] */

void FUN_105719f1c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108ace50,
                      &PTR___NSConcreteGlobalBlock_1108ace70);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = &UNK_10f2ed9b8;
    _dispatch_queue_create(&UNK_10f2ed9b8,0);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar3);
    func_0x00010bf49e60(uVar4);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10571a06c; end: 10571a1b7;  */

void FUN_10571a06c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c261c60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c080d00();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x00010c0faf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0de940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10571a1b8; end: 10571a2d3; -[SCSnapAnyoneNativeMessagingListener _inviteNonSnapchatters:numberToIdDict:completionQueue:] */

void FUN_10571a1b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_1108aceb0,
                      &PTR___NSConcreteGlobalBlock_1108acef0);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10571a3bc;
  puStack_60 = &UNK_1108acf10;
  uStack_58 = param_3;
  uStack_50 = param_4;
  lStack_48 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x000100504554(param_4,&puStack_78);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06a620();
  _objc_release(param_5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10571a2d4; end: 10571a393;  */

void FUN_10571a2d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  _objc_retain(param_2);
  func_0x00010bf5f320(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126aed98;
  uVar3 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bfb5dc0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10571a394; end: 10571a3bb;  */

void FUN_10571a394(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10571a3bc; end: 10571a4c3;  */

void FUN_10571a3bc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      puVar4 = PTR_PTR_1126b8710;
      _objc_alloc(PTR_PTR_1126b8710);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0e00e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c0e00e0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c05b840(puVar4);
      _objc_release(uVar2);
      _objc_release(uVar3);
      _objc_release(uVar1);
      goto LAB_10571a4a4;
    }
  }
  func_0x00010be54e40(*(undefined8 *)(param_1 + 0x30));
  puVar4 = (undefined *)0x0;
LAB_10571a4a4:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10571a4c4; end: 10571a4c7;  */

void FUN_10571a4c4(void)

{
  return;
}



/* Entry: 10571a4c8; end: 10571a5ff; -[SCSnapAnyoneNativeMessagingListener _multiAddWithCompletedPhoneNumberDestinations:] */

void FUN_10571a4c8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108acf80);
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    puVar3 = &UNK_10f2edac8;
    _dispatch_queue_create(&UNK_10f2edac8,0);
    _objc_initWeak(auStack_48,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c244e80(uVar4);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10571a600; end: 10571a6af;  */

void FUN_10571a600(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c261c60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c080d00();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_2;
    func_0x00010c261c60(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c272380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10571a6b0; end: 10571a75b;  */

void FUN_10571a6b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000100817178(param_2,&PTR___NSConcreteGlobalBlock_1108acfa0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10571a7bc;
  puStack_40 = &UNK_110856a28;
  uStack_38 = param_2;
  func_0x0001006372a4(uVar1,&puStack_58);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be61640();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10571a75c; end: 10571a7bb;  */

void FUN_10571a75c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10571a7bc; end: 10571a7db;  */

uint FUN_10571a7bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 10571a7dc; end: 10571a877; -[SCSnapAnyoneNativeMessagingListener _multiAddWithUserIds:] */

void FUN_10571a7dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10571a878;
    puStack_40 = &UNK_11089b0f0;
    lVar1 = param_3;
    uStack_38 = param_1;
    func_0x000100504554(param_3,&puStack_58);
    func_0x00010be61620(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10571a878; end: 10571a883;  */

void FUN_10571a878(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5c290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__makeShellSnapchatterForUserId__112574a40,param_2
            );
  return;
}



/* Entry: 10571a884; end: 10571a93b; -[SCSnapAnyoneNativeMessagingListener _multiAddWithSnapchatters:] */

void FUN_10571a884(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010be54f40(param_1);
    lVar1 = param_3;
    func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108acfc0);
    puVar2 = PTR_PTR_1126ae5c0;
    func_0x00010c0d1b80(PTR_PTR_1126ae5c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2960();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10571a93c; end: 10571a98f;  */

void FUN_10571a93c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1940;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c048c40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10571a990; end: 10571aa1f; -[SCSnapAnyoneNativeMessagingListener _makeShellSnapchatterForUserId:] */

void FUN_10571a990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c05c0e0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10571aa20; end: 10571aa93; -[SCSnapAnyoneNativeMessagingListener _logInvalidFormattedPhoneNumber:] */

void FUN_10571aa20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b86f8;
  func_0x00010c06a880(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0(uVar2,param_2,puVar3);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10571aa94; end: 10571ab37; -[SCSnapAnyoneNativeMessagingListener _logInvitedRealUsers:] */

void FUN_10571aa94(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c26ae00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126b86f8;
  func_0x00010c06aae0(PTR_PTR_1126b86f8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf529e0(param_3);
  _objc_release(param_3);
  func_0x00010bfec320(uVar1,param_2,puVar2,uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10571ab38; end: 10571ab97; -[SCSnapAnyoneNativeMessagingListener .cxx_destruct] */

void FUN_10571ab38(long param_1)

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



/* Entry: 10571ab98; end: 10571ada7; -[SCSnapAnyoneNativeMessagingListenerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571ab98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  
  puVar1 = PTR_PTR_1126bd720;
  _objc_alloc();
  lVar2 = param_1 + _DAT_1127286ec;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bf4a740();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = (long)_DAT_1127286f0;
  lVar4 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010c0dafe0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + lVar14;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + lVar14;
  _objc_loadWeakRetained(lVar14);
  lVar8 = lVar14;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_1127286f4;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_1127286f8;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002540(puVar1,param_2,lVar3,lVar5,lVar7,lVar8,lVar10,lVar12);
  lVar15 = (long)_DAT_1127286fc;
  uVar13 = *(undefined8 *)(param_1 + lVar15);
  *(undefined **)(param_1 + lVar15) = puVar1;
  _objc_release(uVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar14);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_112728700;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010bf50180();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010bef9980(lVar6,param_2,*(undefined8 *)(param_1 + lVar15));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 10571ada8; end: 10571ae1f; -[SCSnapAnyoneNativeMessagingListenerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571ada8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127286f8);
  _objc_destroyWeak(param_1 + _DAT_1127286f0);
  _objc_destroyWeak(param_1 + _DAT_1127286f4);
  _objc_destroyWeak(param_1 + _DAT_1127286ec);
  _objc_destroyWeak(param_1 + _DAT_112728700);
  _objc_destroyWeak(param_1 + _DAT_112728704);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127286fc,0);
  return;
}



/* Entry: 10571ae20; end: 10571ae37;  */

void FUN_10571ae20(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110df97f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110df97f8,
                      &PTR____CFConstantStringClassReference_110df9818,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10571ae38; end: 10571ae9b;  */

undefined ** FUN_10571ae38(void)

{
  int iVar1;
  
  if ((bRam0000000113819ec0 & 1) == 0) {
    iVar1 = 0x13819ec0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130f7368,0x100000000);
      ___cxa_guard_release(0x113819ec0);
    }
  }
  return &PTR_PTR_1130f7368;
}



/* Entry: 10571ae9c; end: 10571af23;  */

void FUN_10571ae9c(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571af24; end: 10571afaf;  */

void FUN_10571af24(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10571afb0; end: 10571afbb; +[SCContactTempSnapchatter table] */

undefined * FUN_10571afb0(void)

{
  return &UNK_10f2edb33;
}



/* Entry: 10571afbc; end: 10571b16f; +[SCContactTempSnapchatter immutableObjectParse:bufferSize:] */

void FUN_10571afbc(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar3 = PTR_PTR_1126b8710;
  _objc_alloc(PTR_PTR_1126b8710);
  lVar5 = (long)*piVar1;
  uVar4 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar4 < 5) {
    puVar9 = (undefined *)0x0;
    puVar8 = (undefined *)0x0;
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar4 = *(ushort *)((long)piVar1 - lVar5);
    }
    lVar5 = -lVar5;
    if (uVar4 < 7) {
      puVar9 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
    }
    else {
      uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 6);
      if (uVar6 == 0) {
        puVar8 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = -(long)*piVar1;
        uVar4 = *(ushort *)((long)piVar1 - (long)*piVar1);
      }
      if ((uVar4 < 9) || (uVar6 = (ulong)*(ushort *)((long)piVar1 + lVar5 + 8), uVar6 == 0)) {
        puVar9 = (undefined *)0x0;
      }
      else {
        puVar2 = (uint *)((long)piVar1 + uVar6);
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                            (long)puVar2 + (ulong)*puVar2 + 4);
        _objc_retainAutoreleasedReturnValue();
      }
    }
  }
  func_0x00010c05b840(puVar3,param_2,puVar7,puVar8,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10571b170; end: 10571b193; +[SCContactTempSnapchatter objectClassFunctionPointer] */

undefined1  [16] FUN_10571b170(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x10571b18c;
  auVar1._0_8_ = 0x10571b184;
  return auVar1;
}



/* Entry: 10571b194; end: 10571b297;  */

undefined1 *
FUN_10571b194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_1126e9f28;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10571b298; end: 10571b87b;  */

void FUN_10571b298(long param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain();
  puVar9 = PTR_PTR_1126bd728;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  _objc_retain(param_1);
  if (param_1 == 0) {
LAB_10571b658:
    lVar8 = 0;
LAB_10571b65c:
    _objc_release(lVar8);
  }
  else {
    lVar1 = param_1;
    func_0x00010c1422e0();
    if (lVar1 < 0) {
      lVar1 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar8 = param_1;
      if (lVar1 != 0) {
        puVar9 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar9;
        func_0x00010bf636c0();
        _objc_release(puVar9);
        func_0x0001001b9e08(puVar2,&UNK_10f2edb4a);
        if (puVar2 != (undefined *)0x0) {
          lVar1 = param_1;
          func_0x00010c2923e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar3 = lVar1;
          _objc_retainAutorelease(lVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar2,1,lVar3,0xffffffff,0xffffffffffffffff);
          _objc_release(lVar1);
          _objc_release(lVar1);
          puVar9 = puVar2;
          _sqlite3_step();
          if ((int)puVar9 == 100) {
            puVar9 = puVar2;
            _sqlite3_column_int64(puVar2,0);
            puVar4 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b8710);
            _sqlite3_column_blob(puVar2,1);
            _sqlite3_column_bytes(puVar2,1);
            puVar5 = puVar4;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar4);
            _sqlite3_reset(puVar2);
            if (puVar5 == (undefined *)0x0) goto LAB_10571b658;
            puVar2 = PTR_PTR_1126bd728;
            _objc_alloc();
            puVar4 = puVar5;
            func_0x00010c2923e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c0faf60(puVar5);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar5;
            func_0x00010bf85d80(puVar5);
            _objc_retainAutoreleasedReturnValue();
            FUN_10571b194(puVar2,puVar9,puVar4,puVar6,puVar7);
            goto LAB_10571b3c0;
          }
        }
      }
      goto LAB_10571b65c;
    }
    lVar1 = param_1;
    func_0x00010c1422e0(param_1);
    puVar9 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b8710);
    puVar5 = puVar9;
    func_0x00010c0dfea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    _objc_release(puVar9);
    if (puVar5 == (undefined *)0x0) goto LAB_10571b658;
    puVar2 = PTR_PTR_1126bd728;
    _objc_alloc();
    puVar4 = puVar5;
    func_0x00010c2923e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c0faf60(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar5;
    func_0x00010bf85d80(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_10571b194(puVar2,lVar1,puVar4,puVar6,puVar7);
LAB_10571b3c0:
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar5);
    if (puVar2 != (undefined *)0x0) {
      *(undefined4 *)(puVar2 + 0x10) = 2;
      _objc_release(param_1);
      if (param_2 != (undefined1 *)0x0) {
        *param_2 = 0;
      }
      lVar1 = param_1;
      func_0x00010c2923e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010c0faf60(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010bf85d80(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setProperty_nonatomic_copy(puVar2);
      _objc_release(lVar1);
      _objc_retain(puVar2);
      puVar9 = puVar2;
      goto LAB_10571b730;
    }
  }
  _objc_release(param_1);
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  puVar9 = PTR_PTR_1126bd728;
  _objc_retain(param_1);
  _objc_opt_self(puVar9);
  puVar2 = PTR_PTR_1126bd728;
  if (param_1 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_1;
    func_0x00010c0faf60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf85d80(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10571b194(puVar2,0xffffffffffffffff,lVar1,lVar8,lVar3);
    _objc_release(lVar3);
    _objc_release(lVar8);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar2 + 0x10) = 1;
  _objc_release(param_1);
  puVar9 = (undefined *)0x0;
LAB_10571b730:
  _objc_release(puVar9);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10571b87c; end: 10571b8df;  */

void FUN_10571b87c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b8710;
    _objc_alloc(PTR_PTR_1126b8710);
    func_0x00010c05b840();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10571b8e0; end: 10571b91b; -[SCContactTempSnapchatterChangeRequest .cxx_destruct] */

void FUN_10571b8e0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10571b91c; end: 10571b927; -[SCContactTempSnapchatterChangeRequest table] */

undefined * FUN_10571b91c(void)

{
  return &UNK_10f2edb33;
}



/* Entry: 10571b928; end: 10571b96f; -[SCContactTempSnapchatterChangeRequest createTableWithSQLite:] */

void FUN_10571b928(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddbc6b8,0x84,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 10571b970; end: 10571bcf7; -[SCContactTempSnapchatterChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_10571b970(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_10571b87c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10571bcf8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f2edbc0);
    if (lVar6 == 0) goto LAB_10571bc94;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_10571bc94;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b8710);
    func_0x00010c21c9a0(puVar7);
LAB_10571bc7c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f2edb8e);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b8710);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_10571bca0;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_10571bca0;
    }
    FUN_10571b87c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_10571bcf8(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f2edbff);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b8710);
        func_0x00010c21c9a0(puVar7);
        goto LAB_10571bc7c;
      }
    }
LAB_10571bc94:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_10571bca0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10571bcf8; end: 10571be67;  */

ulong FUN_10571bcf8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  FUN_10571be68(param_1,uVar4);
  uVar6 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_10571be68(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  FUN_10571be68(param_1,uVar8);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce2e4(param_1,8,uVar9 & 0xffffffff);
  func_0x0001001ce2e4(param_1,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(param_1,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10571be68; end: 10571bf97;  */

undefined8 FUN_10571be68(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_10571bf48;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_10571bf48;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_10571bf08;
    param_1 = 0;
  }
  else {
LAB_10571bf08:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_10571bf48:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10571bf98; end: 10571bfc3; +[SCGrapheneTempSnapchatterMetric invite] */

void FUN_10571bf98(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571bfc4; end: 10571bfef; +[SCGrapheneTempSnapchatterMetric inviteSuccess] */

void FUN_10571bfc4(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571bff0; end: 10571c01b; +[SCGrapheneTempSnapchatterMetric inviteFail] */

void FUN_10571bff0(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571c01c; end: 10571c047; +[SCGrapheneTempSnapchatterMetric inviteLatency] */

void FUN_10571c01c(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571c048; end: 10571c073; +[SCGrapheneTempSnapchatterMetric inviteError] */

void FUN_10571c048(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571c074; end: 10571c09f; +[SCGrapheneTempSnapchatterMetric inviteErrorTotal] */

void FUN_10571c074(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571c0a0; end: 10571c0cb; +[SCGrapheneTempSnapchatterMetric upsert] */

void FUN_10571c0a0(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571c0cc; end: 10571c0f7; +[SCGrapheneTempSnapchatterMetric invitedRealUser] */

void FUN_10571c0cc(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571c0f8; end: 10571c123; +[SCGrapheneTempSnapchatterMetric inviteInvalidNumber] */

void FUN_10571c0f8(void)

{
  _objc_alloc(PTR_PTR_1126b86f8);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571c124; end: 10571c1c3; -[SCGrapheneTempSnapchatterMetric description] */

void FUN_10571c124(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110df9838;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110df9838,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e9f30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 10571c1c4; end: 10571c3d3; -[SCGrapheneRegistry tempSnapchatterGraphene] */

void FUN_10571c1c4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10571c24c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bfb48 != -1) {
    func_0x00010002a2fc(0x1136bfb48,&puStack_48);
  }
  uVar1 = uRam00000001136bfb40;
  _objc_retain(uRam00000001136bfb40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10571c3d4; end: 10571c3df;  */

bool FUN_10571c3d4(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10571c3e0; end: 10571c45b;  */

undefined * FUN_10571c3e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfb58 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df9938,
                        &UNK_10ddbc780,&UNK_10ddbc7a8,3,FUN_10571c45c,0);
    do {
      if (puRam00000001136bfb58 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfb58;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfb58,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfb58 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfb58;
}



/* Entry: 10571c45c; end: 10571c467;  */

bool FUN_10571c45c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 10571c468; end: 10571c4cf; +[SCMPostLoginMessageNotificationConfig descriptor] */

void FUN_10571c468(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfb60 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5db50,
                        &PTR____CFConstantStringClassReference_110df9958,&PTR_DAT_1130f73d8,
                        &PTR_DAT_1130f73f0,9,0x20,0x1c);
    puRam00000001136bfb60 = puVar1;
  }
  return;
}



/* Entry: 10571c4d0; end: 10571c543; -[SCGrapheneWelcomeBackNotificationMetric2 init] */

undefined1 * FUN_10571c4d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9f38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10571c544; end: 10571c803;  */

/* WARNING: Removing unreachable block (ram,0x00010571d320) */
/* WARNING: Removing unreachable block (ram,0x00010571c7cc) */
/* WARNING: Removing unreachable block (ram,0x00010571d060) */
/* WARNING: Removing unreachable block (ram,0x00010571d5e0) */

undefined **
FUN_10571c544(long param_1,char *param_2,undefined **param_3,undefined **param_4,undefined **param_5
             )

{
  char *pcVar1;
  undefined **ppuVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  char *pcVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  char *pcVar16;
  long lVar17;
  long *plVar18;
  undefined **unaff_x24;
  undefined **ppuStack_600;
  undefined *puStack_5f8;
  undefined **ppuStack_5f0;
  undefined **ppuStack_5e8;
  undefined8 ***pppuStack_5e0;
  code *pcStack_5d8;
  undefined8 uStack_5c8;
  undefined **ppuStack_5c0;
  undefined **ppuStack_5b8;
  undefined **ppuStack_5b0;
  undefined8 uStack_5a8;
  undefined **ppuStack_5a0;
  long lStack_598;
  undefined8 ***pppuStack_550;
  code *pcStack_548;
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 *puStack_528;
  undefined8 auStack_520 [2];
  char cStack_509;
  long lStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  char *pcStack_4f0;
  undefined **ppuStack_4e8;
  undefined **ppuStack_4e0;
  char *pcStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined *puStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined1 *puStack_4a8;
  undefined *apuStack_4a0 [3];
  undefined1 auStack_488 [24];
  undefined8 auStack_470 [2];
  char cStack_459;
  long lStack_458;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined *apuStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined *apuStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  undefined *apuStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined **ppuStack_220;
  undefined **ppuStack_218;
  undefined8 *puStack_210;
  char *pcStack_208;
  undefined **ppuStack_200;
  char *pcStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined *apuStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined **ppuStack_180;
  undefined **ppuStack_178;
  char *pcStack_170;
  long *plStack_168;
  char *pcStack_160;
  char *pcStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *apuStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  char *pcStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *apuStack_a0 [3];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar2 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar7 = param_3;
  ppuVar8 = param_4;
  ppuVar9 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar18 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(apuStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&puStack_c0,apuStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_a8 = (undefined1 *)&puStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar17 = 0;
    ppuVar7 = ppuVar2;
    ppuVar8 = param_5;
    do {
      if ((&cStack_59)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = &puStack_c0;
    } while (lVar17 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  ppuVar2 = (undefined **)param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return ppuVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  ppuVar14 = apuStack_a0;
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != ppuVar14);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = (char *)ppuVar2;
  __Unwind_Resume();
  ppuVar13 = &puStack_140;
  pcStack_c8 = FUN_10571c804;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar16 = pcVar1;
  ppuVar12 = ppuVar7;
  ppuStack_100 = unaff_x24;
  ppuStack_f8 = ppuVar14;
  pcStack_f0 = (char *)ppuVar2;
  ppuStack_e8 = param_4;
  ppuStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar18 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar18 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar16 = "";
    }
    else {
      pcVar16 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    ppuVar14 = apuStack_120;
    func_0x00010002b838(apuStack_120,pcVar16);
    puStack_140 = (undefined *)0x0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&puStack_140,apuStack_120,&lStack_108,1);
    pcVar16 = "\x01";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_128 = (undefined1 *)&puStack_140;
    func_0x00010007e5dc(&puStack_128);
    ppuVar12 = ppuVar13;
    ppuVar8 = ppuVar7;
    ppuVar2 = &puStack_140;
    if (cStack_109 < '\0') {
      __ZdlPv(apuStack_120[0]);
      ppuVar12 = ppuVar13;
      ppuVar8 = ppuVar7;
      ppuVar2 = &puStack_140;
    }
  }
  pcVar3 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return (undefined **)pcVar3;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar4 = pcVar3;
  __Unwind_Resume();
  pcStack_148 = FUN_10571c978;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar11 = pcVar16;
  ppuVar7 = ppuVar12;
  ppuVar13 = ppuVar8;
  ppuStack_180 = unaff_x24;
  ppuStack_178 = ppuVar14;
  pcStack_170 = (char *)ppuVar2;
  plStack_168 = plVar18;
  pcStack_160 = pcVar3;
  pcStack_158 = pcVar1;
  ppuStack_150 = &puStack_d0;
  _objc_retain(pcVar16);
  _objc_retain(ppuVar12);
  ppuVar2 = (undefined **)0x0;
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar16);
    if (pcVar16 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar16;
      _objc_retainAutorelease(pcVar16);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar16);
    unaff_x24 = apuStack_1b8;
    func_0x00010002b838(apuStack_1b8,pcVar1);
    _objc_retain(ppuVar12);
    if (ppuVar12 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar12);
      pcVar1 = (char *)ppuVar12;
      func_0x00010bdc3520(ppuVar12);
    }
    _objc_release(ppuVar12);
    func_0x00010002b838(auStack_1a0,pcVar1);
    puStack_1d8 = (undefined *)0x0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&puStack_1d8,apuStack_1b8,&lStack_188,2);
    pcVar11 = "";
    ppuVar14 = &puStack_1d8;
    ppuVar7 = &puStack_1d8;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    ppuStack_1c0 = ppuVar14;
    func_0x00010007e5dc(&ppuStack_1c0);
    lVar17 = 0;
    ppuVar2 = apuStack_1b8;
    ppuVar13 = ppuVar8;
    do {
      if ((&cStack_189)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(ppuVar12);
  pcVar1 = pcVar16;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return (undefined **)pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar12);
  if (cStack_1a1 < '\0') {
    __ZdlPv(apuStack_1b8[0]);
  }
  _objc_release(ppuVar12);
  _objc_release(pcVar16);
  pcVar4 = pcVar1;
  __Unwind_Resume();
  pcStack_1e8 = FUN_10571cba8;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar3 = pcVar11;
  ppuVar8 = ppuVar7;
  ppuVar15 = ppuVar13;
  ppuStack_220 = unaff_x24;
  ppuStack_218 = ppuVar14;
  puStack_210 = ppuVar2;
  pcStack_208 = pcVar1;
  ppuStack_200 = ppuVar12;
  pcStack_1f8 = pcVar16;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(pcVar11);
  _objc_retain(ppuVar7);
  if (pcVar4 != (char *)0x0) {
    plVar18 = *(long **)(pcVar4 + 8);
    _objc_retain(pcVar11);
    if (pcVar11 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar11;
      _objc_retainAutorelease(pcVar11);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar11);
    unaff_x24 = apuStack_258;
    func_0x00010002b838(apuStack_258,pcVar1);
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar7);
      pcVar1 = (char *)ppuVar7;
      func_0x00010bdc3520(ppuVar7);
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_240,pcVar1);
    puStack_278 = (undefined *)0x0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&puStack_278,apuStack_258,&lStack_228,2);
    pcVar3 = "";
    ppuVar8 = &puStack_278;
    (**(code **)(*plVar18 + 0x18))(plVar18);
    ppuStack_260 = &puStack_278;
    func_0x00010007e5dc(&ppuStack_260);
    lVar17 = 0;
    ppuVar15 = ppuVar13;
    do {
      if ((&cStack_229)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(ppuVar7);
  pcVar1 = pcVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return (undefined **)pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar7);
  if (cStack_241 < '\0') {
    __ZdlPv(apuStack_258[0]);
  }
  _objc_release(ppuVar7);
  _objc_release(pcVar11);
  __Unwind_Resume();
  ppuVar12 = &puStack_340;
  pcStack_288 = FUN_10571cdd8;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar16 = pcVar3;
  ppuVar7 = ppuVar8;
  ppuVar2 = ppuVar15;
  ppuVar14 = ppuVar9;
  pppuStack_290 = &pppuStack_1f0;
  _objc_retain(pcVar3);
  _objc_retain(ppuVar8);
  _objc_retain(ppuVar15);
  if (pcVar1 != (char *)0x0) {
    plVar18 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar3);
    if (pcVar3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar3;
      _objc_retainAutorelease(pcVar3);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar3);
    func_0x00010002b838(apuStack_320,pcVar1);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar8);
      pcVar1 = (char *)ppuVar8;
      func_0x00010bdc3520(ppuVar8);
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_308,pcVar1);
    _objc_retain(ppuVar15);
    if (ppuVar15 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar15);
      pcVar1 = (char *)ppuVar15;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar15);
    func_0x00010002b838(auStack_2f0,pcVar1);
    puStack_340 = (undefined *)0x0;
    uStack_338 = 0;
    uStack_330 = 0;
    func_0x00010007e1e8(&puStack_340,apuStack_320,&lStack_2d8,3);
    pcVar16 = "";
    (**(code **)(*plVar18 + 0x18))(plVar18);
    puStack_328 = (undefined1 *)&puStack_340;
    func_0x00010007e5dc(&puStack_328);
    lVar17 = 0;
    ppuVar7 = ppuVar12;
    ppuVar2 = ppuVar9;
    do {
      if ((&cStack_2d9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
      unaff_x24 = &puStack_340;
    } while (lVar17 != -0x48);
  }
  _objc_release(ppuVar15);
  _objc_release(ppuVar8);
  pcVar1 = pcVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
    ___stack_chk_fail();
    _objc_release(ppuVar15);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != apuStack_320);
    _objc_release(ppuVar15);
    _objc_release(ppuVar8);
    _objc_release(pcVar3);
    __Unwind_Resume();
    ppuVar13 = &puStack_400;
    pcStack_348 = FUN_10571d098;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar3 = pcVar16;
    ppuVar8 = ppuVar7;
    ppuVar9 = ppuVar2;
    ppuVar12 = ppuVar14;
    pppuStack_350 = &pppuStack_290;
    _objc_retain(pcVar16);
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar2);
    if (pcVar1 != (char *)0x0) {
      plVar18 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar16);
      if (pcVar16 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar16;
        _objc_retainAutorelease(pcVar16);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar16);
      func_0x00010002b838(apuStack_3e0,pcVar1);
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar7);
        pcVar1 = (char *)ppuVar7;
        func_0x00010bdc3520(ppuVar7);
      }
      _objc_release(ppuVar7);
      func_0x00010002b838(auStack_3c8,pcVar1);
      _objc_retain(ppuVar2);
      if (ppuVar2 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar2);
        pcVar1 = (char *)ppuVar2;
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar2);
      func_0x00010002b838(auStack_3b0,pcVar1);
      puStack_400 = (undefined *)0x0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&puStack_400,apuStack_3e0,&lStack_398,3);
      pcVar3 = "";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_3e8 = (undefined1 *)&puStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      lVar17 = 0;
      ppuVar8 = ppuVar13;
      ppuVar9 = ppuVar14;
      do {
        if ((&cStack_399)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        unaff_x24 = &puStack_400;
      } while (lVar17 != -0x48);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar7);
    pcVar1 = pcVar16;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
      return (undefined **)pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar2);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != apuStack_3e0);
    _objc_release(ppuVar2);
    _objc_release(ppuVar7);
    _objc_release(pcVar16);
    __Unwind_Resume();
    ppuVar14 = &puStack_4c0;
    pcStack_408 = FUN_10571d358;
    lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar16 = pcVar3;
    ppuVar7 = ppuVar8;
    ppuVar2 = ppuVar9;
    pppuStack_410 = &pppuStack_350;
    _objc_retain(pcVar3);
    _objc_retain(ppuVar8);
    _objc_retain(ppuVar9);
    if (pcVar1 != (char *)0x0) {
      plVar18 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar3);
      if (pcVar3 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar3;
        _objc_retainAutorelease(pcVar3);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar3);
      func_0x00010002b838(apuStack_4a0,pcVar1);
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar8);
        pcVar1 = (char *)ppuVar8;
        func_0x00010bdc3520(ppuVar8);
      }
      _objc_release(ppuVar8);
      func_0x00010002b838(auStack_488,pcVar1);
      _objc_retain(ppuVar9);
      if (ppuVar9 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar9);
        pcVar1 = (char *)ppuVar9;
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar9);
      func_0x00010002b838(auStack_470,pcVar1);
      puStack_4c0 = (undefined *)0x0;
      uStack_4b8 = 0;
      uStack_4b0 = 0;
      func_0x00010007e1e8(&puStack_4c0,apuStack_4a0,&lStack_458,3);
      pcVar16 = "";
      (**(code **)(*plVar18 + 0x18))(plVar18);
      puStack_4a8 = (undefined1 *)&puStack_4c0;
      func_0x00010007e5dc(&puStack_4a8);
      lVar17 = 0;
      ppuVar7 = ppuVar14;
      ppuVar2 = ppuVar12;
      do {
        if ((&cStack_459)[lVar17] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_470 + lVar17));
        }
        lVar17 = lVar17 + -0x18;
        unaff_x24 = &puStack_4c0;
      } while (lVar17 != -0x48);
    }
    _objc_release(ppuVar9);
    _objc_release(ppuVar8);
    pcVar1 = pcVar3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_458) {
      ___stack_chk_fail();
      _objc_release(ppuVar9);
      ppuStack_4f8 = apuStack_4a0;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != ppuStack_4f8);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(pcVar3);
      pcVar4 = pcVar1;
      __Unwind_Resume();
      ppuVar12 = &puStack_540;
      pcStack_4c8 = FUN_10571d618;
      lStack_508 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar11 = pcVar16;
      ppuVar14 = ppuVar7;
      ppuStack_500 = unaff_x24;
      pcStack_4f0 = pcVar1;
      ppuStack_4e8 = ppuVar9;
      ppuStack_4e0 = ppuVar8;
      pcStack_4d8 = pcVar3;
      pppuStack_4d0 = &pppuStack_410;
      _objc_retain(pcVar16);
      if (pcVar4 != (char *)0x0) {
        plVar18 = *(long **)(pcVar4 + 8);
        _objc_retain(pcVar16);
        if (pcVar16 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar16;
          _objc_retainAutorelease(pcVar16);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar16);
        func_0x00010002b838(auStack_520,pcVar1);
        puStack_540 = (undefined *)0x0;
        uStack_538 = 0;
        uStack_530 = 0;
        func_0x00010007e1e8(&puStack_540,auStack_520,&lStack_508,1);
        pcVar11 = "\x01";
        (**(code **)(*plVar18 + 0x18))(plVar18);
        puStack_528 = (undefined1 *)&puStack_540;
        func_0x00010007e5dc(&puStack_528);
        ppuVar14 = ppuVar12;
        ppuVar2 = ppuVar7;
        if (cStack_509 < '\0') {
          __ZdlPv(auStack_520[0]);
          ppuVar14 = ppuVar12;
          ppuVar2 = ppuVar7;
        }
      }
      pcVar1 = pcVar16;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_508) {
        ___stack_chk_fail();
        _objc_release(pcVar16);
        _objc_release(pcVar16);
        __Unwind_Resume(pcVar1);
        pcStack_548 = FUN_10571d78c;
        lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_550 = &pppuStack_4d0;
        _objc_retain(ppuVar14);
        pcVar1 = PTR_PTR_1126bd738;
        func_0x00010bfbc0e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar16 = pcVar1;
        func_0x00010bf54620();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((ppuVar2 != (undefined **)0x0) && (pcVar16 == (char *)0x0)) {
          uStack_5a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_5a0 = &PTR____CFConstantStringClassReference_110df9998;
          puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *ppuVar2 = puVar6;
          _objc_release(puVar5);
        }
        _objc_release(pcVar1);
        while( true ) {
          ppuVar7 = ppuVar14;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar16);
            return (undefined **)pcVar16;
          }
          ___stack_chk_fail();
          if ((int)pcVar11 != 1) break;
          _objc_begin_catch();
          _objc_retain();
          puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (ppuVar2 != (undefined **)0x0) {
            uStack_5c8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuVar8 = ppuVar7;
            func_0x00010c121ea0();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_5b8 = &PTR____CFConstantStringClassReference_110df99b8;
            if (ppuVar8 != (undefined **)0x0) {
              ppuStack_5b8 = ppuVar8;
            }
            ppuStack_5c0 = &PTR____CFConstantStringClassReference_110df99d8;
            ppuVar9 = ppuVar7;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_5b0 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar9 != (undefined **)0x0) {
              ppuStack_5b0 = ppuVar9;
            }
            puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *ppuVar2 = puVar6;
            _objc_release(puVar5);
            _objc_release(ppuVar9);
            _objc_release(ppuVar8);
          }
          _objc_release(ppuVar7);
          _objc_end_catch();
          pcVar16 = (char *)0x0;
        }
        __Unwind_Resume();
        pppuVar10 = &ppuStack_600;
        pcStack_5d8 = FUN_10571d9e0;
        puStack_5f8 = PTR_PTR_1126e9f40;
        ppuStack_600 = ppuVar7;
        ppuStack_5f0 = ppuVar2;
        ppuStack_5e8 = ppuVar14;
        pppuStack_5e0 = &pppuStack_550;
        _objc_msgSendSuper2(&ppuStack_600,PTR_s_init_1125d9248);
        if (pppuVar10 != (undefined ***)0x0) {
          pcVar1 = (char *)pppuVar10;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)pppuVar10 + 8) = pcVar1;
        }
        return (undefined **)(char *)pppuVar10;
      }
      return (undefined **)pcVar1;
    }
    return (undefined **)pcVar1;
  }
  return (undefined **)pcVar1;
}



/* Entry: 10571c804; end: 10571c977;  */

/* WARNING: Removing unreachable block (ram,0x00010571d320) */
/* WARNING: Removing unreachable block (ram,0x00010571d060) */
/* WARNING: Removing unreachable block (ram,0x00010571d5e0) */

char * FUN_10571c804(long param_1,char *param_2,undefined **param_3,undefined **param_4,
                    undefined **param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  undefined8 *puVar18;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuStack_540;
  undefined *puStack_538;
  undefined **ppuStack_530;
  undefined **ppuStack_528;
  undefined8 ***pppuStack_520;
  code *pcStack_518;
  undefined8 uStack_508;
  undefined **ppuStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  undefined **ppuStack_4e0;
  long lStack_4d8;
  undefined8 ***pppuStack_490;
  code *pcStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined1 *puStack_468;
  undefined8 auStack_460 [2];
  char cStack_449;
  long lStack_448;
  undefined8 *puStack_440;
  undefined8 *puStack_438;
  char *pcStack_430;
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  char *pcStack_418;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [3];
  undefined1 auStack_3c8 [24];
  undefined8 auStack_3b0 [2];
  char cStack_399;
  long lStack_398;
  undefined8 ***pppuStack_350;
  code *pcStack_348;
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 auStack_320 [3];
  undefined1 auStack_308 [24];
  undefined8 auStack_2f0 [2];
  char cStack_2d9;
  long lStack_2d8;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [3];
  undefined1 auStack_248 [24];
  undefined8 auStack_230 [2];
  char cStack_219;
  long lStack_218;
  undefined1 ***pppuStack_1d0;
  code *pcStack_1c8;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  undefined8 auStack_198 [2];
  char cStack_181;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined **ppuStack_158;
  undefined8 *puStack_150;
  char *pcStack_148;
  undefined **ppuStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined *apuStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar11 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar15 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = apuStack_60;
    func_0x00010002b838(apuStack_60,pcVar1);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&puStack_80,apuStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_68 = (undefined1 *)&puStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppuVar5 = ppuVar11;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(apuStack_60[0]);
      ppuVar5 = ppuVar11;
      param_4 = param_3;
    }
  }
  pcVar17 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar17;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10571c978;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  ppuVar11 = ppuVar5;
  ppuVar14 = param_4;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(ppuVar5);
  puVar18 = (undefined8 *)0x0;
  if (pcVar17 != (char *)0x0) {
    plVar15 = *(long **)(pcVar17 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar17 = "";
    }
    else {
      pcVar17 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (undefined **)auStack_f8;
    func_0x00010002b838(auStack_f8,pcVar17);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar17 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar5);
      pcVar17 = (char *)ppuVar5;
      func_0x00010bdc3520(ppuVar5);
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_e0,pcVar17);
    puStack_118 = (undefined *)0x0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x00010007e1e8(&puStack_118,auStack_f8,&lStack_c8,2);
    pcVar9 = "";
    unaff_x23 = &puStack_118;
    ppuVar11 = &puStack_118;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    ppuStack_100 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_100);
    lVar16 = 0;
    puVar18 = auStack_f8;
    ppuVar14 = param_4;
    do {
      if ((&cStack_c9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(ppuVar5);
  pcVar17 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return pcVar17;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(ppuVar5);
  _objc_release(pcVar1);
  pcVar2 = pcVar17;
  __Unwind_Resume();
  pcStack_128 = FUN_10571cba8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar9;
  ppuVar6 = ppuVar11;
  ppuVar7 = ppuVar14;
  puStack_160 = unaff_x24;
  ppuStack_158 = unaff_x23;
  puStack_150 = puVar18;
  pcStack_148 = pcVar17;
  ppuStack_140 = ppuVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(pcVar9);
  _objc_retain(ppuVar11);
  if (pcVar2 != (char *)0x0) {
    plVar15 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar9);
    if (pcVar9 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar9;
      _objc_retainAutorelease(pcVar9);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar9);
    unaff_x24 = (undefined **)auStack_198;
    func_0x00010002b838(auStack_198,pcVar1);
    _objc_retain(ppuVar11);
    if (ppuVar11 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar11);
      pcVar1 = (char *)ppuVar11;
      func_0x00010bdc3520(ppuVar11);
    }
    _objc_release(ppuVar11);
    func_0x00010002b838(auStack_180,pcVar1);
    puStack_1b8 = (undefined *)0x0;
    uStack_1b0 = 0;
    uStack_1a8 = 0;
    func_0x00010007e1e8(&puStack_1b8,auStack_198,&lStack_168,2);
    pcVar10 = "";
    ppuVar6 = &puStack_1b8;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    ppuStack_1a0 = &puStack_1b8;
    func_0x00010007e5dc(&ppuStack_1a0);
    lVar16 = 0;
    ppuVar7 = ppuVar14;
    do {
      if ((&cStack_169)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_180 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(ppuVar11);
  pcVar1 = pcVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return pcVar1;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar11);
  if (cStack_181 < '\0') {
    __ZdlPv(auStack_198[0]);
  }
  _objc_release(ppuVar11);
  _objc_release(pcVar9);
  __Unwind_Resume();
  ppuVar12 = &puStack_280;
  pcStack_1c8 = FUN_10571cdd8;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar17 = pcVar10;
  ppuVar5 = ppuVar6;
  ppuVar11 = ppuVar7;
  ppuVar14 = param_5;
  pppuStack_1d0 = &ppuStack_130;
  _objc_retain(pcVar10);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar7);
  if (pcVar1 != (char *)0x0) {
    plVar15 = *(long **)(pcVar1 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_260,pcVar1);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar6);
      pcVar1 = (char *)ppuVar6;
      func_0x00010bdc3520(ppuVar6);
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_248,pcVar1);
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar7);
      pcVar1 = (char *)ppuVar7;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_230,pcVar1);
    puStack_280 = (undefined *)0x0;
    uStack_278 = 0;
    uStack_270 = 0;
    func_0x00010007e1e8(&puStack_280,auStack_260,&lStack_218,3);
    pcVar17 = "";
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_268 = (undefined1 *)&puStack_280;
    func_0x00010007e5dc(&puStack_268);
    lVar16 = 0;
    ppuVar5 = ppuVar12;
    ppuVar11 = param_5;
    do {
      if ((&cStack_219)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_230 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x24 = &puStack_280;
    } while (lVar16 != -0x48);
  }
  _objc_release(ppuVar7);
  _objc_release(ppuVar6);
  pcVar1 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    ___stack_chk_fail();
    _objc_release(ppuVar7);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != (undefined **)auStack_260);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(pcVar10);
    __Unwind_Resume();
    ppuVar13 = &puStack_340;
    pcStack_288 = FUN_10571d098;
    lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar17;
    ppuVar6 = ppuVar5;
    ppuVar7 = ppuVar11;
    ppuVar12 = ppuVar14;
    pppuStack_290 = &pppuStack_1d0;
    _objc_retain(pcVar17);
    _objc_retain(ppuVar5);
    _objc_retain(ppuVar11);
    if (pcVar1 != (char *)0x0) {
      plVar15 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar17);
      if (pcVar17 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar17;
        _objc_retainAutorelease(pcVar17);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar17);
      func_0x00010002b838(auStack_320,pcVar1);
      _objc_retain(ppuVar5);
      if (ppuVar5 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar5);
        pcVar1 = (char *)ppuVar5;
        func_0x00010bdc3520(ppuVar5);
      }
      _objc_release(ppuVar5);
      func_0x00010002b838(auStack_308,pcVar1);
      _objc_retain(ppuVar11);
      if (ppuVar11 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar11);
        pcVar1 = (char *)ppuVar11;
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar11);
      func_0x00010002b838(auStack_2f0,pcVar1);
      puStack_340 = (undefined *)0x0;
      uStack_338 = 0;
      uStack_330 = 0;
      func_0x00010007e1e8(&puStack_340,auStack_320,&lStack_2d8,3);
      pcVar9 = "";
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_328 = (undefined1 *)&puStack_340;
      func_0x00010007e5dc(&puStack_328);
      lVar16 = 0;
      ppuVar6 = ppuVar13;
      ppuVar7 = ppuVar14;
      do {
        if ((&cStack_2d9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_2f0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        unaff_x24 = &puStack_340;
      } while (lVar16 != -0x48);
    }
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
    pcVar1 = pcVar17;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d8) {
      return pcVar1;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar11);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != (undefined **)auStack_320);
    _objc_release(ppuVar11);
    _objc_release(ppuVar5);
    _objc_release(pcVar17);
    __Unwind_Resume();
    ppuVar14 = &puStack_400;
    pcStack_348 = FUN_10571d358;
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar17 = pcVar9;
    ppuVar5 = ppuVar6;
    ppuVar11 = ppuVar7;
    pppuStack_350 = &pppuStack_290;
    _objc_retain(pcVar9);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar7);
    if (pcVar1 != (char *)0x0) {
      plVar15 = *(long **)(pcVar1 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_3e0,pcVar1);
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar6);
        pcVar1 = (char *)ppuVar6;
        func_0x00010bdc3520(ppuVar6);
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_3c8,pcVar1);
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar7);
        pcVar1 = (char *)ppuVar7;
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      func_0x00010002b838(auStack_3b0,pcVar1);
      puStack_400 = (undefined *)0x0;
      uStack_3f8 = 0;
      uStack_3f0 = 0;
      func_0x00010007e1e8(&puStack_400,auStack_3e0,&lStack_398,3);
      pcVar17 = "";
      (**(code **)(*plVar15 + 0x18))(plVar15);
      puStack_3e8 = (undefined1 *)&puStack_400;
      func_0x00010007e5dc(&puStack_3e8);
      lVar16 = 0;
      ppuVar5 = ppuVar14;
      ppuVar11 = ppuVar12;
      do {
        if ((&cStack_399)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_3b0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        unaff_x24 = &puStack_400;
      } while (lVar16 != -0x48);
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
      ___stack_chk_fail();
      _objc_release(ppuVar7);
      puStack_438 = auStack_3e0;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != (undefined **)puStack_438);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(pcVar9);
      pcVar2 = pcVar1;
      __Unwind_Resume();
      ppuVar12 = &puStack_480;
      pcStack_408 = FUN_10571d618;
      lStack_448 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar17;
      ppuVar14 = ppuVar5;
      puStack_440 = unaff_x24;
      pcStack_430 = pcVar1;
      ppuStack_428 = ppuVar7;
      ppuStack_420 = ppuVar6;
      pcStack_418 = pcVar9;
      pppuStack_410 = &pppuStack_350;
      _objc_retain(pcVar17);
      if (pcVar2 != (char *)0x0) {
        plVar15 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar17);
        if (pcVar17 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar17;
          _objc_retainAutorelease(pcVar17);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar17);
        func_0x00010002b838(auStack_460,pcVar1);
        puStack_480 = (undefined *)0x0;
        uStack_478 = 0;
        uStack_470 = 0;
        func_0x00010007e1e8(&puStack_480,auStack_460,&lStack_448,1);
        pcVar10 = "\x01";
        (**(code **)(*plVar15 + 0x18))(plVar15);
        puStack_468 = (undefined1 *)&puStack_480;
        func_0x00010007e5dc(&puStack_468);
        ppuVar14 = ppuVar12;
        ppuVar11 = ppuVar5;
        if (cStack_449 < '\0') {
          __ZdlPv(auStack_460[0]);
          ppuVar14 = ppuVar12;
          ppuVar11 = ppuVar5;
        }
      }
      pcVar1 = pcVar17;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_448) {
        ___stack_chk_fail();
        _objc_release(pcVar17);
        _objc_release(pcVar17);
        __Unwind_Resume(pcVar1);
        pcStack_488 = FUN_10571d78c;
        lStack_4d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_490 = &pppuStack_410;
        _objc_retain(ppuVar14);
        pcVar1 = PTR_PTR_1126bd738;
        func_0x00010bfbc0e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar17 = pcVar1;
        func_0x00010bf54620();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((ppuVar11 != (undefined **)0x0) && (pcVar17 == (char *)0x0)) {
          uStack_4e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_4e0 = &PTR____CFConstantStringClassReference_110df9998;
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *ppuVar11 = puVar4;
          _objc_release(puVar3);
        }
        _objc_release(pcVar1);
        while( true ) {
          ppuVar5 = ppuVar14;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4d8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar17);
            return pcVar17;
          }
          ___stack_chk_fail();
          if ((int)pcVar10 != 1) break;
          _objc_begin_catch();
          _objc_retain();
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (ppuVar11 != (undefined **)0x0) {
            uStack_508 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuVar6 = ppuVar5;
            func_0x00010c121ea0();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_4f8 = &PTR____CFConstantStringClassReference_110df99b8;
            if (ppuVar6 != (undefined **)0x0) {
              ppuStack_4f8 = ppuVar6;
            }
            ppuStack_500 = &PTR____CFConstantStringClassReference_110df99d8;
            ppuVar7 = ppuVar5;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_4f0 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar7 != (undefined **)0x0) {
              ppuStack_4f0 = ppuVar7;
            }
            puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *ppuVar11 = puVar4;
            _objc_release(puVar3);
            _objc_release(ppuVar7);
            _objc_release(ppuVar6);
          }
          _objc_release(ppuVar5);
          _objc_end_catch();
          pcVar17 = (char *)0x0;
        }
        __Unwind_Resume();
        pppuVar8 = &ppuStack_540;
        pcStack_518 = FUN_10571d9e0;
        puStack_538 = PTR_PTR_1126e9f40;
        ppuStack_540 = ppuVar5;
        ppuStack_530 = ppuVar11;
        ppuStack_528 = ppuVar14;
        pppuStack_520 = &pppuStack_490;
        _objc_msgSendSuper2(&ppuStack_540,PTR_s_init_1125d9248);
        if (pppuVar8 != (undefined ***)0x0) {
          pcVar1 = (char *)pppuVar8;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)pppuVar8 + 8) = pcVar1;
        }
        return (char *)pppuVar8;
      }
      return pcVar1;
    }
    return pcVar1;
  }
  return pcVar1;
}



/* Entry: 10571c978; end: 10571cba7;  */

/* WARNING: Removing unreachable block (ram,0x00010571d320) */
/* WARNING: Removing unreachable block (ram,0x00010571d060) */
/* WARNING: Removing unreachable block (ram,0x00010571d5e0) */

char * FUN_10571c978(long param_1,char *param_2,undefined **param_3,undefined **param_4,
                    undefined **param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  undefined8 *puVar18;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined **ppuStack_4c0;
  undefined *puStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined8 ***pppuStack_4a0;
  code *pcStack_498;
  undefined8 uStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined **ppuStack_460;
  long lStack_458;
  undefined8 ***pppuStack_410;
  code *pcStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined1 *puStack_3e8;
  undefined8 auStack_3e0 [2];
  char cStack_3c9;
  long lStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  char *pcStack_3b0;
  undefined **ppuStack_3a8;
  undefined **ppuStack_3a0;
  char *pcStack_398;
  undefined8 ***pppuStack_390;
  code *pcStack_388;
  undefined *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined1 *puStack_368;
  undefined8 auStack_360 [3];
  undefined1 auStack_348 [24];
  undefined8 auStack_330 [2];
  char cStack_319;
  long lStack_318;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [3];
  undefined1 auStack_288 [24];
  undefined8 auStack_270 [2];
  char cStack_259;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [3];
  undefined1 auStack_1c8 [24];
  undefined8 auStack_1b0 [2];
  char cStack_199;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined **ppuStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  undefined **ppuStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar6 = param_3;
  ppuVar14 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar18 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (undefined **)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    unaff_x23 = &puStack_98;
    ppuVar6 = &puStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    ppuStack_80 = unaff_x23;
    func_0x00010007e5dc(&ppuStack_80);
    lVar15 = 0;
    puVar18 = auStack_78;
    ppuVar14 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(param_3);
  pcVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar16;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar2 = pcVar16;
  __Unwind_Resume();
  pcStack_a8 = FUN_10571cba8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  ppuVar7 = ppuVar6;
  ppuVar8 = ppuVar14;
  puStack_e0 = unaff_x24;
  ppuStack_d8 = unaff_x23;
  puStack_d0 = puVar18;
  pcStack_c8 = pcVar16;
  ppuStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(ppuVar6);
  if (pcVar2 != (char *)0x0) {
    plVar17 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar16 = "";
    }
    else {
      pcVar16 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x24 = (undefined **)auStack_118;
    func_0x00010002b838(auStack_118,pcVar16);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar16 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar6);
      pcVar16 = (char *)ppuVar6;
      func_0x00010bdc3520(ppuVar6);
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_100,pcVar16);
    puStack_138 = (undefined *)0x0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&puStack_138,auStack_118,&lStack_e8,2);
    pcVar10 = "";
    ppuVar7 = &puStack_138;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    ppuStack_120 = &puStack_138;
    func_0x00010007e5dc(&ppuStack_120);
    lVar15 = 0;
    ppuVar8 = ppuVar14;
    do {
      if ((&cStack_e9)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(ppuVar6);
  pcVar16 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return pcVar16;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar6);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(ppuVar6);
  _objc_release(pcVar1);
  __Unwind_Resume();
  ppuVar11 = &puStack_200;
  pcStack_148 = FUN_10571cdd8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = pcVar10;
  ppuVar6 = ppuVar7;
  ppuVar14 = ppuVar8;
  ppuVar13 = param_5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(pcVar10);
  _objc_retain(ppuVar7);
  _objc_retain(ppuVar8);
  if (pcVar16 != (char *)0x0) {
    plVar17 = *(long **)(pcVar16 + 8);
    _objc_retain(pcVar10);
    if (pcVar10 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar10;
      _objc_retainAutorelease(pcVar10);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar10);
    func_0x00010002b838(auStack_1e0,pcVar1);
    _objc_retain(ppuVar7);
    if (ppuVar7 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar7);
      pcVar1 = (char *)ppuVar7;
      func_0x00010bdc3520(ppuVar7);
    }
    _objc_release(ppuVar7);
    func_0x00010002b838(auStack_1c8,pcVar1);
    _objc_retain(ppuVar8);
    if (ppuVar8 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar8);
      pcVar1 = (char *)ppuVar8;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar8);
    func_0x00010002b838(auStack_1b0,pcVar1);
    puStack_200 = (undefined *)0x0;
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    func_0x00010007e1e8(&puStack_200,auStack_1e0,&lStack_198,3);
    pcVar1 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_1e8 = (undefined1 *)&puStack_200;
    func_0x00010007e5dc(&puStack_1e8);
    lVar15 = 0;
    ppuVar6 = ppuVar11;
    ppuVar14 = param_5;
    do {
      if ((&cStack_199)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1b0 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &puStack_200;
    } while (lVar15 != -0x48);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  pcVar16 = pcVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return pcVar16;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar8);
  do {
    unaff_x24 = unaff_x24 + -3;
  } while (unaff_x24 != (undefined **)auStack_1e0);
  _objc_release(ppuVar8);
  _objc_release(ppuVar7);
  _objc_release(pcVar10);
  __Unwind_Resume();
  ppuVar12 = &puStack_2c0;
  pcStack_208 = FUN_10571d098;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar10 = pcVar1;
  ppuVar7 = ppuVar6;
  ppuVar8 = ppuVar14;
  ppuVar11 = ppuVar13;
  pppuStack_210 = &ppuStack_150;
  _objc_retain(pcVar1);
  _objc_retain(ppuVar6);
  _objc_retain(ppuVar14);
  if (pcVar16 != (char *)0x0) {
    plVar17 = *(long **)(pcVar16 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar16 = "";
    }
    else {
      pcVar16 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_2a0,pcVar16);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar16 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar6);
      pcVar16 = (char *)ppuVar6;
      func_0x00010bdc3520(ppuVar6);
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_288,pcVar16);
    _objc_retain(ppuVar14);
    if (ppuVar14 == (undefined **)0x0) {
      pcVar16 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar14);
      pcVar16 = (char *)ppuVar14;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar14);
    func_0x00010002b838(auStack_270,pcVar16);
    puStack_2c0 = (undefined *)0x0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    func_0x00010007e1e8(&puStack_2c0,auStack_2a0,&lStack_258,3);
    pcVar10 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_2a8 = (undefined1 *)&puStack_2c0;
    func_0x00010007e5dc(&puStack_2a8);
    lVar15 = 0;
    ppuVar7 = ppuVar12;
    ppuVar8 = ppuVar13;
    do {
      if ((&cStack_259)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_270 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &puStack_2c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar6);
  pcVar16 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
    ___stack_chk_fail();
    _objc_release(ppuVar14);
    do {
      unaff_x24 = unaff_x24 + -3;
    } while (unaff_x24 != (undefined **)auStack_2a0);
    _objc_release(ppuVar14);
    _objc_release(ppuVar6);
    _objc_release(pcVar1);
    __Unwind_Resume();
    ppuVar13 = &puStack_380;
    pcStack_2c8 = FUN_10571d358;
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar10;
    ppuVar6 = ppuVar7;
    ppuVar14 = ppuVar8;
    pppuStack_2d0 = &pppuStack_210;
    _objc_retain(pcVar10);
    _objc_retain(ppuVar7);
    _objc_retain(ppuVar8);
    if (pcVar16 != (char *)0x0) {
      plVar17 = *(long **)(pcVar16 + 8);
      _objc_retain(pcVar10);
      if (pcVar10 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar10;
        _objc_retainAutorelease(pcVar10);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar10);
      func_0x00010002b838(auStack_360,pcVar1);
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar7);
        pcVar1 = (char *)ppuVar7;
        func_0x00010bdc3520(ppuVar7);
      }
      _objc_release(ppuVar7);
      func_0x00010002b838(auStack_348,pcVar1);
      _objc_retain(ppuVar8);
      if (ppuVar8 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar8);
        pcVar1 = (char *)ppuVar8;
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar8);
      func_0x00010002b838(auStack_330,pcVar1);
      puStack_380 = (undefined *)0x0;
      uStack_378 = 0;
      uStack_370 = 0;
      func_0x00010007e1e8(&puStack_380,auStack_360,&lStack_318,3);
      pcVar1 = "";
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_368 = (undefined1 *)&puStack_380;
      func_0x00010007e5dc(&puStack_368);
      lVar15 = 0;
      ppuVar6 = ppuVar13;
      ppuVar14 = ppuVar11;
      do {
        if ((&cStack_319)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_330 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = &puStack_380;
      } while (lVar15 != -0x48);
    }
    _objc_release(ppuVar8);
    _objc_release(ppuVar7);
    pcVar16 = pcVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_318) {
      ___stack_chk_fail();
      _objc_release(ppuVar8);
      puStack_3b8 = auStack_360;
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != (undefined **)puStack_3b8);
      _objc_release(ppuVar8);
      _objc_release(ppuVar7);
      _objc_release(pcVar10);
      pcVar3 = pcVar16;
      __Unwind_Resume();
      ppuVar11 = &puStack_400;
      pcStack_388 = FUN_10571d618;
      lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar2 = pcVar1;
      ppuVar13 = ppuVar6;
      puStack_3c0 = unaff_x24;
      pcStack_3b0 = pcVar16;
      ppuStack_3a8 = ppuVar8;
      ppuStack_3a0 = ppuVar7;
      pcStack_398 = pcVar10;
      pppuStack_390 = &pppuStack_2d0;
      _objc_retain(pcVar1);
      if (pcVar3 != (char *)0x0) {
        plVar17 = *(long **)(pcVar3 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar16 = "";
        }
        else {
          pcVar16 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_3e0,pcVar16);
        puStack_400 = (undefined *)0x0;
        uStack_3f8 = 0;
        uStack_3f0 = 0;
        func_0x00010007e1e8(&puStack_400,auStack_3e0,&lStack_3c8,1);
        pcVar2 = "\x01";
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puStack_3e8 = (undefined1 *)&puStack_400;
        func_0x00010007e5dc(&puStack_3e8);
        ppuVar13 = ppuVar11;
        ppuVar14 = ppuVar6;
        if (cStack_3c9 < '\0') {
          __ZdlPv(auStack_3e0[0]);
          ppuVar13 = ppuVar11;
          ppuVar14 = ppuVar6;
        }
      }
      pcVar16 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3c8) {
        ___stack_chk_fail();
        _objc_release(pcVar1);
        _objc_release(pcVar1);
        __Unwind_Resume(pcVar16);
        pcStack_408 = FUN_10571d78c;
        lStack_458 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_410 = &pppuStack_390;
        _objc_retain(ppuVar13);
        pcVar1 = PTR_PTR_1126bd738;
        func_0x00010bfbc0e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar16 = pcVar1;
        func_0x00010bf54620();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((ppuVar14 != (undefined **)0x0) && (pcVar16 == (char *)0x0)) {
          uStack_468 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_460 = &PTR____CFConstantStringClassReference_110df9998;
          puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *ppuVar14 = puVar5;
          _objc_release(puVar4);
        }
        _objc_release(pcVar1);
        while( true ) {
          ppuVar6 = ppuVar13;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_458) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar16);
            return pcVar16;
          }
          ___stack_chk_fail();
          if ((int)pcVar2 != 1) break;
          _objc_begin_catch();
          _objc_retain();
          puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (ppuVar14 != (undefined **)0x0) {
            uStack_488 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuVar7 = ppuVar6;
            func_0x00010c121ea0();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_478 = &PTR____CFConstantStringClassReference_110df99b8;
            if (ppuVar7 != (undefined **)0x0) {
              ppuStack_478 = ppuVar7;
            }
            ppuStack_480 = &PTR____CFConstantStringClassReference_110df99d8;
            ppuVar8 = ppuVar6;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_470 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar8 != (undefined **)0x0) {
              ppuStack_470 = ppuVar8;
            }
            puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *ppuVar14 = puVar5;
            _objc_release(puVar4);
            _objc_release(ppuVar8);
            _objc_release(ppuVar7);
          }
          _objc_release(ppuVar6);
          _objc_end_catch();
          pcVar16 = (char *)0x0;
        }
        __Unwind_Resume();
        pppuVar9 = &ppuStack_4c0;
        pcStack_498 = FUN_10571d9e0;
        puStack_4b8 = PTR_PTR_1126e9f40;
        ppuStack_4c0 = ppuVar6;
        ppuStack_4b0 = ppuVar14;
        ppuStack_4a8 = ppuVar13;
        pppuStack_4a0 = &pppuStack_410;
        _objc_msgSendSuper2(&ppuStack_4c0,PTR_s_init_1125d9248);
        if (pppuVar9 != (undefined ***)0x0) {
          pcVar1 = (char *)pppuVar9;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)pppuVar9 + 8) = pcVar1;
        }
        return (char *)pppuVar9;
      }
      return pcVar16;
    }
    return pcVar16;
  }
  return pcVar16;
}



/* Entry: 10571cba8; end: 10571cdd7;  */

/* WARNING: Removing unreachable block (ram,0x00010571d320) */
/* WARNING: Removing unreachable block (ram,0x00010571d060) */
/* WARNING: Removing unreachable block (ram,0x00010571d5e0) */

char * FUN_10571cba8(long param_1,char *param_2,undefined **param_3,undefined **param_4,
                    undefined **param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  char *pcVar16;
  long *plVar17;
  undefined **unaff_x24;
  undefined **ppuStack_420;
  undefined *puStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined8 ***pppuStack_400;
  code *pcStack_3f8;
  undefined8 uStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined **ppuStack_3c0;
  long lStack_3b8;
  undefined8 ***pppuStack_370;
  code *pcStack_368;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined1 *puStack_348;
  undefined8 auStack_340 [2];
  char cStack_329;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  char *pcStack_310;
  undefined **ppuStack_308;
  undefined **ppuStack_300;
  char *pcStack_2f8;
  undefined8 ***pppuStack_2f0;
  code *pcStack_2e8;
  undefined *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 *puStack_2c8;
  undefined8 auStack_2c0 [3];
  undefined1 auStack_2a8 [24];
  undefined8 auStack_290 [2];
  char cStack_279;
  long lStack_278;
  undefined1 ***pppuStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [3];
  undefined1 auStack_1e8 [24];
  undefined8 auStack_1d0 [2];
  char cStack_1b9;
  long lStack_1b8;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar5 = param_3;
  ppuVar6 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = (undefined **)auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    puStack_98 = (undefined *)0x0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&puStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    ppuVar5 = &puStack_98;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    ppuStack_80 = &puStack_98;
    func_0x00010007e5dc(&ppuStack_80);
    lVar15 = 0;
    ppuVar6 = param_4;
    do {
      if ((&cStack_49)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x30);
  }
  _objc_release(param_3);
  pcVar16 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppuVar11 = &puStack_160;
    pcStack_a8 = FUN_10571cdd8;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar9 = pcVar1;
    ppuVar7 = ppuVar5;
    ppuVar14 = ppuVar6;
    ppuVar13 = param_5;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(ppuVar5);
    _objc_retain(ppuVar6);
    if (pcVar16 != (char *)0x0) {
      plVar17 = *(long **)(pcVar16 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar16 = "";
      }
      else {
        pcVar16 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_140,pcVar16);
      _objc_retain(ppuVar5);
      if (ppuVar5 == (undefined **)0x0) {
        pcVar16 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar5);
        pcVar16 = (char *)ppuVar5;
        func_0x00010bdc3520(ppuVar5);
      }
      _objc_release(ppuVar5);
      func_0x00010002b838(auStack_128,pcVar16);
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        pcVar16 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar6);
        pcVar16 = (char *)ppuVar6;
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_110,pcVar16);
      puStack_160 = (undefined *)0x0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&puStack_160,auStack_140,&lStack_f8,3);
      pcVar9 = "";
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_148 = (undefined1 *)&puStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar15 = 0;
      ppuVar7 = ppuVar11;
      ppuVar14 = param_5;
      do {
        if ((&cStack_f9)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
        unaff_x24 = &puStack_160;
      } while (lVar15 != -0x48);
    }
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    pcVar16 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(ppuVar6);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != (undefined **)auStack_140);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
      _objc_release(pcVar1);
      __Unwind_Resume();
      ppuVar12 = &puStack_220;
      pcStack_168 = FUN_10571d098;
      lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar1 = pcVar9;
      ppuVar5 = ppuVar7;
      ppuVar6 = ppuVar14;
      ppuVar11 = ppuVar13;
      ppuStack_170 = &puStack_b0;
      _objc_retain(pcVar9);
      _objc_retain(ppuVar7);
      _objc_retain(ppuVar14);
      if (pcVar16 != (char *)0x0) {
        plVar17 = *(long **)(pcVar16 + 8);
        _objc_retain(pcVar9);
        if (pcVar9 == (char *)0x0) {
          pcVar1 = "";
        }
        else {
          pcVar1 = pcVar9;
          _objc_retainAutorelease(pcVar9);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar9);
        func_0x00010002b838(auStack_200,pcVar1);
        _objc_retain(ppuVar7);
        if (ppuVar7 == (undefined **)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(ppuVar7);
          pcVar1 = (char *)ppuVar7;
          func_0x00010bdc3520(ppuVar7);
        }
        _objc_release(ppuVar7);
        func_0x00010002b838(auStack_1e8,pcVar1);
        _objc_retain(ppuVar14);
        if (ppuVar14 == (undefined **)0x0) {
          pcVar1 = "";
        }
        else {
          _objc_retainAutorelease(ppuVar14);
          pcVar1 = (char *)ppuVar14;
          func_0x00010bdc3520();
        }
        _objc_release(ppuVar14);
        func_0x00010002b838(auStack_1d0,pcVar1);
        puStack_220 = (undefined *)0x0;
        uStack_218 = 0;
        uStack_210 = 0;
        func_0x00010007e1e8(&puStack_220,auStack_200,&lStack_1b8,3);
        pcVar1 = "";
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puStack_208 = (undefined1 *)&puStack_220;
        func_0x00010007e5dc(&puStack_208);
        lVar15 = 0;
        ppuVar5 = ppuVar12;
        ppuVar6 = ppuVar13;
        do {
          if ((&cStack_1b9)[lVar15] < '\0') {
            __ZdlPv(*(undefined8 *)((long)auStack_1d0 + lVar15));
          }
          lVar15 = lVar15 + -0x18;
          unaff_x24 = &puStack_220;
        } while (lVar15 != -0x48);
      }
      _objc_release(ppuVar14);
      _objc_release(ppuVar7);
      pcVar16 = pcVar9;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b8) {
        ___stack_chk_fail();
        _objc_release(ppuVar14);
        do {
          unaff_x24 = unaff_x24 + -3;
        } while (unaff_x24 != (undefined **)auStack_200);
        _objc_release(ppuVar14);
        _objc_release(ppuVar7);
        _objc_release(pcVar9);
        __Unwind_Resume();
        ppuVar13 = &puStack_2e0;
        pcStack_228 = FUN_10571d358;
        lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar9 = pcVar1;
        ppuVar7 = ppuVar5;
        ppuVar14 = ppuVar6;
        pppuStack_230 = &ppuStack_170;
        _objc_retain(pcVar1);
        _objc_retain(ppuVar5);
        _objc_retain(ppuVar6);
        if (pcVar16 != (char *)0x0) {
          plVar17 = *(long **)(pcVar16 + 8);
          _objc_retain(pcVar1);
          if (pcVar1 == (char *)0x0) {
            pcVar16 = "";
          }
          else {
            pcVar16 = pcVar1;
            _objc_retainAutorelease(pcVar1);
            func_0x00010bdc3520();
          }
          _objc_release(pcVar1);
          func_0x00010002b838(auStack_2c0,pcVar16);
          _objc_retain(ppuVar5);
          if (ppuVar5 == (undefined **)0x0) {
            pcVar16 = "";
          }
          else {
            _objc_retainAutorelease(ppuVar5);
            pcVar16 = (char *)ppuVar5;
            func_0x00010bdc3520(ppuVar5);
          }
          _objc_release(ppuVar5);
          func_0x00010002b838(auStack_2a8,pcVar16);
          _objc_retain(ppuVar6);
          if (ppuVar6 == (undefined **)0x0) {
            pcVar16 = "";
          }
          else {
            _objc_retainAutorelease(ppuVar6);
            pcVar16 = (char *)ppuVar6;
            func_0x00010bdc3520();
          }
          _objc_release(ppuVar6);
          func_0x00010002b838(auStack_290,pcVar16);
          puStack_2e0 = (undefined *)0x0;
          uStack_2d8 = 0;
          uStack_2d0 = 0;
          func_0x00010007e1e8(&puStack_2e0,auStack_2c0,&lStack_278,3);
          pcVar9 = "";
          (**(code **)(*plVar17 + 0x18))(plVar17);
          puStack_2c8 = (undefined1 *)&puStack_2e0;
          func_0x00010007e5dc(&puStack_2c8);
          lVar15 = 0;
          ppuVar7 = ppuVar13;
          ppuVar14 = ppuVar11;
          do {
            if ((&cStack_279)[lVar15] < '\0') {
              __ZdlPv(*(undefined8 *)((long)auStack_290 + lVar15));
            }
            lVar15 = lVar15 + -0x18;
            unaff_x24 = &puStack_2e0;
          } while (lVar15 != -0x48);
        }
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        pcVar16 = pcVar1;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_278) {
          ___stack_chk_fail();
          _objc_release(ppuVar6);
          puStack_318 = auStack_2c0;
          do {
            unaff_x24 = unaff_x24 + -3;
          } while (unaff_x24 != (undefined **)puStack_318);
          _objc_release(ppuVar6);
          _objc_release(ppuVar5);
          _objc_release(pcVar1);
          pcVar2 = pcVar16;
          __Unwind_Resume();
          ppuVar11 = &puStack_360;
          pcStack_2e8 = FUN_10571d618;
          lStack_328 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pcVar10 = pcVar9;
          ppuVar13 = ppuVar7;
          puStack_320 = unaff_x24;
          pcStack_310 = pcVar16;
          ppuStack_308 = ppuVar6;
          ppuStack_300 = ppuVar5;
          pcStack_2f8 = pcVar1;
          pppuStack_2f0 = &pppuStack_230;
          _objc_retain(pcVar9);
          if (pcVar2 != (char *)0x0) {
            plVar17 = *(long **)(pcVar2 + 8);
            _objc_retain(pcVar9);
            if (pcVar9 == (char *)0x0) {
              pcVar1 = "";
            }
            else {
              pcVar1 = pcVar9;
              _objc_retainAutorelease(pcVar9);
              func_0x00010bdc3520();
            }
            _objc_release(pcVar9);
            func_0x00010002b838(auStack_340,pcVar1);
            puStack_360 = (undefined *)0x0;
            uStack_358 = 0;
            uStack_350 = 0;
            func_0x00010007e1e8(&puStack_360,auStack_340,&lStack_328,1);
            pcVar10 = "\x01";
            (**(code **)(*plVar17 + 0x18))(plVar17);
            puStack_348 = (undefined1 *)&puStack_360;
            func_0x00010007e5dc(&puStack_348);
            ppuVar13 = ppuVar11;
            ppuVar14 = ppuVar7;
            if (cStack_329 < '\0') {
              __ZdlPv(auStack_340[0]);
              ppuVar13 = ppuVar11;
              ppuVar14 = ppuVar7;
            }
          }
          pcVar1 = pcVar9;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_328) {
            ___stack_chk_fail();
            _objc_release(pcVar9);
            _objc_release(pcVar9);
            __Unwind_Resume(pcVar1);
            pcStack_368 = FUN_10571d78c;
            lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
            pppuStack_370 = &pppuStack_2f0;
            _objc_retain(ppuVar13);
            pcVar1 = PTR_PTR_1126bd738;
            func_0x00010bfbc0e0();
            _objc_retainAutoreleasedReturnValue();
            pcVar16 = pcVar1;
            func_0x00010bf54620();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
            if ((ppuVar14 != (undefined **)0x0) && (pcVar16 == (char *)0x0)) {
              uStack_3c8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
              ppuStack_3c0 = &PTR____CFConstantStringClassReference_110df9998;
              puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
              func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf99240();
              _objc_retainAutoreleasedReturnValue();
              _objc_autorelease();
              *ppuVar14 = puVar4;
              _objc_release(puVar3);
            }
            _objc_release(pcVar1);
            while( true ) {
              ppuVar5 = ppuVar13;
              _objc_release();
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar16);
                return pcVar16;
              }
              ___stack_chk_fail();
              if ((int)pcVar10 != 1) break;
              _objc_begin_catch();
              _objc_retain();
              puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
              if (ppuVar14 != (undefined **)0x0) {
                uStack_3e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
                ppuVar6 = ppuVar5;
                func_0x00010c121ea0();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_3d8 = &PTR____CFConstantStringClassReference_110df99b8;
                if (ppuVar6 != (undefined **)0x0) {
                  ppuStack_3d8 = ppuVar6;
                }
                ppuStack_3e0 = &PTR____CFConstantStringClassReference_110df99d8;
                ppuVar7 = ppuVar5;
                func_0x00010c0d4f60();
                _objc_retainAutoreleasedReturnValue();
                ppuStack_3d0 = &PTR____CFConstantStringClassReference_110daafd8;
                if (ppuVar7 != (undefined **)0x0) {
                  ppuStack_3d0 = ppuVar7;
                }
                puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
                func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bf99240();
                _objc_retainAutoreleasedReturnValue();
                _objc_autorelease();
                *ppuVar14 = puVar4;
                _objc_release(puVar3);
                _objc_release(ppuVar7);
                _objc_release(ppuVar6);
              }
              _objc_release(ppuVar5);
              _objc_end_catch();
              pcVar16 = (char *)0x0;
            }
            __Unwind_Resume();
            pppuVar8 = &ppuStack_420;
            pcStack_3f8 = FUN_10571d9e0;
            puStack_418 = PTR_PTR_1126e9f40;
            ppuStack_420 = ppuVar5;
            ppuStack_410 = ppuVar14;
            ppuStack_408 = ppuVar13;
            pppuStack_400 = &pppuStack_370;
            _objc_msgSendSuper2(&ppuStack_420,PTR_s_init_1125d9248);
            if (pppuVar8 != (undefined ***)0x0) {
              pcVar1 = (char *)pppuVar8;
              (*(code *)PTR_DAT_113403208)();
              *(char **)((long)pppuVar8 + 8) = pcVar1;
            }
            return (char *)pppuVar8;
          }
          return pcVar1;
        }
        return pcVar16;
      }
      return pcVar16;
    }
    return pcVar16;
  }
  return pcVar16;
}



/* Entry: 10571cdd8; end: 10571d097;  */

/* WARNING: Removing unreachable block (ram,0x00010571d320) */
/* WARNING: Removing unreachable block (ram,0x00010571d060) */
/* WARNING: Removing unreachable block (ram,0x00010571d5e0) */

char * FUN_10571cdd8(long param_1,char *param_2,undefined **param_3,undefined **param_4,
                    undefined **param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  char *pcVar15;
  long lVar16;
  long *plVar17;
  undefined **unaff_x24;
  undefined **ppuStack_380;
  undefined *puStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined8 ***pppuStack_360;
  code *pcStack_358;
  undefined8 uStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined8 uStack_328;
  undefined **ppuStack_320;
  long lStack_318;
  undefined8 ***pppuStack_2d0;
  code *pcStack_2c8;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 auStack_2a0 [2];
  char cStack_289;
  long lStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  char *pcStack_270;
  undefined **ppuStack_268;
  undefined **ppuStack_260;
  char *pcStack_258;
  undefined1 ***pppuStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 *puStack_228;
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined8 auStack_1f0 [2];
  char cStack_1d9;
  long lStack_1d8;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar6 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar5 = param_3;
  ppuVar14 = param_4;
  ppuVar12 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar17 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&puStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_a8 = (undefined1 *)&puStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar16 = 0;
    ppuVar5 = ppuVar6;
    ppuVar14 = param_5;
    do {
      if ((&cStack_59)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x24 = &puStack_c0;
    } while (lVar16 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar15;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined **)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined **)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar11 = &puStack_180;
  pcStack_c8 = FUN_10571d098;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  ppuVar6 = ppuVar5;
  ppuVar7 = ppuVar14;
  ppuVar13 = ppuVar12;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar14);
  if (pcVar15 != (char *)0x0) {
    plVar17 = *(long **)(pcVar15 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar15 = "";
    }
    else {
      pcVar15 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar15);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar15 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar5);
      pcVar15 = (char *)ppuVar5;
      func_0x00010bdc3520(ppuVar5);
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_148,pcVar15);
    _objc_retain(ppuVar14);
    if (ppuVar14 == (undefined **)0x0) {
      pcVar15 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar14);
      pcVar15 = (char *)ppuVar14;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar14);
    func_0x00010002b838(auStack_130,pcVar15);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&puStack_180,auStack_160,&lStack_118,3);
    pcVar9 = "";
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_168 = (undefined1 *)&puStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar16 = 0;
    ppuVar6 = ppuVar11;
    ppuVar7 = ppuVar12;
    do {
      if ((&cStack_119)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
      unaff_x24 = &puStack_180;
    } while (lVar16 != -0x48);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar5);
  pcVar15 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(ppuVar14);
    do {
      unaff_x24 = (undefined **)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined **)auStack_160);
    _objc_release(ppuVar14);
    _objc_release(ppuVar5);
    _objc_release(pcVar1);
    __Unwind_Resume();
    ppuVar12 = &puStack_240;
    pcStack_188 = FUN_10571d358;
    lStack_1d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar1 = pcVar9;
    ppuVar5 = ppuVar6;
    ppuVar14 = ppuVar7;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar9);
    _objc_retain(ppuVar6);
    _objc_retain(ppuVar7);
    if (pcVar15 != (char *)0x0) {
      plVar17 = *(long **)(pcVar15 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_220,pcVar1);
      _objc_retain(ppuVar6);
      if (ppuVar6 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar6);
        pcVar1 = (char *)ppuVar6;
        func_0x00010bdc3520(ppuVar6);
      }
      _objc_release(ppuVar6);
      func_0x00010002b838(auStack_208,pcVar1);
      _objc_retain(ppuVar7);
      if (ppuVar7 == (undefined **)0x0) {
        pcVar1 = "";
      }
      else {
        _objc_retainAutorelease(ppuVar7);
        pcVar1 = (char *)ppuVar7;
        func_0x00010bdc3520();
      }
      _objc_release(ppuVar7);
      func_0x00010002b838(auStack_1f0,pcVar1);
      puStack_240 = (undefined *)0x0;
      uStack_238 = 0;
      uStack_230 = 0;
      func_0x00010007e1e8(&puStack_240,auStack_220,&lStack_1d8,3);
      pcVar1 = "";
      (**(code **)(*plVar17 + 0x18))(plVar17);
      puStack_228 = (undefined1 *)&puStack_240;
      func_0x00010007e5dc(&puStack_228);
      lVar16 = 0;
      ppuVar5 = ppuVar12;
      ppuVar14 = ppuVar13;
      do {
        if ((&cStack_1d9)[lVar16] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1f0 + lVar16));
        }
        lVar16 = lVar16 + -0x18;
        unaff_x24 = &puStack_240;
      } while (lVar16 != -0x48);
    }
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    pcVar15 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1d8) {
      ___stack_chk_fail();
      _objc_release(ppuVar7);
      puStack_278 = auStack_220;
      do {
        unaff_x24 = (undefined **)((long)unaff_x24 + -0x18);
      } while (unaff_x24 != (undefined **)puStack_278);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
      _objc_release(pcVar9);
      pcVar2 = pcVar15;
      __Unwind_Resume();
      ppuVar13 = &puStack_2c0;
      pcStack_248 = FUN_10571d618;
      lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pcVar10 = pcVar1;
      ppuVar12 = ppuVar5;
      puStack_280 = (undefined1 *)unaff_x24;
      pcStack_270 = pcVar15;
      ppuStack_268 = ppuVar7;
      ppuStack_260 = ppuVar6;
      pcStack_258 = pcVar9;
      pppuStack_250 = &ppuStack_190;
      _objc_retain(pcVar1);
      if (pcVar2 != (char *)0x0) {
        plVar17 = *(long **)(pcVar2 + 8);
        _objc_retain(pcVar1);
        if (pcVar1 == (char *)0x0) {
          pcVar15 = "";
        }
        else {
          pcVar15 = pcVar1;
          _objc_retainAutorelease(pcVar1);
          func_0x00010bdc3520();
        }
        _objc_release(pcVar1);
        func_0x00010002b838(auStack_2a0,pcVar15);
        puStack_2c0 = (undefined *)0x0;
        uStack_2b8 = 0;
        uStack_2b0 = 0;
        func_0x00010007e1e8(&puStack_2c0,auStack_2a0,&lStack_288,1);
        pcVar10 = "\x01";
        (**(code **)(*plVar17 + 0x18))(plVar17);
        puStack_2a8 = (undefined1 *)&puStack_2c0;
        func_0x00010007e5dc(&puStack_2a8);
        ppuVar12 = ppuVar13;
        ppuVar14 = ppuVar5;
        if (cStack_289 < '\0') {
          __ZdlPv(auStack_2a0[0]);
          ppuVar12 = ppuVar13;
          ppuVar14 = ppuVar5;
        }
      }
      pcVar15 = pcVar1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_288) {
        ___stack_chk_fail();
        _objc_release(pcVar1);
        _objc_release(pcVar1);
        __Unwind_Resume(pcVar15);
        pcStack_2c8 = FUN_10571d78c;
        lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_2d0 = &pppuStack_250;
        _objc_retain(ppuVar12);
        pcVar1 = PTR_PTR_1126bd738;
        func_0x00010bfbc0e0();
        _objc_retainAutoreleasedReturnValue();
        pcVar15 = pcVar1;
        func_0x00010bf54620();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        if ((ppuVar14 != (undefined **)0x0) && (pcVar15 == (char *)0x0)) {
          uStack_328 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_320 = &PTR____CFConstantStringClassReference_110df9998;
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *ppuVar14 = puVar4;
          _objc_release(puVar3);
        }
        _objc_release(pcVar1);
        while( true ) {
          ppuVar5 = ppuVar12;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar15);
            return pcVar15;
          }
          ___stack_chk_fail();
          if ((int)pcVar10 != 1) break;
          _objc_begin_catch();
          _objc_retain();
          puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
          if (ppuVar14 != (undefined **)0x0) {
            uStack_348 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            ppuVar6 = ppuVar5;
            func_0x00010c121ea0();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_338 = &PTR____CFConstantStringClassReference_110df99b8;
            if (ppuVar6 != (undefined **)0x0) {
              ppuStack_338 = ppuVar6;
            }
            ppuStack_340 = &PTR____CFConstantStringClassReference_110df99d8;
            ppuVar7 = ppuVar5;
            func_0x00010c0d4f60();
            _objc_retainAutoreleasedReturnValue();
            ppuStack_330 = &PTR____CFConstantStringClassReference_110daafd8;
            if (ppuVar7 != (undefined **)0x0) {
              ppuStack_330 = ppuVar7;
            }
            puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
            func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf99240();
            _objc_retainAutoreleasedReturnValue();
            _objc_autorelease();
            *ppuVar14 = puVar4;
            _objc_release(puVar3);
            _objc_release(ppuVar7);
            _objc_release(ppuVar6);
          }
          _objc_release(ppuVar5);
          _objc_end_catch();
          pcVar15 = (char *)0x0;
        }
        __Unwind_Resume();
        pppuVar8 = &ppuStack_380;
        pcStack_358 = FUN_10571d9e0;
        puStack_378 = PTR_PTR_1126e9f40;
        ppuStack_380 = ppuVar5;
        ppuStack_370 = ppuVar14;
        ppuStack_368 = ppuVar12;
        pppuStack_360 = &pppuStack_2d0;
        _objc_msgSendSuper2(&ppuStack_380,PTR_s_init_1125d9248);
        if (pppuVar8 != (undefined ***)0x0) {
          pcVar1 = (char *)pppuVar8;
          (*(code *)PTR_DAT_113403208)();
          *(char **)((long)pppuVar8 + 8) = pcVar1;
        }
        return (char *)pppuVar8;
      }
      return pcVar15;
    }
    return pcVar15;
  }
  return pcVar15;
}



/* Entry: 10571d098; end: 10571d357;  */

/* WARNING: Removing unreachable block (ram,0x00010571d320) */
/* WARNING: Removing unreachable block (ram,0x00010571d5e0) */

char * FUN_10571d098(long param_1,char *param_2,undefined **param_3,undefined **param_4,
                    undefined **param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  char *pcVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  char *pcVar14;
  long lVar15;
  long *plVar16;
  undefined **unaff_x24;
  undefined **ppuStack_2c0;
  undefined *puStack_2b8;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  undefined8 ***pppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined **ppuStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  long lStack_258;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined1 *puStack_1c0;
  undefined1 *puStack_1b8;
  char *pcStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  char *pcStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar7 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar5 = param_3;
  ppuVar6 = param_4;
  ppuVar12 = param_5;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar16 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&puStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_a8 = (undefined1 *)&puStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar15 = 0;
    ppuVar5 = ppuVar7;
    ppuVar6 = param_5;
    do {
      if ((&cStack_59)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &puStack_c0;
    } while (lVar15 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar14 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar14;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  do {
    unaff_x24 = (undefined **)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined **)auStack_a0);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume();
  ppuVar11 = &puStack_180;
  pcStack_c8 = FUN_10571d358;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  ppuVar7 = ppuVar5;
  ppuVar13 = ppuVar6;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  _objc_retain(ppuVar5);
  _objc_retain(ppuVar6);
  if (pcVar14 != (char *)0x0) {
    plVar16 = *(long **)(pcVar14 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar14 = "";
    }
    else {
      pcVar14 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_160,pcVar14);
    _objc_retain(ppuVar5);
    if (ppuVar5 == (undefined **)0x0) {
      pcVar14 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar5);
      pcVar14 = (char *)ppuVar5;
      func_0x00010bdc3520(ppuVar5);
    }
    _objc_release(ppuVar5);
    func_0x00010002b838(auStack_148,pcVar14);
    _objc_retain(ppuVar6);
    if (ppuVar6 == (undefined **)0x0) {
      pcVar14 = "";
    }
    else {
      _objc_retainAutorelease(ppuVar6);
      pcVar14 = (char *)ppuVar6;
      func_0x00010bdc3520();
    }
    _objc_release(ppuVar6);
    func_0x00010002b838(auStack_130,pcVar14);
    puStack_180 = (undefined *)0x0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x00010007e1e8(&puStack_180,auStack_160,&lStack_118,3);
    pcVar9 = "";
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_168 = (undefined1 *)&puStack_180;
    func_0x00010007e5dc(&puStack_168);
    lVar15 = 0;
    ppuVar7 = ppuVar11;
    ppuVar13 = ppuVar12;
    do {
      if ((&cStack_119)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
      unaff_x24 = &puStack_180;
    } while (lVar15 != -0x48);
  }
  _objc_release(ppuVar6);
  _objc_release(ppuVar5);
  pcVar14 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(ppuVar6);
    puStack_1b8 = auStack_160;
    do {
      unaff_x24 = (undefined **)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined **)puStack_1b8);
    _objc_release(ppuVar6);
    _objc_release(ppuVar5);
    _objc_release(pcVar1);
    pcVar2 = pcVar14;
    __Unwind_Resume();
    ppuVar11 = &puStack_200;
    pcStack_188 = FUN_10571d618;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pcVar10 = pcVar9;
    ppuVar12 = ppuVar7;
    puStack_1c0 = (undefined1 *)unaff_x24;
    pcStack_1b0 = pcVar14;
    ppuStack_1a8 = ppuVar6;
    ppuStack_1a0 = ppuVar5;
    pcStack_198 = pcVar1;
    ppuStack_190 = &puStack_d0;
    _objc_retain(pcVar9);
    if (pcVar2 != (char *)0x0) {
      plVar16 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar9);
      if (pcVar9 == (char *)0x0) {
        pcVar1 = "";
      }
      else {
        pcVar1 = pcVar9;
        _objc_retainAutorelease(pcVar9);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar9);
      func_0x00010002b838(auStack_1e0,pcVar1);
      puStack_200 = (undefined *)0x0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x00010007e1e8(&puStack_200,auStack_1e0,&lStack_1c8,1);
      pcVar10 = "\x01";
      (**(code **)(*plVar16 + 0x18))(plVar16);
      puStack_1e8 = (undefined1 *)&puStack_200;
      func_0x00010007e5dc(&puStack_1e8);
      ppuVar12 = ppuVar11;
      ppuVar13 = ppuVar7;
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
        ppuVar12 = ppuVar11;
        ppuVar13 = ppuVar7;
      }
    }
    pcVar1 = pcVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(pcVar9);
      _objc_release(pcVar9);
      __Unwind_Resume(pcVar1);
      pcStack_208 = FUN_10571d78c;
      lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_210 = &ppuStack_190;
      _objc_retain(ppuVar12);
      pcVar1 = PTR_PTR_1126bd738;
      func_0x00010bfbc0e0();
      _objc_retainAutoreleasedReturnValue();
      pcVar14 = pcVar1;
      func_0x00010bf54620();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((ppuVar13 != (undefined **)0x0) && (pcVar14 == (char *)0x0)) {
        uStack_268 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_260 = &PTR____CFConstantStringClassReference_110df9998;
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *ppuVar13 = puVar4;
        _objc_release(puVar3);
      }
      _objc_release(pcVar1);
      while( true ) {
        ppuVar5 = ppuVar12;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar14);
          return pcVar14;
        }
        ___stack_chk_fail();
        if ((int)pcVar10 != 1) break;
        _objc_begin_catch();
        _objc_retain();
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        if (ppuVar13 != (undefined **)0x0) {
          uStack_288 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuVar6 = ppuVar5;
          func_0x00010c121ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_278 = &PTR____CFConstantStringClassReference_110df99b8;
          if (ppuVar6 != (undefined **)0x0) {
            ppuStack_278 = ppuVar6;
          }
          ppuStack_280 = &PTR____CFConstantStringClassReference_110df99d8;
          ppuVar7 = ppuVar5;
          func_0x00010c0d4f60();
          _objc_retainAutoreleasedReturnValue();
          ppuStack_270 = &PTR____CFConstantStringClassReference_110daafd8;
          if (ppuVar7 != (undefined **)0x0) {
            ppuStack_270 = ppuVar7;
          }
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240();
          _objc_retainAutoreleasedReturnValue();
          _objc_autorelease();
          *ppuVar13 = puVar4;
          _objc_release(puVar3);
          _objc_release(ppuVar7);
          _objc_release(ppuVar6);
        }
        _objc_release(ppuVar5);
        _objc_end_catch();
        pcVar14 = (char *)0x0;
      }
      __Unwind_Resume();
      pppuVar8 = &ppuStack_2c0;
      pcStack_298 = FUN_10571d9e0;
      puStack_2b8 = PTR_PTR_1126e9f40;
      ppuStack_2c0 = ppuVar5;
      ppuStack_2b0 = ppuVar13;
      ppuStack_2a8 = ppuVar12;
      pppuStack_2a0 = &pppuStack_210;
      _objc_msgSendSuper2(&ppuStack_2c0,PTR_s_init_1125d9248);
      if (pppuVar8 != (undefined ***)0x0) {
        pcVar1 = (char *)pppuVar8;
        (*(code *)PTR_DAT_113403208)();
        *(char **)((long)pppuVar8 + 8) = pcVar1;
      }
      return (char *)pppuVar8;
    }
    return pcVar1;
  }
  return pcVar14;
}



/* Entry: 10571d358; end: 10571d617;  */

/* WARNING: Removing unreachable block (ram,0x00010571d5e0) */

char * FUN_10571d358(long param_1,char *param_2,undefined **param_3,undefined **param_4,
                    undefined **param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  undefined **unaff_x24;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  undefined1 ***pppuStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined8 uStack_1a8;
  undefined **ppuStack_1a0;
  long lStack_198;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined8 auStack_120 [2];
  char cStack_109;
  long lStack_108;
  undefined1 *puStack_100;
  undefined1 *puStack_f8;
  char *pcStack_f0;
  undefined **ppuStack_e8;
  undefined **ppuStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  ppuVar10 = &puStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar5 = param_3;
  ppuVar11 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = (char *)param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined **)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = (char *)param_4;
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&puStack_c0,auStack_a0,&lStack_58,3);
    pcVar1 = "";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_a8 = (undefined1 *)&puStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar13 = 0;
    ppuVar5 = ppuVar10;
    ppuVar11 = param_5;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
      unaff_x24 = &puStack_c0;
    } while (lVar13 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return pcVar12;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  puStack_f8 = auStack_a0;
  do {
    unaff_x24 = (undefined **)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined **)puStack_f8);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar2 = pcVar12;
  __Unwind_Resume();
  ppuVar6 = &puStack_140;
  pcStack_c8 = FUN_10571d618;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar9 = pcVar1;
  ppuVar10 = ppuVar5;
  puStack_100 = (undefined1 *)unaff_x24;
  pcStack_f0 = pcVar12;
  ppuStack_e8 = param_4;
  ppuStack_e0 = param_3;
  pcStack_d8 = param_2;
  puStack_d0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  if (pcVar2 != (char *)0x0) {
    plVar14 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar12 = "";
    }
    else {
      pcVar12 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_120,pcVar12);
    puStack_140 = (undefined *)0x0;
    uStack_138 = 0;
    uStack_130 = 0;
    func_0x00010007e1e8(&puStack_140,auStack_120,&lStack_108,1);
    pcVar9 = "\x01";
    (**(code **)(*plVar14 + 0x18))(plVar14);
    puStack_128 = (undefined1 *)&puStack_140;
    func_0x00010007e5dc(&puStack_128);
    ppuVar10 = ppuVar6;
    ppuVar11 = ppuVar5;
    if (cStack_109 < '\0') {
      __ZdlPv(auStack_120[0]);
      ppuVar10 = ppuVar6;
      ppuVar11 = ppuVar5;
    }
  }
  pcVar12 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_108) {
    ___stack_chk_fail();
    _objc_release(pcVar1);
    _objc_release(pcVar1);
    __Unwind_Resume(pcVar12);
    pcStack_148 = FUN_10571d78c;
    lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_150 = &puStack_d0;
    _objc_retain(ppuVar10);
    pcVar1 = PTR_PTR_1126bd738;
    func_0x00010bfbc0e0();
    _objc_retainAutoreleasedReturnValue();
    pcVar12 = pcVar1;
    func_0x00010bf54620();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((ppuVar11 != (undefined **)0x0) && (pcVar12 == (char *)0x0)) {
      uStack_1a8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_1a0 = &PTR____CFConstantStringClassReference_110df9998;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *ppuVar11 = puVar4;
      _objc_release(puVar3);
    }
    _objc_release(pcVar1);
    while( true ) {
      ppuVar5 = ppuVar10;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar12);
        return pcVar12;
      }
      ___stack_chk_fail();
      if ((int)pcVar9 != 1) break;
      _objc_begin_catch();
      _objc_retain();
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      if (ppuVar11 != (undefined **)0x0) {
        uStack_1c8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuVar6 = ppuVar5;
        func_0x00010c121ea0();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1b8 = &PTR____CFConstantStringClassReference_110df99b8;
        if (ppuVar6 != (undefined **)0x0) {
          ppuStack_1b8 = ppuVar6;
        }
        ppuStack_1c0 = &PTR____CFConstantStringClassReference_110df99d8;
        ppuVar7 = ppuVar5;
        func_0x00010c0d4f60();
        _objc_retainAutoreleasedReturnValue();
        ppuStack_1b0 = &PTR____CFConstantStringClassReference_110daafd8;
        if (ppuVar7 != (undefined **)0x0) {
          ppuStack_1b0 = ppuVar7;
        }
        puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_autorelease();
        *ppuVar11 = puVar4;
        _objc_release(puVar3);
        _objc_release(ppuVar7);
        _objc_release(ppuVar6);
      }
      _objc_release(ppuVar5);
      _objc_end_catch();
      pcVar12 = (char *)0x0;
    }
    __Unwind_Resume();
    pppuVar8 = &ppuStack_200;
    pcStack_1d8 = FUN_10571d9e0;
    puStack_1f8 = PTR_PTR_1126e9f40;
    ppuStack_200 = ppuVar5;
    ppuStack_1f0 = ppuVar11;
    ppuStack_1e8 = ppuVar10;
    pppuStack_1e0 = &ppuStack_150;
    _objc_msgSendSuper2(&ppuStack_200,PTR_s_init_1125d9248);
    if (pppuVar8 != (undefined ***)0x0) {
      pcVar1 = (char *)pppuVar8;
      (*(code *)PTR_DAT_113403208)();
      *(char **)((long)pppuVar8 + 8) = pcVar1;
    }
    return (char *)pppuVar8;
  }
  return pcVar12;
}



/* Entry: 10571d618; end: 10571d78b;  */

char * FUN_10571d618(long param_1,char *param_2,undefined **param_3,undefined **param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  char *pcVar11;
  undefined **ppuStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 uStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  ppuVar5 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  ppuVar9 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar1);
    puStack_80 = (undefined *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&puStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "\x01";
    (**(code **)(*plVar10 + 0x18))(plVar10);
    puStack_68 = (undefined1 *)&puStack_80;
    func_0x00010007e5dc(&puStack_68);
    ppuVar9 = ppuVar5;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      ppuVar9 = ppuVar5;
      param_4 = param_3;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return pcVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(pcVar2);
  pcStack_88 = FUN_10571d78c;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar9);
  pcVar2 = PTR_PTR_1126bd738;
  func_0x00010bfbc0e0();
  _objc_retainAutoreleasedReturnValue();
  pcVar11 = pcVar2;
  func_0x00010bf54620();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_4 != (undefined **)0x0) && (pcVar11 == (char *)0x0)) {
    uStack_e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_e0 = &PTR____CFConstantStringClassReference_110df9998;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar4;
    _objc_release(puVar3);
  }
  _objc_release(pcVar2);
  while( true ) {
    ppuVar5 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar11);
      return pcVar11;
    }
    ___stack_chk_fail();
    if ((int)pcVar1 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_4 != (undefined **)0x0) {
      uStack_108 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuVar6 = ppuVar5;
      func_0x00010c121ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f8 = &PTR____CFConstantStringClassReference_110df99b8;
      if (ppuVar6 != (undefined **)0x0) {
        ppuStack_f8 = ppuVar6;
      }
      ppuStack_100 = &PTR____CFConstantStringClassReference_110df99d8;
      ppuVar7 = ppuVar5;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_f0 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar7 != (undefined **)0x0) {
        ppuStack_f0 = ppuVar7;
      }
      puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar4;
      _objc_release(puVar3);
      _objc_release(ppuVar7);
      _objc_release(ppuVar6);
    }
    _objc_release(ppuVar5);
    _objc_end_catch();
    pcVar11 = (char *)0x0;
  }
  __Unwind_Resume();
  pppuVar8 = &ppuStack_140;
  pcStack_118 = FUN_10571d9e0;
  puStack_138 = PTR_PTR_1126e9f40;
  ppuStack_140 = ppuVar5;
  ppuStack_130 = param_4;
  ppuStack_128 = ppuVar9;
  ppuStack_120 = &puStack_90;
  _objc_msgSendSuper2(&ppuStack_140,PTR_s_init_1125d9248);
  if (pppuVar8 != (undefined ***)0x0) {
    pcVar1 = (char *)pppuVar8;
    (*(code *)PTR_DAT_113403208)();
    *(char **)((long)pppuVar8 + 8) = pcVar1;
  }
  return (char *)pppuVar8;
}



/* Entry: 10571d78c; end: 10571d9df; +[SCActivityFeedSyncApiExceptionCatcher createActivityFeedSyncApiWithJSRuntime:error:] */

undefined1 *
FUN_10571d78c(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined **ppuStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined **ppuStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126bd738;
  func_0x00010bfbc0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010bf54620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
  if ((param_4 != (undefined8 *)0x0) && (puVar9 == (undefined *)0x0)) {
    uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_60 = &PTR____CFConstantStringClassReference_110df9998;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar3;
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  while( true ) {
    ppuVar4 = param_3;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
      return puVar9;
    }
    ___stack_chk_fail();
    if ((int)param_2 != 1) break;
    _objc_begin_catch();
    _objc_retain();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (param_4 != (undefined8 *)0x0) {
      uStack_88 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuVar5 = ppuVar4;
      func_0x00010c121ea0();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_78 = &PTR____CFConstantStringClassReference_110df99b8;
      if (ppuVar5 != (undefined **)0x0) {
        ppuStack_78 = ppuVar5;
      }
      ppuStack_80 = &PTR____CFConstantStringClassReference_110df99d8;
      ppuVar6 = ppuVar4;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      ppuStack_70 = &PTR____CFConstantStringClassReference_110daafd8;
      if (ppuVar6 != (undefined **)0x0) {
        ppuStack_70 = ppuVar6;
      }
      puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar3;
      _objc_release(puVar1);
      _objc_release(ppuVar6);
      _objc_release(ppuVar5);
    }
    _objc_release(ppuVar4);
    _objc_end_catch();
    puVar9 = (undefined *)0x0;
  }
  __Unwind_Resume();
  pppuVar7 = &ppuStack_c0;
  pcStack_98 = FUN_10571d9e0;
  puStack_b8 = PTR_PTR_1126e9f40;
  ppuStack_c0 = ppuVar4;
  puStack_b0 = param_4;
  ppuStack_a8 = param_3;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_c0,PTR_s_init_1125d9248);
  if (pppuVar7 != (undefined ***)0x0) {
    puVar8 = (undefined1 *)pppuVar7;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)pppuVar7 + 8) = puVar8;
  }
  return (undefined1 *)pppuVar7;
}



/* Entry: 10571d9e0; end: 10571da53; -[SCGrapheneDuplexMessageMetric2 init] */

undefined1 * FUN_10571d9e0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9f40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10571da54; end: 10571dbc7;  */

long ** FUN_10571da54(long param_1,long **param_2,undefined1 *param_3)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  long **pplVar4;
  long **pplVar5;
  long **pplVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *unaff_x22;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar9 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = param_2;
  puVar8 = param_3;
  _objc_retain(param_2);
  iVar7 = (int)pplVar4;
  plVar10 = (long *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (long **)0x0) {
      pcVar3 = "";
    }
    else {
      pcVar3 = (char *)param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,pcVar3);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    iVar7 = 0x108ad380;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108ad380,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar8 = (undefined1 *)puVar9;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = (undefined1 *)puVar9;
      unaff_x22 = &uStack_80;
    }
  }
  pplVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_2);
    pplVar5 = pplVar4;
    __Unwind_Resume();
    pcStack_88 = FUN_10571dbc8;
    lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pplVar6 = (long **)0x0;
    puStack_b0 = (undefined1 *)unaff_x22;
    plStack_a8 = plVar10;
    pplStack_a0 = pplVar4;
    pplStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    if (pplVar5 != (long **)0x0) {
      plVar10 = pplVar5[1];
      pcVar3 = "true";
      if (iVar7 == 0) {
        pcVar3 = "false";
      }
      func_0x00010002b838(applStack_d0,pcVar3);
      alStack_f0[0] = 0;
      alStack_f0[1] = 0;
      alStack_f0[2] = 0;
      func_0x00010007e1e8(alStack_f0,applStack_d0,&lStack_b8,1);
      (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_1108ad3d0,alStack_f0,puVar8);
      pplVar6 = &plStack_d8;
      plStack_d8 = alStack_f0;
      func_0x00010007e5dc();
      plVar10 = alStack_f0;
      if (cStack_b9 < '\0') {
        pplVar6 = applStack_d0[0];
        __ZdlPv();
        plVar10 = alStack_f0;
      }
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_b8) {
      ___stack_chk_fail();
      plStack_d8 = plVar10;
      func_0x00010007e5dc(&plStack_d8);
      if (cStack_b9 < '\0') {
        __ZdlPv(applStack_d0[0]);
      }
      __Unwind_Resume(pplVar6);
      if (pplRam00000001136bfb68 == (long **)0x0) {
        pplVar4 = (long **)PTR_PTR_1126ae980;
        func_0x00010bf00e00();
        do {
          if (pplRam00000001136bfb68 != (long **)0x0) {
            ClearExclusiveLocal();
            _objc_release();
            return pplRam00000001136bfb68;
          }
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(0x1136bfb68,0x10);
          if (bVar2) {
            cVar1 = ExclusiveMonitorsStatus();
            pplRam00000001136bfb68 = pplVar4;
          }
        } while (cVar1 != '\0');
      }
      return pplRam00000001136bfb68;
    }
    return pplVar6;
  }
  return pplVar4;
}



/* Entry: 10571dbc8; end: 10571dcdf;  */

undefined1 ** FUN_10571dbc8(long param_1,int param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 **ppuVar4;
  long *plVar5;
  undefined8 *unaff_x21;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar4 = (undefined1 **)0x0;
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    pcVar1 = "true";
    if (param_2 == 0) {
      pcVar1 = "false";
    }
    func_0x00010002b838(appuStack_50,pcVar1);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x00010007e1e8(&uStack_70,appuStack_50,&lStack_38,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_1108ad3d0,&uStack_70,param_3);
    ppuVar4 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x00010007e5dc();
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar4 = appuStack_50[0];
      __ZdlPv();
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puStack_58 = (undefined1 *)unaff_x21;
    func_0x00010007e5dc(&puStack_58);
    if (cStack_39 < '\0') {
      __ZdlPv(appuStack_50[0]);
    }
    __Unwind_Resume(ppuVar4);
    if (ppuRam00000001136bfb68 == (undefined1 **)0x0) {
      ppuVar4 = (undefined1 **)PTR_PTR_1126ae980;
      func_0x00010bf00e00();
      do {
        if (ppuRam00000001136bfb68 != (undefined1 **)0x0) {
          ClearExclusiveLocal();
          _objc_release();
          return ppuRam00000001136bfb68;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(0x1136bfb68,0x10);
        if (bVar3) {
          cVar2 = ExclusiveMonitorsStatus();
          ppuRam00000001136bfb68 = ppuVar4;
        }
      } while (cVar2 != '\0');
    }
    return ppuRam00000001136bfb68;
  }
  return ppuVar4;
}



/* Entry: 10571dce0; end: 10571dd5b;  */

undefined * FUN_10571dce0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136bfb68 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110df99f8,
                        &UNK_10ddbc7b4,&UNK_10ddbc7cc,4,FUN_10571dd5c,0);
    do {
      if (puRam00000001136bfb68 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136bfb68;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136bfb68,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136bfb68 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136bfb68;
}



/* Entry: 10571dd5c; end: 10571dd67;  */

bool FUN_10571dd5c(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 10571dd68; end: 10571ddcf; +[SCAdsNotificationCenterInAppBadgeUpdatePayload descriptor] */

void FUN_10571dd68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136bfb70 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112a5dce0,
                        &PTR____CFConstantStringClassReference_110df9a18,&PTR_DAT_1130f7510,
                        &PTR_s_timestamp_1130f7528,2,0x10,0x1c);
    puRam00000001136bfb70 = puVar1;
  }
  return;
}



/* Entry: 10571ddd0; end: 10571dee3; -[SCFriendNotificationAddFriendsButtonBadgeRepository initWithUserId:userPreferences:applicationLifecycleEvents:appLifeCycleManager:friendingBadgeMutator:appStartExperimentReader:] */

undefined8
FUN_10571ddd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010bfef900();
  func_0x00010c05bee0(param_1,param_2,param_3,param_4,param_5,puVar1,param_6,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10571dee4; end: 10571e287; -[SCFriendNotificationAddFriendsButtonBadgeRepository initWithUserId:userPreferences:applicationLifecycleEvents:extensionSharedFile:appLifeCycleManager:friendingBadgeMutator:appStartExperimentReader:] */

undefined8 *
FUN_10571dee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_80 = PTR_PTR_1126e9f48;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    uVar2 = param_7;
    func_0x00010c269d40(param_7);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126bd748;
    func_0x00010bef8b80(PTR_PTR_1126bd748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb9320(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126ae970;
    func_0x00010bfe2ec0(PTR_PTR_1126ae970);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[2];
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10571e288;
    puStack_a0 = &UNK_1108434b0;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010c2a1620(uVar2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(uVar2);
    uVar2 = puVar1[2];
    _objc_copyWeak(auStack_c0,auStack_90);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10571e288; end: 10571e2df;  */

void FUN_10571e288(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec6ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10571e2e0; end: 10571e49f; -[SCFriendNotificationAddFriendsButtonBadgeRepository _subscribeOnAppLifecycleEventsIfNecessary] */

void FUN_10571e2e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2a6420(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10571e4a0;
  puStack_78 = &UNK_110846510;
  _objc_copyWeak(auStack_70,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf72840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_68);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  return;
}



/* Entry: 10571e4a0; end: 10571e4f7;  */

void FUN_10571e4a0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be862c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10571e4f8; end: 10571e733; -[SCFriendNotificationAddFriendsButtonBadgeRepository _readAddFriendsButtonBadgeInfoFromSharedFileAndClear] */

void FUN_10571e4f8(long param_1)

{
  int iVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  
  lVar2 = param_1;
  func_0x00010bddd680();
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfacbc0();
  if (iVar1 == 0) {
    ppuVar8 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar3 = (undefined **)PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
    _objc_alloc();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c121280(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeea60();
    _objc_release(uVar4);
    func_0x00010c1ec620(ppuVar3);
    ppuVar5 = ppuVar3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    ppuVar7 = ppuVar5;
    _objc_opt_isKindOfClass(ppuVar5,puVar6);
    ppuVar8 = ppuVar5;
    if (((ulong)ppuVar7 & 1) == 0) {
      ppuVar8 = (undefined **)0x0;
    }
    _objc_retain(ppuVar8);
    _objc_release(ppuVar5);
    _objc_release(ppuVar3);
  }
  if ((int)lVar2 != 0) {
    ppuVar3 = ppuVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (ppuVar3 == (undefined **)0x0) {
      func_0x00010c1d0640(ppuVar8);
    }
    else {
      ppuVar3 = ppuVar8;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      ppuVar5 = ppuVar3;
      _objc_opt_isKindOfClass(ppuVar3,puVar6);
      if (((ulong)ppuVar5 & 1) == 0) {
        ppuVar5 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c15a0;
      }
      else {
        ppuVar5 = ppuVar8;
        func_0x00010c0e00e0(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(ppuVar3);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c067ec0(ppuVar5);
      func_0x00010c0df760(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(ppuVar8);
      _objc_release(puVar6);
      _objc_release(ppuVar5);
    }
  }
  ppuVar3 = ppuVar8;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar3;
  func_0x00010bf529e0();
  _objc_release(ppuVar3);
  if (ppuVar5 != (undefined **)0x0) {
    func_0x00010bed3e00(param_1);
  }
  func_0x00010bdfa020(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar8);
  return;
}



/* Entry: 10571e734; end: 10571e97b; -[SCFriendNotificationAddFriendsButtonBadgeRepository _updateBadgeWithSavedBadgeInfo:] */

undefined * FUN_10571e734(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (puVar3 == (undefined *)0x0) {
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
        return param_3;
      }
      ___stack_chk_fail();
      puVar9 = PTR_PTR_1126b7490;
      _objc_alloc(PTR_PTR_1126b7490);
      func_0x00010bfef900();
      puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
      _objc_alloc();
      puVar3 = puVar9;
      func_0x00010c121280(puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfeea60();
      _objc_release(puVar3);
      func_0x00010c1ec620(puVar4);
      puVar6 = puVar4;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar7 = puVar6;
      _objc_opt_isKindOfClass(puVar6,puVar3);
      puVar3 = puVar6;
      if (((ulong)puVar7 & 1) == 0) {
        puVar3 = (undefined *)0x0;
      }
      _objc_retain(puVar3);
      _objc_release(puVar6);
      puVar6 = puVar3;
      func_0x00010c0720c0(puVar3);
      _objc_release(puVar3);
      func_0x00010bdfa020(param_3);
      _objc_release(puVar4);
      _objc_release(puVar9);
      return puVar6;
    }
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      iVar10 = (int)*(undefined8 *)((long)puVar9 * 8);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      iVar2 = iVar10;
      func_0x00010c0720c0();
      _objc_release(puVar4);
      if (iVar2 == 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        _objc_release(puVar4);
        if (iVar10 != 0) {
          uVar5 = *(undefined8 *)(param_1 + 0x38);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126bd750;
          _objc_alloc(PTR_PTR_1126bd750);
          puVar6 = PTR_PTR_1126bd758;
          func_0x00010c0f7620(PTR_PTR_1126bd758);
          _objc_retainAutoreleasedReturnValue();
          goto LAB_10571e8b4;
        }
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x38);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126bd750;
        _objc_alloc(PTR_PTR_1126bd750);
        puVar6 = PTR_PTR_1126bd758;
        func_0x00010bf4a680(PTR_PTR_1126bd758);
        _objc_retainAutoreleasedReturnValue();
LAB_10571e8b4:
        puVar7 = PTR_PTR_1126bd760;
        func_0x00010c0db140(PTR_PTR_1126bd760);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c056040(puVar4);
        func_0x00010c066680(uVar5);
        _objc_release(puVar4);
        _objc_release(puVar7);
        _objc_release(puVar6);
        _objc_release(uVar5);
      }
      puVar9 = puVar9 + 1;
    } while (puVar3 != puVar9);
    puVar3 = param_3;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10571e97c; end: 10571eaa7; -[SCFriendNotificationAddFriendsButtonBadgeRepository _checkDeprecatedSharedFileAndClear] */

undefined * FUN_10571e97c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7490;
  _objc_alloc(PTR_PTR_1126b7490);
  func_0x00010bfef900();
  puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1126aef98;
  _objc_alloc();
  puVar3 = puVar1;
  func_0x00010c121280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfeea60();
  _objc_release(puVar3);
  func_0x00010c1ec620(puVar2);
  puVar4 = puVar2;
  func_0x00010bf67000();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar5 = puVar4;
  _objc_opt_isKindOfClass(puVar4,puVar3);
  puVar3 = puVar4;
  if (((ulong)puVar5 & 1) == 0) {
    puVar3 = (undefined *)0x0;
  }
  _objc_retain(puVar3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010c0720c0(puVar3);
  _objc_release(puVar3);
  func_0x00010bdfa020(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar4;
}



/* Entry: 10571eaa8; end: 10571eaf7; -[SCFriendNotificationAddFriendsButtonBadgeRepository _deleteExtensionFile:] */

void FUN_10571eaa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfacbc0();
  if ((int)uVar1 != 0) {
    uStack_28 = 0;
    func_0x00010bf6bde0(param_3,param_2,&uStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10571eaf8; end: 10571eb6f; -[SCFriendNotificationAddFriendsButtonBadgeRepository .cxx_destruct] */

void FUN_10571eaf8(long param_1)

{
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



/* Entry: 10571eb70; end: 10571f07f; -[SCFriendNotificationProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571eb70(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
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
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  
  lVar1 = param_1 + _DAT_112728744;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar28 = (long)_DAT_112728748;
  lVar1 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010bf15380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010c129440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bd768;
  _objc_alloc();
  lVar1 = param_1 + _DAT_11272874c;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = (long)_DAT_112728750;
  lVar27 = param_1 + lVar24;
  _objc_loadWeakRetained(lVar27);
  lVar8 = lVar27;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112728754;
  _objc_loadWeakRetained(lVar9);
  lVar10 = lVar9;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_1 + _DAT_112728758;
  _objc_loadWeakRetained(lVar11);
  lVar12 = lVar11;
  func_0x00010bf058c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05bec0(puVar5,param_2,lVar7,lVar8,lVar10,lVar12,lVar3,lVar2);
  uVar25 = *(undefined8 *)(param_1 + _DAT_11272875c);
  *(undefined **)(param_1 + _DAT_11272875c) = puVar5;
  _objc_release(uVar25);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar27);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126bd770;
  _objc_alloc();
  lVar1 = param_1 + _DAT_112728760;
  _objc_loadWeakRetained(lVar1);
  lVar27 = lVar1;
  func_0x00010bf05240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05cd80(puVar5,param_2,lVar27);
  _objc_release(lVar27);
  _objc_release(lVar1);
  puVar13 = PTR_PTR_1126bd778;
  _objc_alloc();
  lVar27 = (long)_DAT_112728764;
  lVar1 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = param_1 + lVar27;
  _objc_loadWeakRetained();
  lVar14 = lVar27;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_112728768;
  _objc_loadWeakRetained();
  lVar15 = lVar9;
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = (long)_DAT_11272876c;
  lVar11 = param_1 + lVar26;
  _objc_loadWeakRetained();
  lVar16 = lVar11;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112728770;
  _objc_loadWeakRetained();
  lVar17 = lVar6;
  func_0x00010bf50600();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_112728774;
  _objc_loadWeakRetained();
  lVar18 = lVar7;
  func_0x00010bf8d9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + lVar24;
  _objc_loadWeakRetained();
  lVar19 = lVar24;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_112728778;
  _objc_loadWeakRetained();
  lVar21 = lVar8;
  func_0x00010bfb95c0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_11272877c;
  _objc_loadWeakRetained();
  lVar22 = lVar10;
  func_0x00010bfebf80();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = param_1 + lVar28;
  _objc_loadWeakRetained();
  lVar23 = lVar28;
  func_0x00010bf15360();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04a020(puVar13,param_2,lVar12,lVar14,lVar15,lVar16,lVar17,lVar18,lVar20,lVar2,lVar21,
                      lVar22,puVar5,lVar3,lVar4,lVar23);
  uVar25 = *(undefined8 *)(param_1 + _DAT_112728780);
  *(undefined **)(param_1 + _DAT_112728780) = puVar13;
  _objc_release(uVar25);
  _objc_release(lVar23);
  _objc_release(lVar28);
  _objc_release(lVar22);
  _objc_release(lVar10);
  _objc_release(lVar21);
  _objc_release(lVar8);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar24);
  _objc_release(lVar18);
  _objc_release(lVar7);
  _objc_release(lVar17);
  _objc_release(lVar6);
  _objc_release(lVar16);
  _objc_release(lVar11);
  _objc_release(lVar15);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar27);
  _objc_release(lVar12);
  _objc_release(lVar1);
  param_1 = param_1 + lVar26;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befabc0();
  _objc_release(lVar27);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10571f080; end: 10571f133; -[SCFriendNotificationProcessorEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571f080(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  lVar1 = param_1 + _DAT_11272876c;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf05c00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12dd20();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_48 = PTR_PTR_1126e9f50;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10571f134; end: 10571f21b; -[SCFriendNotificationProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571f134(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112728748);
  _objc_destroyWeak(param_1 + _DAT_11272877c);
  _objc_destroyWeak(param_1 + _DAT_112728778);
  _objc_destroyWeak(param_1 + _DAT_112728758);
  _objc_destroyWeak(param_1 + _DAT_112728744);
  _objc_destroyWeak(param_1 + _DAT_112728760);
  _objc_destroyWeak(param_1 + _DAT_112728750);
  _objc_destroyWeak(param_1 + _DAT_112728774);
  _objc_destroyWeak(param_1 + _DAT_112728764);
  _objc_destroyWeak(param_1 + _DAT_11272876c);
  _objc_destroyWeak(param_1 + _DAT_112728770);
  _objc_destroyWeak(param_1 + _DAT_112728768);
  _objc_destroyWeak(param_1 + _DAT_112728754);
  _objc_destroyWeak(param_1 + _DAT_11272874c);
  _objc_storeStrong(param_1 + _DAT_11272875c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112728780,0);
  return;
}



/* Entry: 10571f21c; end: 10571f53f; -[SCFriendingInAppNonSDNNotificationProcessor initWithSnapchattersSynchronousDataFetcher:snapchattersDataMutator:conversationIdResolver:notificationManager:chatConversationManager:userEmailMutator:userPreferences:appStartExperimentReader:friendingNotificationProcessor:incomingFriendsSyncer:friendingUserDefaults:friendingBadgeMutator:friendingReminderPinMutator:friendingBadgeLoggingInfo:] */

undefined8 *
FUN_10571f21c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  puStack_68 = PTR_PTR_1126e9f58;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    _objc_storeWeak(puVar1 + 4,param_6);
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
    _objc_retain(param_11);
    uVar2 = puVar1[8];
    puVar1[8] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar2);
  }
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



/* Entry: 10571f540; end: 10571f737; -[SCFriendingInAppNonSDNNotificationProcessor shouldFilterNotification:] */

long FUN_10571f540(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11c420();
  if ((lVar1 == 0x17) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x18)) {
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c292820(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf792c0(uVar2,param_2,lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010c15df60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = param_3;
    func_0x00010c11c420();
    _objc_release(lVar1);
    if (lVar3 != 7) {
      lVar1 = param_3;
      func_0x00010c11c420();
      if (lVar1 == 0xe) {
        lVar4 = *(long *)(param_1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_3;
        func_0x00010c15df60(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010c0ee940(lVar4,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        if (lVar3 == 0) {
          _objc_release(lVar1);
          _objc_release(lVar4);
        }
        else {
          lVar5 = *(long *)(param_1 + 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = param_3;
          func_0x00010c15df60(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar5;
          func_0x00010bfebfe0(lVar5,param_2,lVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar3);
          _objc_release(lVar1);
          _objc_release(lVar4);
          if (lVar7 != 0) {
            param_1 = 1;
            goto LAB_10571f714;
          }
        }
      }
      lVar1 = param_3;
      func_0x00010c11c420();
      if ((lVar1 == 0x17) || (lVar1 = param_3, func_0x00010c11c420(), lVar1 == 0x18)) {
        func_0x00010beb3be0(param_1,param_2,param_3);
        goto LAB_10571f714;
      }
    }
  }
  param_1 = 0;
LAB_10571f714:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10571f738; end: 10571f78f; -[SCFriendingInAppNonSDNNotificationProcessor _shouldFilterAvailableSuggestionsOrRecentlyJoinersNotification:] */

bool FUN_10571f738(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(param_3);
  return lVar1 == 0;
}



/* Entry: 10571f790; end: 10571f933; -[SCFriendingInAppNonSDNNotificationProcessor processNotification:] */

void FUN_10571f790(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010beb26a0();
  if ((int)lVar1 != 0) {
    func_0x00010bed8860(param_1);
  }
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0xf) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bd780;
    func_0x00010bfab700(PTR_PTR_1126bd780);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2940(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0xe) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126bb6f8;
    func_0x00010bfa6d80(PTR_PTR_1126bb6f8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd2900(uVar2);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    func_0x00010bec9aa0(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3bea0();
    _objc_release(uVar2);
  }
  lVar1 = param_3;
  func_0x00010c11c420();
  if (lVar1 == 0x10) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c122280();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10571f934; end: 10571f937;  */

void FUN_10571f934(void)

{
  return;
}



/* Entry: 10571f938; end: 10571f977; -[SCFriendingInAppNonSDNNotificationProcessor _syncIncomingFriends] */

void FUN_10571f938(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10571f978; end: 10571f97b;  */

void FUN_10571f978(void)

{
  return;
}



/* Entry: 10571f97c; end: 10571f9b3; -[SCFriendingInAppNonSDNNotificationProcessor _shouldAlwaysShowAddFriendsBadgeForNotification:] */

bool FUN_10571f97c(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c11c420();
  return param_3 - 0x17U < 2 || (param_3 == 0x94 || param_3 == 0x99);
}



/* Entry: 10571f9b4; end: 10571fd0b; -[SCFriendingInAppNonSDNNotificationProcessor _updateFriendingBadgeInfo:] */

void FUN_10571f9b4(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_3;
  func_0x00010c11c420();
  if (puVar2 == (undefined *)0x94) {
    uVar3 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126bd750;
    _objc_alloc(PTR_PTR_1126bd750);
    puVar4 = PTR_PTR_1126bd758;
    func_0x00010c0f7620(PTR_PTR_1126bd758);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126bd760;
    func_0x00010c0db140(PTR_PTR_1126bd760);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056040(puVar2);
    func_0x00010c066680(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(uVar3);
    puVar4 = param_3;
    func_0x00010c117f80();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar4 != (undefined *)0x0) {
      puVar2 = puVar4;
    }
    _objc_retain(puVar2);
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    puVar4 = puVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        uVar8 = *(ulong *)((long)puVar9 * 8);
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_opt_isKindOfClass(uVar8,puVar6);
        if ((uVar8 & 1) != 0) {
          func_0x00010befa120(puVar5);
        }
        puVar9 = puVar9 + 1;
      } while (puVar4 != puVar9);
      puVar4 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0fa140();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0(puVar2);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0adfa0(uVar3);
    _objc_release(puVar4);
    _objc_release(uVar3);
    _objc_release(puVar5);
  }
  else {
    if (puVar2 != (undefined *)0x99) goto LAB_10571fcc8;
    puVar2 = *(undefined **)(param_1 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126bd750;
    _objc_alloc(PTR_PTR_1126bd750);
    puVar5 = PTR_PTR_1126bd758;
    func_0x00010bf4a680(PTR_PTR_1126bd758);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126bd760;
    func_0x00010c0db140(PTR_PTR_1126bd760);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c056040(puVar4);
    func_0x00010c066680(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar9);
    _objc_release(puVar5);
  }
  _objc_release(puVar2);
LAB_10571fcc8:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x70,0);
  _objc_storeStrong(param_3 + 0x68,0);
  _objc_storeStrong(param_3 + 0x60,0);
  _objc_storeStrong(param_3 + 0x58,0);
  _objc_storeStrong(param_3 + 0x50,0);
  _objc_storeStrong(param_3 + 0x48,0);
  _objc_storeStrong(param_3 + 0x40,0);
  _objc_storeStrong(param_3 + 0x38,0);
  _objc_storeStrong(param_3 + 0x30,0);
  _objc_storeStrong(param_3 + 0x28,0);
  _objc_destroyWeak(param_3 + 0x20);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 10571fd0c; end: 10571fdc7; -[SCFriendingInAppNonSDNNotificationProcessor .cxx_destruct] */

void FUN_10571fd0c(long param_1)

{
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
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


