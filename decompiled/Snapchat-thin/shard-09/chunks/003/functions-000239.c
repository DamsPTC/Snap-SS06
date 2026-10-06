/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106c4bd10; end: 106c4bd17;  */

void FUN_106c4bd10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106c4bd18; end: 106c4be3b;  */

undefined * FUN_106c4bd18(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_2);
  iVar1 = 0x111811c0;
  FUN_106c4be3c(&PTR__OBJC_CLASS___NSConstantArray_1111811c0,1,param_2);
  if (iVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retainAutorelease(uVar2);
    func_0x00010bed1e80();
    _os_unfair_lock_lock();
    puVar3 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010c077480();
      if ((int)puVar3 == 0) {
        puVar3 = (undefined *)0x1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
        func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar4;
        func_0x00010c2633c0();
        _objc_release(puVar4);
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df6e0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        uVar5 = *(undefined8 *)(lVar6 + 0x28);
        *(undefined **)(lVar6 + 0x28) = puVar4;
        _objc_release(uVar5);
      }
    }
    else {
      func_0x00010bf1f3c0();
    }
    _os_unfair_lock_unlock(uVar2);
  }
  _objc_release(param_2);
  return puVar3;
}



/* Entry: 106c4be3c; end: 106c4bf77;  */

bool FUN_106c4be3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_3);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      bVar5 = true;
LAB_106c4bf24:
      _objc_release(param_1);
      _objc_release(param_3);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return bVar5;
      }
      ___stack_chk_fail();
      lVar4 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar4;
      func_0x00010bf60aa0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010c260a00();
      _objc_release(lVar1);
      _objc_release(lVar4);
      return lVar3 != 4;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(param_1);
      }
      uVar2 = param_3;
      func_0x00010bf1f440();
      if ((int)uVar2 == 0) {
        bVar5 = false;
        goto LAB_106c4bf24;
      }
      lVar6 = lVar6 + 1;
    } while (lVar1 != lVar6);
    lVar1 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 106c4bf78; end: 106c4c073;  */

bool FUN_106c4bf78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c260a00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 4;
}



/* Entry: 106c4c074; end: 106c4c07b;  */

undefined1 FUN_106c4c074(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 106c4c07c; end: 106c4c0df;  */

bool FUN_106c4c07c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c260a00();
  _objc_release(lVar2);
  _objc_release(lVar1);
  return lVar3 != 4;
}



/* Entry: 106c4c0e0; end: 106c4c13b;  */

void FUN_106c4c0e0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0x111811d8;
  FUN_106c4be3c(&PTR__OBJC_CLASS___NSConstantArray_1111811d8,0,param_2);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077f00();
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 106c4c13c; end: 106c4c153;  */

undefined8 FUN_106c4c13c(void)

{
  return 0;
}



/* Entry: 106c4c154; end: 106c4c15b; -[SCPlusFeatureGatingImpl appIcon] */

void FUN_106c4c154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x90),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c15c; end: 106c4c163; -[SCPlusFeatureGatingImpl closestFriendScore] */

void FUN_106c4c15c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xa0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c164; end: 106c4c16b; -[SCPlusFeatureGatingImpl pinBestFriend] */

void FUN_106c4c164(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xa8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c16c; end: 106c4c173; -[SCPlusFeatureGatingImpl postViewEmoji] */

void FUN_106c4c16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c174; end: 106c4c17b; -[SCPlusFeatureGatingImpl storyRewatch] */

void FUN_106c4c174(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xb8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c17c; end: 106c4c183; -[SCPlusFeatureGatingImpl exclusiveProfileBackground] */

void FUN_106c4c17c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 200),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c184; end: 106c4c18b; -[SCPlusFeatureGatingImpl priorityStoryReplies] */

void FUN_106c4c184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xc0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c18c; end: 106c4c193; -[SCPlusFeatureGatingImpl myStoryCustomTTL] */

void FUN_106c4c18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xd8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c194; end: 106c4c19b; -[SCPlusFeatureGatingImpl customStoryCustomTTL] */

void FUN_106c4c194(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c19c; end: 106c4c1a3; -[SCPlusFeatureGatingImpl customNotificationSounds] */

void FUN_106c4c19c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xe8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c1a4; end: 106c4c1ab; -[SCPlusFeatureGatingImpl friendSnapscoreChange] */

void FUN_106c4c1a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xf0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c1ac; end: 106c4c1b3; -[SCPlusFeatureGatingImpl chatWallpapers] */

void FUN_106c4c1ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0xf8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c1b4; end: 106c4c1bb; -[SCPlusFeatureGatingImpl gifting] */

void FUN_106c4c1b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x110),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c1bc; end: 106c4c387; -[SCPlusFeatureGatingImpl giftingPurchasingEnabled] */

undefined * FUN_106c4c1bc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lStack_58;
  
  lVar1 = *(long *)(param_1 + 0x110);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252440();
  if (lVar3 == 0) {
    puVar9 = (undefined *)0x0;
    goto LAB_106c4c358;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1195e0(uVar4,param_2,&PTR____CFConstantStringClassReference_110e7b7f8,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126d1a28;
  _objc_alloc();
  uVar6 = uVar4;
  func_0x00010c296d80(uVar4);
  _objc_retainAutoreleasedReturnValue();
  lStack_58 = 0;
  func_0x00010c008360(puVar5,param_2,uVar6,&lStack_58);
  lVar3 = lStack_58;
  _objc_release(uVar6);
  if (lVar3 == 0) {
    puVar9 = PTR__OBJC_CLASS___SKPaymentQueue_1126c00b8;
    func_0x00010bf6a0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar9;
    func_0x00010c257f60();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    func_0x00010bf53280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar9);
    if (puVar8 == (undefined *)0x0) {
LAB_106c4c33c:
      puVar9 = (undefined *)0x1;
    }
    else {
      puVar9 = puVar5;
      func_0x00010bf01960();
      puVar7 = puVar5;
      if (puVar9 == (undefined *)0x0) {
        puVar9 = puVar5;
        func_0x00010bf6d900();
        if (puVar9 == (undefined *)0x0) goto LAB_106c4c33c;
        func_0x00010bf6d8e0(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf4b900();
        puVar9 = (undefined *)(ulong)((uint)puVar9 ^ 1);
      }
      else {
        func_0x00010bf01940(puVar5);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf4b900();
      }
      _objc_release(puVar7);
    }
    _objc_release(puVar8);
  }
  else {
    puVar9 = (undefined *)0x1;
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
LAB_106c4c358:
  _objc_release(lVar2);
  _objc_release(lVar1);
  return puVar9;
}



/* Entry: 106c4c388; end: 106c4c38f; -[SCPlusFeatureGatingImpl storyBoost] */

void FUN_106c4c388(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x118),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c390; end: 106c4c397; -[SCPlusFeatureGatingImpl merlin] */

void FUN_106c4c390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x120),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c398; end: 106c4c39f; -[SCPlusFeatureGatingImpl merlinBio] */

void FUN_106c4c398(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x128),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3a0; end: 106c4c3a7; -[SCPlusFeatureGatingImpl merlinUpgrade] */

void FUN_106c4c3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x150),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3a8; end: 106c4c3af; -[SCPlusFeatureGatingImpl mapAppearance] */

void FUN_106c4c3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x130),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3b0; end: 106c4c3b7; -[SCPlusFeatureGatingImpl replayAgain] */

void FUN_106c4c3b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x138),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3b8; end: 106c4c3bf; -[SCPlusFeatureGatingImpl freeStreakRestore] */

void FUN_106c4c3b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x140),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3c0; end: 106c4c3c7; -[SCPlusFeatureGatingImpl extendedBestFriends] */

void FUN_106c4c3c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x148),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3c8; end: 106c4c3cf; -[SCPlusFeatureGatingImpl aiMagicCaptions] */

void FUN_106c4c3c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x160),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3d0; end: 106c4c3d7; -[SCPlusFeatureGatingImpl customChatColors] */

void FUN_106c4c3d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x168),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3d8; end: 106c4c3df; -[SCPlusFeatureGatingImpl streakReminders] */

void FUN_106c4c3d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x170),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3e0; end: 106c4c3e7; -[SCPlusFeatureGatingImpl peekAPeek] */

void FUN_106c4c3e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x178),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3e8; end: 106c4c3ef; -[SCPlusFeatureGatingImpl aiCameraMode] */

void FUN_106c4c3e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x180),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3f0; end: 106c4c3f7; -[SCPlusFeatureGatingImpl snapscoreMultiplier] */

void FUN_106c4c3f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x188),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c3f8; end: 106c4c3ff; -[SCPlusFeatureGatingImpl exclusiveLenses] */

void FUN_106c4c3f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 400),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c400; end: 106c4c407; -[SCPlusFeatureGatingImpl storyTimestamps] */

void FUN_106c4c400(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1a0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c408; end: 106c4c40f; -[SCPlusFeatureGatingImpl petsInPresence] */

void FUN_106c4c408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1a8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c410; end: 106c4c427; -[SCPlusFeatureGatingImpl petsInPresenceChatUpsellEnabled] */

void FUN_106c4c410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b498,1,0);
  return;
}



/* Entry: 106c4c428; end: 106c4c42f; -[SCPlusFeatureGatingImpl storyViewerNotifications] */

void FUN_106c4c428(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1b0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c430; end: 106c4c437; -[SCPlusFeatureGatingImpl aiStoryReplies] */

void FUN_106c4c430(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1b8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c438; end: 106c4c43f; -[SCPlusFeatureGatingImpl lightningSnaps] */

void FUN_106c4c438(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1c0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c440; end: 106c4c447; -[SCPlusFeatureGatingImpl mutuallyPinnedBFF] */

void FUN_106c4c440(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1c8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c448; end: 106c4c44f; -[SCPlusFeatureGatingImpl customRingtones] */

void FUN_106c4c448(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1d0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c450; end: 106c4c457; -[SCPlusFeatureGatingImpl aiChatStickers] */

void FUN_106c4c450(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1d8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c458; end: 106c4c45f; -[SCPlusFeatureGatingImpl presenceHints] */

void FUN_106c4c458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1e0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c460; end: 106c4c467; -[SCPlusFeatureGatingImpl mapFootsteps] */

void FUN_106c4c460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1e8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c468; end: 106c4c46f; -[SCPlusFeatureGatingImpl replayOwnSnap] */

void FUN_106c4c468(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1f0),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c470; end: 106c4c477; -[SCPlusFeatureGatingImpl mapHomes] */

void FUN_106c4c470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x1f8),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c478; end: 106c4c47f; -[SCPlusFeatureGatingImpl friendReferrals] */

void FUN_106c4c478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x200),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c480; end: 106c4c487; -[SCPlusFeatureGatingImpl instantStreaks] */

void FUN_106c4c480(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x208),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c488; end: 106c4c48f; -[SCPlusFeatureGatingImpl snapModeOneTimeOnly] */

void FUN_106c4c488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x210),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c490; end: 106c4c497; -[SCPlusFeatureGatingImpl snapModeSelfDestruct] */

void FUN_106c4c490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x218),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c498; end: 106c4c49f; -[SCPlusFeatureGatingImpl buddyPass] */

void FUN_106c4c498(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x220),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c4a0; end: 106c4c4a7; -[SCPlusFeatureGatingImpl remixChatWallpaper] */

void FUN_106c4c4a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x228),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c4a8; end: 106c4c4af; -[SCPlusFeatureGatingImpl memoriesStorage] */

void FUN_106c4c4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x230),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c4b0; end: 106c4c4b7; -[SCPlusFeatureGatingImpl remixSticker] */

void FUN_106c4c4b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x238),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c4b8; end: 106c4c4cf; -[SCPlusFeatureGatingImpl remixStickerUpsellEnabled] */

void FUN_106c4c4b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b4b8,1,0);
  return;
}



/* Entry: 106c4c4d0; end: 106c4c4e7; -[SCPlusFeatureGatingImpl extendedBestFriendsDeeplinkEnabled] */

void FUN_106c4c4d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b4d8,0,0);
  return;
}



/* Entry: 106c4c4e8; end: 106c4c4ef; -[SCPlusFeatureGatingImpl genAIChatToSong] */

void FUN_106c4c4e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x248),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c4f0; end: 106c4c4f7; -[SCPlusFeatureGatingImpl aiFonts] */

void FUN_106c4c4f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x250),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c4f8; end: 106c4c4ff; -[SCPlusFeatureGatingImpl animatedSticker] */

void FUN_106c4c4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x198),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c500; end: 106c4c507; -[SCPlusFeatureGatingImpl comicStyleBitmoji] */

void FUN_106c4c500(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x240),PTR_s_target_112678178);
  return;
}



/* Entry: 106c4c508; end: 106c4c51f; -[SCPlusFeatureGatingImpl chatFeedAdsBaseTierUpsellEnabled] */

void FUN_106c4c508(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b4f8,0,0);
  return;
}



/* Entry: 106c4c520; end: 106c4c537; -[SCPlusFeatureGatingImpl composerSubscriptionRedemptionForceSyncFriends] */

void FUN_106c4c520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b518,0,0);
  return;
}



/* Entry: 106c4c538; end: 106c4c53f; -[SCPlusFeatureGatingImpl badgeEnabledByUser] */

void FUN_106c4c538(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x38),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c540; end: 106c4c587; -[SCPlusFeatureGatingImpl setBadgeEnabledByUser:] */

void FUN_106c4c540(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c588; end: 106c4c58f; -[SCPlusFeatureGatingImpl storyRewatchEnabledByUser] */

void FUN_106c4c588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c590; end: 106c4c5d7; -[SCPlusFeatureGatingImpl setStoryRewatchEnabledByUser:] */

void FUN_106c4c590(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x48));
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c5d8; end: 106c4c5df; -[SCPlusFeatureGatingImpl peekAPeekEnabledByUser] */

void FUN_106c4c5d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x60),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c5e0; end: 106c4c627; -[SCPlusFeatureGatingImpl setPeekAPeekEnabledByUser:] */

void FUN_106c4c5e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x178);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c628; end: 106c4c62f; -[SCPlusFeatureGatingImpl snapscoreMultiplierEnabledByUser] */

void FUN_106c4c628(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x68),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c630; end: 106c4c677; -[SCPlusFeatureGatingImpl setSnapscoreMultiplierEnabledByUser:] */

void FUN_106c4c630(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x68));
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c678; end: 106c4c67f; -[SCPlusFeatureGatingImpl closestFriendScoreEnabledByUser] */

void FUN_106c4c678(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c680; end: 106c4c6c7; -[SCPlusFeatureGatingImpl setClosestFriendScoreEnabledByUser:] */

void FUN_106c4c680(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c6c8; end: 106c4c6cf; -[SCPlusFeatureGatingImpl snapscoreChangeEnabledByUser] */

void FUN_106c4c6c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x50),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c6d0; end: 106c4c717; -[SCPlusFeatureGatingImpl setSnapscoreChangeEnabledByUser:] */

void FUN_106c4c6d0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x50));
  uVar1 = *(undefined8 *)(param_1 + 0xf0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c718; end: 106c4c71f; -[SCPlusFeatureGatingImpl extendedBestFriendsEnabledByUser] */

void FUN_106c4c718(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c720; end: 106c4c767; -[SCPlusFeatureGatingImpl setExtendedBestFriendsEnabledByUser:] */

void FUN_106c4c720(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x148);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c768; end: 106c4c76f; -[SCPlusFeatureGatingImpl storyTimestampsEnabledByUser] */

void FUN_106c4c768(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x70),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c770; end: 106c4c7b7; -[SCPlusFeatureGatingImpl setStoryTimestampsEnabledByUser:] */

void FUN_106c4c770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x70));
  uVar1 = *(undefined8 *)(param_1 + 0x1a0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c7b8; end: 106c4c7bf; -[SCPlusFeatureGatingImpl lightningSnapsEnabledByUser] */

void FUN_106c4c7b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x78),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c7c0; end: 106c4c807; -[SCPlusFeatureGatingImpl setLightningSnapsEnabledByUser:] */

void FUN_106c4c7c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x78));
  uVar1 = *(undefined8 *)(param_1 + 0x1c0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c808; end: 106c4c80f; -[SCPlusFeatureGatingImpl presenceHintsEnabledByUser] */

void FUN_106c4c808(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x80),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c810; end: 106c4c857; -[SCPlusFeatureGatingImpl setPresenceHintsEnabledByUser:] */

void FUN_106c4c810(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x80));
  uVar1 = *(undefined8 *)(param_1 + 0x1e0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c858; end: 106c4c85f; -[SCPlusFeatureGatingImpl instantStreaksEnabledByUser] */

void FUN_106c4c858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf926d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x88),PTR_s_enabled_1125c2358);
  return;
}



/* Entry: 106c4c860; end: 106c4c8a7; -[SCPlusFeatureGatingImpl setInstantStreaksEnabledByUser:] */

void FUN_106c4c860(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c195460(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x208);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be3da80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106c4c8a8; end: 106c4c8bf; -[SCPlusFeatureGatingImpl newToPlusEnabled] */

void FUN_106c4c8a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b538,1,0);
  return;
}



/* Entry: 106c4c8c0; end: 106c4c8d7; -[SCPlusFeatureGatingImpl plusPurchaseRequiresEmail] */

void FUN_106c4c8c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b558,0,0);
  return;
}



/* Entry: 106c4c8d8; end: 106c4c8ef; -[SCPlusFeatureGatingImpl fanPassSubscriptionsEnabled] */

void FUN_106c4c8d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b578,0,0);
  return;
}



/* Entry: 106c4c8f0; end: 106c4c907; -[SCPlusFeatureGatingImpl fanPassFriendEmojiEnabled] */

void FUN_106c4c8f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b598,0,0);
  return;
}



/* Entry: 106c4c908; end: 106c4c91f; -[SCPlusFeatureGatingImpl creatorSubscriptionsUseMockSubscription] */

void FUN_106c4c908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b5b8,0,0);
  return;
}



/* Entry: 106c4c920; end: 106c4c94b; -[SCPlusFeatureGatingImpl creatorSubscriptionsAccountManagementTreatment] */

long FUN_106c4c920(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e7b5d8,0,0);
  return (long)(int)uVar1;
}



/* Entry: 106c4c94c; end: 106c4c967; -[SCPlusFeatureGatingImpl creatorSubscriptionsAccountManagementEnabled] */

bool FUN_106c4c94c(long param_1)

{
  func_0x00010bf5ba00();
  return 0 < param_1;
}



/* Entry: 106c4c968; end: 106c4c983; -[SCPlusFeatureGatingImpl creatorSubscriptionsProfileUpsellShowToAll] */

bool FUN_106c4c968(long param_1)

{
  func_0x00010bf5ba00();
  return param_1 == 2;
}



/* Entry: 106c4c984; end: 106c4c99b; -[SCPlusFeatureGatingImpl animatedStickerEnabled] */

void FUN_106c4c984(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b358,0,0);
  return;
}



/* Entry: 106c4c99c; end: 106c4c9b3; -[SCPlusFeatureGatingImpl fhpCampaignFetchPrewarmEnabled] */

void FUN_106c4c99c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e7b5f8,0,0);
  return;
}



/* Entry: 106c4c9b4; end: 106c4c9df; -[SCPlusFeatureGatingImpl fanPassBackendSyncMaxRetryCount] */

long FUN_106c4c9b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e7b618,0,0);
  return (long)(int)uVar1;
}



/* Entry: 106c4c9e0; end: 106c4ca0b; -[SCPlusFeatureGatingImpl fanPassStoreKitPurchaseMaxRetryAttempts] */

long FUN_106c4c9e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c067f00(uVar1,param_2,&PTR____CFConstantStringClassReference_110e7b638,0,0);
  return (long)(int)uVar1;
}


